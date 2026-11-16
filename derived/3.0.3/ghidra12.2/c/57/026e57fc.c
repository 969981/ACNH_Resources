
void FUN_026e57fc(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined4 *)(param_1 + 0x11) = 0xb;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[10] = (long)param_1;
  param_1[0xb] = (long)&LAB_026e5a40;
  param_1[8] = 0;
  param_1[9] = (long)&PTR_LAB_04a89420;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = -0x100000000;
  param_1[0xf] = (long)(PTR_DAT_04bb5128 + 0x10);
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(param_1 + 0x17) = 0x40;
  *(undefined4 *)(param_1 + 0x22) = 0x40;
  *(undefined1 *)((long)param_1 + 0x114) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)((long)param_1 + 0xfb) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  *(undefined1 *)((long)param_1 + 0x153) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((long)param_1 + 0x166) = 0;
  param_1[0x15] = (long)puVar1;
  param_1[0x16] = (long)param_1 + 0xbc;
  uVar2 = (long)param_1 + 0x16eU;
  if ((long)param_1 + 0x16eU <= (long)param_1 + 0x15aU) {
    uVar2 = (long)param_1 + 0x15aU;
  }
  param_1[0x20] = (long)puVar1;
  param_1[0x21] = (long)param_1 + 0x114;
  param_1[0x10] = (long)(param_1 + 0x2b);
  memset(param_1 + 0x2b,0,((uVar2 - (long)(param_1 + 0xf)) - 0xe1 & 0xfffffffffffffffe) + 2);
  *(undefined2 *)((long)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 2;
  *(undefined4 *)(param_1 + 0x2f) = 2;
  FUN_03ebac90(param_1,2,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar4 = (undefined8 *)param_1[6];
  puVar4[2] = &LAB_026e5b9c;
  puVar4[3] = 0;
  puVar4[4] = &LAB_026e5ba0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a89470;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_026e5ba4;
  puVar4[7] = 0;
  pcStack_38 = "State::cSetup";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  puVar4[2] = &LAB_026e5ba8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a89470;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_026e5c58;
  puVar4[7] = 0;
  puVar4[4] = &LAB_026e5c3c;
  puVar4[5] = 0;
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
    puVar4 = *(undefined8 **)(param_1[6] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

