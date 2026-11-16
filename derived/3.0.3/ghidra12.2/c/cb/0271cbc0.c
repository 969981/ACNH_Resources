
void FUN_0271cbc0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar1 != 0) {
      param_1[4] = lVar1;
    }
  }
  param_1[0xc] = 0;
  *param_1 = &PTR_LAB_04a8e1e0;
  lVar1 = param_1[2];
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = lVar1;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  param_1[0xf] = 0;
  param_1[0x10] = lVar1 + 0xc;
  param_1[0x12] = param_1 + 7;
  param_1[0x13] = 0;
  param_1[0xe] = &DAT_04a8f030;
  param_1[0x16] = 0;
  param_1[0x17] = lVar1 + 0x10;
  param_1[0x19] = param_1 + 0xe;
  param_1[0x1a] = 0;
  param_1[7] = &DAT_04a8e0c0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = &DAT_04a8d2d0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x20] = param_1 + 0x15;
  param_1[0x21] = 0;
  param_1[0x1c] = &DAT_04a8e0c0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar1 + 0x14;
  param_1[0x25] = lVar1 + 0x20;
  param_1[0x26] = 0;
  param_1[0x27] = param_1 + 0x1c;
  param_1[0x28] = 0;
  param_1[3] = param_1 + 0x2a;
  param_1[0x23] = &DAT_04a8f030;
  param_1[0x24] = 0;
  param_1[0x2c] = lVar1 + 0x24;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x23;
  param_1[0x2f] = 0;
  param_1[0x2a] = &DAT_04a8d2d0;
  param_1[0x2b] = 0;
  FUN_02719548(param_1 + 0x31,param_1,lVar1 + 0x28);
  lVar1 = param_1[2];
  param_1[0x31] = &PTR_LAB_04a8ee50;
  param_1[0x120] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  *(undefined1 *)(param_1 + 0x125) = 0;
  param_1[0x121] = lVar1 + 0x60;
  if (param_1[3] != 0) {
    param_1[0x123] = param_1[3];
  }
  param_1[0x11f] = &DAT_04a8f030;
  param_1[0x12a] = param_1 + 0x11f;
  param_1[0x127] = 0;
  param_1[0x128] = lVar1 + 100;
  param_1[0x129] = 0;
  param_1[299] = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  param_1[0x126] = &DAT_04a8f030;
  param_1[0x12e] = 0;
  param_1[0x12f] = lVar1 + 0x68;
  param_1[0x130] = 0;
  param_1[0x132] = 0;
  *(undefined1 *)(param_1 + 0x133) = 0;
  param_1[3] = param_1 + 0x12d;
  param_1[0x131] = param_1 + 0x126;
  param_1[0x12d] = &DAT_04a8f030;
  return;
}

