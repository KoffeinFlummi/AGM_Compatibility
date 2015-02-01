class CfgPatches {
  class AGM_Comp_RHS_USF {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {rhsusf_c_weapons, RHS_US_A2_AirImport};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"KoffeinFlummi", "CAA-Picard", "Jonpas"};
  };
};

class CfgVehicles {
  class Heli_Transport_01_base_F;
  class Heli_Transport_02_base_F;
  
  // UH-60
  class RHS_UH60_Base: Heli_Transport_01_base_F {
    AGM_FastRoping = 1;
    AGM_FastRoping_Positions[] = {{1.45, 1.925, -0.45}};
  };

  // CH-47F
  class RHS_CH_47F_base: Heli_Transport_02_base_F {
    AGM_FastRoping = 1;
    AGM_FastRoping_Positions[] = {{0,-0.7,-3.2}, {0, -7, -1}};
  };
};

class CfgAmmo {
  class BulletBase;
  class B_556x45_Ball;

  // Rifle rounds
  class rhsusf_B_300winmag: BulletBase {
    AGM_BulletMass = 10.7;     // .300 Winchester Magnum GMX
  };

  class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball {};
  class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball {};
  class rhs_ammo_556x45_M855A1_Ball_Green: rhs_ammo_556x45_M855A1_Ball_Red {};
  class rhs_ammo_556x45_M855A1_Ball_Yellow: rhs_ammo_556x45_M855A1_Ball_Red {};

  class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball {};
  class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball {};

  class rhsammo_762x51_Ball: BulletBase {
    AGM_BulletMass = 10;      // 7.62x51 NATO
  };

  // Shotgun rounds
  class B_12Gauge_Pellets;
  class rhs_ammo_m576_buckshot: B_12Gauge_Pellets {
    AGM_BulletMass = 4;     // Grams of pellets; TODO: review
  };
};

class CfgWeapons {
  class Rifle_Base_F;
  class Rifle_Long_Base_F;
  class srifle_EBR_F;
  class LMG_Mk200_F;

  class rhs_weap_M320_Base_F: Rifle_Base_F {};
  
  class rhs_weap_M320: rhs_weap_M320_Base_F {};

  class arifle_MX_Base_F: Rifle_Base_F {};
  class rhs_weap_m4_Base: arifle_MX_Base_F {
    AGM_Overheating_JamChance[] = {0, 0.00027, 0.0014, 0.0069}; //3600 MRBS
  };
  class rhs_weap_m4: rhs_weap_m4_Base {};
  class rhs_m4_compm4: rhs_weap_m4 {};
  class rhs_m4_acog: rhs_weap_m4 {};
  class rhs_m4_acog2: rhs_weap_m4 {};
  class rhs_m4_acog3: rhs_weap_m4 {};
  class rhs_weap_m4_carryhandle: rhs_weap_m4_Base {};
  class rhs_weap_m4a1: rhs_weap_m4_Base {};
  class rhs_weap_m4_grip: rhs_weap_m4_Base {};

  class rhs_m4_grip_compm4: rhs_weap_m4_grip {
    AGM_Bipod = 1;
  };
  class rhs_m4_grip_acog: rhs_weap_m4_grip {};
  class rhs_m4_grip_acog2: rhs_weap_m4_grip {};
  class rhs_m4_grip_acog3: rhs_weap_m4_grip {};
  class rhs_weap_m4a1_grip: rhs_weap_m4a1 {
    AGM_Bipod = 1;
  };

  class rhs_weap_m16a4: rhs_weap_m4_Base {
    AGM_Overheating_JamChance[] = {0, 0.00052, 0.0026, 0.013}; //1924 MRBS
  };

  class rhs_weap_m16a4_carryhandle: rhs_weap_m4_Base {};
  class rhs_weap_m16a4_grip: rhs_weap_m4_Base {
    AGM_Bipod = 1;
  };

  class rhs_m4_m320: rhs_weap_m4_Base {};
  class rhs_m4_m320_compm4: rhs_m4_m320 {};
  class rhs_m4_m320_acog: rhs_m4_m320 {};
  class rhs_m4_m320_acog2: rhs_m4_m320 {};
  class rhs_m4_m320_acog3: rhs_m4_m320 {};

  class rhs_m4a1_m320: rhs_weap_m4_Base {};

  class rhs_M249_base: LMG_Mk200_F {
    AGM_Overheating_allowSwapBarrel = 1;
    AGM_Overheating_JamChance[] = {0, 0.00004, 0.0002, 0.0011}; //23400 MRBS
    AGM_Bipod = 1;
  };
  class rhs_weap_m249_pip: rhs_M249_base {};
  class rhs_weap_m249_pip_elcan: rhs_weap_m249_pip {};

  class weap_m240_base: rhs_M249_base {
    AGM_Overheating_allowSwapBarrel = 1;
    AGM_Overheating_JamChance[] = {0, 0.00033, 0.0017, 0.0084}; //2962 MRBS
    AGM_Bipod = 1;
  };
  class rhs_weap_m240B: weap_m240_base {};
  class rhs_weap_m240b_elcan: rhs_weap_m240B {};

  class rhs_weap_m14ebrri: srifle_EBR_F {
    AGM_Bipod = 1;
  };
  class rhs_weap_m14ebrri_leu: rhs_weap_m14ebrri {};
  

  // Optics
  class InventoryOpticsItem_Base_F;

  class rhsusf_acc_sniper_base;
  class rhsusf_acc_LEUPOLDMK4: rhsusf_acc_sniper_base {
    AGM_ScopeAdjust_Horizontal[] = {-20, 20};
    AGM_ScopeAdjust_Vertical[] = {-30, 30};
    class ItemInfo: InventoryOpticsItem_Base_F {
      class OpticsModes {
        class pso1_scope {
          discreteDistance[] = {1};
          discreteDistanceInitIndex = 0;
        };
      };
    };
  };

  class optic_LRPS;
  class rhsusf_acc_LEUPOLDMK4_2: optic_LRPS {
    AGM_ScopeAdjust_Horizontal[] = {-50, 50};
    AGM_ScopeAdjust_Vertical[] = {-70, 70};
    class ItemInfo: InventoryOpticsItem_Base_F {
      class OpticsModes {
        class pso1_scope {
          discreteDistance[] = {1};
          discreteDistanceInitIndex = 0;
        };
      };
    };
  };
};
