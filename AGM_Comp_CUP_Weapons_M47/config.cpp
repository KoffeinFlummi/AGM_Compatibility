class CfgPatches {
  class AGM_Comp_CUP_Weapons_M47 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition,CUP_Weapons_Ammunition,CUP_Weapons_M47};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"Winter"};
    authorUrl = "https://github.com/Winter259";
  };
};

class CfgWeapons {
  class Launcher_Base_F;
  // CUP_Weapons_M47
  // Requires adjusting to realistic values
  class CUP_launch_M47: Launcher_Base_F {
    AGM_Backblast_Angle = 45;
    AGM_Backblast_Range = 100;
    AGM_Backblast_Damage = 0.7;
  };
};
