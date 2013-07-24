<?php
/**
 * @file
 * tapit_stores.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tapit_stores_taxonomy_default_vocabularies() {
  return array(
    'affiliation' => array(
      'name' => 'Affiliation',
      'machine_name' => 'affiliation',
      'description' => 'Trader affiliation',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'device_type' => array(
      'name' => 'Device Type',
      'machine_name' => 'device_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'location_taxonomize' => array(
      'name' => 'Location',
      'machine_name' => 'location_taxonomize',
      'description' => 'This vocabulary is synchronized with Location data automatically by the Location taxonomize module',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'service_provider' => array(
      'name' => 'Service Provider',
      'machine_name' => 'service_provider',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'size' => array(
      'name' => 'Size',
      'machine_name' => 'size',
      'description' => 'The size of the trading store',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'store_status' => array(
      'name' => 'Store Status',
      'machine_name' => 'store_status',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'wholesaler' => array(
      'name' => 'Wholesaler',
      'machine_name' => 'wholesaler',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
