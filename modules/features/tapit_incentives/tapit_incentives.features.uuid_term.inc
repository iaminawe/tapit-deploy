<?php
/**
 * @file
 * tapit_incentives.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tapit_incentives_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'survey_incentive',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '7d4b69c7-c678-4230-88b1-b8bce273e701',
    'vocabulary_machine_name' => 'incentive_type',
  );
  $terms[] = array(
    'name' => 'product_incentive',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'a2aee271-59b9-4106-b6da-350e09a263b7',
    'vocabulary_machine_name' => 'incentive_type',
  );
  return $terms;
}
