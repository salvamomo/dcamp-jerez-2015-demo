<?php

/**
 * @file
 * Provides basic support of dragon entities for the Views module.
 */

/**
 * Views definition for dragon entities properties.
 *
 * @see hook_views_data
 */
class DragonViewsController extends EntityDefaultViewsController {

  /**
   * Override views_data().
   */
  public function views_data() {
    // Get default data exposed by parent class.
    $data = parent::views_data();

    // Expose 'created' and 'changed'.
    $data[$this->info['base table']]['created'] = array(
      'title' => t('Created'),
      'help' => t('Created date.'),
      'field' => array(
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_date',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort_date',
      ),
    );
    $data[$this->info['base table']]['changed'] = array(
      'title' => t('Changed'),
      'help' => t('Changed date.'),
      'field' => array(
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_date',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort_date',
      ),
    );

    return $data;
  }
}
