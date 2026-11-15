
void FUN_0247b738(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  byte *pbVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_148;
  float local_140;
  undefined4 uStack_13c;
  long local_138;
  float local_12c;
  undefined4 uStack_128;
  undefined8 local_124;
  float local_11c;
  byte local_118;
  ushort local_117;
  uint local_114;
  undefined4 local_110;
  uint local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float fStack_e0;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  undefined2 local_d0;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined4 local_cc;
  uint uStack_c8;
  undefined *local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_b0;
  
  piVar2 = (int *)(param_4 + 0x1906);
  if (*(int *)(param_4 + 0x178) == 0) {
    local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
    local_124 = CONCAT53(local_124._3_5_,1);
    *(undefined1 *)(param_4 + 0x1916) = 0;
    lVar15 = *(long *)(param_4 + 0x68);
    fVar23 = *(float *)(lVar15 + 0x278);
    fVar26 = *(float *)(lVar15 + 0x27c);
    fVar21 = *(float *)(lVar15 + 0x280);
    local_124 = CONCAT44(0x40f00000,(undefined4)local_124);
    fVar24 = (float)FUN_024bcd34(param_4,&local_124);
    uStack_c8 = uStack_c8 & 0xffffff00;
    local_c4 = (undefined *)0x0;
    local_bc = 0;
    local_e8 = *(float *)(*(long *)(param_4 + 0x68) + 0x280);
    local_f0 = *(undefined **)(*(long *)(param_4 + 0x68) + 0x278);
    local_b4 = 0;
    local_148 = (undefined *)CONCAT44(fVar26,fVar24);
    local_cc = 0x40000000;
    local_b0 = 1;
    local_d0 = SUB42(param_3,0);
    uStack_ce = (undefined1)((uint)param_3 >> 0x10);
    uStack_cd = (undefined1)((uint)param_3 >> 0x18);
    local_140 = param_3;
    local_e4 = fVar24;
    fStack_e0 = fVar26;
    local_dc = param_3;
    fStack_d8 = fVar24;
    fStack_d4 = fVar26;
    iVar14 = FUN_016f36e0(&local_f0);
    local_148 = local_c4;
    local_140 = (float)local_bc;
    if (iVar14 == 5) {
      fVar24 = (float)(int)((int)((float)(int)local_c4._0_4_ / 5.0) - (uint)(local_c4._0_4_ < 0.0) &
                           0xfffffffe) * 5.0 + 5.0;
      param_3 = (float)(int)((int)((float)(int)(float)local_bc / 5.0) -
                             (uint)((float)local_bc < 0.0) & 0xfffffffe) * 5.0 + 5.0;
      fVar26 = (float)FUN_016e026c(0,&local_148,0,0);
    }
    lVar15 = *(long *)(param_4 + 0x68);
    if (lVar15 == 0) {
      fVar22 = 0.0;
      fVar19 = 0.0;
    }
    else {
      pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar15 + 0x2b4) >> 0x14) & 0xff0));
      fVar19 = (float)(*(uint *)(lVar15 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      fVar25 = *pfVar3 + fVar19 * pfVar3[1];
      fVar19 = pfVar3[2] + fVar19 * pfVar3[3];
      fVar22 = *(float *)(lVar15 + 0x278) + fVar25 * 0.0 * 0.0 + fVar19 * 0.0 + (fVar25 + 0.0) * 7.5
      ;
      fVar19 = *(float *)(lVar15 + 0x280) + (fVar19 * 0.0 * 0.0 - fVar25 * 0.0) + fVar19 * 7.5;
    }
    iVar14 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
    lVar17 = *(long *)PTR_DAT_04bb5c90;
    if ((((*(int *)(lVar17 + 0x28) <= iVar14) && (iVar14 <= *(int *)(lVar17 + 0x38))) &&
        (iVar14 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0),
        *(int *)(lVar17 + 0x2c) <= iVar14)) && (iVar14 <= *(int *)(lVar17 + 0x3c))) {
      if (lVar15 == 0) {
        fVar19 = 0.0;
        fVar22 = 0.0;
        fVar25 = 0.0;
      }
      else {
        pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar15 + 0x2b4) >> 0x14) & 0xff0));
        fVar19 = (float)(*(uint *)(lVar15 + 0x2b4) & 0xffffff) * 5.9604645e-08;
        fVar27 = *pfVar3 + fVar19 * pfVar3[1];
        fVar25 = pfVar3[2] + fVar19 * pfVar3[3];
        fVar22 = fVar27 * 0.0;
        fVar19 = *(float *)(lVar15 + 0x278) + fVar22 * 0.0 + fVar25 * 0.0 + (fVar27 + 0.0) * 7.5;
        fVar22 = *(float *)(lVar15 + 0x27c) +
                 (fVar22 * 0.0 + 1.0) * 0.0 + fVar25 * 0.0 * 0.0 + fVar22 * 7.5;
        fVar25 = *(float *)(lVar15 + 0x280) + (fVar25 * 0.0 * 0.0 - fVar27 * 0.0) + fVar25 * 7.5;
      }
      local_f0 = (undefined *)CONCAT44(fVar22,fVar19);
      local_e4 = -1.0;
      fStack_e0 = 1.0;
      local_dc = 5.60519e-45;
      fStack_d8 = 0.0;
      local_e8 = fVar25;
      iVar14 = FUN_016ed290(&local_f0,0,0,0);
      if (iVar14 == 0) {
        lVar15 = *(long *)(param_4 + 0x68);
        if (lVar15 == 0) {
          fVar19 = 0.0;
          fVar22 = 0.0;
          fVar25 = 0.0;
        }
        else {
          uVar10 = *(int *)(lVar15 + 0x2b4) + 0x71c71c8;
          pfVar3 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar10 >> 0x18) * 0x10);
          fVar19 = (float)(uVar10 & 0xffffff) * 5.9604645e-08;
          fVar27 = *pfVar3 + fVar19 * pfVar3[1];
          fVar25 = pfVar3[2] + fVar19 * pfVar3[3];
          fVar22 = fVar27 * 0.0;
          fVar19 = *(float *)(lVar15 + 0x278) + fVar22 * 0.0 + fVar25 * 0.0 + (fVar27 + 0.0) * 7.5;
          fVar22 = *(float *)(lVar15 + 0x27c) +
                   (fVar22 * 0.0 + 1.0) * 0.0 + fVar25 * 0.0 * 0.0 + fVar22 * 7.5;
          fVar25 = *(float *)(lVar15 + 0x280) + (fVar25 * 0.0 * 0.0 - fVar27 * 0.0) + fVar25 * 7.5;
        }
        local_e4 = -1.0;
        fStack_e0 = 1.0;
        local_f0 = (undefined *)CONCAT44(fVar22,fVar19);
        local_dc = 5.60519e-45;
        fStack_d8 = 0.0;
        local_e8 = fVar25;
        iVar14 = FUN_016ed290(&local_f0,0,0,0);
        if (iVar14 == 0) {
          lVar15 = *(long *)(param_4 + 0x68);
          if (lVar15 == 0) {
            fVar19 = 0.0;
            fVar22 = 0.0;
            fVar25 = 0.0;
          }
          else {
            uVar10 = *(int *)(lVar15 + 0x2b4) + 0xf8e38e38;
            pfVar3 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar10 >> 0x18) * 0x10);
            fVar19 = (float)(uVar10 & 0xffffff) * 5.9604645e-08;
            fVar27 = *pfVar3 + fVar19 * pfVar3[1];
            fVar25 = pfVar3[2] + fVar19 * pfVar3[3];
            fVar22 = fVar27 * 0.0;
            fVar19 = *(float *)(lVar15 + 0x278) + fVar22 * 0.0 + fVar25 * 0.0 + (fVar27 + 0.0) * 7.5
            ;
            fVar22 = *(float *)(lVar15 + 0x27c) +
                     (fVar22 * 0.0 + 1.0) * 0.0 + fVar25 * 0.0 * 0.0 + fVar22 * 7.5;
            fVar25 = *(float *)(lVar15 + 0x280) + (fVar25 * 0.0 * 0.0 - fVar27 * 0.0) + fVar25 * 7.5
            ;
          }
          local_e4 = -1.0;
          fStack_e0 = 1.0;
          local_f0 = (undefined *)CONCAT44(fVar22,fVar19);
          local_dc = 5.60519e-45;
          fStack_d8 = 0.0;
          local_e8 = fVar25;
          iVar14 = FUN_016ed290(&local_f0,0,0,0);
          if (iVar14 == 0) goto LAB_0247bc50;
        }
      }
      param_3 = fVar25;
      fVar24 = fVar19;
      fVar26 = fVar22;
    }
