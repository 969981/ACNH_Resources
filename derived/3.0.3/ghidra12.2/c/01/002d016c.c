
void FUN_002d016c(long *param_1)

{
  FUN_0025fbb4();
  *param_1 = (long)(PTR_DAT_04bce2c0 + 0x10);
  FUN_002b3fa8(param_1 + 0x10);
  param_1[0x20] = 0;
  FUN_00220ebc(param_1 + 0x21);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x40000;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  return;
}

