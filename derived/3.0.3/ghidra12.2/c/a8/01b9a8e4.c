
void FUN_01b9a8e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0x30;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff00000000;
  puVar5 = param_1 + 0x28;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  param_1[6] = puVar1;
  param_1[7] = (undefined1 *)((long)param_1 + 0x44);
  puVar3 = puVar5;
  if (puVar5 <= (undefined8 *)((long)param_1 + 0xe2)) {
    puVar3 = (undefined8 *)((long)param_1 + 0xe2);
  }
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[0x11] = puVar1;
  param_1[0x12] = (undefined1 *)((long)param_1 + 0x9c);
  *param_1 = &DAT_04a39870;
  param_1[1] = param_1 + 0x1c;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  memset(param_1 + 0x1c,0,((long)puVar3 + (-0xe1 - (long)param_1) & 0xfffffffffffffffeU) + 2);
  *(undefined1 *)((long)param_1 + 0x154) = 0;
  puVar3 = param_1 + 0x44;
  *(undefined4 *)(param_1 + 0x2a) = 0xf0;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
  param_1[0x2e] = puVar1;
  param_1[0x2f] = (undefined1 *)((long)param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1c3) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x40;
  *(undefined1 *)((long)param_1 + 0x21b) = 0;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff00000000;
  param_1[0x39] = puVar1;
  param_1[0x3a] = (undefined1 *)((long)param_1 + 0x1dc);
  param_1[0x28] = PTR_DAT_04bc0548 + 0x10;
  param_1[0x29] = puVar3;
  memset(puVar3,0,0x1e0);
  puVar2 = param_1 + 0x80;
  puVar4 = puVar2;
  if (puVar2 <= (undefined8 *)((long)param_1 + 0x222)) {
    puVar4 = (undefined8 *)((long)param_1 + 0x222);
  }
  memset(puVar3,0,((long)puVar4 + (-0xe1 - (long)puVar5) & 0xfffffffffffffffeU) + 2);
  *(undefined4 *)(param_1 + 0x82) = 0x30;
  *(undefined1 *)((long)param_1 + 0x444) = 0;
  param_1[0x87] = (undefined1 *)((long)param_1 + 0x444);
  *(undefined1 *)((long)param_1 + 0x49c) = 0;
  param_1[0x92] = (undefined1 *)((long)param_1 + 0x49c);
  param_1[0x81] = param_1 + 0x9c;
  puVar5 = param_1 + 0xa8;
  if (param_1 + 0xa8 <= (undefined8 *)((long)param_1 + 0x4e2)) {
    puVar5 = (undefined8 *)((long)param_1 + 0x4e2);
  }
  *(undefined1 *)((long)param_1 + 0x414) = 0;
  param_1[0x83] = 0xffffffff;
  param_1[0x84] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0x40;
  *(undefined1 *)((long)param_1 + 0x483) = 0;
  param_1[0x86] = puVar1;
  *(undefined4 *)(param_1 + 0x93) = 0x40;
  *(undefined1 *)((long)param_1 + 0x4db) = 0;
  param_1[0x91] = puVar1;
  param_1[0x80] = &DAT_04a39870;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  memset(param_1 + 0x9c,0,((long)puVar5 + (-0xe1 - (long)puVar2) & 0xfffffffffffffffeU) + 2);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  param_1[0xaa] = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xae] = PTR_DAT_04bc0ba0 + 0x10;
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  param_1[0xb1] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb2] = puVar1;
  return;
}

