<?php
/**
 * @file
 * related_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function related_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'News',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '08076965-51bc-4ec1-8e76-64e1927691d7',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'test',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '71ba82a5-89ba-4844-b197-97489da2b2c9',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
