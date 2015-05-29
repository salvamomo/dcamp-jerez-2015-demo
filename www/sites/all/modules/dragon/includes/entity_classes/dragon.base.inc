<?php

/**
 * @file
 * Base class for dragons.
 */

/**
 * This Class provides a few common methods for entity objects that are not
 * available out of the box on the Entity class, such as the isNew() method.
 * Ideally, all entities of the DPlanner project should extend this class.
 */
abstract class DragonBase extends Entity {

  /**
   * Checks whether the project is a new one or not.
   *
   * @return bool
   */
  public function isNew() {
    return (isset($this->is_new) && $this->is_new) || is_null($this->identifier()) || $this->identifier() == 0;
  }

}