<?php
/**
 * @file
 * tapit_stats.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tapit_stats_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'statistics_categories_rollout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Statistics Categories Rollout';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Statistics Categories Rollout';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_category_created',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  /* Field: COUNT(Taxonomy term: Name) */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = 'Categories';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['separator'] = '';
  /* Field: Taxonomy term: Created at */
  $handler->display->display_options['fields']['field_category_created']['id'] = 'field_category_created';
  $handler->display->display_options['fields']['field_category_created']['table'] = 'field_data_field_category_created';
  $handler->display->display_options['fields']['field_category_created']['field'] = 'field_category_created';
  $handler->display->display_options['fields']['field_category_created']['label'] = '';
  $handler->display->display_options['fields']['field_category_created']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );

  /* Display: Categories Rollout Page */
  $handler = $view->new_display('page', 'Categories Rollout Page', 'page');
  $handler->display->display_options['path'] = 'statistics/categories/rollout';

  /* Display: Categories Rollout */
  $handler = $view->new_display('block', 'Categories Rollout', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Categories Rollout';

  /* Display: CategoriesTotal */
  $handler = $view->new_display('block', 'CategoriesTotal', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Categories';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Taxonomy term: Name) */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['separator'] = '';
  $export['statistics_categories_rollout'] = $view;

  $view = new view();
  $view->name = 'statistics_incentive_2';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Incentive 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Incentives Type';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_incentive_store',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '500';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#51762B';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['id'] = 'field_incentive_store_target_id';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['table'] = 'field_data_field_incentive_store';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['field'] = 'field_incentive_store_target_id';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['required'] = TRUE;
  /* Field: COUNT(DISTINCT Content: Incentive) */
  $handler->display->display_options['fields']['field_incentive_reference']['id'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['table'] = 'field_data_field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['field'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_incentive_reference']['separator'] = ', ';
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_incentive_store']['id'] = 'field_incentive_store';
  $handler->display->display_options['fields']['field_incentive_store']['table'] = 'field_data_field_incentive_store';
  $handler->display->display_options['fields']['field_incentive_store']['field'] = 'field_incentive_store';
  $handler->display->display_options['fields']['field_incentive_store']['settings'] = array(
    'link' => 0,
  );
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
    'incentives' => 'incentives',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_incentive_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Incentive Status (field_incentive_status) */
  $handler->display->display_options['filters']['field_incentive_status_target_id']['id'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['field'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['value'] = array(
    586 => '586',
  );

  /* Display: All Incentives */
  $handler = $view->new_display('page', 'All Incentives', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_incentive_store',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = 'function';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '600';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h4>@total Stores have participated in incentives</h4>';
  $handler->display->display_options['path'] = 'statistics/incentives/all';

  /* Display: Incentive Participation */
  $handler = $view->new_display('block', 'Incentive Participation', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total Stores have participated';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content (historical data): Incentive (field_incentive_reference)) */
  $handler->display->display_options['sorts']['field_incentive_reference_target_id']['id'] = 'field_incentive_reference_target_id';
  $handler->display->display_options['sorts']['field_incentive_reference_target_id']['table'] = 'field_data_field_incentive_reference';
  $handler->display->display_options['sorts']['field_incentive_reference_target_id']['field'] = 'field_incentive_reference_target_id';
  $handler->display->display_options['sorts']['field_incentive_reference_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_incentive_reference_target_id']['order'] = 'DESC';

  /* Display: Incentives Table */
  $handler = $view->new_display('attachment', 'Incentives Table', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['column_classes'] = 'span3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Incentives Data */
  $handler = $view->new_display('page', 'Incentives Data', 'page_1');
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'values';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'values';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[ [view] ]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/incentives/data.json';

  /* Display: Incentives Datasource */
  $handler = $view->new_display('views_data_export', 'Incentives Datasource', 'views_data_export_1');
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

  /* Display: Incentive Type Pie */
  $handler = $view->new_display('block', 'Incentive Type Pie', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['id'] = 'field_incentive_store_target_id';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['table'] = 'field_data_field_incentive_store';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['field'] = 'field_incentive_store_target_id';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['label'] = 'store';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Type) */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['group_type'] = 'count';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
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
    'product_incentive' => 'product_incentive',
    'survey_incentive' => 'survey_incentive',
  );

  /* Display: Total Incentives */
  $handler = $view->new_display('block', 'Total Incentives', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total Incentives';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'product_incentive' => 'product_incentive',
    'survey_incentive' => 'survey_incentive',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_incentive_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';

  /* Display: Approved Incentives */
  $handler = $view->new_display('block', 'Approved Incentives', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Approved Incentives';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Incentive) */
  $handler->display->display_options['fields']['field_incentive_reference']['id'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['table'] = 'field_data_field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['field'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incentive_reference']['label'] = '';
  $handler->display->display_options['fields']['field_incentive_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incentive_reference']['separator'] = ', ';
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
    'incentives' => 'incentives',
  );
  /* Filter criterion: Content (historical data): Incentive Status (field_incentive_status) */
  $handler->display->display_options['filters']['field_incentive_status_target_id']['id'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['field'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['value'] = array(
    586 => '586',
  );

  /* Display: Pending Incentives */
  $handler = $view->new_display('block', 'Pending Incentives', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pending Incentives';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Incentive) */
  $handler->display->display_options['fields']['field_incentive_reference']['id'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['table'] = 'field_data_field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['field'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incentive_reference']['label'] = '';
  $handler->display->display_options['fields']['field_incentive_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incentive_reference']['separator'] = ', ';
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
    'incentives' => 'incentives',
  );
  /* Filter criterion: Content (historical data): Incentive Status (field_incentive_status) */
  $handler->display->display_options['filters']['field_incentive_status_target_id']['id'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['field'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['value'] = array(
    585 => '585',
  );

  /* Display: Retry Incentives */
  $handler = $view->new_display('block', 'Retry Incentives', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Retry Incentives';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Incentive) */
  $handler->display->display_options['fields']['field_incentive_reference']['id'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['table'] = 'field_data_field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['field'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incentive_reference']['label'] = '';
  $handler->display->display_options['fields']['field_incentive_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incentive_reference']['separator'] = ', ';
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
    'incentives' => 'incentives',
  );
  /* Filter criterion: Content (historical data): Incentive Status (field_incentive_status) */
  $handler->display->display_options['filters']['field_incentive_status_target_id']['id'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['field'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['value'] = array(
    913 => '913',
  );

  /* Display: Total Incentive Responses */
  $handler = $view->new_display('block', 'Total Incentive Responses', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total Incentive Responses';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Incentive) */
  $handler->display->display_options['fields']['field_incentive_reference']['id'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['table'] = 'field_data_field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['field'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incentive_reference']['label'] = '';
  $handler->display->display_options['fields']['field_incentive_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incentive_reference']['separator'] = ', ';
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
    'incentives' => 'incentives',
  );
  /* Filter criterion: Content (historical data): Incentive Status (field_incentive_status) */
  $handler->display->display_options['filters']['field_incentive_status_target_id']['id'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['field'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['value'] = array(
    586 => '586',
    585 => '585',
    587 => '587',
    913 => '913',
  );
  $export['statistics_incentive_2'] = $view;

  $view = new view();
  $view->name = 'statistics_promotions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Promotions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Promotions';
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
    'promotion_variant' => 'promotion_variant',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Promotions */
  $handler = $view->new_display('page', 'Promotions', 'page');
  $handler->display->display_options['path'] = 'statistics/promotions';

  /* Display: Total Promotions */
  $handler = $view->new_display('block', 'Total Promotions', 'block_5');
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
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'promotion' => 'promotion',
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
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'promotion_variant' => 'promotion_variant',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Promotions by Date */
  $handler = $view->new_display('block', 'Promotions by Date', 'block_3');
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

  /* Display: Promotions by Date Table */
  $handler = $view->new_display('attachment', 'Promotions by Date Table', 'attachment_2');
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
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Promotions';
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

  /* Display: Promotions by Date CSV */
  $handler = $view->new_display('views_data_export', 'Promotions by Date CSV', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Promotions by Date';
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
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['required'] = TRUE;
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

  /* Display: Promotions by Wholesaler */
  $handler = $view->new_display('block', 'Promotions by Wholesaler', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Promotions by Wholesaler';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['id'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['table'] = 'field_data_field_promotion_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['field'] = 'field_promotion_id_target_id';
  $handler->display->display_options['relationships']['field_promotion_id_target_id']['label'] = 'promotion';
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
  $handler->display->display_options['fields']['field_promo_wholesaler']['id'] = 'field_promo_wholesaler';
  $handler->display->display_options['fields']['field_promo_wholesaler']['table'] = 'field_data_field_promo_wholesaler';
  $handler->display->display_options['fields']['field_promo_wholesaler']['field'] = 'field_promo_wholesaler';
  $handler->display->display_options['fields']['field_promo_wholesaler']['relationship'] = 'field_promotion_id_target_id';
  $handler->display->display_options['fields']['field_promo_wholesaler']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_promo_wholesaler']['delta_offset'] = '0';
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
    'promotion_variant' => 'promotion_variant',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Promotions By Wholesalers Table */
  $handler = $view->new_display('attachment', 'Promotions By Wholesalers Table', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Promotions by Wholesaler';
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

  /* Display: Promotions by Wholesalers CSV */
  $handler = $view->new_display('views_data_export', 'Promotions by Wholesalers CSV', 'views_data_export_1');
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
  $export['statistics_promotions'] = $view;

  $view = new view();
  $view->name = 'statistics_rollout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Rollouts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_width'] = '90%';
  $handler->display->display_options['style_options']['chart_area_left'] = '40';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '.';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
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

  /* Display: Rollout */
  $handler = $view->new_display('page', 'Rollout', 'page');
  $handler->display->display_options['path'] = 'statistics/traders/rollout';

  /* Display:  Traders Rollout */
  $handler = $view->new_display('block', ' Traders Rollout', 'block_1');

  /* Display: Traders Rollout Table */
  $handler = $view->new_display('attachment', 'Traders Rollout Table', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created_1' => 'created_1',
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
    'created_1' => array(
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'New Traders';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['separator'] = '.';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Total Stores */
  $handler = $view->new_display('block', 'Total Stores', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total Stores';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['title']['separator'] = '.';
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_store_type_tid']['id'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['table'] = 'field_data_field_store_type';
  $handler->display->display_options['filters']['field_store_type_tid']['field'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_store_type_tid']['value'] = array(
    993 => '993',
    994 => '994',
    992 => '992',
  );

  /* Display: Active Stores */
  $handler = $view->new_display('block', 'Active Stores', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Active Stores';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['title']['separator'] = '.';
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_store_type_tid']['id'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['table'] = 'field_data_field_store_type';
  $handler->display->display_options['filters']['field_store_type_tid']['field'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_store_type_tid']['value'] = array(
    992 => '992',
  );

  /* Display: Closed Stores */
  $handler = $view->new_display('block', 'Closed Stores', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Closed Stores';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['title']['separator'] = '.';
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_store_type_tid']['id'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['table'] = 'field_data_field_store_type';
  $handler->display->display_options['filters']['field_store_type_tid']['field'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_store_type_tid']['value'] = array(
    993 => '993',
  );

  /* Display: Control Stores */
  $handler = $view->new_display('block', 'Control Stores', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Control Stores';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['title']['separator'] = '.';
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_store_type_tid']['id'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['table'] = 'field_data_field_store_type';
  $handler->display->display_options['filters']['field_store_type_tid']['field'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_store_type_tid']['value'] = array(
    994 => '994',
  );
  $export['statistics_rollout'] = $view;

  $view = new view();
  $view->name = 'statistics_visits';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Visits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'BarChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['required'] = TRUE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '.';
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '2012-05-01';

  /* Display: All Visits */
  $handler = $view->new_display('page', 'All Visits', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'AreaChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#51762B #84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'statistics/visits/all';

  /* Display: All Visits Block */
  $handler = $view->new_display('block', 'All Visits Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;

  /* Display: All Visits Day Block */
  $handler = $view->new_display('block', 'All Visits Day Block', 'block_19');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'AreaChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m/d';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;

  /* Display: All Visits Table */
  $handler = $view->new_display('attachment', 'All Visits Table', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created_1' => 'created_1',
    'field_visit_store' => 'field_visit_store',
    'field_visit_store_1' => 'field_visit_store_1',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
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
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Number of Visits';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_visit_store]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Active Stores';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_visit_store_1]';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: All Visits Data */
  $handler = $view->new_display('page', 'All Visits Data', 'page_1');
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'values';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'values';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[ [view] ]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/visits/data.json';

  /* Display: All Visits Datasource */
  $handler = $view->new_display('views_data_export', 'All Visits Datasource', 'views_data_export_1');
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
  $handler->display->display_options['path'] = 'statistics/charts/export';

  /* Display: Incentives Visits Block */
  $handler = $view->new_display('block', 'Incentives Visits Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Incentives';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    833 => '833',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Promotions Visits Block */
  $handler = $view->new_display('block', 'Promotions Visits Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Promotions';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    832 => '832',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: New Products Visits Block */
  $handler = $view->new_display('block', 'New Products Visits Block', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Products';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    830 => '830',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Categories Visits Block */
  $handler = $view->new_display('block', 'Categories Visits Block', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Categories';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    826 => '826',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Trade Publications Visits Block */
  $handler = $view->new_display('block', 'Trade Publications Visits Block', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trade Publications';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    836 => '836',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Category Recommendations Visits Block */
  $handler = $view->new_display('block', 'Category Recommendations Visits Block', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recommendations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    824 => '824',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Home Visits Block */
  $handler = $view->new_display('block', 'Home Visits Block', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home Page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    828 => '828',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Messages Visits Block */
  $handler = $view->new_display('block', 'Messages Visits Block', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Messages';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    829 => '829',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Orders Visits Block */
  $handler = $view->new_display('block', 'Orders Visits Block', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    837 => '837',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Store Visits Block */
  $handler = $view->new_display('block', 'Store Visits Block', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Store';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    825 => '825',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Wholesaler Visits Block */
  $handler = $view->new_display('block', 'Wholesaler Visits Block', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wholesalers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    827 => '827',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: All Visits Detail Pie */
  $handler = $view->new_display('block', 'All Visits Detail Pie', 'block_13');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_keywords',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    826 => '826',
    830 => '830',
    828 => '828',
    833 => '833',
    829 => '829',
    837 => '837',
    831 => '831',
    832 => '832',
    836 => '836',
    824 => '824',
    825 => '825',
    834 => '834',
    918 => '918',
    827 => '827',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: All Visits Version Pie */
  $handler = $view->new_display('block', 'All Visits Version Pie', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Version Visits';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_keywords',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'label';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    823 => '823',
    838 => '838',
    917 => '917',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: All Visits Device/API Pie */
  $handler = $view->new_display('block', 'All Visits Device/API Pie', 'block_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Device/API Visits';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_keywords',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'label';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_visit_keywords']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    822 => '822',
    835 => '835',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Total Visits Block */
  $handler = $view->new_display('block', 'Total Visits Block', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total Visits';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';

  /* Display: All Visits Action Pie */
  $handler = $view->new_display('block', 'All Visits Action Pie', 'block_17');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_action_tax',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Action (field_visit_action_tax) */
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['id'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['field'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['value'] = array(
    909 => '909',
    805 => '805',
    797 => '797',
    801 => '801',
    800 => '800',
    919 => '919',
    799 => '799',
    803 => '803',
    802 => '802',
    798 => '798',
    804 => '804',
  );
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['vocabulary'] = 'action';

  /* Display: Total Traders Block */
  $handler = $view->new_display('block', 'Total Traders Block', 'block_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total Traders';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_store_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['suffix'] = ' traders';
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

  /* Display: Store Day Visits */
  $handler = $view->new_display('entity_view', 'Store Day Visits', 'entity_view_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '500';
  $handler->display->display_options['style_options']['chart_area_left'] = '40';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m/d';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Store (field_visit_store) */
  $handler->display->display_options['arguments']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['summary_options']['items_per_page'] = '25';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '-3 months';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['tid']['operator'] = 'not';
  $handler->display->display_options['filters']['tid']['value'] = array(
    994 => '994',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'store_status';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );

  /* Display: Store Month Visits */
  $handler = $view->new_display('entity_view', 'Store Month Visits', 'entity_view_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '300';
  $handler->display->display_options['style_options']['chart_area_left'] = '40';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Store (field_visit_store) */
  $handler->display->display_options['arguments']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );

  /* Display: Store Total Visits */
  $handler = $view->new_display('entity_view', 'Store Total Visits', 'entity_view_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Visits';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'numblock span2';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
<span>VISITS</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Store (field_visit_store) */
  $handler->display->display_options['arguments']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_visit_store_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );
  $export['statistics_visits'] = $view;

  $view = new view();
  $view->name = 'statistics_visits_incentives';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Visits Incentives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'BarChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['required'] = TRUE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '.';
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '2012-05-01';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '833',
    1 => '834',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator_id'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['identifier'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Incentives Visits */
  $handler = $view->new_display('page', 'Incentives Visits', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#51762B #84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'statistics/visits/all';

  /* Display: Incentives Visits Block */
  $handler = $view->new_display('block', 'Incentives Visits Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;

  /* Display: Incentive Visits Table */
  $handler = $view->new_display('attachment', 'Incentive Visits Table', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created_1' => 'created_1',
    'field_visit_store' => 'field_visit_store',
    'field_visit_store_1' => 'field_visit_store_1',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
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
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Number of Visits';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_visit_store]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Active Stores';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_visit_store_1]';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Incentives Data */
  $handler = $view->new_display('page', 'Incentives Data', 'page_1');
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'values';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'values';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[ [view] ]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/visits/data.json';

  /* Display: Incentives Datasource */
  $handler = $view->new_display('views_data_export', 'Incentives Datasource', 'views_data_export_1');
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
  $handler->display->display_options['path'] = 'statistics/charts/export';

  /* Display: Total Incentive Visits Block */
  $handler = $view->new_display('block', 'Total Incentive Visits Block', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '833',
    1 => '834',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Incentive Visits Detail Pie */
  $handler = $view->new_display('block', 'Incentive Visits Detail Pie', 'block_13');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_keywords',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#51762B #84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    833 => '833',
    834 => '834',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Incentive Visits Action Pie */
  $handler = $view->new_display('block', 'Incentive Visits Action Pie', 'block_17');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_action_tax',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Action (field_visit_action_tax) */
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['id'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['field'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['value'] = array(
    909 => '909',
    805 => '805',
    797 => '797',
    801 => '801',
    800 => '800',
    919 => '919',
    799 => '799',
    803 => '803',
    802 => '802',
    798 => '798',
    804 => '804',
  );
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['vocabulary'] = 'action';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '833',
    1 => '834',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'statistics/visits/incentives/csv/visits-incentives.csv';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_16' => 0,
    'block_13' => 0,
    'block_17' => 0,
  );
  $export['statistics_visits_incentives'] = $view;

  $view = new view();
  $view->name = 'statistics_visits_products';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Visits Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'BarChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['required'] = TRUE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '.';
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '2012-05-01';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '830',
    1 => '831',
    2 => '918',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator_id'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['identifier'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Products */
  $handler = $view->new_display('page', 'Products', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#51762B #84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'statistics/visits/products';

  /* Display: Products Visits Block */
  $handler = $view->new_display('block', 'Products Visits Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;

  /* Display: Products Visits Table */
  $handler = $view->new_display('attachment', 'Products Visits Table', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created_1' => 'created_1',
    'field_visit_store' => 'field_visit_store',
    'field_visit_store_1' => 'field_visit_store_1',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
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
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Number of Visits';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_visit_store]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Active Stores';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_visit_store_1]';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Products Data */
  $handler = $view->new_display('page', 'Products Data', 'page_1');
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'values';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'values';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[ [view] ]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/visits/products/data.json';

  /* Display: Products Datasource */
  $handler = $view->new_display('views_data_export', 'Products Datasource', 'views_data_export_1');
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
  $handler->display->display_options['path'] = 'statistics/products/export';

  /* Display: Products Visits Total Block */
  $handler = $view->new_display('block', 'Products Visits Total Block', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '830',
    1 => '831',
    2 => '918',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Products Actions Pie */
  $handler = $view->new_display('block', 'Products Actions Pie', 'block_17');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_action_tax',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Action (field_visit_action_tax) */
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['id'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['field'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['value'] = array(
    909 => '909',
    805 => '805',
    797 => '797',
    801 => '801',
    800 => '800',
    919 => '919',
    799 => '799',
    803 => '803',
    802 => '802',
    798 => '798',
    804 => '804',
  );
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['vocabulary'] = 'action';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '832',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'statistics/visits/products/visits-products.csv';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_16' => 0,
    'block_17' => 0,
  );

  /* Display: Products Controller Pie */
  $handler = $view->new_display('block', 'Products Controller Pie', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_keywords',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Action (field_visit_action_tax) */
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['id'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['field'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['value'] = array(
    909 => '909',
    805 => '805',
    797 => '797',
    801 => '801',
    800 => '800',
    919 => '919',
    799 => '799',
    803 => '803',
    802 => '802',
    798 => '798',
    804 => '804',
  );
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['vocabulary'] = 'action';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '830',
    1 => '831',
    2 => '918',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';
  $export['statistics_visits_products'] = $view;

  $view = new view();
  $view->name = 'statistics_visits_promotions';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Visits Promotions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'BarChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['required'] = TRUE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '.';
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '2012-05-01';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '832',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator_id'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['identifier'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Promotions */
  $handler = $view->new_display('page', 'Promotions', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#51762B #84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'statistics/visits/promotions';

  /* Display: Promotions Visits Block */
  $handler = $view->new_display('block', 'Promotions Visits Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;

  /* Display: Promotions Visits Table */
  $handler = $view->new_display('attachment', 'Promotions Visits Table', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created_1' => 'created_1',
    'field_visit_store' => 'field_visit_store',
    'field_visit_store_1' => 'field_visit_store_1',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
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
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Number of Visits';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_visit_store]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Active Stores';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_visit_store_1]';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Promotions Data */
  $handler = $view->new_display('page', 'Promotions Data', 'page_1');
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'values';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'values';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[ [view] ]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/visits/promotions/data.json';

  /* Display: Promotions Datasource */
  $handler = $view->new_display('views_data_export', 'Promotions Datasource', 'views_data_export_1');
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
  $handler->display->display_options['path'] = 'statistics/promotions/export';

  /* Display: Promotions Visits Total Block */
  $handler = $view->new_display('block', 'Promotions Visits Total Block', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '832',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Promotions Actions Pie */
  $handler = $view->new_display('block', 'Promotions Actions Pie', 'block_17');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_action_tax',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Action (field_visit_action_tax) */
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['id'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['field'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['value'] = array(
    909 => '909',
    805 => '805',
    797 => '797',
    801 => '801',
    800 => '800',
    919 => '919',
    799 => '799',
    803 => '803',
    802 => '802',
    798 => '798',
    804 => '804',
  );
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['vocabulary'] = 'action';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '832',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator_id'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['label'] = 'controller';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['identifier'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'statistics/visits/promotions/visits-promotions.csv';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_16' => 0,
    'block_17' => 0,
  );
  $export['statistics_visits_promotions'] = $view;

  $view = new view();
  $view->name = 'statistics_visits_recommendations';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Visits Recommendations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'BarChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['required'] = TRUE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '.';
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '2012-05-01';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '826',
    1 => '824',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator_id'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['identifier'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Category Recommendations */
  $handler = $view->new_display('page', 'Category Recommendations', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Category Recommendations';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#51762B #84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'statistics/visits/recommendations';

  /* Display: Category Recommendations Visits */
  $handler = $view->new_display('block', 'Category Recommendations Visits', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;

  /* Display: Recommendations Visits Table */
  $handler = $view->new_display('attachment', 'Recommendations Visits Table', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created_1' => 'created_1',
    'field_visit_store' => 'field_visit_store',
    'field_visit_store_1' => 'field_visit_store_1',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
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
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Number of Visits';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_visit_store]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Active Stores';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_visit_store_1]';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Recommendations Data */
  $handler = $view->new_display('page', 'Recommendations Data', 'page_1');
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'values';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'values';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[ [view] ]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/visits/recommendations/data.json';

  /* Display: Recommendations Datasource */
  $handler = $view->new_display('views_data_export', 'Recommendations Datasource', 'views_data_export_1');
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
  $handler->display->display_options['path'] = 'statistics/recommendations/export';

  /* Display: Recommendations Visits Total */
  $handler = $view->new_display('block', 'Recommendations Visits Total', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '830',
    1 => '831',
    2 => '918',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Recommendations Actions Pie */
  $handler = $view->new_display('block', 'Recommendations Actions Pie', 'block_17');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_action_tax',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Action (field_visit_action_tax) */
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['id'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['field'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['value'] = array(
    909 => '909',
    805 => '805',
    797 => '797',
    801 => '801',
    800 => '800',
    919 => '919',
    799 => '799',
    803 => '803',
    802 => '802',
    798 => '798',
    804 => '804',
  );
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['vocabulary'] = 'action';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '826',
    1 => '824',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'statistics/visits/recommendations/visits-recommendations.csv';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_16' => 0,
    'block_17' => 0,
  );

  /* Display: Recommendations Controller Pie */
  $handler = $view->new_display('block', 'Recommendations Controller Pie', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_keywords',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Action (field_visit_action_tax) */
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['id'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['field'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['value'] = array(
    909 => '909',
    805 => '805',
    797 => '797',
    801 => '801',
    800 => '800',
    919 => '919',
    799 => '799',
    803 => '803',
    802 => '802',
    798 => '798',
    804 => '804',
  );
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['vocabulary'] = 'action';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '826',
    1 => '824',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';
  $export['statistics_visits_recommendations'] = $view;

  $view = new view();
  $view->name = 'statistics_visits_trade_publications';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Visits Trade Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'BarChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['label'] = 'store';
  $handler->display->display_options['relationships']['field_visit_store_target_id']['required'] = TRUE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '.';
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
  /* Field: Content: Controller */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '2012-05-01';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '836',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator_id'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['operator'] = 'field_visit_keywords_tid_op';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['identifier'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Trade Publications Visits */
  $handler = $view->new_display('page', 'Trade Publications Visits', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#51762B #84BD4A';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'statistics/visits/publications';

  /* Display: Trade Publications Visits */
  $handler = $view->new_display('block', 'Trade Publications Visits', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;

  /* Display: Trade Publications Visits Table */
  $handler = $view->new_display('attachment', 'Trade Publications Visits Table', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created_1' => 'created_1',
    'field_visit_store' => 'field_visit_store',
    'field_visit_store_1' => 'field_visit_store_1',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_store_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Date';
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'y/m';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 1;
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
  /* Field: COUNT(DISTINCT Content: Store) */
  $handler->display->display_options['fields']['field_visit_store_1']['id'] = 'field_visit_store_1';
  $handler->display->display_options['fields']['field_visit_store_1']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_store_1']['label'] = 'Stores';
  $handler->display->display_options['fields']['field_visit_store_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store_1']['separator'] = '.';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Number of Visits';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_visit_store]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Active Stores';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_visit_store_1]';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Trade Publications Data */
  $handler = $view->new_display('page', 'Trade Publications Data', 'page_1');
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'values';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'values';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[ [view] ]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'statistics/visits/data.json';

  /* Display: Trade Publications Datasource */
  $handler = $view->new_display('views_data_export', 'Trade Publications Datasource', 'views_data_export_1');
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
  $handler->display->display_options['path'] = 'statistics/charts/export';

  /* Display: Trade Publication Visits Total Block */
  $handler = $view->new_display('block', 'Trade Publication Visits Total Block', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' visits';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '836',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: Trade Publication Actions Pie */
  $handler = $view->new_display('block', 'Trade Publication Actions Pie', 'block_17');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_dataviz';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_visit_action_tax',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['_curveType'] = '0';
  $handler->display->display_options['style_options']['_pieSliceText'] = 'percentage';
  $handler->display->display_options['style_options']['_height'] = '400';
  $handler->display->display_options['style_options']['chart_area_left'] = '90';
  $handler->display->display_options['style_options']['chart_area_top'] = '50';
  $handler->display->display_options['style_options']['colors'] = '#84BD4A #51762B';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = 'Visits';
  $handler->display->display_options['fields']['field_visit_store']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = '';
  $handler->display->display_options['fields']['field_visit_store']['suffix'] = ' K';
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['delta_offset'] = '0';
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
    'visit' => 'visit',
  );
  /* Filter criterion: Content (historical data): Action (field_visit_action_tax) */
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['id'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['field'] = 'field_visit_action_tax_tid';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['value'] = array(
    909 => '909',
    805 => '805',
    797 => '797',
    801 => '801',
    800 => '800',
    919 => '919',
    799 => '799',
    803 => '803',
    802 => '802',
    798 => '798',
    804 => '804',
  );
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visit_action_tax_tid']['vocabulary'] = 'action';
  /* Filter criterion: Content (historical data): Controller (field_visit_keywords) */
  $handler->display->display_options['filters']['field_visit_keywords_tid']['id'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['field'] = 'field_visit_keywords_tid';
  $handler->display->display_options['filters']['field_visit_keywords_tid']['value'] = array(
    0 => '836',
  );
  $handler->display->display_options['filters']['field_visit_keywords_tid']['vocabulary'] = 'visits';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'statistics/visits/publications/visits-publications.csv';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_16' => 0,
    'block_17' => 0,
  );
  $export['statistics_visits_trade_publications'] = $view;

  return $export;
}
