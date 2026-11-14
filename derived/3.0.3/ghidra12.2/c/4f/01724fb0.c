
void FUN_01724fb0(long *param_1)

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
  param_1[0x1b] = (long)&PTR_LAB_049bf9d8;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1f] = (long)&PTR_LAB_049bfa00;
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
  param_1[0x37] = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x27] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bbde88;
  param_1[0x3a] = 0;
  *puVar2 = 1;
  puVar2 = PTR_DAT_04bbde90;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined2 *)(param_1 + 0x3f) = 1;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
  param_1[0x40] = (long)&LAB_01725170;
  *param_1 = (long)&PTR_LAB_049bf980;
  param_1[0x45] = (long)(param_1 + 0x44);
  param_1[0x44] = (long)(param_1 + 0x44);
  param_1[0x4b] = (long)(param_1 + 0x4a);
  param_1[0x4a] = (long)(param_1 + 0x4a);
  param_1[0x51] = (long)(param_1 + 0x50);
  param_1[0x50] = (long)(param_1 + 0x50);
  return;
}

