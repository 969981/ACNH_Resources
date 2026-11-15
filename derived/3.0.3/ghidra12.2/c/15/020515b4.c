
void FUN_020515b4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *local_40;
  char *pcStack_38;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  puVar6 = (undefined8 *)((long)param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0xd) = 0x40;
  param_1[0xc] = (long)puVar6;
  if (puVar6 != &DAT_0407ebb1) {
    *(undefined1 *)puVar6 = 0;
  }
  puVar6 = (undefined8 *)((long)param_1 + 0xc4);
  param_1[0x17] = (long)puVar6;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)param_1 + 0xe3) = 0;
  param_1[0xb] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0x20;
  if (puVar6 != &DAT_0407ebb1) {
    *(undefined1 *)puVar6 = 0;
  }
  *(undefined4 *)(param_1 + 0x1f) = 0x20;
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  puVar5 = PTR_DAT_04bc0b30;
  *(undefined1 *)((long)param_1 + 0x11b) = 0;
  puVar4 = PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  param_1[0x16] = (long)puVar1;
  param_1[0x1d] = (long)puVar1;
  param_1[0x1e] = (long)param_1 + 0xfc;
  param_1[0x24] = (long)(PTR_DAT_04bc0750 + 0x10);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)puVar4;
  puVar1 = PTR_DAT_04bc0a78;
  iVar2 = *(int *)puVar5;
  *(undefined1 *)((long)param_1 + 0x13c) = 0;
  *(int *)(param_1 + 0x27) = iVar2;
  param_1[0x26] = (long)(puVar1 + 0x10);
  *(int *)puVar5 = iVar2 + 1;
  param_1[0x28] = 0x3a83126f3f7fbe77;
  param_1[0x29] = 0;
  FUN_03ebac90(param_1,3,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar6 = (undefined8 *)param_1[6];
  puVar6[2] = &LAB_0205184c;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a6efc0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_02051850;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cAppear";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar6 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  puVar6[4] = &LAB_020518c8;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04a6efc0;
  puVar6[1] = param_1;
  puVar6[2] = &LAB_0205187c;
  puVar6[3] = 0;
  puVar6[6] = &LAB_02051a8c;
  puVar6[7] = 0;
  pcStack_38 = "State::cDisappear";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar6 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  puVar6[2] = &LAB_02051b84;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a6efc0;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_02051b88;
  puVar6[5] = 0;
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  uVar3 = *(uint *)(param_1 + 3);
  *(int *)(param_1 + 2) = (int)param_1[1];
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0xc);
  *(uint *)(param_1 + 1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 5) <= uVar3) {
      uVar3 = 0;
    }
    puVar6 = *(undefined8 **)(param_1[6] + (long)(int)uVar3 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}

