<?php
/**
 * @file
 * lullablog.features.inc
 */

/**
 * Implements hook_views_api().
 */
function lullablog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lullablog_node_info() {
  $items = array(
    'lullablog_post' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
