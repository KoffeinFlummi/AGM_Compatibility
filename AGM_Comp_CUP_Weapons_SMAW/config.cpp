class CfgPatches {
  class AGM_Comp_CUP_Weapons_SMAW {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition,CUP_Weapons_Ammunition,CUP_Weapons_SMAW};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"Winter"};
    authorUrl = "https://github.com/Winter259";
  };
};

class CfgWeapons {
  class Launcher_Base_F;
  // CUP_Weapons_SMAW
  class CUP_launch_Mk153Mod0: Launcher_Base_F {
    AGM_Backblast_Angle = 30;
    AGM_Backblast_Range = 30;
    AGM_Backblast_Damage = 1;
  };
  class CUP_launch_Mk153Mod0_SMAWOptics: CUP_launch_Mk153Mod0 {};
};
