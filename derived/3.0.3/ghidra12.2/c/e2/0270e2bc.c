
void FUN_0270e2bc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
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
  *param_1 = &PTR_LAB_04a8c440;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = param_1[2] + 0x38;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  puVar5 = param_1 + 0xe;
  *puVar5 = &PTR_LAB_04a8c4d0;
  lVar3 = param_1[2] + 0x138;
  param_1[0xf] = 0;
  param_1[0x10] = lVar3;
  *(undefined1 *)(param_1 + 0x14) = 0;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_LAB_04a8c530;
  param_1[7] = &DAT_04a8c470;
  param_1[3] = puVar5;
  param_1[0x12] = param_1 + 7;
  param_1[0x13] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x11] = puVar4;
  param_1[0x16] = 0;
  param_1[0x17] = lVar3;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_0270e78c(param_1 + 0x1c,puVar4);
  lVar2 = param_1[3];
  *puVar4 = &PTR_LAB_04a8c500;
  *puVar5 = &PTR_LAB_04a8c4a0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  lVar3 = param_1[2] + 0x5c4;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[3] = param_1 + 0x69;
  param_1[0x6b] = lVar3;
  if (lVar2 != 0) {
    param_1[0x6d] = lVar2;
  }
  param_1[0x72] = lVar3;
  param_1[0x71] = 0;
  lVar3 = param_1[2] + 0x5c8;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x69] = &PTR_LAB_04a8f120;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  puVar1 = PTR_DAT_04bb4c38 + 0x10;
  param_1[0x77] = &PTR_LAB_04a8f180;
  param_1[0x70] = puVar1;
  param_1[0x78] = 0;
  param_1[0x79] = lVar3;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x6c] = param_1 + 0x77;
  param_1[0x7b] = param_1 + 0x70;
  param_1[0x7f] = 0;
  param_1[0x80] = lVar3;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = &PTR_LAB_04a8f1e0;
  param_1[0x7a] = param_1 + 0x7e;
  FUN_0270e78c(param_1 + 0x85);
  param_1[0xd3] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0x7e] = &PTR_LAB_04a8f1b0;
  param_1[0x77] = &PTR_LAB_04a8f150;
  param_1[0xd7] = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  param_1[0xd4] = param_1[0x6b] + 0x18;
  lVar3 = param_1[0x6c];
  param_1[0x6c] = param_1 + 0xd2;
  if (lVar3 != 0) {
    param_1[0xd6] = lVar3;
  }
  param_1[0x69] = &PTR_LAB_04a8f0f0;
  lVar3 = param_1[3];
  param_1[0xdb] = param_1[2] + 0x5e0;
  param_1[0xda] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  param_1[0xd2] = &PTR_LAB_04916e90;
  param_1[3] = param_1 + 0xd9;
  if (lVar3 != 0) {
    param_1[0xdd] = lVar3;
  }
  param_1[0xd9] = &DAT_04a8f090;
  return;
}

