
/* WARNING: Removing unreachable block (ram,0x018d910c) */
/* WARNING: Removing unreachable block (ram,0x018d911c) */

bool FUN_018d9090(uint *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined8 local_180;
  float local_178;
  undefined8 local_170;
  float local_168;
  undefined **local_160;
  long *plStack_158;
  undefined4 *local_150;
  undefined **ppuStack_148;
  undefined **local_140;
  long *plStack_138;
  uint *local_130;
  long *plStack_128;
  uint *local_120;
  uint local_114;
  long local_110;
  uint local_104;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  long local_88;
  uint local_7c;
  
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
  local_160 = (undefined **)((ulong)local_160 & 0xffffffff00000000);
  local_88 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (local_88 == 0) {
    return false;
  }
  local_98 = 0;
  local_a0 = PTR_DAT_04bbfe68 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar6 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_94 = *(undefined4 *)(puVar15 + 7);
  local_90 = FUN_017baf44();
  local_90 = local_90 & 1;
  fVar20 = *(float *)*param_3;
  fVar21 = ((float *)*param_3)[2];
  local_d8 = PTR_DAT_04bb2018 + 0x10;
  local_d0 = 0;
  puStack_f8 = PTR_DAT_04bb2010 + 0x10;
  local_e0 = 0;
  uStack_c0 = 0;
  local_f0 = 0;
  local_100 = PTR_DAT_04bbc1a0 + 0x10;
  local_b8 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_b4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  iVar6 = (int)((float)(int)fVar20 / 10.0) - (uint)(fVar20 < 0.0);
  iVar3 = (int)((float)(int)fVar21 / 10.0) - (uint)(fVar21 < 0.0);
  puStack_e8 = puStack_f8;
  local_c8 = puStack_f8;
  local_b0 = local_d8;
  local_a8 = iVar6;
  iStack_a4 = iVar3;
  local_7c = FUN_01a1159c(*(undefined8 *)PTR_DAT_04bb4008,*(undefined4 *)((long)param_3 + 0xc));
  if (local_7c < 0x20) {
    puVar15 = *(undefined8 **)(PTR_DAT_04bbf050 + (ulong)local_7c * 8 + 0x110);
  }
  else {
    puVar15 = &DAT_0407ebb1;
  }
  local_104 = local_7c;
  uVar7 = FUN_006bd550(puVar15,0);
  uVar17 = *param_1;
  if (uVar17 != 0) {
    local_110 = *(long *)(param_1 + 2);
    if ((int)uVar17 < 2) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      iVar12 = uVar17 - 1;
      do {
        uVar16 = iVar12 + uVar11;
        if ((int)uVar16 < 0 != SCARRY4(iVar12,uVar11)) {
          uVar16 = uVar16 + 1;
        }
        uVar1 = (int)uVar16 >> 1;
        uVar16 = *(uint *)(local_110 + ((long)((ulong)uVar16 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar16 == uVar7) goto joined_r0x018d933c;
        if (uVar16 < uVar7) {
          uVar11 = uVar1 + 1;
        }
        else {
          iVar12 = uVar1 - 1;
        }
      } while ((int)uVar11 < iVar12);
    }
    uVar1 = uVar11;
    if (*(uint *)(local_110 + (long)(int)uVar11 * 0x20 + 0x18) == uVar7) {
joined_r0x018d933c:
      if (-1 < (int)uVar1) {
        if (uVar17 <= uVar1) {
          uVar1 = 0;
        }
        local_110 = local_110 + (ulong)uVar1 * 0x20;
        goto LAB_018d9344;
      }
    }
  }
  local_110 = 0;
LAB_018d9344:
  plStack_158 = &local_88;
  local_168 = 0.0;
  uVar17 = *(uint *)param_2[1];
  local_160 = &local_100;
  local_170 = 0;
  local_178 = 0.0;
  local_180 = 0;
  local_150 = &local_b8;
  ppuStack_148 = &local_a0;
  local_140 = &local_c8;
  plStack_138 = &local_110;
  local_130 = &local_114;
  local_120 = &local_104;
  local_114 = uVar17;
  plStack_128 = param_3;
  if ((local_7c < 0x1a) && ((1 << (ulong)(local_7c & 0x1f) & 0x21eb4a5U) != 0)) {
    uVar14 = 2;
  }
  else {
    uVar14 = FUN_018d9d90(&local_160,&local_180,&local_b0);
    if ((uVar14 & 1) != 0) {
      puVar15 = (undefined8 *)*param_2;
      *puVar15 = local_180;
      *(float *)(puVar15 + 1) = local_178;
      *(uint *)param_2[1] = local_114;
      return true;
    }
    uVar14 = 1;
  }
  uVar7 = 0xffffffff;
  bVar5 = true;
  fVar20 = (float)iVar6 * 10.0 + 5.0;
  fVar21 = (float)iVar3 * 10.0 + 5.0;
  do {
    uVar10 = uVar14 << 3;
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = 0x100000000 / uVar10;
    }
    bVar4 = false;
    iVar13 = (int)uVar14;
    iVar12 = iVar6 - iVar13;
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = (uint)((uint)((int)param_3[1] + (int)(uVar8 >> 1)) / uVar8);
    }
    uVar16 = (int)uVar10 - 1;
    if (uVar16 <= uVar11) {
      uVar11 = uVar16;
    }
    local_d0._0_4_ = iVar12;
    local_d0._4_4_ = iVar3 - iVar13;
    do {
      iVar18 = local_d0._4_4_;
      uVar8 = FUN_018d9d90(&local_160,&local_180,&local_d8);
      uVar16 = (uint)(long)((360.0 / (float)(uVar10 & 0xffffffff)) * (float)uVar11 * 11930465.0);
      if ((uVar8 & 1) != 0) {
        local_114 = FUN_006f0400((float)local_180 - fVar20,local_178 - fVar21);
        if (local_114 == uVar16) {
          uVar2 = 0;
          if (uVar7 != 0) goto LAB_018d9470;
        }
        else {
          uVar1 = uVar16 - local_114;
          if (uVar16 <= local_114) {
            uVar1 = local_114 - uVar16;
          }
          uVar2 = -uVar1;
          if (uVar1 < 0x80000001) {
            uVar2 = uVar1;
          }
          if (uVar2 < uVar7) {
LAB_018d9470:
            uVar7 = uVar2;
            bVar4 = true;
            local_170 = local_180;
            local_168 = local_178;
            uVar17 = local_114;
          }
        }
      }
      iVar18 = iVar18 + 1;
      local_d0._4_4_ = iVar18;
    } while (iVar18 < iVar3 + iVar13);
    iVar19 = iVar12;
    do {
      uVar8 = FUN_018d9d90(&local_160,&local_180,&local_d8);
      if ((uVar8 & 1) != 0) {
        local_114 = FUN_006f0400((float)local_180 - fVar20,local_178 - fVar21);
        if (local_114 == uVar16) {
          uVar1 = 0;
          if (uVar7 != 0) goto LAB_018d9510;
        }
        else {
          uVar11 = uVar16 - local_114;
          if (uVar16 <= local_114) {
            uVar11 = local_114 - uVar16;
          }
          uVar1 = -uVar11;
          if (uVar11 < 0x80000001) {
            uVar1 = uVar11;
          }
          if (uVar1 < uVar7) {
LAB_018d9510:
            uVar7 = uVar1;
            bVar4 = true;
            local_170 = local_180;
            local_168 = local_178;
            uVar17 = local_114;
          }
        }
      }
      iVar19 = iVar19 + 1;
      local_d0._0_4_ = iVar19;
    } while (iVar19 < iVar6 + iVar13);
    do {
      uVar8 = FUN_018d9d90(&local_160,&local_180,&local_d8);
      if ((uVar8 & 1) != 0) {
        local_114 = FUN_006f0400((float)local_180 - fVar20,local_178 - fVar21);
        if (local_114 == uVar16) {
          uVar1 = 0;
          if (uVar7 != 0) goto LAB_018d95b0;
        }
        else {
          uVar11 = uVar16 - local_114;
          if (uVar16 <= local_114) {
            uVar11 = local_114 - uVar16;
          }
          uVar1 = -uVar11;
          if (uVar11 < 0x80000001) {
            uVar1 = uVar11;
          }
          if (uVar1 < uVar7) {
LAB_018d95b0:
            uVar7 = uVar1;
            bVar4 = true;
            local_170 = local_180;
            local_168 = local_178;
            uVar17 = local_114;
          }
        }
      }
      iVar18 = iVar18 + -1;
      local_d0._4_4_ = iVar18;
    } while (iVar3 - iVar13 < iVar18);
LAB_018d965c:
    do {
      uVar8 = FUN_018d9d90(&local_160,&local_180,&local_d8);
      if ((uVar8 & 1) != 0) {
        local_114 = FUN_006f0400((float)local_180 - fVar20,local_178 - fVar21);
        if (local_114 == uVar16) {
          uVar11 = 0;
          if (uVar7 != 0) goto LAB_018d96ac;
        }
        else {
          uVar1 = uVar16 - local_114;
          if (uVar16 <= local_114) {
            uVar1 = local_114 - uVar16;
          }
          uVar11 = -uVar1;
          if (uVar1 < 0x80000001) {
            uVar11 = uVar1;
          }
          if (uVar11 < uVar7) {
LAB_018d96ac:
            uVar7 = uVar11;
            iVar19 = iVar19 + -1;
            bVar4 = true;
            local_170 = local_180;
            local_168 = local_178;
            uVar17 = local_114;
            local_d0._0_4_ = iVar19;
            if (iVar19 <= iVar12) goto LAB_018d970c;
            goto LAB_018d965c;
          }
        }
      }
      iVar19 = iVar19 + -1;
      local_d0._0_4_ = iVar19;
    } while (iVar12 < iVar19);
    if (bVar4) {
      local_114 = uVar17;
LAB_018d970c:
      puVar15 = (undefined8 *)*param_2;
      *puVar15 = local_170;
      *(float *)(puVar15 + 1) = local_168;
      *(uint *)param_2[1] = local_114;
      return bVar5;
    }
    bVar5 = uVar14 < 0xc;
    uVar14 = uVar14 + 1;
    if (uVar14 == 0xd) {
      return bVar5;
    }
  } while( true );
}

