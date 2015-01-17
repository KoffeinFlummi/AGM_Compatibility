class CfgPatches {
  class AGM_Comp_CUP_Weapons_M24 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_M24};
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

  // CUP_Weapons_M24
  class CUP_srifle_M24_des: Rifle_Base_F {
    AGM_Bipod = 1;
  };
  class CUP_srifle_M24_wdl: CUP_srifle_M24_des {};
  class CUP_srifle_M24_ghillie: CUP_srifle_M24_des {};
  class CUP_srifle_M40A3: CUP_srifle_M24_ghillie {};
  class CUP_srifle_M24_des_LeupoldMk4LRT: CUP_srifle_M24_des {};
  class CUP_srifle_M24_wdl_LeupoldMk4LRT: CUP_srifle_M24_wdl {};
};
