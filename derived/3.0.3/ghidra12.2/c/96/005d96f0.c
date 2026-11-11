
void FUN_005d96f0(long param_1,undefined8 param_2,uint param_3,long param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 *param_7,long param_8)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  long lVar13;
  ushort *puVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined8 uVar27;
  float fVar29;
  undefined1 auVar28 [16];
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_380;
  undefined8 uStack_378;
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
  ulong uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [520];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  undefined1 local_88 [8];
  
  fVar26 = (float)*param_6;
  fVar29 = (float)((ulong)*param_6 >> 0x20);
  uVar19 = CONCAT44(fVar29 * fVar29 + 0.0001,fVar26 * fVar26 + 0.0001);
  uVar27 = NEON_frecpe(uVar19,4);
  uVar30 = NEON_frecps(uVar19,uVar27,4);
  fVar26 = (float)uVar27 * (float)uVar30;
  fVar29 = (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar30 >> 0x20);
  uVar19 = NEON_frecps(uVar19,CONCAT44(fVar29,fVar26),4);
  fVar16 = -((float)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x70) * fVar26 * (float)uVar19);
  fVar20 = -((float)((ulong)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x70) >> 0x20) *
            fVar29 * (float)((ulong)uVar19 >> 0x20));
  uVar19 = FUN_0054ca10(*param_5,param_5 + 2,auStack_2c0);
  fVar7 = DAT_04102f3c;
  fVar29 = DAT_04102ed8;
  fVar26 = DAT_04102e58;
  uVar1 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  uVar1 = uVar1 & 0xfffffffc;
  if (0 < (int)uVar1) {
    iVar15 = 0;
    puVar14 = (ushort *)(param_4 + 0x26);
    do {
      lVar9 = (ulong)puVar14[-0x10] * 0x10;
      local_340 = *(undefined8 *)(lVar9 + param_1);
      uVar4 = puVar14[-8];
      lVar13 = (ulong)uVar4 * 0x10;
      uStack_338 = ((undefined8 *)(lVar9 + param_1))[1] & 0xffffffff;
      uVar2 = *puVar14;
      lVar10 = (ulong)uVar2 * 0x10;
      local_330 = SUB168(*(undefined1 (*) [16])(lVar13 + param_1),0);
      uVar3 = puVar14[8];
      lVar11 = (ulong)uVar3 * 0x10;
      local_320 = SUB168(*(undefined1 (*) [16])(lVar10 + param_1),0);
      uStack_328 = (ulong)SUB164(*(undefined1 (*) [16])(lVar13 + param_1),8);
      uStack_318 = (ulong)SUB164(*(undefined1 (*) [16])(lVar10 + param_1),8);
      uStack_308 = (ulong)SUB164(*(undefined1 (*) [16])(lVar11 + param_1),8);
      local_310 = SUB168(*(undefined1 (*) [16])(lVar11 + param_1),0);
      uVar30 = *param_7;
      uVar17 = (undefined4)uVar30;
      uVar27 = CONCAT44(uVar17,uVar17);
      local_350 = 0;
      uStack_348 = 0;
      local_360 = 0;
      uStack_358 = 0;
      local_370 = 0;
      uStack_368 = 0;
      local_380 = 0;
      uStack_378 = 0;
      local_300 = local_340;
      uStack_2f8 = uStack_338;
      local_2f0 = local_330;
      uStack_2e8 = uStack_328;
      local_2e0 = local_320;
      uStack_2d8 = uStack_318;
      local_2d0 = local_310;
      uStack_2c8 = uStack_308;
      local_a0[0] = uVar27;
      FUN_0054c400(uVar19,&local_300,local_a0,(ulong)puVar14[-0x10],&local_340,&local_380,local_88);
      uVar17 = (undefined4)((ulong)uVar30 >> 0x20);
      uVar30 = CONCAT44(uVar17,uVar17);
      local_a8 = uVar30;
      FUN_0054c400(uVar19,&local_2f0,&local_a8,(ulong)uVar4,&local_330,&local_370,local_a0);
      local_b0 = uVar27;
      FUN_0054c400(uVar19,&local_2e0,&local_b0,(ulong)uVar2,&local_320,&local_360,&local_a8);
      local_b8 = uVar30;
      FUN_0054c400(uVar19,&local_2d0,&local_b8,(ulong)uVar3,&local_310,&local_350,&local_b0);
      fVar18 = fVar16 * local_88._0_4_ * local_88._0_4_;
      fVar21 = fVar20 * (float)local_a0[0] * (float)local_a0[0];
      fVar22 = fVar16 * (float)local_a8 * (float)local_a8;
      fVar23 = fVar20 * (float)local_b0 * (float)local_b0;
      if (fVar18 <= fVar29) {
        fVar18 = fVar29;
      }
      auVar34._0_4_ = ((float)local_340 - (float)local_300) * (float)local_380;
      fVar36 = (float)((ulong)local_380 >> 0x20);
      auVar34._4_4_ = (local_340._4_4_ - (float)((ulong)local_300 >> 0x20)) * fVar36;
      auVar34._8_4_ = ((float)uStack_338 - (float)uStack_2f8) * (float)uStack_378;
      auVar34._12_4_ =
           (uStack_338._4_4_ - (float)(uStack_2f8 >> 0x20)) * (float)((ulong)uStack_378 >> 0x20);
      auVar33._0_4_ = ((float)local_330 - (float)local_2f0) * (float)local_370;
      fVar37 = (float)((ulong)local_370 >> 0x20);
      auVar33._4_4_ = (local_330._4_4_ - local_2f0._4_4_) * fVar37;
      auVar33._8_4_ = ((float)uStack_328 - (float)uStack_2e8) * (float)uStack_368;
      auVar33._12_4_ = (uStack_328._4_4_ - uStack_2e8._4_4_) * (float)((ulong)uStack_368 >> 0x20);
      auVar35 = NEON_ext(auVar34,auVar34,8,1);
      auVar28 = NEON_ext(auVar33,auVar33,8,1);
      if (fVar21 <= fVar29) {
        fVar21 = fVar29;
      }
      auVar24._0_4_ = ((float)local_320 - (float)local_2e0) * (float)local_360;
      fVar38 = (float)((ulong)local_360 >> 0x20);
      auVar24._4_4_ = (local_320._4_4_ - local_2e0._4_4_) * fVar38;
      auVar24._8_4_ = ((float)uStack_318 - (float)uStack_2d8) * (float)uStack_358;
      auVar24._12_4_ = (uStack_318._4_4_ - uStack_2d8._4_4_) * (float)((ulong)uStack_358 >> 0x20);
      auVar31._0_4_ = ((float)local_310 - (float)local_2d0) * (float)local_350;
      fVar39 = (float)((ulong)local_350 >> 0x20);
      auVar31._4_4_ = ((float)((ulong)local_310 >> 0x20) - local_2d0._4_4_) * fVar39;
      auVar31._8_4_ = ((float)uStack_308 - (float)uStack_2c8) * (float)uStack_348;
      auVar31._12_4_ =
           ((float)(uStack_308 >> 0x20) - uStack_2c8._4_4_) * (float)((ulong)uStack_348 >> 0x20);
      fVar18 = (float)(int)(fVar18 * fVar7 + fVar26);
      auVar25 = NEON_ext(auVar24,auVar24,8,1);
      auVar32 = NEON_ext(auVar31,auVar31,8,1);
      if (fVar22 <= fVar29) {
        fVar22 = fVar29;
      }
      if (fVar23 <= fVar29) {
        fVar23 = fVar29;
      }
      uVar30 = ((undefined8 *)(param_8 + lVar9))[1];
      uVar27 = *(undefined8 *)(param_8 + lVar9);
      fVar8 = (float)(int)(fVar21 * fVar7 + fVar26);
      iVar15 = iVar15 + 4;
      fVar12 = (float)(int)(fVar22 * fVar7 + fVar26);
      pfVar5 = (float *)(param_8 + lVar9);
      pfVar5[2] = (float)uVar30 + (float)uStack_378 * fVar18;
      pfVar5[3] = (float)((ulong)uVar30 >> 0x20) +
                  (auVar35._0_4_ + auVar34._0_4_ + auVar34._4_4_) * fVar18;
      *pfVar5 = (float)uVar27 + (float)local_380 * fVar18;
      pfVar5[1] = (float)((ulong)uVar27 >> 0x20) + fVar36 * fVar18;
      pfVar5 = (float *)(param_8 + lVar13);
      fVar21 = *pfVar5;
      fVar18 = pfVar5[1];
      puVar14 = puVar14 + 0x20;
      fVar22 = (float)(int)(fVar23 * fVar7 + fVar26);
      pfVar6 = (float *)(param_8 + lVar13);
      pfVar6[2] = pfVar5[2] + (float)uStack_368 * fVar8;
      pfVar6[3] = pfVar5[3] + (auVar28._0_4_ + auVar33._0_4_ + auVar33._4_4_) * fVar8;
      *pfVar6 = fVar21 + (float)local_370 * fVar8;
      pfVar6[1] = fVar18 + fVar37 * fVar8;
      pfVar5 = (float *)(param_8 + lVar10);
      fVar21 = *pfVar5;
      fVar18 = pfVar5[1];
      pfVar6 = (float *)(param_8 + lVar10);
      pfVar6[2] = pfVar5[2] + (float)uStack_358 * fVar12;
      pfVar6[3] = pfVar5[3] + (auVar25._0_4_ + auVar24._0_4_ + auVar24._4_4_) * fVar12;
      *pfVar6 = fVar21 + (float)local_360 * fVar12;
      pfVar6[1] = fVar18 + fVar38 * fVar12;
      pfVar5 = (float *)(param_8 + lVar11);
      fVar21 = *pfVar5;
      ((undefined8 *)(param_8 + lVar11))[1] =
           CONCAT44(pfVar5[3] + (auVar32._0_4_ + auVar31._0_4_ + auVar31._4_4_) * fVar22,
                    pfVar5[2] + (float)uStack_348 * fVar22);
      *(undefined8 *)(param_8 + lVar11) =
           CONCAT44(pfVar5[1] + fVar39 * fVar22,fVar21 + (float)local_350 * fVar22);
    } while (iVar15 < (int)uVar1);
  }
  fVar7 = DAT_04102f3c;
  fVar29 = DAT_04102ed8;
  fVar26 = DAT_04102e58;
  if (0 < (int)param_3 % 4) {
    lVar9 = (long)(int)uVar1;
    puVar14 = (ushort *)(param_4 + (long)(int)uVar1 * 0x10 + 6);
    do {
      local_380 = 0;
      uStack_378 = 0;
      lVar10 = (ulong)*puVar14 * 0x10;
      local_340 = *(undefined8 *)(param_1 + lVar10);
      uStack_338 = ((undefined8 *)(param_1 + lVar10))[1] & 0xffffffff;
      local_300 = local_340;
      uStack_2f8 = uStack_338;
      FUN_0054c400(uVar19,&local_300,param_7,(ulong)*puVar14,&local_340,&local_380,local_88);
      lVar9 = lVar9 + 1;
      fVar20 = local_88._0_4_ * local_88._0_4_ * fVar16;
      if (fVar20 <= fVar29) {
        fVar20 = fVar29;
      }
      auVar28._0_4_ = (float)local_380 * ((float)local_340 - (float)local_300);
      auVar28._4_4_ = local_380._4_4_ * (local_340._4_4_ - local_300._4_4_);
      auVar28._8_4_ = (float)uStack_378 * ((float)uStack_338 - (float)uStack_2f8);
      auVar28._12_4_ = uStack_378._4_4_ * (uStack_338._4_4_ - uStack_2f8._4_4_);
      auVar33 = NEON_ext(auVar28,auVar28,8,1);
      fVar20 = (float)(int)(fVar20 * fVar7 + fVar26);
      uVar30 = ((undefined8 *)(param_8 + lVar10))[1];
      uVar27 = *(undefined8 *)(param_8 + lVar10);
      ((undefined8 *)(param_8 + lVar10))[1] =
           CONCAT44((float)((ulong)uVar30 >> 0x20) +
                    (auVar28._0_4_ + auVar28._4_4_ + auVar33._0_4_) * fVar20,
                    (float)uVar30 + (float)uStack_378 * fVar20);
      *(undefined8 *)(param_8 + lVar10) =
           CONCAT44((float)((ulong)uVar27 >> 0x20) + local_380._4_4_ * fVar20,
                    (float)uVar27 + (float)local_380 * fVar20);
      puVar14 = puVar14 + 8;
    } while (lVar9 < (int)param_3);
  }
  return;
}

