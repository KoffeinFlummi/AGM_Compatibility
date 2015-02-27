class CfgPatches {
  class AGM_Comp_CUP_Weapons_MAAWS {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {CUP_Weapons_MAAWS};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"Winter"};
    authorUrl = "https://github.com/Winter259";
  };
};

class CfgWeapons {
  class Launcher_Base_F;
  // CUP_Weapons_MAAWS
  class CUP_launch_MAAWS: Launcher_Base_F {
    AGM_Backblast_Angle = 60;
    AGM_Backblast_Range = 28;
    AGM_Backblast_Damage = 0.7;
  };
  class CUP_launch_MAAWS_Scope: CUP_launch_MAAWS {};
};
