<?php
$view = new view();
$view->name = 'gebruikers';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Gebruikers';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Gebruikers';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'meer';
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
$handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
$handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
$handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
$handler->display->display_options['style_plugin'] = 'table';
/* Veld: Gebruiker: Actief */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'users';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Veld: Gebruiker: Naam */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Veld: Gebruiker: E-mailadres */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'users';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
/* Veld: Gebruiker: Laatste login */
$handler->display->display_options['fields']['login']['id'] = 'login';
$handler->display->display_options['fields']['login']['table'] = 'users';
$handler->display->display_options['fields']['login']['field'] = 'login';
$handler->display->display_options['fields']['login']['date_format'] = 'short';
$handler->display->display_options['fields']['login']['second_date_format'] = 'long';
/* Veld: Gebruiker: Rollen */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
/* Veld: Gebruiker: Bewerkingslink */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'users';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
/* Veld: Gebruiker: Annuleerlink */
$handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['table'] = 'users';
$handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
/* Filtercriterium: Gebruiker: Actief */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Actief';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filtercriterium: Gebruiker: E-mailadres */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mailadres';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filtercriterium: Gebruiker: De gebruikers-ID */
$handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
$handler->display->display_options['filters']['uid_raw']['table'] = 'users';
$handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
$handler->display->display_options['filters']['uid_raw']['operator'] = '>=';
$handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
/* Filtercriterium: Gebruiker: Rollen */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['exposed'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['label'] = 'Rollen';
$handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
$handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/people';
$translatables['gebruikers'] = array(
  t('Master'),
  t('Gebruikers'),
  t('meer'),
  t('Toepassen'),
  t('Reset'),
  t('Sorteren op'),
  t('Oplopend'),
  t('Aflopend'),
  t('Items per pagina'),
  t('- Alle -'),
  t('Startpunt'),
  t('« eerste'),
  t('‹ vorige'),
  t('volgende ›'),
  t('laatste »'),
  t('Actief'),
  t('Naam'),
  t('E-mailadres'),
  t('Laatste login'),
  t('Rollen'),
  t('Bewerkingslink'),
  t('Annuleerlink'),
  t('Page'),
);
