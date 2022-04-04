class CfgWLRequisitionPresets
{
	class A3ReduxAll
	{
		class WEST
		{
			class Infantry
			{
				class BWA3_Rifleman_Multi					{cost = 20;		requirements[]={};	};	// "Rifleman"
				class BWA3_Rifleman_G27_Multi    			{cost = 20;		requirements[]={};	};	// "Rifleman (G27)"
				class BWA3_recon_LAT_Multi					{cost = 25;		requirements[]={};	};	// "Para Trooper"
				class BWA3_Spotter_Multi					{cost = 30;		requirements[]={};	};	// "Spotter"
				class BWA3_Crew_Multi						{cost = 15;		requirements[]={};	};	// "Crewman"
				class BWA3_Helipilot 						{cost = 10;		requirements[]={};	};	// "Pilot"
				class BWA3_Grenadier_G27_Multi				{cost = 50;		requirements[]={};	};	// "Grenadier (G27)"
				
				class BWA3_Medic_Multi						{cost = 20;		requirements[]={};	};	// "Combat Life Saver"
				class BWA3_Marksman_Multi					{cost = 60;		requirements[]={};	};	// "Marksman"
				class BWA3_Engineer_Multi					{cost = 100;	requirements[]={};	};	// "Engineer"

				class BWA3_MachineGunner_MG3_Multi			{cost = 80;		requirements[]={};	};	// "Machinegunner (MG5)"
				class BWA3_MachineGunner_MG4_Multi          {cost = 80;     requirements[]={};  };  // "Machinegunner (MG4)"
				class BWA3_MachineGunner_MG5_Multi			{cost = 80;		requirements[]={};	};	// "Machinegunner (PzF3)"
				class BWA3_RiflemanAT_PzF3_Multi			{cost = 100;	requirements[]={};	};	// "Rifleman (AT)"
				class BWA3_RiflemanAT_RGW90_Multi			{cost = 100;	requirements[]={};	};	// "Rifleman (RGW90)"
				class BWA3_RiflemanAT_CG_Multi				{cost = 100;	requirements[]={};	};	// "Rifleman (CG)"
				class BWA3_RiflemanAA_Fliegerfaust_Multi    {cost = 150;	requirements[]={};	};	// "Missile Specialist (AA)"
				class BWA3_Rifleman_lite_Multi				{cost = 10;		requirements[]={};	};	// "Rifleman (Light)"
				class BWA3_Sniper_G82_Multi					{cost = 100;	requirements[]={};	};	// "Sniper (G82)"
				class BWA3_TL_Multi		        			{cost = 150;	requirements[]={};	};	// "Team Leader"
				class BWA3_Officer_Multi					{cost = 200;	requirements[]={};	};	// "Officer"
			};
			class Vehicles
			{
				class B_Quadbike_01_F									{cost =  20;	requirements[]={};	};	// "Quad Bike"
				class Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_FJg		{cost = 200;	requirements[]={};	};	// "Dingo 2 (M2 .50cal)"
				class Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_Moerser	{cost = 200;	requirements[]={};	};	// "Dingo 2 (M2 .50cal)"
				class BWA3_Eagle_Fleck									{cost = 300;	requirements[]={};	};	// "Eagle"
				class BWA3_Dingo2_FLW100_MG3_Fleck						{cost = 350;	requirements[]={};	};	// "Dingo 2 (MG3)"
				class BWA3_Dingo2_FLW200_GMW_Fleck						{cost = 350;	requirements[]={};	};	// "Dingo 2 (GMG)"
				class BWA3_Dingo2_FLW200_M2_CG13_Fleck					{cost = 350;	requirements[]={};	};	// "Dingo 2 (M2 .50cal)"
				class rnt_lkw_10t_mil_gl_kat_i_repair_fleck				{cost = 350;	requirements[]={};	};
				class rnt_lkw_7t_mil_gl_kat_i_transport_fleck			{cost = 350;	requirements[]={};	};
				class rnt_lkw_7t_mil_gl_kat_i_mun_fleck					{cost = 350;	requirements[]={};	};
				class rnt_lkw_5t_mil_gl_kat_i_fuel_fleck				{cost = 350;	requirements[]={};	};
				class Redd_Tank_Fuchs_1A4_Jg_Flecktarn					{cost = 350;	requirements[]={};	};
				class Redd_Tank_Fuchs_1A4_Pi_Flecktarn					{cost = 350;	requirements[]={};	};
				class Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn			{cost = 350;	requirements[]={};	};
				class Redd_Tank_Fuchs_1A4_San_Flecktarn					{cost = 350;	requirements[]={};	};
				class BWA3_Multi_Fleck									{cost = 500;	requirements[]={};	};
				class Redd_Tank_Wiesel_1A4_MK20_Flecktarn				{cost = 800;	requirements[]={};	};
				class Redd_Tank_Wiesel_1A2_TOW_Flecktarn				{cost = 800;	requirements[]={};	};
				class Redd_Marder_1A5_Flecktarn							{cost = 1000;	requirements[]={};	};
				class rnt_sppz_2a2_luchs_flecktarn						{cost = 1000;	requirements[]={};	};
				class Redd_Tank_Gepard_1A2_Flecktarn					{cost = 5000;	requirements[]={};	};	// "Gepard 1A2"
				class BWA3_Leopard2_Tropen								{cost = 10500;	requirements[]={};	};	// "Leopard 2A6"
				class BWA3_Puma_Tropen									{cost = 15000;	requirements[]={};	};	// "Puma IFV" 
				class BWA3_Panzerhaubitze2000_Fleck						{cost = 20000;	requirements[]={};	};	// "Panzerhaubitze 2000" 	  
			};
			class Aircraft
			{
				class B_Heli_Light_01_F						{cost = 500;	requirements[]={"H"};	};	// "MH-9 Hummingbird"
				class B_Heli_Light_01_dynamicLoadout_F		{cost = 1500;	requirements[]={"H"};	};	// "AH-9 Pawnee"
				class BWA3_Tiger_RMK_Universal				{cost = 10000;	requirements[]={"H"};	};	// "Eurocopter Tiger RMK, Universal";
				class BWA3_Tiger_RMK_PARS					{cost = 10000;	requirements[]={"H"};	};	// "Eurocopter Tiger RMK, PARS";
				class FIR_F15A								{cost = 10000;	requirements[]={"H"};	};
				class FIR_F15B								{cost = 10000;	requirements[]={"H"};	};
				class FIR_F15C								{cost = 10000;	requirements[]={"H"};	};
				class FIR_F15D								{cost = 10000;	requirements[]={"H"};	};
				class FIR_F15DJ_ARG1						{cost = 10000;	requirements[]={"H"};	};
				class FIR_F15K_1st							{cost = 10000;	requirements[]={"H"};	};
				class FIR_F15SE_Scar						{cost = 10000;	requirements[]={"H"};	};
				class FIR_F16C_RS_526TFS					{cost = 10000;	requirements[]={"H"};	};
				class FIR_F16C_Polish						{cost = 10000;	requirements[]={"H"};	};
				class FIR_F18C_RCAF							{cost = 10000;	requirements[]={"H"};	};
				class Tornado_AWS_camo_ger					{cost = 10000;	requirements[]={"H"};	};
				
			};
			class Naval
			{
				class B_Boat_Transport_01_F					{cost = 100;	requirements[]={"W"};	};	// "Assault Boat"
				class B_Boat_Armed_01_minigun_F				{cost = 750;	requirements[]={"W"};	};	// "Speedboat Minigun"
				class B_SDV_01_F							{cost = 900;	requirements[]={"W"};	};	// "SDV"
			};
			class Gear
			{
				class BWA3_Box_Ammo							{cost = 200;	requirements[]={};	};	// "Basic Ammo [Bundeswehr]"
				class BWA3_Box_Explosives					{cost = 750;	requirements[]={};	};	// "Explosives [BW]"
				class BWA3_Box_Gear_Tropen					{cost = 750;	requirements[]={};	};	// "Gear [BW]"
				class BWA3_Box_Support						{cost = 750;	requirements[]={};	};	// "Support [BW]"
				class BWA3_Box_Weapons						{cost = 750;	requirements[]={};	};	// "Weapons [BW]"
				class BWA3_Box_Launchers					{cost = 750;	requirements[]={};	};	// "Launchers [BW]"
				class BWA3_Box_SpecialWeapons				{cost = 750;	requirements[]={};	};	// "Special Weapons [BW]"
				class BWA3_box_120mm_Mo_Combo				{cost = 500;	requirements[]={};	};	// "Supply Box [NATO]"
				class BWA3_WLP14_Ammo_Fleck					{cost = 500;	requirements[]={};	};	// "WLP 14 T-2 Ammo [Wintertarn]"
				class BWA3_TCK9_Fuel_Winter					{cost = 500;	requirements[]={};	};	// "Fuelcontainer 9m3 [Wintertarn]"
				//class Redd_Box_120mm_Mo_HE_annz				{cost = 500;	requirements[]={};	};
				class Redd_Box_120mm_Mo_Combo				{cost = 500;	requirements[]={};	};

			};
			class Defences
			{
				class B_HMG_01_F							{cost = 300;	requirements[]={};	};	// "Mk30 HMG .50"
				class B_HMG_01_high_F						{cost = 300;	requirements[]={};	};	// "Mk30 HMG .50 (Raised)"
				class rnt_mg3_static_ai						{cost = 300;	requirements[]={};	};
				class rnt_mg3_static						{cost = 300;	requirements[]={};	};
				class rnt_mantis_base						{cost = 500;	requirements[]={};	};
				class rnt_mantis_radar						{cost = 500;	requirements[]={};	};
				class Redd_Milan_Static						{cost = 500;	requirements[]={};	};
				class pook_KS12_base_BLUFOR					{cost = 600;	requirements[]={};	};	// "KS12"
				class pook_NASAMS_battery_BASE				{cost = 8000;	requirements[]={};	offset[]={0, 5.3, 0};};	// "NASAMS-2"
				class pook_ANMPQ64_base						{cost = 5000;	requirements[]={};	offset[]={0, 5.3, 0};};	// "AN/MPQ-105 Radar"
				class BWA3_MRS120_Multi						{cost = 8000;	requirements[]={};	};	// "Mortar 120mm"
				class pook_M777			 					{cost = 8000;	requirements[]={};	};	// "M-777 155mm field howitzer";
			};
		};	
		class EAST
		{
			class Infantry
			{
				class rhs_vmf_recon_rifleman				{cost = 20;	requirements[]={};	};	// "Rifleman"
				class rhs_vmf_recon_rifleman_akms			{cost = 25;	requirements[]={};	};
				//class rhs_vmf_recon_grenadier_scout			{cost = 40;	requirements[]={};	};
				class rhs_vdv_armoredcrew					{cost = 15;	requirements[]={};	};
				class rhs_pilot_combat_heli					{cost = 10;	requirements[]={};	};
				class rhs_pilot 							{cost = 10;	requirements[]={};	};
				class rhs_vmf_recon_grenadier_scout			{cost = 50;	requirements[]={};	};
				class rhs_vmf_recon_efreitor				{cost = 20;	requirements[]={};	};
				class rhs_vmf_recon_rifleman_scout			{cost = 50;	requirements[]={};	};
				class rhs_vmf_recon_rifleman_lat			{cost = 25;	requirements[]={};	};
				class rhs_vmf_recon_arifleman				{cost = 60;	requirements[]={};	};
				class rhs_vmf_recon_marksman_vss			{cost = 70;	requirements[]={};	};
				class rhs_vmf_recon_officer_armored			{cost = 80;	requirements[]={};	};
				class rhs_vdv_aa							{cost = 90;	requirements[]={};	};
				
				class O_R_recon_JTAC_F					{cost = 100;	requirements[]={};	};
				class O_R_recon_medic_F					{cost = 100;	requirements[]={};	};
				class O_R_recon_GL_F					{cost = 100;	requirements[]={};	};
				class O_R_recon_LAT_F					{cost = 100;	requirements[]={};	};
				class O_R_recon_AR_F					{cost = 100;	requirements[]={};	};
				class O_R_recon_exp_F					{cost = 100;	requirements[]={};	};
				class O_R_recon_TL_F					{cost = 100;	requirements[]={};	};

				class O_R_JTAC_F						{cost = 100;	requirements[]={};	};
				class O_R_soldier_M_F					{cost = 100;	requirements[]={};	};
				class O_R_medic_F						{cost = 100;	requirements[]={};	};
				class O_R_soldier_exp_F					{cost = 100;	requirements[]={};	};
				class O_R_Soldier_GL_F					{cost = 100;	requirements[]={};	};
				class O_R_Soldier_LAT_F					{cost = 100;	requirements[]={};	};
				class O_R_Soldier_TL_F					{cost = 100;	requirements[]={};	};
			};
			class Vehicles
			{
				class RHS_UAZ_MSV_01						{cost = 20;	requirements[]={};	};	// "Quad Bike"
				class rhs_tigr_msv							{cost = 100;	requirements[]={};	};	// "Qilin (Unarmed)"
				class rhs_tigr_m_msv						{cost = 300;	requirements[]={};	};	// "Ifrit"
				class RHS_Ural_Open_Flat_MSV_01				{cost = 200;	requirements[]={};	};	// "Tempest Transport"
				class RHS_Ural_Fuel_MSV_01					{cost = 500;	requirements[]={};	};	// "Tempest Fuel"
				class RHS_Ural_Ammo_MSV_01					{cost = 350;	requirements[]={};	};	// "Tempest Medical"
				class RHS_Ural_Repair_MSV_01				{cost = 350;	requirements[]={};	};	// "Qilin (Minigun)"
				class RHS_Ural_Zu23_MSV_01					{cost = 200;	requirements[]={};	};	// "Offroad (HMG)"
				class rhs_btr60_msv							{cost = 700;	requirements[]={};	};	// "Qilin (AT)"
				class rhs_btr70_msv							{cost = 350;	requirements[]={};	};	// "Offroad (AT)"
				class rhs_btr80_msv							{cost = 2000;	requirements[]={};	};	// "Tempest Repair"
				class rhs_btr80a_msv						{cost = 3000;	requirements[]={};	};	// "Tempest Ammo"
				class rhs_bmp1_msv							{cost = 3000;	requirements[]={};	};
				class rhs_prp3_msv							{cost = 1000;	requirements[]={};	};	// "Ifrit HMG"
				class rhs_bmp1d_msv							{cost = 1200;	requirements[]={};	};	// "Ifrit GMG"
				class rhs_bmp1k_msv							{cost = 2000;	requirements[]={};	};	// "MSE-3 Marid"
				class rhs_bmp2e_msv							{cost = 2200;	requirements[]={};	};	// "BTR-K Kamysh"
				class rhs_bmp2_msv							{cost = 2300;	requirements[]={};	};	// "ZSU-39 Tigris"
				class rhs_bmp2d_msv							{cost = 2400;	requirements[]={};	};	// "T-100 Varsuk"
				class rhs_bmp2k_msv							{cost = 3000;	requirements[]={};	};	// "T-140 Angara"
				class rhs_bmp3_msv							{cost = 3200;	requirements[]={};	};	// "T-140K Angara"
				class rhs_bmp3_late_msv						{cost = 3400;	requirements[]={};	};
				class rhs_bmp3m_msv							{cost = 3600;	requirements[]={};	};
				class rhs_bmp3mera_msv						{cost = 3800;	requirements[]={};	};
				class rhs_brm1k_msv							{cost = 2000;	requirements[]={};	};
				class rhs_Ob_681_2							{cost = 3500;	requirements[]={};	};
				
				class rhs_t72ba_tv							{cost = 5000;	requirements[]={};	};
				class rhs_t72bb_tv							{cost = 5200;	requirements[]={};	};
				class rhs_t72bc_tv							{cost = 5400;	requirements[]={};	};
				class rhs_t72bd_tv							{cost = 5600;	requirements[]={};	};
				class rhs_t72be_tv							{cost = 5800;	requirements[]={};	};
				class rhs_t80								{cost = 6000;	requirements[]={};	};
				class rhs_t80a								{cost = 6200;	requirements[]={};	};
				class rhs_t80b								{cost = 6400;	requirements[]={};	};
				class rhs_t80bk								{cost = 6600;	requirements[]={};	};
				class rhs_t80bvk							{cost = 6800;	requirements[]={};	};
				class rhs_t80u								{cost = 7000;	requirements[]={};	};
				class rhs_t80u45m							{cost = 7200;	requirements[]={};	};
				class rhs_t80ue1							{cost = 7400;	requirements[]={};	};
				class rhs_t80uk								{cost = 7600;	requirements[]={};	};
				class rhs_t80um								{cost = 7800;	requirements[]={};	};

				class rhs_t90_tv							{cost = 8000;	requirements[]={};	};
				class rhs_t90a_tv							{cost = 8200;	requirements[]={};	};
				class rhs_t90am_tv							{cost = 8400;	requirements[]={};	};
				class rhs_t90saa_tv							{cost = 8600;	requirements[]={};	};
				class rhs_t90sab_tv							{cost = 8800;	requirements[]={};	};
				class rhs_t90sm_tv							{cost = 10000;	requirements[]={};	};
				class rhs_t14_tv							{cost = 15000;	requirements[]={};	};
				
				class pook_SA19_root						{cost = 4000;	requirements[]={};	};
				class pook_9S36_Root						{cost = 5000;	requirements[]={};	};
				class pook_MAZ7910_base						{cost = 1000;	requirements[]={};	};
				class pook_64N6E_base						{cost = 4000;	requirements[]={};	};
				class pook_PRV16_base						{cost = 4000;	requirements[]={};	};
				class pook_9K37M2_Root						{cost = 5000;	requirements[]={};	};
				class pook_96K6_root						{cost = 5000;	requirements[]={};	};
				class pook_9K331_Root						{cost = 7500;	requirements[]={};	};
				class pook_9K332_Root						{cost = 8500;	requirements[]={};	};

				class pook_MZKT_AMMO_OPFOR					{cost = 1000;	requirements[]={};	};
				class RHS_BM21_VDV_01						{cost = 3500;	requirements[]={};	};
				class pook_K300P_OPFOR						{cost = 4000;	requirements[]={};	};
				class pook_TOS1A_OPFOR						{cost = 5000;	requirements[]={};	};
				class pook_2S1_OPFOR						{cost = 6000;	requirements[]={};	};
				class rhs_2s1_at_tv							{cost = 6000;	requirements[]={};	};
				class rhs_2s3_at_tv							{cost = 7000;	requirements[]={};	};
				class pook_2S34_OPFOR						{cost = 7000;	requirements[]={};	};
				class pook_2S5_OPFOR						{cost = 8000;	requirements[]={};	};
				class pook_4K51_OPFOR						{cost = 8500;	requirements[]={};	};
				class pook_3K60_OPFOR						{cost = 9000;	requirements[]={};	};
				class pook_9K52_OPFOR						{cost = 10000;	requirements[]={};	};
				class pook_9K57_OPFOR						{cost = 12000;	requirements[]={};	};
				class pook_9K57M_OPFOR						{cost = 12500;	requirements[]={};	};
				class pook_9K58_OPFOR						{cost = 12500;	requirements[]={};	};
				class pook_SCUD_OPFOR						{cost = 5000;	requirements[]={};	};
				class pook_9K720_OPFOR						{cost = 15000;	requirements[]={};	};
				class pook_9K720K_OPFOR						{cost = 15500;	requirements[]={};	};
				class pook_A222_OPFOR						{cost = 5000;	requirements[]={};	};

			};
			class Aircraft
			{
				class RHS_Mi8AMT_vdv						{cost = 700;	requirements[]={"H"};	};	// "PO-30 Orca (Unarmed)"
				class RHS_Mi24Vt_vvs						{cost = 1000;	requirements[]={"H"};	};	// "PO-30 Orca (Unarmed)"
				class RHS_Mi24P_vdv							{cost = 3000;	requirements[]={"H"};	};	// "PO-30 Orca"
				class RHS_Mi24V_vdv							{cost = 3000;	requirements[]={"H"};	};	// "Mi-290 Taru"
				class RHS_Mi8MTV3_heavy_vdv					{cost = 3000;	requirements[]={"H"};	};	// "Mi-290 Taru (Transport)"
				class rhs_mi28n_vvs					 		{cost = 5000;	requirements[]={"H"};	};	// "Mi-290 Taru (Medical)"
				class RHS_Ka52_vvsc							{cost = 6000;	requirements[]={"H"};	};	// "Mi-290 Taru (Medical)"
							
				class FIR_Su25SM3_Camo_VVSVer				{cost = 10000;	requirements[]={"A"};	};	// "Y-32 Xi'an (Infantry Transport)"
				class rhs_mig29s_vvs						{cost = 10000;	requirements[]={"A"};	};	// "Y-32 Xi'an (Infantry Transport)"
				class Mig29AWS_SMT_rus						{cost = 10000;	requirements[]={"A"};	};	// "Y-32 Xi'an (Infantry Transport)"
				class rhs_mig29sm_vvsc						{cost = 10000;	requirements[]={"A"};	};	// "Y-32 Xi'an (Infantry Transport)"				
				
			};
			class Naval
			{
				class O_Boat_Transport_01_F					{cost = 100;	requirements[]={"W"};	};	// "Assault Boat"
				class O_Boat_Armed_01_hmg_F					{cost = 750;	requirements[]={"W"};	};	// "Speedboat HMG"
				class O_SDV_01_F							{cost = 900;	requirements[]={"W"};	};	// "SDV"
			};
			class Gear
			{
				class rhs_mags_crate						{cost = 200;	requirements[]={};	};	// "Basic Ammo [CSAT]"
				class rhs_weapon_crate						{cost = 200;	requirements[]={};	};	// "Grenades [CSAT]"
				class rhs_launcher_crate					{cost = 250;	requirements[]={};	};	// "Basic Weapons [CSAT]"
				class rhs_spec_weapons_crate				{cost = 250;	requirements[]={};	};	// "Explosives [CSAT]"
				class rhs_gear_crateq						{cost = 250;	requirements[]={};	};	// "Launchers [CSAT]"
				class Box_East_WpsSpecial_F					{cost = 500;	requirements[]={};	};	// "Special Weapons [CSAT]"

			};
			class Defences
			{
				class rhs_KORD_high_MSV						{cost = 300;	requirements[]={};	};
				class rhs_KORD_MSV							{cost = 300;	requirements[]={};	};
				class rhs_Igla_AA_pod_msv					{cost = 450;	requirements[]={};	};
				class rhs_SPG9M_MSV							{cost = 450;	requirements[]={};	};
				class rhs_Kornet_9M133_2_msv				{cost = 600;	requirements[]={};	};
				class rhs_Metis_9k115_2_msv					{cost = 600;	requirements[]={};	};
				class RHS_ZU23_MSV							{cost = 2000;	requirements[]={};	offset[]={0, 5.3, 0};};
				class pook_KS12_base						{cost = 3000;	requirements[]={};	offset[]={0, 5.3, 0};};
				class pook_KS19_base						{cost = 3500;	requirements[]={};	};
				class pook_PRV13_base						{cost = 3500;	requirements[]={};	offset[]={0, 5.3, 0};};
				class pook_92N6E_Base						{cost = 8500;	requirements[]={};	offset[]={0, 5.3, 0};};
				class pook_SA21_spawnerOPFOR				{cost = 15500;	requirements[]={};	offset[]={53, 53, 53};};
			};
		};
	};
};