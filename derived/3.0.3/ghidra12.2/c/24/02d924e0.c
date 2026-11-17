
void FUN_02d924e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  param_1[0x3e] = 0;
  param_1[0x1e] = param_1 + 0x20;
  param_1[0x1c] = param_1 + 0x1e;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x1a] = param_1 + 0x1c;
  param_1[0x18] = param_1 + 0x1a;
  param_1[0x16] = param_1 + 0x18;
  param_1[0x20] = param_1 + 0x22;
  param_1[0x14] = param_1 + 0x16;
  param_1[0x22] = param_1 + 0x24;
  param_1[0x12] = param_1 + 0x14;
  param_1[0x24] = param_1 + 0x26;
  param_1[0x10] = param_1 + 0x12;
  param_1[0x26] = param_1 + 0x28;
  param_1[0xe] = param_1 + 0x10;
  param_1[0x28] = param_1 + 0x2a;
  param_1[0xc] = param_1 + 0xe;
  param_1[0x2a] = param_1 + 0x2c;
  param_1[10] = param_1 + 0xc;
  param_1[0x2c] = param_1 + 0x2e;
  param_1[8] = param_1 + 10;
  param_1[0x2e] = param_1 + 0x30;
  param_1[6] = param_1 + 8;
  param_1[0x30] = param_1 + 0x32;
  param_1[0x32] = param_1 + 0x34;
  param_1[0x34] = param_1 + 0x36;
  param_1[0x36] = param_1 + 0x38;
  puVar4 = param_1 + 4;
  *puVar4 = param_1 + 6;
  param_1[0x38] = param_1 + 0x3a;
  param_1[0x3a] = param_1 + 0x3c;
  param_1[0x3c] = param_1 + 0x3e;
  param_1[2] = puVar4;
  param_1[3] = puVar4;
  if (param_1 + 0x40 != (undefined8 *)0x0) {
    *param_1 = 0x1e00000000;
    param_1[1] = param_1 + 0x40;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  puVar2 = PTR_DAT_04bc8e10;
  lVar3 = 0x1e;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x80] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
  puVar4 = param_1;
  do {
    *(undefined4 *)(puVar4 + 0x82) = 0xffffffff;
    lVar3 = lVar3 + -1;
    puVar4[0x84] = (long)puVar4 + 0x42c;
    *(undefined4 *)(puVar4 + 0x85) = 0x40;
    *(undefined1 *)((long)puVar4 + 0x46b) = 0;
    *(undefined1 *)((long)puVar4 + 0x42c) = 0;
    puVar4[0x83] = puVar1 + 0x10;
    *(undefined4 *)(puVar4 + 0x8e) = 0;
    puVar4[0x90] = 0xffffffffffffffff;
    puVar4[0x8f] = puVar2 + 0x10;
    *(undefined4 *)(puVar4 + 0x91) = 0;
    *(undefined4 *)(puVar4 + 0x92) = 0;
    *(undefined1 *)(puVar4 + 0x93) = 0;
    puVar4 = puVar4 + 0x12;
  } while (lVar3 != 0);
  param_1[0x29f] = 0xffffffffffffffff;
  param_1[0x29e] = puVar2 + 0x10;
  *(undefined1 *)(param_1 + 0x2a3) = 0;
  *(undefined1 *)((long)param_1 + 0x1534) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a1) = 0;
  *(undefined4 *)(param_1 + 0x2a2) = 0;
  *(undefined8 *)((long)param_1 + 0x152c) = 0xa00000000;
  param_1[0x2a7] = 1;
  *(undefined8 *)((long)param_1 + 0x151c) = 0;
  *(undefined8 *)((long)param_1 + 0x1524) = 0;
  return;
}

