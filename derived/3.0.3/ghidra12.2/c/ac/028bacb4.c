
void FUN_028bacb4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_50;
  char *pcStack_48;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_04bd4738 + 0x10;
  *(undefined2 *)(param_1 + 0xe) = 0;
  plVar5 = param_1 + 10;
  *plVar5 = (long)puVar1;
  param_1[0xd] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  puVar1 = PTR_DAT_04bc3880 + 0x10;
  param_1[0x15] = puVar1;
  param_1[0x19] = puVar1;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  DAT_055b1ad0 = &PTR_LAB_04a921f0;
  DAT_055b1ae0 = &LAB_028bb134;
  DAT_055b1ae8 = 0;
  DAT_055b1ad8 = param_1;
  FUN_03ebac90(plVar5,9,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x10];
  puVar4[2] = &LAB_028bb254;
  puVar4[3] = 0;
  puVar4[4] = &LAB_028bb25c;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a92218;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_028bb260;
  puVar4[7] = 0;
  pcStack_48 = "State::cHostDataMatching";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x10] + (ulong)(1 < *(uint *)(param_1 + 0xf)) * 0x40);
  puVar4[4] = &LAB_028bb2d0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a92218;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_028bb264;
  puVar4[3] = 0;
  puVar4[6] = &LAB_028bb3f4;
  puVar4[7] = 0;
  pcStack_48 = "State::cHostSave";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[0x10] + (ulong)(2 < *(uint *)(param_1 + 0xf)) * 0x80);
  puVar4[4] = &LAB_028bb440;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a92218;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_028bb3f8;
  puVar4[3] = 0;
  puVar4[6] = &LAB_028bb4ec;
  puVar4[7] = 0;
  pcStack_48 = "State::cHostWaitOthersSave";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 0xf) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x10] + lVar2);
  puVar4[2] = &LAB_028bb4f0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a92218;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_028bb558;
  puVar4[5] = 0;
  puVar4[6] = &LAB_028bbb04;
  puVar4[7] = 0;
  pcStack_48 = "State::cHostWaitComplete";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,4,&local_50);
  puVar4 = (undefined8 *)(param_1[0x10] + (ulong)(4 < *(uint *)(param_1 + 0xf)) * 0x100);
  puVar4[4] = &LAB_028bbb0c;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a92218;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_028bbb08;
  puVar4[3] = 0;
  puVar4[6] = &LAB_028bbf88;
  puVar4[7] = 0;
  pcStack_48 = "State::cVisitorSave";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 0xf) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x10] + lVar2);
  puVar4[2] = &LAB_028bbf8c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a92218;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_028bbfd0;
  puVar4[5] = 0;
  puVar4[6] = &LAB_028bc088;
  puVar4[7] = 0;
  pcStack_48 = "State::cVisitorWaitSaveResult";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,6,&local_50);
  lVar2 = 0x180;
  if (*(uint *)(param_1 + 0xf) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x10] + lVar2);
  puVar4[2] = &LAB_028bc08c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a92218;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_028bc090;
  puVar4[5] = 0;
  puVar4[6] = &LAB_028bc094;
  puVar4[7] = 0;
  pcStack_48 = "State::cCommit";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,7,&local_50);
  lVar2 = 0x1c0;
  if (*(uint *)(param_1 + 0xf) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x10] + lVar2);
  puVar4[2] = &LAB_028bc098;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a92218;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_028bc0dc;
  puVar4[5] = 0;
  puVar4[6] = &LAB_028bc218;
  puVar4[7] = 0;
  pcStack_48 = "State::cRollback";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,8,&local_50);
  puVar4 = (undefined8 *)(param_1[0x10] + (ulong)(8 < *(uint *)(param_1 + 0xf)) * 0x200);
  puVar4[2] = &LAB_028bc21c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a92218;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_028bc39c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_028bc260;
  puVar4[5] = 0;
  *(undefined1 *)((long)param_1 + 0x71) = 1;
  uVar3 = *(uint *)(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xb);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)((long)param_1 + 0x5c);
  *(uint *)(param_1 + 0xb) = uVar3;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0xf) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[0x10] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

