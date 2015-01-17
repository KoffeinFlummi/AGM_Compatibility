class CfgPatches {
  class AGM_Comp_CUP_Weapons_AK {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_AK};
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

  // CUP_Weapons_AK
  class CUP_arifle_AK_Base: Rifle_Base_F {};
  class CUP_arifle_AKS_Base: CUP_arifle_AK_Base {};
  class CUP_arifle_AK107_Base: CUP_arifle_AK_Base {};
  class CUP_arifle_AK74: CUP_arifle_AK_Base {};
  class CUP_arifle_AK107: CUP_arifle_AK107_Base {};
  class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base {};
  class CUP_arifle_AKS74: CUP_arifle_AKS_Base {};
  class CUP_arifle_AKS74U: CUP_arifle_AKS_Base {};
  class CUP_arifle_AK74_GL: CUP_arifle_AK_Base {};
  class CUP_arifle_AKM: CUP_arifle_AK_Base {};
  class CUP_arifle_AKS: CUP_arifle_AKM {};
  class CUP_arifle_AKS_Gold: CUP_arifle_AKS {};
  class CUP_arifle_RPK74: CUP_arifle_AK74 {
    AGM_Bipod = 1;
  };
  class CUP_arifle_AK107_GL_kobra: CUP_arifle_AK107_GL {};
  class CUP_arifle_AK107_kobra: CUP_arifle_AK107 {};
  class CUP_arifle_AK107_GL_pso: CUP_arifle_AK107_GL {};
  class CUP_arifle_AK107_pso: CUP_arifle_AK107 {};
  class CUP_arifle_AKS74_kobra: CUP_arifle_AKS74 {};
  class CUP_arifle_AKS74_pso: CUP_arifle_AKS74 {};
  class CUP_arifle_AKS74UN_kobra_snds: CUP_arifle_AKS74U {};
  class CUP_arifle_AKS74_Goshawk: CUP_arifle_AKS74 {};
  class CUP_arifle_AKS74_NSPU: CUP_arifle_AKS74 {};
  class CUP_arifle_AK74_GL_kobra: CUP_arifle_AK74_GL {};
};
