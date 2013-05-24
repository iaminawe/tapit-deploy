<?php
/**
 * @file
 * tapit_promotions.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tapit_promotions_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|promotion_variant|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'promotion_variant';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => '',
      ),
    ),
  );
  $export['node|promotion_variant|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|promotion|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'promotion';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'promo_image' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|promotion|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|promotion|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'promotion';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|promotion|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tapit_promotions_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'promo_image';
  $ds_field->label = 'Promo Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<img src="http://dev2.tap-it.co.za/system/promotion_images/[node:field-promo-id]/large/[node:field_promotion_image]"/>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['promo_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tapit_promotions_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotion_variant|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotion_variant';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_promo_variant_brand',
        2 => 'field_promo_variant_barcode',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_promo_variant_brand' => 'ds_content',
      'field_promo_variant_barcode' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|promotion_variant|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotion|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotion';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_promo_category',
        1 => 'field_promo_brand',
        2 => 'field_promo_wholesaler',
        3 => 'field_promo_status',
        4 => 'field_promo_start_at',
        5 => 'field_promo_end_at',
        6 => 'body',
      ),
      'right' => array(
        7 => 'promo_image',
        8 => 'field_promo_order_count',
        9 => 'field_promo_pack_size',
        10 => 'field_promo_price',
      ),
      'footer' => array(
        11 => 'promotions_variants_entity_view_1',
      ),
    ),
    'fields' => array(
      'field_promo_category' => 'left',
      'field_promo_brand' => 'left',
      'field_promo_wholesaler' => 'left',
      'field_promo_status' => 'left',
      'field_promo_start_at' => 'left',
      'field_promo_end_at' => 'left',
      'body' => 'left',
      'promo_image' => 'right',
      'field_promo_order_count' => 'right',
      'field_promo_pack_size' => 'right',
      'field_promo_price' => 'right',
      'promotions_variants_entity_view_1' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|promotion|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotion|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotion';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_promo_category',
        2 => 'field_promo_brand',
        3 => 'field_promo_wholesaler',
      ),
      'right' => array(
        4 => 'field_promo_status',
        5 => 'field_promo_price',
        6 => 'field_promo_pack_size',
        7 => 'field_promo_order_count',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_promo_category' => 'left',
      'field_promo_brand' => 'left',
      'field_promo_wholesaler' => 'left',
      'field_promo_status' => 'right',
      'field_promo_price' => 'right',
      'field_promo_pack_size' => 'right',
      'field_promo_order_count' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|promotion|teaser'] = $ds_layout;

  return $export;
}
