class CfgPatches {
  class AGM_Comp_CUP_Weapons_RPG7 {
    units[] = {};
	weapons[] = {};
	requiredVersion = 0.1;
	requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition,
	CUP_Weapons_Ammunition,CUP_Weapons_RPG7};
	version = "1.0";
	versionStr = "1.0";
	versionAr[] = {1,0,0};
	author[] = {"Winter"};
	authorUrl = "https://github.com/Winter259";
  };
};

class CfgWeapons {
  class Launcher_Base_F;
  // CUP_Weapons_RPG7
  class CUP_launch_RPG7V: Launcher_Base_F {
    AGM_Backblast_Angle = 45;
    AGM_Backblast_Range = 20;
    AGM_Backblast_Damage = 1;
  };
};
