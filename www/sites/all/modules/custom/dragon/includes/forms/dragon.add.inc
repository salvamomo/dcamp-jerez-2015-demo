<?php

/**
 * @file
 * Add Form Class for dragons.
 */

/**
 * Form Controller for dragon 'add' forms.
 */
class DragonAddForm extends EntityOperationsOperationAddGeneric {

  /**
   * Returns strings for the operations.
   */
  function operationStrings() {
    return array(
      'tab title' => 'Add dragon',
      'label' => 'Add',
      'description' => 'Create a new dragon.',
    ) + parent::operationStrings();
  }

  /**
   * Properties for the menu item specific to this handler.
   */
  function menu_item($operation_path, $operation_definition, $loader_position) {
    $entity_info = entity_get_info($this->entityType);

    $form_id = $this->getFormID($this->entityType, $operation_path);

    $item = array(
      // Special path which doesn't have an entity loader.
      'path' => $entity_info['operations ui']['path'] . '/add',
      // We don't want a tab.
      'type' => MENU_NORMAL_ITEM,
      // Although we have EntityOperationsOperationForm in our ancestry, we use
      // the page callback as our output is not always a form.
      'page callback' => 'entity_operations_operation_page_callback',
      // Change the callback arguments to pass NULL for the entity parameter.
      'page arguments' => array(
        $this->entityType,
        get_class($this),
        $operation_path,
        // The path component after 'add', which should be the bundle name.
        // This is passed into the form and access callbacks as the $entity.
        $loader_position + 1,
      ),
      'access arguments' => array(
        $this->entityType,
        get_class($this),
        $operation_path,
        $loader_position + 1,
      ),
    );

    // Add in what the parent class has.
    $item += parent::menu_item($operation_path, $operation_definition, $loader_position);
    return $item;
  }

  function entityForm($form, &$form_state, $entity_type, $entity, $operation_path, $form_op) {
    $form = parent::entityForm($form, $form_state, $entity_type, $entity, $operation_path, $form_op);

    // Add base table properties.
    $this->entityProperties($form, $form_state);
    return $form;
  }

  /**
   * Adds the relevant properties from the dragon schema as form fields.
   *
   * @param $form
   * @param $form_state
   */
  public function entityProperties(&$form, &$form_state) {
    $entity_schema = drupal_get_schema($this->entityType);

    // Add the fields to the form. For the entity id and the bundle, they should
    // be '#disabled';
    foreach ($entity_schema['fields'] as $base_column => $column_info) {
      // Quick workaround. For now just paying attention to 'varchar', and 'int'
      // field types.
      if (!in_array($column_info['type'], array('varchar', 'int', 'float'))) {
        continue;
      }
      // Ignore metadata columns.
      if (in_array($base_column, array('uid', 'changed', 'created'))) {
        continue;
      }

      // Rest of columns.
      $form[$base_column] = array(
        '#type' => 'textfield',
        '#title' => str_replace('_', ' ', ucfirst($base_column)),
        '#description' => isset($column_info['description']) ? $column_info['description'] : '',
      );
    }
  }

  /**
   * Form validation handler for 'add' dragon form.
   *
   * @see parent::formValidate().
   */
  function formValidate($form, &$form_state, $entity_type, $entity, $operation_path) {
    parent::formValidate($form, $form_state, $entity_type, $entity, $operation_path);
    return;
  }

}
