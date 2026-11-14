
bool FUN_0150fac0(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  uint *puVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  long local_128;
  undefined8 local_120;
  float local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined *local_108;
  int local_100;
  int iStack_fc;
  undefined *local_f8;
  int local_f0;
  int iStack_ec;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  int local_74;
  
  puVar5 = PTR_DAT_04bb2720;
  local_98 = 0;
  local_a0 = PTR_DAT_04bbfe68 + 0x10;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar7 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  local_94 = *(undefined4 *)(puVar18 + 7);
  local_90 = FUN_017baf44();
  local_90 = local_90 & 1;
  local_a0 = PTR_DAT_04bb3140 + 0x10;
  uVar11 = FUN_014ffb14(&local_a0);
  if ((uVar11 & 1) == 0) {
    return false;
  }
  pfVar12 = (float *)FUN_0251b3b0(param_2,0);
  lVar16 = FUN_0251bdc4(param_2,0);
  puVar4 = PTR_DAT_04bb2010;
  if (pfVar12 == (float *)0x0) {
    return false;
  }
  if (lVar16 == 0) {
    return false;
  }
  fVar24 = *pfVar12;
  fVar23 = pfVar12[2];
  iVar7 = *(int *)(lVar16 + 4);
  uVar8 = iVar7 + 0xa0000000U >> 0x1e;
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar8);
  local_a8 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  iStack_a4 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  local_d0 = PTR_DAT_04bb2010 + 0x10;
  local_c8 = 0;
  local_b8 = 0;
  local_74 = uVar8 + 2;
  if (2 < uVar8 - 1) {
    local_74 = 2;
  }
  local_b0 = local_d0;
  FUN_01508594(&local_d8,&local_74);
  if (fVar24 < (float)(int)local_c8 * 5.0) {
    return false;
  }
  if ((float)(int)local_b8 * 5.0 + 5.0 <= fVar24) {
    return false;
  }
  if (fVar23 < (float)local_c8._4_4_ * 5.0) {
    return false;
  }
  if ((float)local_b8._4_4_ * 5.0 + 5.0 <= fVar23) {
    return false;
  }
  puVar1 = puVar4 + 0x10;
  local_e0 = 0;
  local_e8 = puVar1;
  uVar11 = FUN_01500c60(&local_e8,&local_b0,local_74);
  if ((uVar11 & 1) == 0) {
    return false;
  }
  uVar11 = 0;
  bVar6 = true;
  while( true ) {
    iVar10 = (&DAT_041758e0)[uVar11];
    local_100 = (int)local_e0 + iVar10;
    iStack_ec = local_e0._4_4_;
    iStack_fc = local_e0._4_4_;
    local_108 = puVar1;
    local_f8 = puVar1;
    local_f0 = local_100;
    FUN_01a5033c(&local_110,&local_a0,local_74,&local_f8,&local_108);
    uVar13 = FUN_0277e294(&local_110);
    if ((uVar13 & 1) != 0) break;
    puVar2 = puVar4 + 0x10;
    local_100 = (int)local_e0 + iVar10;
    iStack_fc = local_e0._4_4_ + -1;
    local_108 = puVar2;
    local_f8 = puVar2;
    local_f0 = local_100;
    iStack_ec = iStack_fc;
    FUN_01a5033c(&local_110,&local_a0,local_74,&local_f8,&local_108);
    uVar13 = FUN_0277e294(&local_110);
    if ((uVar13 & 1) != 0) break;
    local_100 = (int)local_e0 + iVar10;
    iStack_fc = local_e0._4_4_ + -2;
    local_108 = puVar2;
    local_f8 = puVar2;
    local_f0 = local_100;
    iStack_ec = iStack_fc;
    FUN_01a5033c(&local_110,&local_a0,local_74,&local_f8,&local_108);
    uVar13 = FUN_0277e294(&local_110);
    if ((uVar13 & 1) != 0) break;
    puVar2 = puVar4 + 0x10;
    local_100 = (int)local_e0 + iVar10;
    iStack_fc = local_e0._4_4_ + -3;
    local_108 = puVar2;
    local_f8 = puVar2;
    local_f0 = local_100;
    iStack_ec = iStack_fc;
    FUN_01a5033c(&local_110,&local_a0,local_74,&local_f8,&local_108);
    uVar13 = FUN_0277e294(&local_110);
    if ((uVar13 & 1) != 0) break;
    local_100 = (int)local_e0 + iVar10;
    iStack_fc = local_e0._4_4_ + -4;
    local_108 = puVar2;
    local_f8 = puVar2;
    local_f0 = local_100;
    iStack_ec = iStack_fc;
    FUN_01a5033c(&local_110,&local_a0,local_74,&local_f8,&local_108);
    uVar13 = FUN_0277e294(&local_110);
    if ((uVar13 & 1) != 0) break;
    puVar2 = puVar4 + 0x10;
    local_100 = (int)local_e0 + iVar10;
    iStack_fc = local_e0._4_4_ + -5;
    local_108 = puVar2;
    local_f8 = puVar2;
    local_f0 = local_100;
    iStack_ec = iStack_fc;
    FUN_01a5033c(&local_110,&local_a0,local_74,&local_f8,&local_108);
    uVar13 = FUN_0277e294(&local_110);
    if ((uVar13 & 1) != 0) break;
    local_100 = (int)local_e0 + iVar10;
    iStack_fc = local_e0._4_4_ + -6;
    local_108 = puVar2;
    local_f8 = puVar2;
    local_f0 = local_100;
    iStack_ec = iStack_fc;
    FUN_01a5033c(&local_110,&local_a0,local_74,&local_f8,&local_108);
    uVar13 = FUN_0277e294(&local_110);
    if ((uVar13 & 1) != 0) break;
    local_108 = puVar4 + 0x10;
    local_100 = (int)local_e0 + iVar10;
    iStack_fc = local_e0._4_4_ + -7;
    local_f8 = local_108;
    local_f0 = local_100;
    iStack_ec = iStack_fc;
    FUN_01a5033c(&local_110,&local_a0,local_74,&local_f8,&local_108);
    uVar13 = FUN_0277e294(&local_110);
    if ((uVar13 & 1) != 0) break;
    bVar6 = uVar11 < 4;
    uVar11 = uVar11 + 1;
    if (uVar11 == 5) {
      return bVar6;
    }
  }
  puVar1 = PTR_DAT_04bb43c0;
  local_118 = 0.0;
  local_120 = 0;
  local_d0 = puVar4 + 0x10;
  local_b8 = 0;
  local_c8 = 0;
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  local_138 = PTR_DAT_04bc0510 + 0x10;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  local_130 = local_110;
  uStack_12c = uStack_10c;
  local_128 = 0;
  local_c0 = local_d0;
  uVar8 = FUN_0277d6c4(&local_130);
  if (*(long *)puVar1 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(&local_110);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar8 < *(uint *)(lVar16 + 0x1d8)) {
        lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar16 != 0) {
          local_128 = lVar16;
        }
      }
    }
  }
  FUN_01afb480(&local_138,&local_d8);
  iVar10 = local_74;
  local_c8._0_4_ = (int)local_c8 + local_f0;
  local_b8._0_4_ = (int)local_b8 + local_f0;
  local_b8._4_4_ = local_b8._4_4_ + iStack_ec;
  local_c8._4_4_ = local_c8._4_4_ + iStack_ec;
  lVar16 = *(long *)puVar5;
  fVar24 = 0.5;
  fVar23 = ((float)local_c8._4_4_ * 5.0 + (float)local_b8._4_4_ * 5.0 + 5.0) * 0.5;
  local_120 = CONCAT44(local_120._4_4_,
                       ((float)(int)local_c8 * 5.0 + (float)(int)local_b8 * 5.0 + 5.0) * 0.5);
  local_118 = fVar23;
  if (lVar16 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar9 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  uVar19 = FUN_0153e6b0(&local_120,iVar10,*(undefined4 *)(puVar18 + 7));
  local_120 = CONCAT44(fVar23,uVar19);
  local_118 = fVar24;
  puVar14 = (uint *)FUN_014fbd50(&local_a0,local_74,&local_f8);
  puVar5 = PTR_DAT_04bb27c0;
  uVar8 = *puVar14;
  if (uVar8 == 0) goto LAB_01510238;
  lVar16 = *(long *)PTR_DAT_04bb27c0;
  if (lVar16 == 0) goto LAB_01510238;
  plVar17 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8))
  ;
  if (((plVar17 == (long *)0x0) || ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar17 + 0x46) != uVar8)) {
    plVar17 = (long *)0x0;
  }
  if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
    plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar16 = *(long *)puVar5;
    iVar10 = (**(code **)(*plVar15 + 0x60))();
    if (iVar10 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_015101c8;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_015101c8:
    uVar8 = 0;
  }
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[0x2a];
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar11 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb5920);
    uVar3 = 0;
    if ((int)lVar16 == 1) {
      uVar3 = uVar8;
    }
    if (((uVar11 & 1) == 0) || (uVar3 == 0)) {
      fVar23 = local_120._4_4_;
    }
    else {
      lVar16 = plVar17[0xd];
      local_118 = *(float *)(lVar16 + 0x280);
      local_120 = (ulong)*(uint *)(lVar16 + 0x278);
      fVar23 = *(float *)(lVar16 + 0x27c);
    }
  }
LAB_01510238:
  puVar5 = PTR_DAT_04bb2d00;
  uVar11 = (ulong)((float)((int)(long)((float)(iVar7 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0) +
                           0xa0000000U >> 0x1e) * 90.0 * 11930465.0);
  *param_1 = local_110;
  param_1[1] = uStack_10c;
  pfVar12 = (float *)(puVar5 + (uVar11 >> 0x18 & 0xff) * 0x10);
  param_1[6] = local_74;
  fVar20 = (float)((uint)uVar11 & 0xffffff) * 5.9604645e-08;
  param_1[4] = local_100;
  param_1[5] = iStack_fc;
  fVar21 = pfVar12[2];
  fVar22 = pfVar12[3];
  fVar24 = fVar23 + -2.5;
  if (fVar23 + -15.0 <= 0.0) {
    fVar24 = fVar23;
  }
  param_1[7] = (*pfVar12 + fVar20 * pfVar12[1]) * 3.0 + (float)local_120;
  param_1[8] = fVar24 + 0.0;
  param_1[9] = (fVar21 + fVar20 * fVar22) * 3.0 + local_118;
  return bVar6;
}

