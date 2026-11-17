
/* WARNING: Removing unreachable block (ram,0x02b13f6c) */

undefined8 FUN_02b13b90(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  short sVar6;
  bool bVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined *local_108;
  undefined *puStack_100;
  undefined8 local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_94;
  undefined *local_90;
  undefined *puStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if (param_2 == 0) {
    return 0;
  }
  local_80 = *(undefined4 *)(param_1 + 0x738);
  local_e8 = 0;
  uStack_7c = *(undefined4 *)(param_1 + 0x73c);
  local_108 = PTR_DAT_04bbc5d8 + 0x10;
  puStack_100 = PTR_DAT_04bb2018 + 0x10;
  local_f8 = 0;
  local_94 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_90 = PTR_DAT_04bc4950 + 0x10;
  puStack_f0 = puStack_100;
  puStack_88 = puStack_100;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    if ((*(uint *)(param_1 + 0xc) < 7) &&
       ((1 << (ulong)(*(uint *)(param_1 + 0xc) & 0x1f) & 0x52U) != 0)) {
      uStack_74 = 0x80000000;
      local_78 = 1;
    }
    else {
      uVar10 = *(int *)(param_1 + 0xc) - 2;
      uVar15 = (ulong)uVar10;
      if ((5 < uVar10) || ((0x2bU >> (ulong)(uVar10 & 0x1f) & 1) == 0))
      goto switchD_02b13c38_default;
      puVar11 = &DAT_0417f144;
LAB_02b13d9c:
      uVar15 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
      uStack_74 = *(undefined4 *)(puVar11 + uVar15);
      local_78 = *(undefined4 *)(&DAT_0417f174 + uVar15);
    }
    break;
  case 1:
    if ((6 < *(uint *)(param_1 + 0xc)) ||
       ((1 << (ulong)(*(uint *)(param_1 + 0xc) & 0x1f) & 0x52U) == 0)) {
      uVar10 = *(int *)(param_1 + 0xc) - 2;
      uVar15 = (ulong)uVar10;
      if ((uVar10 < 6) && ((0x2bU >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
        puVar11 = &DAT_0417f18c;
        goto LAB_02b13d9c;
      }
      goto switchD_02b13c38_default;
    }
    uStack_74 = 0x40000000;
    local_78 = 1;
    break;
  case 2:
    if ((6 < *(uint *)(param_1 + 0xc)) ||
       ((1 << (ulong)(*(uint *)(param_1 + 0xc) & 0x1f) & 0x52U) == 0)) {
      uVar10 = *(int *)(param_1 + 0xc) - 2;
      uVar15 = (ulong)uVar10;
      if ((uVar10 < 6) && ((0x2bU >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
        puVar11 = &DAT_0417f12c;
        goto LAB_02b13d9c;
      }
      goto switchD_02b13c38_default;
    }
    uStack_74 = 0;
    local_78 = 1;
    break;
  case 3:
    if ((6 < *(uint *)(param_1 + 0xc)) ||
       ((1 << (ulong)(*(uint *)(param_1 + 0xc) & 0x1f) & 0x52U) == 0)) {
      uVar10 = *(int *)(param_1 + 0xc) - 2;
      uVar15 = (ulong)uVar10;
      if ((uVar10 < 6) && ((0x2bU >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
        puVar11 = &DAT_0417f15c;
        goto LAB_02b13d9c;
      }
      goto switchD_02b13c38_default;
    }
    uStack_74 = 0xc0000000;
    local_78 = 1;
    break;
  default:
switchD_02b13c38_default:
    local_c0._4_4_ = 0;
    local_c0._0_4_ = 0;
    local_d0._4_4_ = 0;
    local_d0._0_4_ = 0;
    uVar15 = 0;
    goto LAB_02b13ddc;
  }
  *(undefined4 *)(param_1 + 0x74c) = uStack_74;
  local_e0 = local_108;
  puStack_d8 = puStack_100;
  local_c8 = puStack_100;
  uVar15 = FUN_02b157b8(&local_90,&local_94,&local_e0,param_2);
  uVar15 = uVar15 & 0xffffffff;
LAB_02b13ddc:
  local_e0 = PTR_DAT_04bc4570;
  *(uint *)(param_1 + 0x740) = local_94;
  local_e8 = CONCAT44(local_c0._4_4_,(undefined4)local_c0);
  uVar8 = *(undefined2 *)(param_3 + 0x44);
  local_f8 = CONCAT44(local_d0._4_4_,(undefined4)local_d0);
  local_d0 = 0;
  local_c8 = (undefined *)0x0;
  local_e0 = local_e0 + 0x10;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  puStack_d8 = (undefined *)0x0;
  FUN_02a7e130(&local_e0);
  FUN_02a7e3d0(&local_e0,uVar8);
  FUN_02a7e750(&local_e0,*(undefined4 *)(param_1 + 0x740));
  uVar8 = FUN_00edf160(&puStack_d8,1);
  *(undefined2 *)(param_1 + 0x744) = uVar8;
  *(undefined2 *)(param_2 + 0xe) = uVar8;
  if ((uVar15 & 1) == 0) {
    uVar10 = *(uint *)(param_2 + 8);
    if (uVar10 == 0) {
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0x16);
      uVar10 = 0x400000;
      *(undefined4 *)(param_2 + 8) = 0x400000;
    }
    uVar13 = 0x16;
    uVar12 = 0;
    do {
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar12);
      if ((uVar12 < 0x18) && ((uVar10 >> (ulong)(uVar12 & 0x1f) & 1) != 0)) {
        uVar13 = uVar12;
        break;
      }
      uVar14 = 0x18;
      if ((int)uVar12 < 0x18) {
        uVar14 = uVar12 + 1;
      }
      uVar12 = uVar14;
    } while (uVar14 != 0x18);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar13);
    if (uVar13 != 0xf) {
      local_94 = 0x16;
      uVar12 = 0;
      do {
        local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar12);
        if ((uVar12 < 0x18) && ((uVar10 >> (ulong)(uVar12 & 0x1f) & 1) != 0)) {
          local_94 = uVar12;
          break;
        }
        uVar13 = 0x18;
        if ((int)uVar12 < 0x18) {
          uVar13 = uVar12 + 1;
        }
        uVar12 = uVar13;
      } while (uVar13 != 0x18);
      if (local_94 != 0x10) {
        uVar13 = 0x16;
        uVar12 = 0;
        do {
          local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar12);
          if ((uVar12 < 0x18) && ((uVar10 >> (ulong)(uVar12 & 0x1f) & 1) != 0)) {
            uVar13 = uVar12;
            break;
          }
          uVar14 = 0x18;
          if ((int)uVar12 < 0x18) {
            uVar14 = uVar12 + 1;
          }
          uVar12 = uVar14;
        } while (uVar14 != 0x18);
        if (uVar13 != 0x12) {
          bVar7 = *(int *)(param_1 + 0xc) != 3;
          fVar22 = 1.0;
          if (bVar7) {
            fVar22 = 5.0;
          }
          fVar19 = -2.0;
          if (bVar7) {
            fVar19 = -1.0;
          }
          fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x74c));
          fVar17 = sinf(fVar16 * 1.4629181e-09);
          fVar16 = cosf(fVar16 * 1.4629181e-09);
          fVar18 = fVar17 * 5.0 + fVar19 * fVar16;
          fVar20 = fVar16 * fVar22 - fVar17;
          fVar19 = fVar16 * -5.0 + fVar19 * fVar17;
          fVar16 = fVar16 + fVar22 * fVar17;
          fVar22 = 0.5;
          if (fVar18 < 0.0) {
            fVar22 = -0.5;
          }
          fVar17 = 0.5;
          if (fVar19 < 0.0) {
            fVar17 = -0.5;
          }
          fVar23 = 0.5;
          if (fVar20 < 0.0) {
            fVar23 = -0.5;
          }
          fVar21 = 0.5;
          if (fVar16 < 0.0) {
            fVar21 = -0.5;
          }
          iVar9 = *(int *)(param_1 + 0x738) + (int)(fVar18 + fVar22);
          iVar1 = *(int *)(param_1 + 0x738) + (int)(fVar20 + fVar23);
          iVar2 = *(int *)(param_1 + 0x73c) + (int)(fVar19 + fVar17);
          iVar3 = *(int *)(param_1 + 0x73c) + (int)(fVar16 + fVar21);
          iVar4 = iVar9;
          if (iVar1 <= iVar9) {
            iVar4 = iVar1;
          }
          if (iVar9 <= iVar1) {
            iVar9 = iVar1;
          }
          iVar1 = iVar2;
          if (iVar3 <= iVar2) {
            iVar1 = iVar3;
          }
          local_f8 = CONCAT44(iVar1,iVar4);
          if (iVar2 <= iVar3) {
            iVar2 = iVar3;
          }
          local_e8 = CONCAT44(iVar2,iVar9);
        }
      }
    }
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,*(undefined4 *)(param_2 + 0x10));
    FUN_02b1468c(param_1,&local_108,&local_e0);
    return 0;
  }
  local_e0._0_4_ = *(undefined4 *)(param_2 + 0x10);
  FUN_02b1468c(param_1,&local_108,&local_e0);
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    local_e0._0_4_ = 3;
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 3 & 1) != 0) {
      iVar9 = FUN_02b1e180(param_1,param_1 + 0x18);
      if (iVar9 == 2) {
        uVar10 = 9;
        goto LAB_02b14174;
      }
      if (iVar9 == 1) {
        uVar10 = 5;
        goto LAB_02b14174;
      }
    }
  }
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  uVar15 = FUN_02b1dc50(param_1,&local_90,param_1 + 0x18,0);
  if ((uVar15 & 1) == 0) {
    iVar9 = FUN_02b1e490(param_1,param_1 + 0x18,param_3 + 0x28);
    if (iVar9 == 2) {
      uVar10 = 0xb;
    }
    else {
      if (iVar9 != 1) {
        return 1;
      }
      uVar10 = 10;
    }
  }
  else {
    if (5 < (int)local_90 - 1U) {
      return 0;
    }
    uVar10 = *(uint *)(&DAT_0417f1a4 + (long)(int)((int)local_90 - 1U) * 4);
  }
LAB_02b14174:
  if ((*(int *)(param_2 + 8) == 0) && (uVar10 < 0x18)) {
    *(int *)(param_2 + 8) = 1 << (ulong)(uVar10 & 0x1f);
  }
  return 0;
}

