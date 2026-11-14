
undefined8 FUN_01517930(long param_1,float *param_2,uint *param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint *puVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  void *__s;
  ulong uVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_890;
  undefined *puStack_888;
  undefined8 local_880;
  undefined *local_878;
  undefined8 local_870;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined *local_118;
  undefined8 local_110;
  undefined *puStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  byte local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  uint local_84;
  
  puVar11 = PTR_DAT_04bbc1a0;
  puVar10 = PTR_DAT_04bb2720;
  puVar9 = PTR_DAT_04bb2010;
  local_c8 = *(undefined8 *)param_2;
  local_c0 = param_2[2];
  local_100 = 0;
  local_f0 = PTR_DAT_04bbc1a0 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_d0 = (int)((float)(int)((float)local_c8 + -2.5) / 5.0) -
             (uint)((float)local_c8 + -2.5 < 0.0);
  iStack_cc = (int)((float)(int)(local_c0 + -2.5) / 5.0) - (uint)(local_c0 + -2.5 < 0.0);
  iVar12 = (int)((float)(int)((float)local_c8 + 2.5) / 5.0) - (uint)((float)local_c8 + 2.5 < 0.0);
  iVar7 = (int)((float)(int)(local_c0 + 2.5) / 5.0) - (uint)(local_c0 + 2.5 < 0.0);
  local_e0 = local_d0;
  if (iVar12 <= local_d0) {
    local_e0 = iVar12;
  }
  if (local_d0 <= iVar12) {
    local_d0 = iVar12;
  }
  iStack_dc = iStack_cc;
  if (iVar7 <= iStack_cc) {
    iStack_dc = iVar7;
  }
  if (iStack_cc <= iVar7) {
    iStack_cc = iVar7;
  }
  lVar15 = *(long *)PTR_DAT_04bb2720;
  puStack_e8 = puVar1;
  local_d8 = puVar1;
  if (lVar15 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar12 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  local_fc = *(undefined4 *)(puVar17 + 7);
  local_f8 = FUN_017baf44();
  local_f8 = local_f8 & 1;
  puStack_108 = PTR_DAT_04bb3140 + 0x10;
  local_110 = 0;
  local_118 = puVar1;
  FUN_01a5033c(&local_120,&puStack_108,0,&puStack_e8,&local_118);
  if ((short)local_120 == -2) {
    return 6;
  }
  lVar15 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar15 != 0) && (*(long *)(lVar15 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar15 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar15 + 0x488) != 0 && (*(long *)(*(long *)(lVar15 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar15 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar15 + 0x2b0) + 8) != 0)))))) {
    uVar13 = FUN_0277d6c4(&local_120);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      FUN_0124c030(&local_890,&local_120);
      iVar12 = FUN_0123db50(&puStack_888,local_880);
      if ((iVar12 - 2U & 0xfffffff9) == 0) {
        local_890 = PTR_DAT_04bbfe60 + 0x10;
        memset(&puStack_888,0,0x754);
        uVar13 = nn::os::GetSystemTick();
        local_134 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
        local_130 = (local_134 ^ local_134 >> 0x1e) * 0x6c078965 + 2;
        local_12c = (local_130 ^ local_130 >> 0x1e) * 0x6c078965 + 3;
        local_128 = (local_12c ^ local_12c >> 0x1e) * 0x6c078965 + 4;
        __s = (void *)(**(code **)(local_890 + 0x18))(&local_890);
        memset(__s,0,0x754);
        local_b0 = &local_84;
        local_84 = 3;
        local_b8 = &PTR_FUN_049ff560;
        FUN_008a1ba0(&local_890,&local_b8);
        FUN_00889f80(&local_b8,&local_890,1);
        local_120 = (undefined4)local_b8;
        uStack_11c = local_b8._4_4_;
      }
    }
  }
  puVar1 = PTR_DAT_04bb43c0;
  local_a8 = 0;
  local_b8 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_b0 = (uint *)CONCAT44(uStack_11c,local_120);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar13 = FUN_0277d6c4(&local_b0);
  if (*(long *)puVar1 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar13 = FUN_0277d6c4(&local_120);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar13 < *(uint *)(lVar15 + 0x1d8)) {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8);
        if (lVar15 != 0) {
          local_a8 = lVar15;
        }
      }
    }
  }
  FUN_01ae98d0(&local_b8);
  local_890 = (undefined *)CONCAT44(local_890._4_4_,1);
  local_84 = FUN_01aee3b4(&local_b8);
  if (local_84 == (uint)local_890) {
    local_890 = puVar11 + 0x10;
    puStack_888 = puVar9 + 0x10;
    local_880 = 0;
    local_870 = 0;
    local_878 = puStack_888;
    FUN_01afb480(&local_b8,&local_890);
    iVar12 = (int)local_880 + (int)local_110;
    fVar21 = *param_2;
    fVar22 = param_2[2];
    iVar7 = local_880._4_4_ + local_110._4_4_;
    local_880 = CONCAT44(iVar7,iVar12);
    uVar13 = *param_3;
    iVar2 = (int)local_870 + (int)local_110;
    iVar16 = local_870._4_4_ + local_110._4_4_;
    local_870 = CONCAT44(iVar16,iVar2);
    local_84 = FUN_01ae98d0(&local_b8);
    if (local_84 < 4) {
      uVar13 = uVar13 + 0x20000000 >> 0x1e;
      fVar18 = ((float)iVar12 * 5.0 + (float)iVar2 * 5.0 + 5.0) * 0.5;
      fVar19 = ((float)iVar7 * 5.0 + (float)iVar16 * 5.0 + 5.0) * 0.5;
      switch(local_84) {
      default:
        if ((uVar13 | 2) != 3) goto LAB_01517f40;
        fVar21 = fVar21 - fVar18;
        fVar22 = 0.0;
        break;
      case 1:
      case 3:
        if ((uVar13 | 2) != 2) goto LAB_01517f40;
        fVar22 = fVar22 - fVar19;
        fVar21 = 0.0;
      }
      if (2.4 <= SQRT(fVar22 * fVar22 + fVar21 * fVar21)) {
        fVar20 = SQRT(fVar21 * fVar21 + 0.0 + fVar22 * fVar22);
        if (0.0 < fVar20) {
          fVar20 = 5.0 / fVar20;
          fVar21 = fVar21 * fVar20;
          fVar22 = fVar22 * fVar20;
        }
        fVar18 = fVar18 + fVar21;
        local_c0 = fVar19 + fVar22;
        local_c8 = CONCAT44(0x7fc00000,fVar18);
        local_d0 = (int)((float)(int)(fVar18 + -2.5) / 5.0) - (uint)(fVar18 + -2.5 < 0.0);
        iStack_cc = (int)((float)(int)(local_c0 + -2.5) / 5.0) - (uint)(local_c0 + -2.5 < 0.0);
        iVar12 = (int)((float)(int)(fVar18 + 2.5) / 5.0) - (uint)(fVar18 + 2.5 < 0.0);
        iVar7 = (int)((float)(int)(local_c0 + 2.5) / 5.0) - (uint)(local_c0 + 2.5 < 0.0);
        local_e0 = local_d0;
        if (iVar12 <= local_d0) {
          local_e0 = iVar12;
        }
        if (local_d0 <= iVar12) {
          local_d0 = iVar12;
        }
        iStack_dc = iStack_cc;
        if (iVar7 <= iStack_cc) {
          iStack_dc = iVar7;
        }
        if (iStack_cc <= iVar7) {
          iStack_cc = iVar7;
        }
      }
    }
  }
