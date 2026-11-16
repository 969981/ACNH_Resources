
void FUN_02736e04(undefined8 *param_1,long param_2,undefined8 param_3)

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
  *param_1 = &PTR_LAB_04a90858;
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
  param_1[7] = PTR_DAT_04bc30b0 + 0x10;
  FUN_023527a4(param_1 + 0xe);
  lVar1 = param_1[10];
  param_1[0x636] = 0;
  param_1[0x639] = 0;
  lVar3 = param_1[9] + 0x1d00;
  param_1[0x637] = lVar3;
  puVar2 = PTR_DAT_04bc30b8;
  param_1[0x63a] = 0;
  param_1[0xe] = puVar2 + 0x10;
  *(undefined1 *)(param_1 + 0x63b) = 0;
  param_1[10] = param_1 + 0x635;
  if (lVar1 != 0) {
    param_1[0x639] = lVar1;
  }
  param_1[0x63d] = 0;
  puVar2 = PTR_DAT_04bc30d8;
  param_1[0x63e] = lVar3;
  *(undefined1 *)(param_1 + 0x642) = 0;
  param_1[0x638] = param_1 + 0x63c;
  param_1[0x63f] = 0;
  param_1[0x635] = puVar2 + 0x10;
  param_1[0x640] = 0;
  param_1[0x641] = 0;
  param_1[0x63c] = &DAT_04a80438;
  FUN_007e9590(param_1 + 0x643,param_1 + 0x635,param_1[9] + 0x1d10);
  param_1[0x7b1] = param_1[9] + 0x1fb8;
  param_1[0x7b0] = 0;
  param_1[0x7b2] = 0;
  param_1[0x643] = &PTR_LAB_04917010;
  param_1[0x7b3] = 0;
  param_1[0x7b4] = 0;
  param_1[0x635] = &PTR_LAB_04a803d8;
  *(undefined1 *)(param_1 + 0x7b5) = 0;
  if (param_1[10] != 0) {
    param_1[0x7b3] = param_1[10];
  }
  param_1[0x7b7] = 0;
  puVar2 = PTR_DAT_04bc30e8;
  param_1[0x7b8] = param_1[9] + 0x1fc0;
  param_1[0x7b9] = 0;
  *(undefined1 *)(param_1 + 0x7bc) = 0;
  param_1[10] = param_1 + 0x7b6;
  param_1[0x7bb] = 0;
  param_1[0x7ba] = param_1 + 0x7af;
  param_1[0x7af] = puVar2 + 0x10;
  param_1[0x7b6] = puVar2 + 0x10;
  param_1[0x7be] = 0;
  param_1[0x7c0] = 0;
  param_1[0x7c1] = 0;
  param_1[0x7c2] = 0;
  param_1[7] = &PTR_LAB_04a80258;
  *(undefined1 *)(param_1 + 0x7c3) = 0;
  lVar3 = param_1[3];
  param_1[3] = param_1 + 0x7bd;
  param_1[0x7bf] = param_1[2] + 0x1fc8;
  if (lVar3 != 0) {
    param_1[0x7c1] = lVar3;
  }
  param_1[0x7bd] = &PTR_LAB_04a908b8;
  FUN_027372b4(param_1 + 0x7c4);
  param_1[0x7bd] = &PTR_LAB_04a90888;
  lVar3 = param_1[2];
  *(undefined1 *)(param_1 + 0x2c21) = 0;
  param_1[0x2c1f] = 0;
  param_1[0x2c20] = 0;
  param_1[0x2c1c] = 0;
  param_1[0x2c1d] = lVar3 + 0xaf88;
  if (param_1[3] != 0) {
    param_1[0x2c1f] = param_1[3];
  }
  param_1[0x2c23] = 0;
  param_1[0x2c24] = lVar3 + 0xaf88;
  param_1[0x2c25] = 0;
  param_1[0x2c26] = 0;
  param_1[0x2c27] = 0;
  *(undefined1 *)(param_1 + 0x2c28) = 0;
  param_1[0x2c2e] = 0;
  param_1[0x2c22] = &DAT_04a80498;
  param_1[0x2c2a] = 0;
  param_1[0x2c2b] = lVar3 + 0xaf89;
  *(undefined1 *)(param_1 + 0x2c2f) = 0;
  param_1[0x2c2c] = 0;
  param_1[0x2c2d] = 0;
  param_1[0x2c2d] = param_1 + 0x2c22;
  param_1[0x2c1b] = &PTR_LAB_04a90a38;
  param_1[0x2c29] = &DAT_04a8ee20;
  param_1[0x2c1e] = param_1 + 0x2c29;
  param_1[3] = param_1 + 0x2c30;
  param_1[0x2c32] = lVar3 + 0xaf8a;
  param_1[0x2c37] = &DAT_04a8ee20;
  param_1[0x2c3e] = &DAT_04a80498;
  *(undefined1 *)(param_1 + 0x2c44) = 0;
  param_1[0x2c33] = param_1 + 0x2c3e;
  *(undefined1 *)(param_1 + 0x2c36) = 0;
  param_1[0x2c35] = 0;
  param_1[0x2c34] = param_1 + 0x2c1b;
  *(undefined1 *)(param_1 + 0x2c3d) = 0;
  param_1[0x2c3a] = 0;
  param_1[0x2c41] = 0;
  param_1[0x2c38] = 0;
  param_1[0x2c39] = lVar3 + 0xaf8a;
  param_1[0x2c42] = 0;
  param_1[0x2c43] = 0;
  param_1[0x2c42] = param_1 + 0x2c37;
  param_1[0x2c3b] = 0;
  param_1[0x2c3c] = 0;
  param_1[0x2c3f] = 0;
  param_1[0x2c40] = lVar3 + 0xaf8b;
  param_1[0x2c30] = &PTR_LAB_04a90a68;
  param_1[0x2c31] = 0;
  FUN_02352bec(param_1 + 0x2c45,param_1,lVar3 + 0xaf90);
  param_1[0x2c45] = &PTR_LAB_04a804c8;
  return;
}

