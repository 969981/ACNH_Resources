
void FUN_02921154(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x1c] = param_1 + 0x23;
  *param_1 = 0;
  param_1[0x15] = param_1 + 0x1c;
  param_1[0x7e] = 0;
  param_1[0x85] = 0;
  param_1[0xe] = param_1 + 0x15;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  puVar4 = param_1 + 7;
  *puVar4 = param_1 + 0xe;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x20;
  *(undefined1 *)((long)param_1 + 0x483) = 0;
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  param_1[0x23] = param_1 + 0x2a;
  param_1[0x2a] = param_1 + 0x31;
  param_1[0x31] = param_1 + 0x38;
  param_1[0x38] = param_1 + 0x3f;
  param_1[0x3f] = param_1 + 0x46;
  param_1[0x46] = param_1 + 0x4d;
  param_1[0x4d] = param_1 + 0x54;
  param_1[0x54] = param_1 + 0x5b;
  param_1[0x5b] = param_1 + 0x62;
  param_1[0x62] = param_1 + 0x69;
  param_1[0x69] = param_1 + 0x70;
  param_1[0x70] = param_1 + 0x77;
  param_1[0x77] = param_1 + 0x7e;
  puVar1 = (undefined8 *)((long)param_1 + 0x464);
  param_1[0x8b] = puVar1;
  param_1[4] = puVar4;
  param_1[5] = puVar4;
  *(undefined4 *)(param_1 + 6) = 0x12;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2028;
  puVar1 = (undefined8 *)((long)param_1 + 0x49c);
  param_1[0x92] = puVar1;
  *(undefined4 *)(param_1 + 0x93) = 0x20;
  *(undefined1 *)((long)param_1 + 0x4bb) = 0;
  param_1[0x8a] = puVar2 + 0x10;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x91] = puVar2 + 0x10;
  puVar3 = PTR_DAT_04bc4608;
  *(undefined1 *)(param_1 + 0x99) = 0;
  puVar2 = PTR_DAT_04bb2010;
  *(undefined4 *)((long)param_1 + 0x4cc) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)((long)param_1 + 0x4e4) = 0;
  param_1[0x98] = puVar3 + 0x10;
  puVar1 = (undefined8 *)((long)param_1 + 0x504);
  param_1[0x9a] = puVar2 + 0x10;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0x9f] = puVar1;
  *(undefined1 *)((long)param_1 + 0x50b) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 8;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0xa2] = 0;
  puVar2 = PTR_DAT_04bb3768;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = (long)param_1 + 0x54c;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0x9e] = puVar2 + 0x10;
  param_1[0xa8] = 4;
  return;
}

