
void FUN_00397bdc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00364628(param_1,*(undefined8 *)(param_2 + 0x10));
  *param_1 = (long)(PTR_DAT_04bd0958 + 0x10);
  FUN_00396ff0(param_1 + 4);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_0034fa74(param_1 + 0x2f);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfc | 1;
  FUN_00397020(param_1 + 4,param_2 + 0x20,param_3,param_4);
  *(undefined4 *)((long)param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  FUN_00397c90(param_1,param_3,param_4);
  return;
}

