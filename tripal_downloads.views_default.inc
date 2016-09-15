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
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'node';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Organism */
  $handler->display->display_options['fields']['field_jbrowse_track_organism']['id'] = 'field_jbrowse_track_organism';
  $handler->display->display_options['fields']['field_jbrowse_track_organism']['table'] = 'field_data_field_jbrowse_track_organism';
  $handler->display->display_options['fields']['field_jbrowse_track_organism']['field'] = 'field_jbrowse_track_organism';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_jbrowse_track_description']['id'] = 'field_jbrowse_track_description';
  $handler->display->display_options['fields']['field_jbrowse_track_description']['table'] = 'field_data_field_jbrowse_track_description';
  $handler->display->display_options['fields']['field_jbrowse_track_description']['field'] = 'field_jbrowse_track_description';
  /* Field: Content: Track Type */
  $handler->display->display_options['fields']['field_jbrowse_track_type']['id'] = 'field_jbrowse_track_type';
  $handler->display->display_options['fields']['field_jbrowse_track_type']['table'] = 'field_data_field_jbrowse_track_type';
  $handler->display->display_options['fields']['field_jbrowse_track_type']['field'] = 'field_jbrowse_track_type';
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_jbrowse_track_file']['id'] = 'field_jbrowse_track_file';
  $handler->display->display_options['fields']['field_jbrowse_track_file']['table'] = 'field_data_field_jbrowse_track_file';
  $handler->display->display_options['fields']['field_jbrowse_track_file']['field'] = 'field_jbrowse_track_file';
  $handler->display->display_options['fields']['field_jbrowse_track_file']['click_sort_column'] = 'fid';
  /* Field: Content: Index */
  $handler->display->display_options['fields']['field_jbrowse_track_index']['id'] = 'field_jbrowse_track_index';
  $handler->display->display_options['fields']['field_jbrowse_track_index']['table'] = 'field_data_field_jbrowse_track_index';
  $handler->display->display_options['fields']['field_jbrowse_track_index']['field'] = 'field_jbrowse_track_index';
  $handler->display->display_options['fields']['field_jbrowse_track_index']['click_sort_column'] = 'fid';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'downloads';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Downloads';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['downloads'] = $view;

  return $export;
}
