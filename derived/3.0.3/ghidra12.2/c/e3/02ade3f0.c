
/* WARNING: Removing unreachable block (ram,0x02ade794) */
/* WARNING: Removing unreachable block (ram,0x02adec68) */

void FUN_02ade3f0(long param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined ***__dest;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined ***__src;
  int iVar24;
  uint local_e8 [2];
  undefined *local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined *local_b8;
  int local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  uint local_84;
  undefined **local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined **local_68;
  undefined8 uStack_60;
  undefined1 local_54 [4];
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    return;
  }
  local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
  uVar17 = FUN_02b673a0(&local_e0,*(undefined4 *)(param_2 + 0xc));
  puVar7 = PTR_DAT_04bb5008;
  if (((uVar17 & 1) != 0) && (iVar13 = FUN_0266ce40((ulong)local_e0 & 0xffffffff), iVar13 == -1)) {
    FUN_02b3ce70(*(long *)puVar7 + 0x26e8,0x6622bd46);
    lVar18 = *(long *)(*(long *)(param_1 + 8) + 8);
    if ((lVar18 != 0) &&
       (((*(uint *)(param_2 + 0x18) < 0x120 && (*(uint *)(param_2 + 0x1c) < 0x100)) &&
        (*(int *)(lVar18 + (ulong)*(uint *)(param_2 + 0x18) * 0x400 +
                  (ulong)*(uint *)(param_2 + 0x1c) * 4 + 0x30) != -1)))) {
      FUN_01361f00();
    }
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_78 = "RcoMoveHouseReserved";
    local_80 = ppuVar1;
    FUN_0274e338(&local_80,0);
    local_78 = "RcoMoveReservedAnyone";
    local_80 = ppuVar1;
    FUN_0273f3c4(&local_80,0);
    local_78 = "RcoMoveReservedKind";
    local_80 = ppuVar1;
    FUN_0273f3c4(&local_80,0);
  }
  puVar6 = PTR_DAT_04bb2010;
  local_b0 = *(int *)(param_2 + 0xc);
  local_b8 = PTR_DAT_04bc43f8 + 0x10;
  lVar18 = *(long *)(param_1 + 8);
  local_e0 = PTR_DAT_04bc4608 + 0x10;
  local_d8 = PTR_DAT_04bbc570[8];
  local_d4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
  local_c8 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
  local_d0 = PTR_DAT_04bb2010 + 0x10;
  local_c0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_bc = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (local_b0 != 0) {
    local_a0 = (char *)&local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = &local_e0;
    lVar19 = *(long *)(lVar18 + 8);
    if (lVar19 != 0) {
      plVar20 = (long *)(*(code *)**(undefined8 **)(lVar19 + 0x10))();
      iVar13 = (**(code **)(*plVar20 + 0x18))();
      if (0 < iVar13) {
        iVar24 = 0;
        do {
          FUN_01360490(&local_80,*(undefined8 *)(lVar18 + 8),iVar24);
          uVar17 = (*(code *)*local_a8)(&local_a8,&local_80);
          if ((uVar17 & 1) != 0) break;
          bVar11 = iVar13 + -1 != iVar24;
          iVar24 = iVar24 + 1;
        } while (bVar11);
      }
    }
  }
  FUN_02b3ce70(*(long *)puVar7 + 0x26e8,0x6622bd46);
  FUN_02b3d0e0(*(long *)puVar7 + 0x26e8,local_d4,0x6622bd46);
  lVar18 = *(long *)(param_1 + 8);
  lVar19 = *(long *)(lVar18 + 8);
  if (lVar19 != 0) {
    if (((*(uint *)(param_2 + 0x18) < 0x120) && (*(uint *)(param_2 + 0x1c) < 0x100)) &&
       (*(int *)(lVar19 + (ulong)*(uint *)(param_2 + 0x18) * 0x400 +
                 (ulong)*(uint *)(param_2 + 0x1c) * 4 + 0x30) != -1)) {
      FUN_01361f00(lVar19);
      lVar18 = *(long *)(param_1 + 8);
      lVar19 = *(long *)(lVar18 + 8);
      if (lVar19 == 0) goto LAB_02ade690;
    }
    if ((uint)local_c8 < 0x120) {
      if ((local_c8._4_4_ < 0x100) &&
         (*(int *)(lVar19 + (local_c8 & 0xffffffff) * 0x400 + (ulong)local_c8._4_4_ * 4 + 0x30) !=
          -1)) {
        FUN_01361f00(lVar19);
        lVar18 = *(long *)(param_1 + 8);
      }
    }
  }
