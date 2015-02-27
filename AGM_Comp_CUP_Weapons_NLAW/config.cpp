class CfgPatches {
  class AGM_Comp_CUP_Weapons_NLAW {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {CUP_Weapons_Ammunition,CUP_Weapons_NLAW};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"Winter"};
    authorUrl = "https://github.com/Winter259";
  };
};

class CfgWeapons {
  class Launcher_Base_F;
  // CUP_Weapons_NLAW
  class CUP_launch_NLAW: Launcher_Base_F {
    AGM_Backblast_Damage = 0; // Soft launch
    AGM_UsedTube = "AGM_launch_NLAW_Used_F_CUP"; // The class name of the used tube.
    magazines[] = {"AGM_PreloadedMissileDummy_CUP"}; // The dummy magazine
  };
  class AGM_launch_NLAW_Used_F_CUP: CUP_launch_NLAW { // Requires a differently named weapon than that used in the PCML disposable patch
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
  class CUP_NLAW_M;
  class AGM_PreloadedMissileDummy_CUP: CUP_NLAW_M {              // The dummy magazine
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
  class AGM_UsedTube_F: CUP_NLAW_M {
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
