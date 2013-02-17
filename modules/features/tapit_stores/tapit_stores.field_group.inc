<?php
/**
 * @file
 * tapit_stores.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tapit_stores_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_device|node|trader|form';
  $field_group->group_name = 'group_device';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'store';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Device Info',
    'weight' => '7',
    'children' => array(
      0 => 'field_trader_devicetype',
      1 => 'field_trader_serial_number',
      2 => 'field_trader_device_imei',
      3 => 'field_trader_sim',
      4 => 'field_trader_device_token',
      5 => 'field_trader_service_provider',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_device|node|trader|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_storeinfo|node|trader|form';
  $field_group->group_name = 'group_storeinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'store';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Store Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_trader_address',
      1 => 'field_trader_gps',
      2 => 'field_trader_size',
      3 => 'field_trader_affiliation',
      4 => 'field_trader_accreditation',
      5 => 'field_forced_wholesaler',
      6 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_storeinfo|node|trader|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_traderinfo|node|trader|form';
  $field_group->group_name = 'group_traderinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'store';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Trader Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_trader_owner',
      1 => 'field_trader_telephone',
      2 => 'field_trader_cellphone',
      3 => 'field_trader_email',
      4 => 'field_trader_manager',
      5 => 'field_trader_reward_card',
      6 => 'field_trader_id_number',
      7 => 'field_trader_profileimage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_traderinfo|node|trader|form'] = $field_group;

  return $export;
}
