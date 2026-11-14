
void FUN_01503604(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  uint uVar5;
  byte bVar6;
  
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  puVar4 = PTR_DAT_04bb3238;
  *param_1 = &PTR_FUN_049a7228;
  param_1[1] = 0;
  uVar2 = *(undefined4 *)puVar4;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 2) = uVar2;
  puVar4 = PTR_DAT_04bb3170;
  uVar3 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined8 *)((long)param_1 + 0x62) = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined2 *)(param_1 + 0xe) = uVar3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_007ef010((long)param_1 + 0x9a,puVar4);
  uVar3 = *(undefined2 *)puVar4;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined2 *)(param_1 + 0x14) = uVar3;
  param_1[0x1a] = PTR_DAT_04bbbd48 + 0x10;
  memset(param_1 + 0x1b,0,0x2400);
  param_1[0x4a7] = 0;
  puVar4 = PTR_DAT_04bb32e0;
  param_1[0x49b] = &PTR_LAB_049a7370;
  param_1[0x49c] = 0;
  param_1[0x49d] = 0;
  param_1[0x49e] = 0;
  bVar6 = *puVar4;
  param_1[0x49f] = 0;
  param_1[0x4a0] = 0;
  param_1[0x4a1] = 0;
  param_1[0x4a2] = 0;
  param_1[0x4a3] = 0;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  param_1[0x4a4] = 0;
  param_1[0x4a5] = 0;
  *(byte *)(param_1 + 0x4a7) = bVar6;
  puVar1 = PTR_DAT_04bbd468 + 0x10;
  param_1[0x4a6] = 0;
  *(undefined4 *)(param_1 + 0x4a9) = 0;
  param_1[0x4a8] = puVar1;
  memset(param_1 + 0x4aa,0,0x308);
  uVar5 = nn::os::GetSystemTick();
  *(undefined4 *)(param_1 + 0x50e) = 0;
  param_1[0x50f] = 0;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  param_1[0x510] = 0;
  param_1[0x511] = 0;
  *(uint *)(param_1 + 0x50b) = uVar5;
  puVar1 = PTR_DAT_04bbcee8;
  param_1[0x512] = 0;
  param_1[0x513] = 0;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  param_1[0x514] = 0;
  *(uint *)((long)param_1 + 0x285c) = uVar5;
  param_1[0x515] = 0;
  param_1[0x516] = 0;
  param_1[0x517] = 0;
  param_1[0x518] = 0;
  param_1[0x519] = 0;
  param_1[0x51a] = 0;
  param_1[0x51b] = 0;
  param_1[0x50d] = puVar1 + 0x10;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x50c) = uVar5;
  *(uint *)((long)param_1 + 0x2864) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  uVar5 = nn::os::GetSystemTick();
  *(undefined8 *)((long)param_1 + 0x62) = 0;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)(param_1 + 0x51c) = uVar5;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x28e4) = uVar5;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x51d) = uVar5;
  *(uint *)((long)param_1 + 0x28ec) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  memset(param_1 + 0x1b,0,0x2400);
  bVar6 = *puVar4;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x253c) = 0;
  *(byte *)(param_1 + 0x4a7) = bVar6;
  return;
}

