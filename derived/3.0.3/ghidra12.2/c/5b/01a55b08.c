
void FUN_01a55b08(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  param_1[0x1e] = param_1 + 0x20;
  param_1[0x1c] = param_1 + 0x1e;
  param_1[0x1a] = param_1 + 0x1c;
  param_1[0x18] = param_1 + 0x1a;
  param_1[0x16] = param_1 + 0x18;
  param_1[0x14] = param_1 + 0x16;
  param_1[0x12] = param_1 + 0x14;
  *param_1 = &PTR_LAB_049ffc28;
  param_1[1] = &PTR_LAB_049ffc88;
  param_1[0x10] = param_1 + 0x12;
  bVar1 = DAT_0548e140;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[0x56] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (7 < bVar1) {
    bVar1 = 0xff;
  }
  *(byte *)(param_1 + 2) = bVar1;
  param_1[0xe] = param_1 + 0x10;
  param_1[0xc] = param_1 + 0xe;
  param_1[0x20] = param_1 + 0x22;
  param_1[10] = param_1 + 0xc;
  param_1[0x22] = param_1 + 0x24;
  param_1[0x24] = param_1 + 0x26;
  param_1[0x26] = param_1 + 0x28;
  param_1[0x28] = param_1 + 0x2a;
  param_1[0x2a] = param_1 + 0x2c;
  param_1[0x2c] = param_1 + 0x2e;
  param_1[0x2e] = param_1 + 0x30;
  puVar2 = param_1 + 8;
  *puVar2 = param_1 + 10;
  param_1[0x30] = param_1 + 0x32;
  param_1[0x32] = param_1 + 0x34;
  param_1[6] = puVar2;
  param_1[7] = puVar2;
  param_1[0x34] = param_1 + 0x36;
  param_1[0x36] = param_1 + 0x38;
  param_1[0x38] = param_1 + 0x3a;
  param_1[0x3a] = param_1 + 0x3c;
  param_1[0x3c] = param_1 + 0x3e;
  param_1[0x3e] = param_1 + 0x40;
  param_1[0x40] = param_1 + 0x42;
  param_1[0x42] = param_1 + 0x44;
  param_1[0x44] = param_1 + 0x46;
  param_1[0x46] = param_1 + 0x48;
  param_1[0x48] = param_1 + 0x4a;
  param_1[0x4a] = param_1 + 0x4c;
  param_1[0x4c] = param_1 + 0x4e;
  param_1[0x4e] = param_1 + 0x50;
  param_1[0x50] = param_1 + 0x52;
  param_1[0x52] = param_1 + 0x54;
  param_1[0x54] = param_1 + 0x56;
  if (param_1 + 0x58 != (undefined8 *)0x0) {
    param_1[4] = 0x2800000000;
    param_1[5] = param_1 + 0x58;
  }
  memset(param_1 + 0x80,0,0xeab0);
  *param_1 = &PTR_LAB_049ffb90;
  param_1[1] = &PTR_LAB_049ffbf0;
  return;
}

