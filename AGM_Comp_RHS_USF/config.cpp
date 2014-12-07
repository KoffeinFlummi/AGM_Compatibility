class CfgPatches {
  class AGM_Comp_RHS_USF {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {rhsusf_c_weapons};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"KoffeinFlummi"};
  };
};

class CfgAmmo {
  class BulletBase;
  class B_556x45_Ball;

  // Rifle rounds
  class rhsusf_B_300winmag: BulletBase {
  {
    AGM_BulletMass = 10.7;     // .300 Winchester Magnum GMX
  };


  class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball
  {
  };
  class rhs_ammo_556x45_M855A1_Ball_Red : rhs_ammo_556x45_M855A1_Ball
  {
  };
  class rhs_ammo_556x45_M855A1_Ball_Green : rhs_ammo_556x45_M855A1_Ball_Red
  {
  };
  class rhs_ammo_556x45_M855A1_Ball_Yellow : rhs_ammo_556x45_M855A1_Ball_Red
  {
  };

  class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball
  {
  };
  class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball
  {
  };

  class rhsammo_762x51_Ball: BulletBase
  {
    AGM_BulletMass = 10;      // 7.62x51 NATO
  };

  // Shotgun rounds
  class B_12Gauge_Pellets;
  class rhs_ammo_m576_buckshot: B_12Gauge_Pellets
  {
    AGM_BulletMass = 4;     // Grams of pellets; TODO: review
  };
};

class CfgWeapons {
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
