
void FUN_01c8ce64(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_50;
  char *pcStack_48;
  
  *(undefined4 *)(param_1 + 6) = param_2;
  *param_1 = &PTR_LAB_04a446c0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_LAB_04a446f0;
  puVar1 = PTR_DAT_04bd4738 + 0x10;
  *(undefined1 *)((long)param_1 + 0x34) = param_3;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  plVar5 = param_1 + 7;
  *plVar5 = (long)puVar1;
  param_1[10] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x11] = puVar1;
  FUN_03ebac90(plVar5,9,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[0xd];
  puVar4[2] = &LAB_01c8c324;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a44708;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01c8c340;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cLoginWait";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0xd] + (ulong)(1 < *(uint *)(param_1 + 0xc)) * 0x40);
  puVar4[2] = &LAB_01c8c344;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a44708;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01c8c348;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cConnect";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[0xd] + (ulong)(2 < *(uint *)(param_1 + 0xc)) * 0x80);
  puVar4[2] = &LAB_01c8c358;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a44708;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01c8c428;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cStayGrowUp";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 0xc) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0xd] + lVar2);
  puVar4[2] = &LAB_01c8c4c8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a44708;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01c8c4cc;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cCheckNSA";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,4,&local_50);
  puVar4 = (undefined8 *)(param_1[0xd] + (ulong)(4 < *(uint *)(param_1 + 0xc)) * 0x100);
  puVar4[2] = &LAB_01c8c578;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a44708;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01c8c640;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cSaveAccessWait";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 0xc) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0xd] + lVar2);
  puVar4[2] = &LAB_01c8c6e4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a44708;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01c8c6e8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cActivateNotification";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,6,&local_50);
  lVar2 = 0x180;
  if (*(uint *)(param_1 + 0xc) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0xd] + lVar2);
  puVar4[2] = &LAB_01c8c75c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a44708;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01c8c84c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cLogin";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,7,&local_50);
  lVar2 = 0x1c0;
  if (*(uint *)(param_1 + 0xc) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0xd] + lVar2);
  puVar4[2] = &LAB_01c8c8d8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a44708;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01c8c9a0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cLoginKeep";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,8,&local_50);
  puVar4 = (undefined8 *)(param_1[0xd] + (ulong)(8 < *(uint *)(param_1 + 0xc)) * 0x200);
  puVar4[2] = &LAB_01c8ca1c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a44708;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_01c8ca28;
  puVar4[5] = 0;
  *(undefined1 *)((long)param_1 + 0x59) = 1;
  uVar3 = *(uint *)(param_1 + 10);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_1 + 0x44);
  *(uint *)(param_1 + 8) = uVar3;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0xc) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[0xd] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

