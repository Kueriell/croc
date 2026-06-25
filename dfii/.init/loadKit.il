; v0.2 - <bmuheim@ethz.ch> - Wed Oct 29 09:46:14 CET 2025
;  - add/adapt license checkout orders
;    maestroCheckoutOrder, adeMaestroCheckoutOrder, +lorder
; v0.1 - <zerun@ethz.ch> - Thu 16 Mar 13:58:53 CET 2023
;  - copy from gf22
;  - update the new command for defaultAttachTech

; 610 settings
envSetVal( "ui"  "webBrowser" 'string  "/usr/bin/firefox")
envSetVal( "graphic" "schematicDefaultApp" 'string  "Schematics XL")
envSetVal( "graphic" "maskLayoutDefaultApp"  'string  "Layout L")


; after 6.13.515 the following will work
;   http://support.cadence.com/wps/myportal/cos/COSHome/viewsolution/!ut/p/a1/tY_NboMwEISfhXsqr8HE5Og2FRQIKC1RMZcIGjexEhvET6Tm6WtHkXpKe-redvbbmV1UoRJVuj7LfT3KVtcn21fz7Qt-JjjKIQ4X7AkY0HW8SbCbUN8A3ABwpxj8tf-OqivyiwM3EfTHI0jTBbAwmb9GtPAgp2ij216ZY9-s106ILpX6iPjYT8Iqy_ZjUkKPxVcnjNoMh1HvZ7tPKe10aE-TfTabVCN6xDH2A0qwe4v1oyWBGHCcP7oUWFSQkGQphtz9p9hOlfDAVeCp7aoQzYUxx_kG1VI85A!!/dl5/d5/L2dBISEvZ0FBIS9nQSEh/
envSetVal( "license" "VLSL_UseNextLicense"   'string "always")
envSetVal( "license" "VLSXL_UseNextLicense"  'string "always")
envSetVal( "license" "VSEL_UseNextLicense"   'string "always")
envSetVal( "license" "ADEL_UseNextLicense"   'string "always")
envSetVal( "license" "ADEXL_UseNextLicense"  'string "always")

; even more funny things
envSetVal( "license" "VLSLicenseCheckoutOrder" 'string "GXL,MXL,EXL")
envSetVal( "license" "VSELicenseCheckoutOrder" 'string "XL")
;envSetVal( "license" "ADELicenseCheckoutOrder" 'string "GXL,XL,L")
envSetVal( "license" "maestroCheckoutOrder" 'string "Assembler,Explorer")
envSetVal( "license" "adeMaestroCheckoutOrder" 'string "Maestro")


; get rid of UNSUPPORTED: spectre_X_sc, Virtuoso_Acceler_Parallel_sc
envSetVal("spectre.envOpts" "userCmdLineOption" 'string "+lorder MMSIM:PRODUCT")
;for already saved ADE state
envSetVal("spectre.envOpts" "licOrder" 'string "MMSIM:PRODUCT")


envSetVal( "layout"  "xSnapSpacing" 'float  0.005)
envSetVal( "layout"  "ySnapSpacing" 'float  0.005)

; new library should be linked to this tech library
envSetVal("ddserv.lib" "techChoice" 'cyclic "bind")
envSetVal("cdba" "defaultAttachTech" 'string "SG13_dev")


; loadContext(prependInstallPath("etc/context/transUI.cxt"))
; streamInKeys->layerTable="/usr/pack/umc-65-kgf/dz/dfii/610/tech/streamIn.map"
; streamInKeys->textFontTable="/usr/pack/umc-90-kgf/faraday.dz/dfii/5141/pipo/txtfont.tab"

; the following is to keep reference libraries
; streamInKeys->refLib=t
; streamInKeys->refLibOrder="<reference libraries>"

; streamOutKeys->layerTable="/usr/pack/umc-65-kgf/dz/dfii/610/tech/stream.map"
;streamOutKeys->textFontTable="/usr/pack/umc-90-kgf/faraday.dz/dfii/5141/pipo/txtfont.tab"
streamOutKeys->runDirectory="."
streamOutKeys->errorMessageFile="PIPO.LOG"
