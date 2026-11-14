
/* WARNING: Removing unreachable block (ram,0x0160b644) */
/* WARNING: Removing unreachable block (ram,0x0160b64c) */
/* WARNING: Removing unreachable block (ram,0x0160b5a0) */
/* WARNING: Removing unreachable block (ram,0x0160b5a8) */
/* WARNING: Removing unreachable block (ram,0x0160b5ec) */
/* WARNING: Removing unreachable block (ram,0x0160b698) */
/* WARNING: Removing unreachable block (ram,0x0160b69c) */

void FUN_0160b250(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint local_bc;
  undefined8 local_70;
  char *pcStack_68;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar27 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x1d0);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Morning_Fine_OR";
    lVar6 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c5c),&local_70,param_1 + 0x1c5c);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Morning_Fine_BeforeCloudy_OR";
    lVar7 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c60),&local_70,param_1 + 0x1c60);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Morning_Fine_BeforeRainy_OR";
    lVar8 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c64),&local_70,param_1 + 0x1c64);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Morning";
    lVar9 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c68),&local_70,param_1 + 0x1c68);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Morning_BeforeCloudy_OR";
    lVar10 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c6c),&local_70,param_1 + 0x1c6c);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Morning_BeforeRainy_OR";
    lVar11 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c70),&local_70,param_1 + 0x1c70);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Twilight_Fine_OR";
    lVar12 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c74),&local_70,param_1 + 0x1c74);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Twilight_Fine_BeforeCloudy_OR";
    lVar13 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c78),&local_70,param_1 + 0x1c78);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Twilight_Fine_BeforeRainy_OR";
    lVar14 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c7c),&local_70,param_1 + 0x1c7c);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Twilight";
    lVar15 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c80),&local_70,param_1 + 0x1c80);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Twilight_BeforeCloudy_OR";
    lVar16 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c84),&local_70,param_1 + 0x1c84);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Twilight_BeforeRainy_OR";
    lVar17 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c88),&local_70,param_1 + 0x1c88);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Morning_Cloudy_OR";
    lVar18 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c8c),&local_70,param_1 + 0x1c8c);
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "Morning_Cloudy_BeforeRainy_OR";
    lVar19 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c90),&local_70,param_1 + 0x1c90);
    local_70._0_4_ = 0x48f9770;
    local_70._4_4_ = 0;
    pcStack_68 = "Morning_Cloudy_Fog_OR";
    lVar20 = FUN_015ff440(uVar27,*(undefined4 *)(param_1 + 0x1c94),&local_70,param_1 + 0x1c94);
    puVar5 = PTR_DAT_04bb2200;
    cVar3 = *(char *)(DAT_04da7238 + 0x65334);
    uVar23 = (ulong)(short)DAT_04c487d4;
    if (uVar23 == 0xffffffffffffffff) {
      uVar21 = *(uint *)(DAT_04da7238 + 0x6532c);
      uVar22 = *(uint *)(DAT_04da7238 + 0x65330);
      if (2 < uVar21) {
        uVar21 = 0;
      }
      if (2 < uVar22) {
        uVar22 = 0;
      }
      uVar24 = uVar21;
      local_bc = uVar22;
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar23 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar24 = *(uint *)(DAT_04da7238 + 0x6532c);
      uVar21 = uVar24;
      if (2 < uVar24 || (*puVar1 & 0x800000) != 0) {
        uVar21 = 0;
      }
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar23 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 & 0x800000) != 0 || 2 < uVar24) {
        uVar24 = 0;
      }
      uVar22 = *(uint *)(DAT_04da7238 + 0x65330);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar23 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      local_bc = uVar22;
      if (2 < uVar22 || (*puVar1 & 0x800000) != 0) {
        local_bc = 0;
      }
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar23 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (2 < uVar22 || (*puVar1 & 0x800000) != 0) {
        uVar22 = 0;
      }
    }
    if (param_3 < *(uint *)(*(long *)(param_1 + 0x68) + 0x248)) {
      lVar26 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x250) + (long)(int)param_3 * 8);
    }
    else {
      lVar26 = 0;
    }
    lVar25 = 0;
    bVar4 = false;
    if (uVar22 != 2) {
      lVar14 = lVar12;
    }
    if (local_bc != 1) {
      lVar13 = lVar14;
    }
    if (uVar24 != 2) {
      lVar11 = lVar9;
      lVar8 = lVar6;
    }
    if (uVar21 != 1) {
      lVar7 = lVar8;
      lVar10 = lVar11;
    }
    do {
      local_70._0_4_ = 0xffffffff;
      lVar14 = (**(code **)(**(long **)(*(long *)(lVar26 + 0x1f8) + lVar25 * 8) + 0xf0))();
      if (**(char **)(lVar14 + 8) == '\0') {
        lVar14 = 0;
      }
      else {
        uVar28 = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0x70) + 0x1d0);
        uVar2 = *(undefined4 *)(lVar26 + 0x158 + lVar25 * 4);
        uVar27 = (**(code **)(**(long **)(*(long *)(lVar26 + 0x1f8) + lVar25 * 8) + 0xf0))();
        lVar11 = FUN_015ff440(uVar28,uVar2,uVar27,&local_70);
        lVar14 = lVar11;
        if (((*(char *)(*(long *)(*(long *)puVar5 + 0x70) + 0xd0) == '\0') &&
            (((cVar3 == '\0' || (lVar14 = lVar20, lVar11 != lVar18 && lVar11 != lVar19)) &&
             (lVar14 = lVar7, lVar11 != lVar6)))) &&
           ((lVar14 = lVar10, lVar11 != lVar9 && (lVar14 = lVar13, lVar11 != lVar12)))) {
          lVar8 = lVar17;
          if (uVar22 != 2) {
            lVar8 = lVar11;
          }
          lVar14 = lVar16;
          if (local_bc != 1) {
            lVar14 = lVar8;
          }
          if (lVar11 != lVar15) {
            lVar14 = lVar11;
          }
        }
      }
      *(long *)(param_2 + 0x10 + lVar25 * 8) = lVar14;
      bVar4 = (bool)(lVar14 != 0 | bVar4);
      *(undefined4 *)(lVar26 + 0x158 + lVar25 * 4) = (undefined4)local_70;
      lVar25 = lVar25 + 1;
    } while (lVar25 != 0x18);
    if (!bVar4) {
      *(long *)(param_2 + 0x70) = param_1 + 0x70;
    }
  }
  return;
}

