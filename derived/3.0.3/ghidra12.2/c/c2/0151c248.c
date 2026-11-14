
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0151c248(byte *param_1,float *param_2,long param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  int iVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  short *psVar23;
  undefined8 uVar24;
  uint uVar25;
  long lVar26;
  uint *puVar27;
  byte bVar28;
  uint *puVar29;
  long *plVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulong local_1f0;
  float local_1e8;
  float local_1e4;
  uint uStack_1e0;
  undefined1 uStack_1dc;
  undefined *local_1d8;
  undefined *puStack_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined *local_190;
  undefined8 local_188;
  undefined *local_180;
  int local_178;
  int local_174;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  byte local_160;
  uint local_154;
  ulong local_150;
  float local_148;
  undefined8 *local_140;
  undefined **ppuStack_138;
  undefined *local_130;
  int local_128;
  int local_124;
  ulong local_120;
  float local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  int local_f0;
  int local_ec;
  undefined *local_e8;
  uint local_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  
  puVar8 = PTR_DAT_04bb27c0;
  fVar32 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 4));
  fVar32 = fVar32 * 8.381903e-08;
  fVar33 = (float)((long)((float)*param_4 * 90.0 * 11930465.0) & 0xffffffff) * 8.381903e-08;
  if (fVar32 <= 360.0) {
    if (fVar32 < 0.0) {
      fVar36 = fVar32 / 360.0 + -1.0;
      goto LAB_0151c2fc;
    }
  }
  else {
    fVar36 = fVar32 / 360.0;
LAB_0151c2fc:
    fVar32 = fVar32 - (float)(int)fVar36 * 360.0;
  }
  if (fVar33 <= 360.0) {
    if (fVar33 < 0.0) {
      fVar36 = fVar33 / 360.0 + -1.0;
      goto LAB_0151c338;
    }
  }
  else {
    fVar36 = fVar33 / 360.0;
LAB_0151c338:
    fVar33 = fVar33 - (float)(int)fVar36 * 360.0;
  }
  if (fVar32 != fVar33) {
    fVar36 = fVar32 - fVar33;
    if (fVar32 <= fVar33) {
      fVar36 = fVar33 - fVar32;
    }
    fVar32 = 360.0 - fVar36;
    if (fVar36 <= 180.0) {
      fVar32 = fVar36;
    }
    fVar33 = -fVar32;
    if (0.0 <= fVar32) {
      fVar33 = fVar32;
    }
    bVar12 = false;
    bVar13 = true;
    if (5.0 <= fVar32) {
      bVar12 = false;
      bVar13 = true;
      if (!NAN(fVar33)) {
        bVar12 = fVar33 == 175.0;
        bVar13 = 175.0 <= fVar33;
      }
    }
    if (!bVar13 || bVar12) {
      return 0;
    }
  }
  lVar26 = *(long *)PTR_DAT_04bb27c0;
  if (lVar26 == 0) {
    return 0;
  }
  uVar20 = *(uint *)(DAT_0520f098 + 0x10);
  if ((((uVar20 == 0) ||
       (plVar30 = *(long **)(*(long *)(*(long *)(lVar26 + 0x1c0) + 8) +
                            ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
      ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar30 + 0x46) != uVar20)) {
    plVar30 = (long *)0x0;
  }
  if ((*(int *)(lVar26 + 0x288) == 1) || (*(int *)(lVar26 + 0x288) == -1)) {
    plVar21 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar26 = *(long *)puVar8;
    iVar16 = (**(code **)(*plVar21 + 0x60))();
    if (iVar16 < 0x11) {
      uVar20 = 1;
    }
    else {
      if (4 < *(uint *)(lVar26 + 0x5e8)) goto LAB_0151c448;
      uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar26 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0151c448:
    uVar20 = 0;
  }
  if (plVar30 == (long *)0x0) {
    return 0;
  }
  lVar26 = plVar30[0x2a];
  if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar16 != 0)) {
    *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb7d58);
  }
  uVar22 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb7d50);
  uVar17 = 0;
  if ((int)lVar26 == 1) {
    uVar17 = uVar20;
  }
  if ((uVar22 & 1) == 0) {
    return 0;
  }
  if (uVar17 == 0) {
    return 0;
  }
  local_168 = 0;
  lVar26 = *(long *)PTR_DAT_04bb2720;
  if (lVar26 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar26 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
      iVar16 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar16 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_164 = *(undefined4 *)(puVar31 + 7);
  local_160 = FUN_017baf44();
  puVar8 = PTR_DAT_04bb2010;
  local_160 = local_160 & 1;
  local_170 = PTR_DAT_04bb3140 + 0x10;
  local_190 = PTR_DAT_04bb2010 + 0x10;
  local_178 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  local_174 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  switch(*param_4) {
  case 0:
    local_174 = local_174 + 1;
    uVar20 = 0x80000000;
    break;
  case 1:
    local_178 = local_178 + 1;
    uVar20 = 0xc0000000;
    break;
  case 2:
    local_174 = local_174 + -1;
    uVar20 = 0;
    break;
  case 3:
    local_178 = local_178 + -1;
    uVar20 = 0x40000000;
    break;
  default:
    uVar20 = 0;
  }
  local_188 = 0;
  local_180 = local_190;
  psVar23 = (short *)FUN_01a5190c(&local_170,0,&local_180,&local_190);
  local_198 = *(undefined4 *)psVar23;
  local_194 = *(undefined4 *)(psVar23 + 2);
  if (*psVar23 == -2) {
    return 0;
  }
  uVar22 = FUN_0277e294(&local_198);
  puVar9 = PTR_DAT_04bc0510;
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar22 & 1) == 0) {
    return 0;
  }
  local_100 = (undefined *)0x0;
  local_110 = PTR_DAT_04bc0510 + 0x10;
  local_108 = (undefined *)CONCAT44(local_194,local_198);
  lVar26 = *(long *)PTR_DAT_04bb43c0;
  uVar17 = FUN_0277d6c4(&local_108);
  if (*(long *)puVar2 == 0) {
LAB_0151c770:
    uVar25 = 0;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((*(uint *)(lVar26 + 0x1d8) <= uVar17) ||
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar17 * 8) == 0)) goto LAB_0151c770;
    lVar26 = *(long *)PTR_DAT_04bc0428;
    uVar17 = FUN_0277d6c4(&local_198);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((*(uint *)(lVar26 + 0x1d8) <= uVar17) ||
       (puVar27 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar17 * 8),
       puVar27 == (uint *)0x0)) goto LAB_0151c770;
    uVar17 = *puVar27;
    uVar25 = 0;
    if ((uVar17 != 0) && (puVar27 != (uint *)(ulong)uVar17)) {
      puVar29 = (uint *)((long)puVar27 - (long)(ulong)uVar17);
      uVar25 = 0;
      if (*puVar29 != 0) {
        uVar17 = puVar29[1];
        if ((uVar17 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
          lVar26 = 0xc;
          if (*(char *)((long)puVar29 + 10) != '\0') {
            lVar26 = 0x1c;
          }
          lVar26 = (long)puVar29 + lVar26 + (ulong)(ushort)puVar29[2] * 8;
          if (lVar26 != 0) {
            uVar25 = 0;
            if ((ulong)uVar17 != 0) {
              uVar25 = (uint)((ulong)((long)puVar27 - lVar26) / (ulong)uVar17);
            }
            if (*puVar29 <= uVar25) {
              uVar25 = 0xffffffff;
            }
            if ((uVar25 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar25 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar25 * 2),
               uVar25 < 0x52)) goto LAB_0151c774;
          }
        }
        goto LAB_0151c770;
      }
    }
  }
