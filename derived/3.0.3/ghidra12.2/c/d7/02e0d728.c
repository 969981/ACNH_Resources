
void FUN_02e0d728(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_3f0;
  char *local_3e8;
  undefined *puStack_3e0;
  undefined2 local_3d8;
  undefined8 local_3d4;
  undefined4 local_3cc;
  undefined *local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined1 local_3b4;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined *local_398;
  undefined1 *puStack_390;
  undefined4 local_388;
  undefined1 local_384 [63];
  undefined1 local_345;
  undefined *local_340;
  undefined1 *puStack_338;
  undefined4 local_330;
  undefined1 local_32c [63];
  undefined1 local_2ed;
  undefined8 local_2e8;
  undefined *local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined1 local_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined *local_2b0;
  undefined1 *puStack_2a8;
  undefined4 local_2a0;
  undefined1 local_29c [63];
  undefined1 local_25d;
  undefined *local_258;
  undefined1 *puStack_250;
  undefined4 local_248;
  undefined1 local_244 [63];
  undefined1 local_205;
  undefined8 local_200;
  undefined *local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4 [63];
  undefined1 local_175;
  undefined *local_170;
  undefined1 *local_168;
  undefined4 local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  undefined *local_50;
  int local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_30;
  uint local_28;
  int local_24;
  
  if (*(long *)(param_1 + 0x220) == 0) {
    return;
  }
  puVar5 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x220) + 0x3f8);
  local_24 = param_2;
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)puVar5[0x43];
  if (lVar4 == 0) {
    return;
  }
  local_28 = 3;
  if (local_24 == 0x7e) {
    local_28 = 4;
  }
  else if (local_24 == 0) {
    local_28 = 3;
  }
  local_3d4 = 0;
  local_3d8 = 0x100;
  local_3cc = 0;
  local_3b8 = 0;
  puStack_390 = local_384;
  local_3b4 = 0;
  local_3b0 = 0xffffffff;
  uStack_3a8 = 0xffffffff00000000;
  local_3a0 = 0xffffffff;
  local_388 = 0x40;
  local_345 = 0;
  local_398 = PTR_DAT_04bb2bc0 + 0x10;
  local_384[0] = 0;
  local_330 = 0x40;
  local_2ed = 0;
  local_32c[0] = 0;
  puStack_338 = local_32c;
  local_3c8 = PTR_DAT_04bb2e00 + 0x10;
  local_2b8 = 0xffffffff;
  puStack_250 = local_244;
  local_244[0] = 0;
  puStack_2a8 = local_29c;
  local_29c[0] = 0;
  local_1e0 = 0xffffffff;
  local_1d0 = 0xffffffff;
  local_1d8 = 0xffffffff00000000;
  local_2d0 = 0;
  local_2cc = 0;
  local_2a0 = 0x40;
  local_25d = 0;
  local_248 = 0x40;
  local_205 = 0;
  local_2e8 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  local_1b8 = 0x40;
  local_175 = 0;
  local_160 = 0x40;
  local_11d = 0;
  local_200 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_f0 = 0x40;
  local_ad = 0;
  local_98 = 0x40;
  local_55 = 0;
  local_2c8 = 0xffffffff;
  uStack_2c0 = 0xffffffff00000000;
  local_f8 = local_ec;
  local_ec[0] = 0;
  local_a0 = local_94;
  local_94[0] = 0;
  local_1c0 = local_1b4;
  local_1b4[0] = 0;
  local_168 = local_15c;
  local_15c[0] = 0;
  uStack_3c0 = 0;
  uStack_2d8 = 0;
  uStack_1f0 = 0;
  local_48 = *(int *)PTR_DAT_04bc0b30;
  local_44 = 0;
  local_50 = PTR_DAT_04bc0a78 + 0x10;
  *(int *)PTR_DAT_04bc0b30 = local_48 + 1;
  puStack_3e0 = PTR_DAT_04bc0bf0 + 0x10;
  local_40 = 0;
  local_38 = 0;
  local_3f0 = PTR_DAT_04bb2020 + 0x10;
  local_30 = 0;
  local_3e8 = "DreamFavorite";
  uVar1 = local_28;
  if (6 < local_28) {
    uVar1 = 0;
  }
  local_340 = local_398;
  local_2e0 = local_3c8;
  local_2b0 = local_398;
  local_258 = local_398;
  local_1f8 = local_3c8;
  local_1c8 = local_398;
  local_170 = local_398;
  local_100 = local_398;
  local_a8 = local_398;
  FUN_01bea210(&puStack_3e0,lVar4,&local_3f0,&DAT_05692260 + (long)(int)uVar1 * 2);
  FUN_01bea9c8(&puStack_3e0);
  FUN_01be9eb8(&puStack_3e0);
  return;
}

