
void FUN_02726a4c(undefined8 *param_1,long param_2,undefined8 param_3)

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
  *param_1 = &PTR_LAB_04a8ac60;
  lVar1 = param_1[2];
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = lVar1;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[7] = &DAT_04a90588;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar1 + 0x1564;
  param_1[0xe] = &DAT_04a8ac90;
  param_1[3] = param_1 + 0xe;
  param_1[0x12] = param_1 + 7;
  param_1[0x13] = 0;
  FUN_02727268(param_1 + 0x15,param_1,lVar1 + 0x1764);
  param_1[0x15] = &PTR_LAB_04a8acd0;
  FUN_02726c80(param_1 + 0x1ea,param_1,param_1[2] + 0x4230);
  FUN_02726c80(param_1 + 0x20d,param_1,param_1[2] + 0x4238);
  param_1[0x231] = 0;
  *(undefined1 *)(param_1 + 0x236) = 0;
  param_1[0x233] = 0;
  lVar1 = param_1[2];
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  param_1[0x232] = lVar1 + 0x4240;
  if (param_1[3] != 0) {
    param_1[0x234] = param_1[3];
  }
  param_1[0x238] = 0;
  param_1[0x230] = &DAT_04a8ad90;
  param_1[0x23a] = 0;
  param_1[0x239] = lVar1 + 0x4840;
  param_1[0x240] = lVar1 + 0x4844;
  *(undefined1 *)(param_1 + 0x23d) = 0;
  param_1[0x23b] = param_1 + 0x230;
  param_1[0x237] = &DAT_04a8cd90;
  *(undefined1 *)(param_1 + 0x244) = 0;
  param_1[3] = param_1 + 0x23e;
  param_1[0x23c] = 0;
  param_1[0x23f] = 0;
  param_1[0x241] = 0;
  param_1[0x243] = 0;
  param_1[0x242] = param_1 + 0x237;
  param_1[0x23e] = &DAT_04a8d240;
  FUN_02726e14(param_1 + 0x245,param_1,lVar1 + 0x4848);
  return;
}

