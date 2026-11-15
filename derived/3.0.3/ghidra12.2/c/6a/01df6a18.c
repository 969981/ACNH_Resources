
void FUN_01df6a18(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 5;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_03ebac90(param_1,3,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cSleep";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar3 = (undefined8 *)param_1[6];
  puVar3[2] = &LAB_01df6be0;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a5c380;
  puVar3[1] = param_1;
  puVar3[4] = &LAB_01df6be4;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_38 = "State::cPrepare";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar3 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  puVar3[2] = &LAB_01df6be8;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a5c380;
  puVar3[1] = param_1;
  puVar3[4] = &LAB_01df6c38;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_38 = "State::cWork";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar3 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  puVar3[2] = &LAB_01df6ca0;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a5c380;
  puVar3[1] = param_1;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = &LAB_01df6ca4;
  puVar3[5] = 0;
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  uVar2 = *(uint *)(param_1 + 3);
  *(int *)(param_1 + 2) = (int)param_1[1];
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0xc);
  *(uint *)(param_1 + 1) = uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 5) <= uVar2) {
      uVar2 = 0;
    }
    puVar3 = *(undefined8 **)(param_1[6] + (long)(int)uVar2 * 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)*puVar3)();
    }
  }
  return;
}

