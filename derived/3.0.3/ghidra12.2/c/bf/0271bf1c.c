
void FUN_0271bf1c(undefined8 *param_1,long param_2,undefined8 param_3)

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
  *param_1 = &PTR_LAB_04a8e030;
  FUN_0271c1c4(param_1 + 7,param_1,param_1[2]);
  lVar1 = param_1[3];
  param_1[0x71] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[3] = param_1 + 0x70;
  param_1[0x72] = param_1[2] + 0x1c;
  if (lVar1 != 0) {
    param_1[0x74] = lVar1;
  }
  param_1[0x70] = &DAT_04a8e0c0;
  FUN_0271c4b4(param_1 + 0x77,param_1,param_1[2] + 0x34);
  FUN_0271c4b4(param_1 + 0xaf,param_1,param_1[2] + 0x3b);
  lVar1 = param_1[2];
  param_1[0xe8] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  param_1[0xe9] = lVar1 + 0x28;
  if (param_1[3] != 0) {
    param_1[0xeb] = param_1[3];
  }
  param_1[0xe7] = &DAT_04a8e0c0;
  param_1[3] = param_1 + 0xee;
  param_1[0xef] = 0;
  param_1[0xf0] = lVar1 + 0x78;
  param_1[0xf3] = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  param_1[0xf2] = param_1 + 0xe7;
  param_1[0xee] = &PTR_LAB_04a8eee0;
  param_1[0xf6] = 0;
  param_1[0xf7] = lVar1 + 0x78;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  param_1[0xf5] = PTR_DAT_04bb4c38 + 0x10;
  param_1[0xfc] = &PTR_LAB_04a8ef40;
  param_1[0xfd] = 0;
  param_1[0xfe] = lVar1 + 0x7c;
  param_1[0x101] = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  param_1[0xf1] = param_1 + 0xfc;
  param_1[0x100] = param_1 + 0xf5;
  param_1[0x104] = 0;
  param_1[0x105] = lVar1 + 0x7c;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  param_1[0xff] = param_1 + 0x103;
  param_1[0x103] = &PTR_LAB_04a8efa0;
  FUN_0270e78c(param_1 + 0x10a);
  param_1[0x103] = &PTR_LAB_04a8ef70;
  lVar1 = param_1[0xf1];
  param_1[0x158] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0xfc] = &PTR_LAB_04a8ef10;
  *(undefined1 *)(param_1 + 0x15d) = 0;
  param_1[0xf1] = param_1 + 0x157;
  param_1[0x159] = param_1[0xf0] + 0x18;
  if (lVar1 != 0) {
    param_1[0x15b] = lVar1;
  }
  param_1[0x160] = param_1[0xf0] + 0x18;
  param_1[0x15e] = &DAT_04a8f030;
  param_1[0x157] = &PTR_LAB_04a8f000;
  param_1[0x15f] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  param_1[0x15a] = param_1 + 0x15e;
  param_1[0xee] = &PTR_LAB_04a8eeb0;
  return;
}

