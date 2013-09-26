<?php 

$plugin = array(
  'form' => 'lat_tamper_plugin_lat_extract_form',
  'callback' => 'lat_tamper_plugin_lat_extract_callback',
  'name' => 'Extract latitude',
);

function lat_tamper_plugin_lat_extract_form($importer, $element_key, $settings) {
  $form = array();
  return $form;
}

function lat_tamper_plugin_lat_extract_callback($result, $item_key, $element_key, &$field, $settings) {
  
  $field = sscanf($field, '"[ %f, %f ]"', $lat, $lng);
  $field = $lat;
  
}

?>