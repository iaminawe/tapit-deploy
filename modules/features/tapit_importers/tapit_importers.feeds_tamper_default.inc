<?php
/**
 * @file
 * tapit_importers.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function tapit_importers_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-_id-find_replace';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['adverts_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-_id-find_replace_close';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['adverts_importer-_id-find_replace_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-banner_updated_at-tapit_timedate';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = 'banner_updated_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['adverts_importer-banner_updated_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-created_at-tapit_timedate';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = 'created_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['adverts_importer-created_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-deleted_at-tapit_timedate';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = 'deleted_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['adverts_importer-deleted_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-end_at-tapit_timedate';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = 'end_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['adverts_importer-end_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-start_at-tapit_timedate';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = 'start_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['adverts_importer-start_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-supplier_id-find_replace_3';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace )';
  $export['adverts_importer-supplier_id-find_replace_3'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-supplier_id-find_replace_obj';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['adverts_importer-supplier_id-find_replace_obj'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'adverts_importer-updated_at-tapit_timedate';
  $feeds_tamper->importer = 'adverts_importer';
  $feeds_tamper->source = 'updated_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['adverts_importer-updated_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'categories-_id-find_replace';
  $feeds_tamper->importer = 'categories';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace opening ObID';
  $export['categories-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'categories-_id-find_replace_bracketclose';
  $feeds_tamper->importer = 'categories';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace )';
  $export['categories-_id-find_replace_bracketclose'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'categories-supplier_id-find_replace';
  $feeds_tamper->importer = 'categories';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID';
  $export['categories-supplier_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'categories-supplier_id-find_replace_closebracket';
  $feeds_tamper->importer = 'categories';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace )';
  $export['categories-supplier_id-find_replace_closebracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'incentives_importer-_id-find_replace';
  $feeds_tamper->importer = 'incentives_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace opening';
  $export['incentives_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'incentives_importer-_id-find_replace_closing';
  $feeds_tamper->importer = 'incentives_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace closing';
  $export['incentives_importer-_id-find_replace_closing'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'incentives_importer-incentive_id-find_replace';
  $feeds_tamper->importer = 'incentives_importer';
  $feeds_tamper->source = 'incentive_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['incentives_importer-incentive_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'incentives_importer-incentive_id-find_replace1';
  $feeds_tamper->importer = 'incentives_importer';
  $feeds_tamper->source = 'incentive_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['incentives_importer-incentive_id-find_replace1'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'incentives_importer-store_id-find_replace';
  $feeds_tamper->importer = 'incentives_importer';
  $feeds_tamper->source = 'store_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['incentives_importer-store_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'incentives_importer-store_id-find_replace_2';
  $feeds_tamper->importer = 'incentives_importer';
  $feeds_tamper->source = 'store_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace 2';
  $export['incentives_importer-store_id-find_replace_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'likes_importer-_id-find_replace_closingbracket';
  $feeds_tamper->importer = 'likes_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace )';
  $export['likes_importer-_id-find_replace_closingbracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'likes_importer-_id-find_replace_objid';
  $feeds_tamper->importer = 'likes_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['likes_importer-_id-find_replace_objid'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'likes_importer-product_id-find_replace_close_bracket';
  $feeds_tamper->importer = 'likes_importer';
  $feeds_tamper->source = 'product_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace close bracket';
  $export['likes_importer-product_id-find_replace_close_bracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'likes_importer-product_id-find_replace_objid';
  $feeds_tamper->importer = 'likes_importer';
  $feeds_tamper->source = 'product_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['likes_importer-product_id-find_replace_objid'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'likes_importer-store_id-find_replace_closebracket';
  $feeds_tamper->importer = 'likes_importer';
  $feeds_tamper->source = 'store_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['likes_importer-store_id-find_replace_closebracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'likes_importer-store_id-find_replace_objid';
  $feeds_tamper->importer = 'likes_importer';
  $feeds_tamper->source = 'store_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['likes_importer-store_id-find_replace_objid'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'orders_importer-_id-find_replace';
  $feeds_tamper->importer = 'orders_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['orders_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'orders_importer-_id-find_replace_close';
  $feeds_tamper->importer = 'orders_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace )';
  $export['orders_importer-_id-find_replace_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'orders_importer-promotion_variant_id-find_replace';
  $feeds_tamper->importer = 'orders_importer';
  $feeds_tamper->source = 'promotion_variant_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['orders_importer-promotion_variant_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'orders_importer-promotion_variant_id-find_replace_close';
  $feeds_tamper->importer = 'orders_importer';
  $feeds_tamper->source = 'promotion_variant_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace )';
  $export['orders_importer-promotion_variant_id-find_replace_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'orders_importer-store_id-find_replace';
  $feeds_tamper->importer = 'orders_importer';
  $feeds_tamper->source = 'store_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['orders_importer-store_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'orders_importer-store_id-find_replace_closing';
  $feeds_tamper->importer = 'orders_importer';
  $feeds_tamper->source = 'store_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace close';
  $export['orders_importer-store_id-find_replace_closing'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'orders_importer-wholesaler_id-find_replace';
  $feeds_tamper->importer = 'orders_importer';
  $feeds_tamper->source = 'wholesaler_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['orders_importer-wholesaler_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'orders_importer-wholesaler_id-find_replace_closing';
  $feeds_tamper->importer = 'orders_importer';
  $feeds_tamper->source = 'wholesaler_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace close';
  $export['orders_importer-wholesaler_id-find_replace_closing'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-_id-find_replace';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-_id-find_replace_2';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace 3';
  $export['product_importer-_id-find_replace_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-category_id-find_replace';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'category_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['product_importer-category_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-category_id-find_replace_close';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'category_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-category_id-find_replace_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-created_at-tapit_timedate';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'created_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['product_importer-created_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-deleted_at-tapit_timedate';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'deleted_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['product_importer-deleted_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-end_at-tapit_timedate';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'end_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['product_importer-end_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-featured_advert_id-find_replace';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'featured_advert_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['product_importer-featured_advert_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-featured_advert_id-find_replace_3';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'featured_advert_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-featured_advert_id-find_replace_3'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-start_at-tapit_timedate';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'start_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['product_importer-start_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-supplier_id-copy';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'supplier_id_clean',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Copy source value';
  $export['product_importer-supplier_id-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-supplier_id-explode';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Explode';
  $export['product_importer-supplier_id-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-supplier_id-find_replace';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['product_importer-supplier_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-supplier_id-find_replace_close';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-supplier_id-find_replace_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-supplier_id-find_replace_close1';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace close';
  $export['product_importer-supplier_id-find_replace_close1'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-supplier_id-find_replace_open';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '{ "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace open';
  $export['product_importer-supplier_id-find_replace_open'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-supplier_id-find_replace_space2';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'supplier_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-supplier_id-find_replace_space2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-updated_at-tapit_timedate';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'updated_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['product_importer-updated_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-wholesaler_ids-copy';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'wholesaler_ids_clean',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Copy source value';
  $export['product_importer-wholesaler_ids-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-wholesaler_ids-explode';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Explode';
  $export['product_importer-wholesaler_ids-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-wholesaler_ids-find_replace';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[ ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-wholesaler_ids-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-wholesaler_ids-find_replace_2';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ]',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-wholesaler_ids-find_replace_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-wholesaler_ids-find_replace_3';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '{ "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-wholesaler_ids-find_replace_3'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-wholesaler_ids-find_replace_4';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-wholesaler_ids-find_replace_4'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_importer-wholesaler_ids-find_replace_space';
  $feeds_tamper->importer = 'product_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['product_importer-wholesaler_ids-find_replace_space'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-_id-find_replace';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['product_incentive_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-_id-find_replace_objid';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['product_incentive_importer-_id-find_replace_objid'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-category_id-find_replace';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'category_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['product_incentive_importer-category_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-category_id-find_replace_bracket';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'category_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace closing';
  $export['product_incentive_importer-category_id-find_replace_bracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-region_ids-copy';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'region_ids_clean',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Copy source value';
  $export['product_incentive_importer-region_ids-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-region_ids-explode';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Explode';
  $export['product_incentive_importer-region_ids-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-region_ids-find_replace';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[ ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['product_incentive_importer-region_ids-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-region_ids-find_replace_closingsquare';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ]',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['product_incentive_importer-region_ids-find_replace_closingsquare'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-region_ids-find_replace_quote';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace "';
  $export['product_incentive_importer-region_ids-find_replace_quote'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-region_ids-find_replace_regionid';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '{ "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace region ID { "$oid" : "';
  $export['product_incentive_importer-region_ids-find_replace_regionid'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-region_ids-find_replace_space';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace space';
  $export['product_incentive_importer-region_ids-find_replace_space'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-wholesaler_ids-copy';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'wholesaler_ids_clean',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Copy source value';
  $export['product_incentive_importer-wholesaler_ids-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-wholesaler_ids-explode';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Explode';
  $export['product_incentive_importer-wholesaler_ids-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-wholesaler_ids-find_replace';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '{ "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace { "$oid" : "';
  $export['product_incentive_importer-wholesaler_ids-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-wholesaler_ids-find_replace_close';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace " }';
  $export['product_incentive_importer-wholesaler_ids-find_replace_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-wholesaler_ids-find_replace_close_square';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ]',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace close square';
  $export['product_incentive_importer-wholesaler_ids-find_replace_close_square'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-wholesaler_ids-find_replace_os';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[ ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace opensquare';
  $export['product_incentive_importer-wholesaler_ids-find_replace_os'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'product_incentive_importer-wholesaler_ids-find_replace_space';
  $feeds_tamper->importer = 'product_incentive_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace';
  $export['product_incentive_importer-wholesaler_ids-find_replace_space'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotion_variant_importer-_id-find_replace';
  $feeds_tamper->importer = 'promotion_variant_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['promotion_variant_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotion_variant_importer-_id-find_replace1';
  $feeds_tamper->importer = 'promotion_variant_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['promotion_variant_importer-_id-find_replace1'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotion_variant_importer-brand-find_replace';
  $feeds_tamper->importer = 'promotion_variant_importer';
  $feeds_tamper->source = 'brand';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['promotion_variant_importer-brand-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotion_variant_importer-brand-find_replace_obj';
  $feeds_tamper->importer = 'promotion_variant_importer';
  $feeds_tamper->source = 'brand';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['promotion_variant_importer-brand-find_replace_obj'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotion_variant_importer-promotion_id-find_replace2';
  $feeds_tamper->importer = 'promotion_variant_importer';
  $feeds_tamper->source = 'promotion_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['promotion_variant_importer-promotion_id-find_replace2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotion_variant_importer-promotion_id-find_replace_closingbracket';
  $feeds_tamper->importer = 'promotion_variant_importer';
  $feeds_tamper->source = 'promotion_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace )';
  $export['promotion_variant_importer-promotion_id-find_replace_closingbracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-_id-find_replace';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['promotions_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-_id-find_replacee';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace )';
  $export['promotions_importer-_id-find_replacee'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-brand-find_replace';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'brand';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['promotions_importer-brand-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-brand-find_replace_2';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'brand';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['promotions_importer-brand-find_replace_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-category_id-find_replace';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'category_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['promotions_importer-category_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-category_id-find_replace_4';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'category_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace 2';
  $export['promotions_importer-category_id-find_replace_4'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-created_at-tapit_timedate';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'created_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['promotions_importer-created_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-deleted_at-tapit_timedate';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'deleted_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['promotions_importer-deleted_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-end_at-tapit_timedate_1';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'end_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['promotions_importer-end_at-tapit_timedate_1'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-start_at-tapit_timedate';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'start_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['promotions_importer-start_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-updated_at-tapit_timedate';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'updated_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['promotions_importer-updated_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-wholesaler_ids-copy';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'wholesaler_ids_clean',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Copy source value';
  $export['promotions_importer-wholesaler_ids-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-wholesaler_ids-explode';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Explode';
  $export['promotions_importer-wholesaler_ids-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-wholesaler_ids-find_replace';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ]',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['promotions_importer-wholesaler_ids-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-wholesaler_ids-find_replace_close2';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['promotions_importer-wholesaler_ids-find_replace_close2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-wholesaler_ids-find_replace_open';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[ ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace [ ';
  $export['promotions_importer-wholesaler_ids-find_replace_open'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-wholesaler_ids-find_replace_open2';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '{ "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace';
  $export['promotions_importer-wholesaler_ids-find_replace_open2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-wholesaler_ids-find_replace_regex';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(?<=,|^)([^,]*)(,\\1)+(?=,|$)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace duplicates using REGEX';
  $export['promotions_importer-wholesaler_ids-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'promotions_importer-wholesaler_ids-find_replace_space';
  $feeds_tamper->importer = 'promotions_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['promotions_importer-wholesaler_ids-find_replace_space'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'publications_importer-_id-find_replace';
  $feeds_tamper->importer = 'publications_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['publications_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'publications_importer-_id-find_replace_open';
  $feeds_tamper->importer = 'publications_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['publications_importer-_id-find_replace_open'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'publications_importer-created_at-tapit_timedate';
  $feeds_tamper->importer = 'publications_importer';
  $feeds_tamper->source = 'created_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['publications_importer-created_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'publications_importer-date-tapit_timedate';
  $feeds_tamper->importer = 'publications_importer';
  $feeds_tamper->source = 'Date';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['publications_importer-date-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'publications_importer-pdf_updated_at-tapit_timedate';
  $feeds_tamper->importer = 'publications_importer';
  $feeds_tamper->source = 'pdf_updated_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['publications_importer-pdf_updated_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'publications_importer-updated_at-tapit_timedate';
  $feeds_tamper->importer = 'publications_importer';
  $feeds_tamper->source = 'updated_at';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['publications_importer-updated_at-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-_id-find_replace';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID';
  $export['stores_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-_id-find_replace_objectid_close';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['stores_importer-_id-find_replace_objectid_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-address-find_replace';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'address';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ';',
    'replace' => ',',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['stores_importer-address-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-country-copy';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'country';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'country_code',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Copy source value';
  $export['stores_importer-country-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-country-rewrite';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'country';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'ZA',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['stores_importer-country-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-country_code-find_replace';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'country_code';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '',
    'replace' => 'ZA',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['stores_importer-country_code-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-gps_coords-find_replace';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'gps_coords';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[ ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['stores_importer-gps_coords-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-gps_coords-find_replace_closebracket';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'gps_coords';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ]',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['stores_importer-gps_coords-find_replace_closebracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-region_id-find_replace';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'region_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace objectID';
  $export['stores_importer-region_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-region_id-find_replace_closingbracket';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'region_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['stores_importer-region_id-find_replace_closingbracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids-copy';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'wholesaler_ids_clean',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Copy source value';
  $export['stores_importer-wholesaler_ids-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids-explode';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Explode';
  $export['stores_importer-wholesaler_ids-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids-find_replace';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace [';
  $export['stores_importer-wholesaler_ids-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids-find_replace_array_opening';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' { "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace array opening';
  $export['stores_importer-wholesaler_ids-find_replace_array_opening'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids-find_replace_closing';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace closing curly bracket';
  $export['stores_importer-wholesaler_ids-find_replace_closing'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids-find_replace_closingbracket';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace closing bracket';
  $export['stores_importer-wholesaler_ids-find_replace_closingbracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids-find_replace_quotation';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '"',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find remove quotation marks';
  $export['stores_importer-wholesaler_ids-find_replace_quotation'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids-find_replace_space';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace space';
  $export['stores_importer-wholesaler_ids-find_replace_space'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids_exploded-copy';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids_exploded';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'wholesaler_ids_clean',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Copy source value';
  $export['stores_importer-wholesaler_ids_exploded-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stores_importer-wholesaler_ids_exploded-explode';
  $feeds_tamper->importer = 'stores_importer';
  $feeds_tamper->source = 'wholesaler_ids_exploded';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['stores_importer-wholesaler_ids_exploded-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-_id-find_replace';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace opening ObID';
  $export['suppliers_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-_id-find_replace_closingobj';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace closing ObjectID';
  $export['suppliers_importer-_id-find_replace_closingobj'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids-copy';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'wholesaler_ids_clean',
  );
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'Copy source value';
  $export['suppliers_importer-wholesaler_ids-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids-explode';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'Explode';
  $export['suppliers_importer-wholesaler_ids-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids-find_replace';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[ ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 13;
  $feeds_tamper->description = 'Find replace opening bracket';
  $export['suppliers_importer-wholesaler_ids-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids-find_replace_closing';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ]',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 14;
  $feeds_tamper->description = 'Find replace closing bracket';
  $export['suppliers_importer-wholesaler_ids-find_replace_closing'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids-find_replace_closing_curly';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Find replace " }';
  $export['suppliers_importer-wholesaler_ids-find_replace_closing_curly'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids-find_replace_comma';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '{ "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace { "$oid" : "';
  $export['suppliers_importer-wholesaler_ids-find_replace_comma'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids-find_replace_quote';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '"',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Find replace "';
  $export['suppliers_importer-wholesaler_ids-find_replace_quote'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids-find_replace_regex';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(?<=,|^)([^,]*)(,\\1)+(?=,|$)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['suppliers_importer-wholesaler_ids-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids-find_replace_space';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Find replace space';
  $export['suppliers_importer-wholesaler_ids-find_replace_space'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids_exploded-copy';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids_exploded';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'wholesaler_ids_clean',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['suppliers_importer-wholesaler_ids_exploded-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids_twenty-explode';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids_twenty';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['suppliers_importer-wholesaler_ids_twenty-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'suppliers_importer-wholesaler_ids_twenty-rewrite';
  $feeds_tamper->importer = 'suppliers_importer';
  $feeds_tamper->source = 'wholesaler_ids_twenty';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[wholesaler_ids],[wholesaler_ids_one],[wholesaler_ids_two],[wholesaler_ids_three],[wholesaler_ids_four],[wholesaler_ids_five],[wholesaler_ids_six],[wholesaler_ids_seven],[wholesaler_ids_eight],[wholesaler_ids_nine],[wholesaler_ids_ten],[wholesaler_ids_eleven],[wholesaler_ids_twelve],[wholesaler_ids_thirteen],[wholesaler_ids_fourteen],[wholesaler_ids_fifteen],[wholesaler_ids_sixteen],[wholesaler_ids_seventeen],[wholesaler_ids_eighteen],[wholesaler_ids_nineteen],[wholesaler_ids_twenty]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['suppliers_importer-wholesaler_ids_twenty-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-_id-find_replace';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace close bracket';
  $export['survey_incentive_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-_id-find_replace1';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['survey_incentive_importer-_id-find_replace1'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-region_ids-copy';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'region_ids_clean',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Copy source value';
  $export['survey_incentive_importer-region_ids-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-region_ids-explode';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Explode';
  $export['survey_incentive_importer-region_ids-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-region_ids-find_replace';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[ ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace [';
  $export['survey_incentive_importer-region_ids-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-region_ids-find_replace2';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ]',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace close bracket';
  $export['survey_incentive_importer-region_ids-find_replace2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-region_ids-find_replace3';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '{ "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace { "$oid" : "';
  $export['survey_incentive_importer-region_ids-find_replace3'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-region_ids-find_replace4';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace closing array';
  $export['survey_incentive_importer-region_ids-find_replace4'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-region_ids-find_replace_space';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = 'region_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace';
  $export['survey_incentive_importer-region_ids-find_replace_space'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'survey_incentive_importer-wholesaler_ids-copy';
  $feeds_tamper->importer = 'survey_incentive_importer';
  $feeds_tamper->source = 'wholesaler_ids';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'wholesaler_ids_clean',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['survey_incentive_importer-wholesaler_ids-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-address-find_replace';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Address';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ';',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['traders_importer-address-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-cellphone-find_replace';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Cellphone';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '?Ø',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['traders_importer-cellphone-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-cellphone-html_entity_decode';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Cellphone';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['traders_importer-cellphone-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-country-set_default_value';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Country';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'ZA',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set ZA country code';
  $export['traders_importer-country-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-name-find_replace';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'â€˜n',
    'replace' => '\'',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^â€˜n$/i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find Replace Apostrophe';
  $export['traders_importer-name-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-name-find_replace_2';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Ã©',
    'replace' => 'e',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Ã©$/i',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Accented e replace';
  $export['traders_importer-name-find_replace_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-name-find_replace_3';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'â€™',
    'replace' => '\'',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^â€™$/i',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Apostrophe replace';
  $export['traders_importer-name-find_replace_3'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-name-find_replace_apostrophe2';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'â€™',
    'replace' => '\'',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^â€™$/i',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['traders_importer-name-find_replace_apostrophe2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-name-html_entity_decode';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'HTML entity decode';
  $export['traders_importer-name-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'traders_importer-telephone-html_entity_decode';
  $feeds_tamper->importer = 'traders_importer';
  $feeds_tamper->source = 'Telephone';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['traders_importer-telephone-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'visits_importer-_id-find_replace_close_bracket';
  $feeds_tamper->importer = 'visits_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace close bracket';
  $export['visits_importer-_id-find_replace_close_bracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'visits_importer-_id-find_replace_objid';
  $feeds_tamper->importer = 'visits_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID';
  $export['visits_importer-_id-find_replace_objid'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'visits_importer-controller-explode';
  $feeds_tamper->importer = 'visits_importer';
  $feeds_tamper->source = 'controller';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '/',
    'limit' => '',
    'real_separator' => '/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['visits_importer-controller-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'visits_importer-store_id-find_replace';
  $feeds_tamper->importer = 'visits_importer';
  $feeds_tamper->source = 'store_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['visits_importer-store_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'visits_importer-store_id-find_replace_objid';
  $feeds_tamper->importer = 'visits_importer';
  $feeds_tamper->source = 'store_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID';
  $export['visits_importer-store_id-find_replace_objid'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'visits_importer-time-tapit_timedate';
  $feeds_tamper->importer = 'visits_importer';
  $feeds_tamper->source = 'time';
  $feeds_tamper->plugin_id = 'tapit_timedate';
  $feeds_tamper->settings = array(
    'date_format' => 'm-d-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tapit Unix timestamp to Date';
  $export['visits_importer-time-tapit_timedate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-_id-find_replace';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['wholesalers_importer-_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-_id-find_replace_open';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = '_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['wholesalers_importer-_id-find_replace_open'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-logo_file_name-rewrite_image_url';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'logo_file_name';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'http://api2.tap-it.co.za/system/profile_images/[user_id]/original/[logo_file_name]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite images into url that can be fetched';
  $export['wholesalers_importer-logo_file_name-rewrite_image_url'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-product_ids-explode';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'product_ids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Explode';
  $export['wholesalers_importer-product_ids-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-product_ids-find_replace';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'product_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[ { "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace [ { "$oid" : "';
  $export['wholesalers_importer-product_ids-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-product_ids-find_replace_3';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'product_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace " }';
  $export['wholesalers_importer-product_ids-find_replace_3'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-product_ids-find_replace_4';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'product_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' { "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace  { "$oid" : "';
  $export['wholesalers_importer-product_ids-find_replace_4'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-product_ids-find_replace_new';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'product_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" } ]',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace " } ]';
  $export['wholesalers_importer-product_ids-find_replace_new'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-region_id-find_replace';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'region_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ObjectID(',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace ObjectID(';
  $export['wholesalers_importer-region_id-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-region_id-find_replace_close';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'region_id';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ')',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['wholesalers_importer-region_id-find_replace_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-region_id-trim';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'region_id';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim left junk off region id';
  $export['wholesalers_importer-region_id-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-region_id-trim_bracket_region';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'region_id';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '1',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim bracket off end of region id';
  $export['wholesalers_importer-region_id-trim_bracket_region'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-store_ids-explode';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'store_ids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Explode';
  $export['wholesalers_importer-store_ids-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-store_ids-find_replace';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'store_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' { "$oid" : "',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace { "$oid" : "';
  $export['wholesalers_importer-store_ids-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-store_ids-find_replace_array_close';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'store_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ]',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace  ]';
  $export['wholesalers_importer-store_ids-find_replace_array_close'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-store_ids-find_replace_array_open';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'store_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace array [ ';
  $export['wholesalers_importer-store_ids-find_replace_array_open'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-store_ids-find_replace_newnew';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'store_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '" }',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace " }';
  $export['wholesalers_importer-store_ids-find_replace_newnew'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-store_ids-find_replace_ss';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'store_ids';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '"',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Find replace d';
  $export['wholesalers_importer-store_ids-find_replace_ss'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-store_ids_clean-explode';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'store_ids_clean';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['wholesalers_importer-store_ids_clean-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-user_id-trim';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'user_id';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim beginning 9 characters off user id';
  $export['wholesalers_importer-user_id-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wholesalers_importer-user_id-trim_end_bracket';
  $feeds_tamper->importer = 'wholesalers_importer';
  $feeds_tamper->source = 'user_id';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '1',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim end bracket off user id';
  $export['wholesalers_importer-user_id-trim_end_bracket'] = $feeds_tamper;

  return $export;
}
