class CfgPatches {
  class AGM_Comp_CUP_Weapons_PK {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_PK};
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

  // CUP_Weapons_PK
  class CUP_lmg_PKM: Rifle_Long_Base_F {
    AGM_Bipod = 1;
  };
  class CUP_lmg_Pecheneg: CUP_lmg_PKM {};
  class CUP_lmg_Pecheneg_PScope: CUP_lmg_Pecheneg {};
};
