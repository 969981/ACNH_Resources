
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01515e80(byte *param_1,float *param_2,long param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  short *psVar19;
  undefined8 uVar20;
  float *pfVar21;
  uint uVar22;
  long lVar23;
  uint *puVar24;
  byte bVar25;
  uint *puVar26;
  long *plVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 local_2d8;
  float local_2d0;
  undefined4 local_2cc;
  undefined4 uStack_2c8;
  byte bStack_2c4;
  undefined1 uStack_2c3;
  undefined *local_2c0;
  undefined *puStack_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  uint local_294;
  undefined8 local_290;
  float local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined *local_278;
  undefined8 local_270;
  undefined *local_268;
  int local_260;
  int local_25c;
  undefined *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  byte local_248;
  undefined *local_240;
  undefined *puStack_238;
  int local_230;
  int iStack_22c;
  undefined *local_228;
  int local_220;
  int iStack_21c;
  float local_214 [2];
  float local_20c;
  uint local_208 [4];
  int local_1f8;
  int local_1f4;
  int local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4 [2];
  float local_1cc;
  uint local_1c8 [4];
  int local_1b8;
  int local_1b4;
  int local_1a8;
  int local_1a4;
  uint local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined2 local_178;
  undefined1 uStack_176;
  undefined1 uStack_175;
  int local_174;
  undefined4 uStack_170;
  undefined *local_168;
  undefined *puStack_160;
  int local_158;
  uint local_154;
  undefined *local_150;
  int local_148;
  uint local_144;
  float local_13c;
  float fStack_138;
  float local_134;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  uint local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  uint *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar28 = (uint *)(param_3 + 4);
  fVar32 = (float)NEON_ucvtf(*puVar28);
  fVar32 = fVar32 * 8.381903e-08;
  fVar35 = (float)((long)((float)*param_4 * 90.0 * 11930465.0) & 0xffffffff) * 8.381903e-08;
  if (fVar32 <= 360.0) {
    if (fVar32 < 0.0) {
      fVar38 = fVar32 / 360.0 + -1.0;
      goto LAB_01515f34;
    }
  }
  else {
    fVar38 = fVar32 / 360.0;
LAB_01515f34:
    fVar32 = fVar32 - (float)(int)fVar38 * 360.0;
  }
  if (fVar35 <= 360.0) {
    if (fVar35 < 0.0) {
      fVar38 = fVar35 / 360.0 + -1.0;
      goto LAB_01515f70;
    }
  }
  else {
    fVar38 = fVar35 / 360.0;
LAB_01515f70:
    fVar35 = fVar35 - (float)(int)fVar38 * 360.0;
  }
  if (fVar32 != fVar35) {
    fVar38 = fVar32 - fVar35;
    if (fVar32 <= fVar35) {
      fVar38 = fVar35 - fVar32;
    }
    fVar32 = 360.0 - fVar38;
    if (fVar38 <= 180.0) {
      fVar32 = fVar38;
    }
    fVar35 = -fVar32;
    if (0.0 <= fVar32) {
      fVar35 = fVar32;
    }
    bVar9 = false;
    bVar10 = true;
    if (5.0 <= fVar32) {
      bVar9 = false;
      bVar10 = true;
      if (!NAN(fVar35)) {
        bVar9 = fVar35 == 175.0;
        bVar10 = 175.0 <= fVar35;
      }
    }
    if (!bVar10 || bVar9) {
      return 0;
    }
  }
  lVar23 = *(long *)PTR_DAT_04bb27c0;
  if (lVar23 == 0) {
    return 0;
  }
  uVar30 = *(uint *)(DAT_0520f098 + 0x10);
  if ((((uVar30 == 0) ||
       (plVar27 = *(long **)(*(long *)(*(long *)(lVar23 + 0x1c0) + 8) +
                            ((ulong)(uVar30 >> 0x11) & 0x7ff8)), plVar27 == (long *)0x0)) ||
      ((*(uint *)(plVar27 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar27 + 0x46) != uVar30)) {
    plVar27 = (long *)0x0;
  }
  if ((*(int *)(lVar23 + 0x288) == 1) || (*(int *)(lVar23 + 0x288) == -1)) {
    plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar23 = *(long *)puVar2;
    iVar13 = (**(code **)(*plVar17 + 0x60))();
    if (iVar13 < 0x11) {
      uVar30 = 1;
    }
    else {
      if (4 < *(uint *)(lVar23 + 0x5e8)) goto LAB_01516080;
      uVar30 = 0x1aU >> (ulong)(*(uint *)(lVar23 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01516080:
    uVar30 = 0;
  }
  if (plVar27 == (long *)0x0) {
    return 0;
  }
  lVar23 = plVar27[0x2a];
  if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb7d58);
  }
  uVar18 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb7d50);
  puVar2 = PTR_DAT_04bb2720;
  uVar14 = 0;
  if ((int)lVar23 == 1) {
    uVar14 = uVar30;
  }
  if ((uVar18 & 1) == 0) {
    return 0;
  }
  if (uVar14 == 0) {
    return 0;
  }
  local_250 = 0;
  lVar23 = *(long *)PTR_DAT_04bb2720;
  if (lVar23 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar23 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar13 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar13 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_24c = *(undefined4 *)(puVar31 + 7);
  local_248 = FUN_017baf44();
  puVar6 = PTR_DAT_04bb3140;
  puVar1 = PTR_DAT_04bb2010;
  local_248 = local_248 & 1;
  local_258 = PTR_DAT_04bb3140 + 0x10;
  local_278 = PTR_DAT_04bb2010 + 0x10;
  local_260 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  local_25c = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  switch(*param_4) {
  case 0:
    local_25c = local_25c + 1;
    uVar30 = 0x80000000;
    break;
  case 1:
    local_260 = local_260 + 1;
    uVar30 = 0xc0000000;
    break;
  case 2:
    local_25c = local_25c + -1;
    uVar30 = 0;
    break;
  case 3:
    local_260 = local_260 + -1;
    uVar30 = 0x40000000;
    break;
  default:
    uVar30 = 0;
  }
  local_270 = 0;
  local_268 = local_278;
  psVar19 = (short *)FUN_01a5190c(&local_258,0,&local_268,&local_278);
  local_280 = *(undefined4 *)psVar19;
  local_27c = *(undefined4 *)(psVar19 + 2);
  if (*psVar19 == -2) {
    return 0;
  }
  uVar18 = FUN_0277e294(&local_280);
  plVar17 = (long *)PTR_DAT_04bb43c0;
  if ((uVar18 & 1) == 0) {
    return 0;
  }
  local_f0 = (undefined *)0x0;
  local_100 = PTR_DAT_04bc0510 + 0x10;
  local_f8 = local_280;
  local_f4 = local_27c;
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar14 = FUN_0277d6c4(&local_f8);
  if (*plVar17 == 0) goto LAB_015163b8;
  lVar23 = *(long *)(lVar23 + 0x57e58);
  uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
  if ((uVar14 < *(uint *)(lVar23 + 0x1d8)) &&
     (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
    lVar23 = *(long *)PTR_DAT_04bc0428;
    uVar14 = FUN_0277d6c4(&local_280);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((*(uint *)(lVar23 + 0x1d8) <= uVar14) ||
       (puVar24 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8),
       puVar24 == (uint *)0x0)) goto LAB_015163c4;
    uVar14 = *puVar24;
    uVar22 = 0;
    if (uVar14 == 0) goto LAB_015163c4;
    plVar17 = (long *)PTR_DAT_04bb43c0;
    if (puVar24 != (uint *)(ulong)uVar14) {
      puVar26 = (uint *)((long)puVar24 - (long)(ulong)uVar14);
      uVar22 = 0;
      if (*puVar26 != 0) {
        uVar14 = puVar26[1];
        if ((uVar14 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
          lVar23 = 0xc;
          if (*(char *)((long)puVar26 + 10) != '\0') {
            lVar23 = 0x1c;
          }
          lVar23 = (long)puVar26 + lVar23 + (ulong)(ushort)puVar26[2] * 8;
          if (lVar23 != 0) {
            uVar22 = 0;
            if ((ulong)uVar14 != 0) {
              uVar22 = (uint)((ulong)((long)puVar24 - lVar23) / (ulong)uVar14);
            }
            if (*puVar26 <= uVar22) {
              uVar22 = 0xffffffff;
            }
            if ((uVar22 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar22 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar22 * 2),
               uVar22 < 0x52)) goto LAB_015163d0;
          }
        }
LAB_015163b8:
        uVar22 = 0;
      }
    }
  }
  else {
LAB_015163c4:
    uVar22 = 0;
    plVar17 = (long *)PTR_DAT_04bb43c0;
  }
LAB_015163d0:
  puVar7 = PTR_DAT_04bbc1a0;
  local_198 = (undefined **)CONCAT44(local_198._4_4_,uVar22);
  if (8 < uVar22 - 1) {
    return 0;
  }
  local_288 = 0.0;
  puStack_2b8 = puVar1 + 0x10;
  local_290 = 0;
  local_2c0 = PTR_DAT_04bbc1a0 + 0x10;
  local_2b0 = 0;
  local_2a0 = 0;
  lVar23 = *plVar17;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_f0 = (undefined *)0x0;
  local_f8 = local_280;
  local_f4 = local_27c;
  local_2a8 = puStack_2b8;
  local_294 = uVar30;
  local_100 = puVar1;
  uVar14 = FUN_0277d6c4(&local_f8);
  if (*plVar17 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar23 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar23 = *(long *)PTR_DAT_04bc0428;
      uVar14 = FUN_0277d6c4(&local_280);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if (uVar14 < *(uint *)(lVar23 + 0x1d8)) {
        lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8);
        if (lVar23 != 0) {
          local_f0 = (undefined *)lVar23;
        }
      }
    }
  }
  lVar23 = *plVar17;
  local_188 = (undefined *)0x0;
  local_190 = (undefined **)CONCAT44(local_27c,local_280);
  local_198 = (undefined **)puVar1;
  uVar14 = FUN_0277d6c4(&local_190);
  if (*plVar17 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar23 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar23 = *(long *)PTR_DAT_04bc0428;
      uVar14 = FUN_0277d6c4(&local_280);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if (uVar14 < *(uint *)(lVar23 + 0x1d8)) {
        lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8);
        if (lVar23 != 0) {
          local_188 = (undefined *)lVar23;
        }
      }
    }
  }
  uVar15 = FUN_01ae98d0(&local_198);
  FUN_01afb7fc(&local_100,&local_2c0,uVar15);
  local_2b0 = CONCAT44(local_2b0._4_4_ + local_270._4_4_,(int)local_2b0 + (int)local_270);
  local_2a0 = CONCAT44(local_2a0._4_4_ + local_270._4_4_,(int)local_2a0 + (int)local_270);
  FUN_01511978(&local_290,&local_2c0,param_2,&local_294,1);
  puVar1 = PTR_DAT_04bb2010;
  uStack_2c8 = 0;
  bStack_2c4 = 0;
  uStack_2c3 = 0;
  lVar23 = *(long *)puVar2;
  local_2d8 = 0;
  local_2d0 = 0.0;
  local_2cc._0_2_ = 0;
  local_2cc._2_2_ = 0;
  local_a8 = 0;
  if (lVar23 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar23 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar13 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar13 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_a4 = *(undefined4 *)(puVar31 + 7);
  local_a0 = FUN_017baf44();
  local_b0 = puVar6 + 0x10;
  local_a0 = local_a0 & 1;
  lVar23 = *plVar17;
  local_b8 = (uint *)0x0;
  local_c8 = PTR_DAT_04bc0510 + 0x10;
  local_c0 = local_280;
  uStack_bc = local_27c;
  uVar14 = FUN_0277d6c4(&local_c0);
  if (*plVar17 == 0) {
LAB_015166ec:
    if (local_b8 != (uint *)0x0) goto LAB_015166f4;
LAB_0151677c:
    uVar22 = 0;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((*(uint *)(lVar23 + 0x1d8) <= uVar14) ||
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) goto LAB_015166ec;
    lVar23 = *(long *)PTR_DAT_04bc0428;
    uVar14 = FUN_0277d6c4(&local_280);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((*(uint *)(lVar23 + 0x1d8) <= uVar14) ||
       (puVar24 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8),
       puVar24 == (uint *)0x0)) goto LAB_015166ec;
    local_b8 = puVar24;
LAB_015166f4:
    uVar14 = *local_b8;
    uVar22 = 0;
    if ((uVar14 != 0) && (local_b8 != (uint *)(ulong)uVar14)) {
      puVar24 = (uint *)((long)local_b8 - (long)(ulong)uVar14);
      uVar22 = 0;
      if (*puVar24 != 0) {
        uVar14 = puVar24[1];
        if ((uVar14 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
          lVar23 = 0xc;
          if (*(char *)((long)puVar24 + 10) != '\0') {
            lVar23 = 0x1c;
          }
          lVar23 = (long)puVar24 + lVar23 + (ulong)(ushort)puVar24[2] * 8;
          if (lVar23 != 0) {
            uVar22 = 0;
            if ((ulong)uVar14 != 0) {
              uVar22 = (uint)((ulong)((long)local_b8 - lVar23) / (ulong)uVar14);
            }
            if (*puVar24 <= uVar22) {
              uVar22 = 0xffffffff;
            }
            if ((uVar22 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar22 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar22 * 2),
               uVar22 < 0x52)) goto LAB_01516780;
          }
        }
        goto LAB_0151677c;
      }
    }
  }
