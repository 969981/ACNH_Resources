
bool FUN_03411460(long param_1,char *param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_1c0;
  undefined1 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined *local_190;
  undefined1 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c [63];
  undefined1 local_13d;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined1 local_e0 [8];
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  uint *puStack_48;
  undefined4 local_40;
  uint local_3c;
  undefined1 local_38;
  undefined1 local_35;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    local_1ac = 0;
    local_1b0 = 0x40;
    local_1a8 = 0xffffffff;
    uStack_1a0 = 0xffffffff00000000;
    puStack_1b8 = local_e0;
    local_198 = 0xffffffff;
    puStack_188 = local_17c;
    local_180 = 0x40;
    local_13d = 0;
    local_190 = PTR_DAT_04bb2bc0 + 0x10;
    local_17c[0] = 0;
    local_128 = 0x40;
    local_e5 = 0;
    local_124[0] = 0;
    puStack_130 = local_124;
    local_1c0 = PTR_DAT_04bb6b18 + 0x10;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    ppuVar1 = &local_60;
    if (&local_60 <= local_e0 + 2) {
      ppuVar1 = (undefined **)(local_e0 + 2);
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = (undefined1  [8])0x0;
    uStack_d8 = 0;
    local_138 = local_190;
    memset(puStack_1b8,0,(size_t)((long)ppuVar1 + (-0xe0 - (long)&local_1c0)));
    bVar2 = *(int *)(param_2 + 4) != -1;
    if (bVar2) {
      local_35 = 0;
      local_40 = 8;
      puStack_48 = &local_3c;
      local_3c = local_3c & 0xffffff00;
      local_50 = PTR_DAT_04bb3768 + 0x10;
      if (*param_2 == '\0') {
        FUN_038d1270(&local_50,&DAT_040e92c2,*(int *)(param_2 + 4) + 1);
      }
      else {
        local_38 = 0;
        local_3c = 0x39303030;
      }
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = "Hotel_RoomNumber";
      FUN_006f50a0(&local_1c0,&local_60,&local_50,0);
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x1d);
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar3 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
      uVar4 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar4 * 4) == 0x8c) goto LAB_03411620;
        uVar4 = uVar4 + 1;
      } while (*(uint *)PTR_DAT_04bc0a80 != uVar4);
    }
    uVar4 = 0;
LAB_03411620:
    local_60 = (undefined *)CONCAT44(local_60._4_4_,(int)uVar4);
    FUN_01bae480(param_1 + 0x390,&local_1c0,0,&local_60,(ulong)local_50 & 0xffffffff);
  }
  return bVar2;
}

