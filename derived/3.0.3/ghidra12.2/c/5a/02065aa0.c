
void FUN_02065aa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[799] = 0;
  puVar1 = param_1 + 4;
  *puVar1 = param_1 + 0x39;
  param_1[0x39] = param_1 + 0x6e;
  param_1[0x6e] = param_1 + 0xa3;
  param_1[0xa3] = param_1 + 0xd8;
  param_1[0xd8] = param_1 + 0x10d;
  param_1[0x10d] = param_1 + 0x142;
  param_1[0x142] = param_1 + 0x177;
  param_1[0x177] = param_1 + 0x1ac;
  param_1[0x1ac] = param_1 + 0x1e1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x1e1] = param_1 + 0x216;
  param_1[0x216] = param_1 + 0x24b;
  param_1[0x24b] = param_1 + 0x280;
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  param_1[0x280] = param_1 + 0x2b5;
  param_1[0x2b5] = param_1 + 0x2ea;
  param_1[0x2ea] = param_1 + 799;
  if (param_1 + 0x354 != (undefined8 *)0x0) {
    *param_1 = 0x1000000000;
    param_1[1] = param_1 + 0x354;
  }
  return;
}

