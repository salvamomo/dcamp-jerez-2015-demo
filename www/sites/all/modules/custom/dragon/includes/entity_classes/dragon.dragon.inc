<?php

/**
 * @file
 * Entity Class for dragons.
 */

/**
 * This Class represents a dragon.
 */
class Dragon extends DragonBase {

  /**
   * Unique ID of the dragon.
   *
   * @var Integer
   */
  public $dragon_id;

  /**
   * Title of the dragon.
   *
   * @var String
   */
  public $title;

  /**
   * UNIX timestamp with the creation date of the dragon.
   *
   * @var Integer
   */
  public $created;

  /**
   * UNIX timestamp with the last time the dragon was modified.
   *
   * @var Integer
   */
  public $changed;

  /**
   * User ID of the Drupal user that created the dragon.
   *
   * @var Integer
   */
  public $uid;

  /**
   * @param array $values
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'dragon');

    // If is_new is not set, and it's a new entity example, set is_new to TRUE.
    if (!isset($this->is_new) && $this->isNew()) {
      $this->is_new = TRUE;
    }

    return $this;
  }

  /**
   * Implements Entity::save().
   */
  public function save() {
    // If creating a new entity example, add created time.
    if ($this->isNew()) {
      $this->created = time();
    }
    // Changed time is always added.
    $this->changed = time();
    parent::save();
  }

  /**
   * Load a Dragon object.
   *
   * @static
   * @param $dragon_id
   * @param bool $reset
   *   Whether to reset the internal static cache for the entity type.
   * @return null|Dragon
   */
  public static function load($dragon_id, $reset = FALSE) {
    $dragon_id = array($dragon_id);
    if ($dragons = self::loadMultiple(array($dragon_id), $reset)) {
      return reset($dragons);
    }
    return NULL;
  }

  /**
   * Load one or more dragons.
   *
   * @param array $dragon_ids
   * @param bool $reset
   * @return mixed
   */
  public static function loadMultiple($dragon_ids = array(), $reset = FALSE) {
    return entity_load('dragon', $dragon_ids, array(), $reset);
  }

  /**
   * @group Getters and Setters.
   */

  /**
   * @return int
   */
  public function getdragoneId() {
    return $this->dragon_id;
  }

  /**
   * @return String
   */
  public function getTitle() {
    return $this->title;
  }

  /**
   * @param String $title
   */
  public function setTitle($title) {
    $this->title = $title;
    return $this;
  }

  /**
   * @return int
   */
  public function getCreated() {
    return $this->created;
  }

  /**
   * @param int $created
   */
  public function setCreated($created) {
    $this->created = $created;
    return $this;
  }

  /**
   * @return int
   */
  public function getChanged() {
    return $this->changed;
  }

  /**
   * @param int $changed
   */
  public function setChanged($changed) {
    $this->changed = $changed;
    return $this;
  }

  /**
   * @return int
   */
  public function getUid() {
    return $this->uid;
  }

  /**
   * @param int $uid
   */
  public function setUid($uid) {
    $this->uid = $uid;
  }

  /**
   * @endgroup Getters and Setters.
   */

  /**
   * Implements Entity::defaultUri();
   */
  protected function defaultUri() {
    return array('path' => 'admin/content/dragon/' . $this->identifier());
  }

}
