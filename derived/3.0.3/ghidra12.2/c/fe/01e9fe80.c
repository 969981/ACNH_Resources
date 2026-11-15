
/* WARNING: Removing unreachable block (ram,0x01ea1b68) */

void FUN_01e9fe80(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  uint *puVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 *puVar15;
  long lVar16;
  char cVar17;
  ushort uVar18;
  uint *puVar19;
  int *piVar20;
  undefined *puVar21;
  long lVar22;
  char *pcVar23;
  undefined8 *__dest;
  undefined8 uVar24;
  char *pcVar25;
  byte *pbVar26;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [31];
  undefined1 local_65;
  
  puVar12 = (uint *)(param_1 + 0xefa);
  plVar13 = param_1 + 0xef5;
  uVar8 = (**(code **)(*param_1 + 0x2c8))();
  uVar9 = (**(code **)(*param_1 + 0x2c0))(param_1);
  FUN_03ebac90(plVar13,uVar8,uVar9,0,0);
  puVar21 = PTR_DAT_04bb2020 + 0x10;
  local_90 = "NpcAIState::cIdle";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0,&local_98);
  puVar5 = PTR_LAB_04bc19f8;
  puVar15 = (undefined8 *)param_1[0xefb];
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar7 = PTR_LAB_04bc1a08;
  puVar6 = PTR_LAB_04bc1a00;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  local_90 = "NpcAIState::cWait";
  puVar15[4] = puVar6;
  puVar15[5] = 0;
  puVar15[6] = puVar7;
  puVar15[7] = 0;
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,1,&local_98);
  puVar15 = (undefined8 *)(param_1[0xefb] + (ulong)(1 < *puVar12) * 0x40);
  puVar15[2] = 0x110;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[4] = 0x118;
  puVar15[5] = 1;
  puVar15[6] = 0x120;
  puVar15[7] = 1;
  local_90 = "NpcAIState::cTurn";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,2,&local_98);
  puVar5 = PTR_LAB_04bc1a10;
  puVar15 = (undefined8 *)(param_1[0xefb] + (ulong)(2 < *puVar12) * 0x80);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar7 = PTR_LAB_04bc1a20;
  puVar6 = PTR_LAB_04bc1a18;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = puVar6;
  puVar15[5] = 0;
  puVar15[6] = puVar7;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cTalk";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,3,&local_98);
  lVar22 = 0xc0;
  if (*puVar12 < 4) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x128;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 0x138;
  puVar15[7] = 1;
  puVar15[4] = 0x130;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cTalkCast";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,4,&local_98);
  puVar15 = (undefined8 *)(param_1[0xefb] + (ulong)(4 < *puVar12) * 0x100);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = 0x140;
  puVar15[3] = 1;
  puVar15[4] = 0x148;
  puVar15[5] = 1;
  puVar15[6] = 0x150;
  puVar15[7] = 1;
  local_90 = "NpcAIState::cWaitTalkStart";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,5,&local_98);
  lVar22 = 0x140;
  if (*puVar12 < 6) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x158;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[4] = 0x160;
  puVar15[5] = 1;
  puVar15[6] = 0x168;
  puVar15[7] = 1;
  local_90 = "NpcAIState::cSpeak";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,6,&local_98);
  lVar22 = 0x180;
  if (*puVar12 < 7) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x170;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 0x180;
  puVar15[7] = 1;
  puVar15[4] = 0x178;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cContinueSpeak";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,7,&local_98);
  lVar22 = 0x1c0;
  if (*puVar12 < 8) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x188;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 0x198;
  puVar15[7] = 1;
  puVar15[4] = 400;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cWander";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,8,&local_98);
  puVar15 = (undefined8 *)(param_1[0xefb] + (ulong)(8 < *puVar12) * 0x200);
  puVar15[2] = 0x1a0;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[4] = 0x1a8;
  puVar15[5] = 1;
  puVar15[6] = 0x1b0;
  puVar15[7] = 1;
  local_90 = "NpcAIState::cGoToDestination";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,9,&local_98);
  lVar22 = 0x240;
  if (*puVar12 < 10) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x1b8;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[4] = 0x1c0;
  puVar15[5] = 1;
  puVar15[6] = 0x1c8;
  puVar15[7] = 1;
  local_90 = "NpcAIState::cBlockWander";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,10,&local_98);
  lVar22 = 0x280;
  if (*puVar12 < 0xb) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x1d0;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 0x1e0;
  puVar15[7] = 1;
  puVar15[4] = 0x1d8;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cBlockWanderWait";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0xb,&local_98);
  lVar22 = 0x2c0;
  if (*puVar12 < 0xc) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x1e8;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 0x1f8;
  puVar15[7] = 1;
  puVar15[4] = 0x1f0;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cFollowPlayer";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0xc,&local_98);
  puVar5 = PTR_LAB_04bc1a28;
  lVar22 = 0x300;
  if (*puVar12 < 0xd) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1a30;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1a38;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cEscapeFromPlayer";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0xd,&local_98);
  puVar5 = PTR_LAB_04bc1a40;
  lVar22 = 0x340;
  if (*puVar12 < 0xe) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1a48;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1a50;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cFollowNpc";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0xe,&local_98);
  puVar5 = PTR_LAB_04bc1a58;
  lVar22 = 0x380;
  if (*puVar12 < 0xf) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1a60;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1a68;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cFollowTargetPos";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0xf,&local_98);
  puVar5 = PTR_LAB_04bc1a70;
  lVar22 = 0x3c0;
  if (*puVar12 < 0x10) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1a78;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1a80;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cInvisible";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x10,&local_98);
  puVar15 = (undefined8 *)(param_1[0xefb] + (ulong)(0x10 < *puVar12) * 0x400);
  puVar15[2] = 0x200;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[4] = 0x208;
  puVar15[5] = 1;
  puVar15[6] = 0x210;
  puVar15[7] = 1;
  local_90 = "NpcAIState::cChangeHandTool";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x11,&local_98);
  puVar5 = PTR_LAB_04bc1a88;
  lVar22 = 0x440;
  if (*puVar12 < 0x12) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1a90;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1a98;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cChangeHandToolSimple";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x12,&local_98);
  puVar5 = PTR_LAB_04bc1aa0;
  lVar22 = 0x480;
  if (*puVar12 < 0x13) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1aa8;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1ab0;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cChangeCloth";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x13,&local_98);
  puVar5 = PTR_LAB_04bc1ab8;
  lVar22 = 0x4c0;
  if (*puVar12 < 0x14) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1ac0;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1ac8;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cSitChair";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x14,&local_98);
  puVar5 = PTR_FUN_04bc1970;
  lVar22 = 0x500;
  if (*puVar12 < 0x15) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_FUN_04bc1978;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1ad0;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cStandupChair";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x15,&local_98);
  puVar5 = PTR_LAB_04bc1ad8;
  lVar22 = 0x540;
  if (*puVar12 < 0x16) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1ae0;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1ae8;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cSitOnGround";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x16,&local_98);
  puVar5 = PTR_LAB_04bc1af0;
  lVar22 = 0x580;
  if (*puVar12 < 0x17) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1af8;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1b00;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cStandupGround";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x17,&local_98);
  puVar5 = PTR_LAB_04bc1b08;
  lVar22 = 0x5c0;
  if (*puVar12 < 0x18) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1b10;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1b18;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cBedIn";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x18,&local_98);
  puVar5 = PTR_FUN_04bc1980;
  lVar22 = 0x600;
  if (*puVar12 < 0x19) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_FUN_04bc1988;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1b20;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cBedOut";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x19,&local_98);
  puVar5 = PTR_LAB_04bc1b28;
  lVar22 = 0x640;
  if (*puVar12 < 0x1a) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1b30;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1b38;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cWearNewYearHat";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x1a,&local_98);
  puVar5 = PTR_LAB_04bc1b40;
  lVar22 = 0x680;
  if (*puVar12 < 0x1b) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1b48;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1b50;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cConversationPretense";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x1b,&local_98);
  lVar22 = 0x6c0;
  if (*puVar12 < 0x1c) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x218;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 0x228;
  puVar15[7] = 1;
  puVar15[4] = 0x220;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cWaitUntilAnimEnd";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x1c,&local_98);
  puVar5 = PTR_LAB_04bc1b58;
  lVar22 = 0x700;
  if (*puVar12 < 0x1d) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1b60;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1b68;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cStingByPoisonReaction";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x1d,&local_98);
  puVar5 = PTR_LAB_04bc1b70;
  lVar22 = 0x740;
  if (*puVar12 < 0x1e) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1b78;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1b80;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cStandSleep";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x1e,&local_98);
  puVar5 = PTR_LAB_04bc1b88;
  lVar22 = 0x780;
  if (*puVar12 < 0x1f) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_FUN_04bc1b90;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1b98;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cStoreHandTool";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x1f,&local_98);
  puVar5 = PTR_LAB_04bc1ba0;
  lVar22 = 0x7c0;
  if (*puVar12 < 0x20) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1ba8;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1bb0;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cEscapeHighCostArea";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x20,&local_98);
  puVar15 = (undefined8 *)(param_1[0xefb] + (ulong)(0x20 < *puVar12) * 0x800);
  puVar15[2] = 0x230;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[4] = 0x238;
  puVar15[5] = 1;
  puVar15[6] = 0x240;
  puVar15[7] = 1;
  local_90 = "NpcAIState::cRhythmSound";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x21,&local_98);
  lVar22 = 0x840;
  if (*puVar12 < 0x22) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x248;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 600;
  puVar15[7] = 1;
  puVar15[4] = 0x250;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cSingSong";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x22,&local_98);
  lVar22 = 0x880;
  if (*puVar12 < 0x23) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x260;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 0x270;
  puVar15[7] = 1;
  puVar15[4] = 0x268;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cPlayMusic";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x23,&local_98);
  lVar22 = 0x8c0;
  if (*puVar12 < 0x24) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x278;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[4] = 0x280;
  puVar15[5] = 1;
  puVar15[6] = 0x288;
  puVar15[7] = 1;
  local_90 = "NpcAIState::cCountdownWait";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x24,&local_98);
  puVar5 = PTR_FUN_04bc1bb8;
  lVar22 = 0x900;
  if (*puVar12 < 0x25) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1bc0;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1bc8;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cLookFireworksAndClap";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x25,&local_98);
  puVar5 = PTR_LAB_04bc1bd0;
  lVar22 = 0x940;
  if (*puVar12 < 0x26) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1bd8;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1be0;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cUseCracker";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x26,&local_98);
  lVar22 = 0x980;
  if (*puVar12 < 0x27) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x290;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 0x2a0;
  puVar15[7] = 1;
  puVar15[4] = 0x298;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cSwingStickLight";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x27,&local_98);
  puVar5 = PTR_FUN_04bc1be8;
  lVar22 = 0x9c0;
  if (*puVar12 < 0x28) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1bf0;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1bf8;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cHit";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x28,&local_98);
  lVar22 = 0xa00;
  if (*puVar12 < 0x29) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  puVar15[2] = 0x2a8;
  puVar15[3] = 1;
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[6] = 0x2b8;
  puVar15[7] = 1;
  puVar15[4] = 0x2b0;
  puVar15[5] = 1;
  local_90 = "NpcAIState::cFallPit";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x29,&local_98);
  puVar5 = PTR_LAB_04bc1c00;
  lVar22 = 0xa40;
  if (*puVar12 < 0x2a) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1c08;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1c10;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cWorkMotion";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x2a,&local_98);
  puVar5 = PTR_LAB_04bc1c18;
  lVar22 = 0xa80;
  if (*puVar12 < 0x2b) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1c20;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1c28;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cApproach";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x2b,&local_98);
  puVar5 = PTR_LAB_04bc1c30;
  lVar22 = 0xac0;
  if (*puVar12 < 0x2c) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1c38;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1c40;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cRadioGymnastics";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x2c,&local_98);
  puVar5 = PTR_LAB_04bc1c48;
  lVar22 = 0xb00;
  if (*puVar12 < 0x2d) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1c50;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1c58;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cEmoticonAction";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x2d,&local_98);
  puVar5 = PTR_LAB_04bc1c60;
  lVar22 = 0xb40;
  if (*puVar12 < 0x2e) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1c68;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1c70;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cTakePhotoAppeal";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x2e,&local_98);
  puVar5 = PTR_FUN_04bc1c78;
  lVar22 = 0xb80;
  if (*puVar12 < 0x2f) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1c80;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1c88;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cKKFesNormal";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x2f,&local_98);
  puVar5 = PTR_LAB_04bc1c90;
  lVar22 = 0xbc0;
  if (*puVar12 < 0x30) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1c98;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1ca0;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cKKFesExcitement";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x30,&local_98);
  puVar5 = PTR_LAB_04bc1ca8;
  lVar22 = 0xc00;
  if (*puVar12 < 0x31) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1cb0;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1cb8;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cKKFesPlayerReaction";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x31,&local_98);
  puVar5 = PTR_LAB_04bc1cc0;
  lVar22 = 0xc40;
  if (*puVar12 < 0x32) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1cc8;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1cd0;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cKKFesPreWait";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x32,&local_98);
  puVar5 = PTR_LAB_04bc1cd8;
  lVar22 = 0xc80;
  if (*puVar12 < 0x33) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1ce0;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1ce8;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cKKFesFindDJ";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x33,&local_98);
  puVar5 = PTR_LAB_04bc1cf0;
  lVar22 = 0xcc0;
  if (*puVar12 < 0x34) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1cf8;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1d00;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cKKFesJump";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x34,&local_98);
  puVar5 = PTR_LAB_04bc1d08;
  lVar22 = 0xd00;
  if (*puVar12 < 0x35) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1d10;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1d18;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cCommonMegaphoneGreet";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x35,&local_98);
  puVar5 = PTR_LAB_04bc1d20;
  lVar22 = 0xd40;
  if (*puVar12 < 0x36) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar15[2] = puVar5;
  puVar15[3] = 0;
  puVar15[4] = PTR_LAB_04bc1d28;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1d30;
  puVar15[7] = 0;
  local_90 = "NpcAIState::cCommonMegaphoneAround";
  local_98 = puVar21;
  FUN_03ebaf40(plVar13,0x36,&local_98);
  lVar22 = 0xd80;
  if (*puVar12 < 0x37) {
    lVar22 = 0;
  }
  puVar15 = (undefined8 *)(param_1[0xefb] + lVar22);
  *puVar15 = &PTR_LAB_04a5eb70;
  puVar15[1] = param_1;
  puVar21 = PTR_LAB_04bc1d40;
  puVar15[2] = PTR_LAB_04bc1d38;
  puVar15[3] = 0;
  puVar15[4] = puVar21;
  puVar15[5] = 0;
  puVar15[6] = PTR_LAB_04bc1d48;
  puVar15[7] = 0;
  (**(code **)(*param_1 + 0x2d0))(param_1,plVar13);
  uVar8 = (**(code **)(*param_1 + 0x2c0))(param_1);
  *(undefined4 *)(param_1 + 0xefe) = uVar8;
  lVar22 = param_1[1];
  local_88 = 0x20;
  local_65 = 0;
  local_98 = PTR_DAT_04bb2a08 + 0x10;
  local_90 = local_84;
  (**(code **)(*(long *)(lVar22 + 0x450) + 0x18))(lVar22 + 0x450);
  pcVar25 = *(char **)(lVar22 + 0x458);
  if (local_84 != pcVar25) {
    (**(code **)(*(long *)(lVar22 + 0x450) + 0x18))(lVar22 + 0x450);
    lVar16 = 0;
    do {
      if (*(char *)(*(long *)(lVar22 + 0x458) + lVar16) == '\0') goto LAB_01ea128c;
      lVar1 = *(long *)(lVar22 + 0x458) + lVar16;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_01ea128c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_01ea128c;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_01ea128c:
    iVar10 = (int)lVar16;
    if (local_88 <= (int)lVar16) {
      iVar10 = local_88 + -1;
    }
    memcpy(local_84,pcVar25,(long)iVar10);
    local_84[iVar10] = '\0';
  }
  pbVar26 = PTR_DAT_04bb6860;
  puVar21 = PTR_DAT_04bb6858;
  local_98 = PTR_DAT_04bb2028 + 0x10;
  if ((*local_90 == '\0') && (lVar22 = *(long *)PTR_DAT_04bb4138, lVar22 != 0)) {
    lVar16 = param_1[1];
    (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
    uVar8 = FUN_006bd550(*(undefined8 *)(lVar16 + 1000),0);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar8);
    lVar22 = FUN_0079e770(lVar22,&local_a8);
    if ((lVar22 == 0) || ((*(byte *)((long)param_1 + 0xad5b) >> 2 & 1) == 0)) goto LAB_01ea12e4;
    if (((*pbVar26 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar10 != 0)) {
      *(undefined **)puVar21 = PTR_DAT_04bb4100 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6860);
    }
    uVar11 = (**(code **)*param_1)(param_1,PTR_DAT_04bb6858);
    if ((uVar11 & 1) == 0) goto LAB_01ea12e4;
    FUN_01ea1c90(param_1);
    param_1[0x15ab] = param_1[0x15ab] | 0x800;
  }
  else {
LAB_01ea12e4:
    pcVar25 = local_90;
    if (*local_90 == '\0') {
      (**(code **)(DAT_053939f8 + 0x18))(&DAT_053939f8);
      pcVar23 = DAT_05393a00;
      if (pcVar25 != DAT_05393a00) {
        (**(code **)(DAT_053939f8 + 0x18))(&DAT_053939f8);
        lVar22 = 0;
        do {
          if (DAT_05393a00[lVar22] == '\0') goto LAB_01ea13fc;
          if (DAT_05393a00[lVar22 + 1] == '\0') {
            lVar22 = lVar22 + 1;
            goto LAB_01ea13fc;
          }
          if (DAT_05393a00[lVar22 + 2] == '\0') {
            lVar22 = lVar22 + 2;
            goto LAB_01ea13fc;
          }
          lVar22 = lVar22 + 3;
        } while (lVar22 != 0x80001);
        lVar22 = 0;
LAB_01ea13fc:
        iVar10 = (int)lVar22;
        if (local_88 <= (int)lVar22) {
          iVar10 = local_88 + -1;
        }
        memcpy(pcVar25,pcVar23,(long)iVar10);
        pcVar25[iVar10] = '\0';
      }
      pcVar25 = local_90;
      lVar16 = param_1[1];
      (**(code **)(local_98 + 0x18))(&local_98);
      lVar22 = 0;
      do {
        if (local_90[lVar22] == '\0') goto LAB_01ea1480;
        if (local_90[lVar22 + 1] == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_01ea1480;
        }
        if (local_90[lVar22 + 2] == '\0') {
          lVar22 = lVar22 + 2;
          goto LAB_01ea1480;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      lVar22 = 0;
LAB_01ea1480:
      uVar2 = (uint)lVar22 & ((int)(uint)lVar22 >> 0x1f ^ 0xffffffffU);
      (**(code **)(*(long *)(lVar16 + 0x418) + 0x18))(lVar16 + 0x418);
      lVar22 = 0;
      do {
        if (*(char *)(*(long *)(lVar16 + 0x420) + lVar22) == '\0') goto LAB_01ea14dc;
        lVar1 = *(long *)(lVar16 + 0x420) + lVar22;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_01ea14dc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar22 = lVar22 + 2;
          goto LAB_01ea14dc;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      lVar22 = 0;
LAB_01ea14dc:
      uVar3 = (uint)lVar22;
      if ((int)(local_88 - uVar2) <= (int)(uint)lVar22) {
        uVar3 = local_88 + ~uVar2;
      }
      if (0 < (int)uVar3) {
        (**(code **)(*(long *)(lVar16 + 0x418) + 0x18))(lVar16 + 0x418);
        memcpy(pcVar25 + uVar2,*(void **)(lVar16 + 0x420),(ulong)uVar3);
        pcVar25[(int)(uVar3 + uVar2)] = '\0';
      }
    }
    puVar21 = PTR_DAT_04bb2020 + 0x10;
    local_a0 = (undefined8 *)&DAT_04066c7f;
    local_a8 = puVar21;
    uVar11 = FUN_01186738(&local_98,&local_a8);
    if ((uVar11 & 1) == 0) {
      *(byte *)(param_1 + 0xf25) = *(byte *)(param_1 + 0xf25) & 0xfe;
    }
    else {
      pcVar23 = (char *)param_1[0xf27];
      local_a0 = &DAT_0407ebb1;
      local_a8 = puVar21;
      (**(code **)(local_98 + 0x18))(&local_98);
      pcVar25 = local_90;
      if (pcVar23 != local_90) {
        (**(code **)(local_98 + 0x18))(&local_98);
        lVar22 = 0;
        do {
          if (local_90[lVar22] == '\0') goto LAB_01ea15f0;
          if (local_90[lVar22 + 1] == '\0') {
            lVar22 = lVar22 + 1;
            goto LAB_01ea15f0;
          }
          if (local_90[lVar22 + 2] == '\0') {
            lVar22 = lVar22 + 2;
            goto LAB_01ea15f0;
          }
          lVar22 = lVar22 + 3;
        } while (lVar22 != 0x80001);
        lVar22 = 0;
LAB_01ea15f0:
        iVar10 = (int)lVar22;
        if ((int)param_1[0xf28] <= (int)lVar22) {
          iVar10 = (int)param_1[0xf28] + -1;
        }
        memcpy(pcVar23,pcVar25,(long)iVar10);
        pcVar23[iVar10] = '\0';
        puVar21 = local_a8;
      }
      __dest = (undefined8 *)param_1[0xf32];
      (**(code **)(puVar21 + 0x18))(&local_a8);
      puVar15 = local_a0;
      if (__dest != local_a0) {
        (**(code **)(local_a8 + 0x18))(&local_a8);
        lVar22 = 0;
        do {
          if (*(char *)((long)local_a0 + lVar22) == '\0') goto LAB_01ea168c;
          if (*(char *)((long)local_a0 + lVar22 + 1) == '\0') {
            lVar22 = lVar22 + 1;
            goto LAB_01ea168c;
          }
          if (*(char *)((long)local_a0 + lVar22 + 2) == '\0') {
            lVar22 = lVar22 + 2;
            goto LAB_01ea168c;
          }
          lVar22 = lVar22 + 3;
        } while (lVar22 != 0x80001);
        lVar22 = 0;
LAB_01ea168c:
        iVar10 = (int)lVar22;
        if ((int)param_1[0xf33] <= (int)lVar22) {
          iVar10 = (int)param_1[0xf33] + -1;
        }
        memcpy(__dest,puVar15,(long)iVar10);
        *(undefined1 *)((long)__dest + (long)iVar10) = 0;
      }
    }
    pbVar26 = PTR_DAT_04bb6860;
  }
  if (((*pbVar26 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6860);
  }
  uVar11 = (**(code **)*param_1)(param_1,PTR_DAT_04bb6858);
  if ((((uVar11 & 1) != 0) && (uVar2 = *(uint *)(param_1[1] + 0x508), uVar2 < 10)) &&
     ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    lVar22 = (ulong)uVar2 * 0xba0;
    *(undefined8 *)(&DAT_053fee08 + lVar22) = 0x318;
    *(long **)(&DAT_053fee00 + lVar22) = param_1;
    *(undefined8 *)(&DAT_053fee10 + lVar22) = 1;
    if ((&DAT_053fedf2)[lVar22] != '\0') {
      if (((uint)param_1[0x15ab] >> 0x1a & 1) == 0) {
        param_1[0x15ab] = param_1[0x15ab] & 0xfffffffffffff7ff;
      }
      else {
        FUN_01ea1c90(param_1);
      }
      (&DAT_053fedf2)[lVar22] = 0;
    }
  }
  lVar22 = (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_1 + 0x10f7);
  lVar16 = param_1[1];
  param_1[0x10f6] = lVar22;
  if (*(int *)(lVar16 + 0x500) != 1) goto LAB_01ea1be0;
  uVar24 = *(undefined8 *)PTR_DAT_04bb4130;
  (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
  uVar8 = FUN_006bd550(*(undefined8 *)(lVar16 + 1000),0);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar8);
  puVar12 = (uint *)FUN_0079e4d0(uVar24,&local_98);
  puVar5 = PTR_DAT_04bb40a8;
  puVar21 = PTR_DAT_04bb40a0;
  if (puVar12 != (uint *)0x0) {
    if (*puVar12 != 0) {
      cVar17 = *PTR_DAT_04bb40a0;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar21 = 1;
          *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 0x38);
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar12) != (ushort *)0x0) {
              uVar18 = *(ushort *)((ulong)uVar2 + (long)puVar12);
              goto LAB_01ea18cc;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)*puVar12;
        uVar18 = 0xfffe;
        if ((*puVar12 == 0) || (puVar12 == puVar19)) goto LAB_01ea18cc;
        lVar22 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar19)) != '\0') {
          lVar22 = 0x1c;
        }
        lVar22 = (long)puVar12 + (lVar22 - (long)puVar19);
        if (lVar22 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar19));
        *(undefined4 *)(puVar5 + 0x38) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar20 = (int *)(lVar22 + 4);
        while (piVar20[-1] != -0x44637e92) {
          piVar20 = piVar20 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01ea18c8;
        }
        iVar10 = 0;
        if (*piVar20 != -1) {
          iVar10 = *piVar20;
        }
        *(int *)(puVar5 + 0x38) = iVar10;
        if (*puVar12 == 0) break;
      } while( true );
    }
