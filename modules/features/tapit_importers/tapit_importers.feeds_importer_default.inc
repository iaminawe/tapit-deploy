<?php
/**
 * @file
 * tapit_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tapit_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'adverts_importer';
  $feeds_importer->config = array(
    'name' => 'Adverts Importer',
    'description' => 'Import Featured adverts',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => '_id',
            'target' => 'field_advert_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'banner_file_name',
            'target' => 'field_advert_banner_filename',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'deleted_at',
            'target' => 'field_banner_deleted_at_:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'end_at',
            'target' => 'field_advert_end_at:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'start_at',
            'target' => 'field_advert_start_at:start',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'supplier_id',
            'target' => 'field_wholesaler_suppliers',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'thumbnail_file_name',
            'target' => 'field_advert_thumbnail',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'updated_at',
            'target' => 'field_advert_updated_at:start',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'publish',
            'target' => 'field_advert_published',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'advert',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['adverts_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'brand_importer';
  $feeds_importer->config = array(
    'name' => 'Brand Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'brand',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'brand',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['brand_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'categories';
  $feeds_importer->config = array(
    'name' => 'Categories',
    'description' => 'Import categories from the mongodb csv categories csv',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'created_at',
            'target' => 'field_category_created:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'disabled',
            'target' => 'field_categorystatus',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'supplier_id',
            'target' => 'field_category_supplier',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'category',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['categories'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'incentives_importer';
  $feeds_importer->config = array(
    'name' => 'Incentives importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'incentive_id',
            'target' => 'field_incentive_reference',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'start_at',
            'target' => 'field_start_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'status',
            'target' => 'field_incentive_status:label',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'store_id',
            'target' => 'field_incentive_store',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'type',
            'target' => 'field_incentive_type_ref',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'incentives',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['incentives_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'likes_importer';
  $feeds_importer->config = array(
    'name' => 'Likes importer',
    'description' => 'Import the product likes from Mongodb',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'product_id',
            'target' => 'field_product_liked',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'store_id',
            'target' => 'field_product_liker',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'like',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['likes_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'orders_importer';
  $feeds_importer->config = array(
    'name' => 'Orders Importer',
    'description' => 'Import the orders table from the mongodb database',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'date_purchased',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'order_number',
            'target' => 'field_order_number',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'promotion_variant_id',
            'target' => 'field_order_variant_ref',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'promotion_version',
            'target' => 'field_order_promotion_version',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'quantity',
            'target' => 'field_order_quantity',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'store_id',
            'target' => 'field_order_store',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'wholesaler_id',
            'target' => 'field_order_wholesaler_ids',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'sent',
            'target' => 'field_order_sent',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'order',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['orders_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'product_importer';
  $feeds_importer->config = array(
    'name' => 'Product Importer',
    'description' => 'Import products',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'barcode',
            'target' => 'field_product_barcode',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'category_id',
            'target' => 'field_product_refcategory',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'featured_advert_id',
            'target' => 'field_product_featured_adref',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'deleted_at',
            'target' => 'field_product_deleted_at:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'like_count',
            'target' => 'field_product_like_count',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'pack_size',
            'target' => 'field_product_packsize',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'price',
            'target' => 'field_product_price',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'product_image_file_name',
            'target' => 'field_product_image',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'updated_at',
            'target' => 'field_product_updated_at:start',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'version',
            'target' => 'field_product_version',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'wholesaler_ids',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'wholesaler_ids_clean',
            'target' => 'field_product_wholesaler',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'supplier_id',
            'target' => 'field_product_suppliers',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'start_at',
            'target' => 'field_newproduct_date:start',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'end_at',
            'target' => 'field_newproduct_date:end',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'product',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['product_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'product_incentive_importer';
  $feeds_importer->config = array(
    'name' => 'Product Incentive Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'category_id',
            'target' => 'field_incentive_category',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'start_at',
            'target' => 'field_incentive_date:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'end_at',
            'target' => 'field_incentive_date:end',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'hint',
            'target' => 'field_incentive_hint',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'region_ids',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'region_ids_clean',
            'target' => 'field_incentive_region',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'region_ids_clean',
            'target' => 'field_debug_me',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'tokens',
            'target' => 'field_incentive_tokens',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'type',
            'target' => 'field_incentive_type:label',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'version',
            'target' => 'field_incentive_version',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'wholesaler_ids',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'wholesaler_ids_clean',
            'target' => 'field_incentive_wholesalers',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'wholesaler_ids_clean',
            'target' => 'field_debug_me',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'product_incentive',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['product_incentive_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'promotion_variant_importer';
  $feeds_importer->config = array(
    'name' => 'Promotion Variant Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'brand',
            'target' => 'field_promo_variant_brand',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'barcode',
            'target' => 'field_promo_variant_barcode',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'promotion_id',
            'target' => 'field_promotion_id',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'updated_at',
            'target' => 'field_promotion_updated_at:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'deleted_at',
            'target' => 'field_promotion_deleted_at:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'promotion_variant',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['promotion_variant_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'promotions_importer';
  $feeds_importer->config = array(
    'name' => 'Promotions Importer',
    'description' => 'Import promotions',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'brand',
            'target' => 'field_promo_brand:label',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'category_id',
            'target' => 'field_promo_category',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'updated_at',
            'target' => 'field_promo_updated_at:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'deleted_at',
            'target' => 'field_promo_deleted_at:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'start_at',
            'target' => 'field_promo_start_at:start',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'end_at',
            'target' => 'field_promo_end_at:start',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'order_count',
            'target' => 'field_promo_order_count',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'pack_size',
            'target' => 'field_promo_pack_size',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'price',
            'target' => 'field_promo_price',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'promotion_image_file_name',
            'target' => 'field_promotion_image',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'status',
            'target' => 'field_promo_status:label',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'version',
            'target' => 'field_promo_version',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'wholesaler_ids',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'wholesaler_ids_clean',
            'target' => 'field_promo_wholesaler',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'promotion',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['promotions_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'publications_importer';
  $feeds_importer->config = array(
    'name' => 'Publications Importer',
    'description' => 'Importing trade publications',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'archived',
            'target' => 'field_publication_archived',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'pdf_file_name',
            'target' => 'field_publication_pdf_filename',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'updated_at',
            'target' => 'field_publication_updated_at:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'version',
            'target' => 'field_publication_version',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'publication',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['publications_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'region_importer';
  $feeds_importer->config = array(
    'name' => 'Region importer',
    'description' => 'Import regions and their unique guid',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 0,
          ),
          2 => array(
            'source' => '_id',
            'target' => 'field_region_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'region',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['region_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'stores_importer';
  $feeds_importer->config = array(
    'name' => 'Stores Importer',
    'description' => 'importer to be used with mongodb export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'accreditation',
            'target' => 'field_trader_accreditation',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'address',
            'target' => 'field_trader_address:thoroughfare',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'affiliation',
            'target' => 'field_trader_affiliation_tax',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'card_balance',
            'target' => 'field_trader_cardbalance',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'cellphone',
            'target' => 'field_trader_cellphone',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'city',
            'target' => 'field_trader_address:locality',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'company_reg',
            'target' => 'field_trader_regnumber',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'current_login_time',
            'target' => 'field_trader_current_login_time:start',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'last_login_time',
            'target' => 'field_trader_last_login_time:start',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'device_imei',
            'target' => 'field_trader_device_imei',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'device_sn',
            'target' => 'field_trader_serial_number',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'latitude',
            'target' => 'field_trader_gps:lat',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'longitude',
            'target' => 'field_trader_gps:lon',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'country',
            'target' => 'field_trader_address:country',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'id_number',
            'target' => 'field_trader_id_number',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'manager',
            'target' => 'field_trader_manager',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'masscash_number',
            'target' => 'field_masscash_number',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'owner',
            'target' => 'field_trader_owner',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'postal_code',
            'target' => 'field_trader_address:postal_code',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'profile_image_file_name',
            'target' => 'field_trader_profileimage',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'region_id',
            'target' => 'field_wholesaler_region_ref',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'reward_card',
            'target' => 'field_trader_reward_card',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'reward_card_error',
            'target' => 'field_reward_card_error',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'sim_card_number',
            'target' => 'field_trader_sim',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'suburb',
            'target' => 'field_trader_address:dependent_locality',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'telephone',
            'target' => 'field_trader_telephone',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'wholesalers_limited',
            'target' => 'field_wholesalers_limited',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'updated_at',
            'target' => 'field_trader_updated_at:start',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => 'size',
            'target' => 'field_trader_size',
            'unique' => FALSE,
          ),
          32 => array(
            'source' => 'email',
            'target' => 'field_trader_email',
            'unique' => FALSE,
          ),
          33 => array(
            'source' => 'wholesaler_ids',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          34 => array(
            'source' => 'wholesaler_ids_clean',
            'target' => 'field_store_wholesalers',
            'unique' => FALSE,
          ),
          35 => array(
            'source' => 'app_demonstrated',
            'target' => 'field_app_demonstrated',
            'unique' => FALSE,
          ),
          36 => array(
            'source' => 'registration_date',
            'target' => 'field_store_registration_date:start',
            'unique' => FALSE,
          ),
          37 => array(
            'source' => 'state_comments',
            'target' => 'field_store_state_comments',
            'unique' => FALSE,
          ),
          38 => array(
            'source' => 'tacs_explained',
            'target' => 'field_store_tc_explained',
            'unique' => FALSE,
          ),
          39 => array(
            'source' => 'wholesalers_free_text',
            'target' => 'field_store_wholesalers_freetext',
            'unique' => FALSE,
          ),
          40 => array(
            'source' => 'trading_name',
            'target' => 'field_store_trading_name',
            'unique' => FALSE,
          ),
          41 => array(
            'source' => 'till_points',
            'target' => 'field_store_till_points',
            'unique' => FALSE,
          ),
          42 => array(
            'source' => 'english_proficiency',
            'target' => 'field_store_english_proficiency',
            'unique' => FALSE,
          ),
          43 => array(
            'source' => 'owner_nationality',
            'target' => 'field_storeowner_nationality:label',
            'unique' => FALSE,
          ),
          44 => array(
            'source' => 'app_issues',
            'target' => 'field_store_app_issues',
            'unique' => FALSE,
          ),
          45 => array(
            'source' => 'comments',
            'target' => 'body',
            'unique' => FALSE,
          ),
          46 => array(
            'source' => 'device_type',
            'target' => 'field_store_device_type:label',
            'unique' => FALSE,
          ),
          47 => array(
            'source' => 'service_provider',
            'target' => 'field_service_provider_er:label',
            'unique' => FALSE,
          ),
          48 => array(
            'source' => 'state',
            'target' => 'field_store_trader_state:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'store',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['stores_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'suppliers_importer';
  $feeds_importer->config = array(
    'name' => 'Suppliers Importer',
    'description' => 'Imports suppliers from mongodb csv spreadsheet',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'wholesaler_ids',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'wholesaler_ids_clean',
            'target' => 'field_supplier_wholesaler',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'supplier',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['suppliers_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'survey_incentive_importer';
  $feeds_importer->config = array(
    'name' => 'Survey Incentive Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'created_at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'start_at',
            'target' => 'field_surveyincentive_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'end_at',
            'target' => 'field_surveyincentive_date:end',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'number_of_responses',
            'target' => 'field_surveyincentive_responses',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'number_of_stores',
            'target' => 'field_surveyincentive_stores',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'region_ids',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'region_ids_clean',
            'target' => 'field_surveyincentive_regions',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'tokens',
            'target' => 'field_surveyincentive_tokens',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'version',
            'target' => 'field_surveyincentive_version',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'wholesaler_ids',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'wholesaler_ids_clean',
            'target' => 'field_surveyincentive_wholesaler',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'survey_incentive',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['survey_incentive_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'traders_importer';
  $feeds_importer->config = array(
    'name' => 'Traders Importer',
    'description' => 'An importer to bring in trader store information',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'trader',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Address',
            'target' => 'field_trader_address:thoroughfare',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Suburb',
            'target' => 'field_trader_address:dependent_locality',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'City',
            'target' => 'field_trader_address:locality',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Region',
            'target' => 'field_trader_address:administrative_area',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Postal Code',
            'target' => 'field_trader_address:postal_code',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Country',
            'target' => 'field_trader_address:country',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Latitude',
            'target' => 'field_trader_gps:lat',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Longitude',
            'target' => 'field_trader_gps:lon',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Size',
            'target' => 'field_trader_size',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Affiliation',
            'target' => 'field_trader_affiliation',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Owner',
            'target' => 'field_trader_owner',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Telephone',
            'target' => 'field_trader_telephone',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Cellphone',
            'target' => 'field_trader_cellphone',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Email',
            'target' => 'field_trader_email',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Manager',
            'target' => 'field_trader_manager',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Reward Card',
            'target' => 'field_trader_reward_card',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Accreditation',
            'target' => 'field_trader_accreditation',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'ID Number',
            'target' => 'field_trader_id_number',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Device Type',
            'target' => 'field_trader_devicetype',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Device S/N',
            'target' => 'field_trader_serial_number',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Device IMEI',
            'target' => 'field_trader_device_imei',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Sim Card Number',
            'target' => 'field_trader_sim',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Service Provider',
            'target' => 'field_trader_service_provider',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Device Token',
            'target' => 'field_trader_device_token',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'Profile Image',
            'target' => 'field_trader_profileimage',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'Forced Wholesalers',
            'target' => 'field_forced_wholesaler',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['traders_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'visits_importer';
  $feeds_importer->config = array(
    'name' => 'Visits importer',
    'description' => 'Imports visits from mongodb csv',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'store_id',
            'target' => 'field_visit_store',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'time',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'action',
            'target' => 'field_visit_action_tax',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'controller',
            'target' => 'field_visit_keywords',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'visit',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['visits_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wholesaler_user_import';
  $feeds_importer->config = array(
    'name' => 'Wholesaler User Import',
    'description' => 'Imports wholesalers and maps it to the wholesaler profile',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['wholesaler_user_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wholesalers_importer';
  $feeds_importer->config = array(
    'name' => 'Wholesalers importer',
    'description' => 'Imports wholesalers as content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'wholesaler',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => '_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => '_id',
            'target' => 'field_wholesaler_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'address',
            'target' => 'field_wholesaler_addresstext',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'telephone',
            'target' => 'field_wholesaler_telephone',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'user_id',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'region_id',
            'target' => 'field_wholesaler_region_ref',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'logo_file_name',
            'target' => 'field_logo_path',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'store_ids',
            'target' => 'field_wholesaler_stores',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 0,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['wholesalers_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wholesalers_secondary_importer';
  $feeds_importer->config = array(
    'name' => 'Wholesalers Secondary Importer',
    'description' => 'Use this to prepopulate the full list of wholesalers from the stores list',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'wholesaler_ids',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'wholesaler_ids_one',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'wholesaler_ids_two',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'wholesaler_ids_three',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'wholesaler',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['wholesalers_secondary_importer'] = $feeds_importer;

  return $export;
}
