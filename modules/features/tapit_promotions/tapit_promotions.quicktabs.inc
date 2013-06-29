<?php
/**
 * @file
 * tapit_promotions.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function tapit_promotions_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'promotions';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Promotions';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_statistics_promotions-block_3',
      'hide_title' => 1,
      'title' => 'By Date',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_statistics_promotions-block',
      'hide_title' => 1,
      'title' => 'By Wholesaler',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_statistics_promotions-block_7',
      'hide_title' => 1,
      'title' => 'By Category',
      'weight' => '-98',
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
  t('By Wholesaler');
  t('Promotions');

  $export['promotions'] = $quicktabs;

  return $export;
}
