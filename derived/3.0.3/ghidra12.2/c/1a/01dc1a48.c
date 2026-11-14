
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc1a48(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03ebac90(param_1,0x18,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0,&local_50);
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  puVar6[2] = &LAB_01dc250c;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc2660;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cLocalInit";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,1,&local_50);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar6[2] = &LAB_01dc2668;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc281c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cSetupWherearen";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,2,&local_50);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  puVar6[2] = &LAB_01dc2894;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc2914;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cCreateSession";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,3,&local_50);
  lVar7 = 0xc0;
  if (*(uint *)(param_1 + 0x28) < 4) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc2988;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc2fd0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cJoinWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,4,&local_50);
  puVar6 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(4 < *(uint *)(param_1 + 0x28)) * 0x100);
  puVar6[2] = &LAB_01dc3048;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc3078;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cDoneJoin";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,5,&local_50);
  lVar7 = 0x140;
  if (*(uint *)(param_1 + 0x28) < 6) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc3188;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc318c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cStandbyMove";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,6,&local_50);
  lVar7 = 0x180;
  if (*(uint *)(param_1 + 0x28) < 7) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc33a0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc33a4;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cCloseSession";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,7,&local_50);
  lVar7 = 0x1c0;
  if (*(uint *)(param_1 + 0x28) < 8) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc34a4;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc35e0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cMoveSending";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,8,&local_50);
  puVar6 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(8 < *(uint *)(param_1 + 0x28)) * 0x200);
  puVar6[2] = &LAB_01dc366c;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc3968;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cMoveWherearenSending";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,9,&local_50);
  lVar7 = 0x240;
  if (*(uint *)(param_1 + 0x28) < 10) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc3a5c;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc3aac;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cHostSaveSync";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,10,&local_50);
  lVar7 = 0x280;
  if (*(uint *)(param_1 + 0x28) < 0xb) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc3b04;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc3bec;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cLeaveWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xb,&local_50);
  lVar7 = 0x2c0;
  if (*(uint *)(param_1 + 0x28) < 0xc) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc3c1c;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc3c20;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cSearchSession";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xc,&local_50);
  lVar7 = 0x300;
  if (*(uint *)(param_1 + 0x28) < 0xd) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc3d20;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc3ed4;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cFindWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xd,&local_50);
  lVar7 = 0x340;
  if (*(uint *)(param_1 + 0x28) < 0xe) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc3f50;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc4540;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cJoinSession";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xe,&local_50);
  lVar7 = 0x380;
  if (*(uint *)(param_1 + 0x28) < 0xf) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc4570;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc4574;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cSaveInfoDataWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xf,&local_50);
  lVar7 = 0x3c0;
  if (*(uint *)(param_1 + 0x28) < 0x10) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc49d4;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc49e4;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cCheckSaveInfo";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x10,&local_50);
  puVar6 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(0x10 < *(uint *)(param_1 + 0x28)) * 0x400);
  puVar6[2] = &LAB_01dc4ad8;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc4b44;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cMoveReceiveWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x11,&local_50);
  lVar7 = 0x440;
  if (*(uint *)(param_1 + 0x28) < 0x12) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc4b84;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc4be8;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cMoveReceiving";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x12,&local_50);
  lVar7 = 0x480;
  if (*(uint *)(param_1 + 0x28) < 0x13) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc4c44;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc4c48;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cMoveWherearenReceiving";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x13,&local_50);
  lVar7 = 0x4c0;
  if (*(uint *)(param_1 + 0x28) < 0x14) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc4cf8;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc4d40;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cVisitSaveSyncWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x14,&local_50);
  lVar7 = 0x500;
  if (*(uint *)(param_1 + 0x28) < 0x15) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc4d98;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc4d9c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cVisitSaveSync";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x15,&local_50);
  lVar7 = 0x540;
  if (*(uint *)(param_1 + 0x28) < 0x16) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc4dd4;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc4dd8;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cLeaveSession";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x16,&local_50);
  lVar7 = 0x580;
  if (*(uint *)(param_1 + 0x28) < 0x17) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc4e08;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dc4ea0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cFinished";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x17,&local_50);
  lVar7 = 0x5c0;
  if (*(uint *)(param_1 + 0x28) < 0x18) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01dc4ef0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b2b0;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_01dc4ef4;
  puVar6[5] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar2 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) <= uVar2) {
      uVar2 = 0;
    }
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar5 = malloc(0x38);
    *(undefined8 *)((long)pvVar5 + 2) = 0;
    *(undefined8 *)((long)pvVar5 + 10) = 0;
    *(undefined8 *)((long)pvVar5 + 0x12) = 0;
    *(undefined8 *)((long)pvVar5 + 0x1a) = 0;
    *(undefined8 *)((long)pvVar5 + 0x22) = 0;
    *(undefined4 *)((long)pvVar5 + 0x2a) = 0;
    *(void **)(param_1 + 0x48) = pvVar5;
