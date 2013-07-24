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
  $strongarm->name = 'field_bundle_settings_node__store';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'product_likes_entity_view_1' => array(
          'default' => array(
            'weight' => '27',
            'visible' => TRUE,
          ),
        ),
        'incentives_entity_view_1' => array(
          'default' => array(
            'weight' => '26',
            'visible' => TRUE,
          ),
        ),
        'orders_entity_view_1' => array(
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
        'statistics_visits_entity_view_1' => array(
          'default' => array(
            'weight' => '35',
            'visible' => TRUE,
          ),
        ),
        'statistics_visits_entity_view_2' => array(
          'default' => array(
            'weight' => '34',
            'visible' => TRUE,
          ),
        ),
        'orders_entity_view_2' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'product_likes_entity_view_2' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'statistics_visits_entity_view_3' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'incentives_entity_view_2' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'orders_entity_view_3' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'orders_entity_view_4' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_store';
  $strongarm->value = array();
  $export['menu_options_store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_store';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_store';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_store';
  $strongarm->value = '0';
  $export['node_preview_store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_store';
  $strongarm->value = 0;
  $export['node_submitted_store'] = $strongarm;

  return $export;
}
