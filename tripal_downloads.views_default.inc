<?php
/**
 * @file
 * tripal_downloads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tripal_downloads_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'downloads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Downloads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Downloads';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_download_organism' => 'field_download_organism',
    'field_download_description' => 'field_download_description',
    'field_download_type' => 'field_download_type',
    'field_download_file' => 'field_download_file',
    'field_download_index' => 'field_download_index',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_download_organism' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_download_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_download_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_download_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_download_index' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Organism */
  $handler->display->display_options['fields']['field_download_organism_1']['id'] = 'field_download_organism_1';
  $handler->display->display_options['fields']['field_download_organism_1']['table'] = 'field_data_field_download_organism';
  $handler->display->display_options['fields']['field_download_organism_1']['field'] = 'field_download_organism';
  $handler->display->display_options['fields']['field_download_organism_1']['label'] = 'OrganismID';
  $handler->display->display_options['fields']['field_download_organism_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_download_organism_1']['type'] = 'list_key';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Organism */
  $handler->display->display_options['fields']['field_download_organism']['id'] = 'field_download_organism';
  $handler->display->display_options['fields']['field_download_organism']['table'] = 'field_data_field_download_organism';
  $handler->display->display_options['fields']['field_download_organism']['field'] = 'field_download_organism';
  /* Field: Content: Track Type */
  $handler->display->display_options['fields']['field_download_type']['id'] = 'field_download_type';
  $handler->display->display_options['fields']['field_download_type']['table'] = 'field_data_field_download_type';
  $handler->display->display_options['fields']['field_download_type']['field'] = 'field_download_type';
  /* Field: Content: Program, Pipeline Name or Method Name */
  $handler->display->display_options['fields']['field_download_program']['id'] = 'field_download_program';
  $handler->display->display_options['fields']['field_download_program']['table'] = 'field_data_field_download_program';
  $handler->display->display_options['fields']['field_download_program']['field'] = 'field_download_program';
  /* Field: Content: Source Name */
  $handler->display->display_options['fields']['field_download_sourcename']['id'] = 'field_download_sourcename';
  $handler->display->display_options['fields']['field_download_sourcename']['table'] = 'field_data_field_download_sourcename';
  $handler->display->display_options['fields']['field_download_sourcename']['field'] = 'field_download_sourcename';
  /* Field: Content: Expose as JBrowse Track? */
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['id'] = 'field_download_is_jbrowse_track';
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['table'] = 'field_data_field_download_is_jbrowse_track';
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['field'] = 'field_download_is_jbrowse_track';
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['label'] = '';
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['alter']['text'] = 'View on JBrowse';
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['alter']['path'] = 'jbrowse/?data=../api/jbrowse/[field_download_organism_1]&tracks=refseq,genes,[nid]';
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_download_is_jbrowse_track']['type'] = 'list_key';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'download' => 'download',
  );
  /* Filter criterion: Content: Organism (field_download_organism) */
  $handler->display->display_options['filters']['field_download_organism_value']['id'] = 'field_download_organism_value';
  $handler->display->display_options['filters']['field_download_organism_value']['table'] = 'field_data_field_download_organism';
  $handler->display->display_options['filters']['field_download_organism_value']['field'] = 'field_download_organism_value';
  $handler->display->display_options['filters']['field_download_organism_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_download_organism_value']['expose']['operator_id'] = 'field_download_organism_value_op';
  $handler->display->display_options['filters']['field_download_organism_value']['expose']['label'] = 'Organism';
  $handler->display->display_options['filters']['field_download_organism_value']['expose']['operator'] = 'field_download_organism_value_op';
  $handler->display->display_options['filters']['field_download_organism_value']['expose']['identifier'] = 'field_download_organism_value';
  $handler->display->display_options['filters']['field_download_organism_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Track Type (field_download_type) */
  $handler->display->display_options['filters']['field_download_type_value']['id'] = 'field_download_type_value';
  $handler->display->display_options['filters']['field_download_type_value']['table'] = 'field_data_field_download_type';
  $handler->display->display_options['filters']['field_download_type_value']['field'] = 'field_download_type_value';
  $handler->display->display_options['filters']['field_download_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_download_type_value']['expose']['operator_id'] = 'field_download_type_value_op';
  $handler->display->display_options['filters']['field_download_type_value']['expose']['label'] = 'Track Type';
  $handler->display->display_options['filters']['field_download_type_value']['expose']['operator'] = 'field_download_type_value_op';
  $handler->display->display_options['filters']['field_download_type_value']['expose']['identifier'] = 'field_download_type_value';
  $handler->display->display_options['filters']['field_download_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'downloads';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Downloads';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['downloads'] = $view;

  return $export;
}
