<?php
/**
 * @file
 * tapit_importers.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tapit_importers_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_importer';
  $strongarm->value = array(
    'adverts_importer' => FALSE,
    'brand_importer' => TRUE,
    'categories' => FALSE,
    'incentives_importer' => FALSE,
    'likes_importer' => FALSE,
    'product_importer' => FALSE,
    'product_incentive_importer' => FALSE,
    'promotions_importer' => FALSE,
    'promotion_variant_importer' => FALSE,
    'publications_importer' => FALSE,
    'region_importer' => TRUE,
    'stores_importer' => FALSE,
    'suppliers_importer' => FALSE,
    'survey_incentive_importer' => FALSE,
    'traders_importer' => TRUE,
    'visits_importer' => FALSE,
    'wholesalers_importer' => FALSE,
    'wholesalers_secondary_importer' => TRUE,
    'wholesaler_user_import' => TRUE,
    'node' => TRUE,
    'user' => TRUE,
  );
  $export['default_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'trader_import-gps_coords-explode' => FALSE,
    'trader_import-gps_coords-trim' => FALSE,
    'traders_importer-address-find_replace' => FALSE,
    'traders_importer-cellphone-find_replace' => FALSE,
    'wholesalers_importer-_id-find_replace_open' => FALSE,
    'wholesalers_importer-_id-find_replace' => FALSE,
    'wholesalers_importer-user_id-trim' => TRUE,
    'wholesalers_importer-user_id-trim_end_bracket' => TRUE,
    'wholesalers_importer-logo_file_name-rewrite_image_url' => TRUE,
    'wholesalers_importer-region_id-trim' => TRUE,
    'wholesalers_importer-region_id-trim_bracket_region' => TRUE,
    'wholesalers_importer-region_id-find_replace' => FALSE,
    'wholesalers_importer-region_id-find_replace_close' => FALSE,
    'suppliers_importer-_id-find_replace' => FALSE,
    'suppliers_importer-_id-find_replace_closingobj' => FALSE,
    'suppliers_importer-wholesaler_ids-find_replace' => TRUE,
    'suppliers_importer-wholesaler_ids-find_replace_closing' => TRUE,
    'suppliers_importer-wholesaler_ids-find_replace_comma' => FALSE,
    'suppliers_importer-wholesaler_ids-find_replace_closing_curly' => FALSE,
    'suppliers_importer-wholesaler_ids-find_replace_space' => FALSE,
    'suppliers_importer-wholesaler_ids-find_replace_quote' => FALSE,
    'suppliers_importer-wholesaler_ids-explode' => FALSE,
    'suppliers_importer-wholesaler_ids-copy' => FALSE,
    'promotions_importer-_id-find_replace' => FALSE,
    'promotions_importer-_id-find_replacee' => FALSE,
    'promotions_importer-brand-find_replace' => FALSE,
    'promotions_importer-brand-find_replace_2' => FALSE,
    'promotions_importer-category_id-find_replace' => FALSE,
    'promotions_importer-category_id-find_replace_4' => FALSE,
    'promotions_importer-created_at-tapit_timedate' => TRUE,
    'promotions_importer-updated_at-tapit_timedate' => TRUE,
    'promotions_importer-deleted_at-tapit_timedate' => TRUE,
    'promotions_importer-start_at-tapit_timedate' => TRUE,
    'promotions_importer-end_at-tapit_timedate_1' => TRUE,
    'promotions_importer-wholesaler_ids-find_replace_open' => FALSE,
    'promotions_importer-wholesaler_ids-find_replace' => FALSE,
    'promotions_importer-wholesaler_ids-find_replace_open2' => FALSE,
    'promotions_importer-wholesaler_ids-find_replace_close2' => FALSE,
    'promotions_importer-wholesaler_ids-find_replace_regex' => FALSE,
    'promotions_importer-wholesaler_ids-find_replace_space' => FALSE,
    'promotions_importer-wholesaler_ids-explode' => FALSE,
    'promotions_importer-wholesaler_ids-copy' => FALSE,
    'suppliers_importer-wholesaler_ids-find_replace_regex' => FALSE,
    'stores_importer-_id-find_replace' => FALSE,
    'stores_importer-_id-find_replace_objectid_close' => FALSE,
    'stores_importer-address-find_replace' => FALSE,
    'stores_importer-country-rewrite' => TRUE,
    'stores_importer-country-copy' => TRUE,
    'stores_importer-region_id-find_replace' => FALSE,
    'stores_importer-region_id-find_replace_closingbracket' => FALSE,
    'stores_importer-wholesaler_ids-find_replace' => FALSE,
    'stores_importer-wholesaler_ids-find_replace_closingbracket' => FALSE,
    'stores_importer-wholesaler_ids-find_replace_array_opening' => FALSE,
    'stores_importer-wholesaler_ids-find_replace_closing' => FALSE,
    'stores_importer-wholesaler_ids-find_replace_quotation' => FALSE,
    'stores_importer-wholesaler_ids-find_replace_space' => FALSE,
    'stores_importer-wholesaler_ids-explode' => FALSE,
    'stores_importer-wholesaler_ids-copy' => FALSE,
    'visits_importer-_id-find_replace_objid' => FALSE,
    'visits_importer-_id-find_replace_close_bracket' => FALSE,
    'visits_importer-store_id-find_replace_objid' => FALSE,
    'visits_importer-store_id-find_replace' => FALSE,
    'visits_importer-time-tapit_timedate' => TRUE,
    'visits_importer-controller-explode' => FALSE,
    'wholesalers_importer-store_ids-find_replace' => FALSE,
    'wholesalers_importer-store_ids-find_replace_closesquare' => FALSE,
    'wholesalers_importer-store_ids-find_replace_array_open' => FALSE,
    'wholesalers_importer-store_ids-find_replace_array_close' => FALSE,
    'wholesalers_importer-store_ids-copy' => FALSE,
    'wholesalers_importer-product_ids-find_replace' => FALSE,
    'wholesalers_importer-product_ids-find_replace_new' => FALSE,
    'wholesalers_importer-store_ids-find_replace_newnew' => FALSE,
    'wholesalers_importer-store_ids-find_replace_new1' => FALSE,
    'wholesalers_importer-store_ids-explode' => FALSE,
    'wholesalers_importer-product_ids-find_replace_3' => FALSE,
    'wholesalers_importer-product_ids-tapit_timedate' => FALSE,
    'wholesalers_importer-product_ids-find_replace_4' => FALSE,
    'wholesalers_importer-product_ids-explode' => FALSE,
    'wholesalers_importer-store_ids-find_replace_ss' => FALSE,
    'product_importer-_id-find_replace' => FALSE,
    'product_importer-_id-find_replace_2' => FALSE,
    'product_importer-created_at-tapit_timedate' => TRUE,
    'product_importer-category_id-find_replace' => FALSE,
    'product_importer-category_id-find_replace_close' => FALSE,
    'product_importer-featured_advert_id-find_replace' => FALSE,
    'product_importer-featured_advert_id-find_replace_3' => FALSE,
    'product_importer-deleted_at-tapit_timedate' => TRUE,
    'product_importer-updated_at-tapit_timedate' => TRUE,
    'product_importer-wholesaler_ids-find_replace' => FALSE,
    'product_importer-wholesaler_ids-find_replace_2' => FALSE,
    'product_importer-wholesaler_ids-find_replace_3' => FALSE,
    'product_importer-wholesaler_ids-find_replace_4' => FALSE,
    'product_importer-wholesaler_ids-explode' => FALSE,
    'product_importer-wholesaler_ids-find_replace_space' => FALSE,
    'product_importer-wholesaler_ids-copy' => FALSE,
    'product_importer-supplier_id-find_replace' => FALSE,
    'product_importer-supplier_id-find_replace_close' => FALSE,
    'product_importer-supplier_id-find_replace_open' => FALSE,
    'product_importer-supplier_id-find_replace_close1' => FALSE,
    'product_importer-supplier_id-explode' => FALSE,
    'product_importer-supplier_id-find_replace_space2' => FALSE,
    'product_importer-supplier_id-copy' => FALSE,
    'product_importer-start_at-tapit_timedate' => TRUE,
    'product_importer-end_at-tapit_timedate' => TRUE,
    'publications_importer-_id-find_replace_open' => FALSE,
    'publications_importer-_id-find_replace' => FALSE,
    'publications_importer-pdf_updated_at-tapit_timedate' => TRUE,
    'publications_importer-updated_at-tapit_timedate' => TRUE,
    'publications_importer-created_at-tapit_timedate' => TRUE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_feeds_importer';
  $strongarm->value = 1;
  $export['features_admin_show_component_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_feeds_tamper';
  $strongarm->value = 1;
  $export['features_admin_show_component_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_reschedule';
  $strongarm->value = FALSE;
  $export['feeds_reschedule'] = $strongarm;

  return $export;
}
