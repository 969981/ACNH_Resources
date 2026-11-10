
void FUN_0019d7fc(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[6] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)&PTR_FUN_048397e0;
  if (param_2 == 0) {
    param_1[4] = param_3;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = param_3;
    return;
  }
  if (param_2 < 0xb) {
    param_2 = 10;
  }
  lVar1 = FUN_00187df4(param_2);
  param_1[4] = lVar1 + param_1[6];
  param_1[5] = lVar1 + param_2;
  param_1[2] = lVar1;
  param_1[3] = lVar1 + param_1[6];
  return;
}

