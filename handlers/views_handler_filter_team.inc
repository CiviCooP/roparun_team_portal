<?php

/**
 * @file
 * Definition of views_handler_filter_numeric.
 */

/**
 * Simple filter to handle the filtering of id to the team id
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_team extends views_handler_filter {
	
	var $always_multiple = TRUE;
	
  /**
   * Provide a simple textfield for equality
   */
  function value_form(&$form, &$form_state) {
    $form['value']['#tree'] = TRUE;
		if (!empty($form_state['exposed'])) {
    	$form['value'] = array(
      	'#type' => 'textfield',
      	'#title' => empty($form_state['exposed']) ? t('Value') : '',
      	'#size' => 30,
      	'#default_value' => $this->value['value'],
    	);
    	if (!empty($form_state['exposed']) && !isset($form_state['input'][$identifier])) {
      	$form_state['input'][$identifier] = $this->value['value'];
			}
		}
  }

  function query() {
  	global $user;
    $this->ensure_my_table();
    $field_name = $this->definition['field'];
    $field = "$this->table_alias.$field_name";
		$team_id = 0;
		if ($user->uid) {
			$account = user_load($user->uid);
			if (isset($account->roparun_team_portal_team_id) && isset($account->roparun_team_portal_team_id['und'][0]['value'])) {
				$team_id = $account->roparun_team_portal_team_id['und'][0]['value'];
			}
		}
		if ($this->value) {
			$team_id = $this->value;
		}
    $this->query->add_where($this->options['group'], $field, $team_id , '=');
  }

  function admin_summary() {
    if ($this->is_a_group()) {
      return t('grouped');
    }
    if (!empty($this->options['exposed'])) {
      return t('exposed');
    }
		
    return t(' = The users team');
  }

}
