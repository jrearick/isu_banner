<?php
/**
 * @file
 * isu_banner.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function isu_banner_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create banner content'.
  $permissions['create banner content'] = array(
    'name' => 'create banner content',
    'roles' => array(
      'banner creator' => 'banner creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any banner content'.
  $permissions['delete any banner content'] = array(
    'name' => 'delete any banner content',
    'roles' => array(
      'banner creator' => 'banner creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any banner content'.
  $permissions['edit any banner content'] = array(
    'name' => 'edit any banner content',
    'roles' => array(
      'banner creator' => 'banner creator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
