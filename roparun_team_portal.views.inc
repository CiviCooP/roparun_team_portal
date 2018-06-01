<?php

/*function roparun_team_portal_views_data() {
  
  
  if (isset($data['cmrf_PortalTeamMember']['team_id'])) {
    $data['cmrf_PortalTeamMember']['user_team_id'] = array(
      'title' => t('Team logged in user'),
      'help' => t('Team ID of the logged in user.'),
      'filter' => array(
        'handler' => 'views_handler_filter_team',
        'field' => 'team_id',
      ),
    );
  }
  
  return $data;
}*/

function roparun_team_portal_views_data_alter(&$data) {
  foreach($data as $table_name => $table) {
    if (!isset($table['table']['base']['query class']) || $table['table']['base']['query class'] != 'cmrf_views') {
      continue;
    }
    
    switch ($table['table']['base']['entity']) {
      case 'PortalTeamMember':
        $data[$table_name]['user_team_id'] = array(
          'title' => t('Team logged in user'),
          'help' => t('Team ID of the logged in user.'),
          'filter' => array(
            'handler' => 'views_handler_filter_team',
            'field' => 'team_id',
          ),
        );
      case 'PortalTeamInfo':
        $data[$table_name]['user_team_id'] = array(
          'title' => t('Team logged in user'),
          'help' => t('Team ID of the logged in user.'),
          'filter' => array(
            'handler' => 'views_handler_filter_team',
            'field' => 'team_id',
          ),
        );
        break;
    }
  }  
  /*$data['cmrf_Contact']['team_id'] = array(
    'title' => t('Team ID'),
    'help' => t('Team ID.'),
    'filter' => array(
      'handler' => 'views_handler_filter_team',
      'field' => 'id',
    ),
  );*/
}
