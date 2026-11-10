
void FUN_002e8424(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bce958 + 0x10);
  param_1[0x1e] = (long)puVar1;
  FUN_0018b1a0();
  param_1[0x17] = (long)puVar1;
  FUN_0018b1a0();
  param_1[0x11] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x11);
  param_1[0xb] = (long)(PTR_DAT_04bce970 + 0x10);
  FUN_00202558(param_1 + 0xd,param_1[0xe]);
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    FUN_00187e4c();
  }
  if (param_1[3] == 0) {
    return;
  }
  param_1[4] = param_1[3];
  FUN_00187e4c();
  return;
}

