
/* WARNING: Removing unreachable block (ram,0x01fa9d98) */
/* WARNING: Removing unreachable block (ram,0x01fa9da8) */

bool FUN_01fa9c14(long param_1,float *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  undefined *puVar19;
  long lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  undefined8 local_170;
  undefined1 *local_168;
  undefined1 auStack_160 [32];
  undefined *local_140;
  int local_138;
  int local_134;
  undefined *local_130;
  int local_128;
  int local_124;
  undefined *local_120;
  int local_118;
  int local_114;
  undefined *local_110;
  int local_108;
  int iStack_104;
  undefined8 local_100;
  long lStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined *local_88;
  undefined8 uStack_80;
  
  puVar7 = PTR_DAT_04bb5ce0;
  puVar19 = PTR_DAT_04bb2720;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar16 = *(long *)PTR_DAT_04bb2720, lVar16 == 0)) ||
     (*(long *)(lVar16 + 0x330) == 0)) {
LAB_01fa9cdc:
    lVar16 = *(long *)PTR_DAT_04bb59d8;
    if (lVar16 == 0) {
      iVar8 = 0;
      iVar18 = 0;
      iVar17 = 0;
      iVar15 = 0;
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x28);
      iVar18 = *(int *)(lVar16 + 0x2c);
      iVar17 = *(int *)(lVar16 + 0x38);
      iVar15 = *(int *)(lVar16 + 0x3c);
    }
  }
  else {
    puVar10 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
    iVar8 = FUN_006bd550(*puVar10,0);
    if (((iVar8 != 0x758f7eaf) || (*(long *)puVar19 == 0)) ||
       ((lVar16 = *(long *)(*(long *)puVar19 + 0x330), lVar16 == 0 ||
        (*(int *)(lVar16 + 0x244) == 0)))) goto LAB_01fa9cdc;
    lVar16 = *(long *)puVar7;
    if (lVar16 == 0) {
      iVar17 = 0;
      iVar15 = 0;
      iVar9 = 0x10;
      iVar18 = 0x10;
    }
    else {
      iVar17 = *(int *)(lVar16 + 0xd88);
      iVar15 = *(int *)(lVar16 + 0xd8c);
      iVar18 = *(int *)(lVar16 + 0xd98);
      iVar9 = *(int *)(lVar16 + 0xd9c);
    }
    iVar8 = iVar17;
    if (iVar18 <= iVar17) {
      iVar8 = iVar18;
    }
    if (iVar17 <= iVar18) {
      iVar17 = iVar18;
    }
    iVar18 = iVar15;
    if (iVar9 <= iVar15) {
      iVar18 = iVar9;
    }
    if (iVar15 <= iVar9) {
      iVar15 = iVar9;
    }
  }
  local_e0 = &local_cc;
  local_cc = 0;
  local_d4 = 0x1500000019;
  local_170._0_4_ = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_ac = 0;
  local_f0 = PTR_DAT_04bb96d8 + 0x10;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  local_d8 = 0;
  uStack_e8 = 0x110000020d;
  FUN_02145060(&local_f0,&local_170,iVar8,iVar18);
  puVar19 = PTR_DAT_04bb27c0;
  local_170 = (ulong)local_170._4_4_ << 0x20;
  local_100 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  lStack_f8 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  lVar16 = *(long *)PTR_DAT_04bb27c0;
  if (lVar16 == 0) {
    return false;
  }
  uVar14 = *(uint *)(param_3 + 0x20);
  if (((uVar14 == 0) ||
      (lVar20 = *(long *)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                         ((ulong)(uVar14 >> 0x11) & 0x7ff8)), lVar20 == 0)) ||
     (((*(uint *)(lVar20 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar20 + 0x230) != uVar14)))) {
    lVar20 = 0;
  }
  if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar16 = *(long *)puVar19;
    iVar9 = (**(code **)(*plVar11 + 0x60))();
    if (iVar9 < 0x11) {
      uVar14 = 1;
    }
    else {
      if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_01fa9e74;
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fa9e74:
    uVar14 = 0;
  }
  if (lVar20 == 0) {
    return false;
  }
  uVar14 = uVar14 ^ 1;
  if (*(int *)(lVar20 + 0x150) != 1) {
    uVar14 = 1;
  }
  if (uVar14 != 0) {
    return false;
  }
  lVar20 = *(long *)(lVar20 + 0x68);
  lVar16 = lVar20 + 0x278;
  local_140 = PTR_DAT_04bb2010 + 0x10;
  fVar22 = *(float *)(lVar20 + 0x278) + -2.5;
  fVar23 = *(float *)(lVar20 + 0x280) + -2.5;
  iVar9 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iVar6 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  uVar14 = iVar9 * 2 | 1;
  uVar4 = iVar6 * 2 | 1;
  uVar5 = iVar9 * 2 + 2;
  if (-1 < (int)uVar14) {
    uVar5 = uVar14;
  }
  iVar3 = (int)uVar5 >> 1;
  uVar14 = iVar6 * 2 + 2;
  if (-1 < (int)uVar4) {
    uVar14 = uVar4;
  }
  iVar2 = iVar3 + 1;
  local_124 = ((int)uVar14 >> 1) + 1;
  iVar21 = (int)((float)(iVar6 + 3) + 1.0);
  local_118 = (int)((float)(iVar9 + 3) + 1.0);
  local_134 = (int)((float)(iVar6 + -1) + -1.0);
  local_128 = (int)((float)(iVar9 + -1) + -1.0);
  local_168 = auStack_160;
  local_170._0_4_ = 0;
  local_170._4_4_ = 4;
  puVar19 = PTR_DAT_04bb2010;
  local_138 = iVar2;
  local_130 = local_140;
  local_120 = local_140;
  local_114 = local_124;
  local_110 = local_140;
  local_108 = iVar2;
  iStack_104 = iVar21;
  if (((iVar8 <= iVar2 && iVar3 < iVar17) && (iVar18 <= iVar21 && iVar21 <= iVar15)) &&
     (uVar14 = (iVar2 - iVar8) + (int)local_d4 * (iVar21 - iVar18),
     (*(uint *)((long)local_e0 + (long)((int)uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) == 0))
  {
    local_88 = PTR_DAT_04bb2010 + 0x10;
    uStack_80 = 0;
    uVar12 = FUN_01fb1870(&local_88,param_3,&local_110,param_3 + 0x1c,lVar16,1);
    if ((uVar12 & 1) != 0) {
      uVar12 = FUN_035aa210(iVar3,iVar21 + -1,&local_100);
      if ((((uVar12 & 1) != 0) &&
          (uVar12 = FUN_035aa210(iVar3,iVar21,&local_100), (uVar12 & 1) != 0)) &&
         (uVar12 = FUN_035aa210(iVar2,iVar21 + -1,&local_100), (uVar12 & 1) != 0)) {
        uVar12 = FUN_035aa210(iVar2,iVar21,&local_100);
        puVar19 = PTR_DAT_04bb2010;
        if ((uVar12 & 1) != 0) {
          if ((int)(uint)local_170 < (int)local_170._4_4_) {
            *(undefined ***)(local_168 + (long)(int)(uint)local_170 * 8) = &local_110;
            local_170._0_4_ = (uint)local_170 + 1;
          }
          goto LAB_01faa0d4;
        }
      }
    }
    puVar19 = PTR_DAT_04bb2010;
  }
LAB_01faa0d4:
  iVar6 = local_114;
  iVar9 = local_118;
  if ((iVar8 <= local_118) && (local_118 <= iVar17)) {
    if ((iVar18 <= local_114) && (local_114 <= iVar15)) {
      uVar14 = (local_118 - iVar8) + (int)local_d4 * (local_114 - iVar18);
      if ((*(uint *)((long)local_e0 + (long)((int)uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1)
          == 0) {
        local_88 = puVar19 + 0x10;
        uStack_80 = 0;
        uVar12 = FUN_01fb1870(&local_88,param_3,&local_120,param_3 + 0x1c,lVar16,1);
        if ((uVar12 & 1) != 0) {
          uVar12 = FUN_035aa210(iVar9 + -1,iVar6 + -1,&local_100);
          if ((((uVar12 & 1) != 0) &&
              (uVar12 = FUN_035aa210(iVar9 + -1,iVar6,&local_100), (uVar12 & 1) != 0)) &&
             (uVar12 = FUN_035aa210(iVar9,iVar6 + -1,&local_100), (uVar12 & 1) != 0)) {
            uVar12 = FUN_035aa210(iVar9,iVar6,&local_100);
            puVar19 = PTR_DAT_04bb2010;
            if ((uVar12 & 1) != 0) {
              if ((int)(uint)local_170 < (int)local_170._4_4_) {
                *(undefined ***)(local_168 + (long)(int)(uint)local_170 * 8) = &local_120;
                local_170._0_4_ = (uint)local_170 + 1;
              }
              goto LAB_01faa1d4;
            }
          }
        }
        puVar19 = PTR_DAT_04bb2010;
      }
    }
  }
LAB_01faa1d4:
  iVar6 = local_124;
  iVar9 = local_128;
  if ((iVar8 <= local_128) && (local_128 <= iVar17)) {
    if ((iVar18 <= local_124) && (local_124 <= iVar15)) {
      uVar14 = (local_128 - iVar8) + (int)local_d4 * (local_124 - iVar18);
      if ((*(uint *)((long)local_e0 + (long)((int)uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1)
          == 0) {
        local_88 = puVar19 + 0x10;
        uStack_80 = 0;
        uVar12 = FUN_01fb1870(&local_88,param_3,&local_130,param_3 + 0x1c,lVar16,1);
        if ((uVar12 & 1) != 0) {
          uVar12 = FUN_035aa210(iVar9 + -1,iVar6 + -1,&local_100);
          if ((((uVar12 & 1) != 0) &&
              (uVar12 = FUN_035aa210(iVar9 + -1,iVar6,&local_100), (uVar12 & 1) != 0)) &&
             (uVar12 = FUN_035aa210(iVar9,iVar6 + -1,&local_100), (uVar12 & 1) != 0)) {
            uVar12 = FUN_035aa210(iVar9,iVar6,&local_100);
            puVar19 = PTR_DAT_04bb2010;
            if ((uVar12 & 1) != 0) {
              if ((int)(uint)local_170 < (int)local_170._4_4_) {
                *(undefined ***)(local_168 + (long)(int)(uint)local_170 * 8) = &local_130;
                local_170._0_4_ = (uint)local_170 + 1;
              }
              goto LAB_01faa2d4;
            }
          }
        }
        puVar19 = PTR_DAT_04bb2010;
      }
    }
  }
LAB_01faa2d4:
  iVar6 = local_134;
  iVar9 = local_138;
  if ((((iVar8 <= local_138) && (local_138 <= iVar17)) && (iVar18 <= local_134)) &&
     ((local_134 <= iVar15 &&
      (uVar14 = (local_138 - iVar8) + (int)local_d4 * (local_134 - iVar18),
      (*(uint *)((long)local_e0 + (long)((int)uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) == 0)
      ))) {
    local_88 = puVar19 + 0x10;
    uStack_80 = 0;
    uVar12 = FUN_01fb1870(&local_88,param_3,&local_140,param_3 + 0x1c,lVar16,1);
    if ((uVar12 & 1) != 0) {
      uVar12 = FUN_035aa210(iVar9 + -1,iVar6 + -1,&local_100);
      if ((((uVar12 & 1) != 0) &&
          (uVar12 = FUN_035aa210(iVar9 + -1,iVar6,&local_100), (uVar12 & 1) != 0)) &&
         ((uVar12 = FUN_035aa210(iVar9,iVar6 + -1,&local_100), (uVar12 & 1) != 0 &&
          ((uVar12 = FUN_035aa210(iVar9,iVar6,&local_100), (uVar12 & 1) != 0 &&
           ((int)(uint)local_170 < (int)local_170._4_4_)))))) {
        *(undefined ***)(local_168 + (long)(int)(uint)local_170 * 8) = &local_140;
        local_170._0_4_ = (uint)local_170 + 1;
      }
    }
  }
  uVar14 = (uint)local_170;
  bVar1 = 0 < (int)(uint)local_170;
  if ((int)(uint)local_170 < 1) {
    return bVar1;
  }
  puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar4 = *puVar13 ^ *puVar13 << 0xb;
  uVar5 = puVar13[3];
  *puVar13 = puVar13[1];
  puVar13[1] = puVar13[2];
  uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
  puVar13[2] = uVar5;
  puVar13[3] = uVar4;
  if (param_2 == (float *)0x0) {
    return bVar1;
  }
  lVar16 = *(long *)(local_168 + ((ulong)uVar4 * (ulong)uVar14 >> 0x20) * 8);
  *param_2 = (float)*(int *)(lVar16 + 8) * 5.0;
  param_2[2] = (float)*(int *)(lVar16 + 0xc) * 5.0;
  return bVar1;
}

