<?php
/**
 * @file
 * tapit_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tapit_products_ctools_plugin_api() {
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
function tapit_products_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tapit_products_node_info() {
  $items = array(
    'advert' => array(
      'name' => t('New Product'),
      'base' => 'node_content',
      'description' => t('Add a new product (featured advert)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'like' => array(
      'name' => t('Likes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product' => array(
      'name' => t('New Product Variant'),
      'base' => 'node_content',
      'description' => t('Add a new product variant (previously product)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
