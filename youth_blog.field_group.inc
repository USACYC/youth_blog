<?php
/**
 * @file
 * youth_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function youth_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|blog_post|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_constituents',
      2 => 'field_geography',
      3 => 'field_type_of_org',
      4 => 'field_relation',
      5 => 'field_ally',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Categories',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-meta field-group-tabs',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta|node|blog_post|form'] = $field_group;

  return $export;
}
