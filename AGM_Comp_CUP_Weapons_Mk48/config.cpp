class CfgPatches {
  class AGM_Comp_CUP_Weapons_Mk48 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_Mk48};
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

  // CUP_Weapons_Mk48
  class CUP_lmg_Mk48_Base: Rifle_Long_Base_F {
    AGM_Overheating_allowSwapBarrel = 1;
    AGM_Overheating_JamChance[] = {0, 0.0008, 0.002, 0.01}; //2500 MRBS
    AGM_Bipod = 1;
  };
  class CUP_lmg_Mk48_des: CUP_lmg_Mk48_Base {};
  class CUP_lmg_Mk48_wdl: CUP_lmg_Mk48_Base {};
  class CUP_lmg_Mk48_des_Aim_Laser: CUP_lmg_Mk48_des {};
  class CUP_lmg_Mk48_wdl_Aim_Laser: CUP_lmg_Mk48_wdl {};
};
