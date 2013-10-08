<?php
/**
 * @file
 * isu_banner.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function isu_banner_user_default_roles() {
  $roles = array();

  // Exported role: banner creator.
  $roles['banner creator'] = array(
    'name' => 'banner creator',
    'weight' => 10,
  );

  return $roles;
}
