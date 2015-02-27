class CfgPatches {
  class AGM_Comp_CUP_Weapons_Strela {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
	requiredAddons[] = {CUP_Weapons_Strela_2};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"Winter"};
    authorUrl = "https://github.com/Winter259";
  };
};

class CfgWeapons {
  class Launcher_Base_F;
  // CUP_Weapons_Strela_2
  class CUP_launch_9K32Strela: Launcher_Base_F {
    AGM_Backblast_Angle = 45;
    AGM_Backblast_Range = 15;
    AGM_Backblast_Damage = 0.3; // Similar to stinger, could not find a reference.
  };
};
