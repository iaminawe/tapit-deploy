<?php
/**
 * @file
 * tapit_incentives.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function tapit_incentives_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_incentive|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_incentive';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_incentive_category',
        2 => 'field_incentive_date',
        3 => 'field_incentive_hint',
        4 => 'field_incentive_tokens',
        5 => 'field_incentive_wholesalers',
        6 => 'field_incentive_type',
        7 => 'field_incentive_version',
        8 => 'field_debug_me',
      ),
      'right' => array(
        9 => 'field_incentive_region',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_incentive_category' => 'left',
      'field_incentive_date' => 'left',
      'field_incentive_hint' => 'left',
      'field_incentive_tokens' => 'left',
      'field_incentive_wholesalers' => 'left',
      'field_incentive_type' => 'left',
      'field_incentive_version' => 'left',
      'field_debug_me' => 'left',
      'field_incentive_region' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|product_incentive|default'] = $ds_layout;

  return $export;
}
