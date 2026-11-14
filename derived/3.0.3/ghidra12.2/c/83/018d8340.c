
/* WARNING: Removing unreachable block (ram,0x018d83bc) */
/* WARNING: Removing unreachable block (ram,0x018d83cc) */

bool FUN_018d8340(uint *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  bool bVar16;
  undefined8 *puVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *local_190;
  undefined *puStack_188;
  undefined8 local_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  long *local_148;
  undefined **ppuStack_140;
  undefined **local_138;
  undefined4 *puStack_130;
  undefined **local_128;
  undefined1 *puStack_120;
  long *local_118;
  long *plStack_110;
  undefined4 *local_108;
  undefined4 *puStack_100;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [4];
  long local_e8;
  uint local_dc;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  long local_68;
  
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
  local_148 = (long *)((ulong)local_148 & 0xffffffff00000000);
  local_68 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (local_68 == 0) {
    return false;
  }
  local_88 = 0;
  local_90 = PTR_DAT_04bbfe68 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar11 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  local_84 = *(undefined4 *)(puVar17 + 7);
  local_80 = FUN_017baf44();
  puVar7 = PTR_DAT_04bb2010;
  local_80 = local_80 & 1;
  fVar19 = ((float *)*param_3)[2];
  local_d8 = PTR_DAT_04bb2010 + 0x10;
  fVar20 = *(float *)*param_3;
  uStack_b0 = 0;
  uStack_c0 = 0;
  local_a8 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_a4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  iStack_94 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  local_98 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  local_d0 = 0;
  local_c8 = local_d8;
  local_b8 = local_d8;
  local_a0 = local_d8;
  local_dc = FUN_01a1159c(*(undefined8 *)PTR_DAT_04bb4008,*(undefined4 *)((long)param_3 + 0xc));
  if (local_dc < 0x20) {
    puVar17 = *(undefined8 **)(PTR_DAT_04bbf050 + (ulong)local_dc * 8 + 0x110);
  }
  else {
    puVar17 = &DAT_0407ebb1;
  }
  uVar12 = FUN_006bd550(puVar17,0);
  uVar18 = *param_1;
  if (uVar18 != 0) {
    local_e8 = *(long *)(param_1 + 2);
    if ((int)uVar18 < 2) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      iVar11 = uVar18 - 1;
      do {
        uVar3 = iVar11 + uVar15;
        if ((int)uVar3 < 0 != SCARRY4(iVar11,uVar15)) {
          uVar3 = uVar3 + 1;
        }
        uVar4 = (int)uVar3 >> 1;
        uVar3 = *(uint *)(local_e8 + ((long)((ulong)uVar3 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar3 == uVar12) goto joined_r0x018d85cc;
        if (uVar3 < uVar12) {
          uVar15 = uVar4 + 1;
        }
        else {
          iVar11 = uVar4 - 1;
        }
      } while ((int)uVar15 < iVar11);
    }
    uVar4 = uVar15;
    if (*(uint *)(local_e8 + (long)(int)uVar15 * 0x20 + 0x18) == uVar12) {
joined_r0x018d85cc:
      if (-1 < (int)uVar4) {
        if (uVar18 <= uVar4) {
          uVar4 = 0;
        }
        local_e8 = local_e8 + (ulong)uVar4 * 0x20;
        goto LAB_018d85d4;
      }
    }
  }
  local_e8 = 0;
LAB_018d85d4:
  local_ec[0] = 1;
  local_148 = &local_68;
  ppuStack_140 = &local_c8;
  local_138 = &local_b8;
  local_150 = 0.0;
  local_f4 = *(undefined4 *)param_2[1];
  puStack_130 = &local_a8;
  local_158 = 0;
  local_160 = 0.0;
  local_168 = 0;
  local_128 = &local_90;
  puStack_120 = local_ec;
  plStack_110 = &local_e8;
  puStack_100 = &local_f0;
  local_108 = &local_f4;
  local_118 = param_3;
  local_f0 = local_f4;
  if (((DAT_052c15f0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_052c15f0), iVar11 != 0)) {
    DAT_052c15d0 = puVar7 + 0x10;
    DAT_052c15e8 = 0;
    DAT_052c15d8 = 0;
    DAT_052c15c8 = PTR_DAT_04bbc1a0 + 0x10;
    DAT_052c15e0 = DAT_052c15d0;
    FUN_001001d0(PTR_FUN_04bb2038,&DAT_052c15c8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052c15f0);
  }
  local_190 = (undefined *)CONCAT44(local_190._4_4_,local_dc);
  if ((local_dc < 0x1a) && ((1 << (ulong)(local_dc & 0x1f) & 0x21eb4a5U) != 0)) {
    iVar11 = 0;
    uVar18 = 3;
  }
  else {
    uVar13 = FUN_018da2fc(&local_148,&local_168,&local_a0,0,&DAT_052c15c8);
    if ((uVar13 & 1) != 0) {
      puVar17 = (undefined8 *)*param_2;
      *puVar17 = local_168;
      *(float *)(puVar17 + 1) = local_160;
      *(undefined4 *)param_2[1] = local_f4;
      return true;
    }
    iVar11 = 1;
    uVar18 = 1;
  }
  iVar9 = iStack_94;
  iVar8 = local_98;
  puStack_188 = puVar7 + 0x10;
  local_170 = 0;
  local_180 = 0;
  local_190 = PTR_DAT_04bbc1a0 + 0x10;
  if (iVar11 == 0) {
    uVar3 = local_98 + uVar18;
    uVar12 = (local_98 - uVar18) + 1;
    uVar12 = uVar12 & (int)uVar12 >> 0x1f;
    uVar15 = (iStack_94 - uVar18) + 1;
    uVar15 = uVar15 & (int)uVar15 >> 0x1f;
    uVar4 = iStack_94 + uVar18;
    uVar5 = uVar12;
    if ((int)uVar3 <= (int)uVar12) {
      uVar5 = uVar3;
    }
    if ((int)uVar12 <= (int)uVar3) {
      uVar12 = uVar3;
    }
    uVar3 = uVar15;
    if ((int)uVar4 <= (int)uVar15) {
      uVar3 = uVar4;
    }
    if ((int)uVar15 <= (int)uVar4) {
      uVar15 = uVar4;
    }
    local_180 = CONCAT44(uVar3,uVar5);
    local_170 = CONCAT44(uVar15,uVar12);
  }
  iVar1 = local_98 + 1;
  iVar2 = iStack_94 + 1;
  bVar10 = true;
  fVar19 = 3.4028235e+38;
  puStack_178 = puStack_188;
  do {
    bVar16 = false;
    iVar6 = iVar8 - uVar18;
    local_d0._0_4_ = iVar6;
    local_d0._4_4_ = iVar9 - uVar18;
    do {
      uVar13 = FUN_018da2fc(&local_148,&local_168,&local_d8,iVar11,&local_190);
      if ((uVar13 & 1) != 0) {
        fVar20 = *(float *)*param_3 - (float)local_168;
        fVar21 = ((float *)*param_3)[2] - local_160;
        fVar20 = fVar21 * fVar21 + fVar20 * fVar20;
        if (fVar20 < fVar19) {
          bVar16 = true;
          local_158 = local_168;
          local_150 = local_160;
          local_f0 = local_f4;
          fVar19 = fVar20;
        }
      }
      local_d0._4_4_ = local_d0._4_4_ + 1;
    } while (local_d0._4_4_ < (int)(iVar2 + uVar18));
    do {
      uVar13 = FUN_018da2fc(&local_148,&local_168,&local_d8,iVar11,&local_190);
      if ((uVar13 & 1) != 0) {
        fVar20 = *(float *)*param_3 - (float)local_168;
        fVar21 = ((float *)*param_3)[2] - local_160;
        fVar20 = fVar21 * fVar21 + fVar20 * fVar20;
        if (fVar20 < fVar19) {
          bVar16 = true;
          local_158 = local_168;
          local_150 = local_160;
          local_f0 = local_f4;
          fVar19 = fVar20;
        }
      }
      local_d0._0_4_ = (int)local_d0 + 1;
    } while ((int)local_d0 < (int)(iVar1 + uVar18));
    do {
      uVar13 = FUN_018da2fc(&local_148,&local_168,&local_d8,iVar11,&local_190);
      if ((uVar13 & 1) != 0) {
        fVar20 = *(float *)*param_3 - (float)local_168;
        fVar21 = ((float *)*param_3)[2] - local_160;
        fVar20 = fVar21 * fVar21 + fVar20 * fVar20;
        if (fVar20 < fVar19) {
          bVar16 = true;
          local_158 = local_168;
          local_150 = local_160;
          local_f0 = local_f4;
          fVar19 = fVar20;
        }
      }
      local_d0._4_4_ = local_d0._4_4_ + -1;
    } while ((int)(iVar9 - uVar18) < local_d0._4_4_);
LAB_018d88c4:
    do {
      uVar13 = FUN_018da2fc(&local_148,&local_168,&local_d8,iVar11,&local_190);
      if ((uVar13 & 1) != 0) {
        fVar20 = *(float *)*param_3 - (float)local_168;
        fVar21 = ((float *)*param_3)[2] - local_160;
        fVar20 = fVar21 * fVar21 + fVar20 * fVar20;
        if (fVar20 < fVar19) {
          bVar16 = true;
          local_150 = local_160;
          local_158 = local_168;
          local_d0._0_4_ = (int)local_d0 + -1;
          local_f0 = local_f4;
          fVar19 = fVar20;
          if ((int)local_d0 <= iVar6) goto LAB_018d8964;
          goto LAB_018d88c4;
        }
      }
      local_d0._0_4_ = (int)local_d0 + -1;
    } while (iVar6 < (int)local_d0);
    if (bVar16) {
LAB_018d8964:
      puVar17 = (undefined8 *)*param_2;
      *puVar17 = local_158;
      *(float *)(puVar17 + 1) = local_150;
      *(undefined4 *)param_2[1] = local_f0;
      return bVar10;
    }
    bVar10 = uVar18 < 0x17;
    uVar18 = uVar18 + 1;
    if (uVar18 == 0x18) {
      return bVar10;
    }
  } while( true );
}

