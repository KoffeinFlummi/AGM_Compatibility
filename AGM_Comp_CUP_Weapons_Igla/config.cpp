class CfgPatches {
  class AGM_Comp_CUP_Weapons_Igla {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {CUP_Weapons_Igla};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"Winter"};
    authorUrl = "https://github.com/Winter259";
  };
};

class CfgWeapons {
  class Launcher_Base_F;
  // CUP_Weapons_Igla
  class CUP_launch_Igla: Launcher_Base_F {
    AGM_Backblast_Damage = 0; // Soft launch
  };
};
