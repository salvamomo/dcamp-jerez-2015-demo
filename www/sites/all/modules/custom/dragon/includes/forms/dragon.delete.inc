<?php

/**
 * @file
 * Delete Form Class for dragons.
 */

/**
 * Form Controller for dragon 'delete' forms.
 */
class DragonDeleteForm extends EntityOperationsOperationDelete {

  /**
   * Set the path to redirect the user to after form submission.
   */
  function getFormSubmitRedirect($entity_type, $entity) {
    // Overwrite the redirect, as there is no entity to return to.
    // Just send to the dragons page.
    $entityInfo = entity_get_info($this->entityType);
    return $entityInfo['operations ui']['path'];
  }

}
