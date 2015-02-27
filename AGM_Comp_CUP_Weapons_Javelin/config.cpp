class CfgPatches {
  class AGM_Comp_CUP_Weapons_Javelin {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {CUP_Weapons_Javelin};
    version = "1.1";
    versionStr = "1.1";
    versionAr[] = {1,1,0};
    author[] = {"Winter"};
    authorUrl = "https://github.com/Winter259";
  };
};

class CfgWeapons {
  class Launcher_Base_F;
  // CUP_Weapons_Javelin
  class CUP_launch_Javelin: Launcher_Base_F {
    AGM_Backblast_Range = 0; // Javelin is soft launch
    AGM_enableTopDownAttack = 1;
  };
};
