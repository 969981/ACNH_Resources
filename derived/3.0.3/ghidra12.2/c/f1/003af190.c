
void FUN_003af190(long *param_1,long param_2,uint param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  ushort *puVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 local_30;
  undefined8 uStack_28;
  float local_20;
  
  lVar16 = param_1[7];
  if (lVar16 != 0) {
    lVar15 = *param_1;
    uVar18 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
    lVar14 = *(long *)(param_2 + 0x20);
    pfVar1 = (float *)(lVar16 + (long)(int)param_3 * 0x40);
    puVar2 = (undefined8 *)(lVar16 + ((long)(int)((ulong)param_3 << 1) | 1U) * 0x20);
    if (*(char *)(lVar15 + 0x5a) == '\0') {
      puVar3 = (undefined8 *)(lVar14 + (ulong)*(ushort *)(lVar15 + 0x54) * 0x40);
      fVar22 = (float)puVar2[1];
      fVar30 = (float)*puVar2;
      fVar31 = (float)((ulong)*puVar2 >> 0x20);
      uVar20 = *puVar3;
      fVar21 = *(float *)(puVar3 + 2);
      fVar23 = *(float *)((long)puVar3 + 0x14);
      fVar25 = *(float *)(puVar3 + 4);
      fVar27 = *(float *)((long)puVar3 + 0x24);
      fVar28 = *(float *)(puVar3 + 6);
      fVar29 = *(float *)((long)puVar3 + 0x34);
      *(ulong *)(pfVar1 + 2) =
           CONCAT44(*(float *)((long)puVar3 + 0x3c) +
                    (float)((ulong)puVar3[1] >> 0x20) * fVar30 +
                    *(float *)((long)puVar3 + 0x1c) * fVar31 +
                    *(float *)((long)puVar3 + 0x2c) * fVar22,
                    *(float *)(puVar3 + 7) +
                    (float)puVar3[1] * fVar30 + *(float *)(puVar3 + 3) * fVar31 +
                    *(float *)(puVar3 + 5) * fVar22);
      *(ulong *)pfVar1 =
           CONCAT44(fVar29 + (float)((ulong)uVar20 >> 0x20) * fVar30 + fVar23 * fVar31 +
                             fVar27 * fVar22,
                    fVar28 + (float)uVar20 * fVar30 + fVar21 * fVar31 + fVar25 * fVar22);
      fVar25 = (float)puVar3[1];
      fVar27 = (float)((ulong)puVar3[1] >> 0x20);
      fVar21 = (float)*puVar3;
      fVar23 = (float)((ulong)*puVar3 >> 0x20);
      fVar30 = (float)puVar3[3];
      fVar31 = (float)((ulong)puVar3[3] >> 0x20);
      fVar28 = (float)puVar3[2];
      fVar29 = (float)((ulong)puVar3[2] >> 0x20);
      fVar28 = fVar28 * fVar28;
      fVar29 = fVar29 * fVar29;
      fVar30 = fVar30 * fVar30;
      fVar31 = fVar31 * fVar31;
      fVar21 = fVar21 * fVar21;
      fVar23 = fVar23 * fVar23;
      fVar25 = fVar25 * fVar25;
      fVar27 = fVar27 * fVar27;
      auVar32._4_4_ = fVar23;
      auVar32._0_4_ = fVar21;
      auVar32._8_4_ = fVar25;
      auVar32._12_4_ = fVar27;
      auVar33._4_4_ = fVar23;
      auVar33._0_4_ = fVar21;
      auVar33._8_4_ = fVar25;
      auVar33._12_4_ = fVar27;
      auVar32 = NEON_ext(auVar32,auVar33,8,1);
      auVar36._4_4_ = fVar29;
      auVar36._0_4_ = fVar28;
      auVar36._8_4_ = fVar30;
      auVar36._12_4_ = fVar31;
      auVar11._4_4_ = fVar29;
      auVar11._0_4_ = fVar28;
      auVar11._8_4_ = fVar30;
      auVar11._12_4_ = fVar31;
      auVar33 = NEON_ext(auVar36,auVar11,8,1);
      auVar35._0_4_ = *(float *)(puVar3 + 4) * *(float *)(puVar3 + 4);
      auVar35._4_4_ = *(float *)((long)puVar3 + 0x24) * *(float *)((long)puVar3 + 0x24);
      auVar35._8_4_ = *(float *)(puVar3 + 5) * *(float *)(puVar3 + 5);
      auVar35._12_4_ = *(float *)((long)puVar3 + 0x2c) * *(float *)((long)puVar3 + 0x2c);
      auVar36 = NEON_ext(auVar35,auVar35,8,1);
      fVar25 = SQRT(auVar32._0_4_ + fVar21 + auVar32._4_4_ + fVar23);
      fVar23 = SQRT(auVar33._0_4_ + fVar28 + auVar33._4_4_ + fVar29);
      fVar21 = SQRT(auVar36._0_4_ + auVar35._0_4_ + auVar36._4_4_ + auVar35._4_4_);
      if (fVar23 <= fVar25) {
        fVar23 = fVar25;
      }
      if (fVar21 <= fVar23) {
        fVar21 = fVar23;
      }
      *(float *)(lVar16 + uVar18 * 0x20 + 0x10) = *(float *)(puVar2 + 2) * fVar21;
    }
    else {
      puVar19 = *(ushort **)(lVar15 + 0x20);
      fVar22 = (float)puVar2[1];
      fVar30 = (float)*puVar2;
      fVar31 = (float)((ulong)*puVar2 >> 0x20);
      puVar3 = (undefined8 *)(lVar14 + (ulong)*puVar19 * 0x40);
      uVar20 = *puVar3;
      fVar21 = *(float *)(puVar3 + 2);
      fVar23 = *(float *)((long)puVar3 + 0x14);
      fVar25 = *(float *)(puVar3 + 4);
      fVar27 = *(float *)((long)puVar3 + 0x24);
      fVar28 = *(float *)(puVar3 + 6);
      fVar29 = *(float *)((long)puVar3 + 0x34);
      *(ulong *)(pfVar1 + 2) =
           CONCAT44(*(float *)((long)puVar3 + 0x3c) +
                    (float)((ulong)puVar3[1] >> 0x20) * fVar30 +
                    *(float *)((long)puVar3 + 0x1c) * fVar31 +
                    *(float *)((long)puVar3 + 0x2c) * fVar22,
                    *(float *)(puVar3 + 7) +
                    (float)puVar3[1] * fVar30 + *(float *)(puVar3 + 3) * fVar31 +
                    *(float *)(puVar3 + 5) * fVar22);
      *(ulong *)pfVar1 =
           CONCAT44(fVar29 + (float)((ulong)uVar20 >> 0x20) * fVar30 + fVar23 * fVar31 +
                             fVar27 * fVar22,
                    fVar28 + (float)uVar20 * fVar30 + fVar21 * fVar31 + fVar25 * fVar22);
      fVar25 = (float)puVar3[1];
      fVar27 = (float)((ulong)puVar3[1] >> 0x20);
      fVar21 = (float)*puVar3;
      fVar23 = (float)((ulong)*puVar3 >> 0x20);
      fVar30 = (float)puVar3[3];
      fVar31 = (float)((ulong)puVar3[3] >> 0x20);
      fVar28 = (float)puVar3[2];
      fVar29 = (float)((ulong)puVar3[2] >> 0x20);
      fVar28 = fVar28 * fVar28;
      fVar29 = fVar29 * fVar29;
      fVar30 = fVar30 * fVar30;
      fVar31 = fVar31 * fVar31;
      fVar21 = fVar21 * fVar21;
      fVar23 = fVar23 * fVar23;
      fVar25 = fVar25 * fVar25;
      fVar27 = fVar27 * fVar27;
      auVar5._4_4_ = fVar23;
      auVar5._0_4_ = fVar21;
      auVar5._8_4_ = fVar25;
      auVar5._12_4_ = fVar27;
      auVar6._4_4_ = fVar23;
      auVar6._0_4_ = fVar21;
      auVar6._8_4_ = fVar25;
      auVar6._12_4_ = fVar27;
      auVar32 = NEON_ext(auVar5,auVar6,8,1);
      auVar9._4_4_ = fVar29;
      auVar9._0_4_ = fVar28;
      auVar9._8_4_ = fVar30;
      auVar9._12_4_ = fVar31;
      auVar10._4_4_ = fVar29;
      auVar10._0_4_ = fVar28;
      auVar10._8_4_ = fVar30;
      auVar10._12_4_ = fVar31;
      auVar33 = NEON_ext(auVar9,auVar10,8,1);
      auVar34._0_4_ = *(float *)(puVar3 + 4) * *(float *)(puVar3 + 4);
      auVar34._4_4_ = *(float *)((long)puVar3 + 0x24) * *(float *)((long)puVar3 + 0x24);
      auVar34._8_4_ = *(float *)(puVar3 + 5) * *(float *)(puVar3 + 5);
      auVar34._12_4_ = *(float *)((long)puVar3 + 0x2c) * *(float *)((long)puVar3 + 0x2c);
      auVar36 = NEON_ext(auVar34,auVar34,8,1);
      fVar25 = SQRT(auVar32._0_4_ + fVar21 + auVar32._4_4_ + fVar23);
      fVar23 = SQRT(auVar33._0_4_ + fVar28 + auVar33._4_4_ + fVar29);
      fVar21 = SQRT(auVar36._0_4_ + auVar34._0_4_ + auVar36._4_4_ + auVar34._4_4_);
      if (fVar23 <= fVar25) {
        fVar23 = fVar25;
      }
      if (fVar21 <= fVar23) {
        fVar21 = fVar23;
      }
      pfVar17 = (float *)(lVar16 + uVar18 * 0x20 + 0x10);
      *pfVar17 = *(float *)(puVar2 + 2) * fVar21;
      if (1 < (ulong)*(ushort *)(*param_1 + 0x58)) {
        lVar16 = (ulong)*(ushort *)(*param_1 + 0x58) - 1;
        puVar19 = puVar19 + 1;
        do {
          while( true ) {
            pfVar4 = (float *)(lVar14 + (ulong)*puVar19 * 0x40);
            fVar26 = (float)puVar2[1];
            fVar22 = (float)*puVar2;
            fVar24 = (float)((ulong)*puVar2 >> 0x20);
            fVar21 = *pfVar4;
            fVar23 = pfVar4[1];
            fVar25 = pfVar4[2];
            fVar27 = pfVar4[3];
            fVar28 = pfVar4[4];
            fVar29 = pfVar4[5];
            fVar30 = pfVar4[6];
            fVar31 = pfVar4[7];
            fVar43 = (float)*(undefined8 *)(pfVar4 + 10);
            fVar44 = (float)((ulong)*(undefined8 *)(pfVar4 + 10) >> 0x20);
            fVar39 = (float)*(undefined8 *)(pfVar4 + 8);
            fVar41 = (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20);
            auVar37._0_4_ = fVar21 * fVar21;
            auVar37._4_4_ = fVar23 * fVar23;
            auVar37._8_4_ = fVar25 * fVar25;
            auVar37._12_4_ = fVar27 * fVar27;
            auVar38._0_4_ = fVar28 * fVar28;
            auVar38._4_4_ = fVar29 * fVar29;
            auVar38._8_4_ = fVar30 * fVar30;
            auVar38._12_4_ = fVar31 * fVar31;
            fVar40 = fVar39 * fVar39;
            fVar42 = fVar41 * fVar41;
            fVar28 = pfVar4[0xc] + fVar21 * fVar22 + fVar28 * fVar24 + fVar39 * fVar26;
            fVar29 = pfVar4[0xd] + fVar23 * fVar22 + fVar29 * fVar24 + fVar41 * fVar26;
            fVar25 = pfVar4[0xe] + fVar25 * fVar22 + fVar30 * fVar24 + fVar43 * fVar26;
            fVar27 = pfVar4[0xf] + fVar27 * fVar22 + fVar31 * fVar24 + fVar44 * fVar26;
            auVar32 = NEON_ext(auVar37,auVar37,8,1);
            auVar33 = NEON_ext(auVar38,auVar38,8,1);
            auVar12._4_4_ = fVar42;
            auVar12._0_4_ = fVar40;
            auVar12._8_4_ = fVar43 * fVar43;
            auVar12._12_4_ = fVar44 * fVar44;
            auVar13._4_4_ = fVar42;
            auVar13._0_4_ = fVar40;
            auVar13._8_4_ = fVar43 * fVar43;
            auVar13._12_4_ = fVar44 * fVar44;
            auVar36 = NEON_ext(auVar12,auVar13,8,1);
            uStack_28 = CONCAT44(fVar27,fVar25);
            local_30 = CONCAT44(fVar29,fVar28);
            fVar30 = SQRT(auVar32._0_4_ + auVar37._0_4_ + auVar32._4_4_ + auVar37._4_4_);
            fVar21 = SQRT(auVar33._0_4_ + auVar38._0_4_ + auVar33._4_4_ + auVar38._4_4_);
            fVar23 = SQRT(auVar36._0_4_ + fVar40 + auVar36._4_4_ + fVar42);
            if (fVar21 <= fVar30) {
              fVar21 = fVar30;
            }
            if (fVar23 <= fVar21) {
              fVar23 = fVar21;
            }
            fVar23 = *(float *)(puVar2 + 2) * fVar23;
            fVar28 = fVar28 - *pfVar1;
            fVar29 = fVar29 - pfVar1[1];
            fVar25 = fVar25 - pfVar1[2];
            fVar27 = fVar27 - pfVar1[3];
            local_20 = fVar23;
            fVar21 = fVar28 * fVar28;
            fVar30 = fVar29 * fVar29;
            auVar7._4_4_ = fVar30;
            auVar7._0_4_ = fVar21;
            auVar7._8_4_ = fVar25 * fVar25;
            auVar7._12_4_ = fVar27 * fVar27;
            auVar8._4_4_ = fVar30;
            auVar8._0_4_ = fVar21;
            auVar8._8_4_ = fVar25 * fVar25;
            auVar8._12_4_ = fVar27 * fVar27;
            auVar32 = NEON_ext(auVar7,auVar8,8,1);
            fVar30 = auVar32._0_4_ + fVar21 + auVar32._4_4_ + fVar30;
            fVar31 = fVar23 - *pfVar17;
            fVar31 = fVar31 * fVar31;
            fVar21 = 0.0001;
            if (0.0001 <= fVar31) {
              fVar21 = fVar31;
            }
            if (fVar30 < fVar21) break;
            fVar21 = SQRT(fVar30);
            if (NAN(fVar21)) {
              fVar21 = sqrtf(fVar30);
            }
            fVar31 = *pfVar17;
            fVar30 = fVar30 * (1.0 / fVar21);
            fVar21 = (fVar30 + fVar23 + fVar31) * 0.5;
            *pfVar17 = fVar21;
            fVar30 = (fVar21 - fVar31) / fVar30;
            *(ulong *)(pfVar1 + 2) =
                 CONCAT44(pfVar1[3] + fVar27 * fVar30,pfVar1[2] + fVar25 * fVar30);
            *(ulong *)pfVar1 = CONCAT44(pfVar1[1] + fVar29 * fVar30,*pfVar1 + fVar28 * fVar30);
            lVar16 = lVar16 + -1;
            puVar19 = puVar19 + 1;
            if (lVar16 == 0) {
              return;
            }
          }
          pfVar4 = pfVar1;
          if (*pfVar17 <= fVar23) {
            pfVar4 = (float *)&local_30;
          }
          uVar20 = *(undefined8 *)(pfVar4 + 6);
          *(undefined8 *)(pfVar1 + 2) = *(undefined8 *)(pfVar4 + 2);
          *(undefined8 *)(pfVar1 + 6) = uVar20;
          uVar20 = *(undefined8 *)pfVar4;
          *(undefined8 *)(pfVar1 + 4) = *(undefined8 *)(pfVar4 + 4);
          *(undefined8 *)pfVar1 = uVar20;
          lVar16 = lVar16 + -1;
          puVar19 = puVar19 + 1;
        } while (lVar16 != 0);
      }
    }
  }
  return;
}

