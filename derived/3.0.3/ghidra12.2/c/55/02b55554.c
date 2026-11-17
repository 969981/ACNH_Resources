
void FUN_02b55554(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  puVar2 = PTR_DAT_04bd4738;
  *param_1 = &PTR_LAB_04aa47e8;
  param_1[1] = 0;
  puVar1 = (undefined8 *)((long)param_1 + 0x74);
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xd] = puVar1;
  *(undefined1 *)((long)param_1 + 0x173) = 0;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0xe) = 0x100;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar3 = PTR_DAT_04bb21f8;
  puVar1 = (undefined8 *)((long)param_1 + 0x18c);
  param_1[0x30] = puVar1;
  *(undefined4 *)(param_1 + 0x31) = 0x100;
  *(undefined1 *)((long)param_1 + 0x28b) = 0;
  puVar2 = puVar3 + 0x10;
  param_1[0xc] = puVar2;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x2f] = puVar2;
  puVar1 = (undefined8 *)((long)param_1 + 0x2a4);
  param_1[0x53] = puVar1;
  *(undefined4 *)(param_1 + 0x54) = 0x100;
  *(undefined1 *)((long)param_1 + 0x3a3) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)((long)param_1 + 0x3bc);
  puVar3 = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0x77) = 0x100;
  param_1[0x52] = puVar3;
  param_1[0x76] = puVar1;
  *(undefined1 *)((long)param_1 + 0x4bb) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x75] = puVar3;
  puVar3 = PTR_DAT_04bbba78;
  puVar2 = PTR_DAT_04bbba70;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  param_1[0x98] = puVar2 + 0x10;
  param_1[0x9c] = puVar2 + 0x10;
  param_1[0xa0] = puVar3 + 0x10;
  param_1[0xa4] = puVar3 + 0x10;
  return;
}

