<?php
/**
 * @file
 * tripal_downloads.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tripal_downloads_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jbrowse|node|download|form';
  $field_group->group_name = 'group_jbrowse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'download';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'JBrowse',
    'weight' => '3',
    'children' => array(
      0 => 'field_download_max_score',
      1 => 'field_download_jbrowse_extra',
      2 => 'field_download_type',
      3 => 'field_download_min_score',
      4 => 'field_download_is_jbrowse_track',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-jbrowse field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_jbrowse|node|download|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('JBrowse');

  return $field_groups;
}
