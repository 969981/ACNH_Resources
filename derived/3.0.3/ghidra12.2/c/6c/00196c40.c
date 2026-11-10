
void FUN_00196c40(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[5] = 0;
  *param_1 = (long)&PTR_FUN_048393d8;
  uVar1 = FUN_0018b798(param_2);
  *(undefined1 *)(param_1 + 6) = 0;
  if (uVar1 == 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    *(undefined2 *)((long)param_1 + 0x31) = 0;
    return;
  }
  param_1[3] = uVar1 >> 1;
  param_1[4] = uVar1 >> 1;
  lVar2 = FUN_00196a4c(param_1);
  param_1[2] = lVar2;
  FUN_0018c150(*(undefined8 *)(param_2 + 0x18),lVar2,param_1[4]);
  *(undefined2 *)((long)param_1 + 0x31) = 0;
  return;
}

