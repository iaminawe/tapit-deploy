<?php
/**
 * @file
 * tapit_promotions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tapit_promotions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
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
function tapit_promotions_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tapit_promotions_node_info() {
  $items = array(
    'promotion' => array(
      'name' => t('Promotion'),
      'base' => 'node_content',
      'description' => t('Add a promotion'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'promotion_variant' => array(
      'name' => t('Promotion Variant'),
      'base' => 'node_content',
      'description' => t('Add a promotion variant'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
