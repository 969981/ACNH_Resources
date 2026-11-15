
/* WARNING: Removing unreachable block (ram,0x01f92ba0) */
/* WARNING: Removing unreachable block (ram,0x01f92bc8) */

void FUN_01f92a24(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = param_1 + 0x1cbc;
  FUN_01e9dbb0();
  puVar6 = PTR_DAT_04bc2370;
  puVar5 = PTR_DAT_04bb7648;
  *(undefined2 *)((long)param_1 + 0xaf32) = 0xffff;
  *param_1 = &PTR_FUN_04a68ea0;
  puVar1 = PTR_DAT_04bb37e0;
  param_1[0x15e7] = puVar5 + 0x10;
  uVar4 = *(undefined2 *)(puVar6 + 8);
  param_1[0x15e9] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x15e8) = uVar4;
  *(undefined2 *)(param_1 + 0x15ea) = *(undefined2 *)puVar1;
  *(undefined *)((long)param_1 + 0xaf52) = puVar1[2];
  *(undefined *)((long)param_1 + 0xaf53) = puVar1[3];
  uVar3 = *(undefined4 *)(puVar1 + 4);
  param_1[0x15eb] = 0;
  param_1[0x15ec] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x15ed) = 0;
  *(undefined4 *)((long)param_1 + 0xaf54) = uVar3;
  FUN_02191da8(param_1 + 0x15ee,param_2);
  *puVar2 = param_1;
  param_1[0x1cbd] = puVar2;
  param_1[0x1cc4] = puVar2;
  *(undefined4 *)(param_1 + 0x1cc5) = 0;
  *(undefined4 *)(param_1 + 0x1cc6) = 0;
  param_1[0x1cbe] = puVar2;
  param_1[0x1cbf] = puVar2;
  param_1[0x1cc0] = puVar2;
  param_1[0x1cc1] = puVar2;
  param_1[0x1cc2] = puVar2;
  param_1[0x1cc3] = puVar2;
  puVar1 = PTR_DAT_04bc2758 + 0x10;
  param_1[0x1cc7] = puVar1;
  param_1[0x1ccb] = puVar1;
  puVar1 = PTR_DAT_04bc2760 + 0x10;
  *(undefined1 *)(param_1 + 0x1cd7) = 0;
  param_1[0x1ccf] = puVar1;
  param_1[0x1cd3] = 0;
  param_1[0x1cd4] = 0;
  param_1[0x1cd8] = &PTR_LAB_04a69270;
  param_1[0x1cdb] = 0;
  param_1[0x1cdc] = &PTR_LAB_04a69270;
  param_1[0x1cd5] = 0;
  param_1[0x1cd6] = 0;
  param_1[0x1cd9] = 0;
  param_1[0x1cda] = 0;
  param_1[0x1cdf] = 0;
  param_1[0x1ce0] = &PTR_LAB_04a692c0;
  param_1[0x1ce7] = 0;
  param_1[0x1ce5] = 0;
  param_1[0x1ce6] = 0;
  param_1[0x1ce3] = 0;
  param_1[0x1ce4] = &PTR_LAB_04a69310;
  param_1[0x1cdd] = 0;
  param_1[0x1cde] = 0;
  param_1[0x1ce1] = 0;
  param_1[0x1ce2] = 0;
  *(undefined4 *)(param_1 + 0x15e9) = *(undefined4 *)(param_1[1] + 0x178);
  *(undefined4 *)((long)param_1 + 0xaf4c) = *(undefined4 *)(param_1[1] + 0x17c);
  puVar1 = PTR_FUN_04bc1df8;
  param_1[0x1cdb] = 0;
  param_1[0x1cd9] = param_1;
  param_1[0x1cda] = puVar1;
  param_1[0x158e] = param_1 + 0x1cd8;
  puVar1 = PTR_FUN_04bc1e28;
  param_1[0x1cdf] = 0;
  param_1[0x1cdd] = param_1;
  param_1[0x1cde] = puVar1;
  param_1[0x1595] = param_1 + 0x1cdc;
  puVar1 = PTR_LAB_04bc1df0;
  param_1[0x1ce3] = 0;
  param_1[0x1ce1] = param_1;
  param_1[0x1ce2] = puVar1;
  if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x1ce0;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  *(byte *)(param_1 + 0x1cd7) = *(byte *)(param_1 + 0x1cd7) | 1;
  return;
}

