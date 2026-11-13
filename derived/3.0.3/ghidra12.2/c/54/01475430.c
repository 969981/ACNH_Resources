
undefined8
FUN_01475430(long param_1,float *param_2,uint *param_3,int *param_4,byte *param_5,uint param_6,
            uint param_7)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  byte bVar20;
  int iVar21;
  long lVar22;
  undefined *puVar23;
  byte bVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined *puVar32;
  byte *pbVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  ulong local_290;
  undefined4 local_288;
  undefined1 local_284;
  byte local_283;
  undefined1 local_282;
  int local_280;
  undefined4 uStack_27c;
  undefined1 *local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  byte local_258;
  undefined4 local_254;
  undefined1 auStack_250 [8];
  undefined2 local_248;
  undefined1 local_246;
  undefined1 local_245;
  undefined4 local_244;
  undefined4 local_238;
  undefined4 uStack_234;
  int local_230;
  undefined4 uStack_22c;
  undefined1 local_227;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined4 local_19c;
  undefined1 *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined2 local_168;
  undefined1 local_166;
  undefined1 local_165;
  undefined4 local_164;
  undefined1 *local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f8 [3];
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    iVar13 = -1;
  }
  else {
    iVar13 = *(int *)(*(long *)(param_1 + 0x70) + 0x280);
  }
  if (iVar13 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2d0) - 2U < 4) {
    return 0;
  }
  lVar22 = *(long *)PTR_DAT_04bb27f0;
  if (lVar22 != 0) {
    *(uint *)(lVar22 + 0x43c) = *(uint *)(lVar22 + 0x43c) | 0x10;
  }
  puVar2 = PTR_DAT_04bc0510;
  puVar23 = PTR_DAT_04bb43c0;
  local_1e0 = (undefined *)0x0;
  lVar22 = param_1 + 0x288;
  local_2b8 = (long *)(PTR_DAT_04bb2e18 + 0x10);
  local_1f0 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
  local_2b0 = (undefined1 *)0x0;
  local_1e8 = *(undefined1 **)(param_1 + 0x288);
  lVar26 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_1e8);
  if (*(long *)puVar23 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar26 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(lVar22);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if (uVar10 < *(uint *)(lVar26 + 0x1d8)) {
        lVar26 = *(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar10 * 8);
        if (lVar26 != 0) {
          local_1e0 = (undefined *)lVar26;
        }
      }
    }
  }
  FUN_01afb1a0(&local_1f0,&local_2b8);
  puVar32 = PTR_DAT_04bb2010;
  uVar10 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
  local_220 = CONCAT44(local_220._4_4_,uVar10);
  iVar21 = (int)local_2b0;
  iVar13 = local_2b0._4_4_;
  if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
    iVar13 = (int)local_2b0;
    iVar21 = local_2b0._4_4_;
    if ((uVar10 & 0x80000001) != 1) {
      iVar13 = local_2b0._4_4_;
      iVar21 = (int)local_2b0;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x2c8);
  uVar3 = *(uint *)(param_1 + 0x2cc);
  uVar7 = *(undefined8 *)(param_1 + 0x2c8);
  uVar27 = (iVar21 + uVar10) - 1;
  if (((param_7 & 1) != 0) && (iVar13 != 0)) {
    uVar25 = uVar3;
    uVar11 = uVar10;
    do {
      if (((uVar25 < 0x100) && (uVar11 < 0x120)) &&
         ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar11 + uVar25 * 0x120 >> 5) * 4 + 8) >>
           (ulong)(uVar11 & 0x1f) & 1) != 0)) {
        return 0;
      }
      if ((int)uVar11 < (int)uVar27) {
        uVar11 = uVar11 + 1;
      }
      else {
        uVar25 = uVar25 + 1;
        uVar11 = uVar10;
      }
    } while ((uVar10 != uVar11) || (uVar3 + iVar13 != uVar25));
  }
  uVar25 = (uVar3 + iVar13) - 1;
  local_1d0 = (undefined1 *)CONCAT44(DAT_051db9cc,DAT_051db9c8);
  local_1e0 = PTR_DAT_04bbc1a0 + 0x10;
  local_1d8 = PTR_DAT_04bb2010 + 0x10;
  local_1c0 = CONCAT44(DAT_051db9dc,DAT_051db9d8);
  bVar20 = *param_5;
  local_1f0 = (undefined8 *)CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,*(int *)(param_1 + 0x2d0));
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,bVar20);
  local_1c8 = local_1d8;
  local_1e8._0_4_ = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  FUN_01476a50(&local_2b8,param_1);
  local_1c0 = CONCAT44(uVar25,uVar27);
  local_1f0 = (undefined8 *)CONCAT44((undefined4)local_2b8,(undefined4)local_1f0);
  local_1e8 = (undefined1 *)CONCAT44(local_1e8._4_4_,local_2b8._4_4_);
  local_1d0 = (undefined1 *)uVar7;
  uVar14 = FUN_0151307c(&local_1f0);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  uVar11 = *param_3;
  if (uVar11 != 0) {
    local_280 = *param_4;
    if (local_280 == 1) {
      if ((uVar11 & 0x7fffffff) == 0x40000000) goto LAB_01475760;
    }
    else if (((uVar11 & 0x7fffffff) == 0x40000000) && (local_280 == 3)) {
LAB_01475760:
      local_1e8 = *(undefined1 **)(param_1 + 0x288);
      lVar26 = *(long *)puVar23;
      local_2b0 = (undefined1 *)((ulong)local_2b0 & 0xffffffff00000000);
      local_1e0 = (undefined *)0x0;
      local_1f0 = (undefined8 *)(puVar2 + 0x10);
      uVar11 = FUN_0277d6c4(&local_1e8);
      if (*(long *)puVar23 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar26 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(lVar22);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if (uVar11 < *(uint *)(lVar26 + 0x1d8)) {
            lVar26 = *(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8);
            if (lVar26 != 0) {
              local_1e0 = (undefined *)lVar26;
            }
          }
        }
      }
      FUN_01afb1a0(&local_1f0,&local_2b8);
      local_1e8 = *(undefined1 **)(param_1 + 0x288);
      local_218 = (ulong)(uint)local_218;
      iVar13 = (int)local_2b0;
      local_1e0 = (undefined *)0x0;
      lVar26 = *(long *)puVar23;
      local_1f0 = (undefined8 *)(puVar2 + 0x10);
      uVar11 = FUN_0277d6c4(&local_1e8);
      if (*(long *)puVar23 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar26 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(lVar22);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if (uVar11 < *(uint *)(lVar26 + 0x1d8)) {
            puVar23 = *(undefined **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8);
            if (puVar23 != (undefined *)0x0) {
              local_1e0 = puVar23;
            }
          }
        }
      }
      FUN_01afb1a0(&local_1f0,&local_220);
      if ((local_218._4_4_ + iVar13 & 0x80000001U) == 1) {
        bVar8 = local_280 == 1;
      }
      else {
        bVar8 = local_280 == 3;
      }
      puVar32 = PTR_DAT_04bb2010;
      if (bVar8) {
        return 0;
      }
    }
  }
  local_1f0 = (undefined8 *)0xfffe;
  FUN_0277d4ac(&local_1f0);
  local_b8 = PTR_DAT_04bbd460 + 0x10;
  local_b0 = (undefined8 *)0xfffe;
  FUN_0277d4ac(&local_b0);
  puVar32 = puVar32 + 0x10;
  local_a0 = 0;
  local_b0 = local_1f0;
  local_a8 = puVar32;
  (**(code **)(**(long **)(param_1 + 0xa90) + 0x110))
            (*(long **)(param_1 + 0xa90),&local_b8,param_2,param_3,*param_4);
  local_d0 = 0;
  local_c0 = 0;
  puVar23 = PTR_DAT_04bbc1a0 + 0x10;
  local_e0 = puVar23;
  puStack_d8 = puVar32;
  local_c8 = puVar32;
  FUN_0154f6c8(&local_b8,&local_e0,0);
  local_2b8 = (long *)(ulong)(uint)(((float)(int)uVar10 * 5.0 + (float)(int)uVar27 * 5.0 + 5.0) *
                                   0.5);
  local_2b0 = (undefined1 *)
              CONCAT44(local_2b0._4_4_,
                       ((float)(int)uVar3 * 5.0 + (float)(int)uVar25 * 5.0 + 5.0) * 0.5);
  uVar11 = (uint)local_d0;
  if (*param_3 == 0) {
    uVar11 = uVar10;
    if ((int)(uint)local_d0 <= (int)uVar10) {
      uVar11 = (uint)local_d0;
    }
    uVar29 = uVar3;
    if ((int)local_d0._4_4_ <= (int)uVar3) {
      uVar29 = local_d0._4_4_;
    }
    uVar30 = uVar27;
    if ((int)uVar27 <= (int)(uint)local_d0) {
      uVar30 = (uint)local_d0;
    }
    uVar28 = uVar25;
    if ((int)uVar25 <= (int)local_d0._4_4_) {
      uVar28 = local_d0._4_4_;
    }
    if ((int)(uint)local_c0 <= (int)uVar11) {
      uVar11 = (uint)local_c0;
    }
    if ((int)local_c0._4_4_ <= (int)uVar29) {
      uVar29 = local_c0._4_4_;
    }
    if ((int)uVar30 <= (int)(uint)local_c0) {
      uVar30 = (uint)local_c0;
    }
    local_1e0 = (undefined *)CONCAT44(uVar29,uVar11);
    if ((int)uVar28 <= (int)local_c0._4_4_) {
      uVar28 = local_c0._4_4_;
    }
    local_1d0 = (undefined1 *)CONCAT44(uVar28,uVar30);
    local_1f0 = (undefined8 *)puVar23;
    local_1e8 = puVar32;
    if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
       (lVar22 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar22 == 0)) {
      local_1d8 = puVar32;
    }
    else {
      local_1d8 = puVar32;
      uVar14 = FUN_009721a0(lVar22,&local_1f0,0);
      if ((uVar14 & 1) != 0) {
        return 0;
      }
    }
  }
  else {
    uVar29 = local_c0._4_4_ + 1;
    if (uVar29 != local_d0._4_4_) {
      lVar22 = *(long *)PTR_DAT_04bb27c8;
      lVar26 = lVar22;
      uVar30 = local_d0._4_4_;
      uVar28 = (uint)local_d0;
      do {
        local_1f0 = (undefined8 *)(ulong)(uint)((float)(int)uVar28 * 5.0 + 2.5);
        local_1e8 = (undefined1 *)CONCAT44(local_1e8._4_4_,(float)(int)uVar30 * 5.0 + 2.5);
        if (lVar26 == 0) {
          fVar35 = -500.0;
          fVar34 = -500.0;
        }
        else {
          if ((*(long *)(lVar26 + 0xa8) == 0) || (*(char *)(lVar26 + 0x11c8) != '\0')) {
            fVar35 = -500.0;
          }
          else {
            fVar35 = (float)FUN_0093a950(lVar26 + 0x28,&local_2b8,0);
            lVar22 = *(long *)PTR_DAT_04bb27c8;
          }
          if (lVar22 == 0) {
            lVar26 = 0;
            fVar34 = -500.0;
          }
          else {
            if ((*(long *)(lVar22 + 0xa8) == 0) || (*(char *)(lVar22 + 0x11c8) != '\0')) {
              fVar34 = -500.0;
            }
            else {
              fVar34 = (float)FUN_0093a950(lVar22 + 0x28,&local_1f0,0);
              lVar22 = *(long *)PTR_DAT_04bb27c8;
            }
            lVar26 = lVar22;
          }
        }
        fVar35 = fVar35 - fVar34;
        bVar8 = false;
        bVar9 = true;
        if (-7.0 <= fVar35) {
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar35)) {
            bVar8 = fVar35 == 7.0;
            bVar9 = 7.0 <= fVar35;
          }
        }
        if (bVar9 && !bVar8) {
          return 0;
        }
        if ((int)uVar28 < (int)(uint)local_c0) {
          uVar28 = uVar28 + 1;
        }
        else {
          uVar30 = uVar30 + 1;
          uVar28 = (uint)local_d0;
        }
      } while ((uVar11 != uVar28) || (uVar29 != uVar30));
    }
    fVar35 = (float)(int)(uint)local_d0 * 5.0 + 1.0;
    fVar36 = (float)(int)local_d0._4_4_ * 5.0 + 1.0;
    local_1f0 = (undefined8 *)(ulong)(uint)fVar35;
    local_1e8 = (undefined1 *)CONCAT44(fVar35,fVar36);
    fVar35 = (float)(int)local_c0._4_4_ * 5.0 + 5.0 + -1.0;
    fVar34 = (float)(int)(uint)local_c0 * 5.0 + 5.0 + -1.0;
    local_1e0 = (undefined *)((ulong)(uint)fVar35 << 0x20);
    local_1d8 = (undefined *)(ulong)(uint)fVar34;
    local_1d0 = (undefined1 *)CONCAT44(fVar34,fVar36);
    local_1c8 = (undefined *)((ulong)(uint)fVar35 << 0x20);
    fVar35 = (float)FUN_0097a900(&local_2b8,0);
    fVar34 = (float)FUN_0097a900(&local_1f0,0);
    if (fVar35 - fVar34 < -7.0) {
      return 0;
    }
    if (7.0 < fVar35 - fVar34) {
      return 0;
    }
    fVar35 = (float)FUN_0097a900(&local_2b8,0);
    fVar34 = (float)FUN_0097a900((long)&local_1e8 + 4,0);
    if (fVar35 - fVar34 < -7.0) {
      return 0;
    }
    if (7.0 < fVar35 - fVar34) {
      return 0;
    }
    fVar35 = (float)FUN_0097a900(&local_2b8,0);
    fVar34 = (float)FUN_0097a900(&local_1d8,0);
    if (fVar35 - fVar34 < -7.0) {
      return 0;
    }
    if (7.0 < fVar35 - fVar34) {
      return 0;
    }
    fVar35 = (float)FUN_0097a900(&local_2b8,0);
    fVar34 = (float)FUN_0097a900((long)&local_1d0 + 4,0);
    if (fVar35 - fVar34 < -7.0) {
      return 0;
    }
    if (7.0 < fVar35 - fVar34) {
      return 0;
    }
  }
  FUN_01a4f4bc(local_f8);
  local_f8[0] = PTR_DAT_04bb3140 + 0x10;
  FUN_01472270(param_1,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
  pbVar33 = PTR_DAT_04bb32e0;
  puVar23 = PTR_DAT_04bb2010;
  local_2b0 = PTR_DAT_04bb2010 + 0x10;
  local_2a8 = 0;
  local_1d8 = (undefined *)0x0;
  local_2a0 = (undefined1 *)0x0;
  local_298 = (undefined1 *)0x0;
  local_2b8 = *(long **)PTR_DAT_04bb37e0;
  local_1c8 = (undefined *)0x0;
  uVar14 = local_1c0 >> 0x30;
  bVar20 = *PTR_DAT_04bb32e0;
  local_1e0._0_4_ = (uint)local_a0;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_290 = (ulong)CONCAT31((int3)((uint)(undefined4)local_290 >> 8),bVar20);
  local_1c0._0_6_ = CONCAT15(bVar20,0x100000000);
  local_1c0 = CONCAT26((short)uVar14,(undefined6)local_1c0) & 0xff00ffffffffffff;
  local_1f0 = local_b0;
  local_1e0._4_4_ = local_a0._4_4_;
  local_1e8 = local_2b0;
  local_1d0 = local_2b0;
  uVar12 = FUN_0154f5d4(&local_b8);
  uVar14 = local_1c0;
  local_1c0._0_5_ = (uint5)(uint)local_1c0;
  local_1d8 = (undefined *)CONCAT44(*(undefined4 *)(param_1 + 0x2d0),uVar12);
  bVar20 = *param_5;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_1c0._6_2_ = SUB82(uVar14,6);
  local_1c0._0_6_ = CONCAT15(bVar20,(uint5)local_1c0);
  iVar13 = FUN_0148e51c(&local_2b8,&local_1f0);
  local_220 = CONCAT44(local_220._4_4_,iVar13);
  if (iVar13 != 9) goto LAB_014767fc;
  if (*(int *)(param_1 + 0x2d0) == 0) {
    local_1d0 = puVar23 + 0x10;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1f0 = &local_1d8;
    local_1a0 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_19e = PTR_DAT_04bb37e0[2];
    local_19d = PTR_DAT_04bb37e0[3];
    local_19c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_1d8 = *(undefined **)PTR_DAT_04bb37e0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_190 = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
    local_18c = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
    local_1c8 = *(undefined **)(PTR_DAT_04bb5d40 + 8);
    local_1e0._0_4_ = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_1e8 = &DAT_00000004;
    local_198 = local_1d0;
    local_168 = local_1a0;
    local_166 = local_19e;
    local_165 = local_19d;
    local_164 = local_19c;
    local_160 = local_1d0;
    local_158 = local_190;
    local_154 = local_18c;
    local_130 = local_1a0;
    local_12e = local_19e;
    local_12d = local_19d;
    local_12c = local_19c;
    local_128 = local_1d0;
    local_120 = local_190;
    local_11c = local_18c;
    FUN_014746c0(param_1,&local_1f0);
    if (*(int *)(param_1 + 0x300) != 0 || (uint)local_1e0 != 0) {
      local_210 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uStack_208 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_200 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uStack_1f8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_220 = *(undefined8 *)PTR_DAT_04bb2f80;
      local_218 = *(ulong *)(PTR_DAT_04bb2f80 + 8);
      (**(code **)(**(long **)(param_1 + 0xa90) + 0x108))
                (*(long **)(param_1 + 0xa90),&local_220,param_2,param_3,*param_4);
      FUN_01474c34(param_1,param_2,param_3,*param_4);
      puVar2 = PTR_DAT_04bb2150;
      lVar26 = *(long *)(param_1 + 0x2f8);
      lVar22 = param_1 + 0x2e8;
      if (lVar26 != param_1 + 0x2f0) {
        lVar19 = lVar26 + -8;
        puVar32 = PTR_DAT_04bb3290 + 0x10;
        do {
          local_280 = *(int *)(param_1 + 0x230);
          lVar26 = *(long *)(lVar26 + 8);
          FUN_0071c8d0(&local_2b8,lVar19,&local_280,0);
          plVar15 = local_2b8;
          if (local_2b8 != (long *)0x0) {
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar13 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = puVar32;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar14 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb5920);
            if ((uVar14 & 1) == 0) {
              local_2b0._0_2_ = (ushort)(byte)local_2b0;
            }
            if (local_2b8 != (long *)0x0) {
              FUN_01472270(local_2b8,puVar2,PTR_DAT_04bb2ce8,1);
            }
          }
          lVar19 = lVar26 + -8;
        } while (lVar19 != lVar22);
      }
      uVar11 = (uint)local_1e0;
      if ((uint)local_1e0 != 0) {
        uVar29 = 0;
        do {
          iVar13 = 0;
          if ((int)local_1e8 <= (int)(uVar29 + local_1e8._4_4_)) {
            iVar13 = (int)local_1e8;
          }
          FUN_014fb6f8(local_f8,1,
                       local_1f0 + (long)(int)(uVar29 + (local_1e8._4_4_ - iVar13)) * 7 + 1);
          uVar29 = uVar29 + 1;
        } while (uVar11 != uVar29);
      }
      lVar19 = *(long *)(param_1 + 0x2f8);
      bVar8 = true;
      lVar26 = lVar19 + -8;
      if (lVar26 != lVar22) {
        puVar1 = puVar23 + 0x10;
        puVar23 = PTR_DAT_04bb3290 + 0x10;
        do {
          lVar19 = *(long *)(lVar19 + 8);
          local_2b8 = (long *)CONCAT44(local_2b8._4_4_,*(undefined4 *)(param_1 + 0x230));
          FUN_0071c8d0(&local_230,lVar26,&local_2b8,0);
          plVar15 = (long *)CONCAT44(uStack_22c,local_230);
          if (plVar15 != (long *)0x0) {
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar13 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = puVar23;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar14 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb5920);
            if ((uVar14 & 1) == 0) {
              local_227 = 0;
            }
            lVar26 = CONCAT44(uStack_22c,local_230);
            if (lVar26 != 0) {
              iVar13 = *param_4;
              FUN_0154f504(auStack_250);
              plVar15 = *(long **)(lVar26 + 0xa90);
              (**(code **)(*plVar15 + 0x110))(plVar15,auStack_250,param_2,param_3,iVar13);
              uStack_270 = 0;
              local_268 = 0;
              uStack_260 = 0;
              local_280 = *(int *)PTR_DAT_04bb37e0;
              uStack_27c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
              local_254 = 0;
              local_283 = *PTR_DAT_04bb32e0;
              local_2a0 = (undefined1 *)0x0;
              local_290 = 0;
              local_284 = 1;
              local_288 = 0;
              local_282 = 0;
              if (7 < local_283) {
                local_283 = 0xff;
              }
              local_2b8._0_3_ = CONCAT12(local_246,local_248);
              local_2b8._0_4_ = CONCAT13(local_245,(undefined3)local_2b8);
              local_2b8 = (long *)CONCAT44(local_244,(undefined4)local_2b8);
              local_2a8 = CONCAT44(uStack_234,local_238);
              local_2b0 = puVar1;
              local_298 = puVar1;
              local_278 = puVar1;
              local_258 = local_283;
              uVar12 = FUN_0154f5d4(auStack_250);
              local_283 = *param_5;
              local_284 = 0;
              local_2a0 = (undefined1 *)
                          CONCAT44(*(undefined4 *)(CONCAT44(uStack_22c,local_230) + 0x2d0),uVar12);
              if (7 < local_283) {
                local_283 = 0xff;
              }
              iVar13 = FUN_0148e51c(&local_280,&local_2b8);
              if (iVar13 != 9) {
                bVar8 = false;
                goto LAB_01476290;
              }
            }
          }
          lVar26 = lVar19 + -8;
        } while (lVar26 != lVar22);
        bVar8 = true;
LAB_01476290:
        puVar23 = PTR_DAT_04bb2010;
      }
      uVar11 = (uint)local_1e0;
      if ((uint)local_1e0 != 0) {
        uVar29 = 0;
        puVar1 = puVar23 + 0x10;
        do {
          iVar13 = 0;
          if ((int)local_1e8 <= (int)(uVar29 + local_1e8._4_4_)) {
            iVar13 = (int)local_1e8;
          }
          puVar31 = local_1f0 + (long)(int)(uVar29 + (local_1e8._4_4_ - iVar13)) * 7;
          FUN_0154f504(auStack_250);
          uVar14 = FUN_01473ae8(param_1,auStack_250,puVar31,param_2,param_3,*param_4);
          if ((uVar14 & 1) == 0) {
LAB_014763d8:
            bVar8 = false;
            break;
          }
          uStack_270 = 0;
          local_268 = 0;
          uStack_260 = 0;
          local_280 = *(int *)PTR_DAT_04bb37e0;
          uStack_27c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          local_254 = 0;
          local_283 = *PTR_DAT_04bb32e0;
          local_290 = 0;
          local_2a0 = (undefined1 *)0x0;
          local_288 = 0;
          local_284 = 1;
          local_282 = 0;
          if (7 < local_283) {
            local_283 = 0xff;
          }
          local_2b8._0_3_ = CONCAT12(local_246,local_248);
          local_2b8._0_4_ = CONCAT13(local_245,(undefined3)local_2b8);
          local_2b8 = (long *)CONCAT44(local_244,(undefined4)local_2b8);
          local_2a8 = CONCAT44(uStack_234,local_238);
          local_2b0 = puVar1;
          local_298 = puVar1;
          local_278 = puVar1;
          local_258 = local_283;
          uVar12 = FUN_0154f5d4(auStack_250);
          local_283 = *param_5;
          local_2a0 = (undefined1 *)CONCAT44(1,uVar12);
          local_284 = 0;
          if (7 < local_283) {
            local_283 = 0xff;
          }
          local_230 = FUN_0148e51c(&local_280,&local_2b8);
          if (local_230 != 9) goto LAB_014763d8;
          uVar29 = uVar29 + 1;
        } while (uVar11 != uVar29);
        puVar23 = PTR_DAT_04bb2010;
      }
      lVar19 = *(long *)(param_1 + 0x2f8);
      lVar26 = lVar19 + -8;
      if (lVar26 != lVar22) {
        puVar2 = PTR_DAT_04bb3290 + 0x10;
        do {
          local_280 = *(int *)(param_1 + 0x230);
          lVar19 = *(long *)(lVar19 + 8);
          FUN_0071c8d0(&local_2b8,lVar26,&local_280,0);
          plVar15 = local_2b8;
          if (local_2b8 != (long *)0x0) {
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar13 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar14 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb5920);
            if ((uVar14 & 1) == 0) {
              local_2b0._0_2_ = (ushort)(byte)local_2b0;
            }
            if (local_2b8 != (long *)0x0) {
              FUN_01474c34(local_2b8,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
            }
          }
          lVar26 = lVar19 + -8;
        } while (lVar26 != lVar22);
      }
      uVar11 = (uint)local_1e0;
      if ((uint)local_1e0 != 0) {
        uVar29 = 0;
        do {
          iVar13 = 0;
          if ((int)local_1e8 <= (int)(uVar29 + local_1e8._4_4_)) {
            iVar13 = (int)local_1e8;
          }
          FUN_01a50970(local_f8,1,local_1f0 + (long)(int)(uVar29 + (local_1e8._4_4_ - iVar13)) * 7,
                       local_1f0 + (long)(int)(uVar29 + (local_1e8._4_4_ - iVar13)) * 7 + 1);
          uVar29 = uVar29 + 1;
        } while (uVar11 != uVar29);
      }
      FUN_01472270(param_1,param_2,param_3,*param_4);
      if (!bVar8) goto LAB_014767fc;
      pbVar33 = PTR_DAT_04bb32e0;
    }
  }
  if (((((param_6 & 1) != 0) && (*param_2 == 0.0)) && (param_2[1] == 0.0)) &&
     ((param_2[2] == 0.0 && (*param_3 != 0)))) {
    local_1e8 = puVar23 + 0x10;
    local_1f0 = (undefined8 *)(PTR_DAT_04bbc1a0 + 0x10);
    if ((int)(uint)local_d0 <= (int)uVar10) {
      uVar10 = (uint)local_d0;
    }
    if ((int)local_d0._4_4_ <= (int)uVar3) {
      uVar3 = local_d0._4_4_;
    }
    if ((int)uVar27 <= (int)(uint)local_d0) {
      uVar27 = (uint)local_d0;
    }
    if ((int)uVar25 <= (int)local_d0._4_4_) {
      uVar25 = local_d0._4_4_;
    }
    local_1e0._0_4_ = uVar10;
    if ((int)(uint)local_c0 <= (int)uVar10) {
      local_1e0._0_4_ = (uint)local_c0;
    }
    local_1e0._4_4_ = uVar3;
    if ((int)local_c0._4_4_ <= (int)uVar3) {
      local_1e0._4_4_ = local_c0._4_4_;
    }
    if ((int)uVar27 <= (int)(uint)local_c0) {
      uVar27 = (uint)local_c0;
    }
    if ((int)uVar25 <= (int)local_c0._4_4_) {
      uVar25 = local_c0._4_4_;
    }
    local_1d0 = (undefined1 *)CONCAT44(uVar25,uVar27);
    local_1d8 = local_1e8;
    uVar14 = FUN_01500b20(local_f8,&local_1f0);
    if (((uVar14 & 1) != 0) ||
       (((*(long *)PTR_DAT_04bb27c8 != 0 &&
         (lVar22 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar22 != 0)) &&
        (uVar14 = FUN_009721a0(lVar22,&local_1f0,0), (uVar14 & 1) != 0)))) goto LAB_014767fc;
    bVar20 = *param_5;
    bVar24 = *pbVar33;
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    if (bVar20 != bVar24) {
      pfVar16 = (float *)FUN_0251b3b0(param_5,0);
      if (pfVar16 == (float *)0x0) goto LAB_014767fc;
      iVar13 = (int)((float)(int)*pfVar16 / 5.0) - (uint)(*pfVar16 < 0.0);
      iVar21 = (int)((float)(int)pfVar16[2] / 5.0) - (uint)(pfVar16[2] < 0.0);
      if ((((int)(uint)local_1e0 <= iVar13 && iVar13 <= (int)local_1d0) &&
          (int)local_1e0._4_4_ <= iVar21) && iVar21 == local_1d0._4_4_ ||
          ((((int)(uint)local_1e0 <= iVar13 && iVar13 <= (int)local_1d0) &&
           (int)local_1e0._4_4_ <= iVar21) && iVar21 - local_1d0._4_4_ < 0) !=
          ((((int)(uint)local_1e0 <= iVar13 && iVar13 <= (int)local_1d0) &&
           (int)local_1e0._4_4_ <= iVar21) && SBORROW4(iVar21,local_1d0._4_4_))) goto LAB_014767fc;
    }
  }
  bVar20 = *param_5;
  bVar24 = *pbVar33;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  if (7 < bVar24) {
    bVar24 = 0xff;
  }
  if (bVar20 == bVar24) goto LAB_014766e0;
  pfVar16 = (float *)FUN_0251b3b0(param_5,0);
  pfVar17 = (float *)FUN_0251e380(0x40f00000,param_5,0);
  if ((pfVar16 != (float *)0x0) && (pfVar17 != (float *)0x0)) {
    local_1e8 = puVar23 + 0x10;
    local_1d0 = (undefined1 *)0x0;
    local_1e0._0_4_ = 0;
    local_1e0._4_4_ = 0;
    local_1f0 = (undefined8 *)(PTR_DAT_04bbc1a0 + 0x10);
    local_220 = CONCAT44(pfVar16[1] + param_2[1],*pfVar16 + *param_2);
    local_218 = CONCAT44(local_218._4_4_,pfVar16[2] + param_2[2]);
    local_1d8 = local_1e8;
    lVar22 = FUN_0251e98c(1);
    pfVar18 = (float *)(**(code **)(*(long *)(lVar22 + 0x2a0) + 0xf0))(lVar22 + 0x2a0);
    FUN_01472590(*pfVar18 + 1.0,&local_1f0,&local_220);
    uVar14 = FUN_016efacc(0x40a00000,&local_220);
    puVar2 = PTR_DAT_04bb27c8;
    if ((uVar14 & 1) == 0) {
      if ((int)(uint)local_1e0 <= (int)(uint)local_c0) {
        if (((int)(uint)local_d0 <= (int)local_1d0) && ((int)local_1e0._4_4_ <= (int)local_c0._4_4_)
           ) {
          if ((int)local_d0._4_4_ <= local_1d0._4_4_) goto LAB_014767fc;
        }
      }
      local_2b0 = puVar23 + 0x10;
      iVar21 = (int)((float)(int)*pfVar16 / 5.0) - (uint)(*pfVar16 < 0.0);
      iVar4 = (int)((float)(int)pfVar16[2] / 5.0) - (uint)(pfVar16[2] < 0.0);
      iVar5 = (int)((float)(int)*pfVar17 / 5.0) - (uint)(*pfVar17 < 0.0);
      iVar6 = (int)((float)(int)pfVar17[2] / 5.0) - (uint)(pfVar17[2] < 0.0);
      local_2b8 = (long *)(PTR_DAT_04bbc1a0 + 0x10);
      iVar13 = iVar21;
      if (iVar5 <= iVar21) {
        iVar13 = iVar5;
      }
      if (iVar21 <= iVar5) {
        iVar21 = iVar5;
      }
      iVar5 = iVar4;
      if (iVar6 <= iVar4) {
        iVar5 = iVar6;
      }
      if (iVar4 <= iVar6) {
        iVar4 = iVar6;
      }
      local_2a8 = CONCAT44(iVar5,iVar13);
      local_298 = (undefined1 *)CONCAT44(iVar4,iVar21);
      local_2a0 = local_2b0;
      if (((*(long *)PTR_DAT_04bb27c8 == 0) ||
          (lVar22 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar22 == 0)) ||
         (uVar14 = FUN_009721a0(lVar22,&local_2b8,0), (uVar14 & 1) == 0)) {
        bVar8 = false;
        if ((param_2[2] == 0.0) && (bVar8 = false, !NAN(param_2[1]))) {
          bVar8 = param_2[1] == 0.0;
        }
        bVar9 = false;
        if ((bVar8) && (bVar9 = false, !NAN(*param_2))) {
          bVar9 = *param_2 == 0.0;
        }
        if ((bVar9) || (*param_3 != 0)) {
LAB_014766e0:
          FUN_01474c34(param_1,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
          return 1;
        }
        uVar14 = FUN_01500b20(local_f8,&local_1f0);
        uVar10 = (uint)local_1e0;
        if ((uVar14 & 1) == 0) {
          uVar3 = local_1d0._4_4_ + 1;
          if (uVar3 != local_1e0._4_4_) {
            plVar15 = (long *)(PTR_DAT_04bb2010 + 0x10);
            uVar27 = local_1e0._4_4_;
            uVar25 = (uint)local_1e0;
            do {
              local_2b0 = (undefined1 *)CONCAT44(uVar27,uVar25);
              local_2b8 = plVar15;
              uVar14 = FUN_009765e0(&local_2b8);
              if ((uVar14 & 1) != 0) goto LAB_014767fc;
              if ((int)uVar25 < (int)local_1d0) {
                uVar25 = uVar25 + 1;
              }
              else {
                uVar27 = uVar27 + 1;
                uVar25 = (uint)local_1e0;
              }
            } while (uVar10 != uVar25 || uVar3 != uVar27);
          }
          if (((*(long *)puVar2 == 0) || (lVar22 = *(long *)(*(long *)puVar2 + 0xa8), lVar22 == 0))
             || (uVar14 = FUN_009721a0(lVar22,&local_1f0,0), (uVar14 & 1) == 0)) {
            uVar3 = (uint)local_1e0;
            uVar10 = local_1d0._4_4_ + 1;
            if (uVar10 != local_1e0._4_4_) {
              plVar15 = (long *)(PTR_DAT_04bb2010 + 0x10);
              uVar27 = local_1e0._4_4_;
              uVar25 = (uint)local_1e0;
              do {
                local_2b0 = (undefined1 *)CONCAT44(uVar27,uVar25);
                local_2b8 = plVar15;
                uVar14 = FUN_01512308(&local_2b8,*(undefined4 *)(param_1 + 0x230));
                if ((uVar14 & 1) != 0) goto LAB_014767fc;
                if ((int)uVar25 < (int)local_1d0) {
                  uVar25 = uVar25 + 1;
                }
                else {
                  uVar27 = uVar27 + 1;
                  uVar25 = (uint)local_1e0;
                }
              } while (uVar3 != uVar25 || uVar10 != uVar27);
            }
            goto LAB_014766e0;
          }
        }
      }
    }
  }
LAB_014767fc:
  FUN_01474c34(param_1,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
  return 0;
}

