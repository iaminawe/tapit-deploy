<?php
/**
 * @file
 * tapit_incentives.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tapit_incentives_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_incentives';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/incentives' => 'statistics/incentives',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-statistics_incentive-block_3' => array(
          'module' => 'views',
          'delta' => 'statistics_incentive-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-statistics_incentive-block_7' => array(
          'module' => 'views',
          'delta' => 'statistics_incentive-block_7',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-statistics_incentive-block_6' => array(
          'module' => 'views',
          'delta' => 'statistics_incentive-block_6',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-statistics_incentive-block_4' => array(
          'module' => 'views',
          'delta' => 'statistics_incentive-block_4',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-statistics_incentive-block_5' => array(
          'module' => 'views',
          'delta' => 'statistics_incentive-block_5',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views--exp-statistics_incentive-page' => array(
          'module' => 'views',
          'delta' => '-exp-statistics_incentive-page',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-statistics_incentive-block_1' => array(
          'module' => 'views',
          'delta' => 'statistics_incentive-block_1',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-statistics_incentive-block_2' => array(
          'module' => 'views',
          'delta' => 'statistics_incentive-block_2',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-a1decd079bbc1c5c012daa431b7cc973' => array(
          'module' => 'views',
          'delta' => 'a1decd079bbc1c5c012daa431b7cc973',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-3c88e98c3fc9458409492cc245c288b0' => array(
          'module' => 'views',
          'delta' => '3c88e98c3fc9458409492cc245c288b0',
          'region' => 'content',
          'weight' => '-1',
        ),
        'views-d2528f671e9b810a2f618a8f087c5742' => array(
          'module' => 'views',
          'delta' => 'd2528f671e9b810a2f618a8f087c5742',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_incentives'] = $context;

  return $export;
}
