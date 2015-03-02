<?php
/**
 * @file
 * ruokalista.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ruokalista_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ruokalista_node_info() {
  $items = array(
    'ruokalista' => array(
      'name' => t('Ruokalista'),
      'base' => 'node_content',
      'description' => t('Tämän viikon ruokalista'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
