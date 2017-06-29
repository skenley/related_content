<?php
/**
 * @file
 * related_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function related_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function related_content_node_info() {
  $items = array(
    'call_to_action' => array(
      'name' => t('Call to Action'),
      'base' => 'node_content',
      'description' => t('Content will be displayed in a block on all pages related to the content using tags.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
