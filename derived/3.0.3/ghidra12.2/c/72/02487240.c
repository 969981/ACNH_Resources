
void FUN_02487240(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  float *pfVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  undefined2 extraout_var;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  short sVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_158;
  undefined4 local_150;
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  int local_130;
  undefined4 uStack_12c;
  undefined2 local_128;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined1 auStack_c8 [2];
  undefined2 local_c6;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  
  piVar3 = (int *)(param_4 + 0x1906);
  pbVar2 = (byte *)(param_4 + 0x1ee8);
  if ((((*(byte *)(param_4 + 0x1ee8) < 8) && (uVar6 = FUN_02582d8c(pbVar2,1), uVar6 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0')) {
    FUN_02582d8c(pbVar2,1);
  }
  if (*(int *)(param_4 + 0x178) == 0) {
    local_148 = *(undefined **)(*(long *)(param_4 + 0x68) + 0x278);
    local_f0 = (undefined *)CONCAT53((int5)((ulong)local_f0 >> 0x18),0x10000);
    local_f0._4_4_ = 0x41200000;
    local_140._0_4_ = *(float *)(*(long *)(param_4 + 0x68) + 0x280);
    fVar19 = (float)FUN_024bcd34(param_4,&local_f0);
    fVar25 = (float)FUN_006f0400(fVar19 - (float)local_148,param_3 - (float)local_140);
    local_b4 = fVar25;
    fVar20 = (float)FUN_016e4798(&local_b4);
    fVar21 = -fVar20;
    if (0.0 <= fVar20) {
      fVar21 = fVar20;
    }
    fVar21 = (fVar21 / 45.0) * 2.0710678 + 10.0;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)((uint)fVar25 >> 0x18 ^ 0x80) * 0x10);
    fVar20 = (float)((uint)fVar25 & 0xffffff) * 5.9604645e-08;
    fVar22 = *pfVar1 + fVar20 * pfVar1[1];
    fVar20 = pfVar1[2] + fVar20 * pfVar1[3];
    fVar23 = fVar22 * 0.0;
    local_148 = (undefined *)
                CONCAT44(param_2 + (fVar23 * 0.0 + 1.0) * 0.0 + fVar20 * 0.0 * 0.0 + fVar21 * fVar23
                         ,fVar19 + fVar23 * 0.0 + fVar20 * 0.0 + fVar21 * (fVar22 + 0.0));
    local_140 = (char *)CONCAT44(local_140._4_4_,
                                 param_3 + (fVar20 * 0.0 * 0.0 - fVar22 * 0.0) + fVar21 * fVar20);
    fVar21 = (float)FUN_0231eef4(param_4,&local_148,0);
    local_148 = (undefined *)CONCAT44(fVar21,(float)local_148);
    iVar13 = (int)(param_2 * 4.0);
    local_f0 = (undefined *)((ulong)local_f0._4_4_ << 0x20);
    iVar9 = (int)(fVar19 * 999.99994);
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    sVar12 = (short)iVar13;
    *(short *)(param_4 + 0x1904) = sVar12;
    iVar16 = (int)(param_3 * 999.99994);
    *(int *)(param_4 + 0x1900) = iVar9;
    *piVar3 = iVar16;
    *(int *)(param_4 + 0x190a) = (int)((float)local_148 * 999.99994);
    iVar13 = (int)(fVar21 * 4.0);
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    *(short *)(param_4 + 0x190e) = (short)iVar13;
    *(int *)(param_4 + 0x1910) = (int)((float)local_140 * 999.99994);
    *(short *)(param_4 + 0x1914) = (short)((uint)fVar25 >> 0x10);
    *(undefined1 *)(param_4 + 0x1917) = 0;
  }
  else {
    iVar9 = *(int *)(param_4 + 0x1900);
    sVar12 = *(short *)(param_4 + 0x1904);
    iVar16 = *piVar3;
  }
  local_b4 = (float)iVar9 * 0.001;
  fStack_b0 = (float)(int)sVar12 * 0.25;
  local_ac = (float)iVar16 * 0.001;
  FUN_016dec40(param_4,&local_b4,0,0,0,0,0);
  fVar25 = local_ac;
  fVar21 = local_b4;
  puVar17 = (undefined8 *)(param_4 + 0x764);
  *(undefined4 *)(param_4 + 0x78c) = 0;
  *(undefined8 *)(param_4 + 0x76a) = 0;
  *puVar17 = 0;
  *(undefined8 *)(param_4 + 0x784) = 0;
  *(undefined8 *)(param_4 + 0x774) = 0x100000002;
  *(undefined8 *)(param_4 + 0x77c) = 0;
  if (*(int *)(param_4 + 0x178) != 0) goto LAB_02487744;
  fVar24 = 0.0;
  *(float *)(param_4 + 0x768) = fStack_b0;
  *(float *)(param_4 + 0x764) = local_b4;
  *(float *)(param_4 + 0x76c) = local_ac;
  uVar18 = FUN_016e026c(0,*(long *)(param_4 + 0x68) + 0x278,0,0);
  lVar10 = *(long *)(param_4 + 0x68);
  fVar23 = *(float *)(lVar10 + 0x278);
  fVar22 = *(float *)(lVar10 + 0x280);
  fVar20 = fVar21 - fVar23;
  fVar26 = fVar25 - fVar22;
  fVar19 = SQRT(fVar20 * fVar20 + 0.0 + fVar26 * fVar26);
  if (0.0 < fVar19) {
    fVar19 = 1.0 / fVar19;
    fVar20 = fVar20 * fVar19;
    fVar26 = fVar26 * fVar19;
    fVar24 = fVar19 * 0.0 * 10.0;
  }
  uStack_126 = 0;
  bVar8 = *pbVar2;
  fVar19 = *(float *)(lVar10 + 0x27c);
  uVar4 = *(undefined4 *)(param_4 + 0x230);
  local_b8 = *(undefined4 *)PTR_DAT_04bb3238;
  local_130 = 0x1f;
  uStack_12c = 0x41480000;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_128 = 0x101;
  local_124 = 0;
  uStack_120 = 0x10000;
  local_138 = (undefined *)CONCAT44(uVar4,(undefined4)local_138);
  local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar8);
  local_148 = (undefined *)CONCAT44(uVar18,fVar21);
  local_140 = (char *)CONCAT44(0x40400000,fVar25);
  uVar7 = FUN_0251fad0(&local_148,&local_b8);
  if ((uVar7 & 1) == 0) {
    fVar24 = fVar19 + fVar24;
    local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar8);
    local_138 = (undefined *)CONCAT44(uVar4,(undefined4)local_138);
    local_130 = 0x1f;
    uStack_12c = 0x41480000;
    fVar25 = fVar23 + fVar20 * 10.0;
    fVar21 = fVar22 + fVar26 * 10.0;
    local_128 = 0x101;
    uStack_126 = 0;
    local_124 = 0;
    uStack_120 = 0x10000;
    local_148 = (undefined *)CONCAT44(fVar24,fVar25);
    local_140 = (char *)CONCAT44(0x40400000,fVar21);
    uVar7 = FUN_0251fad0(&local_148,&local_b8);
    if ((uVar7 & 1) != 0) goto LAB_024876b4;
    local_130 = 0x1f;
    uStack_12c = 0x41480000;
    local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar8);
    local_138 = (undefined *)CONCAT44(uVar4,(undefined4)local_138);
    local_128 = 0x101;
    uStack_126 = 0;
    local_124 = 0;
    uStack_120 = 0x10000;
    local_148 = (undefined *)CONCAT44((fVar19 + fVar24) * 0.5,(fVar23 + fVar25) * 0.5);
    local_140 = (char *)CONCAT44(0x40400000,(fVar22 + fVar21) * 0.5);
    uVar7 = FUN_0251fad0(&local_148,&local_b8);
    if ((uVar7 & 1) != 0) goto LAB_024876b4;
    bVar8 = *pbVar2;
    local_130 = 3;
    uStack_12c = 0xbf800000;
    local_148._0_4_ = local_b4;
    local_148._4_4_ = fStack_b0;
    local_128 = 0x101;
    local_124 = 0;
    uStack_120 = 0x10000;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    local_140 = (char *)CONCAT44(0x41200000,local_ac);
    local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar8);
    uStack_126 = 1;
    local_138 = (undefined *)CONCAT44(*(undefined4 *)(param_4 + 0x230),(undefined4)local_138);
    uVar7 = FUN_0251fad0(&local_148,0);
    if ((uVar7 & 1) == 0) {
      local_148 = (undefined *)
                  CONCAT44((float)(int)*(short *)(param_4 + 0x190e) * 0.25,
                           (float)*(int *)(param_4 + 0x190a) * 0.001);
      local_140 = (char *)CONCAT44(local_140._4_4_,(float)*(int *)(param_4 + 0x1910) * 0.001);
      uVar7 = FUN_024bd7a0(param_4,&local_b4,&local_148,0);
      if ((uVar7 & 1) == 0) {
        local_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        local_d4 = 0;
        local_d0 = 0;
        local_f0 = PTR_DAT_04bc2ef8 + 0x10;
        local_e8 = 0;
        local_cc = 1;
        lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar2 * 0x740;
        if (7 < *pbVar2) {
          lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        FUN_007ef010(auStack_c8,PTR_DAT_04bb3170);
        local_e0 = *(undefined4 *)(param_4 + 0x76c);
        local_c6 = 0;
        local_e8 = *(undefined8 *)(param_4 + 0x764);
        local_c4 = 0;
        local_c0 = 0;
        local_d4 = *(undefined4 *)(*(long *)(param_4 + 0x68) + 0x280);
        uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
        *(undefined4 *)(lVar10 + 0x1b8) = 0;
        *(undefined8 *)(lVar10 + 0x118) = 0x100000000;
        uStack_dc = (undefined4)uVar11;
        uStack_d8 = (undefined4)((ulong)uVar11 >> 0x20);
        local_f4 = FUN_022e37a0(lVar10 + 0x1c0,&local_f0);
        local_148 = PTR_DAT_04bc2f00 + 0x10;
        local_138 = PTR_DAT_04bbc248 + 0x10;
        local_140 = (char *)CONCAT44(local_140._4_4_,*(uint *)(lVar10 + 0x1e8));
        local_130 = (int)*(undefined8 *)(lVar10 + 0x1f8);
        uVar11 = *(undefined8 *)(lVar10 + 0x220);
        uVar14 = *(undefined8 *)(lVar10 + 0x1fd);
        uStack_12c._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar10 + 0x1f8) >> 0x20);
        uStack_12c._1_3_ = (undefined3)uVar14;
        local_128 = (undefined2)((ulong)uVar14 >> 0x18);
        uStack_126 = (undefined1)((ulong)uVar14 >> 0x28);
        uStack_125 = (undefined1)((ulong)uVar14 >> 0x30);
        local_124._0_1_ = (undefined1)((ulong)uVar14 >> 0x38);
        uVar15 = *(undefined8 *)(lVar10 + 0x218);
        local_100 = *(float *)(lVar10 + 0x228);
        local_118 = *(undefined8 *)(lVar10 + 0x210);
        uStack_120 = (undefined4)*(undefined8 *)(lVar10 + 0x208);
        local_11c = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x208) >> 0x20);
        local_110._4_1_ = (char)((ulong)uVar15 >> 0x20);
        if (local_110._4_1_ == '\0') {
          if ((int)((ulong)uVar14 >> 0x18) == 0) {
            local_158 = CONCAT44(local_158._4_4_,local_130);
            bVar5 = local_130 != 0;
          }
          else {
            bVar5 = false;
          }
        }
        else {
          bVar5 = *(uint *)(lVar10 + 0x1e8) < 2;
        }
        local_108._0_4_ = (float)uVar11;
        fVar21 = (float)local_108 - *(float *)(param_4 + 0x764);
        fVar25 = local_100 - *(float *)(param_4 + 0x76c);
        local_110 = uVar15;
        if (1.0 < SQRT(fVar25 * fVar25 + fVar21 * fVar21)) {
          *(float *)(param_4 + 0x764) = (float)local_108;
          local_108._4_4_ = (float)((ulong)uVar11 >> 0x20);
          *(float *)(param_4 + 0x76c) = local_100;
          *(float *)(param_4 + 0x768) = local_108._4_4_;
          local_108 = uVar11;
          uVar18 = FUN_016e026c(0,puVar17,0,0);
          *(undefined4 *)(param_4 + 0x768) = uVar18;
          *(int *)(param_4 + 0x1900) = (int)((float)local_108 * 999.99994);
          iVar13 = (int)(local_108._4_4_ * 4.0);
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          if (iVar13 < -0x7fff) {
            iVar13 = -0x8000;
          }
          *(short *)(param_4 + 0x1904) = (short)iVar13;
          *piVar3 = (int)(local_100 * 999.99994);
          lVar10 = *(long *)(param_4 + 0x68);
          *(int *)(param_4 + 0x190a) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
          iVar13 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          if (iVar13 < -0x7fff) {
            iVar13 = -0x8000;
          }
          *(short *)(param_4 + 0x190e) = (short)iVar13;
          *(int *)(param_4 + 0x1910) = (int)(*(float *)(lVar10 + 0x280) * 999.99994);
          FUN_006f0400((float)local_108 - *(float *)(lVar10 + 0x278),
                       local_100 - *(float *)(lVar10 + 0x280));
          *(undefined2 *)(param_4 + 0x1914) = extraout_var;
          uVar11 = local_108;
        }
        local_108 = uVar11;
        if (!bVar5) {
          uVar18 = FUN_022edb8c(&local_148);
          uVar7 = FUN_02472a24(param_4,puVar17,uVar18);
          if ((uVar7 & 1) != 0) goto LAB_02487744;
        }
        if ((local_f4 | 2) != 2) {
          uVar18 = 5;
          *(undefined2 *)(param_4 + 0x770) = 5;
          goto LAB_024876e8;
        }
        local_14c = (int)(float)local_140;
        if ((float)local_140 != 2.8026e-45) {
          if ((float)local_140 == 1.4013e-45) {
            uVar18 = 2;
          }
          else {
            if ((float)local_140 != 0.0) {
              if ((char)local_11c != '\0') {
                local_158 = local_118;
                local_150 = (undefined4)local_110;
                uVar18 = FUN_016e026c(0,&local_158,0,0);
                local_158 = CONCAT44(uVar18,(undefined4)local_158);
                FUN_016dec40(param_4,&local_158,0,0,0,0,0);
              }
              local_158 = CONCAT44(local_158._4_4_,1);
              *(undefined1 *)(param_4 + 0x1917) = 4;
              *(undefined4 *)(param_4 + 0x774) = 1;
              *(undefined1 *)(param_4 + 0x1916) = 1;
              *(undefined2 *)(param_4 + 0x770) = 0x2d;
              goto LAB_02487744;
            }
            uVar18 = 1;
          }
          local_158 = CONCAT44(local_158._4_4_,uVar18);
          *(char *)(param_4 + 0x1917) = (char)uVar18;
          *(undefined2 *)(param_4 + 0x770) = 0x85;
          goto LAB_02487744;
        }
      }
      FUN_02472994(param_4,puVar17,param_4 + 0x1900);
      goto LAB_02487744;
    }
    local_148 = (undefined *)CONCAT44(local_148._4_4_,3);
    *(undefined1 *)(param_4 + 0x1917) = 3;
    *(undefined1 *)(param_4 + 0x1916) = 3;
    *(undefined2 *)(param_4 + 0x770) = 0x2c;
    uVar18 = 2;
  }
  else {
LAB_024876b4:
    *(undefined4 *)(param_4 + 0x21a8) = local_b8;
    *(undefined1 *)(param_4 + 0x1917) = 4;
    local_148 = (undefined *)CONCAT44(local_148._4_4_,2);
    *(undefined1 *)(param_4 + 0x1916) = 2;
    *(undefined2 *)(param_4 + 0x770) = 0x2d;
    uVar18 = 3;
  }