LAB_01ea18c8:
    uVar18 = 0xfffe;
LAB_01ea18cc:
    local_a8 = (undefined *)(ulong)uVar18;
    FUN_0277d4ac(&local_a8);
    puVar6 = PTR_DAT_04bb6298;
    puVar5 = PTR_DAT_04bb40a8;
    puVar21 = PTR_DAT_04bb40a0;
    uVar18 = *(ushort *)PTR_DAT_04bb6298;
    sVar4 = (short)local_a8;
    if ((short)local_a8 == -2) {
      if (uVar18 != 0xffff) {
        local_98 = (undefined *)CONCAT44(local_98._4_4_,0x1a);
        puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar18 * 8);
        if (0xff < uVar18) {
          puVar19 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar19 >> 0x1a & 1) != 0) {
          if (*puVar12 != 0) {
            cVar17 = *PTR_DAT_04bb40a0;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar21 = 1;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
              }
              else {
                uVar2 = *(uint *)(puVar5 + 0x3c);
                if (-1 < (int)uVar2) {
                  if ((ushort *)((ulong)uVar2 + (long)puVar12) != (ushort *)0x0) {
                    uVar18 = *(ushort *)((ulong)uVar2 + (long)puVar12);
                    goto LAB_01ea1a4c;
                  }
                  break;
                }
                if (uVar2 != 0xffffffff) break;
              }
              puVar19 = (uint *)(ulong)*puVar12;
              uVar18 = 0xfffe;
              if ((*puVar12 == 0) || (puVar12 == puVar19)) goto LAB_01ea1a4c;
              lVar22 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar19)) != '\0') {
                lVar22 = 0x1c;
              }
              lVar22 = (long)puVar12 + (lVar22 - (long)puVar19);
              if (lVar22 == 0) break;
              uVar11 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar19));
              *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
              if (uVar11 == 0) break;
              piVar20 = (int *)(lVar22 + 4);
              while (piVar20[-1] != 0x4bccce37) {
                piVar20 = piVar20 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_01ea1a48;
              }
              iVar10 = 0;
              if (*piVar20 != -1) {
                iVar10 = *piVar20;
              }
              *(int *)(puVar5 + 0x3c) = iVar10;
              if (*puVar12 == 0) break;
            } while( true );
          }
