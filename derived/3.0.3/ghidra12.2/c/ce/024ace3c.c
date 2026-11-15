
void FUN_024ace3c(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  float *pfVar1;
  byte *pbVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  short sVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  undefined8 uStack_108;
  undefined4 local_100;
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
  
  if (*(int *)(param_4 + 0x178) == 0) {
    local_148 = *(undefined **)(*(long *)(param_4 + 0x68) + 0x278);
    local_f0 = (undefined *)CONCAT53((int5)((ulong)local_f0 >> 0x18),0x10000);
    local_f0._4_4_ = 0x41200000;
    local_140._0_4_ = *(float *)(*(long *)(param_4 + 0x68) + 0x280);
    fVar16 = (float)FUN_024bcd34(param_4,&local_f0);
    fVar22 = (float)FUN_006f0400(fVar16 - (float)local_148,param_3 - (float)local_140);
    local_b4 = fVar22;
    fVar17 = (float)FUN_016e4798(&local_b4);
    fVar18 = -fVar17;
    if (0.0 <= fVar17) {
      fVar18 = fVar17;
    }
    fVar18 = (fVar18 / 45.0) * 2.0710678 + 10.0;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)((uint)fVar22 >> 0x18 ^ 0x80) * 0x10);
    fVar17 = (float)((uint)fVar22 & 0xffffff) * 5.9604645e-08;
    fVar19 = *pfVar1 + fVar17 * pfVar1[1];
    fVar17 = pfVar1[2] + fVar17 * pfVar1[3];
    fVar20 = fVar19 * 0.0;
    local_148 = (undefined *)
                CONCAT44(param_2 + (fVar20 * 0.0 + 1.0) * 0.0 + fVar17 * 0.0 * 0.0 + fVar18 * fVar20
                         ,fVar16 + fVar20 * 0.0 + fVar17 * 0.0 + fVar18 * (fVar19 + 0.0));
    local_140 = (char *)CONCAT44(local_140._4_4_,
                                 param_3 + (fVar17 * 0.0 * 0.0 - fVar19 * 0.0) + fVar18 * fVar17);
    fVar18 = (float)FUN_0231eef4(param_4,&local_148,0);
    local_148 = (undefined *)CONCAT44(fVar18,(float)local_148);
    iVar11 = (int)(param_2 * 4.0);
    local_f0 = (undefined *)((ulong)local_f0._4_4_ << 0x20);
    iVar8 = (int)(fVar16 * 999.99994);
    if (0x7ffe < iVar11) {
      iVar11 = 0x7fff;
    }
    if (iVar11 < -0x7fff) {
      iVar11 = -0x8000;
    }
    sVar10 = (short)iVar11;
    *(short *)(param_4 + 0x1904) = sVar10;
    iVar13 = (int)(param_3 * 999.99994);
    *(int *)(param_4 + 0x1900) = iVar8;
    *(int *)(param_4 + 0x1906) = iVar13;
    *(int *)(param_4 + 0x190a) = (int)((float)local_148 * 999.99994);
    iVar11 = (int)(fVar18 * 4.0);
    if (0x7ffe < iVar11) {
      iVar11 = 0x7fff;
    }
    if (iVar11 < -0x7fff) {
      iVar11 = -0x8000;
    }
    *(short *)(param_4 + 0x190e) = (short)iVar11;
    *(int *)(param_4 + 0x1910) = (int)((float)local_140 * 999.99994);
    *(short *)(param_4 + 0x1914) = (short)((uint)fVar22 >> 0x10);
    *(undefined1 *)(param_4 + 0x1917) = 0;
  }
  else {
    iVar8 = *(int *)(param_4 + 0x1900);
    sVar10 = *(short *)(param_4 + 0x1904);
    iVar13 = *(int *)(param_4 + 0x1906);
  }
  local_b4 = (float)iVar8 * 0.001;
  fStack_b0 = (float)(int)sVar10 * 0.25;
  local_ac = (float)iVar13 * 0.001;
  FUN_016dec40(param_4,&local_b4,0,0,0,0,0);
  *(undefined8 *)(param_4 + 0x7a8) = 0;
  pbVar2 = (byte *)(param_4 + 0x1ee8);
  *(undefined8 *)(param_4 + 0x796) = 0;
  *(undefined8 *)(param_4 + 0x7a0) = 0x100000002;
  *(undefined8 *)(param_4 + 0x790) = 0;
  *(undefined8 *)(param_4 + 0x7b0) = 0;
  *(undefined4 *)(param_4 + 0x7b8) = 0;
  if ((((*(byte *)(param_4 + 0x1ee8) < 8) && (uVar6 = FUN_02582d8c(pbVar2,1), uVar6 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0')) {
    FUN_02582d8c(pbVar2,1);
  }
  fVar22 = local_ac;
  fVar18 = local_b4;
  if (*(int *)(param_4 + 0x178) != 0) goto LAB_024ad344;
  fVar21 = 0.0;
  *(float *)(param_4 + 0x794) = fStack_b0;
  *(float *)(param_4 + 0x790) = local_b4;
  *(float *)(param_4 + 0x798) = local_ac;
  uVar15 = FUN_016e026c(0,*(long *)(param_4 + 0x68) + 0x278,0,0);
  lVar9 = *(long *)(param_4 + 0x68);
  fVar20 = *(float *)(lVar9 + 0x278);
  fVar19 = *(float *)(lVar9 + 0x280);
  fVar17 = fVar18 - fVar20;
  fVar23 = fVar22 - fVar19;
  fVar16 = SQRT(fVar17 * fVar17 + 0.0 + fVar23 * fVar23);
  if (0.0 < fVar16) {
    fVar16 = 1.0 / fVar16;
    fVar17 = fVar17 * fVar16;
    fVar23 = fVar23 * fVar16;
    fVar21 = fVar16 * 0.0 * 10.0;
  }
  uStack_126 = 0;
  bVar5 = *pbVar2;
  fVar16 = *(float *)(lVar9 + 0x27c);
  uVar3 = *(undefined4 *)(param_4 + 0x230);
  local_b8 = *(undefined4 *)PTR_DAT_04bb3238;
  local_130 = 0x1f;
  uStack_12c = 0x41480000;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_128 = 0x101;
  local_124 = 0;
  uStack_120 = 0x10000;
  local_138 = (undefined *)CONCAT44(uVar3,(undefined4)local_138);
  local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar5);
  local_148 = (undefined *)CONCAT44(uVar15,fVar18);
  local_140 = (char *)CONCAT44(0x40400000,fVar22);
  uVar7 = FUN_0251fad0(&local_148,&local_b8);
  if ((uVar7 & 1) == 0) {
    fVar21 = fVar16 + fVar21;
    local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar5);
    local_138 = (undefined *)CONCAT44(uVar3,(undefined4)local_138);
    local_130 = 0x1f;
    uStack_12c = 0x41480000;
    fVar22 = fVar20 + fVar17 * 10.0;
    fVar18 = fVar19 + fVar23 * 10.0;
    local_128 = 0x101;
    uStack_126 = 0;
    local_124 = 0;
    uStack_120 = 0x10000;
    local_148 = (undefined *)CONCAT44(fVar21,fVar22);
    local_140 = (char *)CONCAT44(0x40400000,fVar18);
    uVar7 = FUN_0251fad0(&local_148,&local_b8);
    if ((uVar7 & 1) != 0) goto LAB_024ad2b4;
    local_130 = 0x1f;
    uStack_12c = 0x41480000;
    local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar5);
    local_138 = (undefined *)CONCAT44(uVar3,(undefined4)local_138);
    local_128 = 0x101;
    uStack_126 = 0;
    local_124 = 0;
    uStack_120 = 0x10000;
    local_148 = (undefined *)CONCAT44((fVar16 + fVar21) * 0.5,(fVar20 + fVar22) * 0.5);
    local_140 = (char *)CONCAT44(0x40400000,(fVar19 + fVar18) * 0.5);
    uVar7 = FUN_0251fad0(&local_148,&local_b8);
    if ((uVar7 & 1) != 0) goto LAB_024ad2b4;
    bVar5 = *pbVar2;
    local_130 = 3;
    uStack_12c = 0xbf800000;
    local_148._0_4_ = local_b4;
    local_148._4_4_ = fStack_b0;
    local_128 = 0x101;
    uStack_126 = 0;
    local_124 = 0;
    uStack_120 = 0x10000;
    local_140 = (char *)CONCAT44(0x41200000,local_ac);
    local_138 = (undefined *)CONCAT44(*(undefined4 *)(param_4 + 0x230),(undefined4)local_138);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar5);
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
        local_cc = 1;
        local_e8 = 0;
        FUN_007ef010(auStack_c8,PTR_DAT_04bb3170);
        local_e8 = *(undefined8 *)(param_4 + 0x790);
        local_c6 = 0;
        local_c4 = 0;
        local_e0 = *(undefined4 *)(param_4 + 0x798);
        local_c0 = 0;
        local_d4 = *(undefined4 *)(*(long *)(param_4 + 0x68) + 0x280);
        uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
        local_d0 = *(undefined1 *)(param_4 + 0x1918);
        uStack_dc = (undefined4)uVar12;
        uStack_d8 = (undefined4)((ulong)uVar12 >> 0x20);
        lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_4 + 0x1ee8) * 0x740;
        if (7 < *(byte *)(param_4 + 0x1ee8)) {
          lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        *(undefined8 *)(lVar9 + 0x118) = 0x100000000;
        *(undefined4 *)(lVar9 + 0x1b8) = 0;
        local_f4 = FUN_022e24dc(lVar9 + 0x1c0,&local_f0);
        local_148 = PTR_DAT_04bc2f00 + 0x10;
        local_138 = PTR_DAT_04bbc248 + 0x10;
        local_140 = (char *)CONCAT44(local_140._4_4_,*(uint *)(lVar9 + 0x1e8));
        local_130 = (int)*(undefined8 *)(lVar9 + 0x1f8);
        uStack_108 = *(undefined8 *)(lVar9 + 0x220);
        uVar12 = *(undefined8 *)(lVar9 + 0x1fd);
        uStack_12c._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar9 + 0x1f8) >> 0x20);
        uStack_12c._1_3_ = (undefined3)uVar12;
        local_128 = (undefined2)((ulong)uVar12 >> 0x18);
        uStack_126 = (undefined1)((ulong)uVar12 >> 0x28);
        uStack_125 = (undefined1)((ulong)uVar12 >> 0x30);
        local_124._0_1_ = (undefined1)((ulong)uVar12 >> 0x38);
        local_100 = *(undefined4 *)(lVar9 + 0x228);
        local_118 = *(undefined8 *)(lVar9 + 0x210);
        uStack_120 = (undefined4)*(undefined8 *)(lVar9 + 0x208);
        local_11c = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x208) >> 0x20);
        local_110._4_1_ = (char)((ulong)*(undefined8 *)(lVar9 + 0x218) >> 0x20);
        if (local_110._4_1_ == '\0') {
          if ((int)((ulong)uVar12 >> 0x18) == 0) {
            local_158 = CONCAT44(local_158._4_4_,local_130);
            bVar4 = local_130 != 0;
          }
          else {
            bVar4 = false;
          }
        }
        else {
          bVar4 = *(uint *)(lVar9 + 0x1e8) < 2;
        }
        local_110 = *(undefined8 *)(lVar9 + 0x218);
        bVar5 = FUN_022eded4(&local_148);
        *(byte *)(param_4 + 0x1919) = bVar5 & 1;
        *(undefined1 *)(param_4 + 0x191b) = (undefined1)local_124;
        if (!bVar4) {
          uVar15 = FUN_022edb8c(&local_148);
          uVar7 = FUN_02472a24(param_4,param_4 + 0x790,uVar15);
          if ((uVar7 & 1) != 0) goto LAB_024ad344;
        }
        if ((local_f4 | 2) != 2) {
          uVar15 = 5;
          *(undefined2 *)(param_4 + 0x79c) = 5;
          goto LAB_024ad2e8;
        }
        local_14c = (int)(float)local_140;
        if ((float)local_140 != 2.8026e-45) {
          if ((float)local_140 == 1.4013e-45) {
            uVar15 = 2;
          }
          else {
            if ((float)local_140 != 0.0) {
              if ((char)local_11c != '\0') {
                local_158 = local_118;
                local_150 = (undefined4)local_110;
                uVar15 = FUN_016e026c(0,&local_158,0,0);
                local_158 = CONCAT44(uVar15,(undefined4)local_158);
                FUN_016dec40(param_4,&local_158,0,0,0,0,0);
              }
              local_158 = CONCAT44(local_158._4_4_,1);
              *(undefined1 *)(param_4 + 0x1917) = 4;
              *(undefined4 *)(param_4 + 0x7a0) = 1;
              *(undefined1 *)(param_4 + 0x1916) = 1;
              *(undefined2 *)(param_4 + 0x79c) = 0x2d;
              goto LAB_024ad344;
            }
            uVar15 = 1;
          }
          local_158 = CONCAT44(local_158._4_4_,uVar15);
          *(char *)(param_4 + 0x1917) = (char)uVar15;
          *(undefined2 *)(param_4 + 0x79c) = 0x37;
          goto LAB_024ad344;
        }
      }
      FUN_02472994(param_4,param_4 + 0x790,param_4 + 0x1900);
      goto LAB_024ad344;
    }
    local_148 = (undefined *)CONCAT44(local_148._4_4_,3);
    *(undefined1 *)(param_4 + 0x1917) = 3;
    *(undefined1 *)(param_4 + 0x1916) = 3;
    *(undefined2 *)(param_4 + 0x79c) = 0x2c;
    uVar15 = 2;
  }
  else {
LAB_024ad2b4:
    *(undefined4 *)(param_4 + 0x21a8) = local_b8;
    *(undefined1 *)(param_4 + 0x1917) = 4;
    local_148 = (undefined *)CONCAT44(local_148._4_4_,2);
    *(undefined1 *)(param_4 + 0x1916) = 2;
    *(undefined2 *)(param_4 + 0x79c) = 0x2d;
    uVar15 = 3;
  }
