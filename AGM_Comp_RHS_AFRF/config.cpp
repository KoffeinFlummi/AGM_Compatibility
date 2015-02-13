class CfgPatches {
  class AGM_Comp_RHS_AFRH {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {rhs_c_a2port_car, rhs_c_a2port_air, rhs_c_troops, rhs_c_weapons};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"KoffeinFlummi", "CAA-Picard", "Jonpas"};
  };
};

class CfgVehicles {
  class RHS_Ural_BaseTurret;
  class RHS_Ural_Base: RHS_Ural_BaseTurret {
    AGM_Wheels[] = {"HitLFWheel", "HitRFWheel", "HitLMWheel", "HitRMWheel", "HitLF2Wheel", "HitRF2Wheel"};
    AGM_WheelsLocalized[] = {STR_AGM_Repair_HitLFWheel, STR_AGM_Repair_HitRFWheel, STR_AGM_Repair_HitLMWheel, STR_AGM_Repair_HitRMWheel, STR_AGM_Repair_HitLBWheel, STR_AGM_Repair_HitRBWheel};
  };


  class Heli_Attack_02_base_F;
  class Heli_Light_02_base_F;

  // Ka-52
  class RHS_Ka52_base: Heli_Attack_02_base_F {
    AGM_FastRoping = 0;
  };

  // Mi-24P
  class RHS_Mi24_base: Heli_Attack_02_base_F {
    AGM_FastRoping = 1;
    AGM_FastRoping_Positions[] = {{1.7, 2.9, -0.4}, {-0.5, 2.9, -0.4}};
  };
  // Mi-24V, Mi-24VT (inherits)
  class RHS_Mi24V_Base: RHS_Mi24_base {
    AGM_FastRoping = 1;
    AGM_FastRoping_Positions[] = {{1, 2.9, -0.4}, {-1.2, 2.9, -0.4}};
  };

  // Mi-8 (Base)
  class RHS_Mi8_base: Heli_Light_02_base_F {
    AGM_FastRoping = 0;
  };

  // Mi-8MTV-3, Mi-8AMTSh (inherits)
  class rhs_mi8mtv3_base: RHS_Mi8_base {
    AGM_FastRoping = 1;
    AGM_FastRoping_Positions[] = {{-1.25, 5.1, -0.9}};
  };


  class rhs_infantry_msv_base;
  class rhs_pilot_base: rhs_infantry_msv_base {
    AGM_GForceCoef = 0.55;
  };
};

class CfgAmmo {
  class BulletBase;
  class B_556x45_Ball;
  class B_762x51_Ball;

  // Rifle rounds
  class rhs_B_545x39_Ball: B_556x45_Ball {
    AGM_BulletMass = 3.2;      // 5.45x39 5N7
  };
  class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball {
    AGM_BulletMass = 3.62;     // 5.45x39 7N10 FMJ EP
  };
  class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball {
    AGM_BulletMass = 3.69;     // 5.45x39 7N22 AP
  };
  class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball {
    AGM_BulletMass = 4.15;     // 5.45x39 7N24
  };
  class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball {};

  class rhs_B_762x54_Ball: B_762x51_Ball {
    AGM_BulletMass = 9.6;      // 7.62x54 57-N-323S
  };
  class rhs_B_762x54_Ball_Tracer_Green: B_762x51_Ball {
  };
  class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball {
    AGM_BulletMass = 9.8;      // 7.62x54 7N1
  };

  class rhs_B_762x39_Ball: B_762x51_Ball {
    AGM_BulletMass = 7.9;      // 7.62x39 57-N-231
  };
  class rhs_B_762x39_Ball_89: rhs_B_762x39_Ball {};
  class rhs_B_762x39_Tracer: rhs_B_762x39_Ball {};
};

class CfgWeapons {
  class Rifle_Base_F;

  class rhs_weap_ak74m_Base_F: Rifle_Base_F {};
  class rhs_weap_ak74m: rhs_weap_ak74m_Base_F {};
  class rhs_weap_ak74m_pkas: rhs_weap_ak74m {};
  class rhs_weap_ak74m_pso1m2: rhs_weap_ak74m {};
  class rhs_weap_ak74m_1p29: rhs_weap_ak74m {};
  class rhs_weap_ak74m_camo: rhs_weap_ak74m {};
  class rhs_weap_ak74m_folded: rhs_weap_ak74m {};
  class rhs_weap_ak74m_2mag: rhs_weap_ak74m {};
  class rhs_weap_ak74m_2mag_camo: rhs_weap_ak74m_2mag {};
  class rhs_weap_ak74m_camo_pkas: rhs_weap_ak74m_camo {};
  class rhs_weap_ak74m_camo_pso1m2: rhs_weap_ak74m_camo {};
  class rhs_weap_ak74m_camo_1p29: rhs_weap_ak74m_camo {};
  class rhs_weap_ak74m_desert: rhs_weap_ak74m {};
  class rhs_weap_ak74m_gp25: rhs_weap_ak74m {};
  class rhs_weap_ak74: rhs_weap_ak74m {};
  class rhs_weap_ak74_gp25: rhs_weap_ak74m_gp25 {};
  class rhs_weap_aks74: rhs_weap_ak74 {};
  class rhs_weap_aks74u: rhs_weap_aks74 {};
  class rhs_weap_akm: rhs_weap_ak74m {};
  class rhs_weap_akms: rhs_weap_akm {};

  class rhs_weap_svd: rhs_weap_ak74m {};
  class rhs_weap_svd_pso1: rhs_weap_svd {};
  class rhs_weap_svdp: rhs_weap_svd {};
  class rhs_weap_svdp_wd: rhs_weap_svdp {};
  class rhs_weap_svds: rhs_weap_svdp {};
  class rhs_weap_svdp_pso1: rhs_weap_svdp {};
  class rhs_weap_svds_pso1: rhs_weap_svds {};

  class Rifle_Long_Base_F: Rifle_Base_F {};

  class rhs_pkp_base: Rifle_Long_Base_F {
    AGM_Bipod = 1;
  };

  class rhs_weap_pkp: rhs_pkp_base {};

  class rhs_weap_pkm: rhs_weap_pkp {
    AGM_Bipod = 1;
  };

  class rhs_weap_rpk74m: rhs_weap_pkp {
    AGM_Bipod = 1;
  };
  class rhs_weap_rpk74: rhs_weap_rpk74m {};


  class rhs_uniform_flora;
  class rhs_uniform_df15: rhs_uniform_flora {
    AGM_GForceCoef = 0.8;
  };


  // Optics
  class ItemCore;
  class InventoryOpticsItem_Base_F;

  // The base class basically is the PSO1, slightly weird config...
  class rhs_acc_sniper_base: ItemCore {
    class ItemInfo: InventoryOpticsItem_Base_F {
      class OpticsModes {
        class pso1_scope {
          discreteDistance[] = {1};
          discreteDistanceInitIndex = 0;
        };
      };
    };
  };
  class rhs_acc_pso1m2: rhs_acc_sniper_base {
    AGM_ScopeAdjust_Horizontal[] = {-20, 20};
    AGM_ScopeAdjust_Vertical[] = {-30, 30};
  };
};
