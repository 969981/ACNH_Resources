
void FUN_02e411f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  void *pvVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *local_70;
  char *pcStack_68;
  
  param_1[4] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar9 = PTR_DAT_04bd4738;
  *param_1 = &PTR_FUN_04ad4f68;
  *(undefined1 *)(param_1 + 0xe) = 0xff;
  param_1[0x27] = 0;
  plVar14 = param_1 + 1;
  *plVar14 = (long)(puVar9 + 0x10);
  *(undefined8 *)((long)param_1 + 0x16c) = 0x300000000;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined1 *)((long)param_1 + 0x1c4) = 0;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0xffffffff00000000;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 2;
  *(undefined4 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xb;
  *(undefined1 *)((long)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0x40;
  *(undefined1 *)((long)param_1 + 0x203) = 0;
  param_1[9] = 0;
  param_1[10] = &PTR_LAB_04ad4f88;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  param_1[0x42] = (long)param_1 + 0x21c;
  *(undefined4 *)(param_1 + 0x43) = 0x40;
  *(undefined1 *)((long)param_1 + 0x25b) = 0;
  *(undefined1 *)((long)param_1 + 0x21c) = 0;
  param_1[0x36] = puVar1;
  param_1[0x37] = (undefined1 *)((long)param_1 + 0x1c4);
  puVar2 = PTR_DAT_04bb5128 + 0x10;
  param_1[0x41] = puVar1;
  *(undefined8 *)((long)param_1 + 0x26e) = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x30] = puVar2;
  param_1[0x31] = param_1 + 0x4c;
  uVar19 = (long)param_1 + 0x276U;
  if ((long)param_1 + 0x276U <= (long)param_1 + 0x262U) {
    uVar19 = (long)param_1 + 0x262U;
  }
  memset(param_1 + 0x4c,0,((uVar19 - (long)(param_1 + 0x30)) - 0xe1 & 0xfffffffffffffffe) + 2);
  *(undefined4 *)(param_1 + 0x4f) = 2;
  FUN_0082b014(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x53) = 0;
  puVar1 = PTR_DAT_04bb3170;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  param_1[0x52] = 0;
  *(undefined2 *)((long)param_1 + 0x2cc) = 0;
  param_1[0x51] = 0;
  uVar5 = *(undefined2 *)puVar1;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((long)param_1 + 0x2a4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined2 *)((long)param_1 + 0x2b4) = 0x100;
  param_1[0x58] = (undefined2 *)((long)param_1 + 0x2cc);
  *(undefined2 *)((long)param_1 + 0x29a) = uVar5;
  *(undefined4 *)(param_1 + 0x59) = 0x21;
  puVar1 = PTR_DAT_04bc1428 + 0x10;
  *(undefined2 *)((long)param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((long)param_1 + 0x314) = 0;
  param_1[10] = &PTR_LAB_04ad4f88;
  param_1[0x57] = puVar1;
  FUN_03ebac90(plVar14,0x10,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "State::cSleep";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,0,&local_70);
  puVar15 = (undefined8 *)param_1[7];
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar15[4] = &LAB_02e42808;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cCheckPOPID";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,1,&local_70);
  puVar15 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar15[2] = &LAB_02e4280c;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e42828;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cPreAppear";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,2,&local_70);
  puVar15 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar15[2] = &LAB_02e428c4;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e42944;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cIdle";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,3,&local_70);
  lVar17 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar15[4] = &LAB_02e42a6c;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cFriendReq";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,4,&local_70);
  puVar15 = (undefined8 *)(param_1[7] + (ulong)(4 < *(uint *)(param_1 + 6)) * 0x100);
  puVar15[2] = &LAB_02e42ae8;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e42b18;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cFriendOption";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,5,&local_70);
  lVar17 = 0x140;
  if (*(uint *)(param_1 + 6) < 6) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  puVar15[2] = &LAB_02e42bf4;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e42c28;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cBestFriendReq";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,6,&local_70);
  lVar17 = 0x180;
  if (*(uint *)(param_1 + 6) < 7) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  puVar15[2] = &LAB_02e42d04;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e42e28;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cBestFriendApprove";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,7,&local_70);
  lVar17 = 0x1c0;
  if (*(uint *)(param_1 + 6) < 8) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  puVar15[2] = &LAB_02e42f0c;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e42f3c;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cBestFriendCancel";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,8,&local_70);
  puVar15 = (undefined8 *)(param_1[7] + (ulong)(8 < *(uint *)(param_1 + 6)) * 0x200);
  puVar15[2] = &LAB_02e43020;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e43054;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cBestFriendReject";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,9,&local_70);
  lVar17 = 0x240;
  if (*(uint *)(param_1 + 6) < 10) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  puVar15[2] = &LAB_02e43138;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e4316c;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cDeleteBestFriend";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,10,&local_70);
  lVar17 = 0x280;
  if (*(uint *)(param_1 + 6) < 0xb) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  puVar15[2] = &LAB_02e43250;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e43374;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cUpdateList";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,0xb,&local_70);
  lVar17 = 0x2c0;
  if (*(uint *)(param_1 + 6) < 0xc) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  puVar15[2] = &LAB_02e43458;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e434ec;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cChangeCommunicationEnable";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,0xc,&local_70);
  lVar17 = 0x300;
  if (*(uint *)(param_1 + 6) < 0xd) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  puVar15[2] = &LAB_02e435c8;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e4363c;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cSendMessageSingle";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,0xd,&local_70);
  lVar17 = 0x340;
  if (*(uint *)(param_1 + 6) < 0xe) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  puVar15[2] = &LAB_02e43720;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e43834;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cSendMessageAll";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,0xe,&local_70);
  lVar17 = 0x380;
  if (*(uint *)(param_1 + 6) < 0xf) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  puVar15[2] = &LAB_02e438e0;
  puVar15[3] = 0;
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[4] = &LAB_02e439e8;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  pcStack_68 = "State::cHelperRegistDummyFriend";
  local_70 = puVar1;
  FUN_03ebaf40(plVar14,0xf,&local_70);
  lVar17 = 0x3c0;
  if (*(uint *)(param_1 + 6) < 0x10) {
    lVar17 = 0;
  }
  puVar15 = (undefined8 *)(param_1[7] + lVar17);
  *puVar15 = &PTR_LAB_04ad4fb0;
  puVar15[1] = param_1;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar15[4] = &LAB_02e42808;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  plVar14 = (long *)PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    plVar11 = malloc(0x88);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar15 = (undefined8 *)(lVar17 + 8);
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x88,8);
  }
  puVar7 = PTR_DAT_04bb5128;
  puVar2 = PTR_DAT_04bb3170;
  plVar11[4] = 0xffffffff;
  plVar11[2] = 0xffffffff;
  plVar11[3] = 0xffffffff;
  *(undefined2 *)(plVar11 + 5) = 0;
  *(undefined4 *)(plVar11 + 6) = 0;
  plVar11[7] = 0;
  *(undefined4 *)(plVar11 + 8) = 0;
  plVar11[9] = 0;
  *(undefined1 *)(plVar11 + 10) = 0xff;
  plVar11[0xd] = 0;
  *(undefined1 *)(plVar11 + 0xe) = 0;
  *(undefined4 *)(plVar11 + 0xf) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x7c) = 0;
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *plVar11 = (long)(PTR_DAT_04bc6c68 + 0x10);
  plVar11[1] = (long)(puVar9 + 0x10);
  *(undefined1 *)((long)plVar11 + 0x81) = 1;
  param_1[0xf] = plVar11;
  FUN_02e3da20();
  lVar17 = *(long *)puVar1;
  if (lVar17 == 0) {
    plVar11 = malloc(0x88);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    puVar15 = (undefined8 *)(lVar17 + 8);
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x88,8);
  }
  puVar6 = PTR_DAT_04bb2bc0;
  plVar11[2] = 0xffffffff;
  plVar11[3] = 0xffffffff;
  plVar11[4] = 0xffffffff;
  *(undefined2 *)(plVar11 + 5) = 0;
  *(undefined4 *)(plVar11 + 6) = 0;
  plVar11[7] = 0;
  *(undefined4 *)(plVar11 + 8) = 0;
  plVar11[9] = 0;
  *(undefined1 *)(plVar11 + 10) = 0xff;
  plVar11[0xd] = 0;
  *(undefined1 *)(plVar11 + 0xe) = 0;
  *(undefined4 *)(plVar11 + 0xf) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x7c) = 0;
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *plVar11 = (long)(PTR_DAT_04bc6c88 + 0x10);
  plVar11[1] = (long)(puVar9 + 0x10);
  param_1[0x10] = plVar11;
  FUN_02e3da20();
  lVar17 = *(long *)puVar1;
  if (lVar17 == 0) {
    plVar11 = malloc(0x2d0);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar11 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x2d0,8);
    }
  }
  plVar11[2] = 0xffffffff;
  plVar11[3] = 0xffffffff;
  plVar11[4] = 0xffffffff;
  *(undefined2 *)(plVar11 + 5) = 0;
  *(undefined4 *)(plVar11 + 6) = 0;
  plVar11[7] = 0;
  *(undefined4 *)(plVar11 + 8) = 0;
  plVar11[9] = 0;
  *(undefined1 *)(plVar11 + 10) = 0xff;
  plVar11[0xd] = 0;
  *(undefined1 *)(plVar11 + 0xe) = 0;
  *(undefined4 *)(plVar11 + 0xf) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x7c) = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  puVar1 = PTR_DAT_04bc6c80 + 0x10;
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar11[0x11] = (long)(PTR_DAT_04bd4720 + 0x10);
  puVar8 = PTR_LAB_04bd4718;
  plVar11[0x2c] = 0;
  plVar11[0x14] = 0;
  *(undefined4 *)(plVar11 + 0x15) = 0;
  plVar11[0x2a] = 0;
  *(undefined4 *)(plVar11 + 0x2b) = 0;
  *(undefined1 *)(plVar11 + 0x2f) = 2;
  *(undefined4 *)((long)plVar11 + 0x174) = 0;
  *(undefined4 *)(plVar11 + 0x34) = 0;
  *(undefined1 *)((long)plVar11 + 0x1bc) = 0;
  *(undefined4 *)(plVar11 + 0x3a) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x22b) = 0;
  *(undefined1 *)((long)plVar11 + 0x283) = 0;
  plVar11[0x46] = (long)(puVar6 + 0x10);
  plVar11[0x51] = 0;
  plVar11[0x52] = 0;
  plVar11[0x12] = (long)(plVar11 + 0x11);
  plVar11[0x13] = (long)puVar8;
  *(undefined4 *)(plVar11 + 0x37) = 0xb;
  *(undefined4 *)(plVar11 + 0x3d) = 0x40;
  *(undefined4 *)(plVar11 + 0x48) = 0x40;
  *plVar11 = (long)puVar1;
  plVar11[1] = (long)(puVar9 + 0x10);
  *(undefined8 *)((long)plVar11 + 0x164) = 0;
  *(undefined8 *)((long)plVar11 + 0x16c) = 0;
  *(undefined8 *)((long)plVar11 + 0x17c) = 0;
  *(undefined8 *)((long)plVar11 + 0x184) = 0;
  *(undefined8 *)((long)plVar11 + 0x18c) = 0;
  *(undefined8 *)((long)plVar11 + 0x194) = 0x300000000;
  *(undefined1 *)((long)plVar11 + 0x1ec) = 0;
  *(undefined8 *)((long)plVar11 + 0x296) = 0;
  plVar11[0x38] = 0xffffffff;
  plVar11[0x39] = -0x100000000;
  plVar11[0x3b] = (long)(puVar6 + 0x10);
  plVar11[0x3c] = (long)plVar11 + 0x1ec;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  *(undefined1 *)((long)plVar11 + 0x244) = 0;
  plVar11[0x47] = (long)plVar11 + 0x244;
  plVar11[0x35] = (long)(puVar7 + 0x10);
  plVar11[0x36] = (long)(plVar11 + 0x51);
  uVar19 = (long)plVar11 + 0x29eU;
  if ((long)plVar11 + 0x29eU <= (long)plVar11 + 0x28aU) {
    uVar19 = (long)plVar11 + 0x28aU;
  }
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[0x20] = 0;
  plVar11[0x21] = 0;
  plVar11[0x22] = 0;
  plVar11[0x23] = 0;
  plVar11[0x24] = 0;
  plVar11[0x25] = 0;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x28] = 0;
  plVar11[0x29] = 0;
  memset(plVar11 + 0x51,0,((uVar19 - (long)(plVar11 + 0x35)) - 0xe1 & 0xfffffffffffffffe) + 2);
  *(undefined4 *)(plVar11 + 0x54) = 2;
  FUN_0082b014(plVar11 + 0x35);
  uVar5 = *(undefined2 *)puVar2;
  *(undefined1 *)(plVar11 + 0x58) = 0;
  plVar11[0x57] = 0;
  plVar11[0x56] = 0;
  plVar11[0x55] = 0;
  *(undefined1 *)(plVar11 + 0x59) = 0;
  *(undefined2 *)((long)plVar11 + 0x2c2) = uVar5;
  param_1[0x11] = plVar11;
  FUN_02e3da20(plVar11);
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    plVar11 = malloc(0x1f8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar11 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x1f8,8);
    }
  }
  plVar11[2] = 0xffffffff;
  plVar11[3] = 0xffffffff;
  plVar11[4] = 0xffffffff;
  *(undefined2 *)(plVar11 + 5) = 0;
  *(undefined4 *)(plVar11 + 6) = 0;
  plVar11[7] = 0;
  *(undefined4 *)(plVar11 + 8) = 0;
  plVar11[9] = 0;
  *(undefined1 *)(plVar11 + 10) = 0xff;
  plVar11[0xd] = 0;
  *(undefined1 *)(plVar11 + 0xe) = 0;
  *(undefined4 *)(plVar11 + 0xf) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x7c) = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  puVar1 = PTR_DAT_04bc6c40 + 0x10;
  *(undefined1 *)(plVar11 + 0x10) = 0;
  *(undefined1 *)(plVar11 + 0x14) = 2;
  plVar11[0x11] = 0;
  *(undefined1 *)((long)plVar11 + 0x114) = 0;
  *(undefined8 *)((long)plVar11 + 0x94) = 0;
  *(undefined4 *)((long)plVar11 + 0x9c) = 0;
  plVar12 = plVar11 + 0x1a;
  *plVar12 = (long)(puVar7 + 0x10);
  *(undefined8 *)((long)plVar11 + 0x8c) = 0;
  *(undefined8 *)((long)plVar11 + 0xa4) = 0;
  *(undefined8 *)((long)plVar11 + 0xac) = 0;
  *(undefined8 *)((long)plVar11 + 0xb4) = 0;
  plVar11[0x1b] = (long)(plVar11 + 0x36);
  *(undefined1 *)((long)plVar11 + 0xe4) = 0;
  *(undefined4 *)(plVar11 + 0x1f) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x22) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x153) = 0;
  *(undefined4 *)(plVar11 + 0x2d) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x1ab) = 0;
  *plVar11 = (long)puVar1;
  plVar11[1] = (long)(puVar9 + 0x10);
  *(undefined4 *)(plVar11 + 0x1c) = 0xb;
  *(undefined8 *)((long)plVar11 + 0xbc) = 0x300000000;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  *(undefined8 *)((long)plVar11 + 0x1be) = 0;
  plVar11[0x1d] = 0xffffffff;
  plVar11[0x1e] = -0x100000000;
  plVar11[0x20] = (long)(puVar6 + 0x10);
  plVar11[0x21] = (long)plVar11 + 0x114;
  plVar11[0x36] = 0;
  plVar11[0x37] = 0;
  *(undefined1 *)((long)plVar11 + 0x16c) = 0;
  plVar11[0x2b] = (long)(puVar6 + 0x10);
  plVar11[0x2c] = (long)plVar11 + 0x16c;
  uVar19 = (long)plVar11 + 0x1c6U;
  if ((long)plVar11 + 0x1c6U <= (long)plVar11 + 0x1b2U) {
    uVar19 = (long)plVar11 + 0x1b2U;
  }
  memset(plVar11 + 0x36,0,((uVar19 - (long)plVar12) - 0xe1 & 0xfffffffffffffffe) + 2);
  *(undefined4 *)(plVar11 + 0x39) = 2;
  FUN_0082b014(plVar12);
  uVar5 = *(undefined2 *)puVar2;
  *(undefined1 *)(plVar11 + 0x3d) = 0;
  plVar11[0x3b] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3e) = 0xffffffff;
  *(undefined2 *)((long)plVar11 + 500) = 0;
  *(undefined2 *)((long)plVar11 + 0x1ea) = uVar5;
  param_1[0x12] = plVar11;
  FUN_02e3da20(plVar11);
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    plVar11 = malloc(0x1f8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar11 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x1f8,8);
    }
  }
  plVar11[2] = 0xffffffff;
  plVar11[3] = 0xffffffff;
  plVar11[4] = 0xffffffff;
  *(undefined2 *)(plVar11 + 5) = 0;
  *(undefined4 *)(plVar11 + 6) = 0;
  plVar11[7] = 0;
  *(undefined4 *)(plVar11 + 8) = 0;
  plVar11[9] = 0;
  *(undefined1 *)(plVar11 + 10) = 0xff;
  plVar11[0xd] = 0;
  *(undefined1 *)(plVar11 + 0xe) = 0;
  *(undefined4 *)(plVar11 + 0xf) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x7c) = 0;
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  puVar1 = PTR_DAT_04bc6c50 + 0x10;
  *(undefined4 *)(plVar11 + 0x1c) = 0xb;
  plVar12 = plVar11 + 0x1a;
  *plVar12 = (long)(puVar7 + 0x10);
  *(undefined4 *)((long)plVar11 + 0x84) = 0;
  *(undefined1 *)(plVar11 + 0x14) = 2;
  *(undefined8 *)((long)plVar11 + 0xa4) = 0;
  *(undefined8 *)((long)plVar11 + 0xac) = 0;
  *(undefined8 *)((long)plVar11 + 0xb4) = 0;
  plVar11[0x1b] = (long)(plVar11 + 0x36);
  *(undefined1 *)((long)plVar11 + 0xe4) = 0;
  *(undefined4 *)(plVar11 + 0x1f) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x22) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x153) = 0;
  *(undefined4 *)(plVar11 + 0x2d) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x1ab) = 0;
  *plVar11 = (long)puVar1;
  plVar11[1] = (long)(puVar9 + 0x10);
  *(undefined8 *)((long)plVar11 + 0xbc) = 0x300000000;
  plVar11[0x1d] = 0xffffffff;
  plVar11[0x1e] = -0x100000000;
  plVar11[0x11] = 0;
  *(undefined1 *)((long)plVar11 + 0x114) = 0;
  *(undefined8 *)((long)plVar11 + 0x94) = 0;
  *(undefined1 *)((long)plVar11 + 0x16c) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  *(undefined4 *)((long)plVar11 + 0x9c) = 0;
  *(undefined8 *)((long)plVar11 + 0x8c) = 0;
  *(undefined8 *)((long)plVar11 + 0x1be) = 0;
  plVar11[0x20] = (long)(puVar6 + 0x10);
  plVar11[0x21] = (long)plVar11 + 0x114;
  plVar11[0x2b] = (long)(puVar6 + 0x10);
  plVar11[0x2c] = (long)plVar11 + 0x16c;
  uVar19 = (long)plVar11 + 0x1c6U;
  if ((long)plVar11 + 0x1c6U <= (long)plVar11 + 0x1b2U) {
    uVar19 = (long)plVar11 + 0x1b2U;
  }
  plVar11[0x36] = 0;
  plVar11[0x37] = 0;
  memset(plVar11 + 0x36,0,((uVar19 - (long)plVar12) - 0xe1 & 0xfffffffffffffffe) + 2);
  *(undefined4 *)(plVar11 + 0x39) = 2;
  FUN_0082b014(plVar12);
  uVar5 = *(undefined2 *)puVar2;
  *(undefined1 *)(plVar11 + 0x3d) = 0;
  plVar11[0x3b] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3e) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 500) = 0;
  *(undefined2 *)((long)plVar11 + 0x1ea) = uVar5;
  param_1[0x13] = plVar11;
  FUN_02e3da20(plVar11);
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    plVar11 = malloc(0x1f8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar11 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x1f8,8);
    }
  }
  plVar11[2] = 0xffffffff;
  plVar11[3] = 0xffffffff;
  plVar11[4] = 0xffffffff;
  *(undefined2 *)(plVar11 + 5) = 0;
  *(undefined4 *)(plVar11 + 6) = 0;
  plVar11[7] = 0;
  *(undefined4 *)(plVar11 + 8) = 0;
  plVar11[9] = 0;
  *(undefined1 *)(plVar11 + 10) = 0xff;
  plVar11[0xd] = 0;
  *(undefined1 *)(plVar11 + 0xe) = 0;
  *(undefined4 *)(plVar11 + 0xf) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x7c) = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  puVar1 = PTR_DAT_04bc6c70 + 0x10;
  *(undefined1 *)(plVar11 + 0x10) = 0;
  *(undefined1 *)(plVar11 + 0x14) = 2;
  plVar11[0x11] = 0;
  *(undefined1 *)((long)plVar11 + 0x114) = 0;
  *(undefined8 *)((long)plVar11 + 0x94) = 0;
  *(undefined4 *)((long)plVar11 + 0x9c) = 0;
  plVar12 = plVar11 + 0x1a;
  *plVar12 = (long)(puVar7 + 0x10);
  *(undefined8 *)((long)plVar11 + 0x8c) = 0;
  *(undefined8 *)((long)plVar11 + 0xa4) = 0;
  *(undefined8 *)((long)plVar11 + 0xac) = 0;
  *(undefined8 *)((long)plVar11 + 0xb4) = 0;
  plVar11[0x1b] = (long)(plVar11 + 0x36);
  *(undefined1 *)((long)plVar11 + 0xe4) = 0;
  *(undefined4 *)(plVar11 + 0x1f) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x22) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x153) = 0;
  *(undefined4 *)(plVar11 + 0x2d) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x1ab) = 0;
  *plVar11 = (long)puVar1;
  plVar11[1] = (long)(puVar9 + 0x10);
  *(undefined4 *)(plVar11 + 0x1c) = 0xb;
  *(undefined8 *)((long)plVar11 + 0xbc) = 0x300000000;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  *(undefined8 *)((long)plVar11 + 0x1be) = 0;
  plVar11[0x1d] = 0xffffffff;
  plVar11[0x1e] = -0x100000000;
  plVar11[0x20] = (long)(puVar6 + 0x10);
  plVar11[0x21] = (long)plVar11 + 0x114;
  plVar11[0x36] = 0;
  plVar11[0x37] = 0;
  *(undefined1 *)((long)plVar11 + 0x16c) = 0;
  plVar11[0x2b] = (long)(puVar6 + 0x10);
  plVar11[0x2c] = (long)plVar11 + 0x16c;
  uVar19 = (long)plVar11 + 0x1c6U;
  if ((long)plVar11 + 0x1c6U <= (long)plVar11 + 0x1b2U) {
    uVar19 = (long)plVar11 + 0x1b2U;
  }
  memset(plVar11 + 0x36,0,((uVar19 - (long)plVar12) - 0xe1 & 0xfffffffffffffffe) + 2);
  *(undefined4 *)(plVar11 + 0x39) = 2;
  FUN_0082b014(plVar12);
  uVar5 = *(undefined2 *)puVar2;
  *(undefined1 *)(plVar11 + 0x3d) = 0;
  plVar11[0x3b] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3e) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 500) = 0;
  *(undefined2 *)((long)plVar11 + 0x1ea) = uVar5;
  param_1[0x14] = plVar11;
  FUN_02e3da20(plVar11);
  plVar11 = (long *)PTR_DAT_04bb2698;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    plVar12 = malloc(0x88);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    puVar15 = (undefined8 *)(lVar17 + 8);
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x88,8);
  }
  plVar12[2] = 0xffffffff;
  plVar12[3] = 0xffffffff;
  plVar12[4] = 0xffffffff;
  *(undefined2 *)(plVar12 + 5) = 0;
  *(undefined4 *)(plVar12 + 6) = 0;
  plVar12[7] = 0;
  *(undefined4 *)(plVar12 + 8) = 0;
  plVar12[9] = 0;
  *(undefined1 *)(plVar12 + 10) = 0xff;
  plVar12[0xd] = 0;
  *(undefined1 *)(plVar12 + 0xe) = 0;
  *(undefined4 *)(plVar12 + 0xf) = 0xffffffff;
  *(undefined1 *)((long)plVar12 + 0x7c) = 0;
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *plVar12 = (long)(PTR_DAT_04bc6c98 + 0x10);
  plVar12[1] = (long)(puVar9 + 0x10);
  *(undefined1 *)((long)plVar12 + 0x81) = 1;
  param_1[0x15] = plVar12;
  FUN_02e3da20();
  lVar17 = *plVar11;
  if (lVar17 == 0) {
    plVar12 = malloc(0x88);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    puVar15 = (undefined8 *)(lVar17 + 8);
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x88,8);
  }
  plVar12[2] = 0xffffffff;
  plVar12[3] = 0xffffffff;
  plVar12[4] = 0xffffffff;
  *(undefined2 *)(plVar12 + 5) = 0;
  *(undefined4 *)(plVar12 + 6) = 0;
  plVar12[7] = 0;
  *(undefined4 *)(plVar12 + 8) = 0;
  plVar12[9] = 0;
  *(undefined1 *)(plVar12 + 10) = 0xff;
  plVar12[0xd] = 0;
  *(undefined1 *)(plVar12 + 0xe) = 0;
  *(undefined4 *)(plVar12 + 0xf) = 0xffffffff;
  *(undefined1 *)((long)plVar12 + 0x7c) = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  puVar1 = PTR_DAT_04bc6c58 + 0x10;
  *(undefined2 *)(plVar12 + 0x10) = 0;
  *plVar12 = (long)puVar1;
  plVar12[1] = (long)(puVar9 + 0x10);
  param_1[0x16] = plVar12;
  FUN_02e3da20();
  lVar17 = *plVar11;
  if (lVar17 == 0) {
    plVar12 = malloc(0xe8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    puVar15 = (undefined8 *)(lVar17 + 8);
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0xe8,8);
  }
  puVar1 = PTR_DAT_04bc1428;
  plVar12[2] = 0xffffffff;
  plVar12[3] = 0xffffffff;
  plVar12[4] = 0xffffffff;
  *(undefined2 *)(plVar12 + 5) = 0;
  *(undefined4 *)(plVar12 + 6) = 0;
  plVar12[7] = 0;
  *(undefined4 *)(plVar12 + 8) = 0;
  plVar12[9] = 0;
  *(undefined1 *)(plVar12 + 10) = 0xff;
  plVar12[0xd] = 0;
  *(undefined1 *)(plVar12 + 0xe) = 0;
  *(undefined4 *)(plVar12 + 0xf) = 0xffffffff;
  *(undefined1 *)((long)plVar12 + 0x7c) = 0;
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *plVar12 = (long)(PTR_DAT_04bc6c90 + 0x10);
  plVar12[1] = (long)(puVar9 + 0x10);
  plVar12[0x13] = (long)plVar12 + 0xa4;
  plVar12[0x14] = 0;
  *(undefined4 *)(plVar12 + 0x14) = 0x21;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x11] = 0;
  plVar12[0x12] = (long)(puVar1 + 0x10);
  param_1[0x17] = plVar12;
  FUN_02e3da20();
  lVar17 = *plVar11;
  if (lVar17 == 0) {
    puVar15 = malloc(0x23288);
joined_r0x02e423f0:
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = 400;
      uVar19 = (long)puVar15 + 0x146;
      uVar18 = (long)puVar15 + 0x132;
      lVar17 = -0x131 - (long)puVar15;
      puVar16 = puVar15 + 1;
      do {
        *puVar16 = 0;
        *(undefined8 *)((long)puVar16 + 0x34) = 0x300000000;
        uVar3 = uVar19;
        if (uVar19 <= uVar18) {
          uVar3 = uVar18;
        }
        *(undefined4 *)(puVar16 + 0xb) = 0xb;
        puVar16[0xc] = 0xffffffff;
        puVar16[0xd] = 0xffffffff00000000;
        *(undefined1 *)(puVar16 + 3) = 2;
        *(undefined8 *)((long)puVar16 + 0xc) = 0;
        *(undefined4 *)((long)puVar16 + 0x14) = 0;
        *(undefined8 *)((long)puVar16 + 4) = 0;
        *(undefined8 *)((long)puVar16 + 0x1c) = 0;
        *(undefined8 *)((long)puVar16 + 0x24) = 0;
        *(undefined8 *)((long)puVar16 + 0x2c) = 0;
        *(undefined4 *)(puVar16 + 8) = 0;
        puVar16[10] = puVar16 + 0x25;
        *(undefined1 *)((long)puVar16 + 0x5c) = 0;
        *(undefined4 *)(puVar16 + 0xe) = 0xffffffff;
        puVar16[0x10] = (long)puVar16 + 0x8c;
        *(undefined4 *)(puVar16 + 0x11) = 0x40;
        *(undefined1 *)((long)puVar16 + 0xcb) = 0;
        *(undefined1 *)((long)puVar16 + 0x8c) = 0;
        *(undefined1 *)((long)puVar16 + 0xe4) = 0;
        puVar16[0x25] = 0;
        puVar16[0xf] = puVar6 + 0x10;
        puVar16[0x1b] = (undefined1 *)((long)puVar16 + 0xe4);
        *(undefined4 *)(puVar16 + 0x1c) = 0x40;
        *(undefined1 *)((long)puVar16 + 0x123) = 0;
        puVar16[0x1a] = puVar6 + 0x10;
        puVar16[9] = puVar7 + 0x10;
        *(undefined8 *)((long)puVar16 + 0x136) = 0;
        puVar16[0x26] = 0;
        memset(puVar16 + 0x25,0,(uVar3 + lVar17 & 0xfffffffffffffffe) + 2);
        *(undefined4 *)(puVar16 + 0x28) = 2;
        FUN_0082b014(puVar16 + 9);
        *(undefined1 *)(puVar16 + 0x2c) = 0;
        uVar19 = uVar19 + 0x168;
        puVar16[0x2b] = 0;
        uVar18 = uVar18 + 0x168;
        lVar17 = lVar17 + -0x168;
        puVar16[0x2a] = 0;
        puVar16[0x29] = 0;
        *(undefined2 *)((long)puVar16 + 0x162) = *(undefined2 *)PTR_DAT_04bb3170;
        puVar16 = puVar16 + 0x2d;
      } while (puVar16 != puVar15 + 0x4651);
      *(undefined4 *)(param_1 + 0x18) = 400;
      param_1[0x19] = puVar15 + 1;
      plVar11 = (long *)PTR_DAT_04bb2698;
      plVar14 = (long *)PTR_DAT_04bb3350;
    }
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar12 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar12 = (long *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      puVar15 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x23288,8);
      goto joined_r0x02e423f0;
    }
  }
  lVar17 = *plVar11;
  if (lVar17 == 0) {
    pvVar13 = malloc(0xc80);
joined_r0x02e427b0:
    if (pvVar13 != (void *)0x0) {
      param_1[0x1a] = 0x19000000000;
      param_1[0x1b] = pvVar13;
    }
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar12 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar12 = (long *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0xc80,8);
      goto joined_r0x02e427b0;
    }
  }
  lVar17 = *plVar11;
  if (lVar17 == 0) {
    pvVar13 = malloc(0xc80);
joined_r0x02e427c0:
    if (pvVar13 != (void *)0x0) {
      param_1[0x1c] = 0x19000000000;
      param_1[0x1d] = pvVar13;
    }
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar12 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar12 = (long *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0xc80,8);
      goto joined_r0x02e427c0;
    }
  }
  lVar17 = *plVar11;
  if (lVar17 == 0) {
    pvVar13 = malloc(0xc80);
joined_r0x02e427d0:
    if (pvVar13 != (void *)0x0) {
      param_1[0x1e] = 0x19000000000;
      param_1[0x1f] = pvVar13;
    }
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar12 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar12 = (long *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0xc80,8);
      goto joined_r0x02e427d0;
    }
  }
  lVar17 = *plVar11;
  if (lVar17 == 0) {
    pvVar13 = malloc(0xc80);
joined_r0x02e427e0:
    if (pvVar13 != (void *)0x0) {
      param_1[0x20] = 0x19000000000;
      param_1[0x21] = pvVar13;
    }
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar12 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar12 = (long *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0xc80,8);
      goto joined_r0x02e427e0;
    }
  }
  lVar17 = *plVar11;
  if (lVar17 == 0) {
    pvVar13 = malloc(0xc80);
joined_r0x02e427f0:
    if (pvVar13 != (void *)0x0) {
      param_1[0x22] = 0x19000000000;
      param_1[0x23] = pvVar13;
    }
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar12 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar12 = (long *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0xc80,8);
      goto joined_r0x02e427f0;
    }
  }
  lVar17 = *plVar11;
  if (lVar17 == 0) {
    pvVar13 = malloc(0xc80);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar14 + 0x68));
    plVar14 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      plVar14 = (long *)(lVar10 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02e42724;
    pvVar13 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0xc80,8);
  }
  if (pvVar13 != (void *)0x0) {
    param_1[0x25] = pvVar13;
    *(undefined4 *)((long)param_1 + 0x124) = 400;
  }
LAB_02e42724:
  uVar4 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(uint *)(param_1 + 2) = uVar4;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 6) <= uVar4) {
      uVar4 = 0;
    }
    puVar15 = *(undefined8 **)(param_1[7] + (long)(int)uVar4 * 0x40);
    if (puVar15 != (undefined8 *)0x0) {
      (*(code *)*puVar15)();
    }
  }
  return;
}

