
/* WARNING: Removing unreachable block (ram,0x02b1d2b8) */
/* WARNING: Removing unreachable block (ram,0x02b1d260) */
/* WARNING: Removing unreachable block (ram,0x02b1d290) */
/* WARNING: Removing unreachable block (ram,0x02b1d2c8) */
/* WARNING: Removing unreachable block (ram,0x02b1d2d4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_02b1d200(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  int iVar9;
  short sVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  int local_e0;
  int local_dc;
  int local_d4;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  int iStack_ac;
  undefined8 local_98;
  
  puVar5 = PTR_DAT_04bb27c8;
  if (((*(byte *)(param_2 + 8) >> 1 & 1) == 0) &&
     (((*(long *)(param_2 + 0xc0) == 0 ||
       (lVar14 = *(long *)(*(long *)(param_2 + 0xc0) + 0x88), lVar14 == 0)) ||
      (*(char *)(lVar14 + 0x48) == '\0')))) {
    lVar14 = param_2 + 0x68;
  }
  else {
    lVar14 = param_2 + 0x270;
  }
  lVar15 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (((lVar15 == 0) ||
      (local_b8._0_4_ = *(int *)(lVar14 + 0x10), (int)local_b8 < *(int *)(lVar15 + 0x20))) ||
     ((*(int *)(lVar15 + 0x30) < *(int *)(lVar14 + 0x20) ||
      ((*(int *)(lVar14 + 0x14) < *(int *)(lVar15 + 0x24) ||
       (*(int *)(lVar15 + 0x34) < *(int *)(lVar14 + 0x24))))))) {
    uVar13 = 6;
    goto LAB_02b1d328;
  }
  puVar2 = (undefined *)(lVar14 + 8);
  puVar3 = (undefined *)(lVar14 + 0x18);
  iVar18 = *(int *)(lVar14 + 0x24) + 1;
  local_b8._4_4_ = *(int *)(lVar14 + 0x14);
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  iVar9 = *(int *)(lVar14 + 0x10);
  if ((iVar9 != (int)local_b8) || (iVar18 != local_b8._4_4_)) {
    local_d0 = puVar2;
    local_c8 = puVar3;
    do {
      uVar11 = FUN_02a7c78c(param_2,&local_c0);
      if ((uVar11 & 1) != 0) {
        local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
        local_f8 = (undefined *)0x0;
        local_98 = CONCAT44(5,(int)local_98);
        local_f8 = (undefined *)0x20;
        lVar15 = *(long *)puVar5;
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) &&
           (uVar11 = FUN_00949898(lVar15 + 0x28,&local_c0,&local_f8), (uVar11 & 1) != 0)) {
          return 1;
        }
        local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
        local_f8 = (undefined *)0x0;
        local_98 = CONCAT44(0x1d,(int)local_98);
        local_f8 = (undefined *)0x20000000;
        lVar15 = *(long *)puVar5;
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) &&
           (uVar11 = FUN_00949898(lVar15 + 0x28,&local_c0,&local_f8), (uVar11 & 1) != 0)) {
          return 1;
        }
        local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
        local_f8 = (undefined *)0x0;
        local_98 = CONCAT44(0x2e,(int)local_98);
        local_f8 = (undefined *)0x400000000000;
        lVar15 = *(long *)puVar5;
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) &&
           (uVar11 = FUN_00949898(lVar15 + 0x28,&local_c0,&local_f8), (uVar11 & 1) != 0)) {
          return 1;
        }
      }
      if ((int)local_b8 < *(int *)(local_c8 + 8)) {
        local_b8._0_4_ = (int)local_b8 + 1;
      }
      else {
        local_b8._4_4_ = local_b8._4_4_ + 1;
        local_b8._0_4_ = *(int *)(local_d0 + 8);
      }
    } while (iVar9 != (int)local_b8 || iVar18 != local_b8._4_4_);
    iVar18 = *(int *)(lVar14 + 0x24) + 1;
  }
  puVar5 = PTR_DAT_04bb27c8;
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = *(undefined **)(lVar14 + 0x10);
  iVar9 = *(int *)(lVar14 + 0x10);
  if ((iVar9 != *(int *)(lVar14 + 0x10)) || (iVar18 != *(int *)(lVar14 + 0x14))) {
    local_d0 = puVar2;
    local_c8 = puVar3;
    do {
      uVar11 = FUN_02a7c78c(param_2,&local_c0);
      if ((uVar11 & 1) != 0) {
        lVar15 = *(long *)puVar5;
        local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
        local_98 = 0;
        local_d4 = 0;
        if ((((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) &&
            (uVar11 = FUN_009493f8(lVar15 + 0x28,&local_c0,&local_f8,(long)&local_98 + 4,&local_98,
                                   &local_d4), (uVar11 & 1) != 0)) &&
           ((((int)local_f8 - 0x29U < 3 || (local_98._4_4_ - 0x29U < 3)) ||
            (((int)local_98 - 0x29U < 3 || (local_d4 - 0x29U < 3)))))) {
          return 2;
        }
      }
      if ((int)local_b8 < *(int *)(local_c8 + 8)) {
        iVar1 = (int)local_b8 + 1;
        iVar16 = local_b8._4_4_;
      }
      else {
        iVar16 = local_b8._4_4_ + 1;
        iVar1 = *(int *)(local_d0 + 8);
        local_b8 = (undefined *)CONCAT44(iVar16,(int)local_b8);
      }
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,iVar1);
    } while (iVar9 != iVar1 || iVar18 != iVar16);
    iVar18 = *(int *)(lVar14 + 0x24) + 1;
  }
  puVar5 = PTR_DAT_04bb27c8;
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = *(undefined **)(lVar14 + 0x10);
  iVar9 = *(int *)(lVar14 + 0x10);
  if (iVar9 == *(int *)(lVar14 + 0x10)) {
    local_d0 = puVar2;
    local_c8 = puVar3;
    if (iVar18 != *(int *)(lVar14 + 0x14)) goto LAB_02b1d6e0;
  }
  else {
LAB_02b1d6e0:
    puVar4 = PTR_DAT_04bb2018 + 0x10;
    local_d0 = puVar2;
    local_c8 = puVar3;
    do {
      uVar11 = FUN_02a7c78c(param_2,&local_c0);
      if ((uVar11 & 1) != 0) {
        local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
        local_f8 = (undefined *)0x0;
        local_98 = CONCAT44(1,(int)local_98);
        local_f8 = (undefined *)0x2;
        lVar15 = *(long *)puVar5;
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) &&
           (uVar11 = FUN_00949898(lVar15 + 0x28,&local_c0,&local_f8), (uVar11 & 1) != 0)) {
          return 3;
        }
        local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
        local_f8 = (undefined *)0x0;
        local_98 = CONCAT44(0xc,(int)local_98);
        local_f8 = (undefined *)0x1000;
        lVar15 = *(long *)puVar5;
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) &&
           (uVar11 = FUN_00949898(lVar15 + 0x28,&local_c0,&local_f8), (uVar11 & 1) != 0)) {
          return 3;
        }
        fVar19 = (float)(int)local_b8 * 0.5;
        uVar12 = 0;
        if (fVar19 != (float)(int)fVar19) {
          uVar12 = (uint)(fVar19 < 0.0);
        }
        fVar20 = (float)local_b8._4_4_ * 0.5;
        uVar17 = 0;
        if (fVar20 != (float)(int)fVar20) {
          uVar17 = (uint)(fVar20 < 0.0);
        }
        local_f0 = (undefined *)CONCAT44((int)fVar20 - uVar17,(int)fVar19 - uVar12);
        local_f8 = puVar4;
        uVar11 = FUN_01318220(&local_f8);
        if ((uVar11 & 1) != 0) {
          return 3;
        }
      }
      if ((int)local_b8 < *(int *)(local_c8 + 8)) {
        iVar1 = (int)local_b8 + 1;
        iVar16 = local_b8._4_4_;
      }
      else {
        iVar16 = local_b8._4_4_ + 1;
        iVar1 = *(int *)(local_d0 + 8);
        local_b8 = (undefined *)CONCAT44(iVar16,(int)local_b8);
      }
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,iVar1);
    } while (iVar9 != iVar1 || iVar18 != iVar16);
    iVar18 = *(int *)(lVar14 + 0x24) + 1;
  }
  puVar4 = PTR_DAT_04bb27c8;
  local_e0 = *(int *)(lVar14 + 0x10);
  puVar5 = PTR_DAT_04bb2010 + 0x10;
  local_dc = *(int *)(lVar14 + 0x14);
  iVar9 = *(int *)(lVar14 + 0x10);
  if ((iVar9 != local_e0) || (iVar18 != local_dc)) {
    fVar19 = -100.0;
    puVar6 = PTR_DAT_04bbc1a0 + 0x10;
    puVar7 = PTR_DAT_04bb2018 + 0x10;
    local_f8 = puVar2;
    local_f0 = puVar3;
    local_e8 = puVar5;
    do {
      uVar11 = FUN_02a7c78c(param_2,&local_e8);
      if ((uVar11 & 1) != 0) {
        iVar16 = (int)((ulong)local_98 >> 8);
        if (-100.0 < fVar19) {
          lVar14 = *(long *)puVar4;
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(float)local_dc * 5.0 + 2.5);
          local_d0 = (undefined *)CONCAT44(local_d0._4_4_,(float)local_e0 * 5.0 + 2.5);
          if (((lVar14 == 0) || (*(long *)(lVar14 + 0xa8) == 0)) ||
             (*(char *)(lVar14 + 0x11c8) != '\0')) {
            fVar20 = -500.0;
          }
          else {
            local_98._0_4_ = iVar16 << 8;
            sVar10 = *(short *)PTR_DAT_04bb6298;
            if (sVar10 == -1) {
              uVar13 = 7;
            }
            else {
              puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
              if (0xff < (uint)(int)sVar10) {
                puVar8 = (uint *)PTR_DAT_04bc39f8;
              }
              uVar13 = 7;
              if ((*puVar8 & 2) != 0) {
                uVar13 = 5;
              }
            }
            local_98 = CONCAT44(uVar13,(int)local_98);
            fVar20 = (float)FUN_00962700(*(long *)(lVar14 + 0xa8),&local_d0,(long)&local_98 + 4,1,
                                         &local_98);
          }
          fVar19 = fVar20 - fVar19;
          fVar21 = -fVar19;
          if (0.0 <= fVar19) {
            fVar21 = fVar19;
          }
          fVar19 = fVar20;
          if (1.25 <= fVar21) {
            if ((fVar21 < 10.0) || ((param_3 & 1) == 0)) {
              uVar13 = 4;
              if (fVar21 < 10.0) {
                uVar13 = 5;
              }
              return uVar13;
            }
          }
          else {
            local_c0 = (undefined *)CONCAT44(local_dc,local_e0);
            local_b0 = local_e0;
            iStack_ac = local_dc;
            local_b8 = puVar5;
            if ((*(long *)puVar4 != 0) && (lVar14 = *(long *)(*(long *)puVar4 + 0xa8), lVar14 != 0))
            {
              local_d0 = puVar6;
              local_c8 = puVar5;
              uVar11 = FUN_00971f80(lVar14,&local_d0,1);
              if ((uVar11 & 1) != 0) goto LAB_02b1db70;
            }
            fVar20 = (float)local_e0 * 0.5;
            uVar12 = 0;
            if (fVar20 != (float)(int)fVar20) {
              uVar12 = (uint)(fVar20 < 0.0);
            }
            fVar21 = (float)local_dc * 0.5;
            uVar17 = 0;
            if (fVar21 != (float)(int)fVar21) {
              uVar17 = (uint)(fVar21 < 0.0);
            }
            local_c8 = (undefined *)CONCAT44((int)fVar21 - uVar17,(int)fVar20 - uVar12);
            local_d0 = puVar7;
            uVar11 = FUN_01317ff0(&local_d0,3);
            if (((uVar11 & 1) == 0) || ((param_3 & 1) == 0)) {
              uVar13 = 4;
              if ((uVar11 & 1) == 0) {
                uVar13 = 5;
              }
              return uVar13;
            }
          }
        }
        else {
          lVar14 = *(long *)puVar4;
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(float)local_dc * 5.0 + 2.5);
          local_d0 = (undefined *)CONCAT44(local_d0._4_4_,(float)local_e0 * 5.0 + 2.5);
          if (((lVar14 == 0) || (*(long *)(lVar14 + 0xa8) == 0)) ||
             (*(char *)(lVar14 + 0x11c8) != '\0')) {
            fVar19 = -500.0;
          }
          else {
            local_98._0_4_ = iVar16 << 8;
            sVar10 = *(short *)PTR_DAT_04bb6298;
            if (sVar10 == -1) {
              uVar13 = 7;
            }
            else {
              puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
              if (0xff < (uint)(int)sVar10) {
                puVar8 = (uint *)PTR_DAT_04bc39f8;
              }
              uVar13 = 7;
              if ((*puVar8 & 2) != 0) {
                uVar13 = 5;
              }
            }
            local_98 = CONCAT44(uVar13,(int)local_98);
            fVar19 = (float)FUN_00962700(*(long *)(lVar14 + 0xa8),&local_d0,(long)&local_98 + 4,1,
                                         &local_98);
          }
        }
      }
LAB_02b1db70:
      if (local_e0 < *(int *)(local_f0 + 8)) {
        local_e0 = local_e0 + 1;
      }
      else {
        local_dc = local_dc + 1;
        local_e0 = *(int *)(local_f8 + 8);
      }
    } while (iVar9 != local_e0 || iVar18 != local_dc);
  }
  uVar13 = 0;
LAB_02b1d328:
  return uVar13;
}

