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
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_incentive_category',
        2 => 'field_incentive_date',
        3 => 'field_incentive_hint',
        4 => 'field_incentive_tokens',
        5 => 'field_incentive_region',
        6 => 'field_incentive_wholesalers',
        7 => 'field_incentive_type',
        8 => 'field_incentive_version',
        9 => 'field_debug_me',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_incentive_category' => 'ds_content',
      'field_incentive_date' => 'ds_content',
      'field_incentive_hint' => 'ds_content',
      'field_incentive_tokens' => 'ds_content',
      'field_incentive_region' => 'ds_content',
      'field_incentive_wholesalers' => 'ds_content',
      'field_incentive_type' => 'ds_content',
      'field_incentive_version' => 'ds_content',
      'field_debug_me' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|product_incentive|default'] = $ds_layout;

  return $export;
}
