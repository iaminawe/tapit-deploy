<?php
/**
 * @file
 * tapit_wholesalers.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tapit_wholesalers_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|wholesaler|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'wholesaler';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_wholesaler_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_wholesaler_stores' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Stores',
          'lb-el' => 'h2',
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|wholesaler|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|wholesaler|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'wholesaler';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|wholesaler|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tapit_wholesalers_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|wholesaler|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'wholesaler';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_wholesaler_logo',
        1 => 'field_wholesaler_user_ref',
        2 => 'field_wholesaler_telephone',
        3 => 'field_wholesaler_suppliers',
        4 => 'field_wholesaler_address',
        5 => 'field_wholesaler_region_ref',
      ),
      'left' => array(
        6 => 'field_trader_gps',
        7 => 'wholesalers_entity_view_1',
      ),
      'middle' => array(
        8 => 'field_wholesaler_stores',
      ),
      'right' => array(
        9 => 'wholesalers_entity_view_2',
      ),
    ),
    'fields' => array(
      'field_wholesaler_logo' => 'header',
      'field_wholesaler_user_ref' => 'header',
      'field_wholesaler_telephone' => 'header',
      'field_wholesaler_suppliers' => 'header',
      'field_wholesaler_address' => 'header',
      'field_wholesaler_region_ref' => 'header',
      'field_trader_gps' => 'left',
      'wholesalers_entity_view_1' => 'left',
      'field_wholesaler_stores' => 'middle',
      'wholesalers_entity_view_2' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|wholesaler|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|wholesaler|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'wholesaler';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_wholesaler_region_ref',
        2 => 'field_wholesaler_suppliers',
        3 => 'field_wholesaler_telephone',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_wholesaler_region_ref' => 'left',
      'field_wholesaler_suppliers' => 'left',
      'field_wholesaler_telephone' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|wholesaler|teaser'] = $ds_layout;

  return $export;
}
