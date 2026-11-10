
void FUN_002e73b4(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bcea50 + 0x10);
  param_1[0x25] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x25);
  param_1[0x1f] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x1f);
  param_1[0x19] = (long)(PTR_DAT_04bce970 + 0x10);
  FUN_00202558(param_1 + 0x1b,param_1[0x1c]);
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    FUN_00187e4c();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    FUN_00187e4c();
  }
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    FUN_00187e4c();
  }
  FUN_0031b520(param_1);
  return;
}