LAB_01517f40:
  iVar12 = FUN_01515300(0x41200000,&local_c8,param_3,0,param_4 & 1);
  if (iVar12 != 0) {
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 != -1) {
      local_890 = (undefined *)((ulong)local_890 & 0xffffffff00000000);
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((((*puVar5 & 1) != 0) && ((param_4 & 1) == 0)) &&
         (uVar14 = FUN_015182b0(param_1,param_2,param_3,param_2,0), (uVar14 & 1) != 0)) {
        return 1;
      }
    }
    return 3;
  }
  pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x15) & 0x7f0));
  fVar22 = (float)(*param_3 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar18 = *pfVar3 + fVar22 * pfVar3[1];
  fVar22 = pfVar3[2] + fVar22 * pfVar3[3];
  fVar19 = fVar18 * 0.0;
  fVar22 = fVar22 + fVar22;
  fVar23 = fVar18 * (fVar18 + fVar18);
  fVar24 = fVar22 * fVar19;
  fVar22 = fVar18 * fVar22;
  fVar20 = fVar19 * (fVar19 + fVar19);
  fVar21 = ((float)local_e0 * 5.0 + (float)local_d0 * 5.0 + 5.0) * 0.5 +
           (fVar18 * (fVar19 + fVar19) - fVar24) * 0.0 + ((1.0 - fVar23) - fVar20) * 0.0 +
           (fVar22 + fVar20) * 10.0;
  fVar22 = ((float)iStack_dc * 5.0 + (float)iStack_cc * 5.0 + 5.0) * 0.5 +
           (fVar24 + (fVar18 + fVar18) * fVar19) * 0.0 + (fVar20 - fVar22) * 0.0 +
           ((1.0 - fVar20) - fVar23) * 10.0;
  fVar18 = fVar21 + -2.5;
  fVar21 = fVar21 + 2.5;
  fVar19 = fVar22 + -2.5;
  fVar22 = fVar22 + 2.5;
  iVar7 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar16 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar2 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iVar8 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iVar12 = iVar7;
  if (iVar16 <= iVar7) {
    iVar12 = iVar16;
  }
  if (iVar7 <= iVar16) {
    iVar7 = iVar16;
  }
  iVar16 = iVar2;
  if (iVar8 <= iVar2) {
    iVar16 = iVar8;
  }
  if (iVar2 <= iVar8) {
    iVar2 = iVar8;
  }
  *(int *)(param_1 + 0x20) = iVar7;
  *(int *)(param_1 + 0x24) = iVar2;
  lVar15 = *(long *)puVar10;
  *(int *)(param_1 + 0x10) = iVar12;
  *(int *)(param_1 + 0x14) = iVar16;
  if (lVar15 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar12 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar17 + 7) == -0x17df00c3) {
    lVar15 = *(long *)PTR_DAT_04bb59d8;
    iVar7 = *(int *)(lVar15 + 0x50);
    iVar2 = *(int *)(lVar15 + 0x60);
    iVar16 = *(int *)(lVar15 + 100);
    iVar8 = *(int *)(lVar15 + 0x2c);
    iVar12 = iVar7;
    if (iVar2 <= iVar7) {
      iVar12 = iVar2;
    }
    if (iVar7 <= iVar2) {
      iVar7 = iVar2;
    }
    iVar2 = iVar8;
    if (iVar16 <= iVar8) {
      iVar2 = iVar16;
    }
    iVar4 = iVar8;
    if (iVar8 <= iVar16) {
      iVar4 = iVar16;
    }
    if (*(int *)(param_1 + 0x10) < *(int *)(lVar15 + 0x28)) {
      iVar16 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar16 = *(int *)(param_1 + 0x24);
      if (((*(int *)(param_1 + 0x20) <= *(int *)(lVar15 + 0x38)) &&
          (iVar8 <= *(int *)(param_1 + 0x14))) && (iVar16 <= *(int *)(lVar15 + 0x3c))) {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x10) < iVar12) {
      return 4;
    }
    if (iVar7 < *(int *)(param_1 + 0x20)) {
      return 4;
    }
    if (*(int *)(param_1 + 0x14) < iVar2) {
      return 4;
    }
    if (iVar4 < iVar16) {
      return 4;
    }
  }
  return 0;
}

