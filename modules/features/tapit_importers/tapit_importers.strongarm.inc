<?php
/**
 * @file
 * tapit_importers.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tapit_importers_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'trader_import-gps_coords-explode' => FALSE,
    'trader_import-gps_coords-trim' => FALSE,
    'traders_importer-address-find_replace' => FALSE,
    'traders_importer-cellphone-find_replace' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_reschedule';
  $strongarm->value = FALSE;
  $export['feeds_reschedule'] = $strongarm;

  return $export;
}
