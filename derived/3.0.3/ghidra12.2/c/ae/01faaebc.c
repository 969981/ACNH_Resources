
void FUN_01faaebc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[0x1a] = 0;
  param_1[0x18] = param_1 + 0x1a;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x16] = param_1 + 0x18;
  param_1[0x14] = param_1 + 0x16;
  param_1[0x12] = param_1 + 0x14;
  param_1[0x10] = param_1 + 0x12;
  param_1[0xe] = param_1 + 0x10;
  param_1[0xc] = param_1 + 0xe;
  param_1[10] = param_1 + 0xc;
  param_1[8] = param_1 + 10;
  param_1[6] = param_1 + 8;
  puVar1 = param_1 + 4;
  *puVar1 = param_1 + 6;
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  if (param_1 + 0x1c != (undefined8 *)0x0) {
    param_1[1] = param_1 + 0x1c;
    *(undefined4 *)((long)param_1 + 4) = 0xc;
  }
  return;
}

