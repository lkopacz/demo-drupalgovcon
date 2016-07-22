<?php
/**
 * @file
 * project_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function project_content_type_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
