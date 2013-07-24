<?php
/**
 * @file
 * tapit_stats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tapit_stats_ctools_plugin_api() {
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
function tapit_stats_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tapit_stats_node_info() {
  $items = array(
    'target' => array(
      'name' => t('Target'),
      'base' => 'node_content',
      'description' => t('Set a target for a month for traders or categories'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'visit' => array(
      'name' => t('Visit'),
      'base' => 'node_content',
      'description' => t('Add a visit statistic to the log'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
