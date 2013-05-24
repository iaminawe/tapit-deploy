<?php
/**
 * @file
 * tapit_products.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tapit_products_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_ads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['column_classes'] = 'span4';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'advert' => 'advert',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'products/new';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'New Products List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Promotions';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['featured_ads'] = $view;

  $view = new view();
  $view->name = 'product_likes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product Likes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Likes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '70';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#769F45';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_product_liked_node']['id'] = 'reverse_field_product_liked_node';
  $handler->display->display_options['relationships']['reverse_field_product_liked_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_product_liked_node']['field'] = 'reverse_field_product_liked_node';
  $handler->display->display_options['relationships']['reverse_field_product_liked_node']['label'] = 'likes';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: COUNT(Content: Product) */
  $handler->display->display_options['fields']['field_product_liked']['id'] = 'field_product_liked';
  $handler->display->display_options['fields']['field_product_liked']['table'] = 'field_data_field_product_liked';
  $handler->display->display_options['fields']['field_product_liked']['field'] = 'field_product_liked';
  $handler->display->display_options['fields']['field_product_liked']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_product_liked']['separator'] = ', ';
  /* Sort criterion: COUNT(Content: Product (field_product_liked)) */
  $handler->display->display_options['sorts']['field_product_liked_target_id']['id'] = 'field_product_liked_target_id';
  $handler->display->display_options['sorts']['field_product_liked_target_id']['table'] = 'field_data_field_product_liked';
  $handler->display->display_options['sorts']['field_product_liked_target_id']['field'] = 'field_product_liked_target_id';
  $handler->display->display_options['sorts']['field_product_liked_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_product_liked_target_id']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: COUNT(Content: Product (field_product_liked)) */
  $handler->display->display_options['filters']['field_product_liked_target_id']['id'] = 'field_product_liked_target_id';
  $handler->display->display_options['filters']['field_product_liked_target_id']['table'] = 'field_data_field_product_liked';
  $handler->display->display_options['filters']['field_product_liked_target_id']['field'] = 'field_product_liked_target_id';
  $handler->display->display_options['filters']['field_product_liked_target_id']['group_type'] = 'count';
  $handler->display->display_options['filters']['field_product_liked_target_id']['operator'] = '>=';
  $handler->display->display_options['filters']['field_product_liked_target_id']['value']['value'] = '5';

  /* Display: Likes */
  $handler = $view->new_display('page', 'Likes', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/products/likes';

  /* Display: Likes by Product */
  $handler = $view->new_display('block', 'Likes by Product', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '70';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#769F45';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Product) */
  $handler->display->display_options['fields']['field_product_liked']['id'] = 'field_product_liked';
  $handler->display->display_options['fields']['field_product_liked']['table'] = 'field_data_field_product_liked';
  $handler->display->display_options['fields']['field_product_liked']['field'] = 'field_product_liked';
  $handler->display->display_options['fields']['field_product_liked']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_product_liked']['label'] = '';
  $handler->display->display_options['fields']['field_product_liked']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_liked']['separator'] = ', ';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Product (field_product_liked)) */
  $handler->display->display_options['sorts']['field_product_liked_target_id']['id'] = 'field_product_liked_target_id';
  $handler->display->display_options['sorts']['field_product_liked_target_id']['table'] = 'field_data_field_product_liked';
  $handler->display->display_options['sorts']['field_product_liked_target_id']['field'] = 'field_product_liked_target_id';
  $handler->display->display_options['sorts']['field_product_liked_target_id']['relationship'] = 'reverse_field_product_liked_node';
  $handler->display->display_options['sorts']['field_product_liked_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_product_liked_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: COUNT(Content: Product (field_product_liked)) */
  $handler->display->display_options['filters']['field_product_liked_target_id']['id'] = 'field_product_liked_target_id';
  $handler->display->display_options['filters']['field_product_liked_target_id']['table'] = 'field_data_field_product_liked';
  $handler->display->display_options['filters']['field_product_liked_target_id']['field'] = 'field_product_liked_target_id';
  $handler->display->display_options['filters']['field_product_liked_target_id']['relationship'] = 'reverse_field_product_liked_node';
  $handler->display->display_options['filters']['field_product_liked_target_id']['group_type'] = 'count';
  $handler->display->display_options['filters']['field_product_liked_target_id']['operator'] = '>=';
  $handler->display->display_options['filters']['field_product_liked_target_id']['value']['value'] = '5';

  /* Display: Likes by Store */
  $handler = $view->new_display('block', 'Likes by Store', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_product_liker_node']['id'] = 'reverse_field_product_liker_node';
  $handler->display->display_options['relationships']['reverse_field_product_liker_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_product_liker_node']['field'] = 'reverse_field_product_liker_node';
  $handler->display->display_options['relationships']['reverse_field_product_liker_node']['label'] = 'liker';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_product_liker']['id'] = 'field_product_liker';
  $handler->display->display_options['fields']['field_product_liker']['table'] = 'field_data_field_product_liker';
  $handler->display->display_options['fields']['field_product_liker']['field'] = 'field_product_liker';
  $handler->display->display_options['fields']['field_product_liker']['relationship'] = 'reverse_field_product_liker_node';
  $handler->display->display_options['fields']['field_product_liker']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_product_liker']['label'] = '';
  $handler->display->display_options['fields']['field_product_liker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_liker']['separator'] = ', ';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Store (field_product_liker)) */
  $handler->display->display_options['sorts']['field_product_liker_target_id']['id'] = 'field_product_liker_target_id';
  $handler->display->display_options['sorts']['field_product_liker_target_id']['table'] = 'field_data_field_product_liker';
  $handler->display->display_options['sorts']['field_product_liker_target_id']['field'] = 'field_product_liker_target_id';
  $handler->display->display_options['sorts']['field_product_liker_target_id']['relationship'] = 'reverse_field_product_liker_node';
  $handler->display->display_options['sorts']['field_product_liker_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_product_liker_target_id']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_product_liker_target_id']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_product_liker_target_id']['expose']['label'] = 'amount';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'store' => 'store',
  );
  /* Filter criterion: COUNT(Content: Store (field_product_liker)) */
  $handler->display->display_options['filters']['field_product_liker_target_id']['id'] = 'field_product_liker_target_id';
  $handler->display->display_options['filters']['field_product_liker_target_id']['table'] = 'field_data_field_product_liker';
  $handler->display->display_options['filters']['field_product_liker_target_id']['field'] = 'field_product_liker_target_id';
  $handler->display->display_options['filters']['field_product_liker_target_id']['relationship'] = 'reverse_field_product_liker_node';
  $handler->display->display_options['filters']['field_product_liker_target_id']['group_type'] = 'count';
  $handler->display->display_options['filters']['field_product_liker_target_id']['operator'] = '>';
  $handler->display->display_options['filters']['field_product_liker_target_id']['value']['value'] = '5';

  /* Display: Likes by Date */
  $handler = $view->new_display('block', 'Likes by Date', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Likes by Date';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'yearmonth';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'like' => 'like',
  );

  /* Display: Most Liked Products */
  $handler = $view->new_display('block', 'Most Liked Products', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_product_liked' => 'field_product_liked',
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
    'field_product_liked' => array(
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

  /* Display: Likes EVA */
  $handler = $view->new_display('entity_view', 'Likes EVA', 'entity_view_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
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
    'created' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Store (field_product_liker) */
  $handler->display->display_options['arguments']['field_product_liker_target_id']['id'] = 'field_product_liker_target_id';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['table'] = 'field_data_field_product_liker';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['field'] = 'field_product_liker_target_id';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'like' => 'like',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );
  $handler->display->display_options['show_title'] = 0;

  /* Display: Store Total Likes */
  $handler = $view->new_display('entity_view', 'Store Total Likes', 'entity_view_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'numblock span2';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2>[nid]</h2>
<span>LIKES</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Store (field_product_liker) */
  $handler->display->display_options['arguments']['field_product_liker_target_id']['id'] = 'field_product_liker_target_id';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['table'] = 'field_data_field_product_liker';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['field'] = 'field_product_liker_target_id';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_product_liker_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'like' => 'like',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );
  $handler->display->display_options['show_title'] = 0;
  $export['product_likes'] = $view;

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Product Variants';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Variants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['column_classes'] = 'span4';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: New Product (field_product_featured_adref) */
  $handler->display->display_options['arguments']['field_product_featured_adref_target_id']['id'] = 'field_product_featured_adref_target_id';
  $handler->display->display_options['arguments']['field_product_featured_adref_target_id']['table'] = 'field_data_field_product_featured_adref';
  $handler->display->display_options['arguments']['field_product_featured_adref_target_id']['field'] = 'field_product_featured_adref_target_id';
  $handler->display->display_options['arguments']['field_product_featured_adref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_product_featured_adref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_product_featured_adref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_product_featured_adref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_product_featured_adref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'product/variants';
  $handler->display->display_options['menu']['title'] = 'New Product Variants';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Products';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'advert',
  );
  $handler->display->display_options['show_title'] = 1;
  $export['products'] = $view;

  $view = new view();
  $view->name = 'statistics_orders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
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
    'product' => 'product',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Products */
  $handler = $view->new_display('page', 'Products', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/products';

  /* Display: Total Products */
  $handler = $view->new_display('block', 'Total Products', 'block_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'advert' => 'advert',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Total Variants */
  $handler = $view->new_display('block', 'Total Variants', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Variants';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Products by Date */
  $handler = $view->new_display('block', 'Products by Date', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
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

  /* Display: Products by Date Table */
  $handler = $view->new_display('attachment', 'Products by Date Table', 'attachment_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Products';
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

  /* Display: Products by Date CSV */
  $handler = $view->new_display('views_data_export', 'Products by Date CSV', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Products by Date';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'month';
  $handler->display->display_options['path'] = 'products/date/products_by_date.csv';
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

  /* Display: Products  by Wholesaler */
  $handler = $view->new_display('block', 'Products  by Wholesaler', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Products by Wholesaler';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_wholesaler',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  /* Field: Content: Wholesaler */
  $handler->display->display_options['fields']['field_product_wholesaler']['id'] = 'field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['table'] = 'field_data_field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['field'] = 'field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_product_wholesaler']['delta_offset'] = '0';
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
    'product' => 'product',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Products By Wholesalers Table */
  $handler = $view->new_display('attachment', 'Products By Wholesalers Table', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Products by Wholesaler';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Wholesaler */
  $handler->display->display_options['fields']['field_product_wholesaler']['id'] = 'field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['table'] = 'field_data_field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['field'] = 'field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_product_wholesaler']['delta_offset'] = '0';
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = 'Product Variant';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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

  /* Display: Products by Wholesalers CSV */
  $handler = $view->new_display('views_data_export', 'Products by Wholesalers CSV', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Wholesaler */
  $handler->display->display_options['fields']['field_product_wholesaler']['id'] = 'field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['table'] = 'field_data_field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['field'] = 'field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_product_wholesaler']['delta_offset'] = '0';
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Products';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'products/wholesalers/products_by_wholesaler.csv';
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

  /* Display: Products by Supplier */
  $handler = $view->new_display('block', 'Products by Supplier', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Products by Supplier';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_suppliers',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  /* Field: Content: Suppliers */
  $handler->display->display_options['fields']['field_product_suppliers']['id'] = 'field_product_suppliers';
  $handler->display->display_options['fields']['field_product_suppliers']['table'] = 'field_data_field_product_suppliers';
  $handler->display->display_options['fields']['field_product_suppliers']['field'] = 'field_product_suppliers';
  $handler->display->display_options['fields']['field_product_suppliers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_product_suppliers']['delta_offset'] = '0';
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
    'product' => 'product',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Products by Supplier Table */
  $handler = $view->new_display('attachment', 'Products by Supplier Table', 'attachment_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  /* Field: Content: Suppliers */
  $handler->display->display_options['fields']['field_product_suppliers']['id'] = 'field_product_suppliers';
  $handler->display->display_options['fields']['field_product_suppliers']['table'] = 'field_data_field_product_suppliers';
  $handler->display->display_options['fields']['field_product_suppliers']['field'] = 'field_product_suppliers';
  $handler->display->display_options['fields']['field_product_suppliers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_product_suppliers']['delta_offset'] = '0';
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = 'Products';
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

  /* Display: Products by Supplier CSV */
  $handler = $view->new_display('views_data_export', 'Products by Supplier CSV', 'views_data_export_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Suppliers */
  $handler->display->display_options['fields']['field_product_suppliers']['id'] = 'field_product_suppliers';
  $handler->display->display_options['fields']['field_product_suppliers']['table'] = 'field_data_field_product_suppliers';
  $handler->display->display_options['fields']['field_product_suppliers']['field'] = 'field_product_suppliers';
  $handler->display->display_options['fields']['field_product_suppliers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_product_suppliers']['delta_offset'] = '0';
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = 'Products';
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'statistics/products/suppliers/poducts_by_suppliers.csv';
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

  /* Display: Products By Category */
  $handler = $view->new_display('block', 'Products By Category', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Products by Category';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_refcategory',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_product_refcategory']['id'] = 'field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['table'] = 'field_data_field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['field'] = 'field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['settings'] = array(
    'link' => 0,
  );
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
    'product' => 'product',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Products by Category Table */
  $handler = $view->new_display('attachment', 'Products by Category Table', 'attachment_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_promo_category' => 'field_promo_category',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
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
  $handler->display->display_options['fields']['field_product_refcategory']['id'] = 'field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['table'] = 'field_data_field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['field'] = 'field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Products';
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['displays'] = array(
    'block_7' => 'block_7',
    'default' => 0,
    'page' => 0,
    'block_5' => 0,
    'block_12' => 0,
    'block_3' => 0,
    'block' => 0,
    'block_6' => 0,
    'block_8' => 0,
    'block_9' => 0,
    'block_11' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Products by Category CSV */
  $handler = $view->new_display('views_data_export', 'Products by Category CSV', 'views_data_export_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_product_refcategory']['id'] = 'field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['table'] = 'field_data_field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['field'] = 'field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Orders';
  $handler->display->display_options['path'] = 'products/category/products_by_category.csv';
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

  /* Display: Top Categories */
  $handler = $view->new_display('block', 'Top Categories', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Categories';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_product_refcategory']['id'] = 'field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['table'] = 'field_data_field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['field'] = 'field_product_refcategory';
  $handler->display->display_options['fields']['field_product_refcategory']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Products';
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
    'product' => 'product',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Top Wholesalers */
  $handler = $view->new_display('block', 'Top Wholesalers', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Wholesalers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  /* Field: Content: Wholesaler */
  $handler->display->display_options['fields']['field_product_wholesaler']['id'] = 'field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['table'] = 'field_data_field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['field'] = 'field_product_wholesaler';
  $handler->display->display_options['fields']['field_product_wholesaler']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_product_wholesaler']['delta_offset'] = '0';
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
    'product' => 'product',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Products by Regions */
  $handler = $view->new_display('block', 'Products by Regions', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Regions';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'field_wholesaler_region_ref' => 'field_wholesaler_region_ref',
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
    'field_wholesaler_region_ref' => array(
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
  $handler->display->display_options['relationships']['field_product_wholesaler_target_id']['id'] = 'field_product_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_product_wholesaler_target_id']['table'] = 'field_data_field_product_wholesaler';
  $handler->display->display_options['relationships']['field_product_wholesaler_target_id']['field'] = 'field_product_wholesaler_target_id';
  $handler->display->display_options['relationships']['field_product_wholesaler_target_id']['label'] = 'wholesaler';
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
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['relationship'] = 'field_product_wholesaler_target_id';
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
    'product' => 'product',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $export['statistics_orders'] = $view;

  $view = new view();
  $view->name = 'statistics_product_incentives';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Product incentives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product Incentives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B #84BD4A';
  /* Field: Content: Responses */
  $handler->display->display_options['fields']['field_surveyincentive_responses']['id'] = 'field_surveyincentive_responses';
  $handler->display->display_options['fields']['field_surveyincentive_responses']['table'] = 'field_data_field_surveyincentive_responses';
  $handler->display->display_options['fields']['field_surveyincentive_responses']['field'] = 'field_surveyincentive_responses';
  $handler->display->display_options['fields']['field_surveyincentive_responses']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_surveyincentive_responses']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_surveyincentive_responses']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Stores */
  $handler->display->display_options['fields']['field_surveyincentive_stores']['id'] = 'field_surveyincentive_stores';
  $handler->display->display_options['fields']['field_surveyincentive_stores']['table'] = 'field_data_field_surveyincentive_stores';
  $handler->display->display_options['fields']['field_surveyincentive_stores']['field'] = 'field_surveyincentive_stores';
  $handler->display->display_options['fields']['field_surveyincentive_stores']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_surveyincentive_stores']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_surveyincentive_stores']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_incentive' => 'product_incentive',
  );

  /* Display: Product Incentives */
  $handler = $view->new_display('page', 'Product Incentives', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '500';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B #0079C1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'statistics/incentives/survey';

  /* Display: Product Incentive Block */
  $handler = $view->new_display('block', 'Product Incentive Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Product Incentives Table */
  $handler = $view->new_display('attachment', 'Product Incentives Table', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_surveyincentive_tokens' => 'field_surveyincentive_tokens',
    'field_surveyincentive_responses' => 'field_surveyincentive_responses',
    'field_surveyincentive_stores' => 'field_surveyincentive_stores',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_surveyincentive_tokens' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surveyincentive_responses' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surveyincentive_stores' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Stores */
  $handler->display->display_options['fields']['field_surveyincentive_stores']['id'] = 'field_surveyincentive_stores';
  $handler->display->display_options['fields']['field_surveyincentive_stores']['table'] = 'field_data_field_surveyincentive_stores';
  $handler->display->display_options['fields']['field_surveyincentive_stores']['field'] = 'field_surveyincentive_stores';
  $handler->display->display_options['fields']['field_surveyincentive_stores']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_surveyincentive_stores']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_surveyincentive_stores']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Responses */
  $handler->display->display_options['fields']['field_surveyincentive_responses']['id'] = 'field_surveyincentive_responses';
  $handler->display->display_options['fields']['field_surveyincentive_responses']['table'] = 'field_data_field_surveyincentive_responses';
  $handler->display->display_options['fields']['field_surveyincentive_responses']['field'] = 'field_surveyincentive_responses';
  $handler->display->display_options['fields']['field_surveyincentive_responses']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_surveyincentive_responses']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_surveyincentive_responses']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tokens */
  $handler->display->display_options['fields']['field_surveyincentive_tokens']['id'] = 'field_surveyincentive_tokens';
  $handler->display->display_options['fields']['field_surveyincentive_tokens']['table'] = 'field_data_field_surveyincentive_tokens';
  $handler->display->display_options['fields']['field_surveyincentive_tokens']['field'] = 'field_surveyincentive_tokens';
  $handler->display->display_options['fields']['field_surveyincentive_tokens']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_surveyincentive_tokens']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_surveyincentive_tokens']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
    'page_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Product  Incentives Data */
  $handler = $view->new_display('page', 'Product  Incentives Data', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'data';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 1;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Post date) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'sum';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'unix_timestamp';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'visits';
  $handler->display->display_options['fields']['field_visit_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'key';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Visits';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'bar';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'true';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'values';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'statistics_visits';
  $handler->display->display_options['fields']['view']['display'] = 'views_data_export_1';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'values';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[ [view] ]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/incentives/data.json';

  /* Display: Product Incentives Datasource */
  $handler = $view->new_display('views_data_export', 'Product Incentives Datasource', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 0;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['header'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Post date) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'sum';
  $handler->display->display_options['fields']['created']['label'] = 'unixdate';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'unix_timestamp';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'values';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[ [created] , [field_visit_store] ],';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['path'] = 'statistics/incentives/export';

  /* Display: Product Incentive Type Pie */
  $handler = $view->new_display('block', 'Product Incentive Type Pie', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B #106ECC';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Type) */
  $handler->display->display_options['fields']['field_incentive_type']['id'] = 'field_incentive_type';
  $handler->display->display_options['fields']['field_incentive_type']['table'] = 'field_data_field_incentive_type';
  $handler->display->display_options['fields']['field_incentive_type']['field'] = 'field_incentive_type';
  $handler->display->display_options['fields']['field_incentive_type']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incentive_type']['separator'] = ', ';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_incentive_type_1']['id'] = 'field_incentive_type_1';
  $handler->display->display_options['fields']['field_incentive_type_1']['table'] = 'field_data_field_incentive_type';
  $handler->display->display_options['fields']['field_incentive_type_1']['field'] = 'field_incentive_type';
  $handler->display->display_options['fields']['field_incentive_type_1']['settings'] = array(
    'link' => 0,
  );

  /* Display: Product Incentive Category Pie */
  $handler = $view->new_display('block', 'Product Incentive Category Pie', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B #106ECC';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Category) */
  $handler->display->display_options['fields']['field_incentive_category']['id'] = 'field_incentive_category';
  $handler->display->display_options['fields']['field_incentive_category']['table'] = 'field_data_field_incentive_category';
  $handler->display->display_options['fields']['field_incentive_category']['field'] = 'field_incentive_category';
  $handler->display->display_options['fields']['field_incentive_category']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incentive_category']['separator'] = ', ';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_incentive_category_1']['id'] = 'field_incentive_category_1';
  $handler->display->display_options['fields']['field_incentive_category_1']['table'] = 'field_data_field_incentive_category';
  $handler->display->display_options['fields']['field_incentive_category_1']['field'] = 'field_incentive_category';
  $handler->display->display_options['fields']['field_incentive_category_1']['settings'] = array(
    'link' => 0,
  );
  $export['statistics_product_incentives'] = $view;

  return $export;
}
