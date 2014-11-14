class CfgPatches {
  class AGM_Comp_BWA3 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {BWA3_Weapons, BWA3_Tracked, BWA3_Units};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"KoffeinFlummi"};
  };
};

#define FUEL_FACTOR 0.165

class CfgWeapons {
  class ItemCore;
  class Vest_Camo_Base: ItemCore {
    class ItemInfo;
  };

  class BWA3_Vest_Fleck: Vest_Camo_Base {
    class ItemInfo: ItemInfo {
      armor = 24;
      passThrough = 0.75;
    };
  };
};

class CfgVehicles {
  class O_APC_Tracked_02_cannon_F;
  class BWA3_Puma_Fleck: O_APC_Tracked_02_cannon_F {
    fuelCapacity = 600 * FUEL_FACTOR;
  };

  class B_MBT_01_cannon_F;
  class BWA3_Leopard2A6M_Fleck: B_MBT_01_cannon_F {
    fuelCapacity = 500 * FUEL_FACTOR;
  };
};