LAB_0151c774:
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar25);
  if ((uVar25 & 0xfffffffe) != 10) {
    return 0;
  }
  local_1a0 = 0;
  puStack_1d0 = puVar8 + 0x10;
  local_1a8 = 0;
  puVar1 = puVar9 + 0x10;
  lVar26 = *(long *)puVar2;
  local_1d8 = PTR_DAT_04bbc1a0 + 0x10;
  local_1b8 = 0;
  local_1c8 = 0;
  local_100 = (undefined *)0x0;
  local_108 = (undefined *)CONCAT44(local_194,local_198);
  local_1c0 = puStack_1d0;
  local_1ac = uVar20;
  local_110 = puVar1;
  uVar17 = FUN_0277d6c4(&local_108);
  if (*(long *)puVar2 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar17 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
      lVar26 = *(long *)PTR_DAT_04bc0428;
      uVar17 = FUN_0277d6c4(&local_198);
      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if (uVar17 < *(uint *)(lVar26 + 0x1d8)) {
        lVar26 = *(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar17 * 8);
        if (lVar26 != 0) {
          local_100 = (undefined *)lVar26;
        }
      }
    }
  }
  lVar26 = *(long *)puVar2;
  local_c8 = 0;
  local_d0 = (undefined *)CONCAT44(local_194,local_198);
  local_d8 = puVar1;
  uVar17 = FUN_0277d6c4(&local_d0);
  if (*(long *)puVar2 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar17 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
      lVar26 = *(long *)PTR_DAT_04bc0428;
      uVar17 = FUN_0277d6c4(&local_198);
      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if (uVar17 < *(uint *)(lVar26 + 0x1d8)) {
        lVar26 = *(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar17 * 8);
        if (lVar26 != 0) {
          local_c8 = lVar26;
        }
      }
    }
  }
  uVar18 = FUN_01ae98d0(&local_d8);
  FUN_01afb7fc(&local_110,&local_1d8,uVar18);
  local_1c8 = CONCAT44(local_1c8._4_4_ + local_188._4_4_,(int)local_1c8 + (int)local_188);
  local_1b8 = CONCAT44(local_1b8._4_4_ + local_188._4_4_,(int)local_1b8 + (int)local_188);
  FUN_01511978(&local_1a8,&local_1d8,param_2,&local_1ac,1);
  lVar26 = *(long *)puVar2;
  local_b0 = puVar9 + 0x10;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  local_1f0 = 0;
  local_1e8 = 0.0;
  local_1e4 = 0.0;
  local_a0 = (uint *)0x0;
  local_a8 = local_198;
  uStack_a4 = local_194;
  uVar17 = FUN_0277d6c4(&local_a8);
  puVar9 = PTR_DAT_04bb2720;
  if (*(long *)puVar2 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar17 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
      lVar26 = *(long *)PTR_DAT_04bc0428;
      uVar17 = FUN_0277d6c4(&local_198);
      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if (uVar17 < *(uint *)(lVar26 + 0x1d8)) {
        puVar27 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar17 * 8);
        if (puVar27 != (uint *)0x0) {
          uVar25 = 0;
          uVar17 = *puVar27;
          local_a0 = puVar27;
          if ((uVar17 == 0) || (puVar27 == (uint *)(ulong)uVar17)) goto LAB_0151ca7c;
          puVar29 = (uint *)((long)puVar27 - (long)(ulong)uVar17);
          uVar25 = 0;
          if (*puVar29 == 0) goto LAB_0151ca7c;
          uVar17 = puVar29[1];
          if ((uVar17 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
            lVar26 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar26 = 0x1c;
            }
            lVar26 = (long)puVar29 + lVar26 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar26 != 0) {
              uVar25 = 0;
              if ((ulong)uVar17 != 0) {
                uVar25 = (uint)((ulong)((long)puVar27 - lVar26) / (ulong)uVar17);
              }
              if (*puVar29 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if ((uVar25 < *(uint *)PTR_DAT_04bc0048) &&
                 (uVar25 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar25 * 2),
                 uVar25 < 0x52)) goto LAB_0151ca7c;
            }
          }
        }
      }
    }
  }
  uVar25 = 0;
