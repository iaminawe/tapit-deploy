<?php
/**
 * @file
 * tapit_promotions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tapit_promotions_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_promotions';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/promotions' => 'statistics/promotions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-statistics_promotions-block_5' => array(
          'module' => 'views',
          'delta' => 'statistics_promotions-block_5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-statistics_promotions-block_12' => array(
          'module' => 'views',
          'delta' => 'statistics_promotions-block_12',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-statistics_visits-block_3' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'quicktabs-promotions' => array(
          'module' => 'quicktabs',
          'delta' => 'promotions',
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
  $export['stats_promotions'] = $context;

  return $export;
}
