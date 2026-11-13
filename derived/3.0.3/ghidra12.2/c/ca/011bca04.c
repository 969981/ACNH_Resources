
void FUN_011bca04(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *param_1 = &PTR_LAB_04986978;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  puVar1 = PTR_DAT_04bbbac8 + 0x10;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0x100;
  *(undefined1 *)((long)param_1 + 0x17b) = 0;
  param_1[3] = puVar1;
  param_1[4] = 0xffffffff;
  puVar2 = (undefined8 *)((long)param_1 + 0x7c);
  param_1[0xe] = puVar2;
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  puVar3 = PTR_DAT_04bb21f8;
  puVar2 = (undefined8 *)((long)param_1 + 0x194);
  param_1[0x31] = puVar2;
  *(undefined4 *)(param_1 + 0x32) = 0x100;
  *(undefined1 *)((long)param_1 + 0x293) = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0xd] = puVar1;
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  param_1[0x30] = puVar1;
  puVar2 = (undefined8 *)((long)param_1 + 0x2ac);
  param_1[0x54] = puVar2;
  *(undefined4 *)(param_1 + 0x55) = 0x100;
  *(undefined1 *)((long)param_1 + 0x3ab) = 0;
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  puVar2 = (undefined8 *)((long)param_1 + 0x3c4);
  puVar3 = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0x78) = 0x100;
  param_1[0x53] = puVar3;
  param_1[0x77] = puVar2;
  *(undefined1 *)((long)param_1 + 0x4c3) = 0;
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  param_1[0x76] = puVar3;
  puVar3 = PTR_DAT_04bbba78;
  puVar1 = PTR_DAT_04bbba70;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  param_1[0x99] = puVar1 + 0x10;
  param_1[0x9d] = puVar1 + 0x10;
  param_1[0xa1] = puVar3 + 0x10;
  param_1[0xa5] = puVar3 + 0x10;
  return;
}

