class CfgPatches {
	class AGM_Comp_HLC {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {hlcweapons_core, hlcweapons_m60e4, hlcweapons_aks, hlcweapons_ar15, hlcweapons_m14};
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
	class B_762x51_Ball;
	class B_556x45_Ball;
	class B_127x99_Ball;
	class B_127x99_Ball_Tracer_Red;
	class B_12Gauge_Pellets;

	class HLC_556NATO_EPR: B_556x45_Ball
	{
	};
	class HLC_556NATO_SOST: B_556x45_Ball
	{
	};
	class HLC_556NATO_SPR: B_556x45_Ball
	{
	};
	class HLC_300Blackout_Ball: B_556x45_Ball
	{
		AGM_BulletMass = 8;      // 7.62x35 300 AAC Blackout OTM 8g
	};
	class HLC_300Blackout_SMK: HLC_300Blackout_Ball
	{
		AGM_BulletMass = 14;      // 7.62x35 300 AAC Blackout OTM 14g
	};
	class HLC_762x39_Ball: HLC_300Blackout_Ball
	{
		AGM_BulletMass = 7.9;      // 7.62x39 57-N-231
	};
	class HLC_762x39_Tracer: HLC_762x39_Ball
	{
	};
	class HLC_762x51_ball: B_762x51_Ball
	{
	};
	class HLC_762x51_BTSub: B_762x51_Ball
	{
		AGM_BulletMass = 10;      // TODO: Check
	};
	class HLC_762x51_tracer: HLC_762x51_ball
	{
	};
	class HLC_762x54_ball: HLC_762x51_ball
	{
		AGM_BulletMass = 11.7;    // 7.62x54 FMJ
	};
	class HLC_762x54_tracer: HLC_762x51_tracer
	{
	};
	class HLC_762x54_AP: HLC_762x54_ball
	{
		AGM_BulletMass = 9.4;    // 7.62x54 7N13 AP
	};
	class HLC_303Brit_B: B_556x45_Ball
	{
		AGM_BulletMass = 10;      // .303 British SP
	};
	class HLC_303Brit_T: HLC_303Brit_B
	{
		AGM_BulletMass = 11;      // .303 British HPBT
	};
	class HLC_303Brit_AP: HLC_303Brit_B
	{
		AGM_BulletMass = 10;      // .303 British SP
	};
	class HLC_792x57_Ball: HLC_303Brit_B
	{
		AGM_BulletMass = 12.8;    // 7.92�57 Mauser RWS ID Classic
	};
	class HLC_792x57_Tracer: HLC_792x57_Ball
	{
	};
	class HLC_792x57_AP: HLC_792x57_Ball
	{
		AGM_BulletMass = 11.7;    // 7.92�57 Mauser RWS DK
	};
	class HLC_542x42_ball: HLC_303Brit_B
	{
		AGM_BulletMass = 10.5;    // 6.5�52 Carcano RN
	};
	class HLC_542x42_Tracer: HLC_303Brit_B
	{
	};
	class FH_545x39_Ball: B_556x45_Ball
	{
		AGM_BulletMass = 3.43;     // 5.45x39 7N6 FMJ
	};
	class FH_545x39_Tracer: FH_545x39_Ball
	{
	};
	class FH_545x39_7u1: FH_545x39_Ball
	{
		AGM_BulletMass = 5.2;      // 5.45x39 7U1 subsonic
	};
	class FH_545x39_EP: FH_545x39_Ball
	{
		AGM_BulletMass = 3.62;     // 5.45x39 7N10 FMJ EP
	};
	class HLC_57x28mm_JHP: FH_545x39_Ball
	{
		AGM_BulletMass = 2;        // FN 5.7�28 SS195LF JHP
	};
	class HLC_57x28mm_FMJ: HLC_57x28mm_JHP
	{
		AGM_BulletMass = 2;        // FN 5.7�28 SS190 AP FMJ
	};
	class HLC_9x19_Ball: B_556x45_Ball
	{
		AGM_BulletMass = 7.45;     // 9�19mm Parabellum
	};
	class HLC_9x19_M882_SMG: B_556x45_Ball
	{
		AGM_BulletMass = 8.04;     // 9x19mm Parabellum M884 FMJ
	};
	class HLC_9x19_GoldDot: HLC_9x19_Ball
	{
		AGM_BulletMass = 8.0;      // 9x19mm Parabellum Gold Dot JHP
	};
	class HLC_9x19_Subsonic: HLC_9x19_Ball
	{
		AGM_BulletMass = 7.45;     // 9�19mm Parabellum
	};
	class HLC_10mm_FMJ: HLC_9x19_Ball
	{
		AGM_BulletMass = 12;       // .40 S&W FMJ
	};
	class HLC_10mm_JHP: HLC_10mm_FMJ
	{
		AGM_BulletMass = 10;       // .40 S&W JHP
	};
	class HLC_45ACP_Ball: B_556x45_Ball
	{
		AGM_BulletMass = 12;      // .45 ACP
	};
	class FH_45ACP_Tracer: HLC_45ACP_Ball
	{
	};
	class HLC_12G_Buck: B_12Gauge_Pellets
	{
		AGM_BulletMass = 4;     // Grams of pellets; TODO: review
	};
	class HLC_12G_Distraction: B_556x45_Ball
	{
		AGM_BulletMass = 4;     // Grams of pellets; TODO: review
	};
	class FH_44Mag: HLC_45ACP_Ball
	{
		AGM_BulletMass = 13;       // .44 Magnum
	};
	class FH_44Mag_JHP: FH_44Mag
	{
		AGM_BulletMass = 13;       // .44 Magnum JHP
	};
	class FH_44Mag_FUNTRACER: FH_44Mag
	{
	};
	class FH_50BMG_SLAP: B_127x99_Ball
	{
		AGM_BulletMass = 42;      // 12.7�99mm NATO (.50 BMG)
	};
	class FH_50BMG_Raufoss: B_127x99_Ball
	{
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
	};


