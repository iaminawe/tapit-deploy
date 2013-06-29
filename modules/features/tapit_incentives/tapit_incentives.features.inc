<?php
/**
 * @file
 * tapit_incentives.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tapit_incentives_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function tapit_incentives_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tapit_incentives_node_info() {
  $items = array(
    'incentives' => array(
      'name' => t('Incentives'),
      'base' => 'node_content',
      'description' => t('Add an incentive'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_incentive' => array(
      'name' => t('Product Incentive'),
      'base' => 'node_content',
      'description' => t('Add a product incentive'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'survey_incentive' => array(
      'name' => t('Survey Incentive'),
      'base' => 'node_content',
      'description' => t('Add a survey incentive'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
