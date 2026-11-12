
void FUN_007091b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  *param_1 = 0xffffffff00000000;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0x3f800000;
  puVar1 = (undefined8 *)((long)param_1 + 0x44);
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[7] = puVar1;
  *(undefined4 *)(param_1 + 8) = 0x80;
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x1a] = 0;
  puVar2 = PTR_DAT_04bb2d88;
  *(undefined4 *)(param_1 + 0x19) = 7;
  *(undefined2 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[6] = puVar2 + 0x10;
  return;
}

