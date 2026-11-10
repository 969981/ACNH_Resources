
void FUN_001f3d60(long *param_1)

{
  undefined *puVar1;
  
  if (*param_1 != 0) {
    FUN_00142be4();
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  if (param_1[0x24] != 0) {
    param_1[0x25] = param_1[0x24];
    FUN_00187e4c();
  }
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_1[0x1f] = (long)puVar1;
  FUN_0018b1a0();
  param_1[0x1a] = (long)puVar1;
  FUN_0018b1a0();
  param_1[0x15] = (long)puVar1;
  FUN_0018b1a0();
  param_1[0x10] = (long)puVar1;
  FUN_0018b1a0();
  param_1[0xb] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0xb);
  if (param_1[3] == 0) {
    return;
  }
  param_1[4] = param_1[3];
  FUN_00187e4c();
  return;
}

