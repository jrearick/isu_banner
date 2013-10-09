<?php
/**
 * @file
 * isu_banner.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function isu_banner_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-isu_banner-field_isu_banner_image'
  $field_instances['node-isu_banner-field_isu_banner_image'] = array(
    'bundle' => 'isu_banner',
    'deleted' => 0,
    'description' => 'The banner needs to be a jpg or jpeg at 72dpi resolution at 960px wide by 340px tall. There is a Photoshop template for creating this image available from Barb.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_isu_banner_image',
    'label' => 'Banner',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '960x340',
      'min_resolution' => '960x340',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-isu_banner-field_isu_banner_link'
  $field_instances['node-isu_banner-field_isu_banner_link'] = array(
    'bundle' => 'isu_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL or Path of where this banner should link to.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_isu_banner_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner');
  t('Link');
  t('The banner needs to be a jpg or jpeg at 72dpi resolution at 960px wide by 340px tall. There is a Photoshop template for creating this image available from Barb.');
  t('URL or Path of where this banner should link to.');

  return $field_instances;
}
