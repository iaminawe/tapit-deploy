<?php
/**
 * @file
 * tapit_stores.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tapit_stores_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_code';
  $strongarm->value = 'iaminawe.map-ncl1yy6g';
  $export['leaflet_mapbox_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_description';
  $strongarm->value = '';
  $export['leaflet_mapbox_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_label';
  $strongarm->value = 'Tapit Mapbox';
  $export['leaflet_mapbox_label'] = $strongarm;

  return $export;
}
