class CfgPatches {
  class AGM_Comp_CUP_Weapons_G36 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_G36};
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

  // CUP_Weapons_G36
  class CUP_arifle_G36_Base: Rifle_Base_f {};
  class CUP_arifle_G36A: CUP_arifle_G36_Base {};
  class CUP_arifle_G36A_camo: CUP_arifle_G36A {};
  class CUP_arifle_G36K: CUP_arifle_G36A {};
  class CUP_arifle_G36K_camo: CUP_arifle_G36K {};
  class CUP_arifle_G36C: Rifle_Base_f {};
  class CUP_arifle_G36C_camo: CUP_arifle_G36C {};
  class CUP_arifle_MG36: CUP_arifle_G36C {
    AGM_Bipod = 1;
  };
  class CUP_arifle_MG36_camo: CUP_arifle_MG36 {};
  class CUP_arifle_G36C_holo_snds: CUP_arifle_G36C {};
  class CUP_arifle_G36C_camo_holo_snds: CUP_arifle_G36C_camo {};
};
