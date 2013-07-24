<?php
/**
 * @file
 * tapit_orders.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tapit_orders_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'orders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Orders';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p>Displaying @start - @end of @total orders</p>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['id'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['field'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['label'] = 'supplier';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['required'] = TRUE;
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_order_store']['id'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['fields']['field_order_store']['field'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Order Number */
  $handler->display->display_options['fields']['field_order_number']['id'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['table'] = 'field_data_field_order_number';
  $handler->display->display_options['fields']['field_order_number']['field'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['exclude'] = TRUE;
  /* Field: Content: Promotion */
  $handler->display->display_options['fields']['field_promotion_id']['id'] = 'field_promotion_id';
  $handler->display->display_options['fields']['field_promotion_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['fields']['field_promotion_id']['field'] = 'field_promotion_id';
  $handler->display->display_options['fields']['field_promotion_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['fields']['field_promotion_id']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Promotion Variant */
  $handler->display->display_options['fields']['field_order_variant_ref']['id'] = 'field_order_variant_ref';
  $handler->display->display_options['fields']['field_order_variant_ref']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['fields']['field_order_variant_ref']['field'] = 'field_order_variant_ref';
  $handler->display->display_options['fields']['field_order_variant_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Quantity */
  $handler->display->display_options['fields']['field_order_quantity']['id'] = 'field_order_quantity';
  $handler->display->display_options['fields']['field_order_quantity']['table'] = 'field_data_field_order_quantity';
  $handler->display->display_options['fields']['field_order_quantity']['field'] = 'field_order_quantity';
  $handler->display->display_options['fields']['field_order_quantity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_quantity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_promo_price']['id'] = 'field_promo_price';
  $handler->display->display_options['fields']['field_promo_price']['table'] = 'field_data_field_promo_price';
  $handler->display->display_options['fields']['field_promo_price']['field'] = 'field_promo_price';
  $handler->display->display_options['fields']['field_promo_price']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['field_promo_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_order_quantity]*[field_promo_price]';
  /* Sort criterion: COUNT(Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Orders */
  $handler = $view->new_display('page', 'Orders', 'page');
  $handler->display->display_options['path'] = 'statistics/orders';

  /* Display: Total Orders */
  $handler = $view->new_display('block', 'Total Orders', 'block_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Post date) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Total Line Items */
  $handler = $view->new_display('block', 'Total Line Items', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Line Items';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Store Orders by Line */
  $handler = $view->new_display('entity_view', 'Store Orders by Line', 'entity_view_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_order_number',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_promotion_id' => 'field_promotion_id',
    'field_order_number' => 'field_order_number',
    'field_order_variant_ref' => 'field_order_variant_ref',
    'field_order_promotion_version' => 'field_order_promotion_version',
    'field_order_quantity' => 'field_order_quantity',
    'field_order_store' => 'field_order_store',
    'field_promo_price' => 'field_promo_price',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_promotion_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_variant_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_promotion_version' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_promo_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p>Displaying @start - @end of @total order line items</p>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Promotion */
  $handler->display->display_options['fields']['field_promotion_id']['id'] = 'field_promotion_id';
  $handler->display->display_options['fields']['field_promotion_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['fields']['field_promotion_id']['field'] = 'field_promotion_id';
  $handler->display->display_options['fields']['field_promotion_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['fields']['field_promotion_id']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Order Number */
  $handler->display->display_options['fields']['field_order_number']['id'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['table'] = 'field_data_field_order_number';
  $handler->display->display_options['fields']['field_order_number']['field'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['label'] = '';
  $handler->display->display_options['fields']['field_order_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_number']['element_label_colon'] = FALSE;
  /* Field: Content: Promotion Variant */
  $handler->display->display_options['fields']['field_order_variant_ref']['id'] = 'field_order_variant_ref';
  $handler->display->display_options['fields']['field_order_variant_ref']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['fields']['field_order_variant_ref']['field'] = 'field_order_variant_ref';
  $handler->display->display_options['fields']['field_order_variant_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Promotion Version */
  $handler->display->display_options['fields']['field_order_promotion_version']['id'] = 'field_order_promotion_version';
  $handler->display->display_options['fields']['field_order_promotion_version']['table'] = 'field_data_field_order_promotion_version';
  $handler->display->display_options['fields']['field_order_promotion_version']['field'] = 'field_order_promotion_version';
  $handler->display->display_options['fields']['field_order_promotion_version']['exclude'] = TRUE;
  /* Field: Content: Quantity */
  $handler->display->display_options['fields']['field_order_quantity']['id'] = 'field_order_quantity';
  $handler->display->display_options['fields']['field_order_quantity']['table'] = 'field_data_field_order_quantity';
  $handler->display->display_options['fields']['field_order_quantity']['field'] = 'field_order_quantity';
  $handler->display->display_options['fields']['field_order_quantity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_quantity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_order_store']['id'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['fields']['field_order_store']['field'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_store']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_promo_price']['id'] = 'field_promo_price';
  $handler->display->display_options['fields']['field_promo_price']['table'] = 'field_data_field_promo_price';
  $handler->display->display_options['fields']['field_promo_price']['field'] = 'field_promo_price';
  $handler->display->display_options['fields']['field_promo_price']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['field_promo_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Price';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['prefix'] = 'R ';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_order_quantity]*[field_promo_price]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Store (field_order_store) */
  $handler->display->display_options['arguments']['field_order_store_target_id']['id'] = 'field_order_store_target_id';
  $handler->display->display_options['arguments']['field_order_store_target_id']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['arguments']['field_order_store_target_id']['field'] = 'field_order_store_target_id';
  $handler->display->display_options['arguments']['field_order_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_order_store_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_order_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_order_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_order_store_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );

  /* Display: Store Orders by Date */
  $handler = $view->new_display('entity_view', 'Store Orders by Date', 'entity_view_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Store Orders by Supplier';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '300';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '40';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Line Items';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Store (field_order_store) */
  $handler->display->display_options['arguments']['field_order_store_target_id']['id'] = 'field_order_store_target_id';
  $handler->display->display_options['arguments']['field_order_store_target_id']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['arguments']['field_order_store_target_id']['field'] = 'field_order_store_target_id';
  $handler->display->display_options['arguments']['field_order_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_order_store_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_order_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_order_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_order_store_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );

  /* Display: Store Orders Total */
  $handler = $view->new_display('entity_view', 'Store Orders Total', 'entity_view_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Store Orders Total';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'span2';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="numblock"><h2>@total</h2>
<span>ORDERS</span>
</div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Line Items';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'y';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Store (field_order_store) */
  $handler->display->display_options['arguments']['field_order_store_target_id']['id'] = 'field_order_store_target_id';
  $handler->display->display_options['arguments']['field_order_store_target_id']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['arguments']['field_order_store_target_id']['field'] = 'field_order_store_target_id';
  $handler->display->display_options['arguments']['field_order_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_order_store_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_order_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_order_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_order_store_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );

  /* Display: Orders by Date */
  $handler = $view->new_display('block', 'Orders by Date', 'block_3');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'AreaChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '500';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '50';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#87BB57';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Orders by Date Table */
  $handler = $view->new_display('attachment', 'Orders by Date Table', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_order_store' => 'field_order_store',
    'field_order_number' => 'field_order_number',
    'field_promotion_id' => 'field_promotion_id',
    'field_order_variant_ref' => 'field_order_variant_ref',
    'field_order_quantity' => 'field_order_quantity',
    'field_promo_price' => 'field_promo_price',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_order_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_promotion_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_variant_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_promo_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'yearmonth';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'M y';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'month';
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_2' => 0,
    'block_1' => 0,
    'block' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Orders by Date CSV */
  $handler = $view->new_display('views_data_export', 'Orders by Date CSV', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders by Date';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'yearmonth';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'Y-m-01';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'month';
  $handler->display->display_options['path'] = 'orders/date/orders_by_date.csv';
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_4' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_2' => 0,
    'block_1' => 0,
    'block' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Orders by Wholesaler */
  $handler = $view->new_display('block', 'Orders by Wholesaler', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Orders';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '600';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '40';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#135C32';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesalers';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Orders By Wholesalers Table */
  $handler = $view->new_display('attachment', 'Orders By Wholesalers Table', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders by Wholesaler';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_order_store' => 'field_order_store',
    'field_order_number' => 'field_order_number',
    'field_promotion_id' => 'field_promotion_id',
    'field_order_variant_ref' => 'field_order_variant_ref',
    'field_order_quantity' => 'field_order_quantity',
    'field_promo_price' => 'field_promo_price',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_order_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_promotion_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_variant_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_promo_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Wholesaler';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
    'page' => 0,
    'block_3' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'entity_view_2' => 0,
    'entity_view_1' => 0,
    'entity_view_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Order by Wholesalers CSV */
  $handler = $view->new_display('views_data_export', 'Order by Wholesalers CSV', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Wholesaler';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'orders/wholesalers/orders-by-wholesaler.csv';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
    'page' => 0,
    'block_3' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'entity_view_2' => 0,
    'entity_view_1' => 0,
    'entity_view_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
  );

  /* Display: Orders by Supplier */
  $handler = $view->new_display('block', 'Orders by Supplier', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders by Supplier';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '500';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '70';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#135C32';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['id'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['field'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['label'] = 'supplier';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Orders by Supplier Table */
  $handler = $view->new_display('attachment', 'Orders by Supplier Table', 'attachment_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = 'Orders';
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['displays'] = array(
    'block_6' => 'block_6',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_4' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_2' => 0,
    'block_1' => 0,
    'block_3' => 0,
    'block' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Orders by Supplier CSV */
  $handler = $view->new_display('views_data_export', 'Orders by Supplier CSV', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = 'Orders';
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'statistics/orders/suppliers/orders_by_suppliers.csv';
  $handler->display->display_options['displays'] = array(
    'block_6' => 'block_6',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_4' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_2' => 0,
    'block_1' => 0,
    'block_3' => 0,
    'block' => 0,
  );

  /* Display: Orders by Category */
  $handler = $view->new_display('block', 'Orders by Category', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders by Supplier';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_promo_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '500';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '50';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#87BB57';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['id'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['field'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['label'] = 'supplier';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_promo_category']['id'] = 'field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['table'] = 'field_data_field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['field'] = 'field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['field_promo_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Orders by Category Table */
  $handler = $view->new_display('attachment', 'Orders by Category Table', 'attachment_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_promo_category' => 'field_promo_category',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_promo_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_promo_category']['id'] = 'field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['table'] = 'field_data_field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['field'] = 'field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['field_promo_category']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['displays'] = array(
    'block_7' => 'block_7',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_4' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_3' => 0,
    'block' => 0,
    'block_6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Orders by Category CSV */
  $handler = $view->new_display('views_data_export', 'Orders by Category CSV', 'views_data_export_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_promo_category']['id'] = 'field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['table'] = 'field_data_field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['field'] = 'field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['field_promo_category']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['path'] = 'orders/category/orders_by_category.csv';
  $handler->display->display_options['displays'] = array(
    'block_7' => 'block_7',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_4' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_3' => 0,
    'block' => 0,
    'block_6' => 0,
  );

  /* Display: Orders by Promotion */
  $handler = $view->new_display('block', 'Orders by Promotion', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders by Promotion';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '500';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '50';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#135C32';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['id'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['field'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['label'] = 'supplier';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Promotion';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Orders by PromotionTable */
  $handler = $view->new_display('attachment', 'Orders by PromotionTable', 'attachment_5');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Promotion';
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_4' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_3' => 0,
    'block' => 0,
    'block_6' => 0,
    'block_7' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Orders by Promotion CSV */
  $handler = $view->new_display('views_data_export', 'Orders by Promotion CSV', 'views_data_export_5');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Promotion';
  $handler->display->display_options['path'] = 'orders/promotions/orders_by_promotion.csv';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_4' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_3' => 0,
    'block' => 0,
    'block_6' => 0,
    'block_7' => 0,
  );

  /* Display: Orders by Store */
  $handler = $view->new_display('block', 'Orders by Store', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders by Store';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '500';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['id'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['field'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['label'] = 'supplier';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_store_target_id']['id'] = 'field_order_store_target_id';
  $handler->display->display_options['relationships']['field_order_store_target_id']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['relationships']['field_order_store_target_id']['field'] = 'field_order_store_target_id';
  $handler->display->display_options['relationships']['field_order_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_order_store_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['separator'] = '';
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_order_store_1']['id'] = 'field_order_store_1';
  $handler->display->display_options['fields']['field_order_store_1']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['fields']['field_order_store_1']['field'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store_1']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Orders by Store Table */
  $handler = $view->new_display('attachment', 'Orders by Store Table', 'attachment_6');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['separator'] = '';
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_order_store']['id'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['fields']['field_order_store']['field'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['displays'] = array(
    'block_2' => 'block_2',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_4' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_3' => 0,
    'block' => 0,
    'block_6' => 0,
    'block_7' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Orders by Store CSV */
  $handler = $view->new_display('views_data_export', 'Orders by Store CSV', 'views_data_export_6');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_order_store']['id'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['fields']['field_order_store']['field'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'orders/store/orders_by_store.csv';
  $handler->display->display_options['displays'] = array(
    'block_2' => 'block_2',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_4' => 0,
    'entity_view_1' => 0,
    'entity_view_2' => 0,
    'entity_view_3' => 0,
    'block_3' => 0,
    'block' => 0,
    'block_6' => 0,
    'block_7' => 0,
    'block_1' => 0,
  );

  /* Display: Top Wholesalers */
  $handler = $view->new_display('block', 'Top Wholesalers', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Wholesalers';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesalers';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Top Categories */
  $handler = $view->new_display('block', 'Top Categories', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Categories';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'field_promo_category' => 'field_promo_category',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_promo_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['id'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['field'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['label'] = 'supplier';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_promo_category']['id'] = 'field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['table'] = 'field_data_field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['field'] = 'field_promo_category';
  $handler->display->display_options['fields']['field_promo_category']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['field_promo_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Top Stores */
  $handler = $view->new_display('block', 'Top Stores', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Stores';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_order_store_1' => 'field_order_store_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_store_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['id'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['field'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['label'] = 'supplier';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_store_target_id']['id'] = 'field_order_store_target_id';
  $handler->display->display_options['relationships']['field_order_store_target_id']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['relationships']['field_order_store_target_id']['field'] = 'field_order_store_target_id';
  $handler->display->display_options['relationships']['field_order_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_order_store_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['separator'] = '';
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_order_store_1']['id'] = 'field_order_store_1';
  $handler->display->display_options['fields']['field_order_store_1']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['fields']['field_order_store_1']['field'] = 'field_order_store';
  $handler->display->display_options['fields']['field_order_store_1']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Top Regions */
  $handler = $view->new_display('block', 'Top Regions', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Regions';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_wholesaler_region_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['id'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['table'] = 'field_data_field_order_variant_ref';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['field'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_order_variant_ref_target_id']['label'] = 'variant';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['relationship'] = 'field_order_variant_ref_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['id'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['field'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['relationships']['field_promo_wholesaler_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['id'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['field'] = 'reverse_field_supplier_wholesaler_node';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['relationship'] = 'field_promo_wholesaler_target_id';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['label'] = 'supplier';
  $handler->display->display_options['relationships']['reverse_field_supplier_wholesaler_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_store_target_id']['id'] = 'field_order_store_target_id';
  $handler->display->display_options['relationships']['field_order_store_target_id']['table'] = 'field_data_field_order_store';
  $handler->display->display_options['relationships']['field_order_store_target_id']['field'] = 'field_order_store_target_id';
  $handler->display->display_options['relationships']['field_order_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_order_store_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['separator'] = '';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['id'] = 'field_wholesaler_region_ref';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['table'] = 'field_data_field_wholesaler_region_ref';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['field'] = 'field_wholesaler_region_ref';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['relationship'] = 'field_order_store_target_id';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $export['orders'] = $view;

  return $export;
}
