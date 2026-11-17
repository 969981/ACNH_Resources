
void FUN_02cb74a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined2 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)((long)param_1 + 0x24);
  *param_1 = &PTR_LAB_04ab6080;
  param_1[3] = puVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined1 *)((long)param_1 + 0x2b) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar3 = PTR_DAT_04bb3768;
  puVar1 = (undefined8 *)((long)param_1 + 0x44);
  param_1[7] = puVar1;
  *(undefined4 *)(param_1 + 8) = 8;
  *(undefined1 *)((long)param_1 + 0x4b) = 0;
  puVar2 = puVar3 + 0x10;
  param_1[2] = puVar2;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)((long)param_1 + 0x74);
  param_1[6] = puVar2;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb) = 0xffff;
  param_1[0xd] = puVar1;
  *(undefined4 *)(param_1 + 0xe) = 8;
  *(undefined1 *)((long)param_1 + 0x7b) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  puVar1 = (undefined8 *)((long)param_1 + 0xa4);
  puVar3 = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xc] = puVar3;
  param_1[0x13] = puVar1;
  *(undefined4 *)(param_1 + 0x14) = 8;
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x12] = puVar3;
  param_1[0x17] = 0xffffffff;
  puVar1 = param_1 + 0x55;
  if (param_1 + 0x55 <= (undefined8 *)((long)param_1 + 0x1aaU)) {
    puVar1 = (undefined8 *)((long)param_1 + 0x1aaU);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x80;
  *(undefined1 *)((long)param_1 + 0x164) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x40;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)param_1 + 0x14b) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1a3) = 0;
  param_1[0x1f] = puVar2;
  param_1[0x20] = (undefined1 *)((long)param_1 + 0x10c);
  puVar3 = PTR_DAT_04bb6b38 + 0x10;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x19] = puVar3;
  param_1[0x1a] = param_1 + 0x35;
  param_1[0x2a] = puVar2;
  param_1[0x2b] = (long)param_1 + 0x164;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  memset(param_1 + 0x35,0,
         ((long)puVar1 + (-0xe1 - (long)(param_1 + 0x19)) & 0xfffffffffffffffeU) + 2);
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined1 *)((long)param_1 + 0x2b6) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x55] = 0xffffffff00000005;
  *(undefined2 *)((long)param_1 + 0x2c4) = 0;
  *(undefined4 *)((long)param_1 + 0x2b2) = 0x101;
  *(undefined8 *)((long)param_1 + 700) = 0xffff0000ffffffff;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  param_1[0x59] = 0xffffffffffffffff;
  return;
}