LAB_02ade690:
  local_c8 = *(undefined8 *)(param_2 + 0x18);
  FUN_02a59250(lVar18,&local_e0);
  uVar17 = FUN_02a8e370(&local_e0);
  if ((uVar17 & 1) == 0) goto LAB_02ade9b4;
  local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
  uVar17 = FUN_02b673a0(&local_80,local_d4);
  puVar9 = PTR_DAT_04bbfe68;
  puVar7 = PTR_DAT_04bbbf90;
  uVar16 = (uint)local_80;
  if ((uVar17 & 1) == 0) {
    uVar16 = 0;
  }
  local_a8 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
  local_a0 = (char *)CONCAT44(*(undefined4 *)(PTR_DAT_04bbbf90 + 0xc),1);
  uVar12 = FUN_017baf44();
  local_78 = (char *)&local_a8;
  local_70._0_4_ = uVar16;
  local_98 = (undefined **)(CONCAT71(local_98._1_7_,uVar12) & 0xffffffffffffff01);
  local_80 = &PTR_FUN_04a9fc88;
  uVar21 = FUN_01a4fa00(&local_a8);
  if ((uint)local_a0 == 0) {
    local_e8[0] = 0;
LAB_02ade768:
    plVar20 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_02ade76c:
    if (*plVar20 != 0) {
      local_e8[0] = 0;
      lVar18 = *(long *)(*plVar20 + 0xd0);
      if (lVar18 != 0) {
        FUN_012e6150(lVar18,&local_80,uVar21);
      }
    }
  }
  else {
    local_84 = (uint)local_a0;
    if ((uint)local_a0 != 0) {
      local_e8[0] = (uint)local_a0;
      if ((uint)local_a0 == 0) goto LAB_02ade768;
      plVar2 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar20 = plVar2 + ((ulong)local_a0 & 0xffffffff);
      if (0x38 < (uint)local_a0) {
        plVar20 = plVar2;
      }
      goto LAB_02ade76c;
    }
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
  uVar17 = FUN_0266cba0(uVar16,0);
  puVar8 = PTR_DAT_04bb4e20;
  bVar11 = false;
  if ((uVar17 & 1) != 0) {
    iVar13 = FUN_026792b0(&local_80,0x76);
    bVar11 = iVar13 != *(int *)puVar8;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,1);
  uVar17 = FUN_0266cba0(uVar16,1);
  if (((uVar17 & 1) != 0) && (iVar13 = FUN_026792b0(&local_80,0x76), iVar13 != *(int *)puVar8)) {
    bVar11 = true;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,2);
  uVar17 = FUN_0266cba0(uVar16,2);
  if (((uVar17 & 1) != 0) && (iVar13 = FUN_026792b0(&local_80,0x76), iVar13 != *(int *)puVar8)) {
    bVar11 = true;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,3);
  uVar17 = FUN_0266cba0(uVar16,3);
  if (((uVar17 & 1) != 0) && (iVar13 = FUN_026792b0(&local_80,0x76), iVar13 != *(int *)puVar8)) {
    bVar11 = true;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,4);
  uVar17 = FUN_0266cba0(uVar16,4);
  if (((uVar17 & 1) != 0) && (iVar13 = FUN_026792b0(&local_80,0x76), iVar13 != *(int *)puVar8)) {
    bVar11 = true;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,5);
  uVar17 = FUN_0266cba0(uVar16);
  if (((uVar17 & 1) != 0) && (iVar13 = FUN_026792b0(&local_80,0x76), iVar13 != *(int *)puVar8)) {
    bVar11 = true;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,6);
  uVar17 = FUN_0266cba0(uVar16,6);
  if (((uVar17 & 1) != 0) && (iVar13 = FUN_026792b0(&local_80,0x76), iVar13 != *(int *)puVar8)) {
    bVar11 = true;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,7);
  uVar17 = FUN_0266cba0(uVar16,7);
  if (((uVar17 & 1) != 0) && (iVar13 = FUN_026792b0(&local_80,0x76), iVar13 != *(int *)puVar8)) {
    bVar11 = true;
  }
  if (!bVar11) {
    FUN_0266cf60(local_e8,uVar16);
    local_a8 = (undefined **)(puVar6 + 0x10);
    local_70 = (undefined1  [8])0x0;
    local_a0 = (char *)0x0;
    local_80 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
    uStack_60 = 0;
    local_78 = (char *)local_a8;
    local_68 = local_a8;
    FUN_02a8f7b0(&local_e0,&local_80);
    local_80 = (undefined **)(puVar9 + 0x10);
    local_78 = (char *)CONCAT44(*(undefined4 *)(puVar7 + 0xc),1);
    local_a0 = (char *)CONCAT44(local_70._4_4_ + 6,local_70._0_4_ + 1);
    uVar12 = FUN_017baf44();
    local_70 = (undefined1  [8])(CONCAT71(local_70._1_7_,uVar12) & 0xffffffffffffff01);
    FUN_01a50970(&local_80,0,local_e8,&local_a8);
  }
LAB_02ade9b4:
  uVar17 = FUN_02a8e370(&local_e0);
  if ((uVar17 & 1) == 0) {
    uVar17 = FUN_02a8e598(&local_e0);
    if ((uVar17 & 1) == 0) {
      uVar17 = FUN_02a8ec10(&local_e0);
      if ((uVar17 & 1) == 0) {
        return;
      }
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      uVar17 = FUN_02b677c0(&local_80,local_d4);
      uVar14 = (uint)local_80;
      if ((uVar17 & 1) == 0) {
        uVar14 = 0;
      }
      local_a8 = (undefined **)CONCAT44(local_a8._4_4_,uVar14);
      if (uVar14 < 7) {
                    /* WARNING: Could not recover jumptable at 0x02adeac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&DAT_0417f0a4)[uVar14] * 4 + 0x2adeacc))();
        return;
      }
      return;
    }
    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
    uVar17 = FUN_02b67620(&local_80,local_d4);
    uVar16 = (uint)local_80;
    if ((uVar17 & 1) == 0) {
      uVar16 = 0;
    }
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar16);
    lVar18 = *(long *)PTR_DAT_04bb46b0;
    if (lVar18 == 0) {
      return;
    }
    puVar22 = *(undefined8 **)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
      lVar18 = (**(code **)(*(long *)*puVar22 + 0x38))();
      if (lVar18 == 0) {
        return;
      }
      lVar18 = lVar18 + 0x70;
    }
    else {
      if (puVar22 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar22[0x26] == (long *)0x0) {
        return;
      }
      lVar18 = (**(code **)(*(long *)puVar22[0x26] + 0x38))();
      if (lVar18 == 0) {
        return;
      }
    }
    if (9 < (uint)local_80) {
      return;
    }
    lVar19 = lVar18 + 0x1962d8 + ((ulong)local_80 & 0xffffffff) * 0x10d8;
    if (9 < (uint)local_80) {
      lVar19 = lVar18 + 0x1962d8;
    }
    if ((*(long **)(lVar19 + 0x28) == (long *)0x0) ||
       (puVar22 = (undefined8 *)**(long **)(lVar19 + 0x28), puVar22 == (undefined8 *)0x0)) {
      uVar14 = 1;
    }
    else {
      uVar14 = (**(code **)*puVar22)();
      uVar14 = uVar14 ^ 1;
    }
    puVar7 = PTR_PTR_04bb2238;
    cVar5 = *(char *)(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) + 0x1c4);
    local_68._0_4_ = (uint)(uint3)local_68;
    __dest = (undefined ***)(local_70 + 4);
    local_70._0_4_ = 8;
    local_80 = (undefined **)(PTR_DAT_04bb6a30 + 0x10);
    local_78 = (char *)__dest;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src = *(undefined ****)(puVar7 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
      lVar18 = 0;
      do {
        if (*(char *)(*(long *)(puVar7 + 8) + lVar18) == '\0') goto LAB_02adeda4;
        lVar3 = *(long *)(puVar7 + 8) + lVar18;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_02adeda4;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_02adeda4;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_02adeda4:
      iVar13 = (int)lVar18;
      if ((int)local_70._0_4_ <= (int)lVar18) {
        iVar13 = local_70._0_4_ + -1;
      }
      memcpy(__dest,__src,(long)iVar13);
      *(undefined1 *)((long)__dest + (long)iVar13) = 0;
    }
    local_80 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
    FUN_021d7c00(&local_80,(int)cVar5);
    local_a8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_a0 = "LE_NnpcHouseMove";
    uVar17 = FUN_01b61690(&local_84,local_54,&local_80);
    if ((uVar17 & 1) != 0) {
      uVar10 = (undefined2)local_84;
      lVar18 = *(long *)PTR_DAT_04bb49a0;
      local_e8[0] = FUN_006bd550("LE_NnpcHouseMove",0);
      uVar21 = FUN_01b5b650(lVar18 + 0x238,local_e8);
      FUN_01b60bc0(&local_a8,uVar10,local_54[0],uVar21,0,0);
    }
    if ((uVar14 & 1) != 0) {
      return;
    }
    lVar18 = *(long *)(lVar19 + 0x28);
  }
  else {
    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
    uVar17 = FUN_02b673a0(&local_80,local_d4);
    puVar7 = PTR_DAT_04bb46b0;
    uVar16 = (uint)local_80;
    if ((uVar17 & 1) == 0) {
      uVar16 = 0;
    }
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar16);
    lVar18 = *(long *)PTR_DAT_04bb46b0;
    if (lVar18 == 0) {
      return;
    }
    puVar22 = *(undefined8 **)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
      lVar18 = (**(code **)(*(long *)*puVar22 + 0x38))();
      if (lVar18 == 0) {
        return;
      }
      lVar18 = lVar18 + 0x70;
    }
    else {
      if (puVar22 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar22[0x26] == (long *)0x0) {
        return;
      }
      lVar18 = (**(code **)(*(long *)puVar22[0x26] + 0x38))();
      if (lVar18 == 0) {
        return;
      }
    }
    if (7 < (uint)local_80) {
      return;
    }
    lVar19 = lVar18 + 0x119228 + ((ulong)local_80 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_80) {
      lVar19 = lVar18 + 0x119228;
    }
    if ((*(long **)(lVar19 + 0x28) == (long *)0x0) ||
       (puVar22 = (undefined8 *)**(long **)(lVar19 + 0x28), puVar22 == (undefined8 *)0x0)) {
      uVar14 = 1;
    }
    else {
      uVar14 = (**(code **)*puVar22)();
      uVar14 = uVar14 ^ 1;
    }
    if ((*(long *)puVar7 != 0) &&
       (lVar18 = FUN_026eec4c(*(long *)puVar7,
                              (long)*(char *)(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) +
                                             0x289f8)), lVar18 != 0)) {
      if ((*(long **)(lVar18 + 0x17f68) == (long *)0x0) ||
         (puVar22 = (undefined8 *)**(long **)(lVar18 + 0x17f68), puVar22 == (undefined8 *)0x0)) {
        uVar15 = 1;
      }
      else {
        uVar15 = (**(code **)*puVar22)();
        uVar15 = uVar15 ^ 1;
      }
      local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_78 = "LE_PlayerVillager_HouseMove";
      lVar3 = *(long *)(lVar18 + 0x17f48);
      lVar4 = *(long *)(lVar18 + 0x17f50);
      lVar23 = *(long *)PTR_DAT_04bb49a0;
      uVar16 = FUN_006bd550("LE_PlayerVillager_HouseMove",0);
      local_a8 = (undefined **)CONCAT44(local_a8._4_4_,uVar16);
      uVar21 = FUN_01b5b650(lVar23 + 0x238,&local_a8);
      FUN_01b5cf20(&local_80,uVar21,0,lVar4 + lVar3,0);
      if ((((uVar15 & 1) == 0) && (*(long *)(lVar18 + 0x17f68) != 0)) &&
         (puVar22 = *(undefined8 **)(*(long *)(lVar18 + 0x17f68) + 8), puVar22 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar22)();
      }
    }
    if ((uVar14 & 1) != 0) {
      return;
    }
    lVar18 = *(long *)(lVar19 + 0x28);
  }
  if ((lVar18 != 0) && (*(undefined8 **)(lVar18 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar18 + 8))();
  }
  return;
}

