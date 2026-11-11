
void FUN_00397b74(long *param_1)

{
  FUN_00364628();
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
  return;
}

