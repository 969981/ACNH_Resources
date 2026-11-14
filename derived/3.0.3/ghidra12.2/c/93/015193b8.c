
undefined4 FUN_015193b8(long param_1,float *param_2,int *param_3,uint param_4)

{
  float *pfVar1;
  undefined *puVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  void *__s;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  uint *puVar17;
  ushort uVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_8a0;
  undefined *puStack_898;
  undefined8 local_890;
  undefined *local_888;
  undefined8 local_880;
  uint local_144;
  uint local_140;
  uint local_13c;
  int local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined *local_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  byte local_108;
  undefined *local_100;
  undefined *puStack_f8;
  int local_f0;
  int iStack_ec;
  undefined *local_e8;
  int local_e0;
  int iStack_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint *local_b8;
  int local_94;
  
  puVar11 = PTR_DAT_04bbc1a0;
  puVar10 = PTR_DAT_04bb2720;
  puVar9 = PTR_DAT_04bb2010;
  local_d8 = *(undefined8 *)param_2;
  local_d0 = param_2[2];
  local_110 = 0;
  local_100 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_e0 = (int)((float)(int)((float)local_d8 + -2.5) / 5.0) -
             (uint)((float)local_d8 + -2.5 < 0.0);
  iStack_dc = (int)((float)(int)(local_d0 + -2.5) / 5.0) - (uint)(local_d0 + -2.5 < 0.0);
  iVar12 = (int)((float)(int)((float)local_d8 + 2.5) / 5.0) - (uint)((float)local_d8 + 2.5 < 0.0);
  iVar5 = (int)((float)(int)(local_d0 + 2.5) / 5.0) - (uint)(local_d0 + 2.5 < 0.0);
  local_f0 = local_e0;
  if (iVar12 <= local_e0) {
    local_f0 = iVar12;
  }
  if (local_e0 <= iVar12) {
    local_e0 = iVar12;
  }
  iStack_ec = iStack_dc;
  if (iVar5 <= iStack_dc) {
    iStack_ec = iVar5;
  }
  if (iStack_dc <= iVar5) {
    iStack_dc = iVar5;
  }
  lVar16 = *(long *)PTR_DAT_04bb2720;
  puStack_f8 = puVar2;
  local_e8 = puVar2;
  if (lVar16 == 0) {
    puVar19 = &DAT_055c04a0;
  }
  else {
    puVar19 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar12 = FUN_006bd550(*puVar19,0);
      puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar19 = &DAT_055c04a0;
      }
    }
  }
  local_10c = *(undefined4 *)(puVar19 + 7);
  local_108 = FUN_017baf44();
  local_108 = local_108 & 1;
  puStack_118 = PTR_DAT_04bb3140 + 0x10;
  local_120 = 0;
  local_128 = puVar2;
  FUN_01a5033c(&local_130,&puStack_118,0,&puStack_f8,&local_128);
  if ((short)local_130 == -2) {
    return 6;
  }
  lVar16 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar16 != 0) && (*(long *)(lVar16 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar16 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar16 + 0x488) != 0 && (*(long *)(*(long *)(lVar16 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar16 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar16 + 0x2b0) + 8) != 0)))))) {
    uVar13 = FUN_0277d6c4(&local_130);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      FUN_0124c030(&local_8a0,&local_130);
      iVar12 = FUN_0123db50(&puStack_898,local_890);
      if ((iVar12 - 2U & 0xfffffff9) == 0) {
        local_8a0 = PTR_DAT_04bbfe60 + 0x10;
        memset(&puStack_898,0,0x754);
        uVar13 = nn::os::GetSystemTick();
        local_144 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
        local_140 = (local_144 ^ local_144 >> 0x1e) * 0x6c078965 + 2;
        local_13c = (local_140 ^ local_140 >> 0x1e) * 0x6c078965 + 3;
        local_138 = (local_13c ^ local_13c >> 0x1e) * 0x6c078965 + 4;
        __s = (void *)(**(code **)(local_8a0 + 0x18))(&local_8a0);
        memset(__s,0,0x754);
        local_c0 = &local_94;
        local_94 = 3;
        local_c8 = &PTR_FUN_049ff560;
        FUN_008a1ba0(&local_8a0,&local_c8);
        FUN_00889f80(&local_c8,&local_8a0,1);
        local_130 = (undefined4)local_c8;
        uStack_12c = local_c8._4_4_;
      }
    }
  }
  puVar2 = PTR_DAT_04bb43c0;
  local_b8 = (uint *)0x0;
  local_c8 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_c0 = (int *)CONCAT44(uStack_12c,local_130);
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar13 = FUN_0277d6c4(&local_c0);
  if (*(long *)puVar2 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar13 = FUN_0277d6c4(&local_130);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar13 < *(uint *)(lVar16 + 0x1d8)) {
        puVar17 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8);
        if (puVar17 != (uint *)0x0) {
          local_b8 = puVar17;
        }
      }
    }
  }
  iVar12 = FUN_01ae98d0(&local_c8);
  local_8a0 = (undefined *)CONCAT44(local_8a0._4_4_,1);
  local_94 = FUN_01aee3b4(&local_c8);
  if (local_94 == (int)local_8a0) {
    local_8a0 = puVar11 + 0x10;
    puStack_898 = puVar9 + 0x10;
    local_890 = 0;
    local_880 = 0;
    local_888 = puStack_898;
    FUN_01afb480(&local_c8,&local_8a0);
    local_890._0_4_ = (int)local_890 + (int)local_120;
    local_880._0_4_ = (int)local_880 + (int)local_120;
    local_890._4_4_ = local_890._4_4_ + local_120._4_4_;
    local_880._4_4_ = local_880._4_4_ + local_120._4_4_;
    fVar21 = ((float)(int)local_890 * 5.0 + (float)(int)local_880 * 5.0 + 5.0) * 0.5;
    fVar22 = ((float)local_890._4_4_ * 5.0 + (float)local_880._4_4_ * 5.0 + 5.0) * 0.5;
    fVar23 = *param_2 - fVar21;
    fVar24 = param_2[2] - fVar22;
    local_94 = FUN_01ae98d0(&local_c8);
    switch(local_94) {
    case 0:
    case 2:
      fVar24 = 0.0;
      break;
    case 1:
    case 3:
      fVar23 = 0.0;
    }
    if (2.4 <= SQRT(fVar24 * fVar24 + fVar23 * fVar23)) {
      fVar20 = SQRT(fVar23 * fVar23 + 0.0 + fVar24 * fVar24);
      if (0.0 < fVar20) {
        fVar20 = 5.0 / fVar20;
        fVar23 = fVar23 * fVar20;
        fVar24 = fVar24 * fVar20;
      }
      fVar21 = fVar21 + fVar23;
      local_d0 = fVar22 + fVar24;
      local_d8 = CONCAT44(0x7fc00000,fVar21);
      local_e0 = (int)((float)(int)(fVar21 + -2.5) / 5.0) - (uint)(fVar21 + -2.5 < 0.0);
      iStack_dc = (int)((float)(int)(local_d0 + -2.5) / 5.0) - (uint)(local_d0 + -2.5 < 0.0);
      iVar5 = (int)((float)(int)(fVar21 + 2.5) / 5.0) - (uint)(fVar21 + 2.5 < 0.0);
      iVar6 = (int)((float)(int)(local_d0 + 2.5) / 5.0) - (uint)(local_d0 + 2.5 < 0.0);
      local_f0 = local_e0;
      if (iVar5 <= local_e0) {
        local_f0 = iVar5;
      }
      if (local_e0 <= iVar5) {
        local_e0 = iVar5;
      }
      iStack_ec = iStack_dc;
      if (iVar6 <= iStack_dc) {
        iStack_ec = iVar6;
      }
      if (iStack_dc <= iVar6) {
        iStack_dc = iVar6;
      }
    }
  }
  if (local_b8 != (uint *)0x0) {
    uVar13 = *local_b8;
    uVar18 = 0;
    if ((uVar13 == 0) || (local_b8 == (uint *)(ulong)uVar13)) goto LAB_01519a3c;
    puVar17 = (uint *)((long)local_b8 - (long)(ulong)uVar13);
    uVar18 = 0;
    if (*puVar17 == 0) goto LAB_01519a3c;
    uVar13 = puVar17[1];
    if ((uVar13 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
      lVar16 = 0xc;
      if (*(char *)((long)puVar17 + 10) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
      if (lVar16 != 0) {
        uVar3 = 0;
        if ((ulong)uVar13 != 0) {
          uVar3 = (uint)((ulong)((long)local_b8 - lVar16) / (ulong)uVar13);
        }
        if (*puVar17 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
           (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
           uVar18 < 0x52)) goto LAB_01519a3c;
      }
    }
  }
  uVar18 = 0;
LAB_01519a3c:
  uVar15 = 2;
  switch(uVar18) {
  case 1:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar15 = 5;
    break;
  default:
    local_8a0._0_4_ = DAT_0520e360 + *param_3;
    iVar12 = FUN_01515300(0x41200000,&local_d8,&local_8a0,0,param_4 & 1);
    if (iVar12 == 0) {
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)((uint)(DAT_0520e360 + *param_3) >> 0x19) * 0x10)
      ;
      fVar21 = (float)((uint)(DAT_0520e360 + *param_3) >> 1 & 0xffffff) * 5.9604645e-08;
      fVar23 = *pfVar1 + fVar21 * pfVar1[1];
      fVar21 = pfVar1[2] + fVar21 * pfVar1[3];
      fVar24 = fVar23 * 0.0;
      fVar21 = fVar21 + fVar21;
      fVar25 = fVar23 * (fVar23 + fVar23);
      fVar26 = fVar21 * fVar24;
      fVar21 = fVar23 * fVar21;
      fVar20 = fVar24 * (fVar24 + fVar24);
      fVar22 = ((float)local_f0 * 5.0 + (float)local_e0 * 5.0 + 5.0) * 0.5 +
               (fVar23 * (fVar24 + fVar24) - fVar26) * 0.0 + ((1.0 - fVar25) - fVar20) * 0.0 +
               (fVar21 + fVar20) * 10.0;
      fVar21 = ((float)iStack_ec * 5.0 + (float)iStack_dc * 5.0 + 5.0) * 0.5 +
               (fVar26 + (fVar23 + fVar23) * fVar24) * 0.0 + (fVar20 - fVar21) * 0.0 +
               ((1.0 - fVar20) - fVar25) * 10.0;
      fVar23 = fVar22 + -2.5;
      fVar22 = fVar22 + 2.5;
      fVar24 = fVar21 + -2.5;
      fVar21 = fVar21 + 2.5;
      iVar5 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
      iVar7 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
      iVar6 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
      iVar8 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
      iVar12 = iVar5;
      if (iVar7 <= iVar5) {
        iVar12 = iVar7;
      }
      if (iVar5 <= iVar7) {
        iVar5 = iVar7;
      }
      iVar7 = iVar6;
      if (iVar8 <= iVar6) {
        iVar7 = iVar8;
      }
      if (iVar6 <= iVar8) {
        iVar6 = iVar8;
      }
      *(int *)(param_1 + 0x20) = iVar5;
      *(int *)(param_1 + 0x24) = iVar6;
      lVar16 = *(long *)puVar10;
      *(int *)(param_1 + 0x10) = iVar12;
      *(int *)(param_1 + 0x14) = iVar7;
      if (lVar16 == 0) {
        puVar19 = &DAT_055c04a0;
      }
      else {
        puVar19 = &DAT_055c04a0;
        if (*(long *)(lVar16 + 0x330) != 0) {
          puVar19 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
          iVar12 = FUN_006bd550(*puVar19,0);
          puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar12 != 0x758f7eaf) {
            puVar19 = &DAT_055c04a0;
          }
        }
      }
      if ((*(int *)(puVar19 + 7) == -0x17df00c3) &&
         (uVar14 = FUN_03782a40(param_1), (uVar14 & 1) == 0)) {
        uVar15 = 4;
      }
      else {
        uVar15 = 0;
      }
    }
    else {
      sVar4 = *(short *)PTR_DAT_04bb6298;
      if (sVar4 != -1) {
        local_8a0 = (undefined *)((ulong)local_8a0._4_4_ << 0x20);
        puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar17 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((((*puVar17 & 1) != 0) && ((param_4 & 1) == 0)) &&
           (uVar14 = FUN_01ae9260(&local_c8), (uVar14 & 1) == 0)) {
          local_8a0 = (undefined *)CONCAT44(local_8a0._4_4_,DAT_0520e360 + *param_3);
          uVar14 = FUN_015182b0(param_1,&local_d8,&local_8a0,param_2,0);
          if ((uVar14 & 1) != 0) {
            return 1;
          }
        }
      }
      uVar15 = 3;
    }
    break;
  case 3:
    break;
  case 4:
    uVar15 = 5;
    if (*param_3 + 0x20000000U >> 0x1e !=
        (int)(long)((float)iVar12 * 90.0 * 11930465.0) + 0x20000000U >> 0x1e) {
      uVar15 = 2;
    }
  }
  return uVar15;
}

