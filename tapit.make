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

projects[BaseBuildingBlocksModule][type] = module
projects[BaseBuildingBlocksModule][subdir] = contrib
projects[BaseBuildingBlocksModule][download][type] = "git"
projects[BaseBuildingBlocksModule][download][url] = "git://github.com/patrickocoffeyo/BaseBuildingBlocksModule.git"
projects[BaseBuildingBlocksModule[download][branch] = "master"

;;;;;;;;;
; Mapping
;;;;;;;;;
;Google maps options
projects[openlayers][subdir] = contrib
projects[openlayers][version] = contrib

projects[geofield][subdir] = contrib
projects[geofield][version] = 7.x-2.x-dev

projects[location_taxonomize][subdir] = contrib
projects[location_taxonomize][version] = 2.4

projects[mapbox][subdir] = contrib
projects[mapbox][version] = 7.x-2.0-alpha2

projects[olfp][subdir] = contrib
projects[olfp][version] = 7.x-2.x-dev






;;;;;;;;;
; Data Import
;;;;;;;;;

;;;;;;;;;
; Vizualisation
;;;;;;;;;

; Themes ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

projects[BaseBuildingBlocks][type] = theme
projects[BaseBuildingBlocks][subdir] = contrib
projects[BaseBuildingBlocks][download][type] = "git"
projects[BaseBuildingBlocks][download][url] = "https://github.com/iaminawe/BaseBuildingBlocks.git"
projects[BaseBuildingBlocks[download][branch] = "master"


; Custom Modules / Features ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;projects[dantech_pages][type] = module
;projects[dantech_pages][subdir] = tapit
;projects[dantech_pages][download][type] = "git"
;projects[dantech_pages][download][url] = "git://github.com/tapit/dantech_pages.git"
;projects[dantech_pages][download][branch] = "7.x-1.x"

; Custom Themes ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;projects[slicer][type] = theme
;projects[slicer][download][type] = "git"
;projects[slicer][download][url] = "git://github.com/tapit/slicer.git"
;projects[slicer][download][branch] = "7.x-1.x"

; Libraries ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
