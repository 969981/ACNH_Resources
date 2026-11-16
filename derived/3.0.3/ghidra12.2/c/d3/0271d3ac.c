
void FUN_0271d3ac(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
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
  param_1[0xc] = 0;
  *param_1 = &PTR_LAB_04a8e4b0;
  lVar2 = param_1[2];
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = lVar2 + 0x10c;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[7] = &DAT_04a8c890;
  param_1[0xe] = &PTR_LAB_04a8eee0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar2 + 4;
  param_1[3] = param_1 + 0xe;
  param_1[0x12] = param_1 + 7;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = lVar2 + 4;
  puVar1 = PTR_DAT_04bb4c38 + 0x10;
  param_1[0x1a] = 0;
  puVar3 = param_1 + 0x1c;
  *puVar3 = &PTR_LAB_04a8ef40;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x21] = 0;
  param_1[0x15] = puVar1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x11] = puVar3;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar2 + 8;
  param_1[0x25] = lVar2 + 8;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x1f] = param_1 + 0x23;
  param_1[0x20] = param_1 + 0x15;
  param_1[0x23] = &PTR_LAB_04a8efa0;
  param_1[0x24] = 0;
  FUN_0270e78c(param_1 + 0x2a);
  param_1[0x23] = &PTR_LAB_04a8ef70;
  lVar2 = param_1[0x11];
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *puVar3 = &PTR_LAB_04a8ef10;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x11] = param_1 + 0x77;
  param_1[0x79] = param_1[0x10] + 0x18;
  if (lVar2 != 0) {
    param_1[0x7b] = lVar2;
  }
  param_1[0x80] = param_1[0x10] + 0x18;
  param_1[0x7e] = &DAT_04a8f030;
  param_1[0x77] = &PTR_LAB_04a8f000;
  param_1[0x7a] = param_1 + 0x7e;
  param_1[0xe] = &PTR_LAB_04a8eeb0;
  lVar2 = param_1[3];
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x87] = param_1[2] + 0x24;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[3] = param_1 + 0x85;
  if (lVar2 != 0) {
    param_1[0x89] = lVar2;
  }
  param_1[0x85] = &DAT_04a80468;
  return;
}

