class CfgPatches {
  class AGM_Comp_CUP_Weapons_M110 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_M110};
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

  // CUP_Weapons_M110
  class CUP_srifle_M110: Rifle_Base_F {
    AGM_Bipod = 1;
  };
  class CUP_srifle_M110_ANPAS13c2: CUP_srifle_M110 {};
  class CUP_srifle_M110_ANPVS10: CUP_srifle_M110 {};
};
