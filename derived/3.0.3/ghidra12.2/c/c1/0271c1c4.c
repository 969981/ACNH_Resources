
void FUN_0271c1c4(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
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
  memset(param_1 + 8,0,0x308);
  param_1[0xe] = &DAT_04a8f030;
  param_1[10] = param_1 + 0xe;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x4d] = &PTR_LAB_04a8e090;
  param_1[0x5b] = &PTR_LAB_04a8e090;
  param_1[0x1c] = &DAT_04a8f030;
  puVar1 = param_1 + 7;
  *puVar1 = &PTR_LAB_04a8e090;
  puVar3 = param_1 + 0x15;
  *puVar3 = &PTR_LAB_04a8e090;
  param_1[0x18] = param_1 + 0x1c;
  param_1[0x23] = &PTR_LAB_04a8e090;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = &DAT_04a8f030;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = &DAT_04a8f030;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = &DAT_04a8f030;
  param_1[0x31] = &PTR_LAB_04a8e090;
  param_1[0x32] = 0;
  param_1[0x3f] = &PTR_LAB_04a8e090;
  param_1[0x40] = 0;
  *param_1 = &PTR_LAB_04a8e060;
  lVar2 = param_1[3];
  param_1[3] = puVar1;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x26] = param_1 + 0x2a;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x34] = param_1 + 0x38;
  param_1[0x42] = param_1 + 0x46;
  param_1[0x50] = param_1 + 0x54;
  param_1[0x5e] = param_1 + 0x62;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = &DAT_04a8f030;
  param_1[0x2b] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = &DAT_04a8f030;
  param_1[0x39] = 0;
  if (lVar2 != 0) {
    param_1[0xb] = lVar2;
  }
  param_1[9] = param_3;
  FUN_026400e0(puVar1,param_3);
  lVar2 = param_1[3];
  param_1[3] = puVar3;
  if (lVar2 != 0) {
    param_1[0x19] = lVar2;
  }
  param_1[0x17] = param_1[0x17] + param_3 + 4;
  FUN_026400e0(puVar3);
  lVar2 = param_1[3];
  param_1[3] = param_1 + 0x23;
  if (lVar2 != 0) {
    param_1[0x27] = lVar2;
  }
  param_1[0x25] = param_1[0x25] + param_3 + 8;
  FUN_026400e0(param_1 + 0x23);
  lVar2 = param_1[3];
  param_1[3] = param_1 + 0x31;
  if (lVar2 != 0) {
    param_1[0x35] = lVar2;
  }
  param_1[0x33] = param_1[0x33] + param_3 + 0xc;
  FUN_026400e0(param_1 + 0x31);
  lVar2 = param_1[3];
  param_1[3] = param_1 + 0x3f;
  if (lVar2 != 0) {
    param_1[0x43] = lVar2;
  }
  param_1[0x41] = param_1[0x41] + param_3 + 0x10;
  FUN_026400e0(param_1 + 0x3f);
  lVar2 = param_1[3];
  param_1[3] = param_1 + 0x4d;
  if (lVar2 != 0) {
    param_1[0x51] = lVar2;
  }
  param_1[0x4f] = param_1[0x4f] + param_3 + 0x14;
  FUN_026400e0(param_1 + 0x4d);
  lVar2 = param_1[3];
  param_1[3] = param_1 + 0x5b;
  if (lVar2 != 0) {
    param_1[0x5f] = lVar2;
  }
  param_1[0x5d] = param_1[0x5d] + param_3 + 0x18;
  FUN_026400e0(param_1 + 0x5b);
  return;
}