	// hlcweapons_m60e4
	class hlc_M60e4_base: Rifle_Base_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0, 0.0012, 0.0059, 0.029}; //846 MRBS
		AGM_Bipod = 1;
	};
	class hlc_lmg_M60E4: hlc_M60e4_base
	{
	};
	class hlc_lmg_m60: hlc_M60e4_base
	{
	};


	// hlcweapons_aks
	class hlc_ak_base: Rifle_Base_F
	{
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
	};
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
	{
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
	};
	class hlc_rifle_ak12: hlc_rifle_aks74
	{
	};
	class hlc_rifle_aks74u: hlc_rifle_ak74
	{
	};
	class hlc_rifle_ak47: hlc_rifle_ak74
	{
	};
	class hlc_rifle_akm: hlc_rifle_ak47
	{
	};
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		AGM_Bipod = 1;
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
	};
	class hlc_rifle_saiga12k: hlc_rifle_ak47
	{
	};


	// hlcweapons_ar15
	class hlc_ar15_base: Rifle_Base_F
	{
	};
	class hlc_rifle_RU556: hlc_ar15_base
	{
	};
	class hlc_rifle_RU5562: hlc_rifle_RU556
	{
	};
	class hlc_rifle_bcmjack: hlc_ar15_base
	{
	};
	class hlc_rifle_Colt727: hlc_ar15_base
	{
	};
	class hlc_rifle_Colt727_GL: hlc_rifle_Colt727
	{
	};
	class hlc_rifle_Bushmaster300: hlc_rifle_Colt727
	{
	};
	class hlc_rifle_vendimus: hlc_rifle_Bushmaster300
	{
	};
	class hlc_rifle_SAMR: hlc_rifle_RU556
	{
		AGM_Bipod = 1;
	};
	class hlc_rifle_samr2: hlc_rifle_SAMR
	{
	};
	class hlc_rifle_honeybase: hlc_rifle_RU556
	{
	};
	class hlc_rifle_honeybadger: hlc_rifle_honeybase
	{
	};


	// hlcweapons_m14
	class hlc_M14_base: Rifle_Base_F
	{
	};
	class hlc_rifle_M14: hlc_M14_base
	{
	};
	class hlc_rifle_M21: hlc_M14_base
	{
		AGM_Bipod = 1;
	};
	class hlc_rifle_m14dmr: hlc_rifle_M21
	{
		AGM_Bipod = 1;
	};
	class hlc_rifle_m14sopmod: hlc_rifle_M14
	{
	};
};