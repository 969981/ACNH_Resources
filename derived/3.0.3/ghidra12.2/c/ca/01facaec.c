
void FUN_01facaec(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_1f8 [4];
  long *local_1e8;
  undefined4 local_194;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_108;
  undefined4 local_54;
  
  *(undefined4 *)((long)param_1 + 0xaf8c) = 1;
  FUN_01e63f1c(local_1f8);
  local_54 = *param_3;
  local_1f8[0] = 10;
  local_108 = 1;
  local_194 = 1;
  iVar2 = (**(code **)(*param_1 + 0x610))(param_1);
  puVar1 = (undefined4 *)((long)param_1 + 0xae84);
  if (iVar2 != 1) {
    puVar1 = param_2;
  }
  local_1e8 = param_1 + 0x243b;
  local_11c = *puVar1;
  uStack_118 = puVar1[1];
  param_1[0x243c] = (long)param_1;
  param_1[0x243d] = (long)&LAB_01fbf3a4;
  param_1[0x243e] = 0;
  if ((int)param_1[0x1619] < *(int *)((long)param_1 + 0xb0cc)) {
    FUN_021920b0(param_1 + 0x1619,local_1f8);
  }
  return;
}

