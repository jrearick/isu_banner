<?php
/**
 * @file
 * isu_banner.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function isu_banner_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.8';
  $export['jquery_update_jquery_version'] = $strongarm;

  return $export;
}
