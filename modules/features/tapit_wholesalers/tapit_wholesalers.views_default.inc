<?php
/**
 * @file
 * tapit_wholesalers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tapit_wholesalers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'wholesalers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Wholesalers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wholesalers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['column_classes'] = 'span3';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'wholesaler' => 'wholesaler',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'wholesalers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Wholesalers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Suppliers';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Stores */
  $handler = $view->new_display('entity_view', 'Stores', 'entity_view_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stores';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_store_wholesalers_target_id']['id'] = 'field_store_wholesalers_target_id';
  $handler->display->display_options['relationships']['field_store_wholesalers_target_id']['table'] = 'field_data_field_store_wholesalers';
  $handler->display->display_options['relationships']['field_store_wholesalers_target_id']['field'] = 'field_store_wholesalers_target_id';
  $handler->display->display_options['relationships']['field_store_wholesalers_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Wholesalers (field_store_wholesalers) */
  $handler->display->display_options['arguments']['field_store_wholesalers_target_id']['id'] = 'field_store_wholesalers_target_id';
  $handler->display->display_options['arguments']['field_store_wholesalers_target_id']['table'] = 'field_data_field_store_wholesalers';
  $handler->display->display_options['arguments']['field_store_wholesalers_target_id']['field'] = 'field_store_wholesalers_target_id';
  $handler->display->display_options['arguments']['field_store_wholesalers_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_store_wholesalers_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_store_wholesalers_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_store_wholesalers_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_store_wholesalers_target_id']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'wholesaler',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Suppliers */
  $handler = $view->new_display('entity_view', 'Suppliers', 'entity_view_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Suppliers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_store_wholesalers_target_id']['id'] = 'field_store_wholesalers_target_id';
  $handler->display->display_options['relationships']['field_store_wholesalers_target_id']['table'] = 'field_data_field_store_wholesalers';
  $handler->display->display_options['relationships']['field_store_wholesalers_target_id']['field'] = 'field_store_wholesalers_target_id';
  $handler->display->display_options['relationships']['field_store_wholesalers_target_id']['label'] = 'wholesaler';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content (historical data): Wholesaler (field_supplier_wholesaler) */
  $handler->display->display_options['arguments']['field_supplier_wholesaler_target_id']['id'] = 'field_supplier_wholesaler_target_id';
  $handler->display->display_options['arguments']['field_supplier_wholesaler_target_id']['table'] = 'field_data_field_supplier_wholesaler';
  $handler->display->display_options['arguments']['field_supplier_wholesaler_target_id']['field'] = 'field_supplier_wholesaler_target_id';
  $handler->display->display_options['arguments']['field_supplier_wholesaler_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_supplier_wholesaler_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_supplier_wholesaler_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_supplier_wholesaler_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_supplier_wholesaler_target_id']['summary_options']['items_per_page'] = '25';
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
    'supplier' => 'supplier',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'wholesaler',
  );
  $handler->display->display_options['show_title'] = 1;
  $export['wholesalers'] = $view;

  return $export;
}
