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