LAB_024876e8:
  *(undefined4 *)(param_4 + 0x774) = uVar18;
  lVar10 = *(long *)(param_4 + 0x68);
  *(int *)(param_4 + 0x190a) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
  iVar13 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
  if (0x7ffe < iVar13) {
    iVar13 = 0x7fff;
  }
  if (iVar13 < -0x7fff) {
    iVar13 = -0x8000;
  }
  *(short *)(param_4 + 0x190e) = (short)iVar13;
  *(int *)(param_4 + 0x1910) = (int)(*(float *)(lVar10 + 0x280) * 999.99994);
  *(undefined2 *)(param_4 + 0x1914) = *(undefined2 *)(lVar10 + 0x2b6);
LAB_02487744:
  uVar6 = (uint)*(byte *)(param_4 + 0x1917);
  if (4 < uVar6) {
    uVar6 = 0;
  }
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,uVar6);
  switch(uVar6) {
  case 1:
    puVar17 = *(undefined8 **)(param_4 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    local_140 = "PlayerCliffMakerCreateReady";
    break;
  case 2:
    puVar17 = *(undefined8 **)(param_4 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    local_140 = "PlayerCliffMakerDeleteReady";
    break;
  case 3:
    puVar17 = *(undefined8 **)(param_4 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    local_140 = "PlayerCliffMakerAirshotReady";
    break;
  case 4:
    puVar17 = *(undefined8 **)(param_4 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    local_140 = "PlayerCliffMakerReflectReady";
    break;
  default:
    puVar17 = *(undefined8 **)(param_4 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    local_140 = "PlayerCliffMakerNGReady";
  }
  local_148 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar17,&local_148,6,0,0);
  return;
}

