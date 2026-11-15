
void FUN_024bdf3c(undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4)

{
  float *pfVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  byte bVar13;
  int iVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_118;
  float fStack_114;
  float local_110;
  undefined1 local_10c;
  undefined1 auStack_10a [6];
  uint local_104;
  float local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  float local_f0;
  byte local_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  float fStack_e4;
  float local_e0;
  float local_dc;
  undefined4 uStack_d8;
  float local_d4;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_44;
  
  *(undefined1 *)(param_4 + 0x3a5) = 0;
  piVar3 = (int *)(param_4 + 0x1906);
  cVar4 = *(char *)(param_4 + 0x1921);
  *(uint *)(param_4 + 0x17d0) = *(uint *)(param_4 + 0x17d0) & 0xbfffffff;
  *(undefined4 *)(param_4 + 0x398) = *(undefined4 *)(param_4 + 0x39c);
  if (cVar4 == '\0' && *(int *)(param_4 + 0x178) == 0) {
    local_104 = 0;
    local_e8 = 0;
    uStack_e7 = 0;
    uStack_e6 = 1;
    fStack_e4 = 10.0;
    fStack_114 = (float)param_2;
    local_118 = (float)FUN_024bcd34(param_4,&local_e8);
    local_f8 = CONCAT44(fStack_114,local_118);
    local_c4 = CONCAT35(local_c4._5_3_,0x40000000);
    local_bc = 0;
    local_b4 = 0;
    local_ac = 0;
    local_a8 = 1;
    uStack_d0 = SUB41(local_118,0);
    uStack_cf = (undefined1)((uint)local_118 >> 8);
    uStack_ce = (undefined2)((uint)local_118 >> 0x10);
    local_e0 = *(float *)(*(long *)(param_4 + 0x68) + 0x280);
    uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
    local_e8 = (byte)uVar11;
    uStack_e7 = (undefined1)((ulong)uVar11 >> 8);
    uStack_e6 = (undefined1)((ulong)uVar11 >> 0x10);
    uStack_e5 = (undefined1)((ulong)uVar11 >> 0x18);
    fStack_e4 = (float)((ulong)uVar11 >> 0x20);
    local_110 = param_3;
    local_f0 = param_3;
    local_dc = local_118;
    uStack_d8 = fStack_114;
    local_d4 = param_3;
    uStack_cc = fStack_114;
    local_c8 = param_3;
    iVar14 = FUN_016f36e0(&local_e8);
    local_f8 = local_bc;
    local_f0 = (float)local_b4;
    if (iVar14 == 5) {
      iVar14 = (int)(float)local_bc;
      bVar5 = (float)local_bc < 0.0;
      bVar6 = (float)local_b4 < 0.0;
      iVar20 = (int)(float)local_b4;
      fStack_114 = (float)FUN_016e026c(0,&local_f8,0,0);
      local_118 = (float)(int)((int)((float)iVar14 / 5.0) - (uint)bVar5 & 0xfffffffe) * 5.0 + 5.0;
      local_110 = (float)(int)((int)((float)iVar20 / 5.0) - (uint)bVar6 & 0xfffffffe) * 5.0 + 5.0;
    }
    fVar18 = (float)(int)((int)((float)(int)local_118 / 5.0) - (uint)(local_118 < 0.0) & 0xfffffffe)
             * 5.0 + 5.0;
    fVar19 = (float)(int)((int)((float)(int)local_110 / 5.0) - (uint)(local_110 < 0.0) & 0xfffffffe)
             * 5.0 + 5.0;
    fStack_114 = (float)FUN_016e026c(0,&local_118,0,0);
    local_118 = fVar18;
    local_110 = fVar19;
    uVar7 = FUN_006f0400(fVar18 - *(float *)(*(long *)(param_4 + 0x68) + 0x278),
                         fVar19 - *(float *)(*(long *)(param_4 + 0x68) + 0x280));
    local_104 = uVar7;
    fVar19 = (float)FUN_016e4798(&local_104);
    fVar18 = -fVar19;
    if (0.0 <= fVar19) {
      fVar18 = fVar19;
    }
    fVar19 = (float)(uVar7 & 0xffffff) * 5.9604645e-08;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar7 >> 0x18 ^ 0x80) * 0x10);
    fVar18 = (fVar18 / 45.0) * 0.0 + 10.0 + 0.0;
    fVar17 = *pfVar1 + fVar19 * pfVar1[1];
    fVar16 = pfVar1[2] + fVar19 * pfVar1[3];
    fVar21 = fVar17 * 0.0;
    fVar19 = local_118 + fVar21 * 0.0 + fVar16 * 0.0 + fVar18 * (fVar17 + 0.0);
    fStack_e4 = fStack_114 + (fVar21 * 0.0 + 1.0) * 0.0 + fVar16 * 0.0 * 0.0 + fVar18 * fVar21;
    local_e0 = local_110 + (fVar16 * 0.0 * 0.0 - fVar17 * 0.0) + fVar18 * fVar16;
    local_e8 = SUB41(fVar19,0);
    uStack_e7 = (undefined1)((uint)fVar19 >> 8);
    uStack_e6 = (undefined1)((uint)fVar19 >> 0x10);
    uStack_e5 = (undefined1)((uint)fVar19 >> 0x18);
    fVar18 = (float)FUN_016e026c(0,&local_e8,0,0);
    iVar20 = (int)(fVar18 * 4.0);
    iVar14 = (int)(fStack_114 * 4.0);
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(short *)(param_4 + 0x1904) = (short)iVar14;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    *(int *)(param_4 + 0x1900) = (int)(local_118 * 999.99994);
    *piVar3 = (int)(local_110 * 999.99994);
    *(int *)(param_4 + 0x190a) =
         (int)((float)CONCAT13(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,local_e8))) *
              999.99994);
    *(int *)(param_4 + 0x1910) = (int)(local_e0 * 999.99994);
    if (iVar20 < -0x7fff) {
      iVar20 = -0x8000;
    }
    *(short *)(param_4 + 0x190e) = (short)iVar20;
    *(short *)(param_4 + 0x1914) = (short)(uVar7 >> 0x10);
    if (*(int *)(param_4 + 0x178) == 0) goto LAB_024be2c0;
