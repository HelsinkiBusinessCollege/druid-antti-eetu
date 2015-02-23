<?php
/**
 * @file
 * lounaslista.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lounaslista_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create lounaslista content'.
  $permissions['create lounaslista content'] = array(
    'name' => 'create lounaslista content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any lounaslista content'.
  $permissions['delete any lounaslista content'] = array(
    'name' => 'delete any lounaslista content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own lounaslista content'.
  $permissions['delete own lounaslista content'] = array(
    'name' => 'delete own lounaslista content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any lounaslista content'.
  $permissions['edit any lounaslista content'] = array(
    'name' => 'edit any lounaslista content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own lounaslista content'.
  $permissions['edit own lounaslista content'] = array(
    'name' => 'edit own lounaslista content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
