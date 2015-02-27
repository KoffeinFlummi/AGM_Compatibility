class CfgPatches {
  class AGM_Comp_CUP_Weapons_RPG18 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition,CUP_Weapons_RPG18};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"Winter"};
    authorUrl = "https://github.com/Winter259";
  };
};

class CfgWeapons {
  class Launcher_Base_F;
  // CUP_Weapons_RPG18
  class CUP_launch_RPG18: Launcher_Base_F {
    AGM_Backblast_Angle = 40;
    AGM_Backblast_Range = 15;
    AGM_Backblast_Damage = 1;
	AGM_UsedTube = "AGM_launch_RPG18_Used_F"; // The class name of the used tube.
    magazines[] = {"AGM_PreloadedMissileDummy_CUP"}; // The dummy magazine
  };
  class AGM_launch_RPG18_Used_F: CUP_launch_RPG18 { // the used tube should be a sub class of the disposable launcher
    scope = 1;
    AGM_isUsedLauncher = 1;
    author = "$STR_AGM_Core_AGMTeam";
    displayName = "$STR_AGM_Disposable_UsedTube";
    descriptionShort = "$STR_AGM_Disposable_UsedTubeDescription";
    magazines[] = {"AGM_FiredMissileDummy_CUP"}; // This will disable the used launcher class from being fired again.
    //picture = ""; @todo
    //model = ""; @todo
    weaponPoolAvailable = 0;
  };
};

class CfgMagazines {
  class CUP_RPG18_M;
  class AGM_PreloadedMissileDummy_CUP: CUP_RPG18_M {              // The dummy magazine
    author = "$STR_AGM_Core_AGMTeam";
    scope = 1;
    displayName = "$STR_AGM_Disposable_PreloadedMissileDummy";
    picture = "\AGM_Core\UI\blank_CO.paa";
    weaponPoolAvailable = 0;
    mass = 0;
  };
  class AGM_FiredMissileDummy_CUP: AGM_PreloadedMissileDummy_CUP {
    count = 0;
  };
  class AGM_UsedTube_F: CUP_RPG18_M {
    author = "$STR_AGM_Core_AGMTeam";
    displayName = "$STR_AGM_Disposable_UsedTube";
    descriptionShort = "$STR_AGM_Disposable_UsedTubeDescription";
    displayNameShort = "-";
    count = 0;
    weaponPoolAvailable = 0;
    modelSpecial = "";
    mass = 0;
  };
};
