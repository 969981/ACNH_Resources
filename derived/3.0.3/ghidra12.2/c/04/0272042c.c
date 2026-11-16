
void FUN_0272042c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
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
    lVar2 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar2 != 0) {
      param_1[4] = lVar2;
    }
  }
  memset(param_1 + 0xd,0,400);
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x13] = 0;
  puVar1 = param_1 + 7;
  *puVar1 = &DAT_04a90708;
  puVar5 = param_1 + 0xe;
  *puVar5 = &DAT_04a90708;
  puVar4 = param_1 + 0x15;
  *puVar4 = &DAT_04a90708;
  puVar3 = param_1 + 0x1c;
  *puVar3 = &DAT_04a90708;
  param_1[0x23] = &DAT_04a90708;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x2a] = &DAT_04a90708;
  param_1[0x2b] = 0;
  param_1[0x31] = &DAT_04a90708;
  param_1[0x32] = 0;
  param_1[0x38] = &DAT_04a90708;
  param_1[0x39] = 0;
  *param_1 = &PTR_LAB_04a8eb80;
  lVar2 = param_1[3];
  param_1[3] = puVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (lVar2 != 0) {
    param_1[0xb] = lVar2;
  }
  param_1[9] = param_3;
  FUN_026400e0(puVar1,param_3);
  lVar2 = param_1[3];
  param_1[3] = puVar5;
  if (lVar2 != 0) {
    param_1[0x12] = lVar2;
  }
  param_1[0x10] = param_1[0x10] + param_3 + 3;
  FUN_026400e0(puVar5);
  lVar2 = param_1[3];
  param_1[3] = puVar4;
  if (lVar2 != 0) {
    param_1[0x19] = lVar2;
  }
  param_1[0x17] = param_1[0x17] + param_3 + 6;
  FUN_026400e0(puVar4);
  lVar2 = param_1[3];
  param_1[3] = puVar3;
  if (lVar2 != 0) {
    param_1[0x20] = lVar2;
  }
  param_1[0x1e] = param_1[0x1e] + param_3 + 9;
  FUN_026400e0(puVar3);
  lVar2 = param_1[3];
  param_1[3] = param_1 + 0x23;
  if (lVar2 != 0) {
    param_1[0x27] = lVar2;
  }
  param_1[0x25] = param_1[0x25] + param_3 + 0xc;
  FUN_026400e0(param_1 + 0x23);
  lVar2 = param_1[3];
  param_1[3] = param_1 + 0x2a;
  if (lVar2 != 0) {
    param_1[0x2e] = lVar2;
  }
  param_1[0x2c] = param_1[0x2c] + param_3 + 0xf;
  FUN_026400e0(param_1 + 0x2a);
  lVar2 = param_1[3];
  param_1[3] = param_1 + 0x31;
  if (lVar2 != 0) {
    param_1[0x35] = lVar2;
  }
  param_1[0x33] = param_1[0x33] + param_3 + 0x12;
  FUN_026400e0(param_1 + 0x31);
  lVar2 = param_1[3];
  param_1[3] = param_1 + 0x38;
  if (lVar2 != 0) {
    param_1[0x3c] = lVar2;
  }
  param_1[0x3a] = param_1[0x3a] + param_3 + 0x15;
  FUN_026400e0(param_1 + 0x38);
  return;
}

