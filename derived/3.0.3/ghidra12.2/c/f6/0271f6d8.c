
void FUN_0271f6d8(undefined8 *param_1,long param_2,undefined8 param_3)

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
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a8e900;
  lVar1 = param_1[2];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = lVar1;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  param_1[0x13] = 0;
  param_1[0x19] = param_1 + 7;
  param_1[0x1a] = 0;
  param_1[0xe] = &DAT_04a8e960;
  param_1[7] = &PTR_LAB_04a8e930;
  param_1[3] = param_1 + 0x15;
  param_1[10] = param_1 + 0xe;
  param_1[0x1c] = &DAT_04a8e9c8;
  param_1[0x17] = lVar1 + 0xe10;
  param_1[0x18] = param_1 + 0x1c;
  param_1[0xf] = 0;
  param_1[0x10] = lVar1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar1 + 0xe10;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x15] = &PTR_LAB_04a8e998;
  param_1[0x16] = 0;
  FUN_0270fcb4(param_1 + 0x23,param_1,lVar1 + 0x1518);
  lVar1 = param_1[3];
  param_1[0x23] = &PTR_LAB_04a8c770;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[3] = param_1 + 0x69;
  param_1[0x6b] = param_1[2] + 0x153c;
  if (lVar1 != 0) {
    param_1[0x6d] = lVar1;
  }
  param_1[0x69] = &DAT_04a90588;
  FUN_027136b8(param_1 + 0x70,param_1,param_1[2] + 0x1540);
  param_1[0x70] = &PTR_LAB_04a8d270;
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1[0xbf] = param_1[2] + 0x1554;
  if (param_1[3] != 0) {
    param_1[0xc1] = param_1[3];
  }
  param_1[0xc5] = 0;
  param_1[0xbd] = &DAT_04a8cd90;
  param_1[199] = 0;
  param_1[0xc9] = 0;
  param_1[0xc6] = param_1[2] + 0x1558;
  *(undefined1 *)(param_1 + 0xca) = 0;
  param_1[3] = param_1 + 0xc4;
  param_1[200] = param_1 + 0xbd;
  param_1[0xc4] = &DAT_04a8d240;
  return;
}

