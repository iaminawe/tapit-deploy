<?php

/**
 * @file
 * Convert timestamp to date with custom format.
 */

$plugin = array(
  'form' => 'feeds_tamper_tapit_timedate_form',
  'callback' => 'feeds_tamper_tapit_timedate_callback',
  'name' => 'Tapit Unix timestamp to Date',
  'multi' => 'loop',
  'category' => 'Date/Time',
);

function feeds_tamper_tapit_timedate_form($importer, $element_key, $settings) {
  $form = array();
  $form['date_format'] = array(
    '#type' => 'textfield',
    '#title' => t('Date Format'),
    '#default_value' => isset($settings['date_format']) ? $settings['date_format'] : '',
    '#description' => t('A user-defined php date format string like "m-d-Y H:i". See the <a href="@url">PHP manual</a> for available options.', array('@url' => 'http://www.php.net/manual/function.date.php')),
  );
  return $form;
}

function feeds_tamper_tapit_timedate_callback($result, $item_key, $element_key, &$field) {
  $field = date('Y-m-d H:i', floor($field/1000));
}
