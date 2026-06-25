; v0.2 - zerun - Tue May  9 16:20:04 CEST 2023
;  - add a condition to see if HPEESOF_DIR exist for fileName=...
; v0.1 - <muheim@ee.ethz.ch> - Thu Aug 11 15:59:29 CEST 2022
;  - copy from "/usr/pack/pathwave_ads-2023-bt/idf/examples/.cdsinit"

; An ADS DLC user setup example
unless( getShellEnvVar("HPEESOF_DIR")
    warn( "HPEESOF_DIR is not defined. ADS DLC may not work!\n" )
)
let( (fileName bindkeyFiles cdsHome)

    cdsHome = getShellEnvVar("CDSHOME")
    unless( cdsHome
        cdsHome = simplifyFilename(prependInstallPath("/../.."))
        setShellEnvVar(strcat("CDSHOME=" cdsHome))
    )
    ; NOTE: The following DL initialization file must be loaded to run DL
    if( getShellEnvVar("HPEESOF_DIR") then
        fileName = strcat(getShellEnvVar("HPEESOF_DIR") "/idf/config/.cdsinit")
        if( isFile( fileName ) then
          load( fileName ) 
        else
          warn( strcat("$HPEESOF_DIR/idf/config/.cdsinit not found! " 
              "DLC may not work!\n") )
        )
    else
        warn( "HPEESOF_DIR is not defined. ADS DLC may not work!\n" )
    )

    
    ; load Cadence sample bindkey definitions for schematic and layout editors.
    bindkeyFiles='(
        "samples/local/schBindKeys.il"
        "samples/local/leBindKeys.il"
    )
    foreach( bkFile bindkeyFiles
        bkFile = prependInstallPath( bkFile )
        when( isFile( bkFile )
            loadi( bkFile )
        ) 
    )

    ; sample RFDE/DL options:
    ; envSetVal( "asimenv.startup" "simulator" 'string "ADSsim" )
    ; envSetVal( "asimenv" "saveDir" 'string "./artist_states" )
    ; envSetVal( "asimenv.startup" "projectDir" 'string "./simulation" )
    ; envSetVal( "ADSsim.envOpts" "stopViewList" 'string  "spectre ads" )
    ; NOTE: For DL, use IDF_SWITCH_VIEW_LIST in idf.cfg file instead of the following line:
    ; envSetVal( "ADSsim.envOpts" "switchViewList" 'string  "spectre ads schematic extracted veriloga" )
    ; envSetVal( "ADSsim.envOpts" "spectreCompatibility" 'boolean nil)
    ; envSetVal( "ADSsim.envOpts" "translateResults" 'boolean t )
    ; envSetVal( "ADSsim.envOpts" "nativeSimulation" 'boolean nil )
    ; envSetVal( "ADSsim.envOpts" "noOsslcSimulation" 'boolean nil )
)
