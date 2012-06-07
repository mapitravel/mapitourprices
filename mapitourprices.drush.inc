<?
/**
 * Drush Integration 
 */

/**
 * Implements hook_drush_command().
 */
function mapitourprices_drush_command() {
  $commands = array();
  $commands['mapi-clear-cache'] = array(
    'description' => dt('Clear mapitourprices cache.'),
    'aliases' => array('mapi-cc'),
  );
  $commands['mapi-update-files'] = array(
    'description' => dt('Download new prices.'),
    'aliases' => array('mapi-up'),
  );
  return $commands;
}

/**
 * Callback function for drush mapi-clear-cache. 
 */
function drush_mapitourprices_mapi_clear_cache() {
  mapitourprices_clear_cache();
  drush_log('Running mapi-clear-cache', 'ok');
}

/**
 * TODO: Callback function for drush mapitourprices-clear-cache. 
 */
/*
function drush_mapitourprices_mapi_update_files() {
  mapitourprices_redo();
  drush_log('Running mapi-update-files', 'ok');
}
*/