LAB_0247bc50:
    uVar10 = FUN_006f0400(fVar24 - fVar23,param_3 - fVar21);
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,uVar10);
    fVar21 = (float)FUN_016e4798(&local_f0);
    fVar23 = -fVar21;
    if (0.0 <= fVar21) {
      fVar23 = fVar21;
    }
    pfVar3 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar10 >> 0x18 ^ 0x80) * 0x10);
    fVar21 = (float)(uVar10 & 0xffffff) * 5.9604645e-08;
    iVar14 = (int)(fVar26 * 4.0);
    fVar19 = *pfVar3 + fVar21 * pfVar3[1];
    fVar21 = pfVar3[2] + fVar21 * pfVar3[3];
    fVar22 = fVar19 * 0.0;
    fVar23 = (fVar23 / 45.0) * 0.0 + 10.0;
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(short *)(param_4 + 0x1904) = (short)iVar14;
    *(int *)(param_4 + 0x1900) = (int)(fVar24 * 999.99994);
    *piVar2 = (int)(param_3 * 999.99994);
    *(int *)(param_4 + 0x190a) =
         (int)((fVar24 + fVar22 * 0.0 + fVar21 * 0.0 + fVar23 * (fVar19 + 0.0)) * 999.99994);
    iVar14 = (int)((fVar26 + (fVar22 * 0.0 + 1.0) * 0.0 + fVar21 * 0.0 * 0.0 + fVar23 * fVar22) *
                  4.0);
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(short *)(param_4 + 0x190e) = (short)iVar14;
    *(int *)(param_4 + 0x1910) =
         (int)((param_3 + (fVar21 * 0.0 * 0.0 - fVar19 * 0.0) + fVar23 * fVar21) * 999.99994);
    *(short *)(param_4 + 0x1914) = (short)(uVar10 >> 0x10);
    puVar16 = *(undefined8 **)(param_4 + 0x60);
  }
  else {
    puVar16 = *(undefined8 **)(param_4 + 0x60);
  }
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  local_f0 = PTR_DAT_04bb2020 + 0x10;
  local_e8 = 1.6732503e-36;
  local_e4 = 0.0;
  FUN_017029bc(puVar16,&local_f0,6,0,0);
  fStack_f8 = (float)(int)*(short *)(param_4 + 0x1904) * 0.25;
  local_fc = (float)*(int *)(param_4 + 0x1900) * 0.001;
  local_f4 = (float)*piVar2 * 0.001;
  FUN_016dec40(param_4,&local_fc,0,0,0,0,0);
  fVar26 = local_f4;
  fVar24 = local_fc;
  if (*(int *)(param_4 + 0x178) != 0) {
    return;
  }
  *(undefined2 *)(param_4 + 0x7c8) = 0;
  *(undefined4 *)(param_4 + 0x7e4) = 0;
  pbVar1 = (byte *)(param_4 + 0x1ee8);
  *(undefined8 *)(param_4 + 0x7dc) = 0;
  *(float *)(param_4 + 0x7c0) = fStack_f8;
  *(float *)(param_4 + 0x7bc) = local_fc;
  *(undefined8 *)(param_4 + 0x7cc) = 0x100000002;
  *(undefined8 *)(param_4 + 0x7d4) = 0;
  uVar5 = *(ushort *)(param_4 + 0x1914);
  *(float *)(param_4 + 0x7c4) = local_f4;
  uVar10 = (uint)uVar5 << 0x10;
  local_104 = (float)(int)*(short *)(param_4 + 0x190e) * 0.25;
  fVar25 = (float)*(int *)(param_4 + 0x190a) * 0.001;
  fVar19 = (float)*(int *)(param_4 + 0x1910) * 0.001;
  local_10c = uVar10;
  local_108 = fVar25;
  local_100 = fVar19;
  uVar20 = FUN_016e026c(0,*(long *)(param_4 + 0x68) + 0x278,0,0);
  lVar15 = *(long *)(param_4 + 0x68);
  fVar29 = *(float *)(lVar15 + 0x278);
  fVar22 = *(float *)(lVar15 + 0x280);
  fVar21 = fVar24 - fVar29;
  fVar23 = fVar26 - fVar22;
  fVar27 = *(float *)(lVar15 + 0x27c);
  uVar4 = *(undefined4 *)(param_4 + 0x230);
  uStack_ce = 0;
  local_e4 = 3.0;
  fStack_d8 = 4.34403e-44;
  fStack_d4 = 12.5;
  local_d0 = 0x101;
  local_f0 = (undefined *)CONCAT44(uVar20,fVar24);
  local_e8 = fVar26;
  local_110 = *(undefined4 *)PTR_DAT_04bb3238;
  bVar13 = *pbVar1;
  local_cc = 0;
  uStack_c8 = 0x10000;
  fVar24 = SQRT(fVar21 * fVar21 + 0.0 + fVar23 * fVar23);
  fVar26 = 1.0 / fVar24;
  if (0.0 < fVar24) {
    fVar23 = fVar23 * fVar26;
    fVar21 = fVar21 * fVar26;
  }
  fVar28 = 0.0;
  if (0.0 < fVar24) {
    fVar28 = fVar26 * 0.0 * 10.0;
  }
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  local_dc = (float)uVar4;
  fStack_e0._0_1_ = bVar13;
  uVar12 = FUN_0251fad0(&local_f0,&local_110);
  if ((uVar12 & 1) == 0) {
    fVar28 = fVar27 + fVar28;
    local_e4 = 3.0;
    fVar24 = fVar29 + fVar21 * 10.0;
    fStack_d8 = 4.34403e-44;
    fStack_d4 = 12.5;
    local_d0 = 0x101;
    uStack_ce = 0;
    fVar26 = fVar22 + fVar23 * 10.0;
    local_cc = 0;
    uStack_c8 = 0x10000;
    local_f0 = (undefined *)CONCAT44(fVar28,fVar24);
    local_e8 = fVar26;
    local_dc = (float)uVar4;
    fStack_e0._0_1_ = bVar13;
    uVar12 = FUN_0251fad0(&local_f0,&local_110);
    if ((uVar12 & 1) != 0) goto LAB_0247c044;
    local_e4 = 3.0;
    fStack_e0 = (float)CONCAT31(fStack_e0._1_3_,bVar13);
    fStack_d8 = 4.34403e-44;
    fStack_d4 = 12.5;
    local_f0._0_4_ = (fVar29 + fVar24) * 0.5;
    local_f0._4_4_ = (fVar27 + fVar28) * 0.5;
    local_d0 = 0x101;
    uStack_ce = 0;
    local_e8 = (fVar22 + fVar26) * 0.5;
    local_cc = 0;
    uStack_c8 = 0x10000;
    local_dc = (float)uVar4;
    uVar12 = FUN_0251fad0(&local_f0,&local_110);
    if ((uVar12 & 1) != 0) goto LAB_0247c044;
    fStack_d8 = 0.0;
    fStack_d4 = 0.0;
    local_d0 = 0;
    uStack_ce = 0;
    uStack_cd = 0;
    local_cc = 0x40000000;
    local_c4 = (undefined *)0x0;
    local_bc = 0;
    local_b4 = 0;
    local_b0 = 1;
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,fVar25);
    local_e8 = fVar19;
    FUN_016e026c(0,&local_108,0,0);
    uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
    fStack_d8 = local_fc;
    fStack_d4 = fStack_f8;
    local_e8 = *(float *)(*(long *)(param_4 + 0x68) + 0x280);
    local_f0 = *(undefined **)(*(long *)(param_4 + 0x68) + 0x278);
    fStack_e0 = fStack_f8;
    local_dc = local_f4;
    local_d0 = SUB42(local_f4,0);
    uStack_ce = (undefined1)((uint)local_f4 >> 0x10);
    uStack_cd = (undefined1)((uint)local_f4 >> 0x18);
    local_e4 = local_fc;
    fVar24 = local_f4;
    fVar26 = fStack_f8;
    local_114 = FUN_016f36e0(&local_f0);
    bVar13 = 0;
    if (local_114 < 0xf) {
      if ((1 << (ulong)(local_114 & 0x1f) & 0x3872U) == 0) {
        if ((1 << (ulong)(local_114 & 0x1f) & 0x4784U) == 0) {
          bVar7 = false;
          if (local_114 == 3) {
            fVar26 = local_c4._0_4_;
            if ((local_c4._0_4_ == 0.0) && ((float)local_bc == 0.0)) {
              bVar13 = 0;
              bVar7 = false;
            }
            else {
              fVar24 = local_e4;
              if (local_c4._0_4_ != local_e4) goto LAB_0247c2cc;
              bVar13 = 0;
              bVar7 = (float)local_bc != local_dc;
              fVar26 = local_dc;
            }
          }
        }
        else {
          bVar7 = false;
          bVar13 = 1;
        }
      }
      else {
LAB_0247c2cc:
        bVar13 = 0;
        bVar7 = true;
      }
    }
    else {
      bVar7 = false;
    }
    bVar9 = *pbVar1;
    local_11c = local_f4;
    lVar15 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)bVar9 * 0x740;
    if (7 < bVar9) {
      lVar15 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    local_124 = CONCAT44(fStack_f8,local_fc);
    if ((ulong)bVar9 < 8) {
      local_12c = 1.4013e-45;
      local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
      local_118 = *(byte *)(*(long *)PTR_DAT_04bb4718 + (ulong)bVar9 * 0x80 + 0x302) >> 1 & 1;
    }
    else {
      local_118 = 0;
    }
    local_117 = 0;
    FUN_0252d8f0(&local_12c,pbVar1);
    puVar6 = PTR_DAT_04bb43c0;
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    uVar11 = FUN_0277d6c4(&local_12c);
    lVar18 = *(long *)puVar6;
    if (lVar18 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        local_138 = 0;
        local_148 = PTR_DAT_04bc0510 + 0x10;
        local_140 = local_12c;
        uStack_13c = uStack_128;
        uVar11 = FUN_0277d6c4(&local_140);
        if (*(long *)puVar6 != 0) {
          lVar17 = *(long *)(lVar18 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(&local_12c);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
               (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8), lVar17 != 0))
            {
              local_138 = lVar17;
            }
          }
        }
        uVar8 = FUN_01ad9244(&local_148);
        local_117 = CONCAT11(uVar8,(undefined1)local_117) & 0x1ff;
      }
    }
    bVar9 = FUN_022bca8c(lVar15 + 0xb0,&local_124);
    if ((bVar13 & (bVar9 ^ 1)) != 1) {
      if ((bVar7 & (bVar9 ^ 1)) == 1) {
        FUN_016dec40(param_4,&local_c4,0,0,0,0,0);
LAB_0247c5c4:
        *(undefined1 *)(param_4 + 0x1917) = 4;
        *(undefined2 *)(param_4 + 0x7c8) = 0x2d;
        *(undefined4 *)(param_4 + 0x7cc) = 1;
        *(undefined1 *)(param_4 + 0x1916) = 1;
      }
      else {
        *(undefined4 *)(lVar15 + 0xa8) = 0;
        *(undefined8 *)(lVar15 + 8) = 0x100000000;
        uVar12 = FUN_022bce10(lVar15 + 0xb0,&local_124);
        if ((uVar12 & 1) != 0) {
          if (*(int *)(lVar15 + 0x104) - 10U < 4) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
            *(undefined1 *)(param_4 + 0x1916) = 1;
          }
          if ((*(byte *)(lVar15 + 0x10c) >> 1 & 1) != 0) {
            FUN_02549a64(pbVar1);
          }
          *(undefined2 *)(param_4 + 0x7c8) = 0x45;
          return;
        }
        if (bVar7 != false) goto LAB_0247c5c4;
        FUN_02472994(param_4,param_4 + 0x7bc,param_4 + 0x1900);
      }
      local_148 = (undefined *)0x0;
      local_140 = 10.0;
      fVar23 = (float)FUN_016e4640(&local_108,&local_10c,&local_148);
      iVar14 = (int)(fVar26 * 4.0);
      if (0x7ffe < iVar14) {
        iVar14 = 0x7fff;
      }
      if (iVar14 < -0x7fff) {
        iVar14 = -0x8000;
      }
      *(short *)(param_4 + 0x1904) = (short)iVar14;
      *(int *)(param_4 + 0x1900) = (int)(fVar23 * 999.99994);
      goto LAB_0247c18c;
    }
    *(undefined1 *)(param_4 + 0x1917) = 3;
    lVar15 = *(long *)(param_4 + 0x68);
    *(undefined2 *)(param_4 + 0x7c8) = 0x2c;
    *(undefined4 *)(param_4 + 0x7cc) = 2;
    *(undefined1 *)(param_4 + 0x1916) = 3;
    *(int *)(param_4 + 0x190a) = (int)(*(float *)(lVar15 + 0x278) * 999.99994);
    iVar14 = (int)(*(float *)(lVar15 + 0x27c) * 4.0);
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(short *)(param_4 + 0x190e) = (short)iVar14;
    puVar6 = PTR_DAT_04bb2d00;
    fVar24 = (float)(uVar10 & 0xff0000) * 5.9604645e-08;
    *(int *)(param_4 + 0x1910) = (int)(*(float *)(lVar15 + 0x280) * 999.99994);
    *(undefined2 *)(param_4 + 0x1914) = *(undefined2 *)(lVar15 + 0x2b6);
    pfVar3 = (float *)(puVar6 + ((ulong)(uVar5 >> 4) & 0xff0));
    fVar26 = *pfVar3 + fVar24 * pfVar3[1];
    fVar24 = pfVar3[2] + fVar24 * pfVar3[3];
    fVar21 = fVar26 * 0.0;
    fVar23 = fVar24 * 0.0 * 0.0 - fVar26 * 0.0;
    fVar19 = (fVar21 * 0.0 + 1.0) * 0.0 + fVar24 * 0.0 * 0.0;
    fVar26 = fVar21 * 0.0 + fVar24 * 0.0 + (fVar26 + 0.0) * 10.0;
  }
  else {
LAB_0247c044:
    *(undefined4 *)(param_4 + 0x21a8) = local_110;
    *(undefined1 *)(param_4 + 0x1917) = 4;
    lVar15 = *(long *)(param_4 + 0x68);
    *(undefined2 *)(param_4 + 0x7c8) = 0x2d;
    *(undefined4 *)(param_4 + 0x7cc) = 3;
    *(undefined1 *)(param_4 + 0x1916) = 2;
    *(int *)(param_4 + 0x190a) = (int)(*(float *)(lVar15 + 0x278) * 999.99994);
    iVar14 = (int)(*(float *)(lVar15 + 0x27c) * 4.0);
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(short *)(param_4 + 0x190e) = (short)iVar14;
    puVar6 = PTR_DAT_04bb2d00;
    fVar24 = (float)(uVar10 & 0xff0000) * 5.9604645e-08;
    *(int *)(param_4 + 0x1910) = (int)(*(float *)(lVar15 + 0x280) * 999.99994);
    *(undefined2 *)(param_4 + 0x1914) = *(undefined2 *)(lVar15 + 0x2b6);
    pfVar3 = (float *)(puVar6 + ((ulong)(uVar5 >> 4) & 0xff0));
    fVar26 = *pfVar3 + fVar24 * pfVar3[1];
    fVar24 = pfVar3[2] + fVar24 * pfVar3[3];
    fVar21 = fVar26 * 0.0;
    fVar23 = fVar24 * 0.0 * 0.0 - fVar26 * 0.0;
    fVar19 = (fVar21 * 0.0 + 1.0) * 0.0 + fVar24 * 0.0 * 0.0;
    fVar26 = fVar21 * 0.0 + fVar24 * 0.0 + (fVar26 + 0.0) * 10.0;
  }
  fVar24 = local_100 + fVar23 + fVar24 * 10.0;
  iVar14 = (int)((local_104 + fVar19 + fVar21 * 10.0) * 4.0);
  if (0x7ffe < iVar14) {
    iVar14 = 0x7fff;
  }
  *(int *)(param_4 + 0x1900) = (int)((local_108 + fVar26) * 999.99994);
  if (iVar14 < -0x7fff) {
    iVar14 = -0x8000;
  }
  *(short *)(param_4 + 0x1904) = (short)iVar14;
LAB_0247c18c:
  *piVar2 = (int)(fVar24 * 999.99994);
  return;
}

