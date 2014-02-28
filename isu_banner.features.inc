<?php
/**
 * @file
 * isu_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function isu_banner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function isu_banner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function isu_banner_image_default_styles() {
  $styles = array();

  // Exported image style: content_banner_760x269.
  $styles['content_banner_760x269'] = array(
    'name' => 'content_banner_760x269',
    'label' => 'Content Banner 760x269',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 760,
          'height' => 269,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_banner_960x340.
  $styles['full_banner_960x340'] = array(
    'name' => 'full_banner_960x340',
    'label' => 'Full Banner 960x340',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
