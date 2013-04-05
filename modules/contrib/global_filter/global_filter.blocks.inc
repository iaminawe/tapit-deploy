<?php
/**
 * @file
 * global_filter.block.inc
 *
 * Block hooks for global_filter.module blocks.
 */

/**
 * Implements hook_block_info().
 */
function global_filter_block_info() {
  $num_filter_blocks = variable_get('global_filter_num_filters', GLOBAL_FILTER_DEF_NUM_FILTERS);
  for ($i = 1; $i <= $num_filter_blocks; $i++) {
    $info = variable_get("global_filter_$i");
    $blocks["global_filter_$i"] = array(
      'info' => t('Global filter @name', array('@name' => empty($info) ? "$i (not configured)" : $info)),
      'cache' => DRUPAL_NO_CACHE
    );
  }
  // For the case that the number of blocks is reduced.
  while ($i <= 10) {
    if ($field_name = variable_get("global_filter_$i")) {
      unset($_SESSION['global_filter'][$field_name]);
      _global_filter_remove_default_filter_from_views($field_name);
    }
    variable_del("global_filter_$i");
    variable_get("global_filter_$i" . '_set_on_init');
    $i++;
  }
  return $blocks;
}

/**
 * Implements hook_block_configure().
 */
function global_filter_block_configure($delta = '') {

  $form = array();
  $form['global_filter'] = array(
    '#type' => 'fieldset',
    '#title' => 'Global filter settings',
    '#collapsible' => FALSE
  );
  $form['global_filter'][$delta . '_uses_view'] = array(
    '#type' => 'radios',
    '#title' => t('Select whether this filter is to be populated by a field or by a view'),
    '#options' => array(
      0 => t('field (or node property)'),
      1 => t('view')
    ),
    '#default_value' => variable_get($delta . '_uses_view', 0)
  );
  // Add javascript to reveal the appropriate field or view selector depending
  // on the radio button selected.
  $path = drupal_get_path('module', 'global_filter');
  drupal_add_js($path . '/global_filter.js');

  $field_options = array_merge(
    array('' => t('- None -')),
    global_filter_get_node_properties(),
    global_filter_get_field_labels()
  );
  asort($field_options);
  $form['global_filter'][$delta . '_field'] = array(
    '#type' => 'select',
    '#title' => t('Choose the field to be used as a global filter'),
    '#default_value' => variable_get($delta . '_field'),
    '#options' => $field_options,
    '#description' => t('The property or field employed to populate the drop-down or text box used to filter views or other page elements on.'),
    '#attributes' => array(
      'id' => 'global-filter-selector-field',
    )
  );

  $view_options = array_merge(
    array('' => t('- None -')),
    global_filter_get_view_names()
  );
  asort($view_options);
  $form['global_filter'][$delta . '_view'] = array(
    '#type' => 'select',
    '#title' => t('Choose the view to be used as a global filter'),
    '#default_value' => variable_get($delta . '_view'),
    '#options' => $view_options,
    '#description' => t('The view employed to populate the drop-down used to filter views or other page elements on.'),
    '#attributes' => array(
      'id' => 'global-filter-selector-view',
    )
  );

  $form['global_filter'][$delta . '_option_all_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Text to appear as the "all" option, if the filter is rendered as a drop-down'),
    '#default_value' => variable_get($delta . '_option_all_text'),
    '#description' => t('If left blank "<strong>@all</strong>" (translated, where applicable) will be used.', array('@all' => GLOBAL_FILTER_DEF_OPTION_ALL_TEXT))
  );

  $form['global_filter'][$delta . '_set_on_init'] = array(
    '#type' => 'checkbox',
    '#title' => t("Guarantee that all dependent page elements immediately receive this global filter's newly selected value."),
    '#default_value' => variable_get($delta . '_set_on_init', FALSE),
    '#description' => t("Only tick this box, when you're finding that you need to refresh the page or set the global filter twice before the value is picked up by the depending page element. Should not be necessary for global filters used as contextual filter arguments in views.")
  );
  return $form;
}

/**
 * Implements hook_block_view().
 */
function global_filter_block_view($delta = '') {
  $block = array();
  $filter_name = variable_get($delta);
  if (drupal_substr($filter_name, 0, 4) == 'view') {
    $all_views = global_filter_get_view_names();
    $block['subject'] = drupal_substr($all_views[$filter_name], 6);
  }
  elseif (!empty($filter_name)) {
    $all_filters = array_merge(global_filter_get_node_properties(), global_filter_get_field_labels());
    $label = $all_filters[$filter_name];
    $pos_colon = strpos($label, ':');
    $pos_bracket = strrpos($label, '(');
    $block['subject'] = drupal_substr($label, $pos_colon + 2, $pos_bracket > $pos_colon ? $pos_bracket - $pos_colon - 3 : NULL);
  }
  $block['content'] = drupal_get_form($delta); // $delta becomes id="global-filter-2" on form
  return $block;
}

/**
 * Implements hook_block_save().
 */
function global_filter_block_save($delta = '', $edit = array()) {
  $uses_view = $edit[$delta . '_uses_view'];
  $new_field_name = $uses_view ? $edit[$delta . '_view'] : $edit[$delta . '_field'];

  variable_set($delta . '_uses_view', $uses_view);
  variable_set($delta . '_view', $edit[$delta . '_view']);
  variable_set($delta . '_field', $edit[$delta . '_field']);
  variable_set($delta . '_option_all_text', check_plain($edit[$delta . '_option_all_text']));
  variable_set($delta . '_set_on_init', $edit[$delta . '_set_on_init']);
  if (module_exists('views') && ($old_field_name = variable_get($delta)) && ($old_field_name != $new_field_name)) {
    _global_filter_remove_default_filter_from_views($old_field_name);
  }
  if (empty($new_field_name)) {
    variable_del($delta);
  }
  else {
    variable_set($delta, $new_field_name);
  }
}
