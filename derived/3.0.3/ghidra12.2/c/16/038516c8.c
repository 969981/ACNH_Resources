
void FUN_038516c8(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined8 *)((long)param_1 + 0x14);
  param_1[1] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 2) = 0x40;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  *param_1 = (long)puVar2;
  uVar3 = FUN_006bd550(&DAT_0407ebb1,0);
  puVar1 = (undefined8 *)((long)param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  param_1[0xd] = (long)puVar1;
  *(undefined4 *)(param_1 + 0xe) = 0x40;
  *(undefined1 *)((long)param_1 + 0xb3) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0xc] = (long)puVar2;
  uVar3 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x17) = uVar3;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  param_1[0x1a] = (long)&DAT_0407ebb1;
  param_1[0x1b] = (long)&DAT_0407ebb1;
  return;
}