LAB_01ea1a48:
          uVar18 = 0xfffe;
LAB_01ea1a4c:
          local_98 = (undefined *)(ulong)uVar18;
          FUN_0277d4ac(&local_98);
          local_a8 = local_98;
          if ((short)local_98 != -2) {
            uVar18 = *(ushort *)puVar6;
            sVar4 = (short)local_98;
            goto LAB_01ea1a84;
          }
        }
      }
    }
    else {
LAB_01ea1a84:
      if (uVar18 != 0xffff) {
        local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
        puVar12 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar18 & 0xffffffffU) * 8);
        if (0xff < uVar18) {
          puVar12 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((((*puVar12 >> 1 & 1) != 0) &&
            (iVar10 = *(int *)(PTR_DAT_04bc3a80 + 0x38), iVar10 != -0x78855454)) &&
           (iVar10 != -0x17df00c3)) {
          if (iVar10 != 0x77130016) {
            local_98 = PTR_DAT_04bb2020 + 0x10;
            local_90 = "hgh";
            uVar11 = FUN_00710cb0(param_1[1] + 0x3e0,&local_98);
            if ((uVar11 & 1) != 0) goto LAB_01ea1b70;
            sVar4 = (short)local_a8;
          }
          *(short *)((long)param_1 + 0xae84) = sVar4;
          *(undefined2 *)((long)param_1 + 0xae86) = local_a8._2_2_;
          *(undefined4 *)(param_1 + 0x15d1) = local_a8._4_4_;
          local_98 = (undefined *)CONCAT44(local_98._4_4_,8);
          param_1[0x1593] = (long)(param_1 + 0x15ba);
        }
      }
    }
  }
LAB_01ea1b70:
  lVar22 = *(long *)PTR_DAT_04bb2698;
  if (lVar22 == 0) {
    pvVar14 = malloc(0x7f8);
  }
  else {
    plVar13 = param_2;
    if (param_2 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar22 + 8);
      if (lVar16 != 0) {
        plVar13 = (long *)(lVar16 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
    }
    pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x7f8,8);
  }
  FUN_02154f80(pvVar14,param_1[1]);
  param_1[0x1549] = (long)pvVar14;
LAB_01ea1be0:
  param_1[0x15c3] = (long)param_1;
  param_1[0x15c4] = 800;
  param_1[0x15c5] = 1;
  (**(code **)(*param_1 + 200))(param_1,param_2);
  return;
}

