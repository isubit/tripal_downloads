<?php
/**
 * @file
 * tripal_downloads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tripal_downloads_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tripal_downloads_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tripal_downloads_node_info() {
  $items = array(
    'download' => array(
      'name' => t('Downloadable File'),
      'base' => 'node_content',
      'description' => t('A file available for download, and optionally, on JBrowse'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
