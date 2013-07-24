<?php
/**
 * @file
 * tapit_incentives.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tapit_incentives_taxonomy_default_vocabularies() {
  return array(
    'incentive_type' => array(
      'name' => 'Incentive Type',
      'machine_name' => 'incentive_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
