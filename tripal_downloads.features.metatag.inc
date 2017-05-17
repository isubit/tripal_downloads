<?php
/**
 * @file
 * tripal_downloads.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function tripal_downloads_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:download.
  $config['node:download'] = array(
    'instance' => 'node:download',
    'config' => array(
      'description' => array(
        'value' => '[node:field-download-description]',
      ),
    ),
  );

  return $config;
}
