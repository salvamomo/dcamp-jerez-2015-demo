<?php

/**
 * @file
 * dragon.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dragon_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'dragon') . '/includes/views/default_views', '/inc$/', array('key' => 'filename', 'recurse' => FALSE));
  $export = array();
  if (!empty($files)) {
    foreach ($files as $file) {
      @include ($file->uri);
      $export[$view->name] = $view;
    }
  }
  return $export;
}
