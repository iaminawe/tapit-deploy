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
  $field_group->identifier = 'group_storeinfo_group|node|store|default';
  $field_group->group_name = 'group_storeinfo_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'store';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Store Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_forced_wholesaler',
      1 => 'field_trader_manager',
      2 => 'field_trader_reward_card',
      3 => 'field_trader_size',
      4 => 'field_trader_affiliation_tax',
      5 => 'field_masscash_number',
      6 => 'field_trader_regnumber',
      7 => 'field_trader_cardbalance',
      8 => 'field_reward_card_error',
      9 => 'field_store_type',
      10 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_storeinfo_group|node|store|default'] = $field_group;

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
      0 => 'field_forced_wholesaler',
      1 => 'field_trader_accreditation',
      2 => 'field_trader_address',
      3 => 'field_trader_gps',
      4 => 'field_trader_size',
      5 => 'field_trader_affiliation_tax',
      6 => 'field_wholesaler_region_ref',
      7 => 'field_store_wholesalers',
      8 => 'field_wholesalers_limited',
      9 => 'title',
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
  $field_group->identifier = 'group_traderinfo_group|node|store|default';
  $field_group->group_name = 'group_traderinfo_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'store';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Trader Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_trader_address',
      1 => 'field_trader_gps',
      2 => 'field_trader_owner',
      3 => 'field_trader_profileimage',
      4 => 'field_wholesaler_region_ref',
      5 => 'ds_flag_visit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_traderinfo_group|node|store|default'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'field_trader_cellphone',
      1 => 'field_trader_email',
      2 => 'field_trader_id_number',
      3 => 'field_trader_manager',
      4 => 'field_trader_owner',
      5 => 'field_trader_profileimage',
      6 => 'field_trader_reward_card',
      7 => 'field_trader_telephone',
      8 => 'field_masscash_number',
      9 => 'field_trader_regnumber',
      10 => 'field_trader_cardbalance',
      11 => 'field_trader_current_login_time',
      12 => 'field_trader_last_login_time',
      13 => 'field_reward_card_error',
      14 => 'field_trader_store_images',
      15 => 'field_trader_updated_at',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_traderparticipation|node|store|default';
  $field_group->group_name = 'group_traderparticipation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'store';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Trader Participation',
    'weight' => '2',
    'children' => array(
      0 => 'group_store_participation',
      1 => 'group_trader_likes',
      2 => 'group_orders_store',
      3 => 'group_visits_storegroup',
      4 => 'group_wholesalers_tab',
      5 => 'group_usage_group',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Trader Participation',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_traderparticipation|node|store|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_usage_group|node|store|default';
  $field_group->group_name = 'group_usage_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'store';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_traderparticipation';
  $field_group->data = array(
    'label' => 'Usage',
    'weight' => '6',
    'children' => array(
      0 => 'field_trader_current_login_time',
      1 => 'field_trader_last_login_time',
      2 => 'statistics_visits_entity_view_3',
      3 => 'incentives_entity_view_2',
      4 => 'product_likes_entity_view_2',
      5 => 'orders_entity_view_3',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
      ),
    ),
  );
  $export['group_usage_group|node|store|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wholesalers_tab|node|store|default';
  $field_group->group_name = 'group_wholesalers_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'store';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_traderparticipation';
  $field_group->data = array(
    'label' => 'Wholesalers',
    'weight' => '5',
    'children' => array(
      0 => 'field_store_wholesalers',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_wholesalers_tab|node|store|default'] = $field_group;

  return $export;
}
