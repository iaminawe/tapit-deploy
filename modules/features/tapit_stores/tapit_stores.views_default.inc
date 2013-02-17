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
  $handler->display->display_options['title'] = 'Stores';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_trader_gps';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = '#rendered_entity';
  $handler->display->display_options['style_options']['view_mode'] = 'teaser';
  $handler->display->display_options['style_options']['map'] = 'mapbox-warden';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['icon'] = array(
    'iconUrl' => '',
    'shadowUrl' => '',
    'iconSize' => array(
      'x' => '',
      'y' => '',
    ),
    'iconAnchor' => array(
      'x' => '',
      'y' => '',
    ),
    'shadowAnchor' => array(
      'x' => '',
      'y' => '',
    ),
    'popupAnchor' => array(
      'x' => '',
      'y' => '',
    ),
  );
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
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  $handler->display->display_options['fields']['field_trader_gps']['field_api_classes'] = TRUE;
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
  /* Filter criterion: Content: location_taxonomize_terms (field_location_taxonomize_terms) */
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['id'] = 'field_location_taxonomize_terms_tid';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['table'] = 'field_data_field_location_taxonomize_terms';
  $handler->display->display_options['filters']['field_location_taxonomize_terms_tid']['field'] = 'field_location_taxonomize_terms_tid';
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
  /* Filter criterion: Content: Service Provider (field_trader_service_provider) */
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['id'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['table'] = 'field_data_field_trader_service_provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['field'] = 'field_trader_service_provider_tid';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator_id'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['label'] = 'Service Provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['operator'] = 'field_trader_service_provider_tid_op';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['identifier'] = 'provider';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_trader_service_provider_tid']['vocabulary'] = 'service_provider';
  /* Filter criterion: Content: Forced Wholesalers (field_forced_wholesaler) */
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['id'] = 'field_forced_wholesaler_tid';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['table'] = 'field_data_field_forced_wholesaler';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['field'] = 'field_forced_wholesaler_tid';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['operator_id'] = 'field_forced_wholesaler_tid_op';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['label'] = 'Wholesaler';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['operator'] = 'field_forced_wholesaler_tid_op';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['identifier'] = 'wholesaler';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forced_wholesaler_tid']['vocabulary'] = 'wholesaler';
  /* Filter criterion: Content: Size (field_trader_size) */
  $handler->display->display_options['filters']['field_trader_size_tid']['id'] = 'field_trader_size_tid';
  $handler->display->display_options['filters']['field_trader_size_tid']['table'] = 'field_data_field_trader_size';
  $handler->display->display_options['filters']['field_trader_size_tid']['field'] = 'field_trader_size_tid';
  $handler->display->display_options['filters']['field_trader_size_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trader_size_tid']['expose']['operator_id'] = 'field_trader_size_tid_op';
  $handler->display->display_options['filters']['field_trader_size_tid']['expose']['label'] = 'Size';
  $handler->display->display_options['filters']['field_trader_size_tid']['expose']['operator'] = 'field_trader_size_tid_op';
  $handler->display->display_options['filters']['field_trader_size_tid']['expose']['identifier'] = 'Size';
  $handler->display->display_options['filters']['field_trader_size_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_trader_size_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_trader_size_tid']['vocabulary'] = 'size';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'stores';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Stores';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Listing */
  $handler = $view->new_display('attachment', 'Listing', 'listing_attachment');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['column_classes'] = 'span4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_trader_gps']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trader_gps']['element_type'] = '0';
  $handler->display->display_options['fields']['field_trader_gps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_trader_gps']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trader_gps']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_trader_gps']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_trader_gps']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  $handler->display->display_options['fields']['field_trader_gps']['field_api_classes'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['stores'] = $view;

  return $export;
}
