
/* WARNING: Removing unreachable block (ram,0x01c9da84) */
/* WARNING: Removing unreachable block (ram,0x01c9dd10) */

void FUN_01c9cc70(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined *local_60;
  char *pcStack_58;
  
  puVar2 = PTR_DAT_04bb2020;
  lVar24 = 1;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "NetSystemMgr";
  lVar11 = FUN_038c6d48(0x240000,&local_60,param_2,8,1,0);
  *(long *)(param_1 + 8) = lVar11;
  puVar7 = PTR_DAT_04bb3350;
  if (lVar11 != 0) {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar24 = *(long *)(lVar12 + 0xa8);
    *(long *)(lVar12 + 0xa8) = lVar11;
  }
  puVar6 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar14 = malloc(0x100);
    if (pvVar14 == (void *)0x0) goto LAB_01c9cd58;
LAB_01c9cd3c:
    iVar10 = 0x40;
    *(void **)(param_1 + 0x2088) = pvVar14;
    *(undefined4 *)(param_1 + 0x2080) = 0x40;
LAB_01c9cd64:
    uVar18 = 0;
    uVar21 = 0x58f9a90d;
    uVar22 = 0xf329d9ad;
    uVar19 = 0x781bcdc;
    uVar20 = 0x9df24013;
    do {
      uVar21 = uVar21 ^ uVar21 << 0xb;
      uVar4 = uVar18 << 2;
      uVar5 = uVar18 >> 0x1f;
      uVar3 = uVar20 >> 0x13 ^ uVar21 >> 8 ^ uVar20 ^ uVar21;
      uVar1 = uVar18 + 1;
      uVar18 = uVar1 & 0xffffffff;
      *(uint *)((long)pvVar14 + (-uVar5 & 0xfffffffc00000000 | uVar4)) = uVar3;
      uVar21 = uVar22;
      uVar22 = uVar19;
      uVar19 = uVar20;
      uVar20 = uVar3;
    } while (iVar10 != (int)uVar1);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    plVar13 = (long *)(lVar11 + 8);
    if (lVar12 != 0) {
      plVar13 = (long *)(lVar12 + 0xa8);
    }
    plVar13 = (long *)*plVar13;
    if ((plVar13 != (long *)0x0) &&
       (pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x100,8), pvVar14 != (void *)0x0))
    goto LAB_01c9cd3c;
