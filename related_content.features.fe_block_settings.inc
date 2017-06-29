<?php
/**
 * @file
 * related_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function related_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-related_content-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'material_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-related_content-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'material_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-related_content-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'material_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-related_content-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
contact
products
product-catalog*',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'material_theme',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-related_content-block_4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'material_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-related_content-block_5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
contact
products
product-catalog*',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'material_theme',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
