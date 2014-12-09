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
  class Default;
  class PistolCore;
  class RifleCore;
  class MGunCore;
  class LauncherCore;
  class CannonCore;
  class MGun;
  class GrenadeLauncher;
  class Rifle;
  class Launcher;
  class RocketPods;
  class HandGunBase;

  class LIB_PISTOL;
  class LIB_SMG;
  class LIB_RIFLE;
  class LIB_LMG;
  class LIB_MLMG;

  class LIB_MP40: LIB_SMG {
    AGM_Overheating_Dispersion[] = {0, 0.001, 0.002, 0.004};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.006, 0.02};
  };

  class LIB_K98: LIB_RIFLE {
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };

  class LIB_K98ZF39: LIB_K98 {
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };

  class LIB_MP44: Rifle {
    AGM_Overheating_Dispersion[] = {0, 0.001, 0.002, 0.004};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.006, 0.02};
  };

  class LIB_M9130: LIB_K98
  {
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };

  class LIB_SVT_40: LIB_M9130
  {
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };

  class LIB_G43: LIB_SVT_40 {
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };

  class LIB_MG42: LIB_LMG {
    AGM_Bipod = 1;
    AGM_Overheating_allowSwapBarrel = 1;
  };

  // CSW variant
  class LIB_MLMG42: LIB_MLMG {
    AGM_Bipod = 0;
    AGM_Overheating_allowSwapBarrel = 1;
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };

  class LIB_MG42_Tripod: LIB_MLMG42 {};

  class LIB_MG42_veh: LIB_MG42_Tripod {
    AGM_Bipod = 0;
    AGM_Overheating_allowSwapBarrel = 0;
  };

  class LIB_PPSh41_m: LIB_SMG
  {
    AGM_Overheating_Dispersion[] = {0, 0.001, 0.002, 0.004};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.006, 0.02};
  };
  class LIB_PPSh41_d: LIB_PPSh41_m {};

  class LIB_M9130PU: LIB_K98ZF39
  {
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };

  class LIB_DP28: LIB_LMG {
    AGM_Bipod = 1;
    AGM_Overheating_allowSwapBarrel = 0;
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };

  class LIB_DT: LIB_LMG {
    AGM_Bipod = 1;
    AGM_Overheating_allowSwapBarrel = 0;
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };

  class LIB_PzFaust_30m: Launcher {
    AGM_Backblast_Angle = 60;
    AGM_Backblast_Range = 15;
    AGM_Backblast_Damage = 0.7;
  };

  // PzKpfw VI Ausf.B + PzKpfw VI Ausf.E
  class LIB_KwK36_L56: CannonCore
  {
    AGM_DangerZone_Angle = 90;
    AGM_DangerZone_Range = 50;
    AGM_DangerZone_Damage = 0.85;
  };

  // PzKpfw VI Ausf.H
  class LIB_KwK40_L48: CannonCore {
    AGM_DangerZone_Angle = 90;
    AGM_DangerZone_Range = 50;
    AGM_DangerZone_Damage = 0.85;
  };

  // PzKpfw V Ausf.A Panther
  class LIB_KwK42_L70: CannonCore
  {
    AGM_DangerZone_Angle = 90;
    AGM_DangerZone_Range = 50;
    AGM_DangerZone_Damage = 0.85;
  };

  // StuG III Ausf.g
  class LIB_StuK40_L48: LIB_KwK40_L48
  {
    AGM_DangerZone_Angle = 90;
    AGM_DangerZone_Range = 50;
    AGM_DangerZone_Damage = 0.85;
  };

  // IS-2
  class LIB_D25T: CannonCore
  {
    AGM_DangerZone_Angle = 90;
    AGM_DangerZone_Range = 50;
    AGM_DangerZone_Damage = 0.85;
  };

  // T-34-85
  class LIB_ZIS_S_53: CannonCore
  {
    AGM_DangerZone_Angle = 90;
    AGM_DangerZone_Range = 50;
    AGM_DangerZone_Damage = 0.85;
  };

  // T-34-76
  class LIB_F34: CannonCore
  {
    AGM_DangerZone_Angle = 90;
    AGM_DangerZone_Range = 50;
    AGM_DangerZone_Damage = 0.85;
  };

  // SU-85
  class LIB_D_5S: LIB_ZIS_S_53
  {
    AGM_DangerZone_Angle = 90;
    AGM_DangerZone_Range = 50;
    AGM_DangerZone_Damage = 0.85;
  };
};

class cfgVehicles {
  class Tank;
  class LIB_tank_base: Tank {
    AGM_FCSEnabled = 0;
  };

  class LIB_SOV_soldier_base;
  class LIB_SOV_pilot: LIB_SOV_soldier_base {
  	AGM_GForceCoef = 0.75; // Should this be lower? Pilots having no G-suit and such...
  };

  class LIB_GER_soldier_base;
  class LIB_GER_pilot: LIB_GER_soldier_base {
  	AGM_GForceCoef = 0.75; // Should this be lower? Pilots having no G-suit and such...
  };
};