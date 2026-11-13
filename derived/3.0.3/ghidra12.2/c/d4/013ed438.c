
void FUN_013ed438(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  
  FUN_009930f4();
  puVar2 = PTR_DAT_04bcb440;
  param_1[0x29] = 0x708;
  *(undefined1 *)((long)param_1 + 0x1eb) = 0;
  puVar9 = (undefined8 *)((long)param_1 + 0x16c);
  param_1[0x2a] = puVar2 + 0x10;
  *param_1 = &PTR_FUN_04996de0;
  param_1[0x2c] = puVar9;
  *(undefined4 *)(param_1 + 0x2d) = 0x80;
  if (puVar9 != &DAT_0407ebb1) {
    *(undefined1 *)puVar9 = 0;
  }
  puVar3 = PTR_DAT_04bb2d88;
  param_1[0x2b] = PTR_DAT_04bb2d88 + 0x10;
  uVar6 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0x41] = 0;
  *(undefined8 *)((long)param_1 + 0x20d) = 0;
  param_1[0x45] = &PTR_LAB_04997370;
  *(undefined4 *)(param_1 + 0x3e) = uVar6;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x49] = &PTR_LAB_04997398;
  puVar4 = PTR_DAT_04bb4a78;
  puVar1 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(param_1 + 0x53) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2db) = 0;
  param_1[0x4d] = puVar1;
  puVar9 = (undefined8 *)((long)param_1 + 0x29c);
  param_1[0x52] = puVar9;
  if (puVar9 != &DAT_0407ebb1) {
    *(undefined1 *)puVar9 = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x61] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x51] = puVar1 + 0x10;
  *PTR_DAT_04bbcae0 = 1;
  puVar5 = PTR_DAT_04bbcae8;
  param_1[0x2a] = &PTR_FUN_04996f10;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined1 *)((long)param_1 + 0x3eb) = 0;
  *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
  puVar9 = (undefined8 *)((long)param_1 + 0x36c);
  param_1[0x6a] = puVar2 + 0x10;
  param_1[0x67] = &LAB_013ed7e0;
  param_1[0x6c] = puVar9;
  *(undefined8 *)((long)param_1 + 0x345) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0x80;
  if (puVar9 != &DAT_0407ebb1) {
    *(undefined1 *)puVar9 = 0;
  }
  param_1[0x6b] = puVar3 + 0x10;
  uVar6 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0x7f] = 0;
  param_1[0x6a] = &PTR_FUN_04996eb8;
  param_1[0x85] = &PTR_LAB_049973c0;
  param_1[0x89] = &PTR_LAB_049973e8;
  param_1[0x8d] = puVar4 + 0x10;
  puVar9 = (undefined8 *)((long)param_1 + 0x49c);
  *(undefined4 *)(param_1 + 0x7e) = uVar6;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((long)param_1 + 0x40d) = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  param_1[0x92] = puVar9;
  *(undefined4 *)(param_1 + 0x93) = 0x40;
  *(undefined1 *)((long)param_1 + 0x4db) = 0;
  if (puVar9 != &DAT_0407ebb1) {
    *(undefined1 *)puVar9 = 0;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  param_1[0x91] = puVar1 + 0x10;
  DAT_051b6998 = 1;
  param_1[0xa1] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0xa4] = 0;
  DAT_051b699c = 0xffffffffffffffff;
  DAT_051b69a4 = 0xffffffffffffffff;
  puVar2 = PTR_DAT_04bbfe60 + 0x10;
  param_1[0xa5] = puVar2;
  memset(param_1 + 0xa6,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0xc84) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x191) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xc8c) = uVar7;
  *(uint *)(param_1 + 0x192) = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)(**(code **)(param_1[0xa5] + 0x18))(param_1 + 0xa5);
  memset(pvVar8,0,0x754);
  param_1[0x193] = puVar2;
  memset(param_1 + 0x194,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x13f4) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x27f) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x13fc) = uVar7;
  *(uint *)(param_1 + 0x280) = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)(**(code **)(param_1[0x193] + 0x18))(param_1 + 0x193);
  memset(pvVar8,0,0x754);
  *(undefined4 *)(param_1 + 0x281) = 0;
  return;
}

