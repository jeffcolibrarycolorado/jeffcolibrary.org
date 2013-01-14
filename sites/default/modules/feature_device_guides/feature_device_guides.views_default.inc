<?php
/**
 * @file
 * feature_device_guides.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_device_guides_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'device_guides';
  $view->description = 'Ereader device guides for Downloads.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Device Guides';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Device Image */
  $handler->display->display_options['fields']['field_device_image']['id'] = 'field_device_image';
  $handler->display->display_options['fields']['field_device_image']['table'] = 'field_data_field_device_image';
  $handler->display->display_options['fields']['field_device_image']['field'] = 'field_device_image';
  $handler->display->display_options['fields']['field_device_image']['label'] = '';
  $handler->display->display_options['fields']['field_device_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_device_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_device_image']['settings'] = array(
    'image_style' => 'device_image',
    'image_link' => 'content',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'device_guide' => 'device_guide',
  );

  /* Display: Page: Downloads */
  $handler = $view->new_display('page', 'Page: Downloads', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'downloads';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Downloads';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['device_guides'] = $view;

  return $export;
}