
void FUN_005d92f0(long param_1,undefined8 param_2,uint param_3,long param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 *param_7,long param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 uVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  ulong uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [528];
  ushort local_78;
  ushort local_76;
  ushort local_74;
  ushort local_72;
  
  fVar16 = (float)*param_6;
  fVar20 = (float)((ulong)*param_6 >> 0x20);
  uVar13 = CONCAT44(fVar20 * fVar20 + 0.0001,fVar16 * fVar16 + 0.0001);
  uVar17 = NEON_frecpe(uVar13,4);
  uVar21 = NEON_frecps(uVar13,uVar17,4);
  fVar16 = (float)uVar17 * (float)uVar21;
  fVar20 = (float)((ulong)uVar17 >> 0x20) * (float)((ulong)uVar21 >> 0x20);
  uVar13 = NEON_frecps(uVar13,CONCAT44(fVar20,fVar16),4);
  fVar12 = -((float)DAT_0413f330 * fVar16 * (float)uVar13);
  fVar14 = -((float)((ulong)DAT_0413f330 >> 0x20) * fVar20 * (float)((ulong)uVar13 >> 0x20));
  uVar13 = FUN_0054d870(*param_5,param_5 + 2,auStack_290);
  fVar5 = DAT_04102f3c;
  fVar20 = DAT_04102ed8;
  fVar16 = DAT_04102e58;
  uVar1 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  uVar1 = uVar1 & 0xfffffffc;
  if (0 < (int)uVar1) {
    iVar11 = 0;
    puVar8 = (ushort *)(param_4 + 0x26);
    do {
      local_78 = puVar8[-0x10];
      local_76 = puVar8[-8];
      local_74 = *puVar8;
      local_72 = puVar8[8];
      puVar2 = (undefined8 *)(param_1 + (ulong)local_78 * 0x10);
      local_320 = *puVar2;
      auVar24 = *(undefined1 (*) [16])(param_1 + (ulong)local_76 * 0x10);
      uStack_318 = puVar2[1] & 0xffffffff;
      local_310 = auVar24._0_8_;
      auVar18 = *(undefined1 (*) [16])(param_1 + (ulong)local_74 * 0x10);
      local_300 = auVar18._0_8_;
      auVar15 = *(undefined1 (*) [16])(param_1 + (ulong)local_72 * 0x10);
      uStack_308 = (ulong)auVar24._8_4_;
      uStack_2f8 = (ulong)auVar18._8_4_;
      uStack_2e8 = (ulong)auVar15._8_4_;
      local_2f0 = auVar15._0_8_;
      local_2e0 = *param_7;
      local_330 = 0;
      uStack_328 = 0;
      local_340 = 0;
      uStack_338 = 0;
      local_350 = 0;
      uStack_348 = 0;
      local_360 = 0;
      uStack_358 = 0;
      uStack_2d8 = local_2e0;
      local_2d0 = local_320;
      uStack_2c8 = uStack_318;
      local_2c0 = local_310;
      uStack_2b8 = uStack_308;
      local_2b0 = local_300;
      uStack_2a8 = uStack_2f8;
      local_2a0 = local_2f0;
      uStack_298 = uStack_2e8;
      FUN_0054e050(uVar13,&local_2d0,&local_2e0,&local_78,&local_320,&local_360,&local_370);
      puVar8 = puVar8 + 0x20;
      fVar30 = (float)((ulong)local_370 >> 0x20);
      fVar6 = (float)((ulong)uStack_368 >> 0x20);
      iVar11 = iVar11 + 4;
      fVar27 = fVar12 * (float)local_370 * (float)local_370;
      fVar28 = fVar14 * fVar30 * fVar30;
      fVar29 = fVar12 * (float)uStack_368 * (float)uStack_368;
      fVar30 = fVar14 * fVar6 * fVar6;
      auVar18._0_4_ = ((float)local_320 - (float)local_2d0) * (float)local_360;
      fVar31 = (float)((ulong)local_360 >> 0x20);
      auVar18._4_4_ = (local_320._4_4_ - local_2d0._4_4_) * fVar31;
      auVar18._8_4_ = ((float)uStack_318 - (float)uStack_2c8) * (float)uStack_358;
      auVar18._12_4_ = (uStack_318._4_4_ - uStack_2c8._4_4_) * (float)((ulong)uStack_358 >> 0x20);
      auVar24._0_4_ = ((float)local_310 - (float)local_2c0) * (float)local_350;
      fVar32 = (float)((ulong)local_350 >> 0x20);
      auVar24._4_4_ = (local_310._4_4_ - local_2c0._4_4_) * fVar32;
      auVar24._8_4_ = ((float)uStack_308 - (float)uStack_2b8) * (float)uStack_348;
      auVar24._12_4_ = (uStack_308._4_4_ - uStack_2b8._4_4_) * (float)((ulong)uStack_348 >> 0x20);
      fVar6 = fVar27;
      if (fVar27 <= fVar20) {
        fVar6 = fVar20;
      }
      uStack_368 = CONCAT44(fVar30,fVar29);
      local_370 = CONCAT44(fVar28,fVar27);
      auVar19 = NEON_ext(auVar18,auVar18,8,1);
      auVar25._0_4_ = ((float)local_2f0 - (float)local_2a0) * (float)local_330;
      fVar27 = (float)((ulong)local_330 >> 0x20);
      auVar25._4_4_ = ((float)((ulong)local_2f0 >> 0x20) - local_2a0._4_4_) * fVar27;
      auVar25._8_4_ = ((float)uStack_2e8 - (float)uStack_298) * (float)uStack_328;
      auVar25._12_4_ =
           ((float)(uStack_2e8 >> 0x20) - uStack_298._4_4_) * (float)((ulong)uStack_328 >> 0x20);
      auVar15 = NEON_ext(auVar24,auVar24,8,1);
      auVar22._0_4_ = ((float)local_300 - (float)local_2b0) * (float)local_340;
      fVar33 = (float)((ulong)local_340 >> 0x20);
      auVar22._4_4_ = (local_300._4_4_ - local_2b0._4_4_) * fVar33;
      auVar22._8_4_ = ((float)uStack_2f8 - (float)uStack_2a8) * (float)uStack_338;
      auVar22._12_4_ = (uStack_2f8._4_4_ - uStack_2a8._4_4_) * (float)((ulong)uStack_338 >> 0x20);
      auVar23 = NEON_ext(auVar22,auVar22,8,1);
      auVar26 = NEON_ext(auVar25,auVar25,8,1);
      if (fVar28 <= fVar20) {
        fVar28 = fVar20;
      }
      fVar6 = (float)(int)(fVar6 * fVar5 + fVar16);
      if (fVar29 <= fVar20) {
        fVar29 = fVar20;
      }
      if (fVar30 <= fVar20) {
        fVar30 = fVar20;
      }
      puVar2 = (undefined8 *)(param_8 + (ulong)local_78 * 0x10);
      uVar21 = puVar2[1];
      uVar17 = *puVar2;
      fVar28 = (float)(int)(fVar28 * fVar5 + fVar16);
      fVar29 = (float)(int)(fVar29 * fVar5 + fVar16);
      fVar7 = (float)(int)(fVar30 * fVar5 + fVar16);
      pfVar3 = (float *)(param_8 + (ulong)local_78 * 0x10);
      pfVar3[2] = (float)uVar21 + (float)uStack_358 * fVar6;
      pfVar3[3] = (float)((ulong)uVar21 >> 0x20) +
                  (auVar19._0_4_ + auVar18._0_4_ + auVar18._4_4_) * fVar6;
      *pfVar3 = (float)uVar17 + (float)local_360 * fVar6;
      pfVar3[1] = (float)((ulong)uVar17 >> 0x20) + fVar31 * fVar6;
      pfVar3 = (float *)(param_8 + (ulong)local_76 * 0x10);
      fVar30 = *pfVar3;
      fVar6 = pfVar3[1];
      pfVar4 = (float *)(param_8 + (ulong)local_76 * 0x10);
      pfVar4[2] = pfVar3[2] + (float)uStack_348 * fVar28;
      pfVar4[3] = pfVar3[3] + (auVar15._0_4_ + auVar24._0_4_ + auVar24._4_4_) * fVar28;
      *pfVar4 = fVar30 + (float)local_350 * fVar28;
      pfVar4[1] = fVar6 + fVar32 * fVar28;
      pfVar3 = (float *)(param_8 + (ulong)local_74 * 0x10);
      fVar30 = *pfVar3;
      fVar6 = pfVar3[1];
      pfVar4 = (float *)(param_8 + (ulong)local_74 * 0x10);
      pfVar4[2] = pfVar3[2] + (float)uStack_338 * fVar29;
      pfVar4[3] = pfVar3[3] + (auVar23._0_4_ + auVar22._0_4_ + auVar22._4_4_) * fVar29;
      *pfVar4 = fVar30 + (float)local_340 * fVar29;
      pfVar4[1] = fVar6 + fVar33 * fVar29;
      pfVar3 = (float *)(param_8 + (ulong)local_72 * 0x10);
      fVar30 = *pfVar3;
      puVar2 = (undefined8 *)(param_8 + (ulong)local_72 * 0x10);
      puVar2[1] = CONCAT44(pfVar3[3] + (auVar26._0_4_ + auVar25._0_4_ + auVar25._4_4_) * fVar7,
                           pfVar3[2] + (float)uStack_328 * fVar7);
      *puVar2 = CONCAT44(pfVar3[1] + fVar27 * fVar7,fVar30 + (float)local_330 * fVar7);
    } while (iVar11 < (int)uVar1);
  }
  fVar5 = DAT_04102f3c;
  fVar20 = DAT_04102ed8;
  fVar16 = DAT_04102e58;
  if (0 < (int)param_3 % 4) {
    lVar10 = (long)(int)uVar1;
    puVar8 = (ushort *)(param_4 + (long)(int)uVar1 * 0x10 + 6);
    do {
      local_360 = 0;
      uStack_358 = 0;
      lVar9 = (ulong)*puVar8 * 0x10;
      local_320 = *(undefined8 *)(param_1 + lVar9);
      uStack_318 = ((undefined8 *)(param_1 + lVar9))[1] & 0xffffffff;
      local_2d0 = local_320;
      uStack_2c8 = uStack_318;
      FUN_0054d980(uVar13,&local_2d0,param_7,(ulong)*puVar8,&local_320,&local_360,&local_2e0);
      lVar10 = lVar10 + 1;
      fVar14 = (float)local_2e0 * (float)local_2e0 * fVar12;
      if (fVar14 <= fVar20) {
        fVar14 = fVar20;
      }
      auVar15._0_4_ = (float)local_360 * ((float)local_320 - (float)local_2d0);
      auVar15._4_4_ = local_360._4_4_ * (local_320._4_4_ - local_2d0._4_4_);
      auVar15._8_4_ = (float)uStack_358 * ((float)uStack_318 - (float)uStack_2c8);
      auVar15._12_4_ = uStack_358._4_4_ * (uStack_318._4_4_ - uStack_2c8._4_4_);
      auVar24 = NEON_ext(auVar15,auVar15,8,1);
      fVar14 = (float)(int)(fVar14 * fVar5 + fVar16);
      uVar21 = ((undefined8 *)(param_8 + lVar9))[1];
      uVar17 = *(undefined8 *)(param_8 + lVar9);
      ((undefined8 *)(param_8 + lVar9))[1] =
           CONCAT44((float)((ulong)uVar21 >> 0x20) +
                    (auVar15._0_4_ + auVar15._4_4_ + auVar24._0_4_) * fVar14,
                    (float)uVar21 + (float)uStack_358 * fVar14);
      *(undefined8 *)(param_8 + lVar9) =
           CONCAT44((float)((ulong)uVar17 >> 0x20) + local_360._4_4_ * fVar14,
                    (float)uVar17 + (float)local_360 * fVar14);
      puVar8 = puVar8 + 8;
    } while (lVar10 < (int)param_3);
  }
  return;
}

