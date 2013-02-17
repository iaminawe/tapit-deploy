<?php
/**
 * @file
 * tapit_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tapit_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'traders_importer';
  $feeds_importer->config = array(
    'name' => 'Traders Importer',
    'description' => 'An importer to bring in trader store information',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'trader',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Address',
            'target' => 'field_trader_address:thoroughfare',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Suburb',
            'target' => 'field_trader_address:dependent_locality',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'City',
            'target' => 'field_trader_address:locality',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Region',
            'target' => 'field_trader_address:administrative_area',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Postal Code',
            'target' => 'field_trader_address:postal_code',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Country',
            'target' => 'field_trader_address:country',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Latitude',
            'target' => 'field_trader_gps:lat',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Longitude',
            'target' => 'field_trader_gps:lon',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Size',
            'target' => 'field_trader_size',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Affiliation',
            'target' => 'field_trader_affiliation',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Owner',
            'target' => 'field_trader_owner',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Telephone',
            'target' => 'field_trader_telephone',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Cellphone',
            'target' => 'field_trader_cellphone',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Email',
            'target' => 'field_trader_email',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Manager',
            'target' => 'field_trader_manager',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Reward Card',
            'target' => 'field_trader_reward_card',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Accreditation',
            'target' => 'field_trader_accreditation',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'ID Number',
            'target' => 'field_trader_id_number',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Device Type',
            'target' => 'field_trader_devicetype',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Device S/N',
            'target' => 'field_trader_serial_number',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Device IMEI',
            'target' => 'field_trader_device_imei',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Sim Card Number',
            'target' => 'field_trader_sim',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Service Provider',
            'target' => 'field_trader_service_provider',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Device Token',
            'target' => 'field_trader_device_token',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'Profile Image',
            'target' => 'field_trader_profileimage',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'Forced Wholesalers',
            'target' => 'field_forced_wholesaler',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['traders_importer'] = $feeds_importer;

  return $export;
}
