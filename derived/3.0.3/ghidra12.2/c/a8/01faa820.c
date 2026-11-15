
/* WARNING: Removing unreachable block (ram,0x01faac00) */
/* WARNING: Removing unreachable block (ram,0x01faac10) */

undefined8 FUN_01faa820(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  float local_a4 [3];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88;
  
  uVar1 = *param_1;
  local_a4[1] = 0.0;
  fVar19 = ((float)*(int *)(param_2 + 0x14) * 5.0 + (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0) *
           0.5;
  fVar20 = ((float)*(int *)(param_2 + 0x10) * 5.0 + (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0) *
           0.5;
  local_a4[0] = fVar20;
  local_a4[2] = fVar19;
  uVar9 = FUN_01fb0064(param_1,local_a4,param_1[1],param_1[2],param_1[3]);
  puVar3 = PTR_DAT_04bb2720;
  puVar2 = PTR_DAT_04bb2010;
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 5) == '\0') goto LAB_01faabbc;
  local_b8 = 0;
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar7 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_b4 = *(undefined4 *)(puVar15 + 7);
  local_b0 = FUN_017baf44();
  local_b0 = local_b0 & 1;
  puStack_c0 = PTR_DAT_04bb3140 + 0x10;
  local_c8 = 0;
  local_d0 = puVar2 + 0x10;
  puVar15 = (undefined8 *)FUN_01a5190c(&puStack_c0,0,(undefined *)(param_2 + 8),&local_d0);
  puVar5 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4();
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) goto LAB_01faabbc;
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_01faabbc;
  local_f8 = PTR_DAT_04bc0510 + 0x10;
  local_f0 = (undefined *)*puVar15;
  local_e8 = (undefined *)0x0;
  uVar8 = FUN_0277d6c4(&local_f0);
  if (*(long *)puVar5 == 0) {
LAB_01faaaf8:
    uVar10 = 0;
  }
  else {
    lVar11 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_01faaaf8;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(puVar15);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
       (puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar12 == (uint *)0x0)) goto LAB_01faaaf8;
    uVar8 = *puVar12;
    uVar10 = 0;
    if ((uVar8 != 0) && (puVar12 != (uint *)(ulong)uVar8)) {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar8);
      uVar10 = 0;
      if (*puVar13 != 0) {
        uVar8 = puVar13[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar13 + lVar11 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar11 != 0) {
            uVar10 = 0;
            if ((ulong)uVar8 != 0) {
              uVar10 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar8);
            }
            if (*puVar13 <= uVar10) {
              uVar10 = 0xffffffff;
            }
            if ((uVar10 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar10 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar10 * 2),
               uVar10 < 0x52)) goto LAB_01faaafc;
          }
        }
        goto LAB_01faaaf8;
      }
    }
  }
