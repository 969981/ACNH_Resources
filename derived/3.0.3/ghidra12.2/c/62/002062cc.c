
void FUN_002062cc(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_04bccbe8 + 0x10);
  if (param_1[0x2d] != 0) {
    FUN_00187e4c(param_1[0x2d] + -4);
  }
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_1[0x5d] = (long)(PTR_DAT_04bccac0 + 0x10);
  param_1[0x7b] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x7b);
  param_1[0x76] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x76);
  FUN_001b8504(param_1 + 0x67);
  FUN_00196ce0(param_1 + 0x60);
  param_1[0x52] = (long)(PTR_DAT_04bccae0 + 0x10);
  if ((long *)param_1[0x5a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5a] + 8))();
  }
  param_1[0x54] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x54);
  FUN_00196ce0(param_1 + 0x49);
  FUN_001fbac0(param_1 + 0x31);
  FUN_0019cd34(param_1 + 0x28);
  FUN_001976b0(param_1 + 0x16);
  FUN_0019a368(param_1);
  return;
}