LAB_01dc233c:
    pvVar5 = malloc(0x48);
    *(undefined8 *)((long)pvVar5 + 4) = 0;
    *(undefined8 *)((long)pvVar5 + 0xc) = 0;
    *(undefined8 *)((long)pvVar5 + 0x14) = 0;
    *(undefined8 *)((long)pvVar5 + 0x1c) = 0;
    *(undefined8 *)((long)pvVar5 + 0x24) = 0;
    *(undefined8 *)((long)pvVar5 + 0x2c) = 0;
    *(undefined8 *)((long)pvVar5 + 0x33) = 0;
    *(void **)(param_1 + 0x50) = pvVar5;
LAB_01dc2364:
    pvVar5 = malloc(0xc);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) goto LAB_01dc22d4;
      lVar3 = *(long *)puVar1;
      _DAT_0000002a = 0;
      _DAT_0000002c = 0;
      _DAT_00000022 = 0;
      _DAT_00000024 = 0;
      _DAT_0000001a = 0;
      _DAT_0000001c = 0;
      _DAT_00000012 = 0;
      _DAT_00000014 = 0;
      _DAT_0000000a = 0;
      _DAT_0000000c = 0;
      uRam0000000000000002 = 0;
      _DAT_00000004 = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      if (lVar3 == 0) goto LAB_01dc233c;
LAB_01dc23ac:
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar3 + 8);
      if (lVar7 != 0) {
        plVar4 = (long *)(lVar7 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) goto LAB_01dc23d8;
      uRam0000000000000034 = 0;
      _DAT_0000002c = 0;
      uRam000000000000002e = 0;
      DAT_00000033 = 0;
      _DAT_00000024 = 0;
      _DAT_0000002a = 0;
      _DAT_0000001c = 0;
      _DAT_00000022 = 0;
      _DAT_00000014 = 0;
      _DAT_0000001a = 0;
      _DAT_0000000c = 0;
      _DAT_00000012 = 0;
      _DAT_00000004 = 0;
      _DAT_0000000a = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) goto LAB_01dc2364;
LAB_01dc2460:
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar6 = (undefined8 *)(lVar3 + 8);
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*puVar6;
      if (param_2 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_01dc24a4;
      }
    }
    else {
LAB_01dc22d4:
      lVar7 = (**(code **)(*plVar4 + 0x30))(plVar4,0x38,8);
      lVar3 = *(long *)puVar1;
      *(undefined8 *)(lVar7 + 2) = 0;
      *(undefined8 *)(lVar7 + 10) = 0;
      *(undefined8 *)(lVar7 + 0x12) = 0;
      *(undefined8 *)(lVar7 + 0x1a) = 0;
      *(undefined8 *)(lVar7 + 0x22) = 0;
      *(undefined4 *)(lVar7 + 0x2a) = 0;
      *(long *)(param_1 + 0x48) = lVar7;
      if (lVar3 == 0) goto LAB_01dc233c;
      plVar4 = param_2;
      if (param_2 == (long *)0x0) goto LAB_01dc23ac;
LAB_01dc23d8:
      lVar7 = (**(code **)(*plVar4 + 0x30))(plVar4,0x48,8);
      lVar3 = *(long *)puVar1;
      *(undefined8 *)(lVar7 + 4) = 0;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined8 *)(lVar7 + 0x1c) = 0;
      *(undefined8 *)(lVar7 + 0x24) = 0;
      *(undefined8 *)(lVar7 + 0x2c) = 0;
      *(undefined8 *)(lVar7 + 0x33) = 0;
      *(long *)(param_1 + 0x50) = lVar7;
      if (lVar3 == 0) goto LAB_01dc2364;
      if (param_2 == (long *)0x0) goto LAB_01dc2460;
    }
    pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0xc,8);
  }
LAB_01dc24a4:
  puVar1 = PTR_DAT_04bb36f0;
  *(void **)(param_1 + 0x58) = pvVar5;
  local_50._0_4_ = 0xc;
  if (*(uint *)(*(long *)puVar1 + 0x20) < 0xd) {
    local_50._0_4_ = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)puVar1 + 0x28) + (long)(int)local_50 * 0x38 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 900;
  return;
}

