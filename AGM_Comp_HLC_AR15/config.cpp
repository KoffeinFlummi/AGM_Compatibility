class CfgPatches {
  class AGM_Comp_HLC_AR15 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_HLC_Core, hlcweapons_core, hlcweapons_ar15};
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

  // hlcweapons_ar15
  class hlc_ar15_base: Rifle_Base_F {};
  class hlc_rifle_RU556: hlc_ar15_base {};
  class hlc_rifle_RU5562: hlc_rifle_RU556 {};
  class hlc_rifle_bcmjack: hlc_ar15_base {};
  class hlc_rifle_Colt727: hlc_ar15_base {};
  class hlc_rifle_Colt727_GL: hlc_rifle_Colt727 {};
  class hlc_rifle_Bushmaster300: hlc_rifle_Colt727 {};
  class hlc_rifle_vendimus: hlc_rifle_Bushmaster300 {};
  class hlc_rifle_SAMR: hlc_rifle_RU556 {
    AGM_Bipod = 1;
  };
  class hlc_rifle_samr2: hlc_rifle_SAMR {};
  class hlc_rifle_honeybase: hlc_rifle_RU556 {};
  class hlc_rifle_honeybadger: hlc_rifle_honeybase {};
};
