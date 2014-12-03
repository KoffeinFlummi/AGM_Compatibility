class CfgPatches {
	class AGM_Comp_CUP {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {CUP_Weapons_Ammunition, CUP_Weapons_L110, CUP_Weapons_M240, CUP_Weapons_M249, CUP_Weapons_M60E4, CUP_Weapons_Mk48, CUP_Weapons_AK, CUP_Weapons_PK, CUP_Weapons_AS50, CUP_Weapons_L85, CUP_Weapons_G36, CUP_Weapons_M107, CUP_Weapons_UK59};
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
		AGM_Bipod = 1;
	};
	class CUP_lmg_L110A1_Aim_Laser: CUP_lmg_L110A1
	{
	};


	// CUP_Weapons_M240
	class CUP_lmg_M240: Rifle_Long_Base_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0, 0.00033, 0.0017, 0.0084}; //2962 MRBS
		AGM_Bipod = 1;
	};
	class CUP_lmg_M240_ElcanM143: CUP_lmg_M240
	{
	};


	// CUP_Weapons_M249
	class CUP_lmg_M249_para: Rifle_Long_Base_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0, 0.00004, 0.0002, 0.0011}; //23400 MRBS
		AGM_Bipod = 1;
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
		AGM_Bipod = 1;
	};


	// CUP_Weapons_Mk48
	class CUP_lmg_Mk48_Base: Rifle_Long_Base_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0, 0.0008, 0.002, 0.01}; //2500 MRBS
		AGM_Bipod = 1;
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


	// CUP_Weapons_AK
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
	};
	class CUP_arifle_AKS_Base: CUP_arifle_AK_Base
	{
	};
	class CUP_arifle_AK107_Base: CUP_arifle_AK_Base
	{
	};
	class CUP_arifle_AK74: CUP_arifle_AK_Base
	{
	};
	class CUP_arifle_AK107: CUP_arifle_AK107_Base
	{
	};
	class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base
	{
	};
	class CUP_arifle_AKS74: CUP_arifle_AKS_Base
	{
	};
	class CUP_arifle_AKS74U: CUP_arifle_AKS_Base
	{
	};
	class CUP_arifle_AK74_GL: CUP_arifle_AK_Base
	{
	};
	class CUP_arifle_AKM: CUP_arifle_AK_Base
	{
	};
	class CUP_arifle_AKS: CUP_arifle_AKM
	{
	};
	class CUP_arifle_AKS_Gold: CUP_arifle_AKS
	{
	};
	class CUP_arifle_RPK74: CUP_arifle_AK74
	{
		AGM_Bipod = 1;
	};
	class CUP_arifle_AK107_GL_kobra: CUP_arifle_AK107_GL
	{
	};
	class CUP_arifle_AK107_kobra: CUP_arifle_AK107
	{
	};
	class CUP_arifle_AK107_GL_pso: CUP_arifle_AK107_GL
	{
	};
	class CUP_arifle_AK107_pso: CUP_arifle_AK107
	{
	};
	class CUP_arifle_AKS74_kobra: CUP_arifle_AKS74
	{
	};
	class CUP_arifle_AKS74_pso: CUP_arifle_AKS74
	{
	};
	class CUP_arifle_AKS74UN_kobra_snds: CUP_arifle_AKS74U
	{
	};
	class CUP_arifle_AKS74_Goshawk: CUP_arifle_AKS74
	{
	};
	class CUP_arifle_AKS74_NSPU: CUP_arifle_AKS74
	{
	};
	class CUP_arifle_AK74_GL_kobra: CUP_arifle_AK74_GL
	{
	};


	// CUP_Weapons_PK
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{
		AGM_Bipod = 1;
	};
	class CUP_lmg_Pecheneg: CUP_lmg_PKM
	{
	};
	class CUP_lmg_Pecheneg_PScope: CUP_lmg_Pecheneg
	{
	};

	// CUP_Weapons_AS50
	class CUP_srifle_AS50: Rifle_Long_Base_F
	{
		AGM_Bipod = 1;
	};
	class CUP_srifle_AS50_SBPMII: CUP_srifle_AS50
	{
	};
	class CUP_srifle_AS50_AMPAS13c2: CUP_srifle_AS50
	{
	};


	// CUP_Weapons_L85
	class CUP_arifle_L85A2_Base: Rifle_Base_F
	{
	};
	class CUP_arifle_L85A2: CUP_arifle_L85A2_Base
	{
	};
	class CUP_arifle_L85A2_GL: CUP_arifle_L85A2_Base
	{
	};
	class CUP_arifle_L86A2_Base: Rifle_Base_F
	{
	};
	class CUP_arifle_L86A2: CUP_arifle_L86A2_Base
	{
		AGM_Bipod = 1;
	};
	class CUP_arifle_L85A2_Holo_laser: CUP_arifle_L85A2
	{
	};
	class CUP_arifle_L85A2_GL_Holo_Laser: CUP_arifle_L85A2_GL
	{
	};
	class CUP_arifle_L85A2_SUSAT_Laser: CUP_arifle_L85A2
	{
	};
	class CUP_arifle_L85A2_GL_SUSAT_Laser: CUP_arifle_L85A2_GL
	{
	};
	class CUP_arifle_L85A2_CWS_Laser: CUP_arifle_L85A2
	{
	};
	class CUP_arifle_L85A2_ACOG_Laser: CUP_arifle_L85A2
	{
	};
	class CUP_arifle_L85A2_GL_ACOG_Laser: CUP_arifle_L85A2_GL
	{
	};
	class CUP_arifle_L86A2_ACOG: CUP_arifle_L86A2
	{
	};


	// CUP_Weapons_G36
	class CUP_arifle_G36_Base: Rifle_Base_f
	{
	};
	class CUP_arifle_G36A: CUP_arifle_G36_Base
	{
	};
	class CUP_arifle_G36A_camo: CUP_arifle_G36A
	{
	};
	class CUP_arifle_G36K: CUP_arifle_G36A
	{
	};
	class CUP_arifle_G36K_camo: CUP_arifle_G36K
	{
	};
	class CUP_arifle_G36C: Rifle_Base_f
	{
	};
	class CUP_arifle_G36C_camo: CUP_arifle_G36C
	{
	};
	class CUP_arifle_MG36: CUP_arifle_G36C
	{
		AGM_Bipod = 1;
	};
	class CUP_arifle_MG36_camo: CUP_arifle_MG36
	{
	};
	class CUP_arifle_G36C_holo_snds: CUP_arifle_G36C
	{
	};
	class CUP_arifle_G36C_camo_holo_snds: CUP_arifle_G36C_camo
	{
	};


	// CUP_Weapons_M107
	class CUP_srifle_M107_Base: Rifle_Long_Base_F
	{
	};
	class CUP_srifle_M107_LeupoldVX3: CUP_srifle_M107_Base
	{
		AGM_Bipod = 1;
	};
	class CUP_srifle_M107_ANPAS13c2: CUP_srifle_M107_Base
	{
		AGM_Bipod = 1;
	};


	// CUP_Weapons_UK59
	class CUP_lmg_UK59: Rifle_Long_Base_F
	{
		AGM_Bipod = 1;
	};

};