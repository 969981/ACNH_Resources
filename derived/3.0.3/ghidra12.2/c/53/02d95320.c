
/* WARNING: Removing unreachable block (ram,0x02d956b0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02d95320(long param_1)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined *local_120;
  char *local_118;
  undefined1 local_110;
  undefined *local_108;
  undefined4 local_100;
  uint uStack_fc;
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [12];
  undefined8 local_e0;
  char *local_d8;
  undefined *local_d0;
  uint *local_c8;
  int local_c0;
  uint local_bc;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_7d;
  byte local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  
  piVar1 = (int *)(param_1 + 0x1c248);
  lVar13 = *(long *)(*(long *)(param_1 + 0x228) + 0x578);
  if (*(uint *)(lVar13 + 0x298) < 2) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(lVar13 + 0x444) + *(int *)(lVar13 + 0x2e8) * *(int *)(lVar13 + 0x440);
  }
  FUN_02d949c0(auStack_f8,param_1,iVar11);
  uVar14 = 0xffffffff;
  uVar9 = *(uint *)(param_1 + 0x1c260);
  local_108 = PTR_DAT_04bb2e18 + 0x10;
  if ((-1 < (int)uVar9) && ((int)uVar9 < *piVar1)) {
    lVar13 = param_1 + 0x1c238;
    uVar16 = uVar9 + 1 & 3;
    if (2 < uVar9) {
      uVar9 = uVar9 + 1 & 0xfffffffc;
      do {
        uVar9 = uVar9 - 4;
        lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 8) + 8) + 8) + 8);
      } while (uVar9 != 0);
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      lVar13 = *(long *)(lVar13 + 8);
    }
    uVar14 = 0xffffffff;
    if ((lVar13 != 0) && (lVar13 = lVar13 - *(int *)(param_1 + 0x1c24c), lVar13 != 0)) {
      uVar14 = *(undefined4 *)(lVar13 + 0x270);
    }
  }
  local_e0 = CONCAT44(local_e0._4_4_,uVar14);
  FUN_02d949c0(auStack_ec,param_1,iVar11);
  FUN_03414580(&local_e0,auStack_ec,(byte *)(param_1 + 0x1f8));
  local_110 = local_d0._0_1_;
  local_120._0_6_ = (undefined6)local_e0;
  local_118 = local_d8;
  local_100 = local_c0;
  uStack_fc = local_bc;
  uVar9 = FUN_03416230(auStack_f8,&local_120);
  uVar16 = *(uint *)(param_1 + 0x1c260);
  iVar15 = -1;
  if ((-1 < (int)uVar16) && ((int)uVar16 < *piVar1)) {
    lVar13 = param_1 + 0x1c238;
    uVar3 = uVar16 + 1 & 3;
    if (2 < uVar16) {
      uVar16 = uVar16 + 1 & 0xfffffffc;
      do {
        uVar16 = uVar16 - 4;
        lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 8) + 8) + 8) + 8);
      } while (uVar16 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      lVar13 = *(long *)(lVar13 + 8);
    }
    iVar15 = -1;
    if ((lVar13 != 0) && (lVar13 = lVar13 - *(int *)(param_1 + 0x1c24c), lVar13 != 0)) {
      iVar15 = *(int *)(lVar13 + 0x270);
    }
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar15);
  lVar13 = *(long *)(*(long *)(param_1 + 0x228) + 0x578);
  if (iVar11 < *(int *)(lVar13 + 0x3d4)) {
    iVar10 = *(int *)(lVar13 + 0x2e8);
    iVar5 = 0;
    if (iVar10 != 0) {
      iVar5 = iVar11 / iVar10;
    }
    iVar17 = *(int *)(lVar13 + 0x430) - *(int *)(lVar13 + 0x438);
    if ((*(byte *)(lVar13 + 1000) >> 1 & 1) != 0) {
      uVar3 = *(uint *)(lVar13 + 0x434);
      uVar16 = 0;
      if ((int)uVar3 < iVar17) {
        uVar16 = ~uVar3;
      }
      if (iVar17 < 0) {
        uVar16 = uVar3 + 1;
      }
      iVar17 = uVar16 + iVar17;
    }
    uVar16 = (iVar11 - iVar5 * iVar10) + (iVar5 - iVar17) * iVar10;
    uVar3 = *(uint *)(lVar13 + 0x208);
    bVar7 = (int)uVar16 < 0;
    bVar8 = (int)uVar3 <= (int)uVar16;
    if (bVar7 || bVar8) {
      uVar16 = 0xffffffff;
    }
    if ((((!bVar7 && !bVar8) && (int)uVar16 < (int)uVar3) && uVar16 <= uVar3) &&
        (((bVar7 || bVar8) || (int)uVar3 <= (int)uVar16) || uVar3 != uVar16)) {
      puVar18 = *(undefined8 **)(*(long *)(lVar13 + 0x210) + (ulong)uVar16 * 8);
      goto LAB_02d9558c;
    }
  }
  puVar18 = (undefined8 *)0x0;
LAB_02d9558c:
  pcVar2 = (char *)(param_1 + 0x108d8c);
  if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((puVar18 != (undefined8 *)0x0) &&
     (uVar12 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bc4d90), (uVar12 & 1) != 0)) {
    if ((*(byte *)((long)puVar18 + 0x2c3) & 1) == 0) {
      bVar8 = false;
    }
    else {
      FUN_02d949c0(&local_e0,param_1,iVar11);
      uVar16 = *(uint *)(param_1 + 0x1c260);
      uVar14 = 0xffffffff;
      if ((-1 < (int)uVar16) && ((int)uVar16 < *piVar1)) {
        lVar13 = param_1 + 0x1c238;
        uVar3 = uVar16 + 1 & 3;
        if (2 < uVar16) {
          uVar16 = uVar16 + 1 & 0xfffffffc;
          do {
            uVar16 = uVar16 - 4;
            lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 8) + 8) + 8) + 8);
          } while (uVar16 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          lVar13 = *(long *)(lVar13 + 8);
        }
        uVar14 = 0xffffffff;
        if ((lVar13 != 0) && (lVar13 = lVar13 - *(int *)(param_1 + 0x1c24c), lVar13 != 0)) {
          uVar14 = *(undefined4 *)(lVar13 + 0x270);
        }
      }
      iVar11 = FUN_02d95180((long)&local_e0 + 4,uVar14);
      bVar8 = iVar11 != 0;
    }
    *pcVar2 = bVar8;
  }
  if (iVar15 == 0x6f || iVar15 == 0x78) {
    uVar9 = uVar9 & 0xfffffffb;
  }
  local_e0 = CONCAT44(local_e0._4_4_,3);
  puVar18 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar18 == (undefined8 *)0x0) {
    return;
  }
  uVar12 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bc7278);
  if ((uVar12 & 1) == 0) {
    return;
  }
  FUN_03459d70();
  local_7d = 0;
  local_bc = local_bc & 0xffffff00;
  local_c8 = &local_bc;
  local_c0 = 0x40;
  local_e0 = 0xffffffffffffffff;
  local_d8 = (char *)0xffffffffffffffff;
  uVar16 = uVar9 & 0xff;
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_6c = 0xffffffffffffffff;
  local_78 = *(byte *)(param_1 + 0x1f8);
  local_74 = 0;
  local_70 = 0;
  if (7 < local_78) {
    local_78 = 0xff;
  }
  puVar6 = local_c8;
  if ((uVar9 & 1) != 0) {
    local_b7 = 0;
    local_e0 = 0xffffffff00000004;
    local_bc = 0x30333131;
    local_b8 = 0x31;
    FUN_02ee2b00(puVar18,&local_e0,1);
    puVar6 = local_c8;
  }
  local_c8 = puVar6;
  if ((uVar16 >> 1 & 1) != 0) {
    local_e0._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
    local_e0 = CONCAT44(local_e0._4_4_,5);
    if (puVar6 != (uint *)"11302") {
      iVar11 = 5;
      if (local_c0 < 6) {
        iVar11 = local_c0 + -1;
      }
      memcpy(puVar6,"11302",(long)iVar11);
      *(char *)((long)puVar6 + (long)iVar11) = '\0';
    }
    FUN_02ee2b00(puVar18,&local_e0,1);
  }
  if ((uVar16 >> 2 & 1) != 0) {
    local_120 = PTR_DAT_04bb2020 + 0x10;
    local_118 = "/L_SortWin_00";
    lVar13 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_120);
    puVar6 = local_c8;
    if (lVar13 != 0) {
      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar13 + 0x2cc));
      if (local_c8 != (uint *)"11305") {
        iVar11 = 5;
        if (local_c0 < 6) {
          iVar11 = local_c0 + -1;
        }
        memcpy(local_c8,"11305",(long)iVar11);
        *(char *)((long)puVar6 + (long)iVar11) = '\0';
      }
      FUN_02ee2b00(puVar18,&local_e0,1);
    }
  }
  puVar6 = local_c8;
  if ((uVar16 >> 4 & 1) != 0) {
    local_e0 = CONCAT44(local_e0._4_4_,6);
    if (local_c8 != (uint *)"11306") {
      iVar11 = 5;
      if (local_c0 < 6) {
        iVar11 = local_c0 + -1;
      }
      memcpy(local_c8,"11306",(long)iVar11);
      *(char *)((long)puVar6 + (long)iVar11) = '\0';
    }
    FUN_02ee2b00(puVar18,&local_e0,1);
    puVar6 = local_c8;
  }
  if ((uVar16 >> 6 & 1) != 0) {
    local_e0._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
    local_e0 = CONCAT44(local_e0._4_4_,6);
    local_c8 = puVar6;
    if (puVar6 != (uint *)"11303") {
      iVar11 = 5;
      if (local_c0 < 6) {
        iVar11 = local_c0 + -1;
      }
      memcpy(puVar6,"11303",(long)iVar11);
      *(char *)((long)puVar6 + (long)iVar11) = '\0';
    }
    FUN_02ee2b00(puVar18,&local_e0,1);
    puVar6 = local_c8;
  }
  if ((uVar16 >> 5 & 1) == 0) {
    cVar4 = *pcVar2;
  }
  else {
    local_e0._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
    local_e0 = CONCAT44(local_e0._4_4_,6);
    local_c8 = puVar6;
    if (puVar6 != (uint *)"11304") {
      iVar11 = 5;
      if (local_c0 < 6) {
        iVar11 = local_c0 + -1;
      }
      memcpy(puVar6,"11304",(long)iVar11);
      *(char *)((long)puVar6 + (long)iVar11) = '\0';
    }
    FUN_02ee2b00(puVar18,&local_e0,1);
    cVar4 = *pcVar2;
    puVar6 = local_c8;
  }
  if (cVar4 != '\0') {
    local_e0._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
    local_e0 = CONCAT44(local_e0._4_4_,6);
    local_c8 = puVar6;
    if (puVar6 != (uint *)"11307") {
      iVar11 = 5;
      if (local_c0 < 6) {
        iVar11 = local_c0 + -1;
      }
      memcpy(puVar6,"11307",(long)iVar11);
      *(char *)((long)puVar6 + (long)iVar11) = '\0';
    }
    FUN_02ee2b00(puVar18,&local_e0,1);
  }
  return;
}

