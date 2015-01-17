class CfgPatches {
  class AGM_Comp_CUP_Weapons_KSVK {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_KSVK};
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

  // CUP_Weapons_KSVK
  class CUP_srifle_ksvk: Rifle_Base_F {
    AGM_Bipod = 1;
  };
  class CUP_srifle_ksvk_PSO3: CUP_srifle_ksvk {};
};
