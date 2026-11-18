
void FUN_0378b7a0(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined2 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  *(undefined1 *)((long)param_1 + 0x3b) = 0;
  pcVar14 = (char *)((long)param_1 + 0x1c);
  *param_1 = &PTR_LAB_04b46e00;
  param_1[2] = pcVar14;
  *(undefined4 *)(param_1 + 3) = 0x20;
  uVar13 = s_AmbientOutdoorObject_040892fb._8_8_;
  uVar17 = s_AmbientOutdoorObject_040892fb._0_8_;
  if (pcVar14 != "AmbientOutdoorObject") {
    *(undefined4 *)((long)param_1 + 0x2c) = 0x7463656a;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(undefined8 *)((long)param_1 + 0x24) = uVar13;
  }
  puVar11 = PTR_DAT_04bb2028;
  pcVar14 = (char *)((long)param_1 + 0x54);
  *(undefined4 *)(param_1 + 10) = 0x20;
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  param_1[9] = pcVar14;
  param_1[1] = puVar11 + 0x10;
  if (pcVar14 != "AmbientIndoorObject") {
    *(undefined4 *)((long)param_1 + 99) = 0x7463656a;
    uVar13 = s_AmbientIndoorObject_04098a34._8_8_;
    uVar17 = s_AmbientIndoorObject_04098a34._0_8_;
    *(undefined1 *)((long)param_1 + 0x67) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(undefined8 *)((long)param_1 + 0x5c) = uVar13;
  }
  param_1[8] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x8c);
  param_1[0x10] = pcVar14;
  *(undefined4 *)(param_1 + 0x11) = 0x20;
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  uVar17 = s_Fld_Default_04100a4e._0_8_;
  if (pcVar14 != "Fld_Default") {
    *(undefined4 *)((long)param_1 + 0x93) = 0x746c7561;
    *(undefined1 *)((long)param_1 + 0x97) = 0;
    *(undefined8 *)pcVar14 = uVar17;
  }
  pcVar1 = (char *)((long)param_1 + 0xc4);
  pcVar2 = (char *)((long)param_1 + 0x134);
  param_1[0x17] = pcVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x20;
  param_1[0xf] = puVar11 + 0x10;
  *(undefined1 *)((long)param_1 + 0xe3) = 0;
  if (pcVar1 != "Fld_Snow") {
    *(undefined1 *)((long)param_1 + 0xcc) = 0;
    *(undefined8 *)((long)param_1 + 0xc4) = 0x776f6e535f646c46;
  }
  param_1[0x16] = puVar11 + 0x10;
  pcVar3 = (char *)((long)param_1 + 0xfc);
  param_1[0x1e] = pcVar3;
  *(undefined4 *)(param_1 + 0x1f) = 0x20;
  *(undefined1 *)((long)param_1 + 0x11b) = 0;
  if (pcVar3 != "Idr_Default") {
    *(undefined4 *)((long)param_1 + 0x103) = 0x746c7561;
    uVar17 = s_Idr_Default_04083a04._0_8_;
    *(undefined1 *)((long)param_1 + 0x107) = 0;
    *(undefined8 *)pcVar3 = uVar17;
  }
  param_1[0x25] = pcVar2;
  param_1[0x1d] = puVar11 + 0x10;
  *(undefined4 *)(param_1 + 0x26) = 0x20;
  *(undefined1 *)((long)param_1 + 0x153) = 0;
  if (pcVar2 != "Idr_Tent") {
    *(undefined1 *)((long)param_1 + 0x13c) = 0;
    builtin_strncpy(pcVar2,"Idr_Tent",8);
  }
  pcVar4 = (char *)((long)param_1 + 0x16c);
  param_1[0x24] = puVar11 + 0x10;
  param_1[0x2c] = pcVar4;
  *(undefined4 *)(param_1 + 0x2d) = 0x20;
  *(undefined1 *)((long)param_1 + 0x18b) = 0;
  uVar13 = s_Idr_Strc_Default_0407e319._8_8_;
  uVar17 = s_Idr_Strc_Default_0407e319._0_8_;
  if (pcVar4 != "Idr_Strc_Default") {
    *(undefined1 *)((long)param_1 + 0x17c) = 0;
    *(undefined8 *)pcVar4 = uVar17;
    *(undefined8 *)((long)param_1 + 0x174) = uVar13;
  }
  pcVar5 = (char *)((long)param_1 + 0x1a4);
  param_1[0x2b] = puVar11 + 0x10;
  param_1[0x33] = pcVar5;
  *(undefined4 *)(param_1 + 0x34) = 0x20;
  *(undefined1 *)((long)param_1 + 0x1c3) = 0;
  uVar13 = s_Idr_Strc_Airport_040698a6._8_8_;
  uVar17 = s_Idr_Strc_Airport_040698a6._0_8_;
  if (pcVar5 != "Idr_Strc_Airport") {
    *(undefined1 *)((long)param_1 + 0x1b4) = 0;
    *(undefined8 *)pcVar5 = uVar17;
    *(undefined8 *)((long)param_1 + 0x1ac) = uVar13;
  }
  pcVar6 = (char *)((long)param_1 + 0x1dc);
  param_1[0x32] = puVar11 + 0x10;
  param_1[0x3a] = pcVar6;
  *(undefined4 *)(param_1 + 0x3b) = 0x20;
  *(undefined1 *)((long)param_1 + 0x1fb) = 0;
  uVar13 = s_Idr_Strc_AirportDeparture_040b7d06._8_8_;
  uVar17 = s_Idr_Strc_AirportDeparture_040b7d06._0_8_;
  if (pcVar6 != "Idr_Strc_AirportDeparture") {
    *(undefined1 *)((long)param_1 + 500) = 0x65;
    uVar12 = s_Idr_Strc_AirportDeparture_040b7d06._16_8_;
    *(undefined1 *)((long)param_1 + 0x1f5) = 0;
    *(undefined8 *)((long)param_1 + 0x1ec) = uVar12;
    *(undefined8 *)pcVar6 = uVar17;
    *(undefined8 *)((long)param_1 + 0x1e4) = uVar13;
  }
  pcVar7 = (char *)((long)param_1 + 0x214);
  param_1[0x39] = puVar11 + 0x10;
  param_1[0x41] = pcVar7;
  *(undefined4 *)(param_1 + 0x42) = 0x20;
  *(undefined1 *)((long)param_1 + 0x233) = 0;
  uVar17 = s_Idr_Strc_Museum_Large_040c7138._0_8_;
  if (pcVar7 != "Idr_Strc_Museum_Large") {
    uVar13 = CONCAT35(s_Idr_Strc_Museum_Large_040c7138._13_3_,s_Idr_Strc_Museum_Large_040c7138._8_5_
                     );
    *(undefined1 *)((long)param_1 + 0x229) = 0;
    *(undefined8 *)pcVar7 = uVar17;
    *(undefined8 *)((long)param_1 + 0x21c) = uVar13;
    *(ulong *)((long)param_1 + 0x221) =
         CONCAT53(s_Idr_Strc_Museum_Large_040c7138._16_5_,s_Idr_Strc_Museum_Large_040c7138._13_3_);
  }
  param_1[0x40] = puVar11 + 0x10;
  pcVar7 = (char *)((long)param_1 + 0x24c);
  param_1[0x48] = pcVar7;
  *(undefined4 *)(param_1 + 0x49) = 0x20;
  *(undefined1 *)((long)param_1 + 0x26b) = 0;
  uVar17 = s_Idr_Strc_Museum_Small_040f13b9._0_8_;
  if (pcVar7 != "Idr_Strc_Museum_Small") {
    uVar13 = CONCAT35(s_Idr_Strc_Museum_Small_040f13b9._13_3_,s_Idr_Strc_Museum_Small_040f13b9._8_5_
                     );
    *(undefined1 *)((long)param_1 + 0x261) = 0;
    uVar12 = CONCAT53(s_Idr_Strc_Museum_Small_040f13b9._16_5_,
                      s_Idr_Strc_Museum_Small_040f13b9._13_3_);
    *(undefined8 *)pcVar7 = uVar17;
    *(undefined8 *)((long)param_1 + 0x254) = uVar13;
    *(undefined8 *)((long)param_1 + 0x259) = uVar12;
  }
  pcVar8 = (char *)((long)param_1 + 0x284);
  param_1[0x47] = puVar11 + 0x10;
  param_1[0x4f] = pcVar8;
  *(undefined4 *)(param_1 + 0x50) = 0x20;
  *(undefined1 *)((long)param_1 + 0x2a3) = 0;
  uVar13 = s_Idr_Strc_Museum_OpenHalf_040c714e._8_8_;
  uVar17 = s_Idr_Strc_Museum_OpenHalf_040c714e._0_8_;
  if (pcVar8 != "Idr_Strc_Museum_OpenHalf") {
    *(undefined1 *)((long)param_1 + 0x29c) = 0;
    *(undefined8 *)pcVar8 = uVar17;
    *(undefined8 *)((long)param_1 + 0x28c) = uVar13;
    *(undefined8 *)((long)param_1 + 0x294) = s_Idr_Strc_Museum_OpenHalf_040c714e._16_8_;
  }
  param_1[0x4e] = puVar11 + 0x10;
  pcVar15 = (char *)((long)param_1 + 700);
  param_1[0x56] = pcVar15;
  *(undefined4 *)(param_1 + 0x57) = 0x20;
  *(undefined1 *)((long)param_1 + 0x2db) = 0;
  if (pcVar15 != "Idr_TotakekeDream") {
    *(undefined1 *)((long)param_1 + 0x2cd) = 0;
    *(undefined1 *)((long)param_1 + 0x2cc) = 0x6d;
    uVar17 = s_Idr_TotakekeDream_04098a48._8_8_;
    *(undefined8 *)pcVar15 = s_Idr_TotakekeDream_04098a48._0_8_;
    *(undefined8 *)((long)param_1 + 0x2c4) = uVar17;
  }
  pcVar15 = (char *)((long)param_1 + 0x2f4);
  param_1[0x55] = puVar11 + 0x10;
  param_1[0x5d] = pcVar15;
  *(undefined4 *)(param_1 + 0x5e) = 0x20;
  *(undefined1 *)((long)param_1 + 0x313) = 0;
  if (pcVar15 != "Idr_AmiiboPhone") {
    uVar17 = CONCAT17(s_Idr_AmiiboPhone_04089310[7],s_Idr_AmiiboPhone_04089310._0_7_);
    *(undefined1 *)((long)param_1 + 0x303) = 0;
    *(undefined8 *)pcVar15 = uVar17;
    *(ulong *)((long)param_1 + 0x2fb) =
         CONCAT71(s_Idr_AmiiboPhone_04089310._8_7_,s_Idr_AmiiboPhone_04089310[7]);
  }
  param_1[0x5c] = puVar11 + 0x10;
  pcVar15 = (char *)((long)param_1 + 0x32c);
  param_1[100] = pcVar15;
  *(undefined4 *)(param_1 + 0x65) = 0x20;
  *(undefined1 *)((long)param_1 + 0x34b) = 0;
  uVar13 = s_Idr_CharacterOrder_040b7d20._8_8_;
  uVar17 = s_Idr_CharacterOrder_040b7d20._0_8_;
  if (pcVar15 != "Idr_CharacterOrder") {
    *(undefined2 *)((long)param_1 + 0x33c) = 0x7265;
    *(undefined1 *)((long)param_1 + 0x33e) = 0;
    *(undefined8 *)pcVar15 = uVar17;
    *(undefined8 *)((long)param_1 + 0x334) = uVar13;
  }
  pcVar15 = (char *)((long)param_1 + 0x364);
  param_1[99] = puVar11 + 0x10;
  param_1[0x6b] = pcVar15;
  *(undefined4 *)(param_1 + 0x6c) = 0x20;
  *(undefined1 *)((long)param_1 + 899) = 0;
  if (pcVar15 != "Ymm_Fld_Default") {
    uVar17 = CONCAT17(s_Ymm_Fld_Default_040d164a[7],s_Ymm_Fld_Default_040d164a._0_7_);
    *(undefined1 *)((long)param_1 + 0x373) = 0;
    *(undefined8 *)pcVar15 = uVar17;
    *(ulong *)((long)param_1 + 0x36b) =
         CONCAT71(s_Ymm_Fld_Default_040d164a._8_7_,s_Ymm_Fld_Default_040d164a[7]);
  }
  param_1[0x6a] = puVar11 + 0x10;
  pcVar15 = (char *)((long)param_1 + 0x39c);
  param_1[0x72] = pcVar15;
  *(undefined4 *)(param_1 + 0x73) = 0x20;
  *(undefined1 *)((long)param_1 + 0x3bb) = 0;
  uVar13 = s_OnlineIsland_Fld_Default_04083a10._8_8_;
  uVar17 = s_OnlineIsland_Fld_Default_04083a10._0_8_;
  if (pcVar15 != "OnlineIsland_Fld_Default") {
    *(undefined1 *)((long)param_1 + 0x3b4) = 0;
    uVar12 = s_OnlineIsland_Fld_Default_04083a10._16_8_;
    *(undefined8 *)pcVar15 = uVar17;
    *(undefined8 *)((long)param_1 + 0x3a4) = uVar13;
    *(undefined8 *)((long)param_1 + 0x3ac) = uVar12;
  }
  pcVar15 = (char *)((long)param_1 + 0x3d4);
  param_1[0x71] = puVar11 + 0x10;
  param_1[0x79] = pcVar15;
  *(undefined4 *)(param_1 + 0x7a) = 0x20;
  *(undefined1 *)((long)param_1 + 0x3f3) = 0;
  uVar17 = s_OnlineIsland_Fld_Snow_040a826c._0_8_;
  if (pcVar15 != "OnlineIsland_Fld_Snow") {
    uVar13 = CONCAT35(s_OnlineIsland_Fld_Snow_040a826c._13_3_,s_OnlineIsland_Fld_Snow_040a826c._8_5_
                     );
    *(undefined1 *)((long)param_1 + 0x3e9) = 0;
    *(undefined8 *)pcVar15 = uVar17;
    *(undefined8 *)((long)param_1 + 0x3dc) = uVar13;
    *(ulong *)((long)param_1 + 0x3e1) =
         CONCAT53(s_OnlineIsland_Fld_Snow_040a826c._16_5_,s_OnlineIsland_Fld_Snow_040a826c._13_3_);
  }
  param_1[0x78] = puVar11 + 0x10;
  param_1[0x81] = "Unknown";
  pcVar15 = (char *)((long)param_1 + 0x424);
  *(undefined2 *)(param_1 + 0x7f) = 0;
  puVar10 = PTR_DAT_04bb2020;
  param_1[0x83] = pcVar15;
  *(undefined4 *)(param_1 + 0x84) = 0x20;
  *(undefined1 *)((long)param_1 + 0x443) = 0;
  param_1[0x80] = puVar10 + 0x10;
  if (pcVar15 != "Unknown") {
    *(undefined1 *)((long)param_1 + 0x42b) = 0;
    *(undefined4 *)((long)param_1 + 0x427) = 0x6e776f6e;
    builtin_strncpy(pcVar15,"Unkn",4);
  }
  param_1[0x8a] = puVar10 + 0x10;
  puVar16 = (undefined2 *)((long)param_1 + 0x474);
  param_1[0x8b] = pcVar14;
  *(undefined4 *)(param_1 + 0x8e) = 0x20;
  param_1[0x82] = puVar11 + 0x10;
  *(undefined2 *)(param_1 + 0x89) = 0x1f;
  param_1[0x8d] = puVar16;
  *(undefined1 *)((long)param_1 + 0x493) = 0;
  if (puVar16 != (undefined2 *)&DAT_040698b7) {
    *(undefined1 *)((long)param_1 + 0x476) = 0x76;
    *puVar16 = 0x6e45;
    *(undefined1 *)((long)param_1 + 0x477) = 0;
  }
  param_1[0x95] = pcVar1;
  puVar16 = (undefined2 *)((long)param_1 + 0x4c4);
  param_1[0x8c] = puVar11 + 0x10;
  *(undefined2 *)(param_1 + 0x93) = 0x1f;
  param_1[0x94] = puVar10 + 0x10;
  param_1[0x97] = puVar16;
  *(undefined4 *)(param_1 + 0x98) = 0x20;
  *(undefined1 *)((long)param_1 + 0x4e3) = 0;
  if (puVar16 != (undefined2 *)&DAT_040698b7) {
    *(undefined1 *)((long)param_1 + 0x4c6) = 0x76;
    *puVar16 = 0x6e45;
    *(undefined1 *)((long)param_1 + 0x4c7) = 0;
  }
  *(undefined4 *)(param_1 + 0xa2) = 0x20;
  pcVar14 = (char *)((long)param_1 + 0x514);
  *(undefined2 *)(param_1 + 0x9d) = 0x100;
  param_1[0x9e] = puVar10 + 0x10;
  param_1[0x96] = puVar11 + 0x10;
  param_1[0x9f] = pcVar4;
  param_1[0xa1] = pcVar14;
  *(undefined1 *)((long)param_1 + 0x533) = 0;
  uVar17 = s_Env_Indoor_040f13cf._0_8_;
  if (pcVar14 != "Env_Indoor") {
    *(undefined2 *)((long)param_1 + 0x51c) = 0x726f;
    *(undefined1 *)((long)param_1 + 0x51e) = 0;
    *(undefined8 *)pcVar14 = uVar17;
  }
  param_1[0xa0] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x564);
  *(undefined2 *)(param_1 + 0xa7) = 7;
  param_1[0xa9] = pcVar2;
  param_1[0xa8] = puVar10 + 0x10;
  param_1[0xab] = pcVar14;
  *(undefined4 *)(param_1 + 0xac) = 0x20;
  *(undefined1 *)((long)param_1 + 0x583) = 0;
  if (pcVar14 != "Env_IndoorHouseTent") {
    *(undefined1 *)((long)param_1 + 0x577) = 0;
    *(undefined4 *)((long)param_1 + 0x573) = 0x746e6554;
    uVar17 = s_Env_IndoorHouseTent_040a2eda._8_8_;
    *(undefined8 *)pcVar14 = s_Env_IndoorHouseTent_040a2eda._0_8_;
    *(undefined8 *)((long)param_1 + 0x56c) = uVar17;
  }
  param_1[0xb2] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x5b4);
  *(undefined2 *)(param_1 + 0xb1) = 0x11b;
  param_1[0xb3] = pcVar3;
  param_1[0xaa] = puVar11 + 0x10;
  param_1[0xb5] = pcVar14;
  *(undefined4 *)(param_1 + 0xb6) = 0x20;
  *(undefined1 *)((long)param_1 + 0x5d3) = 0;
  uVar17 = s_Env_IndoorHouseNormal_040c7167._0_8_;
  if (pcVar14 != "Env_IndoorHouseNormal") {
    uVar13 = CONCAT35(s_Env_IndoorHouseNormal_040c7167._13_3_,s_Env_IndoorHouseNormal_040c7167._8_5_
                     );
    *(undefined1 *)((long)param_1 + 0x5c9) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(undefined8 *)((long)param_1 + 0x5bc) = uVar13;
    *(ulong *)((long)param_1 + 0x5c1) =
         CONCAT53(s_Env_IndoorHouseNormal_040c7167._16_5_,s_Env_IndoorHouseNormal_040c7167._13_3_);
  }
  param_1[0xb4] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x604);
  *(undefined2 *)(param_1 + 0xbb) = 0x101;
  param_1[0xbc] = puVar10 + 0x10;
  param_1[0xbd] = pcVar3;
  param_1[0xbf] = pcVar14;
  *(undefined4 *)(param_1 + 0xc0) = 0x20;
  *(undefined1 *)((long)param_1 + 0x623) = 0;
  uVar17 = s_Env_IndoorHouseNormal_040c7167._0_8_;
  if (pcVar14 != "Env_IndoorHouseNormal") {
    uVar13 = CONCAT35(s_Env_IndoorHouseNormal_040c7167._13_3_,s_Env_IndoorHouseNormal_040c7167._8_5_
                     );
    *(undefined1 *)((long)param_1 + 0x619) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(undefined8 *)((long)param_1 + 0x60c) = uVar13;
    *(ulong *)((long)param_1 + 0x611) =
         CONCAT53(s_Env_IndoorHouseNormal_040c7167._16_5_,s_Env_IndoorHouseNormal_040c7167._13_3_);
  }
  param_1[0xc6] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x654);
  *(undefined2 *)(param_1 + 0xc5) = 0x100;
  param_1[0xbe] = puVar11 + 0x10;
  param_1[199] = pcVar3;
  param_1[0xc9] = pcVar14;
  *(undefined4 *)(param_1 + 0xca) = 0x20;
  *(undefined1 *)((long)param_1 + 0x673) = 0;
  uVar17 = s_Env_IndoorHouseNormal_040c7167._0_8_;
  if (pcVar14 != "Env_IndoorHouseNormal") {
    uVar13 = CONCAT35(s_Env_IndoorHouseNormal_040c7167._13_3_,s_Env_IndoorHouseNormal_040c7167._8_5_
                     );
    *(undefined1 *)((long)param_1 + 0x669) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(undefined8 *)((long)param_1 + 0x65c) = uVar13;
    *(ulong *)((long)param_1 + 0x661) =
         CONCAT53(s_Env_IndoorHouseNormal_040c7167._16_5_,s_Env_IndoorHouseNormal_040c7167._13_3_);
  }
  param_1[200] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x6a4);
  *(undefined2 *)(param_1 + 0xcf) = 7;
  param_1[0xd1] = pcVar2;
  param_1[0xd0] = puVar10 + 0x10;
  param_1[0xd3] = pcVar14;
  *(undefined4 *)(param_1 + 0xd4) = 0x20;
  *(undefined1 *)((long)param_1 + 0x6c3) = 0;
  if (pcVar14 != "Env_OfficeTent") {
    uVar17 = CONCAT26(s_Env_OfficeTent_04098a5a._6_2_,s_Env_OfficeTent_04098a5a._0_6_);
    *(undefined1 *)((long)param_1 + 0x6b2) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(ulong *)((long)param_1 + 0x6aa) =
         CONCAT62(s_Env_OfficeTent_04098a5a._8_6_,s_Env_OfficeTent_04098a5a._6_2_);
  }
  param_1[0xda] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x6f4);
  *(undefined2 *)(param_1 + 0xd9) = 0x105;
  param_1[0xdb] = pcVar4;
  param_1[0xd2] = puVar11 + 0x10;
  param_1[0xdd] = pcVar14;
  *(undefined4 *)(param_1 + 0xde) = 0x20;
  *(undefined1 *)((long)param_1 + 0x713) = 0;
  uVar13 = s_Env_OfficeNormal_040c717d._8_8_;
  uVar17 = s_Env_OfficeNormal_040c717d._0_8_;
  if (pcVar14 != "Env_OfficeNormal") {
    *(undefined1 *)((long)param_1 + 0x704) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(undefined8 *)((long)param_1 + 0x6fc) = uVar13;
  }
  param_1[0xdc] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x744);
  *(undefined2 *)(param_1 + 0xe3) = 0x11f;
  param_1[0xe5] = pcVar4;
  param_1[0xe4] = puVar10 + 0x10;
  param_1[0xe7] = pcVar14;
  *(undefined4 *)(param_1 + 0xe8) = 0x20;
  *(undefined1 *)((long)param_1 + 0x763) = 0;
  uVar13 = s_Env_OfficeNormalAnnounce_040b7d33._8_8_;
  uVar17 = s_Env_OfficeNormalAnnounce_040b7d33._0_8_;
  if (pcVar14 != "Env_OfficeNormalAnnounce") {
    *(undefined1 *)((long)param_1 + 0x75c) = 0;
    uVar12 = s_Env_OfficeNormalAnnounce_040b7d33._16_8_;
    *(undefined8 *)pcVar14 = uVar17;
    *(undefined8 *)((long)param_1 + 0x74c) = uVar13;
    *(undefined8 *)((long)param_1 + 0x754) = uVar12;
  }
  param_1[0xee] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x794);
  *(undefined2 *)(param_1 + 0xed) = 0x107;
  param_1[0xef] = pcVar4;
  param_1[0xe6] = puVar11 + 0x10;
  param_1[0xf1] = pcVar14;
  *(undefined4 *)(param_1 + 0xf2) = 0x20;
  *(undefined1 *)((long)param_1 + 0x7b3) = 0;
  if (pcVar14 != "Env_Marker1") {
    *(undefined1 *)((long)param_1 + 0x79f) = 0;
    *(undefined4 *)((long)param_1 + 0x79b) = 0x3172656b;
    *(undefined8 *)pcVar14 = s_Env_Marker1_0409e038._0_8_;
  }
  param_1[0xf0] = puVar11 + 0x10;
  param_1[0xf8] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x7e4);
  *(undefined2 *)(param_1 + 0xf7) = 0x101;
  param_1[0xf9] = pcVar4;
  param_1[0xfb] = pcVar14;
  *(undefined4 *)(param_1 + 0xfc) = 0x20;
  *(undefined1 *)((long)param_1 + 0x803) = 0;
  uVar17 = s_Env_Marker2_0407e32a._0_8_;
  if (pcVar14 != "Env_Marker2") {
    *(undefined4 *)((long)param_1 + 0x7eb) = 0x3272656b;
    *(undefined1 *)((long)param_1 + 0x7ef) = 0;
    *(undefined8 *)pcVar14 = uVar17;
  }
  param_1[0x102] = puVar10 + 0x10;
  param_1[0xfa] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x834);
  *(undefined2 *)(param_1 + 0x101) = 0x101;
  param_1[0x103] = pcVar4;
  param_1[0x105] = pcVar14;
  *(undefined4 *)(param_1 + 0x106) = 0x20;
  *(undefined1 *)((long)param_1 + 0x853) = 0;
  if (pcVar14 != "Env_Tailor") {
    *(undefined2 *)((long)param_1 + 0x83c) = 0x726f;
    uVar17 = s_Env_Tailor_040ad535._0_8_;
    *(undefined1 *)((long)param_1 + 0x83e) = 0;
    *(undefined8 *)pcVar14 = uVar17;
  }
  pcVar14 = (char *)((long)param_1 + 0x884);
  *(undefined2 *)(param_1 + 0x10b) = 0x105;
  param_1[0x10d] = pcVar5;
  param_1[0x104] = puVar11 + 0x10;
  param_1[0x10c] = puVar10 + 0x10;
  param_1[0x10f] = pcVar14;
  *(undefined4 *)(param_1 + 0x110) = 0x20;
  *(undefined1 *)((long)param_1 + 0x8a3) = 0;
  uVar17 = s_Env_Airport_04093d4d._0_8_;
  if (pcVar14 != "Env_Airport") {
    *(undefined4 *)((long)param_1 + 0x88b) = 0x74726f70;
    *(undefined1 *)((long)param_1 + 0x88f) = 0;
    *(undefined8 *)pcVar14 = uVar17;
  }
  param_1[0x117] = pcVar6;
  pcVar14 = (char *)((long)param_1 + 0x8d4);
  *(undefined2 *)(param_1 + 0x115) = 0x100;
  param_1[0x116] = puVar10 + 0x10;
  param_1[0x10e] = puVar11 + 0x10;
  param_1[0x119] = pcVar14;
  *(undefined4 *)(param_1 + 0x11a) = 0x20;
  *(undefined1 *)((long)param_1 + 0x8f3) = 0;
  if (pcVar14 != "Env_TourCounterDemo") {
    *(undefined1 *)((long)param_1 + 0x8e7) = 0;
    *(undefined4 *)((long)param_1 + 0x8e3) = 0x6f6d6544;
    uVar17 = s_Env_TourCounterDemo_040c20fe._8_8_;
    *(undefined8 *)pcVar14 = s_Env_TourCounterDemo_040c20fe._0_8_;
    *(undefined8 *)((long)param_1 + 0x8dc) = uVar17;
  }
  param_1[0x121] = pcVar4;
  param_1[0x118] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x924);
  *(undefined2 *)(param_1 + 0x11f) = 0x107;
  param_1[0x120] = puVar10 + 0x10;
  param_1[0x123] = pcVar14;
  *(undefined4 *)(param_1 + 0x124) = 0x20;
  *(undefined1 *)((long)param_1 + 0x943) = 0;
  if (pcVar14 != "Env_TsunekichiBoat") {
    *(undefined1 *)((long)param_1 + 0x936) = 0;
    *(undefined2 *)((long)param_1 + 0x934) = 0x7461;
    uVar17 = s_Env_TsunekichiBoat_04093d59._8_8_;
    *(undefined8 *)pcVar14 = s_Env_TsunekichiBoat_04093d59._0_8_;
    *(undefined8 *)((long)param_1 + 0x92c) = uVar17;
  }
  param_1[0x12a] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x974);
  *(undefined2 *)(param_1 + 0x129) = 0x100;
  uVar17 = param_1[0x1e];
  param_1[0x122] = puVar11 + 0x10;
  param_1[0x12d] = pcVar14;
  *(undefined4 *)(param_1 + 0x12e) = 0x20;
  *(undefined1 *)((long)param_1 + 0x993) = 0;
  param_1[299] = uVar17;
  if (pcVar14 != "Env_PhotoStudio") {
    uVar13 = CONCAT17(s_Env_PhotoStudio_0408e7b6[7],s_Env_PhotoStudio_0408e7b6._0_7_);
    *(undefined1 *)((long)param_1 + 0x983) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(ulong *)((long)param_1 + 0x97b) =
         CONCAT71(s_Env_PhotoStudio_0408e7b6._8_7_,s_Env_PhotoStudio_0408e7b6[7]);
  }
  pcVar14 = (char *)((long)param_1 + 0x9c4);
  *(undefined2 *)(param_1 + 0x133) = 7;
  param_1[300] = puVar11 + 0x10;
  param_1[0x134] = puVar10 + 0x10;
  param_1[0x137] = pcVar14;
  param_1[0x135] = param_1[0x25];
  *(undefined4 *)(param_1 + 0x138) = 0x20;
  *(undefined1 *)((long)param_1 + 0x9e3) = 0;
  if (pcVar14 != "Env_MuseumTent") {
    uVar13 = CONCAT26(s_Env_MuseumTent_04098a69._6_2_,s_Env_MuseumTent_04098a69._0_6_);
    *(undefined1 *)((long)param_1 + 0x9d2) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(ulong *)((long)param_1 + 0x9ca) =
         CONCAT62(s_Env_MuseumTent_04098a69._8_6_,s_Env_MuseumTent_04098a69._6_2_);
  }
  param_1[0x13f] = pcVar7;
  param_1[0x136] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xa14);
  *(undefined2 *)(param_1 + 0x13d) = 0x105;
  param_1[0x13e] = puVar10 + 0x10;
  param_1[0x141] = pcVar14;
  *(undefined4 *)(param_1 + 0x142) = 0x20;
  *(undefined1 *)((long)param_1 + 0xa33) = 0;
  if (pcVar14 != "Env_MuseumEntrance") {
    *(undefined1 *)((long)param_1 + 0xa26) = 0;
    *(undefined2 *)((long)param_1 + 0xa24) = 0x6563;
    uVar13 = s_Env_MuseumEntrance_0407e336._8_8_;
    *(undefined8 *)pcVar14 = s_Env_MuseumEntrance_0407e336._0_8_;
    *(undefined8 *)((long)param_1 + 0xa1c) = uVar13;
  }
  pcVar14 = (char *)((long)param_1 + 0xa64);
  *(undefined2 *)(param_1 + 0x147) = 0;
  param_1[0x140] = puVar11 + 0x10;
  param_1[0x148] = puVar10 + 0x10;
  param_1[0x149] = pcVar8;
  param_1[0x14b] = pcVar14;
  *(undefined4 *)(param_1 + 0x14c) = 0x20;
  *(undefined1 *)((long)param_1 + 0xa83) = 0;
  if (pcVar14 != "Env_MuseumInsect0") {
    *(undefined1 *)((long)param_1 + 0xa75) = 0;
    *(undefined1 *)((long)param_1 + 0xa74) = 0x30;
    uVar13 = s_Env_MuseumInsect0_040e136d._8_8_;
    *(undefined8 *)pcVar14 = s_Env_MuseumInsect0_040e136d._0_8_;
    *(undefined8 *)((long)param_1 + 0xa6c) = uVar13;
  }
  param_1[0x153] = pcVar8;
  param_1[0x152] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xab4);
  *(undefined2 *)(param_1 + 0x151) = 0;
  *(undefined4 *)(param_1 + 0x156) = 0x20;
  param_1[0x14a] = puVar11 + 0x10;
  param_1[0x155] = pcVar14;
  *(undefined1 *)((long)param_1 + 0xad3) = 0;
  uVar12 = s_Env_MuseumInsect1_0407e349._8_8_;
  uVar13 = s_Env_MuseumInsect1_0407e349._0_8_;
  if (pcVar14 != "Env_MuseumInsect1") {
    *(undefined1 *)((long)param_1 + 0xac4) = 0x31;
    *(undefined1 *)((long)param_1 + 0xac5) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0xabc) = uVar12;
  }
  uVar18 = param_1[0x2c];
  param_1[0x154] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xb04);
  *(undefined2 *)(param_1 + 0x15b) = 0x100;
  param_1[0x15c] = puVar10 + 0x10;
  param_1[0x15f] = pcVar14;
  param_1[0x15d] = uVar18;
  *(undefined4 *)(param_1 + 0x160) = 0x20;
  *(undefined1 *)((long)param_1 + 0xb23) = 0;
  uVar12 = s_Env_MuseumInsect2_040c2112._8_8_;
  uVar13 = s_Env_MuseumInsect2_040c2112._0_8_;
  if (pcVar14 != "Env_MuseumInsect2") {
    *(undefined1 *)((long)param_1 + 0xb14) = 0x32;
    *(undefined1 *)((long)param_1 + 0xb15) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0xb0c) = uVar12;
  }
  param_1[0x166] = puVar10 + 0x10;
  uVar13 = param_1[0x41];
  pcVar14 = (char *)((long)param_1 + 0xb54);
  *(undefined2 *)(param_1 + 0x165) = 0x100;
  param_1[0x15e] = puVar11 + 0x10;
  param_1[0x169] = pcVar14;
  param_1[0x167] = uVar13;
  *(undefined4 *)(param_1 + 0x16a) = 0x20;
  *(undefined1 *)((long)param_1 + 0xb73) = 0;
  if (pcVar14 != "Env_MuseumFish0") {
    uVar12 = CONCAT17(s_Env_MuseumFish0_04093d6c[7],s_Env_MuseumFish0_04093d6c._0_7_);
    *(undefined1 *)((long)param_1 + 0xb63) = 0;
    *(undefined8 *)pcVar14 = uVar12;
    *(ulong *)((long)param_1 + 0xb5b) =
         CONCAT71(s_Env_MuseumFish0_04093d6c._8_7_,s_Env_MuseumFish0_04093d6c[7]);
  }
  param_1[0x168] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xba4);
  *(undefined2 *)(param_1 + 0x16f) = 0x100;
  param_1[0x171] = uVar13;
  param_1[0x170] = puVar10 + 0x10;
  param_1[0x173] = pcVar14;
  *(undefined4 *)(param_1 + 0x174) = 0x20;
  *(undefined1 *)((long)param_1 + 0xbc3) = 0;
  if (pcVar14 != "Env_MuseumFish1") {
    uVar12 = CONCAT17(s_Env_MuseumFish1_0406421b[7],s_Env_MuseumFish1_0406421b._0_7_);
    *(undefined1 *)((long)param_1 + 0xbb3) = 0;
    *(undefined8 *)pcVar14 = uVar12;
    *(ulong *)((long)param_1 + 0xbab) =
         CONCAT71(s_Env_MuseumFish1_0406421b._8_7_,s_Env_MuseumFish1_0406421b[7]);
  }
  param_1[0x17a] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xbf4);
  *(undefined2 *)(param_1 + 0x179) = 0x100;
  param_1[0x172] = puVar11 + 0x10;
  param_1[0x17b] = uVar18;
  param_1[0x17d] = pcVar14;
  *(undefined4 *)(param_1 + 0x17e) = 0x20;
  *(undefined1 *)((long)param_1 + 0xc13) = 0;
  if (pcVar14 != "Env_MuseumFish2") {
    uVar12 = CONCAT17(s_Env_MuseumFish2_040b29fe[7],s_Env_MuseumFish2_040b29fe._0_7_);
    *(undefined1 *)((long)param_1 + 0xc03) = 0;
    *(undefined8 *)pcVar14 = uVar12;
    *(ulong *)((long)param_1 + 0xbfb) =
         CONCAT71(s_Env_MuseumFish2_040b29fe._8_7_,s_Env_MuseumFish2_040b29fe[7]);
  }
  uVar12 = param_1[0x48];
  pcVar14 = (char *)((long)param_1 + 0xc44);
  *(undefined2 *)(param_1 + 0x183) = 0x100;
  param_1[0x17c] = puVar11 + 0x10;
  param_1[0x184] = puVar10 + 0x10;
  param_1[0x187] = pcVar14;
  param_1[0x185] = uVar12;
  *(undefined4 *)(param_1 + 0x188) = 0x20;
  *(undefined1 *)((long)param_1 + 0xc63) = 0;
  if (pcVar14 != "Env_MuseumFossil0") {
    *(undefined1 *)((long)param_1 + 0xc55) = 0;
    *(undefined1 *)((long)param_1 + 0xc54) = 0x30;
    uVar9 = s_Env_MuseumFossil0_040bd01b._8_8_;
    *(undefined8 *)pcVar14 = s_Env_MuseumFossil0_040bd01b._0_8_;
    *(undefined8 *)((long)param_1 + 0xc4c) = uVar9;
  }
  param_1[399] = uVar13;
  param_1[0x18e] = puVar10 + 0x10;
  *(undefined4 *)(param_1 + 0x192) = 0x20;
  pcVar14 = (char *)((long)param_1 + 0xc94);
  *(undefined2 *)(param_1 + 0x18d) = 0x100;
  param_1[0x186] = puVar11 + 0x10;
  param_1[0x191] = pcVar14;
  *(undefined1 *)((long)param_1 + 0xcb3) = 0;
  if (pcVar14 != "Env_MuseumFossil1") {
    *(undefined1 *)((long)param_1 + 0xca4) = 0x31;
    uVar9 = s_Env_MuseumFossil1_040e137f._8_8_;
    uVar13 = s_Env_MuseumFossil1_040e137f._0_8_;
    *(undefined1 *)((long)param_1 + 0xca5) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0xc9c) = uVar9;
  }
  param_1[400] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xce4);
  *(undefined2 *)(param_1 + 0x197) = 0x100;
  param_1[0x199] = uVar12;
  param_1[0x198] = puVar10 + 0x10;
  param_1[0x19b] = pcVar14;
  *(undefined4 *)(param_1 + 0x19c) = 0x20;
  *(undefined1 *)((long)param_1 + 0xd03) = 0;
  if (pcVar14 != "Env_MuseumFossil2") {
    *(undefined1 *)((long)param_1 + 0xcf4) = 0x32;
    uVar9 = s_Env_MuseumFossil2_040d165a._8_8_;
    uVar13 = s_Env_MuseumFossil2_040d165a._0_8_;
    *(undefined1 *)((long)param_1 + 0xcf5) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0xcec) = uVar9;
  }
  param_1[0x1a2] = puVar10 + 0x10;
  param_1[0x1a3] = uVar12;
  *(undefined4 *)(param_1 + 0x1a6) = 0x20;
  pcVar14 = (char *)((long)param_1 + 0xd34);
  *(undefined2 *)(param_1 + 0x1a1) = 0x100;
  param_1[0x19a] = puVar11 + 0x10;
  param_1[0x1a5] = pcVar14;
  *(undefined1 *)((long)param_1 + 0xd53) = 0;
  if (pcVar14 != "Env_MuseumArt0") {
    uVar13 = CONCAT26(s_Env_MuseumArt0_040c718e._6_2_,s_Env_MuseumArt0_040c718e._0_6_);
    *(undefined1 *)((long)param_1 + 0xd42) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(ulong *)((long)param_1 + 0xd3a) =
         CONCAT62(s_Env_MuseumArt0_040c718e._8_6_,s_Env_MuseumArt0_040c718e._6_2_);
  }
  param_1[0x1a4] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xd84);
  *(undefined2 *)(param_1 + 0x1ab) = 0x100;
  param_1[0x1ad] = uVar12;
  param_1[0x1ac] = puVar10 + 0x10;
  param_1[0x1af] = pcVar14;
  *(undefined4 *)(param_1 + 0x1b0) = 0x20;
  *(undefined1 *)((long)param_1 + 0xda3) = 0;
  if (pcVar14 != "Env_MuseumArt1") {
    uVar13 = CONCAT26(s_Env_MuseumArt1_040c719d._6_2_,s_Env_MuseumArt1_040c719d._0_6_);
    *(undefined1 *)((long)param_1 + 0xd92) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(ulong *)((long)param_1 + 0xd8a) =
         CONCAT62(s_Env_MuseumArt1_040c719d._8_6_,s_Env_MuseumArt1_040c719d._6_2_);
  }
  param_1[0x1b6] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xdd4);
  *(undefined2 *)(param_1 + 0x1b5) = 0x100;
  param_1[0x1ae] = puVar11 + 0x10;
  param_1[0x1b7] = uVar12;
  param_1[0x1b9] = pcVar14;
  *(undefined4 *)(param_1 + 0x1ba) = 0x20;
  *(undefined1 *)((long)param_1 + 0xdf3) = 0;
  if (pcVar14 != "Env_MuseumArt2") {
    uVar13 = CONCAT26(s_Env_MuseumArt2_040c2124._6_2_,s_Env_MuseumArt2_040c2124._0_6_);
    *(undefined1 *)((long)param_1 + 0xde2) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(ulong *)((long)param_1 + 0xdda) =
         CONCAT62(s_Env_MuseumArt2_040c2124._8_6_,s_Env_MuseumArt2_040c2124._6_2_);
  }
  param_1[0x1b8] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xe24);
  *(undefined2 *)(param_1 + 0x1bf) = 0x100;
  param_1[0x1c1] = uVar12;
  param_1[0x1c0] = puVar10 + 0x10;
  param_1[0x1c3] = pcVar14;
  *(undefined4 *)(param_1 + 0x1c4) = 0x20;
  *(undefined1 *)((long)param_1 + 0xe43) = 0;
  uVar9 = s_Env_MuseumHaniwa_04083a29._8_8_;
  uVar13 = s_Env_MuseumHaniwa_04083a29._0_8_;
  if (pcVar14 != "Env_MuseumHaniwa") {
    *(undefined1 *)((long)param_1 + 0xe34) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0xe2c) = uVar9;
  }
  param_1[0x1cb] = uVar12;
  param_1[0x1ca] = puVar10 + 0x10;
  *(undefined4 *)(param_1 + 0x1ce) = 0x20;
  pcVar14 = (char *)((long)param_1 + 0xe74);
  *(undefined2 *)(param_1 + 0x1c9) = 0x100;
  param_1[0x1c2] = puVar11 + 0x10;
  param_1[0x1cd] = pcVar14;
  *(undefined1 *)((long)param_1 + 0xe93) = 0;
  if (pcVar14 != "Env_MuseumShop") {
    uVar13 = CONCAT26(s_Env_MuseumShop_04098a78._6_2_,s_Env_MuseumShop_04098a78._0_6_);
    *(undefined1 *)((long)param_1 + 0xe82) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(ulong *)((long)param_1 + 0xe7a) =
         CONCAT62(s_Env_MuseumShop_04098a78._8_6_,s_Env_MuseumShop_04098a78._6_2_);
  }
  pcVar14 = (char *)((long)param_1 + 0xec4);
  *(undefined2 *)(param_1 + 0x1d3) = 0x100;
  param_1[0x1cc] = puVar11 + 0x10;
  param_1[0x1d4] = puVar10 + 0x10;
  param_1[0x1d7] = pcVar14;
  param_1[0x1d5] = param_1[0x56];
  *(undefined4 *)(param_1 + 0x1d8) = 0x20;
  *(undefined1 *)((long)param_1 + 0xee3) = 0;
  uVar12 = s_Env_DreamTotakeke_0407e35b._8_8_;
  uVar13 = s_Env_DreamTotakeke_0407e35b._0_8_;
  if (pcVar14 != "Env_DreamTotakeke") {
    *(undefined1 *)((long)param_1 + 0xed4) = 0x65;
    *(undefined1 *)((long)param_1 + 0xed5) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0xecc) = uVar12;
  }
  param_1[0x1de] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xf14);
  *(undefined2 *)(param_1 + 0x1dd) = 0x100;
  param_1[0x1d6] = puVar11 + 0x10;
  param_1[0x1e1] = pcVar14;
  param_1[0x1df] = param_1[0x5d];
  *(undefined4 *)(param_1 + 0x1e2) = 0x20;
  *(undefined1 *)((long)param_1 + 0xf33) = 0;
  if (pcVar14 != "Env_AmiiboPhone") {
    uVar13 = CONCAT17(s_Env_AmiiboPhone_040c2133[7],s_Env_AmiiboPhone_040c2133._0_7_);
    *(undefined1 *)((long)param_1 + 0xf23) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(ulong *)((long)param_1 + 0xf1b) =
         CONCAT71(s_Env_AmiiboPhone_040c2133._8_7_,s_Env_AmiiboPhone_040c2133[7]);
  }
  pcVar14 = (char *)((long)param_1 + 0xf64);
  *(undefined2 *)(param_1 + 0x1e7) = 0x100;
  param_1[0x1e0] = puVar11 + 0x10;
  param_1[0x1e8] = puVar10 + 0x10;
  param_1[0x1eb] = pcVar14;
  param_1[0x1e9] = param_1[100];
  *(undefined4 *)(param_1 + 0x1ec) = 0x20;
  *(undefined1 *)((long)param_1 + 0xf83) = 0;
  if (pcVar14 != "Env_CharacterOrder") {
    *(undefined2 *)((long)param_1 + 0xf74) = 0x7265;
    uVar12 = s_Env_CharacterOrder_040eba47._8_8_;
    uVar13 = s_Env_CharacterOrder_040eba47._0_8_;
    *(undefined1 *)((long)param_1 + 0xf76) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0xf6c) = uVar12;
  }
  param_1[499] = param_1[0x56];
  param_1[0x1ea] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0xfb4);
  *(undefined2 *)(param_1 + 0x1f1) = 0x100;
  param_1[0x1f2] = puVar10 + 0x10;
  param_1[0x1f5] = pcVar14;
  *(undefined4 *)(param_1 + 0x1f6) = 0x20;
  *(undefined1 *)((long)param_1 + 0xfd3) = 0;
  uVar13 = s_Env_IdrDream_040bd02d._0_8_;
  if (pcVar14 != "Env_IdrDream") {
    *(undefined4 *)((long)param_1 + 0xfbc) = 0x6d616572;
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)pcVar14 = uVar13;
  }
  param_1[500] = puVar11 + 0x10;
  param_1[0x1fc] = puVar10 + 0x10;
  puVar16 = (undefined2 *)((long)param_1 + 0x1004);
  *(undefined2 *)(param_1 + 0x1fb) = 0x3f;
  param_1[0x1ff] = puVar16;
  param_1[0x1fd] = param_1[0x6b];
  *(undefined4 *)(param_1 + 0x200) = 0x20;
  *(undefined1 *)((long)param_1 + 0x1023) = 0;
  if (puVar16 != (undefined2 *)&DAT_040698b7) {
    *(undefined1 *)((long)param_1 + 0x1006) = 0x76;
    *puVar16 = 0x6e45;
    *(undefined1 *)((long)param_1 + 0x1007) = 0;
  }
  param_1[0x206] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x1054);
  param_1[0x207] = uVar18;
  param_1[0x1fe] = puVar11 + 0x10;
  *(undefined2 *)(param_1 + 0x205) = 0x11e;
  param_1[0x209] = pcVar14;
  *(undefined4 *)(param_1 + 0x20a) = 0x20;
  *(undefined1 *)((long)param_1 + 0x1073) = 0;
  if (pcVar14 != "Env_WherearenOffice") {
    *(undefined1 *)((long)param_1 + 0x1067) = 0;
    *(undefined4 *)((long)param_1 + 0x1063) = 0x65636966;
    uVar13 = s_Env_WherearenOffice_040f6b5e._8_8_;
    *(undefined8 *)pcVar14 = s_Env_WherearenOffice_040f6b5e._0_8_;
    *(undefined8 *)((long)param_1 + 0x105c) = uVar13;
  }
  pcVar14 = (char *)((long)param_1 + 0x10a4);
  param_1[0x208] = puVar11 + 0x10;
  *(undefined2 *)(param_1 + 0x20f) = 0x11e;
  param_1[0x210] = puVar10 + 0x10;
  param_1[0x211] = uVar17;
  param_1[0x213] = pcVar14;
  *(undefined4 *)(param_1 + 0x214) = 0x20;
  *(undefined1 *)((long)param_1 + 0x10c3) = 0;
  uVar9 = s_Env_WherearenEditFacility_04093d7c._16_8_;
  uVar12 = s_Env_WherearenEditFacility_04093d7c._8_8_;
  uVar13 = s_Env_WherearenEditFacility_04093d7c._0_8_;
  if (pcVar14 != "Env_WherearenEditFacility") {
    *(undefined1 *)((long)param_1 + 0x10bc) = 0x79;
    *(undefined1 *)((long)param_1 + 0x10bd) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0x10ac) = uVar12;
    *(undefined8 *)((long)param_1 + 0x10b4) = uVar9;
  }
  param_1[0x21a] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x10f4);
  *(undefined2 *)(param_1 + 0x219) = 0x11e;
  param_1[0x212] = puVar11 + 0x10;
  param_1[0x21b] = uVar17;
  param_1[0x21d] = pcVar14;
  *(undefined4 *)(param_1 + 0x21e) = 0x20;
  *(undefined1 *)((long)param_1 + 0x1113) = 0;
  if (pcVar14 != "Env_WherearenTailor") {
    *(undefined1 *)((long)param_1 + 0x1107) = 0;
    *(undefined4 *)((long)param_1 + 0x1103) = 0x726f6c69;
    uVar13 = s_Env_WherearenTailor_04073e5a._8_8_;
    *(undefined8 *)pcVar14 = s_Env_WherearenTailor_04073e5a._0_8_;
    *(undefined8 *)((long)param_1 + 0x10fc) = uVar13;
  }
  param_1[0x21c] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x1144);
  *(undefined2 *)(param_1 + 0x223) = 0x11e;
  param_1[0x224] = puVar10 + 0x10;
  param_1[0x225] = uVar17;
  param_1[0x227] = pcVar14;
  *(undefined4 *)(param_1 + 0x228) = 0x20;
  *(undefined1 *)((long)param_1 + 0x1163) = 0;
  uVar13 = s_Env_WherearenRestaurant_040c71ac._0_8_;
  if (pcVar14 != "Env_WherearenRestaurant") {
    uVar12 = CONCAT17(s_Env_WherearenRestaurant_040c71ac[0xf],
                      s_Env_WherearenRestaurant_040c71ac._8_7_);
    *(undefined1 *)((long)param_1 + 0x115b) = 0;
    uVar9 = CONCAT71(s_Env_WherearenRestaurant_040c71ac._16_7_,
                     s_Env_WherearenRestaurant_040c71ac[0xf]);
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0x114c) = uVar12;
    *(undefined8 *)((long)param_1 + 0x1153) = uVar9;
  }
  param_1[0x22e] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x1194);
  *(undefined2 *)(param_1 + 0x22d) = 0x11e;
  param_1[0x226] = puVar11 + 0x10;
  param_1[0x22f] = uVar17;
  param_1[0x231] = pcVar14;
  *(undefined4 *)(param_1 + 0x232) = 0x20;
  *(undefined1 *)((long)param_1 + 0x11b3) = 0;
  uVar12 = s_Env_WherearenCafe_04100a5a._8_8_;
  uVar13 = s_Env_WherearenCafe_04100a5a._0_8_;
  if (pcVar14 != "Env_WherearenCafe") {
    *(undefined1 *)((long)param_1 + 0x11a4) = 0x65;
    *(undefined1 *)((long)param_1 + 0x11a5) = 0;
    *(undefined8 *)pcVar14 = uVar13;
    *(undefined8 *)((long)param_1 + 0x119c) = uVar12;
  }
  param_1[0x230] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x11e4);
  *(undefined2 *)(param_1 + 0x237) = 0x11e;
  param_1[0x238] = puVar10 + 0x10;
  param_1[0x239] = uVar17;
  param_1[0x23b] = pcVar14;
  *(undefined4 *)(param_1 + 0x23c) = 0x20;
  *(undefined1 *)((long)param_1 + 0x1203) = 0;
  if (pcVar14 != "Env_WherearenSchool") {
    *(undefined1 *)((long)param_1 + 0x11f7) = 0;
    *(undefined4 *)((long)param_1 + 0x11f3) = 0x6c6f6f68;
    uVar13 = s_Env_WherearenSchool_0406422b._8_8_;
    *(undefined8 *)pcVar14 = s_Env_WherearenSchool_0406422b._0_8_;
    *(undefined8 *)((long)param_1 + 0x11ec) = uVar13;
  }
  param_1[0x243] = uVar17;
  param_1[0x242] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x1234);
  *(undefined2 *)(param_1 + 0x241) = 0x11e;
  param_1[0x23a] = puVar11 + 0x10;
  param_1[0x245] = pcVar14;
  *(undefined4 *)(param_1 + 0x246) = 0x20;
  *(undefined1 *)((long)param_1 + 0x1253) = 0;
  uVar17 = s_Env_WherearenHospital_040eba5a._0_8_;
  if (pcVar14 != "Env_WherearenHospital") {
    uVar13 = CONCAT35(s_Env_WherearenHospital_040eba5a._13_3_,s_Env_WherearenHospital_040eba5a._8_5_
                     );
    *(undefined1 *)((long)param_1 + 0x1249) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(undefined8 *)((long)param_1 + 0x123c) = uVar13;
    *(ulong *)((long)param_1 + 0x1241) =
         CONCAT53(s_Env_WherearenHospital_040eba5a._16_5_,s_Env_WherearenHospital_040eba5a._13_3_);
  }
  param_1[0x244] = puVar11 + 0x10;
  *(undefined2 *)(param_1 + 0x24b) = 1;
  pcVar14 = (char *)((long)param_1 + 0x1284);
  param_1[0x24c] = puVar10 + 0x10;
  param_1[0x24d] = uVar18;
  param_1[0x24f] = pcVar14;
  *(undefined4 *)(param_1 + 0x250) = 0x20;
  *(undefined1 *)((long)param_1 + 0x12a3) = 0;
  if (pcVar14 != "Env_MuseumCafe") {
    uVar17 = CONCAT26(s_Env_MuseumCafe_040cc08a._6_2_,s_Env_MuseumCafe_040cc08a._0_6_);
    *(undefined1 *)((long)param_1 + 0x1292) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(ulong *)((long)param_1 + 0x128a) =
         CONCAT62(s_Env_MuseumCafe_040cc08a._8_6_,s_Env_MuseumCafe_040cc08a._6_2_);
  }
  param_1[599] = uVar18;
  param_1[0x256] = puVar10 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x12d4);
  *(undefined2 *)(param_1 + 0x255) = 0x101;
  param_1[0x24e] = puVar11 + 0x10;
  param_1[0x259] = pcVar14;
  *(undefined4 *)(param_1 + 0x25a) = 0x20;
  *(undefined1 *)((long)param_1 + 0x12f3) = 0;
  if (pcVar14 != "Env_HotelEntrance") {
    *(undefined1 *)((long)param_1 + 0x12e4) = 0x65;
    uVar13 = s_Env_HotelEntrance_0409e044._8_8_;
    uVar17 = s_Env_HotelEntrance_0409e044._0_8_;
    *(undefined1 *)((long)param_1 + 0x12e5) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(undefined8 *)((long)param_1 + 0x12dc) = uVar13;
  }
  *(undefined2 *)(param_1 + 0x25f) = 0x101;
  param_1[600] = puVar11 + 0x10;
  pcVar14 = (char *)((long)param_1 + 0x1324);
  param_1[0x260] = puVar10 + 0x10;
  param_1[0x263] = pcVar14;
  param_1[0x261] = param_1[0x1e];
  *(undefined4 *)(param_1 + 0x264) = 0x20;
  *(undefined1 *)((long)param_1 + 0x1343) = 0;
  if (pcVar14 != "Env_HotelRoom") {
    uVar17 = CONCAT35(s_Env_HotelRoom_040b7d4c._5_3_,s_Env_HotelRoom_040b7d4c._0_5_);
    *(undefined1 *)((long)param_1 + 0x1331) = 0;
    *(undefined8 *)pcVar14 = uVar17;
    *(ulong *)((long)param_1 + 0x1329) =
         CONCAT53(s_Env_HotelRoom_040b7d4c._8_5_,s_Env_HotelRoom_040b7d4c._5_3_);
  }
  param_1[0x26a] = puVar10 + 0x10;
  puVar16 = (undefined2 *)((long)param_1 + 0x1374);
  param_1[0x262] = puVar11 + 0x10;
  *(undefined2 *)(param_1 + 0x269) = 0x1e;
  param_1[0x26d] = puVar16;
  *(undefined4 *)(param_1 + 0x26e) = 0x20;
  param_1[0x26b] = param_1[0x72];
  *(undefined1 *)((long)param_1 + 0x1393) = 0;
  if (puVar16 != (undefined2 *)&DAT_040698b7) {
    *(undefined1 *)((long)param_1 + 0x1376) = 0x76;
    *puVar16 = 0x6e45;
    *(undefined1 *)((long)param_1 + 0x1377) = 0;
  }
  param_1[0x26c] = puVar11 + 0x10;
  puVar16 = (undefined2 *)((long)param_1 + 0x13c4);
  *(undefined2 *)(param_1 + 0x273) = 0x1e;
  param_1[0x274] = puVar10 + 0x10;
  param_1[0x277] = puVar16;
  *(undefined4 *)(param_1 + 0x278) = 0x20;
  *(undefined1 *)((long)param_1 + 0x13e3) = 0;
  param_1[0x275] = param_1[0x79];
  if (puVar16 != (undefined2 *)&DAT_040698b7) {
    *(undefined1 *)((long)param_1 + 0x13c6) = 0x76;
    *puVar16 = 0x6e45;
    *(undefined1 *)((long)param_1 + 0x13c7) = 0;
  }
  *(undefined2 *)(param_1 + 0x27d) = 0;
  puVar10 = PTR_DAT_04bdf1d8;
  param_1[0x276] = puVar11 + 0x10;
  *(undefined1 *)(param_1 + 0x284) = 0;
  param_1[0x285] = 0;
  param_1[0x287] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  *(undefined4 *)(param_1 + 0x28a) = 0;
  param_1[0x286] = puVar10 + 0x10;
  return;
}

