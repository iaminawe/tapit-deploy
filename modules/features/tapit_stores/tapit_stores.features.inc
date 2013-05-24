<?php
/**
 * @file
 * tapit_stores.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tapit_stores_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tapit_stores_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function tapit_stores_flag_default_flags() {
  $flags = array();
  // Exported flag: "Flag for Visit".
  $flags['visit'] = array(
    'entity_type' => 'node',
    'title' => 'Flag for Visit',
    'global' => '0',
    'types' => array(
      0 => 'store',
    ),
    'flag_short' => 'Flag for Visit',
    'flag_long' => '',
    'flag_message' => 'Added to visit list',
    'unflag_short' => 'Cancel this visit',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_page' => 0,
    'show_on_teaser' => 1,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'tapit_stores',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Log Visit".
  $flags['visited'] = array(
    'entity_type' => 'node',
    'title' => 'Log Visit',
    'global' => '0',
    'types' => array(
      0 => 'store',
    ),
    'flag_short' => 'Log Visit',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Not yet visited',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'tapit_stores',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function tapit_stores_node_info() {
  $items = array(
    'store' => array(
      'name' => t('Store'),
      'base' => 'node_content',
      'description' => t('Add a trading store '),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
