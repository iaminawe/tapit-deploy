api = 2
core = 7.x

; Contrib Modules ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

projects[admin_views][subdir] = contrib
projects[admin_views][version] = 1.0

projects[facetapi][subdir] = contrib
projects[facetapi][version] = 1.2
projects[facetapi][patch][1616518] = http://drupal.org/files/1616518-7-show-active-term.patch

projects[linkit][subdir] = contrib
projects[linkit][version] = 2.5

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.3

projects[pdf_reader][subdir] = contrib
projects[pdf_reader][version] = 1.0-rc4

projects[search_api][subdir] = contrib
projects[search_api][version] = 1.3

projects[search_api_db][subdir] = contrib
projects[search_api_db][version] = 1.0-beta4

projects[taxonomy_menu][subdir] = contrib
projects[taxonomy_menu][version] = 1.4

projects[tabsnomore][type] = module
projects[tabsnomore][subdir] = contrib
projects[tabsnomore][download][type] = "git"
projects[tabsnomore][download][url] = "http://git.drupal.org/sandbox/onkeltem/1730244.git"
projects[tabsnomore[download][branch] = "master"


;;;;;;;;;
; Mapping
;;;;;;;;;

projects[openlayers][subdir] = contrib
projects[openlayers][version] = 2.0-beta3

projects[openlayers_plus][subdir] = contrib
projects[openlayers_plus][version] = 1.x-dev

;projects[openlayers_icons_styles][type] = module
;projects[openlayers_icons_styles][subdir] = contrib
;projects[openlayers_icons_styles][download][type] = "git"
;projects[openlayers_icons_styles][download][url] = "http://git.drupal.org/sandbox/Pol/1260668.git"
;projects[openlayers_icons_styles][download][branch] = "7.x-1.x"

projects[geofield][subdir] = contrib
projects[geofield][version] = 2.x-dev

projects[geophp][subdir] = contrib
projects[geophp][version] = 1.7

projects[location_taxonomize][subdir] = contrib
projects[location_taxonomize][version] = 2.4

projects[mapbox][subdir] = contrib
projects[mapbox][version] = 2.0-alpha2

projects[olfp][subdir] = contrib
projects[olfp][version] = 2.x-dev

;;;;;;;;;;;;;;;
; Data Import
;;;;;;;;;;;;;;;

projects[feeds][subdir] = contrib
projects[feeds][version] = 2.x-dev

projects[feeds_tamper][subdir] = contrib
projects[feeds_tamper][version] = 1.0-beta4

projects[feeds_imagegrabber][subdir] = contrib
projects[feeds_imagegrabber][version] = 1.0-alpha2

projects[drush_feeds_import][type] = module
projects[drush_feeds_import][subdir] = contrib
projects[drush_feeds_import][download][type] = "git"
projects[drush_feeds_import][download][url] = "http://git.drupal.org/sandbox/enzo/1865202.git"
projects[drush_feeds_import][download][branch] = "master"

projects[job_scheduler][subdir] = contrib
projects[job_scheduler][version] = 2.0-alpha3

;;;;;;;;;;;;;;;;
; Vizualisation
;;;;;;;;;;;;;;;

projects[d3][type] = module
projects[d3][subdir] = contrib
projects[d3][download][type] = "git"
projects[d3][download][url] = "http://git.drupal.org/sandbox/asherry/1477334.git"
projects[d3][download][branch] = "master"
projects[views_dataviz][subdir] = contrib
projects[views_dataviz][version] = 1.0-alpha3

; Bootstrap Theme & module ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

projects[tapitbootstrap][type] = theme
projects[tapitbootstrap][subdir] = custom
projects[tapitbootstrap][download][type] = "git"
projects[tapitbootstrap][download][url] = "https://bitbucket.org/gcoppen/tapitbootstrap.git"
projects[tapitbootstrap[download][branch] = "master"

projects[tapitbootstrap-module][type] = module
projects[tapitbootstrap-module][subdir] = custom
projects[tapitbootstrap-module][download][type] = "git"
projects[tapitbootstrap-module][download][url] = "https://github.com/iaminawe/tapitbootstrap-module.git"
projects[tapitbootstrap-module[download][branch] = "master


; Custom Modules / Features ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;projects[dantech_pages][type] = module
;projects[dantech_pages][subdir] = tapit
;projects[dantech_pages][download][type] = "git"
;projects[dantech_pages][download][url] = "git://github.com/tapit/dantech_pages.git"
;projects[dantech_pages][download][branch] = "7.x-1.x"

