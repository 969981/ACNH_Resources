
void FUN_02727268(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *__s;
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
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
  lVar3 = param_1[2];
  *param_1 = &PTR_LAB_04a8ad00;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = lVar3;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  puVar2 = PTR_DAT_04bc30c8;
  param_1[0xf] = 0;
  param_1[0x10] = lVar3 + 1;
  lVar5 = lVar3 + 0x14;
  param_1[7] = &DAT_04a8fe70;
  param_1[0x11] = 0;
  param_1[0x12] = param_1 + 7;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0xe] = puVar2 + 0x10;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = lVar3 + 2;
  param_1[0x15] = puVar2 + 0x10;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar3 + 4;
  param_1[0x1c] = &DAT_04a8f390;
  __s = param_1 + 0x3f;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x19] = param_1 + 0xe;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x20] = param_1 + 0x15;
  param_1[0x21] = 0;
  param_1[0x2e] = param_1 + 0x23;
  param_1[0x2f] = 0;
  param_1[0x25] = lVar3 + 6;
  param_1[0x26] = 0;
  param_1[0x27] = param_1 + 0x1c;
  param_1[0x28] = 0;
  param_1[0x23] = &DAT_04a8f390;
  param_1[0x24] = 0;
  param_1[0x2c] = lVar3 + 8;
  param_1[0x2d] = 0;
  param_1[0x2a] = &DAT_04a8f390;
  param_1[0x2b] = 0;
  param_1[0x33] = lVar3 + 0xc;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x31] = &DAT_04a80468;
  param_1[0x32] = 0;
  param_1[3] = param_1 + 0x38;
  param_1[0x35] = param_1 + 0x2a;
  param_1[0x36] = 0;
  param_1[0x3a] = lVar5;
  param_1[0x3b] = 0;
  param_1[0x3c] = param_1 + 0x31;
  param_1[0x3d] = 0;
  param_1[0x38] = &DAT_04a882f0;
  param_1[0x39] = 0;
  memset(__s,0,0xcb0);
  FUN_0271f6d8(__s,0,0);
  puVar1 = param_1 + 0x10a;
  param_1[0x3f] = &PTR_LAB_04a8e8d0;
  FUN_0271f6d8(puVar1,0,0);
  param_1[0x10a] = &PTR_LAB_04a8e8d0;
  param_1[0x38] = &PTR_LAB_04a8ad30;
  lVar4 = param_1[0x3b];
  param_1[0x3b] = __s;
  if (lVar4 != 0) {
    param_1[0x43] = lVar4;
  }
  param_1[0x41] = param_1[0x41] + lVar5;
  FUN_026400e0(__s,lVar5);
  lVar5 = param_1[0x3b];
  param_1[0x3b] = puVar1;
  if (lVar5 != 0) {
    param_1[0x10e] = lVar5;
  }
  param_1[0x10c] = param_1[0x10c] + lVar3 + 0x1570;
  FUN_026400e0(puVar1);
  return;
}

