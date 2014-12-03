class CfgPatches {
	class AGM_Comp_RHS_USF {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {CUP_Weapons_Ammunition, CUP_Weapons_L110, CUP_Weapons_M240, CUP_Weapons_M249, CUP_Weapons_M60E4, CUP_Weapons_Mk48};
		version = "1.0";
		versionStr = "1.0";
		versionAr[] = {1,0,0};
		author[] = {"CAA-Picard"};
		authorUrl = "https://github.com/esteldunedain/";
	};
};

class CfgAmmo
{
	class BulletCore;
	class BulletBase: BulletCore{};
	class GrenadeBase;
	class Grenade;
	class GrenadeHand;
	class B_762x51_Ball;
	class MissileBase;
	class B_30mm_HE;
	class B_30mm_AP;
	class B_127x99_Ball;
	class G_40mm_HE;

	class CUP_B_545x39_Ball: BulletBase
	{
		AGM_BulletMass = 3.43;     // 5.45x39 7N6 FMJ
	};
	class CUP_B_545x39_Ball_Tracer_Green: CUP_B_545x39_Ball
	{
	};
	class CUP_B_545x39_Ball_Tracer_Red: BulletBase
	{
	};
	class CUP_B_545x39_Ball_Tracer_White: BulletBase
	{
	};
	class CUP_B_545x39_Ball_Tracer_Yellow: BulletBase
	{
	};
	class CUP_B_762x39_Ball: BulletBase
	{
		AGM_BulletMass = 7.9;      // 7.62x39 FMJ
	};
	class CUP_B_762x39_Ball_Tracer_Green: BulletBase
	{
	};
	class CUP_B_9x18_Ball: BulletBase
	{
		AGM_BulletMass = 6;        // 9x18mm Makarov FMJ
	};
	class CUP_B_9x18_Ball_Tracer_Green: BulletBase
	{
	};
	class CUP_B_9x18_Ball_Tracer_Red: BulletBase
	{
	};
	class CUP_B_9x18_Ball_Tracer_Yellow: BulletBase
	{
	};
	class CUP_B_9x18_Ball_White_Tracer: BulletBase
	{
	};
	class CUP_B_9x19_Ball: BulletBase
	{
		AGM_BulletMass = 7.45;    // 9×19mm Parabellum
	};
	class CUP_B_762x51_noTracer: B_762x51_Ball
	{
	};
	class CUP_B_762x51_Red_Tracer_3RndBurst: B_762x51_Ball
	{
	};
	class CUP_B_762x51_White_Tracer_3RndBurst: B_762x51_Ball
	{
	};
	class CUP_B_303_Ball: BulletBase
	{
		AGM_BulletMass = 10;      // .303 British SP
	};
	class CUP_B_127x107_Ball_Green_Tracer: BulletBase
	{
		AGM_BulletMass = 48.3;    // 12.7x108?
	};
	class CUP_B_127x108_Ball_Green_Tracer: BulletBase
	{
		AGM_BulletMass = 48.3;    // 12.7x108 API B32
	};
	class CUP_B_762x54_Ball_White_Tracer: BulletBase
	{
		AGM_BulletMass = 11.7;    // 7.62x54 FMJ
	};
	class CUP_B_762x54_Ball_Red_Tracer: CUP_B_762x54_Ball_White_Tracer
	{
	};
	class CUP_B_762x54_Ball_Green_Tracer: CUP_B_762x54_Ball_White_Tracer
	{
	};
	class CUP_B_762x54_Ball_Yellow_Tracer: CUP_B_762x54_Ball_White_Tracer
	{
	};
	class CUP_B_9x39_SP5: BulletBase
	{
		AGM_BulletMass = 16.8;    // 9x39.62
	};
	class CUP_B_12Gauge_74Slug: BulletBase
	{
		AGM_BulletMass = 4;     // Grams of pellets; TODO: review
	};
	class CUP_B_12Gauge_Pellets: BulletBase
	{
		AGM_BulletMass = 4;     // Grams of pellets; TODO: review
	};

	class CUP_B_19mm_HE: BulletBase
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_762x51_Tracer_Green: B_762x51_Ball
	{
	};
	class CUP_B_762x51_Tracer_Red: B_762x51_Ball
	{
	};
	class CUP_B_762x51_Tracer_Yellow: B_762x51_Ball
	{
	};
	class CUP_B_762x51_Tracer_White: B_762x51_Ball
	{
	};
	class B_127x107_Ball: BulletBase
	{
		AGM_BulletMass = 48.3;    // 12.7x108?
	};


