<?php
/**
 * @file
 * feature_events_highlights.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_events_highlights_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_events_highlights_views_api() {
  return array("version" => "3.0");
}