LAB_01c9cd58:
    iVar10 = *(int *)(param_1 + 0x2080);
    if (iVar10 != 0) {
      pvVar14 = *(void **)(param_1 + 0x2088);
      goto LAB_01c9cd64;
    }
  }
  lVar11 = *(long *)puVar6;
  if (lVar11 == 0) {
    plVar13 = malloc(0x28);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    puVar17 = (undefined8 *)(lVar11 + 8);
    if (lVar12 != 0) {
      puVar17 = (undefined8 *)(lVar12 + 0xa8);
    }
    plVar13 = (long *)(**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,0x28,8);
  }
  puVar9 = PTR_DAT_04bd4730;
  puVar8 = PTR_FUN_04bd4728;
  *(undefined4 *)(plVar13 + 4) = 0;
  plVar13[2] = (long)puVar8;
  plVar13[3] = 0;
  *plVar13 = (long)(puVar9 + 0x10);
  plVar13[1] = (long)plVar13;
  lVar11 = *(long *)puVar6;
  *(undefined2 *)((long)plVar13 + 0x24) = 1;
  *(long **)(param_1 + 0x10) = plVar13;
  if (lVar11 == 0) {
    puVar15 = malloc(0x28);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    plVar13 = (long *)(lVar11 + 8);
    if (lVar12 != 0) {
      plVar13 = (long *)(lVar12 + 0xa8);
    }
    plVar13 = (long *)*plVar13;
    puVar15 = (undefined4 *)0x0;
    if (plVar13 != (long *)0x0) {
      puVar15 = (undefined4 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x28,8);
    }
  }
  *puVar15 = 0;
  *(undefined8 *)(puVar15 + 6) = 0;
  puVar15[8] = 0;
  *(undefined8 *)(puVar15 + 2) = 0;
  *(undefined8 *)(puVar15 + 4) = 0;
  *(undefined4 **)(param_1 + 0x28) = puVar15;
  FUN_01c99b00(puVar15,300,*(undefined8 *)(param_1 + 8));
  lVar11 = param_1 + 0x30;
  FUN_03ebac90(lVar11,0x23,0,*(undefined8 *)(param_1 + 8),0);
  puVar2 = puVar2 + 0x10;
  pcStack_58 = "State::cIdle";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0,&local_60);
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  puVar17[2] = FUN_01c9e150;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9e204;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cDoneReady";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,1,&local_60);
  puVar17 = (undefined8 *)
            (*(long *)(param_1 + 0x60) + (ulong)(1 < *(uint *)(param_1 + 0x58)) * 0x40);
  puVar17[2] = &LAB_01c9e208;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9e20c;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cError";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,2,&local_60);
  puVar17 = (undefined8 *)
            (*(long *)(param_1 + 0x60) + (ulong)(2 < *(uint *)(param_1 + 0x58)) * 0x80);
  puVar17[2] = &LAB_01c9e358;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9e364;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cAppError";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,3,&local_60);
  lVar12 = 0xc0;
  if (*(uint *)(param_1 + 0x58) < 4) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9e46c;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9e534;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cSleep";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,4,&local_60);
  puVar17 = (undefined8 *)
            (*(long *)(param_1 + 0x60) + (ulong)(4 < *(uint *)(param_1 + 0x58)) * 0x100);
  puVar17[2] = &LAB_01c9e650;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9e684;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cConnect";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,5,&local_60);
  lVar12 = 0x140;
  if (*(uint *)(param_1 + 0x58) < 6) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9e724;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9e884;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cLogIn";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,6,&local_60);
  lVar12 = 0x180;
  if (*(uint *)(param_1 + 0x58) < 7) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9e930;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9eb0c;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cAsyncFriendList";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,7,&local_60);
  lVar12 = 0x1c0;
  if (*(uint *)(param_1 + 0x58) < 8) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9ec64;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9ece8;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cFindSession";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,8,&local_60);
  puVar17 = (undefined8 *)
            (*(long *)(param_1 + 0x60) + (ulong)(8 < *(uint *)(param_1 + 0x58)) * 0x200);
  puVar17[2] = &LAB_01c9ee10;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9eee0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cCreateSession";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,9,&local_60);
  lVar12 = 0x240;
  if (*(uint *)(param_1 + 0x58) < 10) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9f084;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9f0e4;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cJoinSession";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,10,&local_60);
  lVar12 = 0x280;
  if (*(uint *)(param_1 + 0x58) < 0xb) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9f1c0;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9f4cc;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cRandomSession";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0xb,&local_60);
  lVar12 = 0x2c0;
  if (*(uint *)(param_1 + 0x58) < 0xc) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9f6a0;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9f7d4;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cFindFriends";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0xc,&local_60);
  lVar12 = 0x300;
  if (*(uint *)(param_1 + 0x58) < 0xd) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9f900;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9f948;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cFindFriendsSession";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0xd,&local_60);
  lVar12 = 0x340;
  if (*(uint *)(param_1 + 0x58) < 0xe) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9fa60;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9fc60;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cWaitStable";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0xe,&local_60);
  lVar12 = 0x380;
  if (*(uint *)(param_1 + 0x58) < 0xf) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9fd9c;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9fda0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cFix";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0xf,&local_60);
  lVar12 = 0x3c0;
  if (*(uint *)(param_1 + 0x58) < 0x10) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01c9fe60;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01c9fecc;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cOpenPaticipation";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x10,&local_60);
  puVar17 = (undefined8 *)
            (*(long *)(param_1 + 0x60) + (ulong)(0x10 < *(uint *)(param_1 + 0x58)) * 0x400);
  puVar17[2] = &LAB_01c9ffb4;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca0030;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cCheckNSA";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x11,&local_60);
  lVar12 = 0x440;
  if (*(uint *)(param_1 + 0x58) < 0x12) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca01dc;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca04a4;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cCheckNSAUnavailable";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x12,&local_60);
  lVar12 = 0x480;
  if (*(uint *)(param_1 + 0x58) < 0x13) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca0668;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca07f4;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cGetPOPID";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x13,&local_60);
  lVar12 = 0x4c0;
  if (*(uint *)(param_1 + 0x58) < 0x14) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca09b4;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca0aa8;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cGetPOLID";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x14,&local_60);
  lVar12 = 0x500;
  if (*(uint *)(param_1 + 0x58) < 0x15) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca0bd8;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca0cc4;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cSendMessage";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x15,&local_60);
  lVar12 = 0x540;
  if (*(uint *)(param_1 + 0x58) < 0x16) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca0df4;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca0f24;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cGetMessageHeader";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x16,&local_60);
  lVar12 = 0x580;
  if (*(uint *)(param_1 + 0x58) < 0x17) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca1024;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca10c0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cReceiveMessageBody";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x17,&local_60);
  lVar12 = 0x5c0;
  if (*(uint *)(param_1 + 0x58) < 0x18) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca11d0;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca1280;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cActivateNotification";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x18,&local_60);
  lVar12 = 0x600;
  if (*(uint *)(param_1 + 0x58) < 0x19) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca1370;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca1448;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cDeleteMessage";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x19,&local_60);
  lVar12 = 0x640;
  if (*(uint *)(param_1 + 0x58) < 0x1a) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca1500;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca1590;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cSyncBcat";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x1a,&local_60);
  lVar12 = 0x680;
  if (*(uint *)(param_1 + 0x58) < 0x1b) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca18ec;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca18fc;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cModifyKeyword";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x1b,&local_60);
  lVar12 = 0x6c0;
  if (*(uint *)(param_1 + 0x58) < 0x1c) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca196c;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca19b0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cRegistHomeLand";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x1c,&local_60);
  lVar12 = 0x700;
  if (*(uint *)(param_1 + 0x58) < 0x1d) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca1a24;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca1ab0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cActivateWebService";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x1d,&local_60);
  lVar12 = 0x740;
  if (*(uint *)(param_1 + 0x58) < 0x1e) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca1b64;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca1bf8;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cReissuePassword";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x1e,&local_60);
  lVar12 = 0x780;
  if (*(uint *)(param_1 + 0x58) < 0x1f) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca1cb0;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca22cc;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cUploadEmot";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x1f,&local_60);
  lVar12 = 0x7c0;
  if (*(uint *)(param_1 + 0x58) < 0x20) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca26d0;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca2f48;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cLatestCatalogUp";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x20,&local_60);
  puVar17 = (undefined8 *)
            (*(long *)(param_1 + 0x60) + (ulong)(0x20 < *(uint *)(param_1 + 0x58)) * 0x800);
  puVar17[2] = &LAB_01ca31d0;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca3460;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cCustomAction";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x21,&local_60);
  lVar12 = 0x840;
  if (*(uint *)(param_1 + 0x58) < 0x22) {
    lVar12 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar12);
  puVar17[2] = &LAB_01ca3f9c;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[4] = &LAB_01ca3fa0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  pcStack_58 = "State::cCustomActionFull";
  local_60 = puVar2;
  FUN_03ebaf40(lVar11,0x22,&local_60);
  lVar11 = 0x880;
  if (*(uint *)(param_1 + 0x58) < 0x23) {
    lVar11 = 0;
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar11);
  *puVar17 = &PTR_LAB_04a45310;
  puVar17[1] = param_1;
  puVar17[2] = &LAB_01ca4064;
  puVar17[3] = 0;
  puVar17[4] = &LAB_01ca4068;
  puVar17[5] = 0;
  puVar2 = PTR_DAT_04bb21d8;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar8 = PTR_DAT_04bc1448;
  puVar17 = *(undefined8 **)(*(long *)puVar2 + 0x3d0);
  if (((*PTR_DAT_04bc1448 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc1448), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bc1440 = PTR_DAT_04bc1450 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc1448);
  }
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    uVar18 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc1440);
    if ((uVar18 & 1) == 0) {
      puVar17 = (undefined8 *)0x0;
    }
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,5);
  puVar17 = (undefined8 *)puVar17[6];
  *(undefined8 **)(param_1 + 0xf80) = puVar17;
  (**(code **)*puVar17)();
  lVar11 = *(long *)puVar6;
  if (lVar11 == 0) {
    puVar17 = malloc(0x230);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    puVar17 = (undefined8 *)(lVar11 + 8);
    if (lVar12 != 0) {
      puVar17 = (undefined8 *)(lVar12 + 0xa8);
    }
    puVar17 = (undefined8 *)(**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,0x230,8);
  }
  *(undefined4 *)((long)puVar17 + 0x10c) = 0;
  puVar17[3] = 0;
  *(undefined4 *)(puVar17 + 2) = 0xffffffff;
  *(undefined4 *)((long)puVar17 + 0x10f) = 0;
  *(undefined4 *)(puVar17 + 0x23) = 0xffffffff;
  *(undefined4 *)(puVar17 + 0x44) = 0xffffffff;
  *(undefined1 *)(puVar17 + 4) = 0;
  *(undefined1 *)(puVar17 + 5) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x2c) = 0;
  *(undefined4 *)((long)puVar17 + 0x2f) = 0;
  puVar17[7] = 0;
  *(undefined1 *)(puVar17 + 8) = 0;
  *(undefined1 *)(puVar17 + 9) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x4c) = 0;
  *(undefined4 *)((long)puVar17 + 0x4f) = 0;
  puVar17[0xb] = 0;
  *(undefined1 *)(puVar17 + 0xc) = 0;
  *(undefined1 *)(puVar17 + 0xd) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x6f) = 0;
  *(undefined4 *)((long)puVar17 + 0x6c) = 0;
  puVar17[0xf] = 0;
  *(undefined1 *)(puVar17 + 0x10) = 0;
  *(undefined1 *)(puVar17 + 0x11) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x8c) = 0;
  *(undefined4 *)((long)puVar17 + 0x8f) = 0;
  puVar17[0x13] = 0;
  *(undefined1 *)(puVar17 + 0x14) = 0;
  *(undefined1 *)(puVar17 + 0x15) = 0xff;
  *(undefined4 *)((long)puVar17 + 0xac) = 0;
  *(undefined4 *)((long)puVar17 + 0xaf) = 0;
  puVar17[0x17] = 0;
  *(undefined1 *)(puVar17 + 0x18) = 0;
  *(undefined1 *)(puVar17 + 0x19) = 0xff;
  *(undefined4 *)((long)puVar17 + 0xcc) = 0;
  *(undefined4 *)((long)puVar17 + 0xcf) = 0;
  puVar17[0x1b] = 0;
  *(undefined1 *)(puVar17 + 0x1c) = 0;
  *(undefined1 *)(puVar17 + 0x1d) = 0xff;
  *(undefined4 *)((long)puVar17 + 0xef) = 0;
  *(undefined4 *)((long)puVar17 + 0xec) = 0;
  puVar17[0x1f] = 0;
  *(undefined1 *)(puVar17 + 0x20) = 0;
  *(undefined1 *)(puVar17 + 0x21) = 0xff;
  puVar17[0x24] = 0;
  *(undefined1 *)(puVar17 + 0x25) = 0;
  *(undefined1 *)(puVar17 + 0x26) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x134) = 0;
  *(undefined4 *)((long)puVar17 + 0x137) = 0;
  puVar17[0x28] = 0;
  *(undefined1 *)(puVar17 + 0x29) = 0;
  *(undefined1 *)(puVar17 + 0x2a) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x157) = 0;
  *(undefined4 *)((long)puVar17 + 0x154) = 0;
  puVar17[0x2c] = 0;
  *(undefined1 *)(puVar17 + 0x2d) = 0;
  *(undefined1 *)(puVar17 + 0x2e) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x177) = 0;
  *(undefined4 *)((long)puVar17 + 0x174) = 0;
  puVar17[0x30] = 0;
  *(undefined1 *)(puVar17 + 0x31) = 0;
  *(undefined1 *)(puVar17 + 0x32) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x197) = 0;
  *(undefined4 *)((long)puVar17 + 0x194) = 0;
  puVar17[0x34] = 0;
  *(undefined1 *)(puVar17 + 0x35) = 0;
  *(undefined1 *)(puVar17 + 0x36) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x1b7) = 0;
  *(undefined4 *)((long)puVar17 + 0x1b4) = 0;
  puVar17[0x38] = 0;
  *(undefined1 *)(puVar17 + 0x39) = 0;
  *(undefined1 *)(puVar17 + 0x3a) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x1d7) = 0;
  *(undefined4 *)((long)puVar17 + 0x1d4) = 0;
  puVar17[0x3c] = 0;
  *(undefined1 *)(puVar17 + 0x3d) = 0;
  *(undefined1 *)(puVar17 + 0x3e) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x1f7) = 0;
  *(undefined4 *)((long)puVar17 + 500) = 0;
  puVar17[0x40] = 0;
  *(undefined1 *)(puVar17 + 0x41) = 0;
  *(undefined1 *)(puVar17 + 0x42) = 0xff;
  *(undefined4 *)((long)puVar17 + 0x217) = 0;
  *(undefined4 *)((long)puVar17 + 0x214) = 0;
  *(undefined2 *)((long)puVar17 + 0x224) = 0xff00;
  *(undefined4 *)(puVar17 + 0x45) = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  *(undefined8 **)(param_1 + 0xf88) = puVar17;
  FUN_01c93860(puVar17,*(undefined8 *)(param_1 + 8));
  lVar11 = *(long *)puVar6;
  if (lVar11 == 0) {
    puVar17 = malloc(0x10);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    plVar13 = (long *)(lVar11 + 8);
    if (lVar12 != 0) {
      plVar13 = (long *)(lVar12 + 0xa8);
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) {
      puVar17 = (undefined8 *)0x0;
    }
    else {
      puVar17 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x10,8);
    }
  }
  *(undefined8 **)(param_1 + 0xf90) = puVar17;
  *puVar17 = 0;
  puVar23 = *(undefined8 **)(*(long *)puVar2 + 0x3d0);
  if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc1448), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bc1440 = PTR_DAT_04bc1450 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc1448);
  }
  if (puVar23 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
  }
  else {
    uVar18 = (**(code **)*puVar23)(puVar23,PTR_DAT_04bc1440);
    if ((uVar18 & 1) == 0) {
      puVar23 = (undefined8 *)0x0;
    }
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,4);
  *puVar17 = puVar23[5];
  lVar11 = *(long *)puVar6;
  if (lVar11 == 0) {
    puVar17 = malloc(0x88);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    puVar17 = (undefined8 *)(lVar11 + 8);
    if (lVar12 != 0) {
      puVar17 = (undefined8 *)(lVar12 + 0xa8);
    }
    puVar17 = (undefined8 *)(**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,0x88,8);
  }
  puVar2 = PTR_DAT_04bd4738;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[4] = 0xffffffff;
  puVar17[5] = 0xffffffff;
  *(undefined2 *)(puVar17 + 6) = 0;
  *(undefined4 *)(puVar17 + 7) = 0;
  puVar17[8] = 0;
  *(undefined4 *)(puVar17 + 9) = 0;
  *(undefined4 *)(puVar17 + 0xe) = 0;
  *(undefined4 *)(puVar17 + 0x10) = 0;
  puVar17[10] = 0;
  puVar17[0xb] = 0;
  puVar17[2] = puVar2 + 0x10;
  puVar17[3] = 0xffffffff;
  puVar17[0xf] = 0xffffffffffffffff;
  puVar17[0xc] = 0;
  puVar17[0xd] = 0;
  *(undefined8 **)(param_1 + 0xf98) = puVar17;
  FUN_01de57a8(puVar17,*(undefined8 *)(param_1 + 8));
  lVar11 = *(long *)puVar6;
  if (lVar11 == 0) {
    puVar17 = malloc(0x20);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    puVar17 = (undefined8 *)(lVar11 + 8);
    if (lVar12 != 0) {
      puVar17 = (undefined8 *)(lVar12 + 0xa8);
    }
    puVar17 = (undefined8 *)(**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,0x20,8);
  }
  puVar17[2] = &LAB_01ca4110;
  puVar17[3] = 0;
  *puVar17 = &PTR_LAB_04a45338;
  puVar17[1] = param_1;
  lVar11 = *(long *)puVar6;
  *(undefined8 **)(param_1 + 0xfc8) = puVar17;
  if (lVar11 == 0) {
    puVar17 = malloc(0x20);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    puVar17 = (undefined8 *)(lVar11 + 8);
    if (lVar12 != 0) {
      puVar17 = (undefined8 *)(lVar12 + 0xa8);
    }
    puVar17 = (undefined8 *)(**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,0x20,8);
  }
  *puVar17 = &PTR_LAB_04a45388;
  puVar17[1] = param_1;
  lVar11 = *(long *)puVar6;
  puVar17[2] = &LAB_01ca4300;
  puVar17[3] = 0;
  *(undefined8 **)(param_1 + 0xfd0) = puVar17;
  if (lVar11 == 0) {
    puVar17 = malloc(0x20);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    puVar17 = (undefined8 *)(lVar11 + 8);
    if (lVar12 != 0) {
      puVar17 = (undefined8 *)(lVar12 + 0xa8);
    }
    puVar17 = (undefined8 *)(**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,0x20,8);
  }
  *puVar17 = &PTR_LAB_04a45388;
  puVar17[1] = param_1;
  lVar11 = *(long *)puVar6;
  puVar17[2] = &LAB_01ca4474;
  puVar17[3] = 0;
  *(undefined8 **)(param_1 + 0xfe0) = puVar17;
  if (lVar11 == 0) {
    puVar16 = malloc(3);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    puVar17 = (undefined8 *)(lVar11 + 8);
    if (lVar12 != 0) {
      puVar17 = (undefined8 *)(lVar12 + 0xa8);
    }
    puVar16 = (undefined2 *)(**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,3,8);
  }
  *puVar16 = 0;
  *(undefined1 *)(puVar16 + 1) = 1;
  lVar11 = *(long *)puVar6;
  *(undefined2 **)(param_1 + 0x2070) = puVar16;
  if (lVar11 == 0) {
    pvVar14 = malloc(0xcb0);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    puVar17 = (undefined8 *)(lVar11 + 8);
    if (lVar12 != 0) {
      puVar17 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar14 = (void *)(**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,0xcb0,8);
  }
  FUN_03eb6260();
  *(void **)(param_1 + 0xfe8) = pvVar14;
  lVar11 = *(long *)puVar6;
  if (lVar11 == 0) {
    pvVar14 = calloc(1,0x108);
    *(void **)(param_1 + 0x2090) = pvVar14;
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    plVar13 = (long *)(lVar11 + 8);
    if (lVar12 != 0) {
      plVar13 = (long *)(lVar12 + 0xa8);
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) {
      pvVar14 = (void *)0x0;
    }
    else {
      pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x108,8);
    }
    lVar11 = *(long *)puVar6;
    memset(pvVar14,0,0x108);
    *(void **)(param_1 + 0x2090) = pvVar14;
    if (lVar11 != 0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
      puVar17 = (undefined8 *)(lVar11 + 8);
      if (lVar12 != 0) {
        puVar17 = (undefined8 *)(lVar12 + 0xa8);
      }
      pvVar14 = (void *)(**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,0x1408,8);
      goto LAB_01c9e040;
    }
  }
  pvVar14 = malloc(0x1408);
LAB_01c9e040:
  memset(pvVar14,0,0x1408);
  *(void **)(param_1 + 0x178) = pvVar14;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x3c);
  uVar21 = *(uint *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(uint *)(param_1 + 0x38) = uVar21;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (uVar21 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x58) <= uVar21) {
      uVar21 = 0;
    }
    puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x60) + (long)(int)uVar21 * 0x40);
    if (puVar17 != (undefined8 *)0x0) {
      (*(code *)*puVar17)();
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  if (lVar24 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar24;
  }
  return;
}

