<?php
/**
 * @file
 * lounaslista.features.inc
 */

/**
 * Implements hook_views_api().
 */
function lounaslista_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lounaslista_node_info() {
  $items = array(
    'lounaslista' => array(
      'name' => t('Lounaslista'),
      'base' => 'node_content',
      'description' => t('Otsikko
Päivämäärä
Sisältö'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
