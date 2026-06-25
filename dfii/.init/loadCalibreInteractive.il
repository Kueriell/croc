; v0.1 - <kgf@iis.ee.ethz.ch> - Mon Nov  1 14:25:44 CET 2021 
;  - copy from tsmc65 v0.1 and adapted it

printf("DZ: BEGIN OF CALIBRE INTERACTIVE LOADING\n")

; Load the env variables
;load("/usr/pack/calibre-2021.3-kgf/DZ_STUFF/skill/calibre_env.il")
;load("/usr/pack/calibre-2021.3-bt/DZ_STUFF/skill/calibre_env.il")

if( isFile("/usr/pack/calibre-2021.3-bt/DZ_STUFF/skill/calibre_env.il") then
 load("/usr/pack/calibre-2021.3-bt/DZ_STUFF/skill/calibre_env.il")
else
 if( isFile("/usr/pack/calibre-2021.3-kgf/DZ_STUFF/skill/calibre_env.il") then
   load("/usr/pack/calibre-2021.3-kgf/DZ_STUFF/skill/calibre_env.il")
 else
   printf("DZ: Can not find the install file for 2021.3") 
 )
)
;
; check MGC_HOME
;
mgc_home=getShellEnvVar("MGC_HOME")

if( mgc_home!=nil && isDir(mgc_home) && isReadable(mgc_home) then

    ; Load calibre.skl or calibre.4.3.skl, not both!

    ; Load calibre.skl for Cadence versions 4.4 and greater
    load(strcat(mgc_home "/lib/calibre.skl"))


else

    ; MGC_HOME is not set correctly. Report the problem.

    printf("//  Calibre Error: Environment variable ")

    if( mgc_home==nil || mgc_home=="" then
        printf("MGC_HOME is not set.");
    else
        if( !isDir(mgc_home) then
            printf("MGC_HOME does not point to a directory.");
        else
            if( !isReadable(mgc_home) then
                printf("MGC_HOME points to an unreadable directory.");
            )
        )
    )
    printf(" Calibre Skill Interface not loaded.\n")

    ; Display a dialog box message about load failure.

    hiDisplayAppDBox(
        ?name           'MGCHOMEErrorDlg
        ?dboxBanner     "Calibre Error"
        ?dboxText       "Calibre Skill Interface not loaded."
        ?dialogType     hicErrorDialog
        ?dialogStyle    'modal
        ?buttonLayout   'Close
    )
)

;;;  end some variables:
mgc_eview_globals->cellMapFile = "../calibre/pex/calview.cellmap"
mgc_eview_globals->deviceViewScale = 1.0
mgc_eview_globals->parasiticViewScale = 1.0
mgc_eview_globals->extViewName = "extracted"
;;mgc_eview_globals->extViewType = "maskLayout"
mgc_eview_globals->extViewType = "schematic"

;; seting for the Layout Export - calibre
;streamOutKeys->runDir = "."
  ; is ready set in "loadKit.il"

;; alternative trick
;;mgc_calibre_export_netlist_template_file ="/usr/pack/smic-130-kgf/dz/calibre/2008.3/dfii/mgc_export_template.il"
;;mgc_rve_load_export_netlist_template_file()

printf("DZ: END OF CALIBRE INTERACTIVE LOADING\n")

