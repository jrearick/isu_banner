<?php
/**
 * @file
 * isu_banner.features.inc
 */

/**
 * Implements hook_views_api().
 */
function isu_banner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function isu_banner_node_info() {
  $items = array(
    'isu_banner' => array(
      'name' => t('Full Width Banner'),
      'base' => 'node_content',
      'description' => t('Banner images for the ISU Banner slideshow. Similar to the banners on the Iowa State University homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
