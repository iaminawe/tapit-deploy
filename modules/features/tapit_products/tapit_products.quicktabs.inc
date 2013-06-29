<?php
/**
 * @file
 * tapit_products.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function tapit_products_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'likes';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Likes';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_product_likes-block_1',
      'hide_title' => 1,
      'title' => 'By Product',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_product_likes-block_2',
      'hide_title' => 1,
      'title' => 'By Store',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_product_likes-block_3',
      'hide_title' => 1,
      'title' => 'By Date',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('By Date');
  t('By Product');
  t('By Store');
  t('Likes');

  $export['likes'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'products';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Products';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_statistics_orders-block_3',
      'hide_title' => 1,
      'title' => 'By Date',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_statistics_orders-block',
      'hide_title' => 1,
      'title' => 'By Wholesaler',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_statistics_orders-block_6',
      'hide_title' => 1,
      'title' => 'By Supplier',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_statistics_orders-block_7',
      'hide_title' => 1,
      'title' => 'By Category',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('By Category');
  t('By Date');
  t('By Supplier');
  t('By Wholesaler');
  t('Products');

  $export['products'] = $quicktabs;

  return $export;
}