	class CUP_B_9x18_SD: BulletBase
	{
		AGM_BulletMass = 6;        // 9x18mm Makarov FMJ
	};
	class CUP_B_765x17_Ball: BulletBase
	{
		AGM_BulletMass = 5;        // .32 ACP FMJ
	};
	class CUP_B_20mm_AP_Tracer_Red: BulletBase
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_20mm_AA: BulletBase
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_23mm_AA: BulletBase
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_23mm_HE: CUP_B_23mm_AA
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_23mm_AP: CUP_B_23mm_AA
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_23mm_APHE_No_Tracer: BulletBase
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_23mm_APHE_Green_Tracer: BulletBase
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_23mm_APHE_Yellow_Tracer: CUP_B_23mm_APHE_Green_Tracer
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_145x115_AP_Green_Tracer: BulletBase
	{
		AGM_BulletMass = 64.4;    // 14.5x114 .57 Cal AP
	};
	class CUP_B_30x113mm_M789_HEDP_Red_Tracer: B_30mm_HE
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30x113mm_M789_HEDP_Green_Tracer: CUP_B_30x113mm_M789_HEDP_Red_Tracer
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30x113mm_M789_HEDP_Yellow_Tracer: CUP_B_30x113mm_M789_HEDP_Red_Tracer
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30x113mm_M789_HEDP_White_Tracer: CUP_B_30x113mm_M789_HEDP_Red_Tracer
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_127x99_Ball_White_Tracer: B_127x99_Ball
	{
	};
	class CUP_B_86x70_Ball_noTracer: BulletBase
	{
		AGM_BulletMass = 12.96;    // .338 Lapua Magnum
	};
	class CUP_B_30mm_HE_Red_Tracer: B_30mm_HE
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30mm_HE_Green_Tracer: B_30mm_HE
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30mm_HE_Yellow_Tracer: B_30mm_HE
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30mm_HE_White_Tracer: B_30mm_HE
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30mm_AP_Red_Tracer: B_30mm_AP
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30mm_AP_Green_Tracer: B_30mm_AP
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30mm_AP_Yellow_Tracer: B_30mm_AP
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_30mm_AP_White_Tracer: B_30mm_AP
	{
		//TODO: Is this used by small arms?
	};
	class CUP_G_30mm_HE: G_40mm_HE
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_25mm_HE_White_Tracer: BulletBase
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_25mm_HE_Red_Tracer: CUP_B_25mm_HE_White_Tracer
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_25mm_HE_Green_Tracer: CUP_B_25mm_HE_White_Tracer
	{
		//TODO: Is this used by small arms?
	};
	class CUP_B_25mm_HE_Yellow_Tracer: CUP_B_25mm_HE_White_Tracer
	{
		//TODO: Is this used by small arms?
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
	};

	// CUP_Weapons_L110
	class CUP_lmg_L110A1: Rifle_Long_Base_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
	};
	class CUP_lmg_L110A1_Aim_Laser: CUP_lmg_L110A1
	{
	};

	// CUP_Weapons_M240
	class CUP_lmg_M240: Rifle_Long_Base_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0, 0.00033, 0.0017, 0.0084}; //2962 MRBS
	};
	class CUP_lmg_M240_ElcanM143: CUP_lmg_M240
	{
	};

	// CUP_Weapons_M249
	class CUP_lmg_M249_para: Rifle_Long_Base_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0, 0.00004, 0.0002, 0.0011}; //23400 MRBS
	};
	class CUP_lmg_M249_ElcanM145_Laser: CUP_lmg_M249_para
	{
	};
	class CUP_lmg_M249_Laser: CUP_lmg_M249_para
	{
	};
	class CUP_lmg_M249_ANPAS13c2_Laser: CUP_lmg_M249_para
	{
	};
	class CUP_lmg_M249: CUP_lmg_M249_para
	{
	};

	// CUP_Weapons_M60E4
	class CUP_lmg_M60A4: Rifle_Long_Base_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0, 0.0012, 0.0059, 0.029}; //846 MRBS  
	};
	
	// CUP_Weapons_Mk48
	class CUP_lmg_Mk48_Base: Rifle_Long_Base_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0, 0.0008, 0.002, 0.01}; //2500 MRBS
	};
	class CUP_lmg_Mk48_des: CUP_lmg_Mk48_Base
	{
	};
	class CUP_lmg_Mk48_wdl: CUP_lmg_Mk48_Base
	{
	};
	class CUP_lmg_Mk48_des_Aim_Laser: CUP_lmg_Mk48_des
	{
	};
	class CUP_lmg_Mk48_wdl_Aim_Laser: CUP_lmg_Mk48_wdl
	{
	};
};