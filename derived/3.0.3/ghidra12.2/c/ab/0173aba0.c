
void FUN_0173aba0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_01739fc0();
  *(undefined1 *)(param_1 + 0x51) = 0;
  puVar1 = (undefined8 *)((long)param_1 + 0x2a4);
  *param_1 = &PTR_LAB_049bfea8;
  param_1[0x53] = puVar1;
  *(undefined4 *)(param_1 + 0x54) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2e3) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar3 = PTR_DAT_04bb2bc0;
  puVar1 = (undefined8 *)((long)param_1 + 0x2fc);
  param_1[0x5e] = puVar1;
  *(undefined4 *)(param_1 + 0x5f) = 0x40;
  *(undefined1 *)((long)param_1 + 0x33b) = 0;
  puVar2 = puVar3 + 0x10;
  param_1[0x52] = puVar2;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)((long)param_1 + 0x354);
  param_1[0x5d] = puVar2;
  param_1[0x69] = puVar1;
  *(undefined4 *)(param_1 + 0x6a) = 0x40;
  *(undefined1 *)((long)param_1 + 0x393) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x74) = 0;
  param_1[0x68] = puVar3 + 0x10;
  param_1[0x73] = 1;
  return;
}

