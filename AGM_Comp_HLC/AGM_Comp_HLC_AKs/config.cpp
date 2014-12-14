class CfgPatches {
  class AGM_Comp_HLC_AKs {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_HLC_Core, hlcweapons_core, hlcweapons_aks};
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

  // hlcweapons_aks
  class hlc_ak_base: Rifle_Base_F {};
  class hlc_rifle_ak74: hlc_ak_base {};
  class hlc_rifle_ak74_dirty: hlc_rifle_ak74 {};
  class hlc_rifle_aks74: hlc_rifle_ak74 {};
  class hlc_rifle_ak12: hlc_rifle_aks74 {};
  class hlc_rifle_aks74u: hlc_rifle_ak74 {};
  class hlc_rifle_ak47: hlc_rifle_ak74 {};
  class hlc_rifle_akm: hlc_rifle_ak47 {};
  class hlc_rifle_akmgl: hlc_rifle_akm {};
  class hlc_rifle_rpk: hlc_rifle_ak47 {
    AGM_Bipod = 1;
  };
  class hlc_rifle_aks74_GL: hlc_rifle_aks74 {};
  class hlc_rifle_aek971: hlc_rifle_ak74 {};
  class hlc_rifle_saiga12k: hlc_rifle_ak47 {};
};