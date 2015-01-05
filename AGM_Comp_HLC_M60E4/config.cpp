class CfgPatches {
  class AGM_Comp_HLC_M60E4 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_HLC_Core, hlcweapons_core, hlcweapons_m60e4};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"CAA-Picard", "Jonpas"};
    authorUrl = "https://github.com/esteldunedain/";
  };
};

class CfgWeapons {
  class Rifle_Base_F;
  class Rifle_Long_Base_F: Rifle_Base_F {};

  // hlcweapons_m60e4
  class hlc_M60e4_base: Rifle_Base_F {
    AGM_Overheating_allowSwapBarrel = 1;
    AGM_Overheating_JamChance[] = {0, 0.0012, 0.0059, 0.029}; //846 MRBS
    AGM_Bipod = 1;
  };
  class hlc_lmg_M60E4: hlc_M60e4_base {};
  class hlc_lmg_m60: hlc_M60e4_base {};
};