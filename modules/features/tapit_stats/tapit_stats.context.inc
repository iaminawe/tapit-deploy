<?php
/**
 * @file
 * tapit_stats.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tapit_stats_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_orders';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/orders' => 'statistics/orders',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-orders-block_5' => array(
          'module' => 'views',
          'delta' => 'orders-block_5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-orders-block_4' => array(
          'module' => 'views',
          'delta' => 'orders-block_4',
          'region' => 'content',
          'weight' => '-9',
        ),
        'quicktabs-orders' => array(
          'module' => 'quicktabs',
          'delta' => 'orders',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_orders'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_rollout';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/rollout*' => 'statistics/rollout*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-statistics_rollout-block_5' => array(
          'module' => 'views',
          'delta' => 'statistics_rollout-block_5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-statistics_rollout-block_2' => array(
          'module' => 'views',
          'delta' => 'statistics_rollout-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-statistics_rollout-block_3' => array(
          'module' => 'views',
          'delta' => 'statistics_rollout-block_3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-statistics_rollout-block_4' => array(
          'module' => 'views',
          'delta' => 'statistics_rollout-block_4',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-statistics_rollout-block_1' => array(
          'module' => 'views',
          'delta' => 'statistics_rollout-block_1',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-trader_target-block' => array(
          'module' => 'views',
          'delta' => 'trader_target-block',
          'region' => 'content',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_rollout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_visits';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/visits' => 'statistics/visits',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-statistics_visits-block_16' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_16',
          'region' => 'content',
          'weight' => '-63',
        ),
        'views-statistics_visits-block_4' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_4',
          'region' => 'content',
          'weight' => '-62',
        ),
        'views-statistics_visits-block_2' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_2',
          'region' => 'content',
          'weight' => '-61',
        ),
        'views-statistics_visits-block_3' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_3',
          'region' => 'content',
          'weight' => '-60',
        ),
        'views-statistics_visits-block_10' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_10',
          'region' => 'content',
          'weight' => '-59',
        ),
        'views-statistics_visits-block_11' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_11',
          'region' => 'content',
          'weight' => '-58',
        ),
        'views-statistics_visits-block_6' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_6',
          'region' => 'content',
          'weight' => '-57',
        ),
        'views-statistics_visits-block_7' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_7',
          'region' => 'content',
          'weight' => '-56',
        ),
        'views-statistics_visits-block_1' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_1',
          'region' => 'content',
          'weight' => '-55',
        ),
        'views-statistics_visits-block_13' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_13',
          'region' => 'content',
          'weight' => '-54',
        ),
        'views-statistics_visits-block_17' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_17',
          'region' => 'content',
          'weight' => '-53',
        ),
        'views-statistics_visits-block_19' => array(
          'module' => 'views',
          'delta' => 'statistics_visits-block_19',
          'region' => 'content',
          'weight' => '-52',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_visits'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_visits_incentives';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/visits/incentives' => 'statistics/visits/incentives',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-1546ab2d8761be9a108320b066e4908c' => array(
          'module' => 'views',
          'delta' => '1546ab2d8761be9a108320b066e4908c',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-36e6ff0635b7593c8c36dcda6aaa325f' => array(
          'module' => 'views',
          'delta' => '36e6ff0635b7593c8c36dcda6aaa325f',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-75891c515f83116feaeb02c8a4dd6c50' => array(
          'module' => 'views',
          'delta' => '75891c515f83116feaeb02c8a4dd6c50',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-20aed0b0a48e13626b93a9772e86b81e' => array(
          'module' => 'views',
          'delta' => '20aed0b0a48e13626b93a9772e86b81e',
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
  $export['stats_visits_incentives'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_visits_products';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/visits/products' => 'statistics/visits/products',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-8a8a645f2b07f7f7cf2bcf6dbed4cf7c' => array(
          'module' => 'views',
          'delta' => '8a8a645f2b07f7f7cf2bcf6dbed4cf7c',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ce7c8a67ce8d4d7830eb3ef81415fe6c' => array(
          'module' => 'views',
          'delta' => 'ce7c8a67ce8d4d7830eb3ef81415fe6c',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-3de1610da56c80772f0fb9449feadfc2' => array(
          'module' => 'views',
          'delta' => '3de1610da56c80772f0fb9449feadfc2',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-24f2c4ff3bb6b799ec94131010caf297' => array(
          'module' => 'views',
          'delta' => '24f2c4ff3bb6b799ec94131010caf297',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-3043eef24bea1b96a4eb810fc76ebd28' => array(
          'module' => 'views',
          'delta' => '3043eef24bea1b96a4eb810fc76ebd28',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_visits_products'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_visits_promotions';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/visits/promotions' => 'statistics/visits/promotions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-a3403ab9621102431a48a68694b44d63' => array(
          'module' => 'views',
          'delta' => 'a3403ab9621102431a48a68694b44d63',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-75e27c70fc8c080bdad51b764b55e834' => array(
          'module' => 'views',
          'delta' => '75e27c70fc8c080bdad51b764b55e834',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-3f20cb2e0e83fceb0015f861b3c13b41' => array(
          'module' => 'views',
          'delta' => '3f20cb2e0e83fceb0015f861b3c13b41',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-242e24a15398625d765be558435c6824' => array(
          'module' => 'views',
          'delta' => '242e24a15398625d765be558435c6824',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-bc1e7b319502a9e562c013aae1bf6bbc' => array(
          'module' => 'views',
          'delta' => 'bc1e7b319502a9e562c013aae1bf6bbc',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_visits_promotions'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_visits_publications';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/visits/publications' => 'statistics/visits/publications',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-aaf700db5960104f1ced05b1678bac1d' => array(
          'module' => 'views',
          'delta' => 'aaf700db5960104f1ced05b1678bac1d',
          'region' => 'content',
          'weight' => '-45',
        ),
        'views-15d4fd00385b1cb7ec00ec4ba24641c9' => array(
          'module' => 'views',
          'delta' => '15d4fd00385b1cb7ec00ec4ba24641c9',
          'region' => 'content',
          'weight' => '-44',
        ),
        'views-91042f11e0f0b68f379668036c81fc30' => array(
          'module' => 'views',
          'delta' => '91042f11e0f0b68f379668036c81fc30',
          'region' => 'content',
          'weight' => '-43',
        ),
        'views-437c0313d16ea5d532d5676510afb92b' => array(
          'module' => 'views',
          'delta' => '437c0313d16ea5d532d5676510afb92b',
          'region' => 'content',
          'weight' => '-42',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_visits_publications'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stats_visits_recommendations';
  $context->description = '';
  $context->tag = 'stats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistics/visits/recommendations' => 'statistics/visits/recommendations',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-996f0535e4a5fe42313ab358b479aa3f' => array(
          'module' => 'views',
          'delta' => '996f0535e4a5fe42313ab358b479aa3f',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-3aa5c4dc28eddf494e4a41854d5898bb' => array(
          'module' => 'views',
          'delta' => '3aa5c4dc28eddf494e4a41854d5898bb',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-a50501abb0a62da3551a821f19a10f7c' => array(
          'module' => 'views',
          'delta' => 'a50501abb0a62da3551a821f19a10f7c',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-32b47a5239bceb0f996f9f6e7274a8e7' => array(
          'module' => 'views',
          'delta' => '32b47a5239bceb0f996f9f6e7274a8e7',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-4bdb77c070e9b60bfb2971302e45e959' => array(
          'module' => 'views',
          'delta' => '4bdb77c070e9b60bfb2971302e45e959',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('stats');
  $export['stats_visits_recommendations'] = $context;

  return $export;
}
