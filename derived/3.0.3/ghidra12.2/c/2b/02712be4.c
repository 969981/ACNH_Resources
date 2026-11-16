
void FUN_02712be4(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
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
  memset(param_1 + 8,0,0x378);
  param_1[0x1a] = 0;
  puVar2 = param_1 + 7;
  *puVar2 = &PTR_LAB_04a8d120;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_LAB_04a8d120;
  puVar1 = PTR_DAT_04bbc0b0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x4d] = &PTR_LAB_04a8d120;
  param_1[0xe] = puVar1;
  param_1[10] = param_1 + 0xe;
  param_1[0x5b] = &PTR_LAB_04a8d120;
  param_1[0x1c] = puVar1;
  param_1[0x69] = &PTR_LAB_04a8d120;
  param_1[0x50] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x46] = puVar1;
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
  param_1[0x54] = puVar1;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = puVar1;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = puVar1;
  param_1[0x18] = param_1 + 0x1c;
  param_1[0x19] = 0;
  param_1[0x26] = param_1 + 0x2a;
  param_1[0x23] = &PTR_LAB_04a8d120;
  param_1[0x24] = 0;
  param_1[0x31] = &PTR_LAB_04a8d120;
  param_1[0x32] = 0;
  param_1[0x3f] = &PTR_LAB_04a8d120;
  param_1[0x40] = 0;
  *param_1 = &PTR_LAB_04a8d0f0;
  lVar3 = param_1[3];
  param_1[3] = puVar2;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x34] = param_1 + 0x38;
  param_1[0x42] = param_1 + 0x46;
  param_1[0x50] = param_1 + 0x54;
  param_1[0x5e] = param_1 + 0x62;
  param_1[0x6c] = param_1 + 0x70;
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
  param_1[0x2a] = puVar1;
  param_1[0x2b] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = puVar1;
  param_1[0x39] = 0;
  if (lVar3 != 0) {
    param_1[0xb] = lVar3;
  }
  param_1[9] = param_3;
  FUN_026400e0(puVar2,param_3);
  lVar3 = param_1[3];
  param_1[3] = puVar4;
  if (lVar3 != 0) {
    param_1[0x19] = lVar3;
  }
  param_1[0x17] = param_1[0x17] + param_3 + 0xc80;
  FUN_026400e0(puVar4);
  lVar3 = param_1[3];
  param_1[3] = param_1 + 0x23;
  if (lVar3 != 0) {
    param_1[0x27] = lVar3;
  }
  param_1[0x25] = param_1[0x25] + param_3 + 0x1900;
  FUN_026400e0(param_1 + 0x23);
  lVar3 = param_1[3];
  param_1[3] = param_1 + 0x31;
  if (lVar3 != 0) {
    param_1[0x35] = lVar3;
  }
  param_1[0x33] = param_1[0x33] + param_3 + 0x2580;
  FUN_026400e0(param_1 + 0x31);
  lVar3 = param_1[3];
  param_1[3] = param_1 + 0x3f;
  if (lVar3 != 0) {
    param_1[0x43] = lVar3;
  }
  param_1[0x41] = param_1[0x41] + param_3 + 0x3200;
  FUN_026400e0(param_1 + 0x3f);
  lVar3 = param_1[3];
  param_1[3] = param_1 + 0x4d;
  if (lVar3 != 0) {
    param_1[0x51] = lVar3;
  }
  param_1[0x4f] = param_1[0x4f] + param_3 + 16000;
  FUN_026400e0(param_1 + 0x4d);
  lVar3 = param_1[3];
  param_1[3] = param_1 + 0x5b;
  if (lVar3 != 0) {
    param_1[0x5f] = lVar3;
  }
  param_1[0x5d] = param_1[0x5d] + param_3 + 0x4b00;
  FUN_026400e0(param_1 + 0x5b);
  lVar3 = param_1[3];
  param_1[3] = param_1 + 0x69;
  if (lVar3 != 0) {
    param_1[0x6d] = lVar3;
  }
  param_1[0x6b] = param_1[0x6b] + param_3 + 0x5780;
  FUN_026400e0(param_1 + 0x69);
  return;
}

