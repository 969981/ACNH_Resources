
void FUN_001a6d0c(long *param_1,long param_2,undefined8 param_3)

{
  *param_1 = (long)(PTR_DAT_04bcc310 + 0x10);
  FUN_001b8358(param_1 + 2,param_3);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[1] = param_2;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}

