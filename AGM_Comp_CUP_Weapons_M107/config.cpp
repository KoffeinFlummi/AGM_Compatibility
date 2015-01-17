class CfgPatches {
  class AGM_Comp_CUP_Weapons_M107 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_M107};
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

  // CUP_Weapons_M107
  class CUP_srifle_M107_Base: Rifle_Long_Base_F {};
  class CUP_srifle_M107_LeupoldVX3: CUP_srifle_M107_Base {
    AGM_Bipod = 1;
  };
  class CUP_srifle_M107_ANPAS13c2: CUP_srifle_M107_Base {
    AGM_Bipod = 1;
  };
};
