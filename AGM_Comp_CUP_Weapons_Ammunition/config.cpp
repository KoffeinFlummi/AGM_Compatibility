class CfgPatches {
  class AGM_Comp_CUP_Weapons_Ammunition {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {CUP_Weapons_Ammunition};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"CAA-Picard", "Jonpas"};
    authorUrl = "https://github.com/esteldunedain/";
  };
};

class CfgAmmo {
  class BulletCore;
  class BulletBase: BulletCore {};
  class GrenadeBase;
  class Grenade;
  class GrenadeHand;
  class B_762x51_Ball;
  class MissileBase;
  class B_30mm_HE;
  class B_30mm_AP;
  class B_127x99_Ball;
  class G_40mm_HE;

  class CUP_B_545x39_Ball: BulletBase {
    AGM_BulletMass = 3.43;     // 5.45x39 7N6 FMJ
  };
  class CUP_B_545x39_Ball_Tracer_Green: CUP_B_545x39_Ball {};
  class CUP_B_545x39_Ball_Tracer_Red: BulletBase {};
  class CUP_B_545x39_Ball_Tracer_White: BulletBase {};
  class CUP_B_545x39_Ball_Tracer_Yellow: BulletBase {};
  class CUP_B_762x39_Ball: BulletBase {
    AGM_BulletMass = 7.9;      // 7.62x39 57-N-231
  };
  class CUP_B_762x39_Ball_Tracer_Green: BulletBase {};
  class CUP_B_9x18_Ball: BulletBase {
    AGM_BulletMass = 6;        // 9x18mm Makarov FMJ
  };
  class CUP_B_9x18_Ball_Tracer_Green: BulletBase {};
  class CUP_B_9x18_Ball_Tracer_Red: BulletBase {};
  class CUP_B_9x18_Ball_Tracer_Yellow: BulletBase {};
  class CUP_B_9x18_Ball_White_Tracer: BulletBase {};
  class CUP_B_9x19_Ball: BulletBase {
    AGM_BulletMass = 7.45;    // 9×19mm Parabellum
  };
  class CUP_B_762x51_noTracer: B_762x51_Ball {};
  class CUP_B_762x51_Red_Tracer_3RndBurst: B_762x51_Ball {};
  class CUP_B_762x51_White_Tracer_3RndBurst: B_762x51_Ball {};
  class CUP_B_303_Ball: BulletBase {
    AGM_BulletMass = 10;      // .303 British SP
  };
  class CUP_B_127x107_Ball_Green_Tracer: BulletBase {
    AGM_BulletMass = 48.3;    // 12.7x108?
  };
  class CUP_B_127x108_Ball_Green_Tracer: BulletBase {
    AGM_BulletMass = 48.3;    // 12.7x108 API B32
  };
  class CUP_B_762x54_Ball_White_Tracer: BulletBase {
    AGM_BulletMass = 9.6;     // 7.62x54 57-N-323S
  };
  class CUP_B_762x54_Ball_Red_Tracer: CUP_B_762x54_Ball_White_Tracer {};
  class CUP_B_762x54_Ball_Green_Tracer: CUP_B_762x54_Ball_White_Tracer {};
  class CUP_B_762x54_Ball_Yellow_Tracer: CUP_B_762x54_Ball_White_Tracer {};
  class CUP_B_9x39_SP5: BulletBase {
    AGM_BulletMass = 16.8;    // 9x39.62
  };
  class CUP_B_12Gauge_74Slug: BulletBase {
    AGM_BulletMass = 4;     // Grams of pellets; TODO: review
  };
  class CUP_B_12Gauge_Pellets: BulletBase {
    AGM_BulletMass = 4;     // Grams of pellets; TODO: review
  };
  class CUP_B_19mm_HE: BulletBase {
    //TODO: Is this used by small arms?
  };
  class CUP_B_762x51_Tracer_Green: B_762x51_Ball {};
  class CUP_B_762x51_Tracer_Red: B_762x51_Ball {};
  class CUP_B_762x51_Tracer_Yellow: B_762x51_Ball {};
  class CUP_B_762x51_Tracer_White: B_762x51_Ball {};
  class B_127x107_Ball: BulletBase {
    AGM_BulletMass = 48.3;    // 12.7x108?
  };
  class CUP_B_9x18_SD: BulletBase {
    AGM_BulletMass = 6;        // 9x18mm Makarov FMJ
  };
  class CUP_B_765x17_Ball: BulletBase {
    AGM_BulletMass = 5;        // .32 ACP FMJ
  };
  class CUP_B_20mm_AP_Tracer_Red: BulletBase {
    //TODO: Is this used by small arms?
  };
  class CUP_B_20mm_AA: BulletBase {
    //TODO: Is this used by small arms?
  };
  class CUP_B_23mm_AA: BulletBase {
    //TODO: Is this used by small arms?
  };
  class CUP_B_23mm_HE: CUP_B_23mm_AA {
    //TODO: Is this used by small arms?
  };
  class CUP_B_23mm_AP: CUP_B_23mm_AA {
    //TODO: Is this used by small arms?
  };
  class CUP_B_23mm_APHE_No_Tracer: BulletBase {
    //TODO: Is this used by small arms?
  };
  class CUP_B_23mm_APHE_Green_Tracer: BulletBase {
    //TODO: Is this used by small arms?
  };
  class CUP_B_23mm_APHE_Yellow_Tracer: CUP_B_23mm_APHE_Green_Tracer {
    //TODO: Is this used by small arms?
  };
  class CUP_B_145x115_AP_Green_Tracer: BulletBase {
    AGM_BulletMass = 64.4;    // 14.5x114 .57 Cal AP
  };
  class CUP_B_30x113mm_M789_HEDP_Red_Tracer: B_30mm_HE {
    //TODO: Is this used by small arms?
  };
  class CUP_B_30x113mm_M789_HEDP_Green_Tracer: CUP_B_30x113mm_M789_HEDP_Red_Tracer {
    //TODO: Is this used by small arms?
  };
  class CUP_B_30x113mm_M789_HEDP_Yellow_Tracer: CUP_B_30x113mm_M789_HEDP_Red_Tracer {
    //TODO: Is this used by small arms?
  };
  class CUP_B_30x113mm_M789_HEDP_White_Tracer: CUP_B_30x113mm_M789_HEDP_Red_Tracer {
    //TODO: Is this used by small arms?
  };
  class CUP_B_127x99_Ball_White_Tracer: B_127x99_Ball {};
  class CUP_B_86x70_Ball_noTracer: BulletBase {
    AGM_BulletMass = 12.96;    // .338 Lapua Magnum
  };
};
