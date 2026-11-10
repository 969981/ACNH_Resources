
void FUN_001f133c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcc8a0 + 0xb0;
  *param_1 = (long)(PTR_DAT_04bcc8a0 + 0x10);
  param_1[0x23] = (long)puVar1;
  FUN_001dbfc8(param_1 + 0x2e,param_1[0x2f]);
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    FUN_00187e4c();
  }
  *param_1 = (long)&PTR_FUN_0483d260;
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 8))();
    DAT_04c5ea30 = DAT_04c5ea30 + -1;
    if (DAT_04c5ea38 != (long *)0x0) {
      (**(code **)(*DAT_04c5ea38 + 0x18))();
    }
    param_1[0x15] = 0;
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    FUN_00187e4c();
  }
  param_1[0x16] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0();
  FUN_0019a368(param_1);
  return;
}