LAB_01faaafc:
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar10);
  if (uVar10 - 1 < 9) {
    lVar11 = *(long *)puVar5;
    uVar8 = FUN_0277d6c4(puVar15);
    puVar4 = PTR_DAT_04bb3140;
    if (*(long *)puVar5 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar11 = *(long *)puVar3;
        local_90 = 0;
        if (lVar11 == 0) {
          puVar14 = &DAT_055c04a0;
        }
        else {
          puVar14 = &DAT_055c04a0;
          if (*(long *)(lVar11 + 0x330) != 0) {
            puVar14 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
            iVar7 = FUN_006bd550(*puVar14,0);
            puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar7 != 0x758f7eaf) {
              puVar14 = &DAT_055c04a0;
            }
          }
        }
        local_8c = *(undefined4 *)(puVar14 + 7);
        local_88 = FUN_017baf44();
        local_88 = local_88 & 1;
        local_98 = puVar4 + 0x10;
        uVar9 = FUN_01a4fafc(&local_98,1,param_2);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        local_e8 = puVar2 + 0x10;
        local_f0 = (undefined *)(param_2 + 0x18);
        iVar16 = *(int *)(param_2 + 0x10);
        local_e0._4_4_ = *(int *)(param_2 + 0x14);
        iVar7 = *(int *)(param_2 + 0x24) + 1;
        if (iVar7 != local_e0._4_4_) {
          local_f8 = (undefined *)(param_2 + 8);
          local_e0._0_4_ = iVar16;
          do {
            uVar9 = FUN_01a4fd6c(&local_98,1,&local_e8,1);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            if ((int)local_e0 < *(int *)(local_f0 + 8)) {
              local_e0._0_4_ = (int)local_e0 + 1;
            }
            else {
              local_e0._4_4_ = local_e0._4_4_ + 1;
              local_e0._0_4_ = *(int *)(local_f8 + 8);
            }
          } while (iVar16 != (int)local_e0 || iVar7 != local_e0._4_4_);
        }
      }
    }
    local_f0 = puVar2 + 0x10;
    local_e8 = (undefined *)0x0;
    local_98 = (undefined *)((ulong)local_98 & 0xffffffffffffff00);
    local_d8 = 0;
    local_f8 = PTR_DAT_04bbc1a0 + 0x10;
    local_e0 = local_f0;
    uVar9 = FUN_01517328(&local_f8,&local_98,&local_d0,puVar15);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    fVar18 = (float)(int)local_d8 * 5.0 + 5.0;
    bVar6 = false;
    if (((float)(int)local_e8 * 5.0 < fVar20) && (bVar6 = false, !NAN(fVar20) && !NAN(fVar18))) {
      bVar6 = fVar20 < fVar18;
    }
    if (!bVar6) {
      return 0;
    }
    fVar20 = (float)local_d8._4_4_ * 5.0 + 5.0;
    bVar6 = false;
    if (((float)local_e8._4_4_ * 5.0 < fVar19) && (bVar6 = false, !NAN(fVar19) && !NAN(fVar20))) {
      bVar6 = fVar19 < fVar20;
    }
    if (!bVar6) {
      return 0;
    }
    uVar9 = FUN_01fabae0(uVar1,&local_f0);
    if ((uVar9 & 1) == 0) {
      return 1;
    }
    return 0;
  }
LAB_01faabbc:
  local_f8 = (undefined *)(param_2 + 8);
  local_f0 = (undefined *)(param_2 + 0x18);
  local_e8 = puVar2 + 0x10;
  uVar8 = *(int *)(param_2 + 0x24) + 1;
  iVar7 = *(int *)(param_2 + 0x10);
  uVar10 = *(uint *)(param_2 + 0x14);
  local_e0 = *(undefined **)(param_2 + 0x10);
  if (uVar8 != uVar10) {
    iVar16 = iVar7;
    do {
      lVar11 = param_1[4];
      if (iVar16 < *(int *)(lVar11 + 0x10)) {
        return 0;
      }
      if (*(int *)(lVar11 + 0x20) < iVar16) {
        return 0;
      }
      if ((int)uVar10 < *(int *)(lVar11 + 0x14)) {
        return 0;
      }
      if (*(int *)(lVar11 + 0x24) < (int)uVar10) {
        return 0;
      }
      uVar9 = FUN_01fabae0(uVar1,&local_e8);
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      if (iVar16 < *(int *)(param_2 + 0x20)) {
        iVar16 = iVar16 + 1;
      }
      else {
        iVar16 = *(int *)(param_2 + 0x10);
        uVar10 = uVar10 + 1;
        local_e0 = (undefined *)((ulong)uVar10 << 0x20);
      }
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar16);
    } while ((iVar7 != iVar16) || (uVar8 != uVar10));
  }
  iVar7 = *(int *)(param_2 + 0x20);
  iVar16 = *(int *)(param_2 + 0x24);
  local_f8 = *(undefined **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_f0 = (undefined *)(*(long *)PTR_DAT_04bb27c8 + 0x28);
  uVar9 = FUN_035aa210(iVar7 + -1,iVar16 + -1,&local_f8);
  if (((uVar9 & 1) == 0) ||
     (((uVar9 = FUN_035aa210(iVar7 + -1,iVar16,&local_f8), (uVar9 & 1) == 0 ||
       (uVar9 = FUN_035aa210(iVar7,iVar16 + -1,&local_f8), (uVar9 & 1) == 0)) ||
      (uVar9 = FUN_035aa210(iVar7,iVar16,&local_f8), (uVar9 & 1) == 0)))) {
    return 0;
  }
  return 1;
}

