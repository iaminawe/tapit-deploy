<?php
/**
 * @file
 * tapit_stats.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tapit_stats_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'recipients',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '095a1d23-1ece-49b3-ac86-22eefe347c61',
    'vocabulary_machine_name' => 'action',
  );
  $terms[] = array(
    'name' => 'sent',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '0c1210eb-252a-4196-9616-077e632e05a1',
    'vocabulary_machine_name' => 'action',
  );
  $terms[] = array(
    'name' => 'v2',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '10a406ee-1f10-408e-b8ed-77da3582e6a1',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'publications',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '1ac4b8f7-549f-43f6-98b1-61c721f3d04d',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'Trader',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '268768d4-ae3b-450c-85f6-e20bab61131d',
    'vocabulary_machine_name' => 'target_type',
  );
  $terms[] = array(
    'name' => 'device',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '31d148cb-2a02-471b-95b4-d1fd2950a904',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'recommendations',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '4c649cbc-a963-46ac-83ff-6dc39c1dfd27',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'surveys',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '4c933dab-9459-4118-a2c2-9c85c95721ea',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'V5',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '4da77512-2e0b-429c-8e39-5287e3fbeaa7',
    'vocabulary_machine_name' => 'version',
  );
  $terms[] = array(
    'name' => 'supplier_tokens',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '544cc070-22b6-45b3-866e-5322bdbdc418',
    'vocabulary_machine_name' => 'action',
  );
  $terms[] = array(
    'name' => 'orders',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '6b96a551-216c-4baf-a047-3fb7a4a2765d',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'stock',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '73d05c9a-e6b4-4fd4-b3e5-e8c732498ddd',
    'vocabulary_machine_name' => 'action',
  );
  $terms[] = array(
    'name' => 'V2',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '779e4a95-4c1b-4ab5-a3d4-b8c132f1de2e',
    'vocabulary_machine_name' => 'version',
  );
  $terms[] = array(
    'name' => 'api',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '7b92df0e-703d-42ba-934b-ec06115c53bd',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'tips',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '7d6702c8-20be-47a2-8922-2ad5dff44b98',
    'vocabulary_machine_name' => 'action',
  );
  $terms[] = array(
    'name' => 'categories',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '81da11e1-fb5c-4a8b-8171-62a119b7289b',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'v3',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '8f987c10-efe6-4866-b4fd-92a6834ae677',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'variants',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '9645925e-3dd0-4928-a481-c7c6b645c4d3',
    'vocabulary_machine_name' => 'action',
  );
  $terms[] = array(
    'name' => 'v1',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '967ad177-6c9f-4e2f-a141-af7573404b97',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'featured',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '98ce7d09-cf5a-462d-9a12-d2a8341a6b1f',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'incentives',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '996b64d1-dbf1-4e2e-9c96-69fa7b43f09f',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'Category',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '9a4eb2a2-7924-450e-9c0f-0c83064bab64',
    'vocabulary_machine_name' => 'target_type',
  );
  $terms[] = array(
    'name' => 'home',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'a433b357-f6a7-4adc-8b0f-b15fe3e55e66',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'V3',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'ae516eb2-5259-4389-8faa-2f4f139f34a5',
    'vocabulary_machine_name' => 'version',
  );
  $terms[] = array(
    'name' => 'order_dates',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'b48691f7-2914-4bf2-9b22-ecfcaddffbf4',
    'vocabulary_machine_name' => 'action',
  );
  $terms[] = array(
    'name' => 'V1',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'b528568c-b148-4896-9ce5-06b797917401',
    'vocabulary_machine_name' => 'version',
  );
  $terms[] = array(
    'name' => 'messages',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'be294550-c533-4a9f-8809-dc0d83e71079',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'promotions',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'caff7b9b-931b-4e3b-b0b8-c139dd37ae16',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'products',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'e2da9c63-ce72-4d04-a40a-01aa04214b79',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'store',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'e7ac4e95-0192-46a9-807f-b2238dab2ebb',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'wholesalers',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'eadf1dfe-5298-4280-943d-73d3d91b2a23',
    'vocabulary_machine_name' => 'visits',
  );
  $terms[] = array(
    'name' => 'V4',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'f06b59b1-f1d2-4620-a7c7-a9e56847a41c',
    'vocabulary_machine_name' => 'version',
  );
  $terms[] = array(
    'name' => 'survey',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'f08f04bc-73ca-4829-ae36-0c17ac0604a5',
    'vocabulary_machine_name' => 'action',
  );
  $terms[] = array(
    'name' => 'variants',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'f567b044-9334-44fa-af96-3ad71a8357b5',
    'vocabulary_machine_name' => 'visits',
  );
  return $terms;
}
