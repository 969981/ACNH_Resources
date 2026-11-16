
void FUN_027136b8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  *param_1 = &PTR_LAB_04a8d2a0;
  lVar2 = param_1[2];
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = lVar2;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  puVar1 = PTR_DAT_04bb4c40;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar2 + 1;
  param_1[0x11] = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = lVar2 + 3;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[7] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x12] = param_1 + 7;
  param_1[0x13] = 0;
  param_1[0x15] = puVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar2 + 4;
  param_1[0x19] = param_1 + 0xe;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x20] = param_1 + 0x15;
  param_1[0x21] = 0;
  param_1[0x1c] = &DAT_04a90588;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x2c] = lVar2 + 8;
  param_1[0x2d] = 0;
  param_1[0x2a] = &DAT_04a8d2d0;
  param_1[0x2b] = 0;
  param_1[0x2e] = param_1 + 0x23;
  param_1[0x2f] = 0;
  param_1[0x33] = lVar2 + 0xc;
  param_1[0x34] = 0;
  param_1[0x35] = param_1 + 0x2a;
  param_1[0x36] = 0;
  param_1[0x25] = lVar2 + 6;
  param_1[0x26] = 0;
  param_1[0x3a] = lVar2 + 0xe;
  param_1[0x3b] = 0;
  param_1[0x3c] = param_1 + 0x31;
  param_1[0x3d] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = param_1 + 0x38;
  param_1[3] = param_1 + 0x46;
  param_1[0x27] = param_1 + 0x1c;
  param_1[0x28] = 0;
  param_1[0x23] = &DAT_04a8f390;
  param_1[0x24] = 0;
  param_1[0x31] = &DAT_04a8f390;
  param_1[0x32] = 0;
  param_1[0x38] = &DAT_04a8f390;
  param_1[0x39] = 0;
  param_1[0x41] = lVar2 + 0x10;
  param_1[0x42] = 0;
  param_1[0x3f] = &DAT_04a8f390;
  param_1[0x40] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = param_1 + 0x3f;
  param_1[0x48] = lVar2 + 0x12;
  param_1[0x49] = 0;
  param_1[0x46] = &DAT_04a8f390;
  param_1[0x47] = 0;
  return;
}

