<?php

/**
 * @file
 * Controller Class for 'dragon' entities.
 */

/**
 * Controls the interaction of a Dragon with the system.
 */
class DragonController extends EntityAPIController {

  /**
   * Implements EntityAPIControllerInterface.
   */
  public function create(array $values = array()) {
    global $user;
    $values += array(
      'uid' => $user->uid,
    );
    return parent::create($values);
  }

  /**
   * Overrides EntityAPIController::save().
   *
   * @param $transaction
   *   Optionally a DatabaseTransaction object to use. Allows overrides to pass
   *   in their transaction object.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    $entity_is_new = $entity->isNew();

    if (!$entity_is_new) {
      $entity->unchanged_entity = entity_load_unchanged($entity->entityType(), $entity->identifier());
    }

    try {
      // Let the Entity API store the actual Entity Example data.
      parent::save($entity, $transaction);

      // No exception thrown, so data was saved successfully.
      if ($entity_is_new) {
      }
      // Entity Example not new.
      else {
      }
    }
    catch (Exception $e) {
      // Add here any extra logging needed on top of the Entity API Defaults.
    }
  }

  /**
   * Overrides EntityAPIController::delete().
   *
   * @param $transaction
   *   Optionally a DatabaseTransaction object to use. Allows overrides to pass
   *   in their transaction object.
   */
  public function delete($ids, DatabaseTransaction $transaction = NULL) {
    try {
      // Let Entity API do its stuff.
      parent::delete($ids, $transaction);
      // All went well, do whatever we want now...
    }
    catch (Exception $e) {
    }
  }

  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    // Theme 'title' as a default field.
    $content['title'] = array(
      '#theme' => 'field',
      '#title' => t('Title'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => LANGUAGE_NONE,
      '#field_name' => 'title',
      '#field_type' => 'text',
      '#entity_type' => 'dragon',
      '#bundle' => $entity->entityType(),
      '#items' => array(
        array(
          'value' => $entity->getTitle()
        ),
      ),
      0 => array('#markup' => check_plain($entity->getTitle())),
    );
    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }

}