LAB_024ad2e8:
  *(undefined4 *)(param_4 + 0x7a0) = uVar15;
  lVar9 = *(long *)(param_4 + 0x68);
  *(int *)(param_4 + 0x190a) = (int)(*(float *)(lVar9 + 0x278) * 999.99994);
  iVar11 = (int)(*(float *)(lVar9 + 0x27c) * 4.0);
  if (0x7ffe < iVar11) {
    iVar11 = 0x7fff;
  }
  if (iVar11 < -0x7fff) {
    iVar11 = -0x8000;
  }
  *(short *)(param_4 + 0x190e) = (short)iVar11;
  *(int *)(param_4 + 0x1910) = (int)(*(float *)(lVar9 + 0x280) * 999.99994);
  *(undefined2 *)(param_4 + 0x1914) = *(undefined2 *)(lVar9 + 0x2b6);
LAB_024ad344:
  uVar6 = (uint)*(byte *)(param_4 + 0x1917);
  if (4 < uVar6) {
    uVar6 = 0;
  }
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,uVar6);
  switch(uVar6) {
  case 1:
    puVar14 = *(undefined8 **)(param_4 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_140 = "PlayerRiverMakerDigReady";
    break;
  case 2:
    puVar14 = *(undefined8 **)(param_4 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_140 = "PlayerRiverMakerBuryReady";
    break;
  case 3:
    puVar14 = *(undefined8 **)(param_4 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_140 = "PlayerRiverMakerAirshotReady";
    break;
  case 4:
    puVar14 = *(undefined8 **)(param_4 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_140 = "PlayerRiverMakerReflectReady";
    break;
  default:
    puVar14 = *(undefined8 **)(param_4 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_140 = "PlayerRiverMakerNGReady";
  }
  local_148 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar14,&local_148,6,0,0);
  return;
}

