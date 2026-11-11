
void FUN_005d4350(float *param_1,long param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  ushort uVar1;
  float *pfVar2;
  uint uVar3;
  short *psVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte bVar15;
  long lVar16;
  ulong uVar17;
  byte bVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  ushort *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  
  auVar26 = *(undefined1 (*) [16])(PTR_DAT_04bd4c80 + 0x240);
  auVar27._0_4_ = -auVar26._0_4_;
  auVar27._4_4_ = -auVar26._4_4_;
  auVar27._8_4_ = -auVar26._8_4_;
  auVar27._12_4_ = -auVar26._12_4_;
  if (0 < (int)param_3[1]) {
    uVar12 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 & 0xffff;
      if ((*(float *)(*(long *)(param_2 + 0x40) + uVar13 * 0x10) != 0.0) &&
         (uVar17 = (ulong)*(ushort *)(*(long *)(param_2 + 0x2c0) + uVar13 * 2), uVar17 != 0xffff)) {
        lVar22 = *(long *)(param_2 + 0x270);
        lVar19 = *param_3;
        lVar20 = *param_4;
        lVar16 = (ulong)*(ushort *)(lVar22 + uVar17 * 8) * 0x10;
        puVar5 = (undefined8 *)(lVar19 + lVar16);
        uVar32 = puVar5[1];
        uVar29 = *puVar5;
        puVar5 = (undefined8 *)(lVar20 + lVar16);
        uVar38 = puVar5[1];
        uVar35 = *puVar5;
        pbVar14 = (byte *)(lVar22 + uVar17 * 8 + 6);
        bVar18 = *pbVar14;
        if (bVar18 != 0) {
          bVar15 = 0;
          while( true ) {
            puVar24 = (ushort *)
                      (*(long *)(param_2 + 0x260) +
                      (ulong)(ushort)(*(short *)(lVar22 + uVar17 * 8 + 2) + (ushort)bVar15) * 4);
            lVar16 = (ulong)*puVar24 * 0x10;
            puVar5 = (undefined8 *)(lVar19 + lVar16);
            uVar42 = puVar5[1];
            uVar40 = *puVar5;
            puVar5 = (undefined8 *)(lVar20 + lVar16);
            uVar46 = puVar5[1];
            uVar44 = *puVar5;
            psVar4 = (short *)(*(long *)(param_2 + 0x1f0) + (ulong)puVar24[1] * 4);
            pbVar21 = (byte *)(psVar4 + 1);
            if (*pbVar21 != 0) {
              fVar28 = (float)uVar29;
              fVar30 = (float)((ulong)uVar29 >> 0x20);
              fVar31 = (float)uVar32;
              fVar33 = (float)((ulong)uVar32 >> 0x20);
              bVar18 = 0;
              fVar34 = (float)uVar35;
              fVar36 = (float)((ulong)uVar35 >> 0x20);
              fVar37 = (float)uVar38;
              fVar39 = (float)((ulong)uVar38 >> 0x20);
              uVar23 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
              do {
                uVar1 = (ushort)bVar18;
                bVar18 = bVar18 + 1;
                fVar48 = *(float *)(*(long *)(param_2 + 0x1e0) +
                                   (ulong)(ushort)(*psVar4 + uVar1) * 4);
                lVar16 = *(long *)(param_1 + 8);
                uVar12 = (ulong)((int)uVar12 + 1);
                fVar52 = fVar28 + ((float)uVar40 - fVar28) * fVar48;
                fVar53 = fVar30 + ((float)((ulong)uVar40 >> 0x20) - fVar30) * fVar48;
                fVar54 = fVar31 + ((float)uVar42 - fVar31) * fVar48;
                fVar55 = fVar33 + ((float)((ulong)uVar42 >> 0x20) - fVar33) * fVar48;
                ((undefined8 *)(lVar16 + uVar23))[1] = CONCAT44(fVar55,fVar54);
                *(undefined8 *)(lVar16 + uVar23) = CONCAT44(fVar53,fVar52);
                fVar49 = fVar34 + ((float)uVar44 - fVar34) * fVar48;
                fVar50 = fVar36 + ((float)((ulong)uVar44 >> 0x20) - fVar36) * fVar48;
                fVar51 = fVar37 + ((float)uVar46 - fVar37) * fVar48;
                fVar48 = fVar39 + ((float)((ulong)uVar46 >> 0x20) - fVar39) * fVar48;
                lVar16 = *(long *)(param_1 + 0xc);
                auVar6._4_4_ = fVar53;
                auVar6._0_4_ = fVar52;
                auVar6._8_4_ = fVar54;
                auVar6._12_4_ = fVar55;
                auVar25 = NEON_fmin(auVar26,auVar6,4);
                auVar7._4_4_ = fVar53;
                auVar7._0_4_ = fVar52;
                auVar7._8_4_ = fVar54;
                auVar7._12_4_ = fVar55;
                auVar27 = NEON_fmax(auVar27,auVar7,4);
                ((undefined8 *)(lVar16 + uVar23))[1] = CONCAT44(fVar48,fVar51);
                *(undefined8 *)(lVar16 + uVar23) = CONCAT44(fVar50,fVar49);
                auVar26._4_4_ = fVar50;
                auVar26._0_4_ = fVar49;
                auVar26._8_4_ = fVar51;
                auVar26._12_4_ = fVar48;
                auVar26 = NEON_fmin(auVar25,auVar26,4);
                auVar25._4_4_ = fVar50;
                auVar25._0_4_ = fVar49;
                auVar25._8_4_ = fVar51;
                auVar25._12_4_ = fVar48;
                auVar27 = NEON_fmax(auVar27,auVar25,4);
                uVar23 = uVar23 + 0x10;
              } while (bVar18 < *pbVar21);
              bVar18 = *pbVar14;
            }
            bVar15 = bVar15 + 1;
            if (bVar18 <= bVar15) break;
            lVar19 = *param_3;
            lVar20 = *param_4;
          }
        }
        uVar17 = (ulong)*(ushort *)(*(long *)(param_2 + 0x2d0) + uVar13 * 2);
        if (uVar17 != 0xffff) {
          lVar22 = *(long *)(param_2 + 0x290);
          lVar19 = *param_3;
          lVar20 = *param_4;
          lVar16 = (ulong)*(ushort *)(lVar22 + uVar17 * 8) * 0x10;
          puVar5 = (undefined8 *)(lVar19 + lVar16);
          uVar32 = puVar5[1];
          uVar29 = *puVar5;
          puVar5 = (undefined8 *)(lVar20 + lVar16);
          uVar38 = puVar5[1];
          uVar35 = *puVar5;
          pbVar14 = (byte *)(lVar22 + uVar17 * 8 + 6);
          bVar18 = *pbVar14;
          if (bVar18 != 0) {
            bVar15 = 0;
            while( true ) {
              puVar24 = (ushort *)
                        (*(long *)(param_2 + 0x280) +
                        ((ulong)((uint)*(ushort *)(lVar22 + uVar17 * 8 + 2) + (uint)bVar15) & 0xffff
                        ) * 6);
              puVar5 = (undefined8 *)(lVar19 + (ulong)*puVar24 * 0x10);
              uVar43 = puVar5[1];
              uVar41 = *puVar5;
              puVar5 = (undefined8 *)(lVar20 + (ulong)*puVar24 * 0x10);
              uVar47 = puVar5[1];
              uVar45 = *puVar5;
              puVar5 = (undefined8 *)(lVar19 + (ulong)puVar24[1] * 0x10);
              uVar42 = puVar5[1];
              uVar40 = *puVar5;
              puVar5 = (undefined8 *)(lVar20 + (ulong)puVar24[1] * 0x10);
              uVar46 = puVar5[1];
              uVar44 = *puVar5;
              psVar4 = (short *)(*(long *)(param_2 + 0x210) + (ulong)puVar24[2] * 4);
              pbVar21 = (byte *)(psVar4 + 1);
              if (*pbVar21 != 0) {
                fVar28 = (float)uVar29;
                fVar30 = (float)((ulong)uVar29 >> 0x20);
                fVar31 = (float)uVar32;
                fVar33 = (float)((ulong)uVar32 >> 0x20);
                bVar18 = 0;
                fVar34 = (float)uVar35;
                fVar36 = (float)((ulong)uVar35 >> 0x20);
                fVar37 = (float)uVar38;
                fVar39 = (float)((ulong)uVar38 >> 0x20);
                uVar23 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
                do {
                  uVar1 = (ushort)bVar18;
                  bVar18 = bVar18 + 1;
                  pfVar2 = (float *)(*(long *)(param_2 + 0x200) +
                                    (ulong)(ushort)(*psVar4 + uVar1) * 8);
                  uVar12 = (ulong)((int)uVar12 + 1);
                  fVar48 = *pfVar2;
                  fVar56 = pfVar2[1];
                  lVar16 = *(long *)(param_1 + 8);
                  fVar52 = fVar28 + ((float)uVar41 - fVar28) * fVar48 +
                           ((float)uVar40 - fVar28) * fVar56;
                  fVar53 = fVar30 + ((float)((ulong)uVar41 >> 0x20) - fVar30) * fVar48 +
                           ((float)((ulong)uVar40 >> 0x20) - fVar30) * fVar56;
                  fVar54 = fVar31 + ((float)uVar43 - fVar31) * fVar48 +
                           ((float)uVar42 - fVar31) * fVar56;
                  fVar55 = fVar33 + ((float)((ulong)uVar43 >> 0x20) - fVar33) * fVar48 +
                           ((float)((ulong)uVar42 >> 0x20) - fVar33) * fVar56;
                  ((undefined8 *)(lVar16 + uVar23))[1] = CONCAT44(fVar55,fVar54);
                  *(undefined8 *)(lVar16 + uVar23) = CONCAT44(fVar53,fVar52);
                  fVar49 = fVar34 + ((float)uVar45 - fVar34) * fVar48 +
                           ((float)uVar44 - fVar34) * fVar56;
                  fVar50 = fVar36 + ((float)((ulong)uVar45 >> 0x20) - fVar36) * fVar48 +
                           ((float)((ulong)uVar44 >> 0x20) - fVar36) * fVar56;
                  fVar51 = fVar37 + ((float)uVar47 - fVar37) * fVar48 +
                           ((float)uVar46 - fVar37) * fVar56;
                  fVar48 = fVar39 + ((float)((ulong)uVar47 >> 0x20) - fVar39) * fVar48 +
                           ((float)((ulong)uVar46 >> 0x20) - fVar39) * fVar56;
                  lVar16 = *(long *)(param_1 + 0xc);
                  auVar10._4_4_ = fVar53;
                  auVar10._0_4_ = fVar52;
                  auVar10._8_4_ = fVar54;
                  auVar10._12_4_ = fVar55;
                  auVar26 = NEON_fmin(auVar26,auVar10,4);
                  auVar11._4_4_ = fVar53;
                  auVar11._0_4_ = fVar52;
                  auVar11._8_4_ = fVar54;
                  auVar11._12_4_ = fVar55;
                  auVar27 = NEON_fmax(auVar27,auVar11,4);
                  ((undefined8 *)(lVar16 + uVar23))[1] = CONCAT44(fVar55,fVar54);
                  *(undefined8 *)(lVar16 + uVar23) = CONCAT44(fVar53,fVar52);
                  auVar8._4_4_ = fVar50;
                  auVar8._0_4_ = fVar49;
                  auVar8._8_4_ = fVar51;
                  auVar8._12_4_ = fVar48;
                  auVar26 = NEON_fmin(auVar26,auVar8,4);
                  auVar9._4_4_ = fVar50;
                  auVar9._0_4_ = fVar49;
                  auVar9._8_4_ = fVar51;
                  auVar9._12_4_ = fVar48;
                  auVar27 = NEON_fmax(auVar27,auVar9,4);
                  uVar23 = uVar23 + 0x10;
                } while (bVar18 < *pbVar21);
                bVar18 = *pbVar14;
              }
              bVar15 = bVar15 + 1;
              if (bVar18 <= bVar15) break;
              lVar19 = *param_3;
              lVar20 = *param_4;
            }
          }
        }
      }
      uVar3 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar3;
    } while ((int)(uVar3 & 0xffff) < (int)param_3[1]);
  }
  fVar28 = (float)*param_5;
  fVar30 = (float)((ulong)*param_5 >> 0x20);
  param_1[2] = auVar26._8_4_ - fVar28;
  param_1[3] = auVar26._12_4_ - fVar30;
  *param_1 = auVar26._0_4_ - fVar28;
  param_1[1] = auVar26._4_4_ - fVar30;
  param_1[6] = auVar27._8_4_ + fVar28;
  param_1[7] = auVar27._12_4_ + fVar30;
  param_1[4] = auVar27._0_4_ + fVar28;
  param_1[5] = auVar27._4_4_ + fVar30;
  return;
}

