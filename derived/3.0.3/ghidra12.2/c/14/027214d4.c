
void FUN_027214d4(undefined8 *param_1,long param_2,undefined8 param_3)

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
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a8eca0;
  lVar3 = param_1[2];
  lVar2 = param_1[3];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = param_1 + 7;
  param_1[8] = 0;
  param_1[9] = lVar3;
  if (lVar2 != 0) {
    param_1[0xb] = lVar2;
  }
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar3;
  param_1[7] = &PTR_LAB_04a8eee0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_04bb4c38 + 0x10;
  *(undefined1 *)(param_1 + 0x14) = 0;
  puVar5 = param_1 + 0x15;
  *puVar5 = &PTR_LAB_04a8ef40;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  puVar4 = param_1 + 0x1c;
  *puVar4 = &PTR_LAB_04a8efa0;
  param_1[10] = puVar5;
  param_1[0xe] = puVar1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = 0;
  param_1[0x18] = puVar4;
  param_1[0x16] = 0;
  param_1[0x17] = lVar3 + 4;
  param_1[0x19] = param_1 + 0xe;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar3 + 4;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_0270e78c(param_1 + 0x23,puVar4);
  *puVar4 = &PTR_LAB_04a8ef70;
  lVar3 = param_1[10];
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *puVar5 = &PTR_LAB_04a8ef10;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[10] = param_1 + 0x70;
  param_1[0x72] = param_1[9] + 0x18;
  if (lVar3 != 0) {
    param_1[0x74] = lVar3;
  }
  param_1[0x79] = param_1[9] + 0x18;
  param_1[0x77] = &DAT_04a8f030;
  param_1[0x70] = &PTR_LAB_04a8f000;
  param_1[0x73] = param_1 + 0x77;
  param_1[7] = &PTR_LAB_04a8eeb0;
  lVar3 = param_1[3];
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = param_1[2] + 0x1c;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[3] = param_1 + 0x7e;
  if (lVar3 != 0) {
    param_1[0x82] = lVar3;
  }
  param_1[0x7e] = &DAT_04a8ecd0;
  return;
}

