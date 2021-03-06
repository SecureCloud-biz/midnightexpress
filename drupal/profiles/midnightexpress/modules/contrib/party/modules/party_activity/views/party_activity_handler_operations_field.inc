<?php
/**
 * @file Operations handler for party_activities.
 */

/**
 * This field handler aggregates operations that can be done on a model
 * under a single field providing a more flexible way to present them in a view
 */
class party_activity_handler_operations_field extends views_handler_field {
  function construct() {
    parent::construct();

    $this->additional_fields['party_acitivity_id'] = 'party_activity_id';
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {

    $links = menu_contextual_links('model', 'admin/community/activities/activity', array($this->get_value($values, 'party_activity_id')));

    if (!empty($links)) {
      return theme('links', array('links' => $links, 'attributes' => array('class' => array('links', 'inline', 'operations'))));
    }
  }
}
