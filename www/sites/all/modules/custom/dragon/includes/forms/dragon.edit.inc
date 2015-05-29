<?php

/**
 * @file
 * Edit Form Class for dragons.
 */

/**
 * Form Controller for dragon 'edit' forms.
 */
class DragonEditForm extends EntityOperationsOperationEditGeneric {

  /**
   * Helper for form(), building just the entity form.
   *
   * @see parent::entityForm().
   */
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
        '#default_value' => $form_state[$this->entityType]->{$base_column},
      );
    }
  }

  /**
   * Form validation handler for 'edit' dragon form.
   *
   * @see parent::formValidate().
   */
  function formValidate($form, &$form_state, $entity_type, $entity, $operation_path) {
    parent::formValidate($form, $form_state, $entity_type, $entity, $operation_path);
    return;
  }

}
