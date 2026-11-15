
void FUN_023527a4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar3 != 0) {
      param_1[4] = lVar3;
    }
  }
  lVar3 = param_1[3];
  *param_1 = &PTR_LAB_04a802e8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[3] = param_1 + 7;
  param_1[8] = 0;
  param_1[9] = param_1[2];
  if (lVar3 != 0) {
    param_1[0xb] = lVar3;
  }
  param_1[7] = &PTR_LAB_04a80348;
  FUN_02352bec(param_1 + 0xe);
  lVar3 = param_1[10];
  param_1[0x326] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0xe] = &PTR_LAB_04a804c8;
  param_1[0x32a] = 0;
  *(undefined1 *)(param_1 + 0x32b) = 0;
  param_1[10] = param_1 + 0x325;
  param_1[0x327] = param_1[9] + 0x1190;
  if (lVar3 != 0) {
    param_1[0x329] = lVar3;
  }
  lVar1 = param_1[3];
  param_1[7] = &PTR_LAB_04a80318;
  param_1[0x32d] = 0;
  param_1[0x330] = 0;
  lVar3 = param_1[2] + 0x1198;
  param_1[0x325] = &DAT_04a80468;
  param_1[0x331] = 0;
  param_1[0x32e] = lVar3;
  *(undefined1 *)(param_1 + 0x332) = 0;
  param_1[3] = param_1 + 0x32c;
  if (lVar1 != 0) {
    param_1[0x330] = lVar1;
  }
  param_1[0x335] = lVar3;
  param_1[0x32c] = &PTR_LAB_04a803a8;
  param_1[0x33c] = lVar3;
  param_1[0x333] = &PTR_LAB_04a80558;
  param_1[0x334] = 0;
  param_1[0x337] = 0;
  param_1[0x338] = 0;
  *(undefined1 *)(param_1 + 0x339) = 0;
  param_1[0x32f] = param_1 + 0x333;
  param_1[0x33b] = 0;
  param_1[0x33d] = 0;
  param_1[0x33e] = 0;
  param_1[0x33f] = 0;
  *(undefined1 *)(param_1 + 0x340) = 0;
  param_1[0x336] = param_1 + 0x33a;
  param_1[0x33a] = &DAT_04a80468;
  FUN_007e9bd0(param_1 + 0x341,param_1 + 0x333,param_1[2] + 0x11a0);
  param_1[0x333] = &PTR_LAB_04a80528;
  param_1[0x4a7] = 0;
  param_1[0x4a8] = param_1[0x32e] + 0x8b0;
  puVar2 = PTR_DAT_04bb4c48;
  param_1[0x4a9] = 0;
  param_1[0x4aa] = 0;
  param_1[0x4ab] = 0;
  *(undefined1 *)(param_1 + 0x4ac) = 0;
  param_1[0x341] = puVar2 + 0x10;
  if (param_1[0x32f] != 0) {
    param_1[0x4aa] = param_1[0x32f];
  }
  puVar2 = PTR_DAT_04bb4c40;
  param_1[0x4af] = param_1[0x32e] + 0x8b1;
  *(undefined1 *)(param_1 + 0x4b3) = 0;
  param_1[0x4b1] = param_1 + 0x4a6;
  param_1[0x32f] = param_1 + 0x4ad;
  param_1[0x32c] = &PTR_LAB_04a80378;
  param_1[0x4a6] = puVar2 + 0x10;
  param_1[0x4ad] = &DAT_04a80498;
  lVar3 = param_1[3];
  param_1[0x4ae] = 0;
  param_1[0x4b0] = 0;
  param_1[0x4b2] = 0;
  param_1[0x4b5] = 0;
  param_1[0x4b7] = 0;
  param_1[0x4b8] = 0;
  param_1[0x4b9] = 0;
  *(undefined1 *)(param_1 + 0x4ba) = 0;
  param_1[0x4b6] = param_1[2] + 0x1a50;
  param_1[3] = param_1 + 0x4b4;
  if (lVar3 != 0) {
    param_1[0x4b8] = lVar3;
  }
  param_1[0x4b4] = &DAT_04a80468;
  FUN_007e9590(param_1 + 0x4bb,param_1,param_1[2] + 0x1a58);
  param_1[0x4bb] = &PTR_LAB_04917010;
  return;
}

