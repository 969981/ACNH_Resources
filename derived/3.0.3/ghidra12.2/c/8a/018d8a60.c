
/* WARNING: Removing unreachable block (ram,0x018d8adc) */
/* WARNING: Removing unreachable block (ram,0x018d8aec) */

bool FUN_018d8a60(uint *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_170;
  float local_168;
  undefined8 local_160;
  float local_158;
  undefined **local_150;
  long *plStack_148;
  undefined4 *local_140;
  undefined **ppuStack_138;
  undefined **local_130;
  long *plStack_128;
  undefined4 *local_120;
  long *plStack_118;
  uint *local_110;
  undefined4 local_104;
  long local_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88;
  long local_80 [2];
  uint local_68;
  uint local_64;
  
  if (param_2 == (long *)0x0) {
    return false;
  }
  if (*param_3 == 0) {
    return false;
  }
  if (*(int *)((long)param_3 + 0xc) == 0xfffe) {
    return false;
  }
  if (*param_2 == 0) {
    return false;
  }
  if (param_2[1] == 0) {
    return false;
  }
  local_150 = (undefined **)((ulong)local_150 & 0xffffffff00000000);
  local_80[0] = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (local_80[0] == 0) {
    return false;
  }
  local_90 = 0;
  local_98 = PTR_DAT_04bbfe68 + 0x10;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  local_8c = *(undefined4 *)(puVar13 + 7);
  local_88 = FUN_017baf44();
  local_88 = local_88 & 1;
  fVar18 = *(float *)*param_3;
  fVar19 = ((float *)*param_3)[2];
  local_d0 = PTR_DAT_04bb2018 + 0x10;
  local_c8 = 0;
  puStack_f0 = PTR_DAT_04bb2010 + 0x10;
  local_d8 = 0;
  uStack_b8 = 0;
  local_e8 = 0;
  local_f8 = PTR_DAT_04bbc1a0 + 0x10;
  local_b0 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_ac = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  iVar6 = (int)((float)(int)fVar18 / 10.0) - (uint)(fVar18 < 0.0);
  iVar4 = (int)((float)(int)fVar19 / 10.0) - (uint)(fVar19 < 0.0);
  puStack_e0 = puStack_f0;
  local_c0 = puStack_f0;
  local_a8 = local_d0;
  local_a0 = iVar6;
  iStack_9c = iVar4;
  uVar7 = FUN_01a1159c(*(undefined8 *)PTR_DAT_04bb4008,*(undefined4 *)((long)param_3 + 0xc));
  local_68 = uVar7;
  if (uVar7 == 0x15) {
    uVar9 = FUN_03783190();
    if ((uVar9 & 1) != 0) {
      return false;
    }
LAB_018d8c90:
    puVar13 = *(undefined8 **)(PTR_DAT_04bbf050 + (ulong)uVar7 * 8 + 0x110);
  }
  else {
    if (uVar7 == 0x12) {
      uVar9 = FUN_0194c148();
      if ((uVar9 & 1) == 0) {
        return false;
      }
      goto LAB_018d8c90;
    }
    if (uVar7 < 0x20) goto LAB_018d8c90;
    puVar13 = &DAT_0407ebb1;
  }
  uVar8 = FUN_006bd550(puVar13,0);
  uVar3 = *param_1;
  if (uVar3 != 0) {
    local_100 = *(long *)(param_1 + 2);
    if ((int)uVar3 < 2) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      iVar12 = uVar3 - 1;
      do {
        uVar1 = iVar12 + uVar11;
        if ((int)uVar1 < 0 != SCARRY4(iVar12,uVar11)) {
          uVar1 = uVar1 + 1;
        }
        uVar2 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(local_100 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar8) goto joined_r0x018d8d30;
        if (uVar1 < uVar8) {
          uVar11 = uVar2 + 1;
        }
        else {
          iVar12 = uVar2 - 1;
        }
      } while ((int)uVar11 < iVar12);
    }
    uVar2 = uVar11;
    if (*(uint *)(local_100 + (long)(int)uVar11 * 0x20 + 0x18) == uVar8) {
joined_r0x018d8d30:
      if (-1 < (int)uVar2) {
        if (uVar3 <= uVar2) {
          uVar2 = 0;
        }
        local_100 = local_100 + (ulong)uVar2 * 0x20;
        goto LAB_018d8d38;
      }
    }
  }
  local_100 = 0;
