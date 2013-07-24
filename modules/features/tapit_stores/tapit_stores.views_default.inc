<?php
/**
 * @file
 * tapit_stores.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tapit_stores_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stores';
  $view->description = 'A filterable listing and map view of trading stores on a map';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stores';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trading Stores';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '400';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = 'field_trader_gps';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['default_marker_color'] = 'icon_shop4';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['cluster_radius'] = '100';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'title';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '17';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '6';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_trader_address']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['path'] = 'maps/stores';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Trading Stores';
  $handler->display->display_options['menu']['description'] = 'Trading Stores';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Listing */
  $handler = $view->new_display('attachment', 'Listing', 'listing_attachment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trading Stores';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['column_classes'] = 'span2';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['label'] = '';
  $handler->display->display_options['fields']['field_trader_gps']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trader_gps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 0,
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
  $handler->display->display_options['path'] = 'stores/export';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['stores'] = $view;

  $view = new view();
  $view->name = 'traders';
  $view->description = 'A filterable listing and map view of trading stores on a map';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Traders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Traders';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '60';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['column_classes'] = 'span3';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
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
  /* Field: Content: GPS */
  $handler->display->display_options['fields']['field_trader_gps']['id'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['table'] = 'field_data_field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['field'] = 'field_trader_gps';
  $handler->display->display_options['fields']['field_trader_gps']['label'] = '';
  $handler->display->display_options['fields']['field_trader_gps']['element_type'] = '0';
  $handler->display->display_options['fields']['field_trader_gps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_trader_gps']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
    'format' => 'degrees_minutes_seconds',
    'labels' => 1,
  );
  $handler->display->display_options['fields']['field_trader_gps']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
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
  /* Filter criterion: Content (historical data): Wholesalers (field_store_wholesalers) */
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['id'] = 'field_store_wholesalers_target_id';
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['table'] = 'field_data_field_store_wholesalers';
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['field'] = 'field_store_wholesalers_target_id';
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['expose']['operator_id'] = 'field_store_wholesalers_target_id_op';
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['expose']['label'] = 'Wholesaler';
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['expose']['operator'] = 'field_store_wholesalers_target_id_op';
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['expose']['identifier'] = 'wholesalers';
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_store_wholesalers_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_store_type_tid']['id'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['table'] = 'field_data_field_store_type';
  $handler->display->display_options['filters']['field_store_type_tid']['field'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_store_type_tid']['value'] = array(
    992 => '992',
  );
  $handler->display->display_options['filters']['field_store_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_store_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_store_type_tid']['expose']['operator_id'] = 'field_store_type_tid_op';
  $handler->display->display_options['filters']['field_store_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_store_type_tid']['expose']['operator'] = 'field_store_type_tid_op';
  $handler->display->display_options['filters']['field_store_type_tid']['expose']['identifier'] = 'field_store_type_tid';
  $handler->display->display_options['filters']['field_store_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>There are no stores that meet your search criteria<h3>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'traders';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Traders';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['traders'] = $view;

  return $export;
}
