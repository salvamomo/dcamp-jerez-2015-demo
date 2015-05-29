<?php

/**
 * @file
 * Menu callbacks for basic admin management of dragon Entities.
 *
 */

/**
 * @return string
 */
function dragons_overview() {
  // Link to Time Report add page as an action link.
  $action_links = array(
    l('Add new dragon', 'admin/content/dragon/add'),
  );
  $variables = array(
    'items' => $action_links,
    'attributes' => array('class' => array('action-links')),
  );
  $links = theme('item_list', $variables);

  // Assuming there's such a view....
  $content = views_embed_view('dragons');

  $output = $links . $content;
  return $output;
}