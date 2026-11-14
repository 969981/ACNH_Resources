
void FUN_01732d80(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined8 *)((long)param_1 + 0x14);
  param_1[1] = (long)puVar1;
  *(undefined4 *)(param_1 + 2) = 0x40;
  *(undefined1 *)((long)param_1 + 0x53) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  puVar3 = PTR_DAT_04bb2bc0;
  puVar1 = (undefined8 *)((long)param_1 + 0x94);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar2 = puVar3 + 0x10;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0xffffffff;
  param_1[0x11] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x12) = 0x40;
  *(undefined1 *)((long)param_1 + 0xd3) = 0;
  *param_1 = (long)puVar2;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x10] = (long)puVar2;
  puVar1 = (undefined8 *)((long)param_1 + 0x114);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0xffffffff;
  param_1[0x21] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x22) = 0x40;
  *(undefined1 *)((long)param_1 + 0x153) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)((long)param_1 + 0x194);
  puVar3 = puVar3 + 0x10;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x20] = (long)puVar3;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0xffffffff;
  param_1[0x31] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x32) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1d3) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x30] = (long)puVar3;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return;
}

