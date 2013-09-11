api = 2
core = 7.x

;;;;;;;;;
; Mapping
;;;;;;;;;


projects[leaflet][subdir] = contrib
projects[leaflet][version] = 1.x-dev
projects[leaflet][patch][1954942]= https://drupal.org/files/leaflet-fix_leaflet_library_location-1954942-11_0.patch
projects[leaflet][patch][91c37f25021fd741a34567cc18db2ac9]= https://raw.github.com/iaminawe/tapit-deploy/7.x-1.x/modules/patches/leaflet_addhash.patch?login=iaminawe&token=91c37f25021fd741a34567cc18db2ac9

projects[leaflet_markercluster][subdir] = contrib
projects[leaflet_markercluster][version] = 1.x-dev
projects[leaflet_markercluster][patch][97426c063f44cf5cb6f3ce347f59bc29]=https://raw.github.com/iaminawe/tapit-deploy/7.x-1.x/modules/patches/leaflet_markercluster_addhash.patch?login=iaminawe&token=97426c063f44cf5cb6f3ce347f59bc29

projects[leaflet_more_maps][subdir] = contrib
projects[leaflet_more_maps][version] = 1.x-dev
projects[leaflet_more_maps][patch][fe6a4b7d480fe2b94d811cfff4d0af8c]= https://raw.github.com/iaminawe/tapit-deploy/7.x-1.x/modules/patches/leaflet_more_maps_fullscreen.patch?login=iaminawe&token=fe6a4b7d480fe2b94d811cfff4d0af8c

projects[leaflet_mapbox][subdir] = contrib
projects[leaflet_mapbox][version] = 1.2
projects[leaflet_mapbox][patch][b83576f4af7d2a1aa81c980f55ce9a10]=https://raw.github.com/iaminawe/tapit-deploy/7.x-1.x/modules/patches/leaflet_mapbox_addfullscreen.patch?login=iaminawe&token=b83576f4af7d2a1aa81c980f55ce9a10

projects[leaflet_popup_outside][subdir] = contrib
projects[leaflet_popup_outside][version] = 1.0

projects[geofield][subdir] = contrib
projects[geofield][version] = 2.x-dev

projects[geocoder][subdir] = contrib
projects[geocoder][version] = 1.x-dev

projects[geophp][subdir] = contrib
projects[geophp][version] = 1.x-dev

projects[location_taxonomize][subdir] = contrib
projects[location_taxonomize][version] = 2.4

projects[ip_geoloc][subdir] = contrib
projects[ip_geoloc][version] = 1.x-dev

projects[global_filter][subdir] = contrib
projects[global_filter][version] = 1.x-dev

projects[select_with_style][subdir] = contrib
projects[select_with_style][version] = 1.7

projects[contextual_range_filter][subdir] = contrib
projects[contextual_range_filter][version] = 1.1

projects[flag_note][subdir] = contrib
projects[flag_note][version] = 1.x-dev

projects[session_cache][subdir] = contrib
projects[session_cache][version] = 1.0

projects[homebox][subdir] = contrib
projects[homebox][version] = 2.x-dev

projects[quicktabs][subdir] = contrib
projects[quicktabs][version] = 3.4

projects[flippy][subdir] = contrib
projects[flippy][version] = 1.2

projects[collapsiblock][subdir] = contrib
projects[collapsiblock][version] = 1.0

projects[colorbox_node][subdir] = contrib
projects[colorbox_node][version] = 2.6

projects[views_accordion][subdir] = contrib
projects[views_accordion][version] = 1.0-rc2

projects[custom_search][subdir] = contrib
projects[custom_search][version] = 1.12

;;;;;;;;;;;;;;;
; Data Import
;;;;;;;;;;;;;;;

projects[feeds][subdir] = contrib
projects[feeds][version] = 2.x-dev

projects[feeds_tamper][subdir] = contrib
projects[feeds_tamper][version] = 1.x-dev

projects[entityreference_feeds][subdir] = contrib
projects[entityreference_feeds][version] = 1.x-dev

projects[feeds_entityreference][subdir] = contrib
projects[feeds_entityreference][version] = 1.x-dev

projects[feeds_imagegrabber][subdir] = contrib
projects[feeds_imagegrabber][version] = 1.0-alpha2

projects[drush_feeds_import][type] = module
projects[drush_feeds_import][subdir] = contrib
projects[drush_feeds_import][download][type] = "git"
projects[drush_feeds_import][download][url] = "http://git.drupal.org/sandbox/enzo/1865202.git"
projects[drush_feeds_import][download][branch] = "master"

projects[job_scheduler][subdir] = contrib
projects[job_scheduler][version] = 2.0-alpha3

projects[flag][subdir] = contrib
projects[flag][version] = 3.0-alpha4

projects[feedback][subdir] = contrib
projects[feedback][version] = 2.x-dev

projects[feedmine][subdir] = contrib
projects[feedmine][version] = 2.0

;;;;;;;;;;;;;;;;
; Vizualisation
;;;;;;;;;;;;;;;

projects[d3][subdir] = contrib
projects[d3][version] = 1.x-dev

projects[views_datasource][subdir] = contrib
projects[views_datasource][version] = 1.x-dev

projects[views_data_export][subdir] = contrib
projects[views_data_export][version] = 3.0-beta6

projects[views_date_format_sql][subdir] = contrib
projects[views_date_format_sql][version] = 3.1

projects[views_charts][subdir] = contrib
projects[views_charts][version] = 1.x-dev

projects[views_dataviz][subdir] = contrib
projects[views_dataviz][version] = 1.x-dev

projects[views_calc][subdir] = contrib
projects[views_calc][version] = 1.0

projects[viewfield][subdir] = contrib
projects[viewfield][version] = 2.0

projects[computed_field][subdir] = contrib
projects[computed_field][version] = 1.0-beta1

projects[views_between_dates_filter][subdir] = contrib
projects[views_between_dates_filter][version] = 1.0

projects[date_range_formatter][subdir] = contrib
projects[date_range_formatter][version] = 1.0


