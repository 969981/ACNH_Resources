
float FUN_024171c8(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  float *pfVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_f8 [10];
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined *local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined5 local_7c;
  undefined3 uStack_77;
  undefined5 uStack_74;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  
  local_f8[0] = (float)FUN_023294cc();
  lVar4 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x8d0) + 0xf0))(lVar4 + 0x8d0);
  local_f8[1] = (float)*puVar5;
  local_f8[2] = (float)FUN_0231ebc4(param_1);
  local_f8[2] = local_f8[2] * 0.5;
  lVar4 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x8d0) + 0xf0))(lVar4 + 0x8d0);
  local_f8[3] = *pfVar6 * 0.5;
  local_f8[4] = (float)FUN_0231ebc4(param_1);
  lVar4 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x8d0) + 0xf0))(lVar4 + 0x8d0);
  local_f8[5] = (float)*puVar5;
  lVar4 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x7e0) + 0xf0))(lVar4 + 0x7e0);
  local_f8[6] = (float)*puVar5;
  lVar4 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x900) + 0xf0))(lVar4 + 0x900);
  local_f8[7] = (float)*puVar5;
  lVar4 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x7e0) + 0xf0))(lVar4 + 0x7e0);
  local_f8[8] = *pfVar6 * 1.2;
  lVar4 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x900) + 0xf0))(lVar4 + 0x900);
  fVar16 = param_2[6];
  local_f8[9] = *pfVar6 * 1.5;
  if (4 < (uint)fVar16) {
    return 0.0;
  }
  fVar14 = local_f8[(long)(int)fVar16 * 2];
  fVar16 = local_f8[(long)(int)fVar16 * 2 + 1];
  lVar4 = FUN_0251e98c(0,1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x930) + 0xf0))(lVar4 + 0x930);
  fVar17 = *pfVar6;
  fVar14 = fVar14 * param_2[3] * param_2[5];
  if (*(char *)(param_2 + 8) != '\0') {
    local_b0 = CONCAT44(local_b0._4_4_,0xb);
    local_a8 = *(long *)(param_1 + 0x68) + 0x2b4;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = (undefined *)0x0;
    local_c8 = 0;
    uVar7 = FUN_016f3040(param_1,&local_d0);
    fVar15 = 1.0;
    if ((uVar7 & 1) != 0) {
      fVar13 = SQRT(local_d0._0_4_ * local_d0._0_4_ + 0.0 + (float)local_c8 * (float)local_c8);
      fVar12 = local_d0._0_4_;
      fVar10 = (float)local_c8;
      if (0.0 < fVar13) {
        fVar13 = 1.0 / fVar13;
        fVar12 = local_d0._0_4_ * fVar13;
        fVar10 = (float)local_c8 * fVar13;
      }
      if ((fVar12 == 0.0) && (fVar10 == 0.0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006f0400();
      }
      uVar3 = uVar3 ^ 0x80000000;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
      uVar8 = uVar2 - uVar3;
      if (uVar8 == 0) {
LAB_02417444:
        fVar10 = 8.381903e-08;
        uVar9 = uVar8;
      }
      else {
        uVar9 = uVar3 - uVar2;
        uVar1 = uVar8;
        if (uVar2 <= uVar3) {
          uVar1 = uVar9;
        }
        if (uVar1 < 0x80000001) {
          if (uVar2 <= uVar3) {
            fVar10 = 8.381903e-08;
            goto LAB_02417470;
          }
        }
        else {
          uVar8 = -uVar1;
          if (uVar3 < uVar2) goto LAB_02417444;
        }
        fVar10 = -8.381903e-08;
        uVar9 = uVar8;
      }
LAB_02417470:
      fVar12 = fVar10 * (float)uVar9;
      fVar10 = -(fVar10 * (float)uVar9);
      if (0.0 <= fVar12) {
        fVar10 = fVar12;
      }
      if (fVar10 < 90.0) {
        uVar7 = (ulong)(long)(fVar12 * 11930465.0) >> 0x18 & 0xff;
        fVar10 = 1.0 - ((float)(&DAT_041997a0)[uVar7 * 4] +
                       (float)(&DAT_041997a4)[uVar7 * 4] *
                       (float)((uint)(long)(fVar12 * 11930465.0) & 0xffffff) * 5.9604645e-08);
        fVar15 = 1.0;
        if (fVar10 <= 1.0) {
          fVar15 = fVar10;
        }
        fVar12 = 0.0;
        if (0.0 <= fVar10) {
          fVar12 = fVar15;
        }
        fVar15 = fVar12 * 0.4 + 0.6;
      }
    }
    fVar14 = fVar14 * fVar15;
  }
  if (*(char *)((long)param_2 + 0x21) != '\0') {
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_a8 = local_a8 & 0xffffffff00000000;
    local_90 = 0;
    local_d0 = PTR_DAT_04bb2cc0 + 0x10;
    local_84 = 0;
    local_a0 = PTR_DAT_04bb2ca0 + 0x10;
    local_c8 = 0;
    local_7c = 0;
    uStack_77 = 0;
    uStack_74 = 0;
    local_88 = 7;
    local_98 = 0;
    local_68 = PTR_DAT_04bb2010 + 0x10;
    local_58 = 0;
    uStack_60 = 0;
    local_54 = 0;
    FUN_0093ab70(DAT_04cfae30 + 0x28,*(long *)(param_1 + 0x68) + 0x278,&local_d0);
    if (local_98._4_4_ < 0.98) {
      fVar15 = (float)local_98;
      fVar10 = (float)local_90;
      fVar11 = SQRT((float)local_98 * (float)local_98 + 0.0 + (float)local_90 * (float)local_90);
      fVar12 = (float)local_98;
      fVar13 = (float)local_90;
      if (0.0 < fVar11) {
        fVar11 = 1.0 / fVar11;
        fVar12 = (float)local_98 * fVar11;
        fVar13 = (float)local_90 * fVar11;
      }
      if ((fVar12 == 0.0) && (fVar13 == 0.0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006f0400(local_98 & 0xffffffff,local_90 & 0xffffffff);
      }
      uVar3 = uVar3 ^ 0x80000000;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
      uVar8 = uVar2 - uVar3;
      if (uVar8 == 0) {
LAB_02417644:
        fVar12 = 8.381903e-08;
        uVar9 = uVar8;
      }
      else {
        uVar9 = uVar3 - uVar2;
        uVar1 = uVar8;
        if (uVar2 <= uVar3) {
          uVar1 = uVar9;
        }
        if (uVar1 < 0x80000001) {
          if (uVar2 <= uVar3) {
            fVar12 = 8.381903e-08;
            goto LAB_02417670;
          }
        }
        else {
          uVar8 = -uVar1;
          if (uVar3 < uVar2) goto LAB_02417644;
        }
        fVar12 = -8.381903e-08;
        uVar9 = uVar8;
      }
LAB_02417670:
      fVar13 = fVar12 * (float)uVar9;
      fVar12 = -(fVar12 * (float)uVar9);
      if (0.0 <= fVar13) {
        fVar12 = fVar13;
      }
      if (fVar12 < 90.0) {
        uVar7 = (ulong)(long)(fVar13 * 11930465.0) >> 0x18 & 0xff;
        fVar12 = (float)(&DAT_041997a0)[uVar7 * 4] +
                 (float)(&DAT_041997a4)[uVar7 * 4] *
                 (float)((uint)(long)(fVar13 * 11930465.0) & 0xffffff) * 5.9604645e-08;
        fVar15 = 1.0 - SQRT(fVar10 * fVar10 + fVar15 * fVar15);
        fVar10 = fVar15 * fVar12;
        fVar15 = -(fVar15 * fVar12);
        if (0.0 <= fVar10) {
          fVar15 = fVar10;
        }
        fVar14 = fVar14 * (fVar15 * 0.2 + 0.8);
      }
    }
  }
  fVar15 = fVar14;
  if ((*(char *)(param_2 + 8) != '\0') &&
     (uVar7 = FUN_016fbfc8(*(undefined4 *)(param_1 + 0x19e0),*(undefined4 *)(param_1 + 0x230)),
     (uVar7 & 1) != 0)) {
    fVar12 = param_2[4];
    fVar10 = -fVar12;
    if (0.0 <= fVar12) {
      fVar10 = fVar12;
    }
    if ((fVar10 < 45.0) && (fVar15 = (float)FUN_023294cc(param_1), fVar14 <= fVar15)) {
      fVar15 = fVar14;
    }
  }
  fVar14 = fVar15;
  if ((*(char *)(param_2 + 1) != '\0') && (4 < (int)param_2[9])) {
    lVar4 = FUN_0251e98c(1);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x720) + 0xf0))(lVar4 + 0x720);
    fVar14 = *pfVar6;
    if (*pfVar6 <= fVar15) {
      fVar14 = fVar15;
    }
  }
  if (*(int *)(param_1 + 0x17c8) != 0) {
    *(int *)(param_1 + 0x17c8) = *(int *)(param_1 + 0x17c8) + -1;
  }
  if (param_2[2] <= 0.1) {
LAB_024177e0:
    *(undefined4 *)(param_1 + 0x17c4) = 0;
  }
  else {
    fVar15 = -fVar14;
    if (0.0 <= fVar14) {
      fVar15 = fVar14;
    }
    if (1.1920929e-07 < fVar15) goto LAB_024177e0;
    uVar3 = *(int *)(param_1 + 0x17c4) + 1;
    *(uint *)(param_1 + 0x17c4) = uVar3;
    if (5 < uVar3) {
      *(uint *)(param_1 + 0x17c8) = uVar3;
    }
  }
  fVar15 = *param_2;
  *(float *)(param_1 + 0x1844) = fVar14;
  fVar10 = *(float *)(param_1 + 0x1820);
  uVar2 = *(uint *)(param_1 + 0x17cc);
  uVar3 = uVar2 | 0x80000;
  *(uint *)(param_1 + 0x17cc) = uVar3;
  if (fVar14 <= fVar15) {
    fVar16 = fVar17;
  }
  *(float *)(param_1 + 0x1848) = fVar16;
  if (fVar10 == fVar14) {
    uVar3 = uVar2 & 0xfff7ffff;
    *(uint *)(param_1 + 0x17cc) = uVar3;
  }
  if ((*(uint *)(param_1 + 0x17d8) & 1) != 0) {
    return fVar10;
  }
  *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 1;
  if ((uVar3 >> 0x13 & 1) == 0) {
    return fVar10;
  }
  if (fVar16 != 0.0) {
    if (fVar10 < fVar14) {
      fVar16 = fVar16 + fVar10;
      fVar17 = fVar14;
      if (fVar10 <= fVar16 && fVar16 < fVar14) {
        fVar17 = fVar16;
      }
      *(float *)(param_1 + 0x1820) = fVar17;
      if (fVar10 <= fVar16 && fVar16 < fVar14) {
        return fVar16;
      }
      goto LAB_02417838;
    }
    if (fVar14 < fVar10) {
      fVar16 = fVar10 - fVar16;
      fVar17 = fVar14;
      if (fVar16 <= fVar10 && fVar14 < fVar16) {
        fVar17 = fVar16;
      }
      *(float *)(param_1 + 0x1820) = fVar17;
      if (fVar16 <= fVar10 && fVar14 < fVar16) {
        return fVar16;
      }
      goto LAB_02417838;
    }
  }
  fVar14 = fVar10;
LAB_02417838:
  *(uint *)(param_1 + 0x17cc) = uVar3 & 0xfff7ffff;
  return fVar14;
}