LAB_0151ca7c:
  local_110 = (undefined *)CONCAT44(local_110._4_4_,uVar25);
  if ((uVar25 & 0xfffffffe) == 10) {
    puVar2 = puVar8 + 0x10;
    local_c8 = 0;
    local_b8 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    local_d8 = puVar1;
    local_d0 = puVar2;
    local_c0 = puVar2;
    FUN_01afb480(&local_b0,&local_d8);
    local_f0 = (int)local_c8 + (int)local_188;
    local_ec = local_c8._4_4_ + local_188._4_4_;
    local_e0 = (uint)local_b8 + (int)local_188;
    iStack_dc = local_b8._4_4_ + local_188._4_4_;
    local_110 = (undefined *)
                CONCAT17(local_198._3_1_,
                         CONCAT16(local_198._2_1_,
                                  CONCAT24((undefined2)local_198,(undefined4)local_110)));
    local_108 = (undefined *)CONCAT44(local_108._4_4_,local_194);
    bVar28 = *PTR_DAT_04bb32e0;
    if (7 < bVar28) {
      bVar28 = 0xff;
    }
    local_110 = (undefined *)CONCAT71(local_110._1_7_,bVar28);
    local_100 = puVar1;
    local_f8 = puVar2;
    local_e8 = puVar2;
    local_c8._0_4_ = local_f0;
    local_c8._4_4_ = local_ec;
    local_b8._0_4_ = local_e0;
    local_b8._4_4_ = iStack_dc;
    uVar22 = FUN_0151393c(&local_110);
    if (((uVar22 & 1) != 0) && (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 != -1)) {
      local_110 = (undefined *)((ulong)local_110 & 0xffffffff00000000);
      puVar27 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar27 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar27 & 1) != 0) {
        uVar20 = uVar20 >> 0x1e;
        uVar22 = FUN_01ae9b40(&local_b0,uVar20);
        if ((uVar22 & 1) != 0) {
          iVar16 = FUN_01ae98d0(&local_b0);
          puVar2 = PTR_DAT_04bb2d00;
          local_118 = 0.0;
          local_120 = 0;
          local_110 = (undefined *)CONCAT44(local_110._4_4_,uVar20);
          uVar17 = *(uint *)(param_3 + 4) >> 0x18;
          fVar32 = (float)(*(uint *)(param_3 + 4) & 0xffffff) * 5.9604645e-08;
          uVar22 = (ulong)((float)((int)(long)((float)iVar16 * 90.0 * 11930465.0) + 0x60000000U >>
                                  0x1e) * 90.0 * 11930465.0);
          pfVar3 = (float *)(PTR_DAT_04bb2d00 + (uVar22 >> 0x19 & 0x7f) * 0x10);
          uVar25 = (uint)uVar22;
          if (uVar20 < 4) {
            fVar33 = (float)(uVar25 >> 1 & 0xffffff) * 5.9604645e-08;
            fVar36 = pfVar3[2] + fVar33 * pfVar3[3];
                    /* WARNING: Could not recover jumptable at 0x0151cc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar24 = (*(code *)(&UNK_0151cc94 + (ulong)(byte)(&UNK_041758b8)[uVar20] * 4))
                               (fVar32,(fVar36 + fVar36) * (*pfVar3 + fVar33 * pfVar3[1]) * 0.0,
                                *(undefined4 *)(PTR_DAT_04bb2d00 + (ulong)uVar17 * 0x10),
                                *(undefined4 *)((long)(PTR_DAT_04bb2d00 + (ulong)uVar17 * 0x10) + 4)
                               );
            return uVar24;
          }
          bVar14 = (((int)local_c8 < 1 && (uint)local_b8 < 0x80000000) && local_c8._4_4_ < 1) &&
                   SBORROW4(0,local_b8._4_4_);
          bVar13 = 0 < (int)local_c8;
          bVar6 = 0x7fffffff < (uint)local_b8;
          bVar7 = 0 < local_c8._4_4_;
          bVar15 = local_b8._4_4_ != 0;
          bVar11 = (((int)local_c8 < 1 && (uint)local_b8 < 0x80000000) && local_c8._4_4_ < 1) &&
                   -local_b8._4_4_ < 0;
          bVar12 = bVar11 == bVar14;
          if ((((bVar13 || bVar6) || bVar7) || bVar15) && bVar11 == bVar14) {
            pfVar3 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar17 ^ 0x80) * 0x10);
            local_118 = (pfVar3[2] + fVar32 * pfVar3[3]) * 15.0 + 0.0;
            local_120 = (ulong)(uint)((*pfVar3 + fVar32 * pfVar3[1]) * 15.0 + 0.0);
          }
          uVar22 = FUN_01262040(0,PTR_DAT_04bbcc10,&local_120);
          if ((uVar22 & 1) == 0) {
            lVar26 = *(long *)puVar9;
            if (lVar26 == 0) {
              puVar31 = &DAT_055c04a0;
            }
            else {
              puVar31 = &DAT_055c04a0;
              if (*(long *)(lVar26 + 0x330) != 0) {
                puVar31 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
                iVar16 = FUN_006bd550(*puVar31,0);
                puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar16 != 0x758f7eaf) {
                  puVar31 = &DAT_055c04a0;
                }
              }
            }
            FUN_017baf44(*(undefined4 *)(puVar31 + 7));
            uVar20 = *(int *)(param_3 + 4) + 0x20000000U >> 0x1e;
            fVar34 = (float)local_c8._4_4_;
            uVar22 = (ulong)((float)uVar20 * 90.0 * 11930465.0);
            fVar33 = (float)(int)local_c8;
            pfVar3 = (float *)(puVar2 + (uVar22 >> 0x18 & 0xff) * 0x10);
            fVar32 = (float)((uint)uVar22 & 0xffffff) * 5.9604645e-08;
            fVar36 = (*pfVar3 + fVar32 * pfVar3[1]) * -5.0;
            fVar32 = (pfVar3[2] + fVar32 * pfVar3[3]) * -5.0;
            fVar37 = (float)local_b8._4_4_;
            fVar35 = (float)(int)(uint)local_b8;
            iVar16 = FUN_01aee3b4(&local_b0);
            local_130 = puVar8 + 0x10;
            if (iVar16 != 2) {
              fVar32 = -0.0;
              fVar36 = -0.0;
            }
            local_110 = PTR_DAT_04bbc1a0 + 0x10;
            fVar33 = (fVar33 * 5.0 + fVar35 * 5.0 + 5.0) * 0.5 + fVar36 + -2.5;
            fVar32 = (fVar34 * 5.0 + fVar37 * 5.0 + 5.0) * 0.5 + fVar32 + -7.5;
            local_100._0_4_ = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0);
            local_100._4_4_ = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
            local_f0 = (int)local_100 + 1;
            local_ec = local_100._4_4_ + 3;
            local_108 = local_130;
            local_f8 = local_130;
            if ((uVar20 | 2) == 2) {
              FUN_012e1f40(&local_110,PTR_DAT_04bb2108);
            }
            iVar4 = (int)local_100;
            iVar16 = local_ec + 1;
            local_140 = &local_108;
            ppuStack_138 = &local_f8;
            local_128 = (int)local_100;
            local_124 = local_100._4_4_;
            if (iVar16 != local_100._4_4_) {
              iVar19 = local_100._4_4_;
              do {
                iVar10 = local_128;
                uVar22 = FUN_01512308(&local_130);
                if ((uVar22 & 1) != 0) {
                  return 0;
                }
                if (iVar10 < local_f0) {
                  local_128 = iVar10 + 1;
                }
                else {
                  iVar19 = iVar19 + 1;
                  local_128 = (int)local_100;
                  local_124 = iVar19;
                }
              } while ((iVar4 != local_128) || (iVar16 != iVar19));
            }
            iVar4 = *(int *)(param_3 + 4);
            iVar16 = 0x20000000;
            if ((((bVar13 || bVar6) || bVar7) || bVar15) && bVar12) {
              iVar16 = -0x60000000;
            }
            iVar19 = FUN_01ae98d0(&local_b0);
            local_154 = uVar25;
            if ((uint)(iVar4 + iVar16) >> 0x1e ==
                (int)(long)((float)iVar19 * 90.0 * 11930465.0) + 0x20000000U >> 0x1e) {
              local_150 = local_120;
              local_148 = local_118;
              uVar20 = FUN_0151c0e8(&local_140,&local_150,&local_154,0,param_1);
            }
            else {
              local_150 = local_120;
              local_148 = local_118;
              uVar20 = FUN_0151c198(&local_140,&local_150,&local_154,0,param_1);
            }
            if ((uVar20 & 0xfffffffe) == 2) {
              bVar12 = (((bVar13 || bVar6) || bVar7) || bVar15) && bVar12;
              fVar32 = (float)FUN_0097a900(&local_120,0);
              local_1f0 = local_120;
              local_1e8 = local_118;
              uStack_1e0 = uVar25;
              local_1e4 = (float)FUN_01ae8db0(&local_b0);
              bVar28 = *param_1;
              local_1e4 = fVar32 + local_1e4;
              bVar13 = 7 < bVar28;
              if (bVar13) {
                bVar28 = 0xff;
              }
              puVar27 = (uint *)((long)plVar30 + 0x274) + ((long)(char)bVar28 & 0xffffffffU) * 2;
              if (bVar13) {
                puVar27 = (uint *)((long)plVar30 + 0x274);
              }
              if (*puVar27 < 10) {
                *puVar27 = *puVar27 + 1;
                *(undefined1 *)(puVar27 + 1) = 1;
                return 0;
              }
              uStack_1dc = bVar12;
              FUN_02522c84(param_1,&local_1f0,&uStack_1e0,bVar12);
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

