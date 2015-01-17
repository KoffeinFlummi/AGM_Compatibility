class CfgPatches {
  class AGM_Comp_CUP_Weapons_L85 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_L85};
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

  // CUP_Weapons_L85
  class CUP_arifle_L85A2_Base: Rifle_Base_F {
  };
  class CUP_arifle_L85A2: CUP_arifle_L85A2_Base {
  };
  class CUP_arifle_L85A2_GL: CUP_arifle_L85A2_Base {
  };
  class CUP_arifle_L86A2_Base: Rifle_Base_F {
  };
  class CUP_arifle_L86A2: CUP_arifle_L86A2_Base {
    AGM_Bipod = 1;
  };
  class CUP_arifle_L85A2_Holo_laser: CUP_arifle_L85A2 {};
  class CUP_arifle_L85A2_GL_Holo_Laser: CUP_arifle_L85A2_GL {};
  class CUP_arifle_L85A2_SUSAT_Laser: CUP_arifle_L85A2 {};
  class CUP_arifle_L85A2_GL_SUSAT_Laser: CUP_arifle_L85A2_GL {};
  class CUP_arifle_L85A2_CWS_Laser: CUP_arifle_L85A2 {};
  class CUP_arifle_L85A2_ACOG_Laser: CUP_arifle_L85A2 {};
  class CUP_arifle_L85A2_GL_ACOG_Laser: CUP_arifle_L85A2_GL {};
  class CUP_arifle_L86A2_ACOG: CUP_arifle_L86A2 {};
};
