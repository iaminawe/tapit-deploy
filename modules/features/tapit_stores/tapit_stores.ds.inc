<?php
/**
 * @file
 * tapit_stores.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tapit_stores_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|store|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'store';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ds_flag_visit' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'btn-mini',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '23',
      'label' => 'inline',
      'format' => 'ds_post_date_yearmonth',
    ),
    'field_trader_gps' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_trader_owner' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_trader_profileimage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'left',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_trader_current_login_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span2 numblock',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_trader_last_login_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span2 numblock',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|store|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|store|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'store';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|store|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tapit_stores_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|store|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'store';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'group_traderinfo_group',
        19 => 'field_trader_owner',
        20 => 'field_trader_id_number',
        21 => 'field_storeowner_nationality',
        22 => 'field_trader_profileimage',
        23 => 'field_trader_address',
        24 => 'field_wholesaler_region_ref',
        25 => 'ds_flag_visit',
        26 => 'field_trader_gps',
      ),
      'middle' => array(
        1 => 'group_visits_storegroup',
        2 => 'statistics_visits_entity_view_3',
        3 => 'group_orders_store',
        4 => 'group_trader_likes',
        5 => 'orders_entity_view_3',
        6 => 'product_likes_entity_view_2',
        7 => 'group_store_participation',
        8 => 'group_wholesalers_tab',
        9 => 'group_traderparticipation',
        10 => 'incentives_entity_view_2',
        11 => 'field_trader_current_login_time',
        13 => 'group_usage_group',
        15 => 'field_trader_last_login_time',
        17 => 'orders_entity_view_2',
        18 => 'orders_entity_view_1',
        33 => 'incentives_entity_view_1',
        35 => 'field_store_wholesalers',
        36 => 'product_likes_entity_view_1',
        44 => 'statistics_visits_entity_view_2',
        47 => 'statistics_visits_entity_view_1',
      ),
      'right' => array(
        12 => 'group_store_contactgroup',
        14 => 'group_storeinfo_group',
        16 => 'group_store_device',
        27 => 'field_trader_email',
        28 => 'field_trader_telephone',
        29 => 'field_trader_cellphone',
        30 => 'post_date',
        31 => 'field_trader_manager',
        32 => 'field_store_trader_state',
        34 => 'body',
        37 => 'field_trader_size',
        38 => 'field_masscash_number',
        39 => 'field_trader_regnumber',
        40 => 'field_trader_affiliation_tax',
        41 => 'field_trader_cardbalance',
        42 => 'field_trader_reward_card',
        43 => 'field_trader_service_provider',
        45 => 'field_reward_card_error',
        46 => 'field_trader_serial_number',
        48 => 'field_trader_devicetype',
        49 => 'field_forced_wholesaler',
        50 => 'field_trader_device_token',
        51 => 'field_trader_device_imei',
        52 => 'field_trader_sim',
        53 => 'field_app_demonstrated',
      ),
    ),
    'fields' => array(
      'group_traderinfo_group' => 'left',
      'group_visits_storegroup' => 'middle',
      'statistics_visits_entity_view_3' => 'middle',
      'group_orders_store' => 'middle',
      'group_trader_likes' => 'middle',
      'orders_entity_view_3' => 'middle',
      'product_likes_entity_view_2' => 'middle',
      'group_store_participation' => 'middle',
      'group_wholesalers_tab' => 'middle',
      'group_traderparticipation' => 'middle',
      'incentives_entity_view_2' => 'middle',
      'field_trader_current_login_time' => 'middle',
      'group_store_contactgroup' => 'right',
      'group_usage_group' => 'middle',
      'group_storeinfo_group' => 'right',
      'field_trader_last_login_time' => 'middle',
      'group_store_device' => 'right',
      'orders_entity_view_2' => 'middle',
      'orders_entity_view_1' => 'middle',
      'field_trader_owner' => 'left',
      'field_trader_id_number' => 'left',
      'field_storeowner_nationality' => 'left',
      'field_trader_profileimage' => 'left',
      'field_trader_address' => 'left',
      'field_wholesaler_region_ref' => 'left',
      'ds_flag_visit' => 'left',
      'field_trader_gps' => 'left',
      'field_trader_email' => 'right',
      'field_trader_telephone' => 'right',
      'field_trader_cellphone' => 'right',
      'post_date' => 'right',
      'field_trader_manager' => 'right',
      'field_store_trader_state' => 'right',
      'incentives_entity_view_1' => 'middle',
      'body' => 'right',
      'field_store_wholesalers' => 'middle',
      'product_likes_entity_view_1' => 'middle',
      'field_trader_size' => 'right',
      'field_masscash_number' => 'right',
      'field_trader_regnumber' => 'right',
      'field_trader_affiliation_tax' => 'right',
      'field_trader_cardbalance' => 'right',
      'field_trader_reward_card' => 'right',
      'field_trader_service_provider' => 'right',
      'statistics_visits_entity_view_2' => 'middle',
      'field_reward_card_error' => 'right',
      'field_trader_serial_number' => 'right',
      'statistics_visits_entity_view_1' => 'middle',
      'field_trader_devicetype' => 'right',
      'field_forced_wholesaler' => 'right',
      'field_trader_device_token' => 'right',
      'field_trader_device_imei' => 'right',
      'field_trader_sim' => 'right',
      'field_app_demonstrated' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|store|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|store|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'store';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'field_trader_owner',
        2 => 'field_trader_cellphone',
        3 => 'field_trader_email',
      ),
      'footer' => array(
        4 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_trader_owner' => 'header',
      'field_trader_cellphone' => 'header',
      'field_trader_email' => 'header',
      'links' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|store|teaser'] = $ds_layout;

  return $export;
}
