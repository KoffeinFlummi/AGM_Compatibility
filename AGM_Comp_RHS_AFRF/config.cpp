class CfgPatches {
  class AGM_Comp_RHS_AFRH {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {rhs_c_weapons};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"KoffeinFlummi", "CAA-Picard"};
  };
};

class CfgAmmo {
  class BulletBase;
  class B_556x45_Ball;
  class B_762x51_Ball;

  // Rifle rounds
  class rhs_B_545x39_Ball: B_556x45_Ball
  {
    AGM_BulletMass = 3.2;      // 5.45x39 5N7
  };
  class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball
  {
    AGM_BulletMass = 3.62;     // 5.45x39 7N10 FMJ EP
  };
  class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball
  {
    AGM_BulletMass = 3.69;     // 5.45x39 7N22 AP
  };
  class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball
  {
    AGM_BulletMass = 4.15;     // 5.45x39 7N24
  };
  class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
  {
  };

  class rhs_B_762x54_Ball: B_762x51_Ball
  {
    AGM_BulletMass = 9.6;      // 7.62x54 57-N-323S
  };
  class rhs_B_762x54_Ball_Tracer_Green: B_762x51_Ball
  {
  };
  class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball
  {
    AGM_BulletMass = 9.8;      // 7.62x54 7N1
  };

  class rhs_B_762x39_Ball: B_762x51_Ball
  {
    AGM_BulletMass = 7.9;      // 7.62x39 57-N-231
  };
  class rhs_B_762x39_Ball_89 : rhs_B_762x39_Ball
  {
  };
  class rhs_B_762x39_Tracer : rhs_B_762x39_Ball
  {
  };
};