
bool FUN_02e9cdc0(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_1c0;
  char *pcStack_1b8;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined1 local_d0 [8];
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  undefined4 local_14;
  
  if (param_1 != 0) {
    local_35 = 0;
    local_40 = 8;
    local_3c[0] = 0;
    puStack_48 = local_3c;
    local_50 = PTR_DAT_04bb3768 + 0x10;
    (**(code **)(*(long *)(param_2 + 8) + 0x18))((long *)(param_2 + 8));
    FUN_038d1270(&local_50,&DAT_0409e973,*(undefined8 *)(param_2 + 0x10));
    local_19c = 0;
    local_1a0 = 0x40;
    local_198 = 0xffffffff;
    uStack_190 = 0xffffffff00000000;
    puStack_1a8 = local_d0;
    local_188 = 0xffffffff;
    puStack_178 = local_16c;
    local_170 = 0x40;
    local_12d = 0;
    local_180 = PTR_DAT_04bb2bc0 + 0x10;
    local_16c[0] = 0;
    local_118 = 0x40;
    local_d5 = 0;
    local_114[0] = 0;
    puStack_120 = local_114;
    local_1b0 = PTR_DAT_04bb6b18 + 0x10;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    ppuVar1 = &local_50;
    if (&local_50 <= local_d0 + 2) {
      ppuVar1 = (undefined **)(local_d0 + 2);
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = (undefined1  [8])0x0;
    uStack_c8 = 0;
    local_128 = local_180;
    memset(puStack_1a8,0,(size_t)((long)ppuVar1 + (-0xe0 - (long)&local_1b0)));
    local_1c0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_1b8 = "Hotel_ThemeName";
    FUN_006f50a0(&local_1b0,&local_1c0,&local_50,0);
    local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x1c);
    if ((*PTR_DAT_04bc0a88 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0a88);
      if (iVar2 != 0) {
        FUN_01bb25c8(PTR_DAT_04bc0a80);
        __cxa_guard_release(PTR_DAT_04bc0a88);
      }
    }
    if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
      uVar3 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar3 * 4) == 0x8c) goto LAB_02e9cf5c;
        uVar3 = uVar3 + 1;
      } while (*(uint *)PTR_DAT_04bc0a80 != uVar3);
    }
    uVar3 = 0;
LAB_02e9cf5c:
    local_14 = (undefined4)uVar3;
    FUN_01bae480(param_1 + 0x390,&local_1b0,0,&local_14,(ulong)local_1c0 & 0xffffffff);
  }
  return param_1 != 0;
}

