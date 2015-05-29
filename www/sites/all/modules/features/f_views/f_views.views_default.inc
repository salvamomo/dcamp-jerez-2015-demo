<?php
/**
 * @file
 * f_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'v_prueba';
  $view->description = 'Vista de prueba para dcamp';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vista de prueba para dcamp';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vista de prueba para dcamp';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = FALSE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Cambios de autores */
  $handler->display->display_options['fields']['field_cambios_de_autores']['id'] = 'field_cambios_de_autores';
  $handler->display->display_options['fields']['field_cambios_de_autores']['table'] = 'field_data_field_cambios_de_autores';
  $handler->display->display_options['fields']['field_cambios_de_autores']['field'] = 'field_cambios_de_autores';
  $handler->display->display_options['fields']['field_cambios_de_autores']['label'] = FALSE;
  $handler->display->display_options['fields']['field_cambios_de_autores']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = FALSE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block');

  /* Display: page */
  $handler = $view->new_display('page', 'page', 'page');
  $export['v_prueba'] = $view;

  return $export;
}
