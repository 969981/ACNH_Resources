
void FUN_01e49f1c(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8,long param_9)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  char *__dest;
  undefined *local_70;
  char *pcStack_68;
  
  FUN_00705c50();
  puVar1 = PTR_DAT_04bb38d8;
  *(undefined2 *)(param_1 + 0x53) = 0;
  puVar8 = PTR_DAT_04bd4738;
  __dest = (char *)param_1[0xc];
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x50] = 0xffffffff;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0xffffffff;
  param_1[0x55] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x4f] = (long)(puVar8 + 0x10);
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  param_1[0x58] = (long)puVar1;
  param_1[0x5c] = (long)puVar1;
  if (__dest != "StateMachine") {
    iVar3 = 0xc;
    if ((int)param_1[0xd] < 0xd) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"StateMachine",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  param_1[100] = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x325) = 0;
  param_1[0x6a] = param_7;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((long)param_1 + 0x31c) = 0xbf800000;
  *(undefined1 *)((long)param_1 + 0x32d) = 1;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = param_5;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 2;
  *param_1 = (long)&PTR_LAB_04a5d540;
  param_1[0x68] = param_4;
  param_1[0x60] = (long)&PTR_LAB_04a5d648;
  param_1[0x69] = param_6;
  param_1[0x6b] = param_2;
  param_1[0x6c] = 0x2300000023;
  param_1[0x6e] = param_3;
  *(undefined4 *)(param_1 + 0x6d) = 0x23;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  param_1[0x77] = (long)param_1 + 0x3c4;
  *(undefined4 *)(param_1 + 0x78) = 0x40;
  *(undefined1 *)((long)param_1 + 0x403) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)param_1 + 0x3c4) = 0;
  param_1[0x81] = 0xfffe;
  param_1[0x76] = (long)puVar1;
  FUN_0277d4ac(param_1 + 0x81);
  *(undefined4 *)((long)param_1 + 0x44c) = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0;
  *(undefined1 *)((long)param_1 + 0x464) = 0;
  param_1[0x8b] = (long)param_1 + 0x464;
  *(undefined4 *)(param_1 + 0x8c) = 0x40;
  *(undefined1 *)((long)param_1 + 0x4a3) = 0;
  param_1[0x8a] = (long)puVar1;
  param_1[0x95] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x95);
  *(undefined4 *)(param_1 + 0xa0) = 0x40;
  *(undefined4 *)(param_1 + 0x97) = 1;
  *(undefined1 *)((long)param_1 + 0x504) = 0;
  *(undefined8 *)((long)param_1 + 0x4e4) = 0;
  *(undefined4 *)((long)param_1 + 0x4ec) = 0;
  param_1[0x9f] = (long)param_1 + 0x504;
  *(undefined1 *)((long)param_1 + 0x543) = 0;
  param_1[0x9e] = (long)puVar1;
  param_1[0xa9] = 0xfffe;
  FUN_0277d4ac(param_1 + 0xa9);
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xab] = 0x3ee333333e833333;
  param_1[0xac] = 0x13f200000;
  puVar1 = PTR_DAT_04bb7f48;
  param_1[0xb3] = 0;
  *(undefined2 *)(param_1 + 0xb4) = 1;
  param_1[0xaf] = (long)(puVar1 + 0x10);
  param_1[0xb5] = param_8;
  param_1[0xb6] = param_9;
  param_1[0xb8] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0xb9) = 0x7fffffff;
  puVar1 = PTR_DAT_04bbe2e0;
  *(undefined2 *)((long)param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0xfffe;
  param_1[0xb7] = (long)(puVar1 + 0x10);
  FUN_0277d4ac(param_1 + 0xbb);
  param_1[0xbc] = 0xfffe;
  FUN_0277d4ac(param_1 + 0xbc);
  param_1[0xbd] = 0xfffe;
  FUN_0277d4ac(param_1 + 0xbd);
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)((long)param_1 + 0x5f4) = 0xffffffff;
  puVar1 = PTR_DAT_04bb37e0;
  param_1[0xc2] = 0;
  uVar7 = *(undefined2 *)puVar1;
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar4 = *(undefined4 *)(puVar1 + 4);
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0xbf800000;
  *(undefined2 *)((long)param_1 + 0x636) = 0;
  *(undefined4 *)((long)param_1 + 0x5fc) = uVar4;
  *(undefined4 *)((long)param_1 + 0x604) = uVar4;
  *(undefined4 *)((long)param_1 + 0x60c) = uVar4;
  *(undefined2 *)(param_1 + 0xbf) = uVar7;
  *(undefined1 *)((long)param_1 + 0x5fa) = uVar5;
  *(undefined1 *)((long)param_1 + 0x5fb) = uVar6;
  *(undefined2 *)(param_1 + 0xc0) = uVar7;
  *(undefined1 *)((long)param_1 + 0x602) = uVar5;
  *(undefined1 *)((long)param_1 + 0x603) = uVar6;
  *(undefined2 *)(param_1 + 0xc1) = uVar7;
  *(undefined1 *)((long)param_1 + 0x60a) = uVar5;
  *(undefined1 *)((long)param_1 + 0x60b) = uVar6;
  *(undefined8 *)((long)param_1 + 0x62c) = 0;
  lVar10 = *(long *)PTR_DAT_04bb4bc8;
  uVar4 = *(undefined4 *)(PTR_DAT_04bb4bc8 + 8);
  *(undefined4 *)(param_1 + 0x85) = 0xbf800000;
  puVar11 = (undefined8 *)param_1[0x8b];
  *(undefined2 *)((long)param_1 + 0x67a) = 1;
  *(undefined1 *)((long)param_1 + 0x634) = 0;
  *(undefined4 *)((long)param_1 + 0x644) = 0;
  *(undefined4 *)((long)param_1 + 0x654) = 0;
  *(undefined4 *)((long)param_1 + 0x67c) = 0;
  param_1[0x84] = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  *(undefined4 *)((long)param_1 + 0x43c) = 6;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 200) = uVar4;
  *(undefined4 *)(param_1 + 0xca) = uVar4;
  param_1[199] = lVar10;
  param_1[0xc9] = lVar10;
  *(undefined8 *)((long)param_1 + 0x664) = 0;
  *(undefined8 *)((long)param_1 + 0x66c) = 0;
  *(undefined8 *)((long)param_1 + 0x672) = 0;
  if (puVar11 != &DAT_0407ebb1) {
    iVar3 = 0;
    if ((int)param_1[0x8c] < 1) {
      iVar3 = (int)param_1[0x8c] + -1;
    }
    memset(puVar11,0,(long)iVar3);
    *(undefined1 *)((long)puVar11 + (long)iVar3) = 0;
  }
  param_1[0x95] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x95);
  puVar11 = (undefined8 *)param_1[0x9f];
  *(undefined1 *)((long)param_1 + 0x4b2) = 0;
  *(undefined2 *)(param_1 + 0x96) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0xbf800000;
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  *(undefined8 *)((long)param_1 + 0x4d4) = 0;
  *(undefined4 *)((long)param_1 + 0x4dc) = 6;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  if (puVar11 != &DAT_0407ebb1) {
    iVar3 = 0;
    if ((int)param_1[0xa0] < 1) {
      iVar3 = (int)param_1[0xa0] + -1;
    }
    memset(puVar11,0,(long)iVar3);
    *(undefined1 *)((long)puVar11 + (long)iVar3) = 0;
  }
  param_1[0xa9] = 0xfffe;
  plVar2 = param_1 + 0x4f;
  FUN_0277d4ac(param_1 + 0xa9);
  puVar11 = (undefined8 *)param_1[0x77];
  *(undefined4 *)(param_1 + 0x6f) = 0x23;
  *(undefined8 *)((long)param_1 + 0x38c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined1 *)((long)param_1 + 0x552) = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0xbf800000;
  *(undefined4 *)((long)param_1 + 0x39c) = 6;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)((long)param_1 + 0x59e);
  param_1[0x75] = 0;
  if (puVar11 != &DAT_0407ebb1) {
    iVar3 = 0;
    if ((int)param_1[0x78] < 1) {
      iVar3 = (int)param_1[0x78] + -1;
    }
    memset(puVar11,0,(long)iVar3);
    *(undefined1 *)((long)puVar11 + (long)iVar3) = 0;
  }
  param_1[0x81] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x81);
  *(undefined1 *)((long)param_1 + 0x412) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  if (*(int *)(param_1[0x6b] + 0x178) == 1) {
    *(char *)((long)param_1 + 0x59c) = (char)*(undefined4 *)(param_1[0x6b] + 0x17c);
  }
  FUN_03ebac90(plVar2,0x24,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "Act::cWait";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0,&local_70);
  puVar11 = (undefined8 *)param_1[0x55];
  puVar11[2] = FUN_01e4b144;
  puVar11[3] = 0;
  puVar11[4] = FUN_01e4b200;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[6] = &LAB_01e4b540;
  puVar11[7] = 0;
  pcStack_68 = "Act::cWalk";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,1,&local_70);
  puVar11 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar11[4] = &LAB_01e4b6ac;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[2] = &LAB_01e4b544;
  puVar11[3] = 0;
  puVar11[6] = &LAB_01e4b6f8;
  puVar11[7] = 0;
  pcStack_68 = "Act::cRun";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,2,&local_70);
  puVar11 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  puVar11[4] = &LAB_01e4b878;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[2] = &LAB_01e4b710;
  puVar11[3] = 0;
  puVar11[6] = &LAB_01e4b8c4;
  puVar11[7] = 0;
  pcStack_68 = "Act::cDash";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,3,&local_70);
  lVar10 = 0xc0;
  if (*(uint *)(param_1 + 0x54) < 4) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4b8dc;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4ba44;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4ba90;
  puVar11[7] = 0;
  pcStack_68 = "Act::cTurn";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,4,&local_70);
  puVar11 = (undefined8 *)(param_1[0x55] + (ulong)(4 < *(uint *)(param_1 + 0x54)) * 0x100);
  puVar11[4] = &LAB_01e4bb60;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[2] = &LAB_01e4baa8;
  puVar11[3] = 0;
  puVar11[6] = &LAB_01e4be84;
  puVar11[7] = 0;
  pcStack_68 = "Act::cTurnWalk";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,5,&local_70);
  lVar10 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4be8c;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4be90;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4bf04;
  puVar11[7] = 0;
  pcStack_68 = "Act::cTurnRun";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,6,&local_70);
  lVar10 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4bf1c;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4bf20;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4bf94;
  puVar11[7] = 0;
  pcStack_68 = "Act::cTurnDash";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,7,&local_70);
  lVar10 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4bfac;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4bfb0;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4c024;
  puVar11[7] = 0;
  pcStack_68 = "Act::cWalkAutoTurn";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,8,&local_70);
  puVar11 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  puVar11[4] = &LAB_01e4c040;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[2] = &LAB_01e4c03c;
  puVar11[3] = 0;
  puVar11[6] = &LAB_01e4c128;
  puVar11[7] = 0;
  pcStack_68 = "Act::cRunAutoTurn";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,9,&local_70);
  lVar10 = 0x240;
  if (*(uint *)(param_1 + 0x54) < 10) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4c15c;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4c160;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4c248;
  puVar11[7] = 0;
  pcStack_68 = "Act::cDashAutoTurn";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,10,&local_70);
  lVar10 = 0x280;
  if (*(uint *)(param_1 + 0x54) < 0xb) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4c27c;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4c280;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4c368;
  puVar11[7] = 0;
  pcStack_68 = "Act::cFollowAuto";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0xb,&local_70);
  lVar10 = 0x2c0;
  if (*(uint *)(param_1 + 0x54) < 0xc) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4c39c;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4c3a0;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4c3a4;
  puVar11[7] = 0;
  pcStack_68 = "Act::cReaction";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0xc,&local_70);
  lVar10 = 0x300;
  if (*(uint *)(param_1 + 0x54) < 0xd) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4c3b0;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4cb1c;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4ccb0;
  puVar11[7] = 0;
  pcStack_68 = "Act::cSimple";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0xd,&local_70);
  lVar10 = 0x340;
  if (*(uint *)(param_1 + 0x54) < 0xe) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4ce40;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4d000;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4d134;
  puVar11[7] = 0;
  pcStack_68 = "Act::cChangeHandTool";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0xe,&local_70);
  lVar10 = 0x380;
  if (*(uint *)(param_1 + 0x54) < 0xf) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4d188;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4d8cc;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4e7c8;
  puVar11[7] = 0;
  pcStack_68 = "Act::cChangeSmartPhone";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0xf,&local_70);
  lVar10 = 0x3c0;
  if (*(uint *)(param_1 + 0x54) < 0x10) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4e910;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4ecf0;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e4f254;
  puVar11[7] = 0;
  pcStack_68 = "Act::cChangeCloth";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x10,&local_70);
  puVar11 = (undefined8 *)(param_1[0x55] + (ulong)(0x10 < *(uint *)(param_1 + 0x54)) * 0x400);
  puVar11[4] = &LAB_01e4f484;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[2] = &LAB_01e4f258;
  puVar11[3] = 0;
  puVar11[6] = &LAB_01e4f5dc;
  puVar11[7] = 0;
  pcStack_68 = "Act::cStructureIn";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x11,&local_70);
  lVar10 = 0x440;
  if (*(uint *)(param_1 + 0x54) < 0x12) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e4f6c0;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e4f9e0;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e50150;
  puVar11[7] = 0;
  pcStack_68 = "Act::cStructureOut";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x12,&local_70);
  lVar10 = 0x480;
  if (*(uint *)(param_1 + 0x54) < 0x13) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e50540;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e50860;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e51020;
  puVar11[7] = 0;
  pcStack_68 = "Act::cInvisible";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x13,&local_70);
  lVar10 = 0x4c0;
  if (*(uint *)(param_1 + 0x54) < 0x14) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e51410;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e515d0;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e516b0;
  puVar11[7] = 0;
  pcStack_68 = "Act::cSitChair";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x14,&local_70);
  lVar10 = 0x500;
  if (*(uint *)(param_1 + 0x54) < 0x15) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e517cc;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e52164;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e52638;
  puVar11[7] = 0;
  pcStack_68 = "Act::cStandupChair";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x15,&local_70);
  lVar10 = 0x540;
  if (*(uint *)(param_1 + 0x54) < 0x16) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e526e8;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e53458;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e53908;
  puVar11[7] = 0;
  pcStack_68 = "Act::cSitOnGround";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x16,&local_70);
  lVar10 = 0x580;
  if (*(uint *)(param_1 + 0x54) < 0x17) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e539e4;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e53d28;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e53e10;
  puVar11[7] = 0;
  pcStack_68 = "Act::cStandupGround";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x17,&local_70);
  lVar10 = 0x5c0;
  if (*(uint *)(param_1 + 0x54) < 0x18) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e53e58;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e53f70;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e54014;
  puVar11[7] = 0;
  pcStack_68 = "Act::cBedIn";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x18,&local_70);
  lVar10 = 0x600;
  if (*(uint *)(param_1 + 0x54) < 0x19) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e54080;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e54690;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e54944;
  puVar11[7] = 0;
  pcStack_68 = "Act::cBedOut";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x19,&local_70);
  lVar10 = 0x640;
  if (*(uint *)(param_1 + 0x54) < 0x1a) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e54a04;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e55460;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e556ac;
  puVar11[7] = 0;
  pcStack_68 = "Act::cSoundLipSync";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x1a,&local_70);
  lVar10 = 0x680;
  if (*(uint *)(param_1 + 0x54) < 0x1b) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e55780;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e559d8;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e55f08;
  puVar11[7] = 0;
  pcStack_68 = "Act::cMusicScoreSync";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x1b,&local_70);
  lVar10 = 0x6c0;
  if (*(uint *)(param_1 + 0x54) < 0x1c) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e56114;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e562e0;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e5635c;
  puVar11[7] = 0;
  pcStack_68 = "Act::cCountStickLight";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x1c,&local_70);
  lVar10 = 0x700;
  if (*(uint *)(param_1 + 0x54) < 0x1d) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e56360;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e5650c;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e568a4;
  puVar11[7] = 0;
  pcStack_68 = "Act::cStickLightWait";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x1d,&local_70);
  lVar10 = 0x740;
  if (*(uint *)(param_1 + 0x54) < 0x1e) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e56928;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e56ad0;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e56b30;
  puVar11[7] = 0;
  pcStack_68 = "Act::cIdle";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x1e,&local_70);
  lVar10 = 0x780;
  if (*(uint *)(param_1 + 0x54) < 0x1f) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e56b34;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e56b38;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e56b3c;
  puVar11[7] = 0;
  pcStack_68 = "Act::cBackSwim";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x1f,&local_70);
  lVar10 = 0x7c0;
  if (*(uint *)(param_1 + 0x54) < 0x20) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e56b40;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e56c0c;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e56c58;
  puVar11[7] = 0;
  pcStack_68 = "Act::cKppLipSync";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x20,&local_70);
  puVar11 = (undefined8 *)(param_1[0x55] + (ulong)(0x20 < *(uint *)(param_1 + 0x54)) * 0x800);
  puVar11[4] = &LAB_01e56da0;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[2] = &LAB_01e56c74;
  puVar11[3] = 0;
  puVar11[6] = &LAB_01e56e1c;
  puVar11[7] = 0;
  pcStack_68 = "Act::cAppear";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x21,&local_70);
  lVar10 = 0x840;
  if (*(uint *)(param_1 + 0x54) < 0x22) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e56f68;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[4] = &LAB_01e56fd0;
  puVar11[5] = 0;
  puVar11[6] = &LAB_01e57358;
  puVar11[7] = 0;
  pcStack_68 = "Act::cDisappear";
  local_70 = puVar1;
  FUN_03ebaf40(plVar2,0x22,&local_70);
  lVar10 = 0x880;
  if (*(uint *)(param_1 + 0x54) < 0x23) {
    lVar10 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x55] + lVar10);
  puVar11[2] = &LAB_01e573c8;
  puVar11[3] = 0;
  *puVar11 = &PTR_LAB_04a5dcc0;
  puVar11[1] = param_1;
  puVar11[6] = &LAB_01e57480;
  puVar11[7] = 0;
  puVar11[4] = &LAB_01e57400;
  puVar11[5] = 0;
  if ((*(int *)(param_1[0x6b] + 0x178) == 1) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b))
  {
    uVar9 = 0x1e;
    *(undefined4 *)(param_1 + 0x52) = 0x1e;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x52);
  }
  lVar10 = param_1[0x50];
  *(uint *)(param_1 + 0x50) = uVar9;
  uVar4 = *(undefined4 *)((long)param_1 + 0x284);
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  *(int *)(param_1 + 0x51) = (int)lVar10;
  *(undefined4 *)((long)param_1 + 0x28c) = uVar4;
  *(undefined1 *)((long)param_1 + 0x299) = 1;
  if (uVar9 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x54) <= uVar9) {
      uVar9 = 0;
    }
    puVar11 = *(undefined8 **)(param_1[0x55] + (long)(int)uVar9 * 0x40);
    if (puVar11 != (undefined8 *)0x0) {
      (*(code *)*puVar11)();
    }
  }
  return;
}

