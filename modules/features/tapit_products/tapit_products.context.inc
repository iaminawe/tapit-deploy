<?php
/**
 * @file
 * tapit_products.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tapit_products_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_products';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/products' => 'statistics/products',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-statistics_orders-block_5' => array(
          'module' => 'views',
          'delta' => 'statistics_orders-block_5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-statistics_orders-block_12' => array(
          'module' => 'views',
          'delta' => 'statistics_orders-block_12',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-statistics_visits-block_4' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_4',
          'region' => 'content',
          'weight' => '-8',
        ),
        'quicktabs-products' => array(
          'module' => 'quicktabs',
          'delta' => 'products',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_products'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_products_likes';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/products' => 'statistics/products',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-likes' => array(
          'module' => 'quicktabs',
          'delta' => 'likes',
          'region' => 'content',
          'weight' => '62',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_products_likes'] = $context;

  return $export;
}
