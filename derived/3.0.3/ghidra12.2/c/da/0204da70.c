
void FUN_0204da70(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined *local_50;
  char *pcStack_48;
  
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  param_1[5] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  plVar6 = param_1 + 2;
  *plVar6 = (long)(puVar1 + 0x10);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  plVar5 = param_1 + 0xb;
  *plVar5 = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x7fc00000;
  *param_1 = &PTR_LAB_04a6eed8;
  param_1[1] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  param_1[0x1a] = puVar1;
  param_1[0x1e] = puVar1;
  FUN_03ebac90(plVar6,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "Mode::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,0,&local_50);
  puVar4 = (undefined8 *)param_1[8];
  puVar4[2] = &LAB_0204de60;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a6eef8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0204de64;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "Mode::cDemoWaitTurn";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,1,&local_50);
  puVar4 = (undefined8 *)(param_1[8] + (ulong)(1 < *(uint *)(param_1 + 7)) * 0x40);
  puVar4[2] = &LAB_0204de68;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a6eef8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0204ded4;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "Mode::cDemoWaitHold";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,2,&local_50);
  puVar4 = (undefined8 *)(param_1[8] + (ulong)(2 < *(uint *)(param_1 + 7)) * 0x80);
  puVar4[2] = &LAB_0204df70;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a6eef8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0204dfd0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "Mode::cTalkTurn";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 7) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[8] + lVar2);
  puVar4[2] = &LAB_0204dfdc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a6eef8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0204e058;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "Mode::cTalkHold";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,4,&local_50);
  puVar4 = (undefined8 *)(param_1[8] + (ulong)(4 < *(uint *)(param_1 + 7)) * 0x100);
  puVar4[2] = &LAB_0204e278;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a6eef8;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0204e324;
  puVar4[5] = 0;
  *(undefined1 *)((long)param_1 + 0x31) = 1;
  uVar3 = *(uint *)(param_1 + 5);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_1 + 0x1c);
  *(uint *)(param_1 + 3) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 7) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[8] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  FUN_03ebac90(plVar5,5,0,0,0);
  pcStack_48 = "SubMode::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x11];
  puVar4[2] = &LAB_0204e47c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a6eef8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0204e488;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "SubMode::cLookAt";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x11] + (ulong)(1 < *(uint *)(param_1 + 0x10)) * 0x40);
  puVar4[2] = &LAB_0204e48c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a6eef8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0204e49c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "SubMode::cTurn";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[0x11] + (ulong)(2 < *(uint *)(param_1 + 0x10)) * 0x80);
  puVar4[2] = &LAB_0204e8c4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a6eef8;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0204e8d4;
  puVar4[5] = 0;
  *(undefined1 *)((long)param_1 + 0x79) = 1;
  uVar3 = *(uint *)(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_1 + 100);
  *(uint *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)((long)param_1 + 100) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x10) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[0x11] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

