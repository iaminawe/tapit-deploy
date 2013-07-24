<?php
/**
 * @file
 * tapit_stats.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tapit_stats_taxonomy_default_vocabularies() {
  return array(
    'action' => array(
      'name' => 'Action',
      'machine_name' => 'action',
      'description' => 'Used to index visits',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'target_type' => array(
      'name' => 'Target type',
      'machine_name' => 'target_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'version' => array(
      'name' => 'Version',
      'machine_name' => 'version',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'visits' => array(
      'name' => 'Visits',
      'machine_name' => 'visits',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
