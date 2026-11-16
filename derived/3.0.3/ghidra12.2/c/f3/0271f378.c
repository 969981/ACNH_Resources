
void FUN_0271f378(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
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
  *param_1 = &PTR_LAB_04a8e8a0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[3] = param_1 + 7;
  param_1[8] = 0;
  param_1[9] = param_1[2] + 2;
  if (lVar3 != 0) {
    param_1[0xb] = lVar3;
  }
  param_1[7] = &DAT_04a8f390;
  FUN_0271f6d8(param_1 + 0xe,param_1,param_1[2] + 4);
  lVar3 = param_1[3];
  param_1[0xda] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xe] = &PTR_LAB_04a8e8d0;
  param_1[0xde] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  param_1[3] = param_1 + 0xd9;
  param_1[0xdb] = param_1[2] + 0x1560;
  if (lVar3 != 0) {
    param_1[0xdd] = lVar3;
  }
  param_1[0xd9] = &PTR_LAB_04a8ea30;
  FUN_0271fbb0(param_1 + 0xe0);
  lVar2 = param_1[3];
  param_1[0xd9] = &PTR_LAB_04a8ea00;
  param_1[0x10b] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  lVar3 = param_1[2] + 0x1568;
  *(undefined1 *)(param_1 + 0x110) = 0;
  param_1[3] = param_1 + 0x10a;
  param_1[0x10c] = lVar3;
  if (lVar2 != 0) {
    param_1[0x10e] = lVar2;
  }
  param_1[0x112] = 0;
  param_1[0x113] = lVar3;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  *(undefined1 *)(param_1 + 0x117) = 0;
  puVar1 = PTR_DAT_04bb4c38 + 0x10;
  param_1[0x10a] = &PTR_LAB_04a8eee0;
  lVar3 = param_1[2] + 0x156c;
  param_1[0x111] = puVar1;
  param_1[0x118] = &PTR_LAB_04a8ef40;
  param_1[0x119] = 0;
  param_1[0x11a] = lVar3;
  param_1[0x11d] = 0;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  param_1[0x10d] = param_1 + 0x118;
  param_1[0x11c] = param_1 + 0x111;
  param_1[0x120] = 0;
  param_1[0x121] = lVar3;
  *(undefined1 *)(param_1 + 0x125) = 0;
  param_1[0x124] = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[0x11b] = param_1 + 0x11f;
  param_1[0x11f] = &PTR_LAB_04a8efa0;
  FUN_0270e78c(param_1 + 0x126);
  param_1[0x11f] = &PTR_LAB_04a8ef70;
  lVar3 = param_1[0x10d];
  param_1[0x174] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x118] = &PTR_LAB_04a8ef10;
  *(undefined1 *)(param_1 + 0x179) = 0;
  param_1[0x10d] = param_1 + 0x173;
  param_1[0x175] = param_1[0x10c] + 0x18;
  if (lVar3 != 0) {
    param_1[0x177] = lVar3;
  }
  param_1[0x17c] = param_1[0x10c] + 0x18;
  param_1[0x176] = param_1 + 0x17a;
  param_1[0x17a] = &DAT_04a8f030;
  lVar3 = param_1[3];
  param_1[0x173] = &PTR_LAB_04a8f000;
  param_1[0x10a] = &PTR_LAB_04a8eeb0;
  param_1[0x17b] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  param_1[0x182] = 0;
  param_1[0x183] = param_1[2] + 0x1584;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  *(undefined1 *)(param_1 + 0x187) = 0;
  param_1[3] = param_1 + 0x181;
  if (lVar3 != 0) {
    param_1[0x185] = lVar3;
  }
  param_1[0x181] = &DAT_04a8c890;
  return;
}

