class CfgPatches {
  class AGM_Comp_CUP_Weapons_SCAR {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_SCAR};
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

  // CUP_Weapons_SCAR
  class CUP_arifle_SCAR_Base: Rifle_Base_F {};
  class CUP_arifle_SCAR_L_Base: CUP_arifle_SCAR_Base {};
  class CUP_arifle_Mk16_CQC: CUP_arifle_SCAR_L_Base {};
  class CUP_arifle_Mk16_CQC_FG: CUP_arifle_Mk16_CQC {};
  class CUP_arifle_Mk16_CQC_SFG: CUP_arifle_Mk16_CQC {};
  class CUP_arifle_Mk16_CQC_EGLM: CUP_arifle_Mk16_CQC {};
  class CUP_arifle_Mk16_STD: CUP_arifle_SCAR_L_Base {};
  class CUP_arifle_Mk16_STD_FG: CUP_arifle_Mk16_STD {};
  class CUP_arifle_Mk16_STD_SFG: CUP_arifle_Mk16_STD {};
  class CUP_arifle_Mk16_STD_EGLM: CUP_arifle_Mk16_STD {};
  class CUP_arifle_Mk16_SV: CUP_arifle_SCAR_L_Base {};
  class CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds: CUP_arifle_Mk16_CQC_FG {};
  class CUP_arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup: CUP_arifle_Mk16_CQC_EGLM {};
  class CUP_arifle_Mk16_CQC_SFG_Holo: CUP_arifle_Mk16_CQC_SFG {};
  class CUP_arifle_Mk16_STD_EGLM_ACOG_Laser: CUP_arifle_Mk16_STD_EGLM {};
  class CUP_arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup: CUP_arifle_Mk16_STD_EGLM {};
  class CUP_arifle_Mk16_STD_FG_Holo_Laser: CUP_arifle_Mk16_STD_FG {};
  class CUP_arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser: CUP_arifle_Mk16_STD_FG {};
  class CUP_arifle_Mk17_Base: CUP_arifle_SCAR_Base {};
  class CUP_arifle_Mk17_CQC: CUP_arifle_Mk17_Base {};
  class CUP_arifle_Mk17_CQC_FG: CUP_arifle_Mk17_CQC {};
  class CUP_arifle_Mk17_CQC_SFG: CUP_arifle_Mk17_CQC_FG {};
  class CUP_arifle_Mk17_CQC_EGLM: CUP_arifle_Mk17_CQC {};
  class CUP_arifle_Mk17_STD: CUP_arifle_Mk17_Base {};
  class CUP_arifle_Mk17_STD_FG: CUP_arifle_Mk17_STD {};
  class CUP_arifle_Mk17_STD_SFG: CUP_arifle_Mk17_STD_FG {};
  class CUP_arifle_Mk17_STD_EGLM: CUP_arifle_Mk17_STD {
  };
  class CUP_arifle_Mk20: CUP_arifle_Mk17_Base {
    AGM_Bipod = 1;
  };
  class CUP_arifle_Mk17_CQC_SFG_Aim_mfsup: CUP_arifle_Mk17_CQC_SFG {};
  class CUP_arifle_Mk17_STD_FG_Aim_Laser_snds: CUP_arifle_Mk17_CQC_FG {};
  class CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser: CUP_arifle_Mk17_CQC_EGLM {};
  class CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds: CUP_arifle_Mk17_STD_FG {};
  class CUP_arifle_Mk20_LeupoldMk4MRT: CUP_arifle_Mk20 {};
  class CUP_arifle_Mk20_SB11420_snds: CUP_arifle_Mk20 {};
};
