
void FUN_032d04c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  param_1[0x12] = 0;
  param_1[0x11] = param_1 + 0x12;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x10] = param_1 + 0x11;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xf] = param_1 + 0x10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xe] = param_1 + 0xf;
  param_1[0xd] = param_1 + 0xe;
  param_1[0xc] = param_1 + 0xd;
  param_1[0xb] = param_1 + 0xc;
  param_1[10] = param_1 + 0xb;
  puVar2 = param_1 + 9;
  *puVar2 = param_1 + 10;
  param_1[6] = 0;
  param_1[7] = puVar2;
  param_1[8] = puVar2;
  if (param_1 + 0x13 != (undefined8 *)0x0) {
    param_1[6] = param_1 + 0x13;
    *(undefined4 *)((long)param_1 + 0x2c) = 10;
  }
  param_1[0x1d8] = 0;
  param_1[0x21] = &PTR_LAB_04b1b5b8;
  param_1[0x22] = 0;
  param_1[0x23] = param_1 + 0x26;
  param_1[0x1e6] = 0;
  *(undefined2 *)(param_1 + 0x1eb) = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  *(undefined1 *)(param_1 + 0x1ef) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x20;
  param_1[0x26] = param_1 + 0x34;
  param_1[0x34] = param_1 + 0x42;
  param_1[0x42] = param_1 + 0x50;
  param_1[0x50] = param_1 + 0x5e;
  param_1[0x5e] = param_1 + 0x6c;
  param_1[0x6c] = param_1 + 0x7a;
  param_1[0x7a] = param_1 + 0x88;
  param_1[0x88] = param_1 + 0x96;
  param_1[0x96] = param_1 + 0xa4;
  param_1[0xa4] = param_1 + 0xb2;
  param_1[0xb2] = param_1 + 0xc0;
  param_1[0x24] = param_1 + 0x26;
  param_1[0xc0] = param_1 + 0xce;
  param_1[0xce] = param_1 + 0xdc;
  param_1[0xdc] = param_1 + 0xea;
  param_1[0xea] = param_1 + 0xf8;
  param_1[0xf8] = param_1 + 0x106;
  param_1[0x106] = param_1 + 0x114;
  param_1[0x114] = param_1 + 0x122;
  param_1[0x122] = param_1 + 0x130;
  param_1[0x130] = param_1 + 0x13e;
  param_1[0x13e] = param_1 + 0x14c;
  param_1[0x14c] = param_1 + 0x15a;
  param_1[0x15a] = param_1 + 0x168;
  param_1[0x168] = param_1 + 0x176;
  param_1[0x176] = param_1 + 0x184;
  param_1[0x184] = param_1 + 0x192;
  param_1[0x192] = param_1 + 0x1a0;
  param_1[0x1a0] = param_1 + 0x1ae;
  param_1[0x1ae] = param_1 + 0x1bc;
  param_1[0x1bc] = param_1 + 0x1ca;
  param_1[0x1ca] = param_1 + 0x1d8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  uVar1 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar1;
  return;
}