LAB_01516780:
  puVar2 = PTR_DAT_04bb32e0;
  if (8 < uVar22 - 1) {
    return 0;
  }
  local_f0 = puVar7 + 0x10;
  puStack_e8 = puVar1 + 0x10;
  bVar25 = *PTR_DAT_04bb32e0;
  local_e0 = DAT_0520ee18;
  uStack_dc = DAT_0520ee1c;
  local_d0 = DAT_0520ee28;
  uStack_cc = DAT_0520ee2c;
  if (7 < bVar25) {
    bVar25 = 0xff;
  }
  local_100 = (undefined *)CONCAT44(local_280,CONCAT31((int3)(uVar22 >> 8),bVar25));
  local_f8 = local_27c;
  local_d8 = puStack_e8;
  uVar18 = FUN_0151393c(&local_100);
  puVar6 = PTR_DAT_04bb6298;
  if ((uVar18 & 1) == 0) {
    return 0;
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    return 0;
  }
  local_198 = (undefined **)((ulong)local_198 & 0xffffffff00000000);
  puVar24 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar24 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar24 & 1) == 0) {
    return 0;
  }
  uStack_104 = FUN_01ae98d0(&local_c8);
  local_108 = uVar30 >> 0x1e;
  uVar18 = FUN_01ae94f0(&local_c8);
  if ((uVar18 & 1) == 0) {
    return 0;
  }
  local_130 = puVar7 + 0x10;
  puStack_128 = puVar1 + 0x10;
  local_120 = 0;
  local_110 = 0;
  local_118 = puStack_128;
  FUN_01afb480(&local_c8,&local_130);
  fVar38 = local_288;
  local_120._0_4_ = (int)local_120 + (int)local_270;
  fVar32 = (float)local_290;
  fVar35 = local_290._4_4_;
  local_110._0_4_ = (int)local_110 + (int)local_270;
  local_120._4_4_ = local_120._4_4_ + local_270._4_4_;
  local_110._4_4_ = local_110._4_4_ + local_270._4_4_;
  fVar34 = fVar38;
  if (local_b8 == (uint *)0x0) {
    local_198 = (undefined **)((ulong)local_198._4_4_ << 0x20);
    goto LAB_01516ab8;
  }
  uVar30 = *local_b8;
  uVar14 = 0;
  if ((uVar30 != 0) && (local_b8 != (uint *)(ulong)uVar30)) {
    puVar24 = (uint *)((long)local_b8 - (long)(ulong)uVar30);
    uVar14 = 0;
    if (*puVar24 != 0) {
      uVar30 = puVar24[1];
      if ((uVar30 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
        lVar23 = 0xc;
        if (*(char *)((long)puVar24 + 10) != '\0') {
          lVar23 = 0x1c;
        }
        lVar23 = (long)puVar24 + lVar23 + (ulong)(ushort)puVar24[2] * 8;
        if (lVar23 != 0) {
          uVar14 = 0;
          if ((ulong)uVar30 != 0) {
            uVar14 = (uint)((ulong)((long)local_b8 - lVar23) / (ulong)uVar30);
          }
          if (*puVar24 <= uVar14) {
            uVar14 = 0xffffffff;
          }
          if ((uVar14 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar14 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar14 * 2),
             uVar14 < 0x52)) goto LAB_0151693c;
        }
      }
      uVar14 = 0;
    }
  }
