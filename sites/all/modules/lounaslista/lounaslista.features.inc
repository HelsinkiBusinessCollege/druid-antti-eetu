<?php
/**
 * @file
 * lounaslista.features.inc
 */

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
