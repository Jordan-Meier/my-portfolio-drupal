<?php
/**
 * @file
 * coding_project.features.inc
 */

/**
 * Implements hook_views_api().
 */
function coding_project_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function coding_project_node_info() {
  $items = array(
    'coding_project' => array(
      'name' => t('Coding Project'),
      'base' => 'node_content',
      'description' => t('Use this to add an example of coding skill.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