LAB_0151693c:
  local_198 = (undefined **)CONCAT44(local_198._4_4_,uVar14);
  if (uVar14 == 7) {
    fVar34 = ((float)(int)local_120 * 5.0 + (float)(int)local_110 * 5.0 + 5.0) * 0.5;
    fVar33 = ((float)local_120._4_4_ * 5.0 + (float)local_110._4_4_ * 5.0 + 5.0) * 0.5;
    fVar37 = fVar34 + -2.5;
    fVar36 = fVar33 + -2.5;
    fVar34 = fVar34 + 2.5;
    fVar33 = fVar33 + 2.5;
    if (((((float)local_290 < fVar37) || (fVar34 < (float)local_290)) ||
        (fVar39 = (fVar36 + fVar33) * 0.5, fVar39 < fVar36)) || (fVar33 < fVar39)) {
      fVar39 = (fVar37 + fVar34) * 0.5;
      if (fVar39 < fVar37) {
        return 0;
      }
      if (fVar34 < fVar39) {
        return 0;
      }
      if (local_288 < fVar36) {
        return 0;
      }
      if (fVar33 < local_288) {
        return 0;
      }
    }
    if (local_108 < 4) {
                    /* WARNING: Could not recover jumptable at 0x01516aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = (*(code *)((ulong)(&switchD_01516aa8::switchdataD_04175880)[local_108] * 4 +
                         0x1516aac))();
      return uVar20;
    }
  }
  else {
    uVar30 = *local_b8;
    uVar14 = 0;
    if ((uVar30 != 0) && (local_b8 != (uint *)(ulong)uVar30)) {
      puVar24 = (uint *)((long)local_b8 - (long)(ulong)uVar30);
      uVar14 = 0;
      if (*puVar24 != 0) {
        uVar30 = puVar24[1];
        if ((uVar30 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
          lVar23 = 0xc;
          if (*(char *)((long)puVar24 + 10) != '\0') {
            lVar23 = 0x1c;
          }
          lVar23 = (long)puVar24 + lVar23 + (ulong)(ushort)puVar24[2] * 8;
          if (lVar23 != 0) {
            uVar14 = 0;
            if ((ulong)uVar30 != 0) {
              uVar14 = (uint)((ulong)((long)local_b8 - lVar23) / (ulong)uVar30);
            }
            if (*puVar24 <= uVar14) {
              uVar14 = 0xffffffff;
            }
            if ((uVar14 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar14 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar14 * 2),
               uVar14 < 0x52)) goto LAB_01516abc;
          }
        }
LAB_01516ab8:
        uVar14 = 0;
      }
    }
LAB_01516abc:
    local_198 = (undefined **)CONCAT44(local_198._4_4_,uVar14);
    if (uVar14 == 6) {
      local_198 = (undefined **)(puVar7 + 0x10);
      local_190 = (undefined **)(puVar1 + 0x10);
      local_188 = (undefined *)0x0;
      local_178 = 0;
      uStack_176 = 0;
      uStack_175 = 0;
      local_174 = 0;
      local_168 = PTR_DAT_04bb2e18 + 0x10;
      puStack_160 = (undefined *)0x0;
      local_180 = (undefined *)local_190;
      FUN_01afb1a0(&local_c8,&local_168);
      FUN_0154f570(&local_198,&local_168,&uStack_104,&local_278);
      fVar36 = (float)(int)local_188 * 5.0;
      fVar39 = (float)local_174 * 5.0 + 5.0;
      fVar33 = (float)local_188._4_4_ * 5.0;
      fVar37 = (float)CONCAT13(uStack_175,CONCAT12(uStack_176,local_178)) * 5.0 + 5.0;
      if ((((fVar32 < fVar36) || (fVar37 < fVar32)) ||
          (fVar40 = (fVar33 + fVar39) * 0.5, fVar40 < fVar33)) || (fVar39 < fVar40)) {
        fVar40 = (fVar36 + fVar37) * 0.5;
        if (fVar40 < fVar36) {
          return 0;
        }
        if (fVar37 < fVar40) {
          return 0;
        }
        if (fVar38 < fVar33) {
          return 0;
        }
        if (fVar39 < fVar38) {
          return 0;
        }
      }
      if ((local_108 | 2) == 2) {
        fVar33 = fVar37 + -5.0;
        if ((fVar37 + -5.0 < fVar32) || (fVar33 = fVar36 + 5.0, fVar32 < fVar36 + 5.0))
        goto switchD_01516aa8_caseD_0;
      }
      else {
        fVar34 = fVar39 + -5.0;
        if ((fVar34 < fVar38) || (fVar34 = fVar33 + 5.0, fVar38 < fVar34)) {
          fVar33 = fVar32;
          goto switchD_01516aa8_caseD_0;
        }
      }
    }
  }
  fVar33 = fVar32;
  fVar34 = fVar38;
switchD_01516aa8_caseD_0:
  uVar30 = *puVar28 >> 0x18;
  pfVar21 = (float *)(PTR_DAT_04bb2d00 + (ulong)uVar30 * 0x10);
  fVar32 = (float)(*puVar28 & 0xffffff) * 5.9604645e-08;
  local_13c = fVar33 + (*pfVar21 + fVar32 * pfVar21[1]) * 7.5;
  local_134 = fVar34 + (pfVar21[2] + fVar32 * pfVar21[3]) * 7.5;
  iVar13 = (int)((float)(int)local_13c / 5.0) - (uint)(local_13c < 0.0);
  iVar29 = (int)((float)(int)local_134 / 5.0) - (uint)(local_134 < 0.0);
  bVar11 = (((int)local_120 <= iVar13 && iVar13 <= (int)local_110) && local_120._4_4_ <= iVar29) &&
           SBORROW4(iVar29,local_110._4_4_);
  bVar10 = iVar13 < (int)local_120;
  bVar4 = (int)local_110 < iVar13;
  bVar5 = iVar29 < local_120._4_4_;
  bVar12 = iVar29 != local_110._4_4_;
  bVar8 = (((int)local_120 <= iVar13 && iVar13 <= (int)local_110) && local_120._4_4_ <= iVar29) &&
          iVar29 - local_110._4_4_ < 0;
  bVar9 = bVar8 == bVar11;
  if ((((bVar10 || bVar4) || bVar5) || bVar12) && bVar8 == bVar11) {
    pfVar21 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar30 ^ 0x80) * 0x10);
    local_13c = fVar33 + (*pfVar21 + fVar32 * pfVar21[1]) * 7.5;
    local_134 = fVar34 + (pfVar21[2] + fVar32 * pfVar21[3]) * 7.5;
  }
  fVar38 = local_134;
  fVar32 = local_13c;
  fStack_138 = fVar35 + 0.0;
  lVar23 = FUN_0251e98c(1);
  pfVar21 = (float *)(**(code **)(*(long *)(lVar23 + 0x2a0) + 0xf0))(lVar23 + 0x2a0);
  local_188 = puVar1 + 0x10;
  fVar34 = *pfVar21 * 0.98 * 0.97;
  local_148 = (int)((float)(int)(fVar32 - fVar34) / 5.0) - (uint)(fVar32 - fVar34 < 0.0);
  local_144 = (int)((float)(int)(fVar38 - fVar34) / 5.0) - (uint)(fVar38 - fVar34 < 0.0);
  local_168 = puVar7 + 0x10;
  iVar29 = (int)((float)(int)(fVar32 + fVar34) / 5.0) - (uint)(fVar32 + fVar34 < 0.0);
  iVar13 = local_148;
  if (iVar29 <= local_148) {
    iVar13 = iVar29;
  }
  if (local_148 <= iVar29) {
    local_148 = iVar29;
  }
  uVar14 = (int)((float)(int)(fVar38 + fVar34) / 5.0) - (uint)(fVar38 + fVar34 < 0.0);
  uVar30 = local_144;
  if ((int)uVar14 <= (int)local_144) {
    uVar30 = uVar14;
  }
  if ((int)local_144 <= (int)uVar14) {
    local_144 = uVar14;
  }
  local_198 = &puStack_160;
  local_190 = &local_150;
  uVar14 = local_144 + 1;
  local_180 = (undefined *)CONCAT44(uVar30,iVar13);
  puStack_160 = local_188;
  local_158 = iVar13;
  local_154 = uVar30;
  local_150 = local_188;
  if (uVar14 != uVar30) {
    iVar29 = iVar13;
    do {
      uVar18 = FUN_01512308(&local_188);
      if ((uVar18 & 1) != 0) {
        return 0;
      }
      if (iVar29 < local_148) {
        iVar29 = iVar29 + 1;
      }
      else {
        uVar30 = uVar30 + 1;
        local_180 = (undefined *)((ulong)uVar30 << 0x20);
        iVar29 = local_158;
      }
      local_180 = (undefined *)CONCAT44(local_180._4_4_,iVar29);
    } while ((iVar13 != iVar29) || (uVar14 != uVar30));
  }
  iVar13 = FUN_01ae7550(&local_c8);
  local_198 = (undefined **)CONCAT44(local_198._4_4_,iVar13);
  if ((5 < iVar13 - 1U) || (uVar18 = FUN_01a4ff00(&local_b0,1,&local_168), (uVar18 & 1) != 0)) {
    bVar25 = *puVar2;
    local_178 = 0x101;
    local_174 = 0;
    uStack_170 = 0x10000;
    local_198 = (undefined **)CONCAT44(fVar35 + 0.0,fVar32);
    if (7 < bVar25) {
      bVar25 = 0xff;
    }
    local_188 = (undefined *)CONCAT71(local_188._1_7_,bVar25);
    local_190 = (undefined **)CONCAT44(0x40200000,fVar38);
    uStack_176 = 0;
    local_180 = (undefined *)0xbf80000000000003;
    local_188 = (undefined *)CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,(int)local_188);
    uVar18 = FUN_0251fad0(&local_198,0);
    if ((uVar18 & 1) == 0) {
      local_19c = *puVar28 + 0xa0000000 >> 0x1e;
      uVar18 = FUN_01ae9260(&local_c8);
      if ((uVar18 & 1) == 0) {
        if ((((bVar10 || bVar4) || bVar5) || bVar12) && bVar9) {
          local_19c = *puVar28 + 0x20000000 >> 0x1e;
        }
      }
      else {
        local_19c = FUN_01ae98d0(&local_c8);
        local_1c8[0] = *puVar28 + 0x20000000 >> 0x1e;
        if ((local_19c != local_1c8[0]) &&
           (local_208[0] = *puVar28 + 0xa0000000 >> 0x1e, local_19c != local_208[0])) {
          return 0;
        }
      }
      FUN_012e1de8(0x40200000,local_1c8,&local_13c);
      local_208[0] = *puVar28 ^ 0x80000000;
      fVar35 = (float)local_1b8 * 5.0;
      local_1d4[0] = (fVar35 + (float)local_1a8 * 5.0 + 5.0) * 0.5;
      fVar32 = ((float)local_1b4 * 5.0 + (float)local_1a4 * 5.0 + 5.0) * 0.5;
      local_1cc = fVar32;
      local_1e0 = FUN_015157f4(0x40f00000,local_1d4,local_208);
      local_1dc = fVar32;
      local_1d8 = fVar35;
      if ((((bVar10 || bVar4) || bVar5) || bVar12) && bVar9) {
        local_1e0 = FUN_015157f4(0x40f00000,local_1d4,puVar28);
        local_1dc = fVar32;
        local_1d8 = fVar35;
      }
      FUN_012e1de8(0x3fa00000,local_208,&local_1e0);
      fVar32 = (float)FUN_0097a900(&local_13c,0);
      if (local_1e4 + 1 != local_1f4) {
        bVar9 = (((bVar10 || bVar4) || bVar5) || bVar12) && bVar9;
        bVar10 = false;
        puVar2 = PTR_DAT_04bbc1a0 + 0x10;
        puVar1 = PTR_DAT_04bb2010 + 0x10;
        iVar13 = local_1f4;
        iVar29 = local_1f8;
        do {
          local_214[0] = (float)iVar29 * 5.0 + 2.5;
          local_20c = (float)iVar13 * 5.0 + 2.5;
          sVar3 = *(short *)puVar6;
          if (sVar3 == -1) {
LAB_0151712c:
            local_240 = (undefined *)
                        CONCAT44(local_240._4_4_,
                                 (int)(long)((float)(int)local_19c * 90.0 * 11930465.0));
            uVar18 = FUN_016f02d0(local_214,&local_13c,&local_240);
            if ((uVar18 & 1) != 0) {
              local_240 = puVar2;
              puStack_238 = puVar1;
              local_230 = iVar29;
              iStack_22c = iVar13;
              local_228 = puVar1;
              local_220 = iVar29;
              iStack_21c = iVar13;
              uVar18 = FUN_015158d0(&local_240,0);
              if ((uVar18 & 1) != 0) {
                iVar16 = FUN_01515c00(&local_240,0);
                bVar10 = (bool)(iVar16 == 0 | bVar10);
              }
            }
          }
          else {
            local_240 = (undefined *)((ulong)local_240 & 0xffffffff00000000);
            puVar28 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
            if (0xff < (uint)(int)sVar3) {
              puVar28 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar28 & 1) == 0) goto LAB_0151712c;
            lVar23 = *(long *)PTR_DAT_04bb27c8;
            if (((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
               (*(char *)(lVar23 + 0x11c8) != '\0')) {
              fVar35 = -500.0;
            }
            else {
              fVar35 = (float)FUN_0093a950(lVar23 + 0x28,local_214,0);
            }
            fVar35 = fVar32 - fVar35;
            fVar38 = -fVar35;
            if (0.0 <= fVar35) {
              fVar38 = fVar35;
            }
            if (fVar38 <= 0.1) goto LAB_0151712c;
          }
          if (iVar29 < local_1e8) {
            iVar29 = iVar29 + 1;
          }
          else {
            iVar13 = iVar13 + 1;
            iVar29 = local_1f8;
          }
        } while ((local_1f8 != iVar29) || (local_1e4 + 1 != iVar13));
        if (bVar10) {
          fVar32 = (float)FUN_0097a900(&local_13c,0);
          local_2d8 = CONCAT44(fStack_138,local_13c);
          local_2d0 = local_134;
          fVar35 = (float)FUN_01ae8db0(&local_c8);
          uStack_2c8 = (undefined4)(long)((float)(int)local_19c * 90.0 * 11930465.0);
          local_2cc = fVar32 + fVar35;
          bStack_2c4 = FUN_01ae9310(&local_c8);
          bStack_2c4 = bStack_2c4 & 1;
          bVar25 = *param_1;
          bVar10 = 7 < bVar25;
          if (bVar10) {
            bVar25 = 0xff;
          }
          puVar28 = (uint *)((long)plVar27 + 0x274) + ((long)(char)bVar25 & 0xffffffffU) * 2;
          if (bVar10) {
            puVar28 = (uint *)((long)plVar27 + 0x274);
          }
          if (*puVar28 < 10) {
            *puVar28 = *puVar28 + 1;
            *(undefined1 *)(puVar28 + 1) = 1;
            return 0;
          }
          uStack_2c3 = bVar9;
          FUN_02522f34(fVar32 + fVar35,param_1,&local_2d8,&uStack_2c8,bStack_2c4,bVar9);
          return 1;
        }
      }
    }
  }
  return 0;
}

