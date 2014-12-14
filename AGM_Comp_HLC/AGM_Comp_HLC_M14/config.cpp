class CfgPatches {
  class AGM_Comp_HLC_M14 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_HLC_Core, hlcweapons_core, hlcweapons_m14};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"CAA-Picard"};
    authorUrl = "https://github.com/esteldunedain/";
  };
};

class CfgWeapons {
  class Rifle_Base_F;
  class Rifle_Long_Base_F: Rifle_Base_F {};

  // hlcweapons_m14
  class hlc_M14_base: Rifle_Base_F {};
  class hlc_rifle_M14: hlc_M14_base {};
  class hlc_rifle_M21: hlc_M14_base {
    AGM_Bipod = 1;
  };
  class hlc_rifle_m14dmr: hlc_rifle_M21 {
    AGM_Bipod = 1;
  };
  class hlc_rifle_m14sopmod: hlc_rifle_M14 {};
};