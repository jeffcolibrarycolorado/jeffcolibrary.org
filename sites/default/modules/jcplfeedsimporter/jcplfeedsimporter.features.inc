<?php
/**
 * @file
 * jcplfeedsimporter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jcplfeedsimporter_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
