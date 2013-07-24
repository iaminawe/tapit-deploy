<?php
/**
 * @file
 * tapit_maps_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tapit_maps_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'activity_map';
  $view->description = 'A filterable listing and map view of trading stores on a map';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Activity Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trader Activity Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = 'field_trader_gps_1';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['differentiator']['differentiator_field'] = 'views_nothing';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['cluster_radius'] = '';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'title';
  $handler->display->display_options['style_options']['tags']['tag_css_class'] = 'tag-below-marker';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '17';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '6';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h3>@total stores</h3>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no stores that meet your search criteria';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_visit_store_node']['id'] = 'reverse_field_visit_store_node';
  $handler->display->display_options['relationships']['reverse_field_visit_store_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_visit_store_node']['field'] = 'reverse_field_visit_store_node';
  $handler->display->display_options['relationships']['reverse_field_visit_store_node']['label'] = 'visits';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Service Provider */
  $handler->display->display_options['fields']['field_trader_service_provider']['id'] = 'field_trader_service_provider';
  $handler->display->display_options['fields']['field_trader_service_provider']['table'] = 'field_data_field_trader_service_provider';
  $handler->display->display_options['fields']['field_trader_service_provider']['field'] = 'field_trader_service_provider';
  $handler->display->display_options['fields']['field_trader_service_provider']['label'] = '';
  $handler->display->display_options['fields']['field_trader_service_provider']['element_label_colon'] = FALSE;
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['label'] = '';
  $handler->display->display_options['fields']['field_trader_gps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
  );
  /* Filter criterion: Content (historical data): GPS (field_trader_gps:lat) */
  $handler->display->display_options['filters']['field_trader_gps_lat']['id'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['filters']['field_trader_gps_lat']['field'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_trader_gps_lat']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'store' => 'store',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content (historical data): Region (field_wholesaler_region_ref) */
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['id'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['table'] = 'field_data_field_wholesaler_region_ref';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['field'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['value'] = array(
    354 => '354',
    353 => '353',
    349 => '349',
    348 => '348',
    350 => '350',
    356 => '356',
    355 => '355',
    352 => '352',
    351 => '351',
  );
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator_id'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['identifier'] = 'region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content (historical data): location_taxonomize_terms (field_location_taxonomize_terms) */
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['id'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['table'] = 'field_data_field_location_taxonomize_terms';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['field'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator_id'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['label'] = 'location_taxonomize_terms (field_location_taxonomize_terms)';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['identifier'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['vocabulary'] = 'location_taxonomize';
  /* Filter criterion: Content (historical data): Service Provider (field_trader_service_provider) */
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['id'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['table'] = 'field_data_field_trader_service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['field'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator_id'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['label'] = 'Service Provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['identifier'] = 'provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['vocabulary'] = 'service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['error_message'] = FALSE;
  /* Filter criterion: COUNT(Content (historical data): Store (field_visit_store)) */
  $handler->display->display_options['filters']['field_visit_store_target_id']['id'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['field_visit_store_target_id']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['filters']['field_visit_store_target_id']['field'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['field_visit_store_target_id']['group_type'] = 'count';
  $handler->display->display_options['filters']['field_visit_store_target_id']['operator'] = 'in';
  $handler->display->display_options['filters']['field_visit_store_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_visit_store_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_visit_store_target_id']['expose']['operator_id'] = 'field_visit_store_target_id_op';
  $handler->display->display_options['filters']['field_visit_store_target_id']['expose']['label'] = 'Store (field_visit_store)';
  $handler->display->display_options['filters']['field_visit_store_target_id']['expose']['operator'] = 'field_visit_store_target_id_op';
  $handler->display->display_options['filters']['field_visit_store_target_id']['expose']['identifier'] = 'field_visit_store_target_id';
  $handler->display->display_options['filters']['field_visit_store_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_visit_store_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_visit_store_target_id']['group_info']['label'] = 'Visits';
  $handler->display->display_options['filters']['field_visit_store_target_id']['group_info']['identifier'] = 'visits';
  $handler->display->display_options['filters']['field_visit_store_target_id']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_visit_store_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Active: 50+ visits',
      'operator' => '>',
      'value' => array(
        'value' => '50',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Inactive: No visits',
      'operator' => '=',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Few : 1-100 visits',
      'operator' => 'between',
      'value' => array(
        'value' => '1',
        'min' => '1',
        'max' => '100',
      ),
    ),
    4 => array(
      'title' => 'Moderate: 100-300 visits',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '101',
        'max' => '300',
      ),
    ),
    5 => array(
      'title' => 'Good: 300-500 visits',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '301',
        'max' => '500',
      ),
    ),
    6 => array(
      'title' => 'Excellent:  500+ visits',
      'operator' => '>',
      'value' => array(
        'value' => '500',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>There are no stores that meet your search criteria<h3>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: SUM(Content: GPS) */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_trader_gps']['label'] = '';
  $handler->display->display_options['fields']['field_trader_gps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_trader_gps']['group_column'] = 'entity_id';
  /* Field: COUNT(Content: Store) */
  $handler->display->display_options['fields']['field_visit_store']['id'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['table'] = 'field_data_field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['field'] = 'field_visit_store';
  $handler->display->display_options['fields']['field_visit_store']['relationship'] = 'reverse_field_visit_store_node';
  $handler->display->display_options['fields']['field_visit_store']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_visit_store']['label'] = '';
  $handler->display->display_options['fields']['field_visit_store']['alter']['text'] = '[title] 
[field_visit_store]';
  $handler->display->display_options['fields']['field_visit_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visit_store']['separator'] = ', ';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_visit_store]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Action) */
  $handler->display->display_options['fields']['field_visit_action_tax']['id'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['table'] = 'field_data_field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['field'] = 'field_visit_action_tax';
  $handler->display->display_options['fields']['field_visit_action_tax']['relationship'] = 'reverse_field_visit_store_node';
  $handler->display->display_options['fields']['field_visit_action_tax']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_action_tax']['separator'] = ', ';
  /* Field: COUNT(DISTINCT Content: Controller) */
  $handler->display->display_options['fields']['field_visit_keywords']['id'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['table'] = 'field_data_field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['field'] = 'field_visit_keywords';
  $handler->display->display_options['fields']['field_visit_keywords']['relationship'] = 'reverse_field_visit_store_node';
  $handler->display->display_options['fields']['field_visit_keywords']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_visit_keywords']['separator'] = ', ';
  /* Field: SUM(Content: GPS) */
  $handler->display->display_options['fields']['field_trader_gps_1']['id'] = 'field_trader_gps_1';
  $handler->display->display_options['fields']['field_trader_gps_1']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps_1']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_trader_gps_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps_1']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_trader_gps_1']['group_column'] = 'entity_id';
  $handler->display->display_options['path'] = 'maps/traders/activity';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Trader Activity Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Listing */
  $handler = $view->new_display('attachment', 'Listing', 'listing_attachment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trader Activity';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_trader_service_provider' => 'field_trader_service_provider',
    'field_trader_gps' => 'field_trader_gps',
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
    'field_trader_service_provider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trader_gps' => array(
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<br/>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content (historical data): Region (field_wholesaler_region_ref) */
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['id'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['table'] = 'field_data_field_wholesaler_region_ref';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['field'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['value'] = array(
    354 => '354',
    353 => '353',
    349 => '349',
    348 => '348',
    350 => '350',
    356 => '356',
    355 => '355',
    352 => '352',
    351 => '351',
  );
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator_id'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['identifier'] = 'region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'store' => 'store',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content (historical data): location_taxonomize_terms (field_location_taxonomize_terms) */
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['id'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['table'] = 'field_data_field_location_taxonomize_terms';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['field'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator_id'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['label'] = 'location_taxonomize_terms (field_location_taxonomize_terms)';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['identifier'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['vocabulary'] = 'location_taxonomize';
  /* Filter criterion: Content (historical data): Service Provider (field_trader_service_provider) */
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['id'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['table'] = 'field_data_field_trader_service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['field'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator_id'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['label'] = 'Service Provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['identifier'] = 'provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['vocabulary'] = 'service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['error_message'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export */
  $handler = $view->new_display('views_data_export', 'Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'stores/activity/export';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['activity_map'] = $view;

  $view = new view();
  $view->name = 'incentives_map_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Incentives Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Incentives Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = 'field_trader_gps';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['differentiator']['differentiator_field'] = 'field_incentive_status';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['cluster_radius'] = '';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'title_2';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '17';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '2';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="resultcount">
<h3>@total stores</h3>
<br/>
</div>';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_incentive_reference_node']['id'] = 'reverse_field_incentive_reference_node';
  $handler->display->display_options['relationships']['reverse_field_incentive_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_incentive_reference_node']['field'] = 'reverse_field_incentive_reference_node';
  $handler->display->display_options['relationships']['reverse_field_incentive_reference_node']['label'] = 'incentive';
  $handler->display->display_options['relationships']['reverse_field_incentive_reference_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['id'] = 'field_incentive_store_target_id';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['table'] = 'field_data_field_incentive_store';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['field'] = 'field_incentive_store_target_id';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['relationship'] = 'reverse_field_incentive_reference_node';
  $handler->display->display_options['relationships']['field_incentive_store_target_id']['label'] = 'store';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_incentive_store_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Incentive:';
  /* Field: Content: Incentive Status */
  $handler->display->display_options['fields']['field_incentive_status']['id'] = 'field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['field'] = 'field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['relationship'] = 'reverse_field_incentive_reference_node';
  $handler->display->display_options['fields']['field_incentive_status']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['relationship'] = 'field_incentive_store_target_id';
  $handler->display->display_options['fields']['field_trader_gps']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_trader_gps']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_trader_gps']['group_column'] = 'entity_id';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'reverse_field_incentive_reference_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['value'] = 'Maynards';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Incentive';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content (historical data): Region (field_wholesaler_region_ref) */
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['id'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['table'] = 'field_data_field_wholesaler_region_ref';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['field'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['relationship'] = 'field_incentive_store_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['value'] = array(
    354 => '354',
    353 => '353',
    349 => '349',
    348 => '348',
    350 => '350',
    356 => '356',
    355 => '355',
    352 => '352',
    351 => '351',
  );
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator_id'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['identifier'] = 'region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content (historical data): location_taxonomize_terms (field_location_taxonomize_terms) */
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['id'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['table'] = 'field_data_field_location_taxonomize_terms';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['field'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['relationship'] = 'field_incentive_store_target_id';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator_id'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['vocabulary'] = 'location_taxonomize';
  /* Filter criterion: Content (historical data): GPS (field_trader_gps:lat) */
  $handler->display->display_options['filters']['field_trader_gps_lat']['id'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['filters']['field_trader_gps_lat']['field'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['relationship'] = 'field_incentive_store_target_id';
  $handler->display->display_options['filters']['field_trader_gps_lat']['operator'] = 'not empty';
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
  $handler->display->display_options['filters']['field_incentive_status_target_id']['relationship'] = 'reverse_field_incentive_reference_node';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['value'] = array(
    586 => '586',
    914 => '914',
    585 => '585',
    913 => '913',
  );
  $handler->display->display_options['filters']['field_incentive_status_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_incentive_status_target_id']['expose']['operator_id'] = 'field_incentive_status_target_id_op';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['expose']['operator'] = 'field_incentive_status_target_id_op';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_incentive_status_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_incentive_status_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'maps/traders/incentives';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Incentives Map';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_incentive_status',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_incentive_store_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Incentive Status */
  $handler->display->display_options['fields']['field_incentive_status']['id'] = 'field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['table'] = 'field_data_field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['field'] = 'field_incentive_status';
  $handler->display->display_options['fields']['field_incentive_status']['relationship'] = 'reverse_field_incentive_reference_node';
  $handler->display->display_options['fields']['field_incentive_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_incentive_status']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_incentive_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_incentive_status']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_incentive_status']['group_column'] = 'entity_id';
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['relationship'] = 'field_incentive_store_target_id';
  $handler->display->display_options['fields']['field_trader_gps']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_trader_gps']['group_column'] = 'entity_id';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['incentives_map_2'] = $view;

  $view = new view();
  $view->name = 'service_providers_map';
  $view->description = 'A filterable listing and map view of trading stores on a map';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Providers Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Providers Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '400';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = 'field_trader_gps';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['differentiator']['differentiator_field'] = 'field_trader_service_provider';
  $handler->display->display_options['style_options']['default_marker_color'] = 'icon_green_circle3';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['cluster_radius'] = '';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'title';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '17';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '2';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h3>@total stores</h3>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no stores that meet your search criteria';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Service Provider */
  $handler->display->display_options['fields']['field_trader_service_provider']['id'] = 'field_trader_service_provider';
  $handler->display->display_options['fields']['field_trader_service_provider']['table'] = 'field_data_field_trader_service_provider';
  $handler->display->display_options['fields']['field_trader_service_provider']['field'] = 'field_trader_service_provider';
  $handler->display->display_options['fields']['field_trader_service_provider']['label'] = '';
  $handler->display->display_options['fields']['field_trader_service_provider']['element_label_colon'] = FALSE;
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['label'] = '';
  $handler->display->display_options['fields']['field_trader_gps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content (historical data): GPS (field_trader_gps:lat) */
  $handler->display->display_options['filters']['field_trader_gps_lat']['id'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['filters']['field_trader_gps_lat']['field'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_trader_gps_lat']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'store' => 'store',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content (historical data): Region (field_wholesaler_region_ref) */
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['id'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['table'] = 'field_data_field_wholesaler_region_ref';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['field'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['value'] = array(
    354 => '354',
    353 => '353',
    349 => '349',
    348 => '348',
    350 => '350',
    356 => '356',
    355 => '355',
    352 => '352',
    351 => '351',
  );
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator_id'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['identifier'] = 'region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content (historical data): location_taxonomize_terms (field_location_taxonomize_terms) */
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['id'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['table'] = 'field_data_field_location_taxonomize_terms';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['field'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator_id'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['label'] = 'Suburb';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['label'] = 'location_taxonomize_terms (field_location_taxonomize_terms)';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['identifier'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['vocabulary'] = 'location_taxonomize';
  /* Filter criterion: Content (historical data): Service Provider (field_trader_service_provider) */
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['id'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['table'] = 'field_data_field_trader_service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['field'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator_id'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['label'] = 'Service Provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['identifier'] = 'provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['vocabulary'] = 'service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['error_message'] = FALSE;

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>There are no stores that meet your search criteria<h3>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Service Provider */
  $handler->display->display_options['fields']['field_trader_service_provider']['id'] = 'field_trader_service_provider';
  $handler->display->display_options['fields']['field_trader_service_provider']['table'] = 'field_data_field_trader_service_provider';
  $handler->display->display_options['fields']['field_trader_service_provider']['field'] = 'field_trader_service_provider';
  $handler->display->display_options['fields']['field_trader_service_provider']['label'] = '';
  $handler->display->display_options['fields']['field_trader_service_provider']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_trader_service_provider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_service_provider']['element_default_classes'] = FALSE;
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['label'] = '';
  $handler->display->display_options['fields']['field_trader_gps']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trader_gps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['path'] = 'maps/service-providers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Service Providers Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Listing */
  $handler = $view->new_display('attachment', 'Listing', 'listing_attachment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Service Providers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['column_classes'] = 'span3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<br/>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content (historical data): Region (field_wholesaler_region_ref) */
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['id'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['table'] = 'field_data_field_wholesaler_region_ref';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['field'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['value'] = array(
    354 => '354',
    353 => '353',
    349 => '349',
    348 => '348',
    350 => '350',
    356 => '356',
    355 => '355',
    352 => '352',
    351 => '351',
  );
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator_id'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['identifier'] = 'region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'store' => 'store',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content (historical data): location_taxonomize_terms (field_location_taxonomize_terms) */
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['id'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['table'] = 'field_data_field_location_taxonomize_terms';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['field'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator_id'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['label'] = 'location_taxonomize_terms (field_location_taxonomize_terms)';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['identifier'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['vocabulary'] = 'location_taxonomize';
  /* Filter criterion: Content (historical data): Service Provider (field_trader_service_provider) */
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['id'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['table'] = 'field_data_field_trader_service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['field'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator_id'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['label'] = 'Service Provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['identifier'] = 'provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['vocabulary'] = 'service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['error_message'] = FALSE;
  /* Filter criterion: Content (historical data): Forced Wholesalers (field_forced_wholesaler) */
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['id'] = 'field_forced_wholesaler_tid';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['table'] = 'field_data_field_forced_wholesaler';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['field'] = 'field_forced_wholesaler_tid';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['operator_id'] = 'field_forced_wholesaler_tid_op';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['label'] = 'Wholesalers';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['operator'] = 'field_forced_wholesaler_tid_op';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['identifier'] = 'field_forced_wholesaler_tid';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['vocabulary'] = 'wholesaler';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['error_message'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export */
  $handler = $view->new_display('views_data_export', 'Export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'stores/export';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['service_providers_map'] = $view;

  $view = new view();
  $view->name = 'stores_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stores Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stores Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = 'field_trader_gps';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['default_marker_color'] = 'icon_green_circle3';
  $handler->display->display_options['style_options']['center_option'] = '1';
  $handler->display->display_options['style_options']['empty_map_center'] = '-29.288794, 24.521484';
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['cluster_radius'] = '80';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'title';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '17';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '2';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['label'] = '';
  $handler->display->display_options['fields']['field_trader_gps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_trader_address']['id'] = 'field_trader_address';
  $handler->display->display_options['fields']['field_trader_address']['table'] = 'field_data_field_trader_address';
  $handler->display->display_options['fields']['field_trader_address']['field'] = 'field_trader_address';
  $handler->display->display_options['fields']['field_trader_address']['label'] = '';
  $handler->display->display_options['fields']['field_trader_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_trader_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['id'] = 'field_wholesaler_region_ref';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['table'] = 'field_data_field_wholesaler_region_ref';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['field'] = 'field_wholesaler_region_ref';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['label'] = '';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['settings'] = array(
    'link' => 0,
  );
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
    'store' => 'store',
  );
  /* Filter criterion: Content (historical data): GPS (field_trader_gps:lat) */
  $handler->display->display_options['filters']['field_trader_gps_lat']['id'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['filters']['field_trader_gps_lat']['field'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_trader_gps_lat']['expose']['operator_id'] = 'field_trader_gps_lat_op';
  $handler->display->display_options['filters']['field_trader_gps_lat']['expose']['label'] = 'GPS (field_trader_gps:lat)';
  $handler->display->display_options['filters']['field_trader_gps_lat']['expose']['operator'] = 'field_trader_gps_lat_op';
  $handler->display->display_options['filters']['field_trader_gps_lat']['expose']['identifier'] = 'field_trader_gps_lat';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'maps/stores/new';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['stores_map'] = $view;

  $view = new view();
  $view->name = 'visit_list';
  $view->description = 'A page listing the current user\'s bookmarks at /bookmarks.';
  $view->tag = 'flag';
  $view->base_table = 'node';
  $view->human_name = 'visit list';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Traders to visit';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'name' => 'name',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => TRUE,
    ),
    'title' => array(
      'sortable' => TRUE,
    ),
    'name' => array(
      'sortable' => TRUE,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'You have not yet bookmarked any content. Click the "Bookmark this" link when viewing a piece of content to add it to this list.';
  $handler->display->display_options['empty']['text']['format'] = 'plain_text';
  /* Relationship: Flags: visit */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'visit';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'visit';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: GPS - proximity */
  $handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['label'] = 'Distance from office';
  $handler->display->display_options['fields']['field_geofield_distance']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['field_geofield_distance']['precision'] = '0';
  $handler->display->display_options['fields']['field_geofield_distance']['suffix'] = 'km';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => ' -29.766635',
    'lon' => '31.005697',
  );
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_geofield_distance']['radius_of_earth'] = '6371';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Ops';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'visit-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My bookmarks';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['visit_list'] = $view;

  $view = new view();
  $view->name = 'visit_traders_map';
  $view->description = 'A filterable listing and map view of trading stores on a map';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Visit Traders Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trading Stores Visit Planner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = 'field_trader_gps';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['differentiator']['differentiator_field'] = 'field_store_trader_state';
  $handler->display->display_options['style_options']['default_marker_color'] = 'icon_green_circle3';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['visitor_marker_color'] = 'blue';
  $handler->display->display_options['style_options']['map'] = 'mapquest';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['cluster_radius'] = '0';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'title';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '17';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '12';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-result-number><h3>@total stores</h3></div>
';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no stores that meet your search criteria';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Flags: visit */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'visit';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'visit';
  /* Relationship: Flags: visited */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'visited';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'visited';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_trader_address']['id'] = 'field_trader_address';
  $handler->display->display_options['fields']['field_trader_address']['table'] = 'field_data_field_trader_address';
  $handler->display->display_options['fields']['field_trader_address']['field'] = 'field_trader_address';
  $handler->display->display_options['fields']['field_trader_address']['label'] = '';
  $handler->display->display_options['fields']['field_trader_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_trader_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 0,
  );
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['id'] = 'field_wholesaler_region_ref';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['table'] = 'field_data_field_wholesaler_region_ref';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['field'] = 'field_wholesaler_region_ref';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['label'] = '';
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wholesaler_region_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_trader_email']['id'] = 'field_trader_email';
  $handler->display->display_options['fields']['field_trader_email']['table'] = 'field_data_field_trader_email';
  $handler->display->display_options['fields']['field_trader_email']['field'] = 'field_trader_email';
  /* Field: Content: Cellphone */
  $handler->display->display_options['fields']['field_trader_cellphone']['id'] = 'field_trader_cellphone';
  $handler->display->display_options['fields']['field_trader_cellphone']['table'] = 'field_data_field_trader_cellphone';
  $handler->display->display_options['fields']['field_trader_cellphone']['field'] = 'field_trader_cellphone';
  /* Field: Content: GPS - proximity */
  $handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['label'] = '';
  $handler->display->display_options['fields']['field_geofield_distance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geofield_distance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield_distance']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['field_geofield_distance']['precision'] = '0';
  $handler->display->display_options['fields']['field_geofield_distance']['suffix'] = 'km';
  $handler->display->display_options['fields']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_other_geofield'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_geocoder'] = '5 Tividale Rd, Cowies Hill';
  $handler->display->display_options['fields']['field_geofield_distance']['radius_of_earth'] = '6371';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['link_type'] = 'normal';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops_1']['link_type'] = 'toggle';
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_store_trader_state']['id'] = 'field_store_trader_state';
  $handler->display->display_options['fields']['field_store_trader_state']['table'] = 'field_data_field_store_trader_state';
  $handler->display->display_options['fields']['field_store_trader_state']['field'] = 'field_store_trader_state';
  $handler->display->display_options['fields']['field_store_trader_state']['label'] = '';
  $handler->display->display_options['fields']['field_store_trader_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_store_trader_state']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'store' => 'store',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content (historical data): GPS (field_trader_gps:lat) */
  $handler->display->display_options['filters']['field_trader_gps_lat']['id'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['filters']['field_trader_gps_lat']['field'] = 'field_trader_gps_lat';
  $handler->display->display_options['filters']['field_trader_gps_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_trader_gps_lat']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Store Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: GPS - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '20',
    'distance2' => 200,
    'unit' => '6371',
    'origin' => '35 Island Circle, Durban',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Proximity';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_trader_gps';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_trader_gps';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>There are no stores that meet your search criteria<h3>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: visit */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'visit';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'visit';
  /* Relationship: Flags: visited */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'visited';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'visited';
  $handler->display->display_options['path'] = 'maps/traders/visit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Traders Visit Planner';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Listing */
  $handler = $view->new_display('attachment', 'Listing', 'listing_attachment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Visit List';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_wholesaler_region_ref',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_trader_gps' => 'field_trader_gps',
    'field_wholesaler_region_ref' => 'field_wholesaler_region_ref',
    'field_trader_email' => 'field_trader_email',
    'field_trader_cellphone' => 'field_trader_cellphone',
    'field_geofield_distance' => 'field_geofield_distance',
    'ops' => 'ops',
    'ops_1' => 'ops_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trader_gps' => array(
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
    'field_trader_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trader_cellphone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geofield_distance' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Your Trader Visit List</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content (historical data): Region (field_wholesaler_region_ref) */
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['id'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['table'] = 'field_data_field_wholesaler_region_ref';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['field'] = 'field_wholesaler_region_ref_target_id';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['value'] = array(
    354 => '354',
    353 => '353',
    349 => '349',
    348 => '348',
    350 => '350',
    356 => '356',
    355 => '355',
    352 => '352',
    351 => '351',
  );
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator_id'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['operator'] = 'field_wholesaler_region_ref_target_id_op';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['identifier'] = 'region';
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_wholesaler_region_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'store' => 'store',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content (historical data): location_taxonomize_terms (field_location_taxonomize_terms) */
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['id'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['table'] = 'field_data_field_location_taxonomize_terms';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['field'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator_id'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['operator'] = 'field_location_taxonomize_terms_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['label'] = 'location_taxonomize_terms (field_location_taxonomize_terms)';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['identifier'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['vocabulary'] = 'location_taxonomize';
  /* Filter criterion: Content (historical data): Service Provider (field_trader_service_provider) */
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['id'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['table'] = 'field_data_field_trader_service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['field'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator_id'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['label'] = 'Service Provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['identifier'] = 'provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['vocabulary'] = 'service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['error_message'] = FALSE;
  /* Filter criterion: Content (historical data): Forced Wholesalers (field_forced_wholesaler) */
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['id'] = 'field_forced_wholesaler_tid';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['table'] = 'field_data_field_forced_wholesaler';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['field'] = 'field_forced_wholesaler_tid';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['operator_id'] = 'field_forced_wholesaler_tid_op';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['label'] = 'Wholesalers';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['operator'] = 'field_forced_wholesaler_tid_op';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['identifier'] = 'field_forced_wholesaler_tid';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['vocabulary'] = 'wholesaler';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['error_message'] = FALSE;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export */
  $handler = $view->new_display('views_data_export', 'Export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'stores/export';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['visit_traders_map'] = $view;

  return $export;
}
