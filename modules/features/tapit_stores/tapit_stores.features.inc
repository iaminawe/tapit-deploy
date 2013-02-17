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
