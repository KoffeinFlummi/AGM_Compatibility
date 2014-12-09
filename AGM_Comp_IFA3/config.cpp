class CfgPatches {
  class AGM_Comp_IFA3 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AiA_BaseConfig_F, AiA_Weapons_IF, LIB_Weapons_A3};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"Fadi"};
  };
};

class cfgWeapons {

  class LIB_LMG;

  class LIB_MG42: LIB_LMG {
    AGM_Bipod = 1;
    AGM_Overheating_allowSwapBarrel = 1;
  };

  class LIB_MLMG42: LIB_MLMG {
    // CSW variant
    AGM_Bipod = 0;
    AGM_Overheating_allowSwapBarrel = 1;
  };

  class LIB_MG42_Tripod: LIB_MLMG42 {};

  class LIB_MG42_veh: LIB_MG42_Tripod {
    AGM_Bipod = 0;
    AGM_Overheating_allowSwapBarrel = 0;
  };

  class LIB_DP28: LIB_LMG {
    AGM_Bipod = 1;
    AGM_Overheating_allowSwapBarrel = 0;
  };

  class LIB_DT: LIB_LMG {
    AGM_Bipod = 1;
    AGM_Overheating_allowSwapBarrel = 0;
  };

  class Launcher;
  class LIB_PzFaust_30m: Launcher {
    AGM_Backblast_Angle = 60;
    AGM_Backblast_Range = 15;
    AGM_Backblast_Damage = 0.7;
  };
};

class cfgVehicles {
  class LIB_tank_base: Tank
  {
    AGM_FCSEnabled = 0;
  };

  class LIB_SOV_pilot: LIB_SOV_soldier_base {
  	AGM_GForceCoef = 0.75; // Should this be lower? Pilots having no G-suit and such...
  };

  class LIB_GER_pilot: LIB_GER_soldier_base {
  	AGM_GForceCoef = 0.75; // Should this be lower? Pilots having no G-suit and such...
  };
};