<?php
/**
 * @file
 * tapit_maps_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tapit_maps_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'incentives_map';
  $context->description = '';
  $context->tag = 'maps';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'maps/traders/incentives' => 'maps/traders/incentives',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-incentives_map_2-page' => array(
          'module' => 'views',
          'delta' => '-exp-incentives_map_2-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('maps');
  $export['incentives_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_trader_map';
  $context->description = '';
  $context->tag = 'maps';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'maps/stores' => 'maps/stores',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-stores-page' => array(
          'module' => 'views',
          'delta' => '-exp-stores-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('maps');
  $export['main_trader_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'serviceproviders_map';
  $context->description = '';
  $context->tag = 'maps';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'maps/service-providers' => 'maps/service-providers',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-service_providers_map-page' => array(
          'module' => 'views',
          'delta' => '-exp-service_providers_map-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('maps');
  $export['serviceproviders_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stores_map';
  $context->description = '';
  $context->tag = 'Stores';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'stores' => 'stores',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-stores-page' => array(
          'module' => 'views',
          'delta' => '-exp-stores-page',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Stores');
  $export['stores_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'trader_activity_map';
  $context->description = '';
  $context->tag = 'maps';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'maps/traders/activity' => 'maps/traders/activity',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-activity_map-page' => array(
          'module' => 'views',
          'delta' => '-exp-activity_map-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('maps');
  $export['trader_activity_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'trader_visits_map';
  $context->description = '';
  $context->tag = 'maps';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'maps/traders/visit' => 'maps/traders/visit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-visit_traders_map-page' => array(
          'module' => 'views',
          'delta' => '-exp-visit_traders_map-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('maps');
  $export['trader_visits_map'] = $context;

  return $export;
}
