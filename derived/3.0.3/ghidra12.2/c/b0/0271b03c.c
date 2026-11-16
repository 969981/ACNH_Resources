
void FUN_0271b03c(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
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
  memset(param_1 + 8,0,0x308);
  puVar1 = PTR_DAT_04bc30e8;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  plVar2 = param_1 + 7;
  *plVar2 = (long)puVar1;
  plVar7 = param_1 + 0xe;
  *plVar7 = (long)puVar1;
  plVar6 = param_1 + 0x15;
  *plVar6 = (long)puVar1;
  plVar5 = param_1 + 0x1c;
  *plVar5 = (long)puVar1;
  param_1[0x46] = puVar1;
  param_1[0x4d] = puVar1;
  param_1[0x54] = puVar1;
  param_1[0x5b] = puVar1;
  param_1[0x62] = puVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
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
  param_1[0x23] = puVar1;
  param_1[0x24] = 0;
  param_1[0x2a] = puVar1;
  param_1[0x2b] = 0;
  param_1[0x31] = puVar1;
  param_1[0x32] = 0;
  param_1[0x38] = puVar1;
  param_1[0x39] = 0;
  param_1[0x3f] = puVar1;
  param_1[0x40] = 0;
  *param_1 = &PTR_LAB_04a8df10;
  lVar3 = param_1[3];
  param_1[3] = plVar2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if (lVar3 != 0) {
    param_1[0xb] = lVar3;
  }
  param_1[9] = param_3;
  FUN_026400e0(plVar2,param_3);
  lVar3 = param_1[3];
  param_1[3] = plVar7;
  if (lVar3 != 0) {
    param_1[0x12] = lVar3;
  }
  param_1[0x10] = param_1[0x10] + param_3;
  FUN_026400e0(plVar7,param_3);
  lVar4 = param_1[3];
  lVar3 = param_3 + 8;
  param_1[3] = plVar6;
  if (lVar4 != 0) {
    param_1[0x19] = lVar4;
  }
  param_1[0x17] = param_1[0x17] + lVar3;
  FUN_026400e0(plVar6,lVar3);
  lVar4 = param_1[3];
  param_1[3] = plVar5;
  if (lVar4 != 0) {
    param_1[0x20] = lVar4;
  }
  param_1[0x1e] = param_1[0x1e] + lVar3;
  FUN_026400e0(plVar5,lVar3);
  lVar4 = param_1[3];
  lVar3 = param_3 + 0x10;
  param_1[3] = param_1 + 0x23;
  if (lVar4 != 0) {
    param_1[0x27] = lVar4;
  }
  param_1[0x25] = param_1[0x25] + lVar3;
  FUN_026400e0(param_1 + 0x23,lVar3);
  lVar4 = param_1[3];
  param_1[3] = param_1 + 0x2a;
  if (lVar4 != 0) {
    param_1[0x2e] = lVar4;
  }
  param_1[0x2c] = param_1[0x2c] + lVar3;
  FUN_026400e0(param_1 + 0x2a,lVar3);
  lVar4 = param_1[3];
  lVar3 = param_3 + 0x18;
  param_1[3] = param_1 + 0x31;
  if (lVar4 != 0) {
    param_1[0x35] = lVar4;
  }
  param_1[0x33] = param_1[0x33] + lVar3;
  FUN_026400e0(param_1 + 0x31,lVar3);
  lVar4 = param_1[3];
  param_1[3] = param_1 + 0x38;
  if (lVar4 != 0) {
    param_1[0x3c] = lVar4;
  }
  param_1[0x3a] = param_1[0x3a] + lVar3;
  FUN_026400e0(param_1 + 0x38,lVar3);
  lVar4 = param_1[3];
  lVar3 = param_3 + 0x20;
  param_1[3] = param_1 + 0x3f;
  if (lVar4 != 0) {
    param_1[0x43] = lVar4;
  }
  param_1[0x41] = param_1[0x41] + lVar3;
  FUN_026400e0(param_1 + 0x3f,lVar3);
  lVar4 = param_1[3];
  param_1[3] = param_1 + 0x46;
  if (lVar4 != 0) {
    param_1[0x4a] = lVar4;
  }
  param_1[0x48] = param_1[0x48] + lVar3;
  FUN_026400e0(param_1 + 0x46,lVar3);
  lVar4 = param_1[3];
  lVar3 = param_3 + 0x28;
  param_1[3] = param_1 + 0x4d;
  if (lVar4 != 0) {
    param_1[0x51] = lVar4;
  }
  param_1[0x4f] = param_1[0x4f] + lVar3;
  FUN_026400e0(param_1 + 0x4d,lVar3);
  lVar4 = param_1[3];
  param_1[3] = param_1 + 0x54;
  if (lVar4 != 0) {
    param_1[0x58] = lVar4;
  }
  param_1[0x56] = param_1[0x56] + lVar3;
  FUN_026400e0(param_1 + 0x54,lVar3);
  lVar3 = param_1[3];
  param_3 = param_3 + 0x30;
  param_1[3] = param_1 + 0x5b;
  if (lVar3 != 0) {
    param_1[0x5f] = lVar3;
  }
  param_1[0x5d] = param_1[0x5d] + param_3;
  FUN_026400e0(param_1 + 0x5b,param_3);
  lVar3 = param_1[3];
  param_1[3] = param_1 + 0x62;
  if (lVar3 != 0) {
    param_1[0x66] = lVar3;
  }
  param_1[100] = param_1[100] + param_3;
  FUN_026400e0(param_1 + 0x62,param_3);
  return;
}

