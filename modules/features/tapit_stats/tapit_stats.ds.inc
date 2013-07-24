<?php
/**
 * @file
 * tapit_stats.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tapit_stats_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|visit|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'visit';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|visit|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tapit_stats_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|visit|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'visit';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_visit_store',
        1 => 'field_visit_keywords',
        2 => 'field_visit_action_tax',
        3 => 'post_date',
      ),
    ),
    'fields' => array(
      'field_visit_store' => 'ds_content',
      'field_visit_keywords' => 'ds_content',
      'field_visit_action_tax' => 'ds_content',
      'post_date' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|visit|default'] = $ds_layout;

  return $export;
}
