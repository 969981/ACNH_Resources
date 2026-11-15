
void FUN_020d6334(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_DAT_04bcb440;
  puVar1 = (undefined8 *)((long)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = 0x80;
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  param_1[2] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[1] = (long)(PTR_DAT_04bb2d88 + 0x10);
  uVar3 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  param_1[0x1a] = 0;
  param_1[0x1b] = (long)&PTR_LAB_04a73460;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1f] = (long)&PTR_LAB_04a73488;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(param_1 + 0x29) = 0x40;
  *(undefined1 *)((long)param_1 + 0x18b) = 0;
  param_1[0x23] = (long)puVar2;
  puVar1 = (undefined8 *)((long)param_1 + 0x14c);
  param_1[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  param_1[0x37] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  param_1[0x27] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bbc540;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *puVar2 = 1;
  puVar2 = PTR_DAT_04bbc548;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *param_1 = (long)&PTR_FUN_04a73408;
  param_1[0x3b] = (long)(param_1 + 0x3b);
  param_1[0x3c] = (long)(param_1 + 0x3b);
  param_1[0x42] = (long)(param_1 + 0x41);
  param_1[0x41] = (long)(param_1 + 0x41);
  param_1[0x48] = (long)(param_1 + 0x47);
  param_1[0x47] = (long)(param_1 + 0x47);
  param_1[0x4e] = (long)(param_1 + 0x4d);
  param_1[0x4d] = (long)(param_1 + 0x4d);
  param_1[0x54] = (long)(param_1 + 0x53);
  param_1[0x53] = (long)(param_1 + 0x53);
  param_1[0x5a] = (long)(param_1 + 0x59);
  param_1[0x59] = (long)(param_1 + 0x59);
  param_1[0x60] = (long)(param_1 + 0x5f);
  param_1[0x5f] = (long)(param_1 + 0x5f);
  param_1[0x66] = (long)(param_1 + 0x65);
  param_1[0x65] = (long)(param_1 + 0x65);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  return;
}

