<?php
/**
 * @file
 * tapit_incentives.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tapit_incentives_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'incentives';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Incentives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Incentives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_incentive_store']['id'] = 'field_incentive_store';
  $handler->display->display_options['fields']['field_incentive_store']['table'] = 'field_data_field_incentive_store';
  $handler->display->display_options['fields']['field_incentive_store']['field'] = 'field_incentive_store';
  $handler->display->display_options['fields']['field_incentive_store']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Incentive */
  $handler->display->display_options['fields']['field_incentive_reference']['id'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['table'] = 'field_data_field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['field'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_incentive_reference']['delta_offset'] = '0';
  /* Field: Content: Incentive Status */
  $handler->display->display_options['fields']['field_incentive_status']['id'] = 'field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['field'] = 'field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Incentive Type */
  $handler->display->display_options['fields']['field_incentive_type_ref']['id'] = 'field_incentive_type_ref';
  $handler->display->display_options['fields']['field_incentive_type_ref']['table'] = 'field_data_field_incentive_type_ref';
  $handler->display->display_options['fields']['field_incentive_type_ref']['field'] = 'field_incentive_type_ref';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content (historical data): Incentive (field_incentive_reference) */
  $handler->display->display_options['arguments']['field_incentive_reference_target_id']['id'] = 'field_incentive_reference_target_id';
  $handler->display->display_options['arguments']['field_incentive_reference_target_id']['table'] = 'field_data_field_incentive_reference';
  $handler->display->display_options['arguments']['field_incentive_reference_target_id']['field'] = 'field_incentive_reference_target_id';
  $handler->display->display_options['arguments']['field_incentive_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_incentive_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_incentive_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_incentive_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_incentive_reference_target_id']['summary_options']['items_per_page'] = '25';
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
    'survey_incentive' => 'survey_incentive',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'incentives/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Incentives';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Stores Incentives */
  $handler = $view->new_display('entity_view', 'Stores Incentives', 'entity_view_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_incentive_type_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_incentive_store' => 'field_incentive_store',
    'field_incentive_reference' => 'field_incentive_reference',
    'field_incentive_status' => 'field_incentive_status',
    'field_incentive_type_ref' => 'field_incentive_type_ref',
    'field_start_date' => 'field_start_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_incentive_store' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incentive_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incentive_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incentive_type_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_date' => array(
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
  /* Field: Content: Store */
  $handler->display->display_options['fields']['field_incentive_store']['id'] = 'field_incentive_store';
  $handler->display->display_options['fields']['field_incentive_store']['table'] = 'field_data_field_incentive_store';
  $handler->display->display_options['fields']['field_incentive_store']['field'] = 'field_incentive_store';
  $handler->display->display_options['fields']['field_incentive_store']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_incentive_store']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Incentive */
  $handler->display->display_options['fields']['field_incentive_reference']['id'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['table'] = 'field_data_field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['field'] = 'field_incentive_reference';
  $handler->display->display_options['fields']['field_incentive_reference']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_incentive_reference']['delta_offset'] = '0';
  /* Field: Content: Incentive Status */
  $handler->display->display_options['fields']['field_incentive_status']['id'] = 'field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['field'] = 'field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Incentive Type */
  $handler->display->display_options['fields']['field_incentive_type_ref']['id'] = 'field_incentive_type_ref';
  $handler->display->display_options['fields']['field_incentive_type_ref']['table'] = 'field_data_field_incentive_type_ref';
  $handler->display->display_options['fields']['field_incentive_type_ref']['field'] = 'field_incentive_type_ref';
  $handler->display->display_options['fields']['field_incentive_type_ref']['label'] = '';
  $handler->display->display_options['fields']['field_incentive_type_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_incentive_type_ref']['element_label_colon'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'sa_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Store (field_incentive_store) */
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['id'] = 'field_incentive_store_target_id';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['table'] = 'field_data_field_incentive_store';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['field'] = 'field_incentive_store_target_id';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content (historical data): Incentive Status (field_incentive_status) */
  $handler->display->display_options['filters']['field_incentive_status_target_id']['id'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['field'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['operator'] = 'not in';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['value'] = array(
    914 => '914',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );
  $handler->display->display_options['show_title'] = 0;

  /* Display: Store Incentives Total */
  $handler = $view->new_display('entity_view', 'Store Incentives Total', 'entity_view_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'span2 numblock';
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
  /* Field: Content: Nid */
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
<span>INCENTIVES</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Store (field_incentive_store) */
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['id'] = 'field_incentive_store_target_id';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['table'] = 'field_data_field_incentive_store';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['field'] = 'field_incentive_store_target_id';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_incentive_store_target_id']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content (historical data): Incentive Status (field_incentive_status) */
  $handler->display->display_options['filters']['field_incentive_status_target_id']['id'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['field'] = 'field_incentive_status_target_id';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['operator'] = 'not in';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['value'] = array(
    914 => '914',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );
  $handler->display->display_options['show_title'] = 0;
  $export['incentives'] = $view;

  $view = new view();
  $view->name = 'statistics_incentive';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Incentive';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_incentive_reference' => 'field_incentive_reference',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_incentive_reference' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
  $handler->display->display_options['fields']['field_incentive_store']['label'] = '';
  $handler->display->display_options['fields']['field_incentive_store']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_incentive_reference' => 'field_incentive_reference',
    'field_incentive_store' => 'field_incentive_store',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_incentive_reference' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incentive_store' => array(
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
  $export['statistics_incentive'] = $view;

  $view = new view();
  $view->name = 'statistics_survey_incentive';
  $view->description = '';
  $view->tag = 'statistics';
  $view->base_table = 'node';
  $view->human_name = 'Statistics Survey incentive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Survey Incentives';
  $handler->display->display_options['use_more_always'] = FALSE;
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
    'survey_incentive' => 'survey_incentive',
  );

  /* Display: Survey Incentives */
  $handler = $view->new_display('page', 'Survey Incentives', 'page');
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

  /* Display: Survey Incentive Block */
  $handler = $view->new_display('block', 'Survey Incentive Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Survey Incentives Table */
  $handler = $view->new_display('attachment', 'Survey Incentives Table', 'attachment_1');
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

  /* Display: Survey Incentives Data */
  $handler = $view->new_display('page', 'Survey Incentives Data', 'page_1');
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'sum';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'unix_timestamp';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Content: Store */
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
  /* Field: Content: Store */
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

  /* Display: Survey Incentives Datasource */
  $handler = $view->new_display('views_data_export', 'Survey Incentives Datasource', 'views_data_export_1');
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'sum';
  $handler->display->display_options['fields']['created']['label'] = 'unixdate';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'unix_timestamp';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Content: Store */
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
  /* Field: Content: Store */
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
  $export['statistics_survey_incentive'] = $view;

  return $export;
}