LAB_024bdfa8:
    puVar15 = *(undefined8 **)(param_4 + 0x60);
  }
  else {
    if (*(int *)(param_4 + 0x178) != 0) goto LAB_024bdfa8;
LAB_024be2c0:
    fVar18 = (float)*(int *)(param_4 + 0x1900) * 0.001;
    fVar17 = fVar18 - (float)*(int *)(param_4 + 0x190a) * 0.001;
    fVar19 = (float)*piVar3 * 0.001 - (float)*(int *)(param_4 + 0x1910) * 0.001;
    fVar18 = fVar18 - *(float *)(*(long *)(param_4 + 0x68) + 0x278);
    fVar16 = *(float *)(*(long *)(param_4 + 0x68) + 0x280);
    *(undefined1 *)(param_4 + 0x1923) = 0;
    fVar16 = (float)*piVar3 * 0.001 - fVar16;
    *(bool *)(param_4 + 0x1922) =
         SQRT(fVar16 * fVar16 + fVar18 * fVar18) < SQRT(fVar19 * fVar19 + fVar17 * fVar17);
    puVar15 = *(undefined8 **)(param_4 + 0x60);
  }
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_e8 = (byte)puVar2;
  uStack_e7 = (undefined1)((ulong)puVar2 >> 8);
  uStack_e6 = (undefined1)((ulong)puVar2 >> 0x10);
  uStack_e5 = (undefined1)((ulong)puVar2 >> 0x18);
  fStack_e4 = (float)((ulong)puVar2 >> 0x20);
  local_e0 = 1.6350907e-36;
  local_dc = 0.0;
  FUN_017081d0(puVar15,&local_e8,3,0,0);
  local_f8._4_4_ = (float)(int)*(short *)(param_4 + 0x1904) * 0.25;
  local_f8._0_4_ = (float)*(int *)(param_4 + 0x1900) * 0.001;
  local_f0 = (float)*piVar3 * 0.001;
  FUN_016dec40(param_4,&local_f8,0,0,0,0,0);
  fVar19 = local_f0;
  fVar18 = (float)local_f8;
  if (*(int *)(param_4 + 0x178) != 0) {
    return;
  }
  *(undefined2 *)(param_4 + 0x6d4) = 0;
  *(undefined8 *)(param_4 + 0x6e0) = 0;
  *(undefined8 *)(param_4 + 0x6e8) = 0;
  *(undefined8 *)(param_4 + 0x6d8) = 0x100000002;
  *(undefined8 *)(param_4 + 0x6f0) = 0x900000000;
  *(float *)(param_4 + 0x6cc) = local_f8._4_4_;
  *(float *)(param_4 + 0x6c8) = (float)local_f8;
  *(float *)(param_4 + 0x6d0) = local_f0;
  if (cVar4 != '\0') {
    local_118 = 9.18327e-41;
    fStack_114 = 0.0;
    FUN_0277d4ac(&local_118);
    local_e8 = 0xff;
    fStack_e4 = 9.18327e-41;
    local_e0 = 0.0;
    local_118 = (float)*(undefined8 *)(param_4 + 0x1919);
    fStack_114 = (float)((ulong)*(undefined8 *)(param_4 + 0x1919) >> 0x20);
    lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_4 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_4 + 0x1ee8)) {
      lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined8 *)(lVar12 + 0x358) = 0x100000000;
    *(undefined4 *)(lVar12 + 0x3f8) = 0;
    FUN_0277d4ac(&fStack_e4);
    local_e8 = *(byte *)(param_4 + 0x1ee8);
    if (7 < local_e8) {
      local_e8 = 0xff;
    }
    fStack_e4 = local_118;
    local_e0 = fStack_114;
    uVar8 = FUN_022fd774(lVar12 + 0x400,&local_e8);
    if ((uVar8 & 1) != 0) {
      *(undefined2 *)(param_4 + 0x6d4) = 0x31;
      return;
    }
    goto switchD_024be90c_default;
  }
  fVar24 = 0.0;
  fVar16 = (float)FUN_016e026c(0,*(long *)(param_4 + 0x68) + 0x278,0,0);
  lVar12 = *(long *)(param_4 + 0x68);
  fVar23 = *(float *)(lVar12 + 0x278);
  fVar22 = *(float *)(lVar12 + 0x280);
  fVar21 = fVar18 - fVar23;
  fVar25 = fVar19 - fVar22;
  fVar17 = SQRT(fVar21 * fVar21 + 0.0 + fVar25 * fVar25);
  if (0.0 < fVar17) {
    fVar17 = 1.0 / fVar17;
    fVar21 = fVar21 * fVar17;
    fVar24 = fVar17 * 0.0;
    fVar25 = fVar25 * fVar17;
  }
  fVar17 = *(float *)(lVar12 + 0x27c);
  local_44 = *(undefined4 *)PTR_DAT_04bb3238;
  lVar12 = FUN_0251e98c(1);
  (**(code **)(*(long *)(lVar12 + 0x2a0) + 0xf0))(lVar12 + 0x2a0);
  bVar13 = *(byte *)(param_4 + 0x1ee8);
  uVar10 = *(undefined4 *)(param_4 + 0x230);
  local_c8._2_2_ = (ushort)((uint)local_c8 >> 0x10) & 0xff00;
  local_dc = 3.0;
  uStack_d0 = 0x1f;
  uStack_cf = 0;
  uStack_ce = 0;
  uStack_cc = 0x41480000;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  local_c8._0_2_ = 0x101;
  local_c4 = 0x1000000000000;
  local_e8 = SUB41(fVar18,0);
  uStack_e7 = (undefined1)((uint)fVar18 >> 8);
  uStack_e6 = (undefined1)((uint)fVar18 >> 0x10);
  uStack_e5 = (undefined1)((uint)fVar18 >> 0x18);
  local_e0 = fVar19;
  fStack_e4 = fVar16;
  local_d4 = (float)uVar10;
  uStack_d8._0_1_ = bVar13;
  uVar8 = FUN_0251fad0(&local_e8,&local_44);
  if ((uVar8 & 1) == 0) {
    local_dc = 3.0;
    uStack_d0 = 0x1f;
    uStack_cf = 0;
    uStack_ce = 0;
    uStack_cc = 0x41480000;
    fVar26 = fVar23 + fVar21 * 10.0;
    fVar21 = fVar22 + fVar25 * 10.0;
    local_c8._0_3_ = 0x101;
    local_c4 = 0x1000000000000;
    fVar24 = fVar17 + fVar24 * 10.0;
    local_e8 = SUB41(fVar26,0);
    uStack_e7 = (undefined1)((uint)fVar26 >> 8);
    uStack_e6 = (undefined1)((uint)fVar26 >> 0x10);
    uStack_e5 = (undefined1)((uint)fVar26 >> 0x18);
    fStack_e4 = fVar24;
    local_e0 = fVar21;
    local_d4 = (float)uVar10;
    uStack_d8._0_1_ = bVar13;
    uVar8 = FUN_0251fad0(&local_e8,&local_44);
    if ((uVar8 & 1) == 0) {
      local_dc = 3.0;
      uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar13);
      uStack_d0 = 0x1f;
      uStack_cf = 0;
      uStack_ce = 0;
      uStack_cc = 0x41480000;
      fVar23 = (fVar23 + fVar26) * 0.5;
      local_e0 = (fVar22 + fVar21) * 0.5;
      local_c8 = (float)CONCAT13(local_c8._3_1_,0x101);
      fStack_e4 = (fVar17 + fVar24) * 0.5;
      local_c4 = 0x1000000000000;
      local_e8 = SUB41(fVar23,0);
      uStack_e7 = (undefined1)((uint)fVar23 >> 8);
      uStack_e6 = (undefined1)((uint)fVar23 >> 0x10);
      uStack_e5 = (undefined1)((uint)fVar23 >> 0x18);
      local_d4 = (float)uVar10;
      uVar8 = FUN_0251fad0(&local_e8,&local_44);
      if ((uVar8 & 1) == 0) {
        lVar12 = *(long *)(param_4 + 0x68);
        local_dc = -1.0;
        uStack_d8 = 0x3f000000;
        local_d4 = 1.12104e-44;
        uStack_d0 = 0;
        uStack_cf = 0;
        uStack_ce = 0;
        fVar18 = (fVar18 + *(float *)(lVar12 + 0x278)) * 0.5;
        fStack_e4 = (fVar16 + *(float *)(lVar12 + 0x27c)) * 0.5;
        local_e8 = SUB41(fVar18,0);
        uStack_e7 = (undefined1)((uint)fVar18 >> 8);
        uStack_e6 = (undefined1)((uint)fVar18 >> 0x10);
        uStack_e5 = (undefined1)((uint)fVar18 >> 0x18);
        local_e0 = (fVar19 + *(float *)(lVar12 + 0x280)) * 0.5;
        iVar14 = FUN_016ed290(&local_e8,&local_104,0,0);
        if (iVar14 != 0) {
          FUN_016e7890(&local_118);
          local_100 = (float)FUN_016e06d0(0,&local_104,0,0,&local_118,0);
          if (*(float *)(*(long *)(param_4 + 0x68) + 0x27c) < local_100) {
            *(float *)(param_4 + 0x6cc) = local_100;
            local_118 = (float)((uint)local_118 & 0xffffff00);
            fStack_114 = -100.0;
            local_110 = 0.0;
            local_10c = 0;
            *(uint *)(param_4 + 0x6c8) = local_104;
            *(undefined4 *)(param_4 + 0x6d0) = local_fc;
            FUN_016e7890(auStack_10a);
            fVar19 = (float)FUN_016e8340(0x3f800000,&local_f8,&local_118);
            fVar19 = fVar19 - *(float *)(*(long *)(param_4 + 0x68) + 0x27c);
            fVar18 = -fVar19;
            if (0.0 <= fVar19) {
              fVar18 = fVar19;
            }
            if (fVar18 < 1.0) {
              FUN_016dec40(param_4,&local_104,0,0,0,0,0);
            }
            uVar10 = 1;
            *(undefined1 *)(param_4 + 0x1917) = 4;
            *(undefined1 *)(param_4 + 0x1916) = 1;
            uVar9 = 0x2d;
            goto LAB_024bea18;
          }
        }
        fStack_e4 = (float)(int)*(short *)(param_4 + 0x190e) * 0.25;
        fVar18 = (float)*(int *)(param_4 + 0x190a) * 0.001;
        local_e8 = SUB41(fVar18,0);
        uStack_e7 = (undefined1)((uint)fVar18 >> 8);
        uStack_e6 = (undefined1)((uint)fVar18 >> 0x10);
        uStack_e5 = (undefined1)((uint)fVar18 >> 0x18);
        local_e0 = (float)*(int *)(param_4 + 0x1910) * 0.001;
        uVar8 = FUN_024bd7a0(param_4,&local_f8,&local_e8,1);
        if ((uVar8 & 1) != 0) {
          FUN_02472994(param_4,param_4 + 0x6c8,param_4 + 0x1900);
          return;
        }
        uVar11 = *(undefined8 *)(param_4 + 0x6c8);
        uStack_cf = 0;
        local_e0 = *(float *)(param_4 + 0x6d0);
        local_e8 = (byte)uVar11;
        uStack_e7 = (undefined1)((ulong)uVar11 >> 8);
        uStack_e6 = (undefined1)((ulong)uVar11 >> 0x10);
        uStack_e5 = (undefined1)((ulong)uVar11 >> 0x18);
        fStack_e4 = (float)((ulong)uVar11 >> 0x20);
        local_d4 = *(float *)(*(long *)(param_4 + 0x68) + 0x280);
        uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
        uStack_d0 = *(undefined1 *)(param_4 + 0x1918);
        local_dc = (float)uVar11;
        uStack_d8 = (undefined4)((ulong)uVar11 >> 0x20);
        lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_4 + 0x1ee8) * 0x740
        ;
        if (7 < *(byte *)(param_4 + 0x1ee8)) {
          lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        *(undefined8 *)(lVar12 + 0x248) = 0x100000000;
        *(undefined4 *)(lVar12 + 0x2e8) = 0;
        uVar8 = FUN_022f5830(lVar12 + 0x2f0,&local_e8);
        if ((uVar8 & 1) == 0) {
          if ((*(uint *)(lVar12 + 0x328) >> 2 & 1) == 0) goto switchD_024be90c_default;
        }
        else {
          *(uint *)(param_4 + 0x17d0) =
               *(uint *)(param_4 + 0x17d0) & 0x80000000 |
               *(uint *)(param_4 + 0x17d0) & 0x3fffffff | (*(uint *)(lVar12 + 0x328) & 1) << 0x1e;
          uVar7 = *(uint *)(lVar12 + 0x328);
          uVar11 = FUN_0251d150(param_4 + 0x1ee8);
          FUN_024beb18(uVar11,uVar7 >> 5 & 1);
          local_104 = *(uint *)(lVar12 + 0x32c);
          *(uint *)(param_4 + 0x6f4) = local_104;
          switch(local_104) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 0xb:
          case 0xc:
          case 0xd:
            *(undefined2 *)(param_4 + 0x6d4) = 0x31;
            if (*(int *)(param_4 + 0x178) != 0) {
              return;
            }
LAB_024be920:
            *(undefined1 *)(param_4 + 0x1923) = 1;
            return;
          case 9:
            if ((*(byte *)(lVar12 + 0x328) >> 2 & 1) == 0) {
              FUN_02472994(param_4,param_4 + 0x6c8,param_4 + 0x1900);
              if (*(int *)(param_4 + 0x178) != 0) {
                return;
              }
              if (*(short *)(param_4 + 0x6d4) != 0x31) {
                return;
              }
              goto LAB_024be920;
            }
            break;
          case 10:
            if ((*(uint *)(lVar12 + 0x328) >> 2 & 1) == 0) {
              if ((*(uint *)(lVar12 + 0x328) >> 1 & 1) != 0) {
                local_118 = (float)*(undefined8 *)(lVar12 + 0x338);
                fStack_114 = (float)((ulong)*(undefined8 *)(lVar12 + 0x338) >> 0x20);
                local_110 = *(float *)(lVar12 + 0x340);
                fStack_114 = (float)FUN_016e026c(0,&local_118,0,0);
                FUN_016dec40(param_4,&local_118,0,0,0,0,0);
              }
              *(undefined1 *)(param_4 + 0x1917) = 4;
              uVar10 = 1;
              *(undefined1 *)(param_4 + 0x1916) = 1;
              uVar9 = 0x2d;
            }
            else {
              *(undefined1 *)(param_4 + 0x1917) = 1;
              uVar10 = 4;
              *(undefined1 *)(param_4 + 0x1916) = 4;
              uVar9 = 0xbc;
            }
            *(undefined2 *)(param_4 + 0x6d4) = uVar9;
            *(undefined4 *)(param_4 + 0x6d8) = uVar10;
            return;
          default:
switchD_024be90c_default:
            uVar10 = 5;
            *(undefined2 *)(param_4 + 0x6d4) = 5;
            goto LAB_024be938;
          }
        }
        uVar10 = 4;
        *(undefined1 *)(param_4 + 0x1917) = 1;
        *(undefined1 *)(param_4 + 0x1916) = 4;
        uVar9 = 0xbc;
LAB_024bea18:
        *(undefined2 *)(param_4 + 0x6d4) = uVar9;
        *(undefined4 *)(param_4 + 0x6d8) = uVar10;
        return;
      }
    }
  }
  *(undefined4 *)(param_4 + 0x21a8) = local_44;
  *(undefined1 *)(param_4 + 0x1917) = 4;
  *(undefined1 *)(param_4 + 0x1916) = 2;
  *(undefined2 *)(param_4 + 0x6d4) = 0x2d;
  uVar10 = 3;
LAB_024be938:
  *(undefined4 *)(param_4 + 0x6d8) = uVar10;
  lVar12 = *(long *)(param_4 + 0x68);
  *(int *)(param_4 + 0x190a) = (int)(*(float *)(lVar12 + 0x278) * 999.99994);
  iVar14 = (int)(*(float *)(lVar12 + 0x27c) * 4.0);
  if (0x7ffe < iVar14) {
    iVar14 = 0x7fff;
  }
  if (iVar14 < -0x7fff) {
    iVar14 = -0x8000;
  }
  *(short *)(param_4 + 0x190e) = (short)iVar14;
  *(int *)(param_4 + 0x1910) = (int)(*(float *)(lVar12 + 0x280) * 999.99994);
  *(undefined2 *)(param_4 + 0x1914) = *(undefined2 *)(lVar12 + 0x2b6);
  return;
}

