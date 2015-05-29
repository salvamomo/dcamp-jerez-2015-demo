<?php
$view = new view();
$view->name = 'dragons';
$view->description = 'Admin view for dragons';
$view->tag = 'default';
$view->base_table = 'dragon';
$view->human_name = 'dragons';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['link_url'] = 'admin/content/dragon';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'dragon_id' => 'dragon_id',
  'title' => 'title',
  'entity_operation_2' => 'entity_operation_2',
  'entity_operation' => 'entity_operation',
  'entity_operation_1' => 'entity_operation_1',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'dragon_id' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'entity_operation_2' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'entity_operation' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'entity_operation_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Field: dragon: dragon ID */
$handler->display->display_options['fields']['dragon']['id'] = 'dragon_id';
$handler->display->display_options['fields']['dragon_id']['table'] = 'dragon';
$handler->display->display_options['fields']['dragon_id']['field'] = 'dragon_id';
$handler->display->display_options['fields']['dragon_id']['element_label_colon'] = FALSE;
/* Field: dragon: Label */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'dragon';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: dragon: Entity operation link */
$handler->display->display_options['fields']['entity_operation_2']['id'] = 'entity_operation_2';
$handler->display->display_options['fields']['entity_operation_2']['table'] = 'dragon';
$handler->display->display_options['fields']['entity_operation_2']['field'] = 'entity_operation';
$handler->display->display_options['fields']['entity_operation_2']['label'] = 'View';
$handler->display->display_options['fields']['entity_operation_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['entity_operation_2']['operation_name'] = 'view';
$handler->display->display_options['fields']['entity_operation_2']['rewrite_link_text'] = 0;
/* Field: dragon: Entity operation link */
$handler->display->display_options['fields']['entity_operation']['id'] = 'entity_operation';
$handler->display->display_options['fields']['entity_operation']['table'] = 'dragon';
$handler->display->display_options['fields']['entity_operation']['field'] = 'entity_operation';
$handler->display->display_options['fields']['entity_operation']['label'] = 'Edit';
$handler->display->display_options['fields']['entity_operation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['entity_operation']['operation_name'] = 'edit';
$handler->display->display_options['fields']['entity_operation']['rewrite_link_text'] = 0;
/* Field: dragon: Entity operation link */
$handler->display->display_options['fields']['entity_operation_1']['id'] = 'entity_operation_1';
$handler->display->display_options['fields']['entity_operation_1']['table'] = 'dragon';
$handler->display->display_options['fields']['entity_operation_1']['field'] = 'entity_operation';
$handler->display->display_options['fields']['entity_operation_1']['label'] = 'Delete';
$handler->display->display_options['fields']['entity_operation_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['entity_operation_1']['operation_name'] = 'delete';
$handler->display->display_options['fields']['entity_operation_1']['rewrite_link_text'] = 0;
/* Filter criterion: dragon: Label */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'dragon';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'dragon title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
