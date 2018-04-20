<?php

function roparun_team_portal_views_data_alter(&$data) {
	$data['cmrf_Contact']['team_id'] = array(
    'title' => t('Team ID'),
    'help' => t('Team ID.'),
    /*'field' => array(
      'handler' => 'views_handler_field',
      // This is use by the table display plugin.
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),*/
    'filter' => array(
      'handler' => 'views_handler_filter_team',
      'field' => 'id',
    ),
    /*'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),*/
  );
	//var_dump(array_keys($data)); exit();
	
	/*$data['users']['uid_raw']['relationship'] = array(
		'title' => t('The team contact'),
		'help' => t('Relate a CiviMRF contact record to this field'),
		'handler' => 'views_handler_relationship',
		'base' => 'civimrf_contact',
		'base field' => 'id',
		'field' => 'roparun_team_portal_team_id',
	);
	$data['civimrf_contact']['table']['join']['users'] = array(
		'left_field' => 'uid_raw',
		'field' => 'id',
	);*/
//var_dump($data['users']); exit();
}