LAB_018d8d38:
  plStack_148 = local_80;
  local_158 = 0.0;
  uVar14 = *(undefined4 *)param_2[1];
  local_150 = &local_f8;
  local_160 = 0;
  local_168 = 0.0;
  local_170 = 0;
  local_140 = &local_b0;
  ppuStack_138 = &local_98;
  local_130 = &local_c0;
  plStack_128 = &local_100;
  local_120 = &local_104;
  local_110 = &local_68;
  plStack_118 = param_3;
  local_104 = uVar14;
  local_64 = uVar7;
  if ((uVar7 < 0x1a) && ((1 << (ulong)(uVar7 & 0x1f) & 0x21eb4a5U) != 0)) {
    uVar7 = 2;
  }
  else {
    uVar9 = FUN_018d97d0(&local_150,&local_170,&local_a8);
    if ((uVar9 & 1) != 0) {
      puVar13 = (undefined8 *)*param_2;
      *puVar13 = local_170;
      *(float *)(puVar13 + 1) = local_168;
      *(undefined4 *)param_2[1] = local_104;
      return true;
    }
    uVar7 = 1;
  }
  bVar5 = true;
  fVar18 = 3.4028235e+38;
  do {
    bVar16 = false;
    iVar12 = iVar6 - uVar7;
    local_c8._0_4_ = iVar12;
    local_c8._4_4_ = iVar4 - uVar7;
    do {
      iVar17 = local_c8._4_4_;
      uVar9 = FUN_018d97d0(&local_150,&local_170,&local_d0);
      if ((uVar9 & 1) != 0) {
        fVar19 = *(float *)*param_3 - (float)local_170;
        fVar20 = ((float *)*param_3)[2] - local_168;
        fVar19 = fVar20 * fVar20 + fVar19 * fVar19;
        if (fVar19 < fVar18) {
          bVar16 = true;
          local_160 = local_170;
          local_158 = local_168;
          uVar14 = local_104;
          fVar18 = fVar19;
        }
      }
      iVar17 = iVar17 + 1;
      local_c8._4_4_ = iVar17;
    } while (iVar17 < (int)(iVar4 + uVar7));
    iVar15 = iVar12;
    do {
      uVar9 = FUN_018d97d0(&local_150,&local_170,&local_d0);
      if ((uVar9 & 1) != 0) {
        fVar19 = *(float *)*param_3 - (float)local_170;
        fVar20 = ((float *)*param_3)[2] - local_168;
        fVar19 = fVar20 * fVar20 + fVar19 * fVar19;
        if (fVar19 < fVar18) {
          bVar16 = true;
          local_160 = local_170;
          local_158 = local_168;
          uVar14 = local_104;
          fVar18 = fVar19;
        }
      }
      iVar15 = iVar15 + 1;
      local_c8._0_4_ = iVar15;
    } while (iVar15 < (int)(iVar6 + uVar7));
    do {
      uVar9 = FUN_018d97d0(&local_150,&local_170,&local_d0);
      if ((uVar9 & 1) != 0) {
        fVar19 = *(float *)*param_3 - (float)local_170;
        fVar20 = ((float *)*param_3)[2] - local_168;
        fVar19 = fVar20 * fVar20 + fVar19 * fVar19;
        if (fVar19 < fVar18) {
          bVar16 = true;
          local_160 = local_170;
          local_158 = local_168;
          uVar14 = local_104;
          fVar18 = fVar19;
        }
      }
      iVar17 = iVar17 + -1;
      local_c8._4_4_ = iVar17;
    } while ((int)(iVar4 - uVar7) < iVar17);
LAB_018d8f70:
    do {
      uVar9 = FUN_018d97d0(&local_150,&local_170,&local_d0);
      if ((uVar9 & 1) != 0) {
        fVar19 = *(float *)*param_3 - (float)local_170;
        fVar20 = ((float *)*param_3)[2] - local_168;
        fVar19 = fVar20 * fVar20 + fVar19 * fVar19;
        if (fVar19 < fVar18) {
          iVar15 = iVar15 + -1;
          bVar16 = true;
          local_160 = local_170;
          local_158 = local_168;
          uVar14 = local_104;
          fVar18 = fVar19;
          local_c8._0_4_ = iVar15;
          if (iVar15 <= iVar12) goto LAB_018d8ffc;
          goto LAB_018d8f70;
        }
      }
      iVar15 = iVar15 + -1;
      local_c8._0_4_ = iVar15;
    } while (iVar12 < iVar15);
    if (bVar16) {
LAB_018d8ffc:
      puVar13 = (undefined8 *)*param_2;
      *puVar13 = local_160;
      *(float *)(puVar13 + 1) = local_158;
      *(undefined4 *)param_2[1] = uVar14;
      return bVar5;
    }
    bVar5 = uVar7 < 0xc;
    uVar7 = uVar7 + 1;
    if (uVar7 == 0xd) {
      return bVar5;
    }
  } while( true );
}

