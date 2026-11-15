
void FUN_0243e824(long param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  undefined6 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined1 auStack_48 [8];
  undefined *local_40;
  undefined8 local_38;
  
  pbVar2 = (byte *)(param_1 + 0x1ee8);
  if ((*(long *)PTR_DAT_04bb4718 != 0) && ((ulong)*pbVar2 < 8)) {
    lVar1 = *(long *)PTR_DAT_04bb4718 + 0xf04;
    *(undefined4 *)(lVar1 + (ulong)*pbVar2 * 8) = 0;
    bVar5 = *pbVar2;
    bVar9 = 7 < bVar5;
    if (bVar9) {
      bVar5 = 0xff;
    }
    lVar3 = lVar1 + ((long)(char)bVar5 & 0xffffffffU) * 8;
    if (bVar9) {
      lVar3 = lVar1;
    }
    *(undefined4 *)(lVar3 + 4) = 0;
  }
  FUN_023203ac(param_1,0,0);
  local_40 = (undefined *)CONCAT35(local_40._5_3_,0x100000000);
  local_38 = (char *)CONCAT44(local_38._4_4_,6);
  uVar8 = local_38;
  local_38._0_6_ = (undefined6)uVar8;
  uVar7 = (undefined6)local_38;
  local_38 = (char *)((ulong)local_38._7_1_ << 0x38);
  local_38 = (char *)(CONCAT26(local_38._6_2_,uVar7) & 0xffff0000ffffffff);
  FUN_02321e44(auStack_48,param_1,&local_40);
  plVar11 = *(long **)(param_1 + 0x60);
  if (plVar11 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_052461c0), iVar10 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar11 = &DAT_05240280;
    }
    else {
      plVar11 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar11 + 0x4e8))(plVar11,0);
  FUN_02cae8a8(*(undefined8 *)PTR_DAT_04bc5c78,pbVar2);
  if ((*(uint *)(param_1 + 0x17d4) >> 5 & 1) == 0) {
    if ((*(long *)(param_1 + 0x70) == 0) || (*(int *)(*(long *)(param_1 + 0x70) + 0x288) != 9)) {
      plVar11 = *(long **)(param_1 + 0x60);
      if (plVar11 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_052461c0);
          plVar11 = &DAT_05240280;
          if (iVar10 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar11 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar11 + 0x4e8))(plVar11,0);
      FUN_016ec07c(0,*(long *)(param_1 + 0x68) + 0x278,1);
      puVar12 = *(undefined8 **)(param_1 + 0x60);
      if (puVar12 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_052461c0);
          puVar12 = &DAT_05240280;
          if (iVar10 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar12 = &DAT_05240280;
        }
      }
      local_40 = PTR_DAT_04bb2020 + 0x10;
      local_38 = "PlayerSharePlayWarpIn2";
      FUN_017029bc(puVar12,&local_40,6,0,0);
    }
    else {
      FUN_023164ec(param_1,6);
      plVar11 = *(long **)(param_1 + 0x60);
      if (plVar11 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_052461c0);
          plVar11 = &DAT_05240280;
          if (iVar10 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar11 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar11 + 0x4e8))(plVar11,1);
    }
    uVar6 = *(uint *)(param_1 + 0x17d4) | 0x40;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x17d4) & 0xffffffbf;
  }
  *(uint *)(param_1 + 0x17d4) = uVar6;
  FUN_024b16f0(param_1);
  plVar11 = *(long **)(param_1 + 0x68);
  puVar4 = PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    puVar4 = (undefined *)(param_1 + 0xeec);
  }
  FUN_02569464(&local_40,puVar4);
  (**(code **)(*plVar11 + 0x160))(plVar11,&local_40);
  return;
}

