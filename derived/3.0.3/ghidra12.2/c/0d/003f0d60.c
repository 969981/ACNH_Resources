
void FUN_003f0d60(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd25f8 + 0xa8;
  *param_1 = (long)(PTR_DAT_04bd25f8 + 0x10);
  param_1[0x14] = (long)puVar1;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  if (param_1[0x50] != 0) {
    param_1[0x51] = param_1[0x50];
    FUN_00187e4c();
  }
  param_1[0x3c] = (long)&PTR_FUN_04851260;
  if (param_1[0x4d] != 0) {
    param_1[0x4e] = param_1[0x4d];
    FUN_00187e4c();
  }
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_1[0x48] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x48);
  param_1[0x43] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x43);
  param_1[0x3e] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x3e);
  FUN_001fbac0(param_1 + 0x1f);
  param_1[0x19] = (long)puVar1;
  FUN_0018b1a0();
  FUN_0019a368(param_1);
  return;
}

