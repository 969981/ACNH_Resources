
undefined8 FUN_029f68c0(long param_1,float *param_2)

{
  byte bVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined8 local_410 [2];
  float local_400 [4];
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_3c0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined4 local_380;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined4 local_340;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined8 auStack_210 [24];
  undefined8 local_150 [32];
  
  puVar8 = PTR_DAT_04bb26a8;
  fVar21 = *param_2;
  lVar12 = *(long *)(param_1 + 0x2020);
  if (lVar12 != param_1 + 0x2018) {
    fVar22 = param_2[1];
    bVar10 = 0;
    fVar23 = param_2[2];
    do {
      lVar13 = *(long *)(lVar12 + -8);
      fVar24 = *(float *)(lVar13 + 0x20) - fVar21;
      fVar26 = *(float *)(lVar13 + 0x24) - fVar22;
      fVar27 = *(float *)(lVar13 + 0x28) - fVar23;
      fVar28 = *(float *)(lVar13 + 0x2c) - 0.0;
      auVar25._0_4_ = fVar24 * fVar24;
      auVar25._4_4_ = fVar26 * fVar26;
      auVar25._8_4_ = fVar27 * fVar27;
      auVar25._12_4_ = fVar28 * fVar28;
      auVar29 = NEON_ext(auVar25,auVar25,8,1);
      if (auVar29._0_4_ + auVar25._0_4_ + auVar29._4_4_ + auVar25._4_4_ <= 56.25) {
        auVar25 = *(undefined1 (*) [16])(lVar13 + 0x10);
        uVar14 = (long)(char)bVar10 & 0xffffffff;
        if ((bVar10 & 0xf0) != 0) {
          uVar14 = 0;
        }
        local_150[uVar14 * 2 + 1] = auVar25._8_8_;
        local_150[uVar14 * 2] = auVar25._0_8_;
        bVar1 = bVar10 + 1;
        bVar9 = '\x0e' < (char)bVar10;
        bVar10 = bVar1;
        if (bVar9) {
          uVar11 = (uint)bVar1;
          goto LAB_029f6998;
        }
      }
      lVar12 = *(long *)(lVar12 + 8);
    } while (lVar12 + -8 != param_1 + 0x2010);
    if (bVar10 != 0) {
      uVar11 = (uint)(char)bVar10;
LAB_029f6998:
      local_400[0] = 3.4028235e+38;
      local_3e0 = 0x7f7fffff;
      local_3c0 = 0x7f7fffff;
      local_3a0 = 0x7f7fffff;
      local_380 = 0x7f7fffff;
      local_360 = 0x7f7fffff;
      local_340 = 0x7f7fffff;
      local_320 = 0x7f7fffff;
      local_300 = 0x7f7fffff;
      local_2e0 = 0x7f7fffff;
      local_2c0 = 0x7f7fffff;
      local_2a0 = 0x7f7fffff;
      local_280 = 0x7f7fffff;
      local_260 = 0x7f7fffff;
      local_240 = 0x7f7fffff;
      local_220 = 0x7f7fffff;
      lVar12 = *(long *)(param_1 + 0x6b0);
      local_410[1] = 0;
      local_410[0] = 0;
      uStack_3e8 = 0;
      local_3f0 = 0;
      uStack_3c8 = 0;
      local_3d0 = 0;
      uStack_3a8 = 0;
      local_3b0 = 0;
      uStack_388 = 0;
      local_390 = 0;
      uStack_368 = 0;
      local_370 = 0;
      uStack_348 = 0;
      local_350 = 0;
      uStack_328 = 0;
      local_330 = 0;
      uStack_308 = 0;
      local_310 = 0;
      uStack_2e8 = 0;
      local_2f0 = 0;
      uStack_2c8 = 0;
      local_2d0 = 0;
      uStack_2a8 = 0;
      local_2b0 = 0;
      uStack_288 = 0;
      local_290 = 0;
      uStack_268 = 0;
      local_270 = 0;
      uStack_248 = 0;
      local_250 = 0;
      uStack_228 = 0;
      local_230 = 0;
      if (lVar12 != param_1 + 0x6a8) {
        if ((int)uVar11 < 1) {
          do {
            lVar12 = *(long *)(lVar12 + 8);
          } while (lVar12 + -8 != param_1 + 0x6a0);
        }
        else {
          do {
            uVar14 = 0;
            uVar15 = 0;
            uVar20 = *(undefined8 *)(*(long *)(lVar12 + -8) + 0x18);
            uVar19 = *(undefined8 *)(*(long *)(lVar12 + -8) + 0x10);
            do {
              uVar16 = -(uVar15 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4;
              uVar7 = *(undefined8 *)((long)local_150 + uVar16 + 8);
              uVar6 = *(undefined8 *)((long)local_150 + uVar16);
              fVar21 = (float)uVar19 - (float)uVar6;
              fVar22 = (float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar6 >> 0x20);
              fVar23 = (float)uVar20 - (float)uVar7;
              fVar24 = (float)((ulong)uVar20 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
              fVar21 = fVar21 * fVar21;
              fVar22 = fVar22 * fVar22;
              fVar23 = fVar23 * fVar23;
              fVar24 = fVar24 * fVar24;
              auVar29._4_4_ = fVar22;
              auVar29._0_4_ = fVar21;
              auVar29._8_4_ = fVar23;
              auVar29._12_4_ = fVar24;
              auVar5._4_4_ = fVar22;
              auVar5._0_4_ = fVar21;
              auVar5._8_4_ = fVar23;
              auVar5._12_4_ = fVar24;
              auVar25 = NEON_ext(auVar29,auVar5,8,1);
              fVar21 = auVar25._0_4_ + fVar21 + auVar25._4_4_ + fVar22;
              if (fVar21 <= 14400.0) {
                pfVar2 = local_400 + uVar15 * 8;
                if (0xf < (uint)uVar14) {
                  pfVar2 = local_400;
                }
                if (fVar21 < *pfVar2) {
                  *pfVar2 = fVar21;
                  puVar3 = local_410 + uVar15 * 4;
                  if (0xf < (uint)uVar14) {
                    puVar3 = local_410;
                  }
                  puVar3[1] = uVar20;
                  *puVar3 = uVar19;
                }
              }
              uVar14 = uVar15 + 1;
            } while (((int)uVar14 != 0x10) &&
                    (uVar15 = uVar14 & 0xffffffff, (int)uVar14 < (int)uVar11));
            lVar12 = *(long *)(lVar12 + 8);
          } while (lVar12 + -8 != param_1 + 0x6a0);
        }
      }
      uVar17 = 0;
      uVar11 = 0;
      do {
        if (*(float *)((long)local_400 + ((long)((ulong)uVar11 << 0x20) >> 0x1b)) <= 14400.0) {
          bVar9 = 0xf < uVar17;
          uVar19 = local_410[(long)(int)uVar11 * 4 + 1];
          uVar14 = (ulong)uVar17;
          uVar17 = uVar17 + 1;
          puVar3 = (undefined8 *)((long)auStack_210 + uVar14 * 0xc);
          if (bVar9) {
            puVar3 = auStack_210;
          }
          *puVar3 = local_410[(long)(int)uVar11 * 4];
          *(int *)(puVar3 + 1) = (int)uVar19;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x10);
      if (uVar17 != 0) {
        lVar12 = FUN_029a76ec(*(long *)PTR_DAT_04bb26a8 + 0x6d8,param_2,2);
        if (lVar12 == 0) {
          return 0;
        }
        if (0 < (int)uVar17) {
          iVar4 = *(int *)(lVar12 + 4);
          iVar18 = 0;
          do {
            lVar12 = FUN_029a76ec(*(long *)puVar8 + 0x6d8,(long)auStack_210 + (long)iVar18 * 0xc,2);
            if ((lVar12 != 0) && (iVar4 == *(int *)(lVar12 + 4))) {
              return 1;
            }
            iVar18 = iVar18 + 1;
            if (iVar18 == 0x10) {
              return 0;
            }
          } while (iVar18 < (int)uVar17);
          return 0;
        }
      }
    }
  }
  return 0;
}

