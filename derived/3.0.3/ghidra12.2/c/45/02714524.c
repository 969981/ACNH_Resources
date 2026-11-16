
void FUN_02714524(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar2 != 0) {
      param_1[4] = lVar2;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a8d4e0;
  lVar2 = param_1[2];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = lVar2 + 4;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  param_1[0xf] = 0;
  param_1[0x10] = lVar2 + 4;
  param_1[0xe] = &DAT_04a8d540;
  param_1[7] = &PTR_LAB_04a8d510;
  param_1[3] = param_1 + 0x15;
  param_1[0x19] = param_1 + 7;
  param_1[0x1a] = 0;
  param_1[10] = param_1 + 0xe;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x1c] = &DAT_04a8d5a8;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x17] = lVar2 + 0xb14;
  param_1[0x18] = param_1 + 0x1c;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar2 + 0xb14;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x15] = &PTR_LAB_04a8d578;
  param_1[0x16] = 0;
  FUN_0270fcb4(param_1 + 0x23,param_1,lVar2 + 0x109c);
  param_1[0x23] = &PTR_LAB_04a8c770;
  FUN_027136b8(param_1 + 0x69,param_1,param_1[2] + 0x10c0);
  lVar2 = param_1[2];
  param_1[0x69] = &PTR_LAB_04a8d270;
  param_1[0xb7] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  param_1[0xb8] = lVar2 + 0x10d4;
  if (param_1[3] != 0) {
    param_1[0xba] = param_1[3];
  }
  param_1[0xbe] = 0;
  puVar1 = PTR_DAT_04bc30e8;
  param_1[0xc1] = param_1 + 0xb6;
  param_1[0xc4] = &PTR_LAB_04a8fa50;
  param_1[0xc0] = 0;
  param_1[0xb6] = puVar1 + 0x10;
  param_1[0xbd] = puVar1 + 0x10;
  param_1[0xc2] = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1[0xbf] = lVar2 + 0x10dc;
  param_1[0xc5] = 0;
  param_1[0xc6] = lVar2 + 0x10e4;
  param_1[0xc9] = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  param_1[3] = param_1 + 0xc4;
  param_1[200] = param_1 + 0xbd;
  param_1[0xcc] = 0;
  param_1[0xcd] = lVar2 + 0x10e4;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[199] = param_1 + 0xcb;
  param_1[0xcb] = &PTR_LAB_04a8fab0;
  FUN_0270917c(param_1 + 0xd2);
  param_1[0xcb] = &PTR_LAB_04a8fa80;
  param_1[0xc4] = &PTR_LAB_04a8fa20;
  return;
}

