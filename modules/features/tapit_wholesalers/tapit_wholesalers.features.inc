<?php
/**
 * @file
 * tapit_wholesalers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tapit_wholesalers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
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
function tapit_wholesalers_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tapit_wholesalers_node_info() {
  $items = array(
    'wholesaler' => array(
      'name' => t('Wholesaler'),
      'base' => 'node_content',
      'description' => t('Add a wholesaler '),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
