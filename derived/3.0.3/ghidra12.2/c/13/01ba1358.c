
void FUN_01ba1358(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  memset(param_1 + 1,0,0x1e0);
  puVar2 = PTR_DAT_04bb2d80;
  param_1[0x42] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar1 = param_1 + 0x6a;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar3 = puVar1;
  if (puVar1 <= (undefined8 *)((long)param_1 + 0x332U)) {
    puVar3 = (undefined8 *)((long)param_1 + 0x332U);
  }
  puVar2 = puVar2 + 0x10;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[3] = puVar2;
  param_1[9] = puVar2;
  param_1[0xf] = puVar2;
  param_1[0x15] = puVar2;
  param_1[0x1b] = puVar2;
  param_1[0x21] = puVar2;
  param_1[0x27] = puVar2;
  param_1[0x2d] = puVar2;
  param_1[0x33] = puVar2;
  param_1[0x39] = puVar2;
  *param_1 = &PTR_LAB_04a39b80;
  *(undefined8 *)((long)param_1 + 0x216) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((long)param_1 + 0x204) = param_2;
  param_1[0x41] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x44] = PTR_DAT_04bc0cd8 + 0x10;
  *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  *(undefined1 *)((long)param_1 + 0x294) = 0;
  param_1[0x4b] = param_1 + 0x66;
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(undefined1 *)((long)param_1 + 0x264) = 0;
  param_1[0x4d] = 0xffffffff;
  param_1[0x4e] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  param_1[0x51] = (undefined1 *)((long)param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x52) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2d3) = 0;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  param_1[0x50] = puVar2;
  param_1[0x5c] = (long)param_1 + 0x2ec;
  *(undefined4 *)(param_1 + 0x5d) = 0x40;
  *(undefined1 *)((long)param_1 + 0x32b) = 0;
  param_1[0x5b] = puVar2;
  param_1[0x4a] = &DAT_04a3a308;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  memset(param_1 + 0x66,0,
         ((long)puVar3 + (-0xe1 - (long)(param_1 + 0x4a)) & 0xfffffffffffffffeU) + 2);
  *(undefined4 *)(param_1 + 0x6c) = 0x10;
  *(undefined1 *)((long)param_1 + 0x394) = 0;
  param_1[0x71] = (undefined1 *)((long)param_1 + 0x394);
  *(undefined1 *)((long)param_1 + 0x3ec) = 0;
  param_1[0x7c] = (undefined1 *)((long)param_1 + 0x3ec);
  param_1[0x6b] = param_1 + 0x86;
  puVar3 = param_1 + 0x8a;
  if (param_1 + 0x8a <= (undefined8 *)((long)param_1 + 0x432U)) {
    puVar3 = (undefined8 *)((long)param_1 + 0x432U);
  }
  *(undefined1 *)((long)param_1 + 0x364) = 0;
  param_1[0x6d] = 0xffffffff;
  param_1[0x6e] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x72) = 0x40;
  *(undefined1 *)((long)param_1 + 0x3d3) = 0;
  param_1[0x70] = puVar2;
  *(undefined4 *)(param_1 + 0x7d) = 0x40;
  *(undefined1 *)((long)param_1 + 0x42b) = 0;
  param_1[0x7b] = puVar2;
  param_1[0x6a] = &DAT_04a3a308;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  memset(param_1 + 0x86,0,((long)puVar3 + (-0xe1 - (long)puVar1) & 0xfffffffffffffffeU) + 2);
  return;
}

