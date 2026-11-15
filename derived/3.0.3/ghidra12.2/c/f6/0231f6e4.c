
/* WARNING: Removing unreachable block (ram,0x0231f77c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0231f6e4(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  short *psVar7;
  
  if ((*(byte *)(param_1 + 0x17cf) >> 4 & 1) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x17d4) >> 9 & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x17d4) & 0x2000) != 0 || *(int *)(param_1 + 0x21bc) != 0) {
    return 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if ((puVar6[0x227] != 0) &&
     (uVar2 = FUN_03850a90(puVar6[0x227],0x16,0,*(uint *)(puVar6 + 0x2d3) >> 1 & 1),
     (uVar2 & 1) != 0)) {
    return 0;
  }
  lVar4 = *(long *)PTR_DAT_04bb4718;
  if ((lVar4 == 0) || (uVar2 = (ulong)*(byte *)(param_1 + 0x1ee8), 7 < uVar2)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar7 = &DAT_054f0c08;
      if (iVar1 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar7 = &DAT_054f0c08;
    }
  }
  else {
    psVar7 = (short *)(lVar4 + uVar2 * 0xd0 +
                       (ulong)(*(uint *)(lVar4 + uVar2 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if ((char)psVar7[0x32] == '\0') {
    return 1;
  }
  if (*psVar7 != *(short *)PTR_DAT_04bb6298) {
    return 1;
  }
  if (0x148 < *(uint *)(psVar7 + 2)) {
    return 1;
  }
  if (*(uint *)(psVar7 + 2) != 0x13b) {
    return 1;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 == 0)) {
        puVar6 = &DAT_05240280;
        goto LAB_0231f838;
      }
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      lVar4 = DAT_052413b8;
    }
    else {
      lVar4 = puVar5[0x227];
    }
    puVar6 = &DAT_05240280;
  }
  else {
LAB_0231f838:
    lVar4 = puVar6[0x227];
    puVar5 = puVar6;
  }
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(puVar5 + 0x2d3) >> 1 & 1;
  }
  uVar2 = FUN_0073d6e0(puVar6,uVar3);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  return 0;
}

