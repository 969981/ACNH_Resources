
void FUN_03fc20a0(long param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined1 *puVar21;
  ushort *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ushort *puVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  uVar2 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = param_2;
  param_2 = param_2 & (uVar2 ^ 0xffffffff);
  if (param_2 != 0) {
    uVar27 = 0;
    do {
      if ((param_2 >> 1 & 1) != 0) {
        lVar26 = param_1 + uVar27 * 2;
        puVar22 = (ushort *)(lVar26 + 0x20);
        uVar3 = *puVar22;
        puVar25 = (ushort *)(lVar26 + 0x10);
        uVar4 = *puVar25;
        if ((uint)uVar4 < (uint)uVar3) {
          uVar24 = (ulong)uVar4 & 0xfff0;
          *puVar25 = 0xffff;
          *puVar22 = 0;
          if ((uint)uVar24 < (uint)uVar3) {
            lVar26 = *(long *)(param_1 + 0x78);
            puVar21 = (undefined1 *)(lVar26 + uVar24);
            puVar23 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar24);
            do {
              uVar28 = CONCAT17(puVar21[0xe],
                                CONCAT16(puVar21[0xc],
                                         CONCAT15(puVar21[10],
                                                  CONCAT14(puVar21[8],
                                                           CONCAT13(puVar21[6],
                                                                    CONCAT12(puVar21[4],
                                                                             CONCAT11(puVar21[2],
                                                                                      *puVar21))))))
                               );
              uVar30 = CONCAT17(puVar21[0xf],
                                CONCAT16(puVar21[0xd],
                                         CONCAT15(puVar21[0xb],
                                                  CONCAT14(puVar21[9],
                                                           CONCAT13(puVar21[7],
                                                                    CONCAT12(puVar21[5],
                                                                             CONCAT11(puVar21[3],
                                                                                      puVar21[1]))))
                                                 )));
              puVar21 = puVar21 + 0x10;
              auVar31 = NEON_pmull(uVar28,uVar28,1);
              auVar29 = NEON_pmull(uVar30,uVar30,1);
              sVar5 = auVar29._0_2_ * 2;
              sVar6 = auVar29._2_2_ * 2;
              sVar7 = auVar29._4_2_ * 2;
              sVar8 = auVar29._6_2_ * 2;
              sVar9 = auVar29._8_2_ * 2;
              sVar10 = auVar29._10_2_ * 2;
              sVar11 = auVar29._12_2_ * 2;
              sVar12 = auVar29._14_2_ * 2;
              auVar29[0] = (byte)sVar5 | auVar31[0];
              auVar29[1] = (byte)((ushort)sVar5 >> 8) | auVar31[1];
              auVar29[2] = (byte)sVar6 | auVar31[2];
              auVar29[3] = (byte)((ushort)sVar6 >> 8) | auVar31[3];
              auVar29[4] = (byte)sVar7 | auVar31[4];
              auVar29[5] = (byte)((ushort)sVar7 >> 8) | auVar31[5];
              auVar29[6] = (byte)sVar8 | auVar31[6];
              auVar29[7] = (byte)((ushort)sVar8 >> 8) | auVar31[7];
              auVar29[8] = (byte)sVar9 | auVar31[8];
              auVar29[9] = (byte)((ushort)sVar9 >> 8) | auVar31[9];
              auVar29[10] = (byte)sVar10 | auVar31[10];
              auVar29[0xb] = (byte)((ushort)sVar10 >> 8) | auVar31[0xb];
              auVar29[0xc] = (byte)sVar11 | auVar31[0xc];
              auVar29[0xd] = (byte)((ushort)sVar11 >> 8) | auVar31[0xd];
              auVar29[0xe] = (byte)sVar12 | auVar31[0xe];
              auVar29[0xf] = (byte)((ushort)sVar12 >> 8) | auVar31[0xf];
              auVar29 = NEON_rev16(auVar29,1);
              puVar23[1] = auVar29._8_8_;
              *puVar23 = auVar29._0_8_;
              puVar23 = puVar23 + 2;
            } while (puVar21 < (undefined1 *)(lVar26 + (ulong)uVar3));
          }
        }
      }
      if ((param_2 >> 2 & 1) != 0) {
        lVar26 = param_1 + uVar27 * 2;
        puVar22 = (ushort *)(lVar26 + 0x40);
        uVar3 = *puVar22;
        puVar25 = (ushort *)(lVar26 + 0x30);
        uVar4 = *puVar25;
        if ((uint)uVar4 < (uint)uVar3) {
          uVar24 = (ulong)uVar4 & 0xffe0;
          *puVar25 = 0xffff;
          *puVar22 = 0;
          if ((uint)uVar24 < (uint)uVar3) {
            lVar26 = *(long *)(param_1 + 0x78);
            puVar23 = (undefined8 *)(*(long *)(param_1 + 0x88) + uVar24);
            puVar21 = (undefined1 *)(lVar26 + uVar24);
            do {
              puVar1 = puVar21 + 0x20;
              uVar28 = CONCAT17(puVar21[0xe],
                                CONCAT16(puVar21[0xc],
                                         CONCAT15(puVar21[10],
                                                  CONCAT14(puVar21[8],
                                                           CONCAT13(puVar21[6],
                                                                    CONCAT12(puVar21[4],
                                                                             CONCAT11(puVar21[2],
                                                                                      *puVar21))))))
                               );
              uVar30 = CONCAT17(puVar21[0xf],
                                CONCAT16(puVar21[0xd],
                                         CONCAT15(puVar21[0xb],
                                                  CONCAT14(puVar21[9],
                                                           CONCAT13(puVar21[7],
                                                                    CONCAT12(puVar21[5],
                                                                             CONCAT11(puVar21[3],
                                                                                      puVar21[1]))))
                                                 )));
              auVar29 = NEON_pmull(uVar28,uVar28,1);
              uVar28 = CONCAT17(puVar21[0x1e],
                                CONCAT16(puVar21[0x1c],
                                         CONCAT15(puVar21[0x1a],
                                                  CONCAT14(puVar21[0x18],
                                                           CONCAT13(puVar21[0x16],
                                                                    CONCAT12(puVar21[0x14],
                                                                             CONCAT11(puVar21[0x12],
                                                                                      puVar21[0x10])
                                                                            ))))));
              uVar32 = CONCAT17(puVar21[0x1f],
                                CONCAT16(puVar21[0x1d],
                                         CONCAT15(puVar21[0x1b],
                                                  CONCAT14(puVar21[0x19],
                                                           CONCAT13(puVar21[0x17],
                                                                    CONCAT12(puVar21[0x15],
                                                                             CONCAT11(puVar21[0x13],
                                                                                      puVar21[0x11])
                                                                            ))))));
              auVar35 = NEON_pmull(uVar32,uVar32,1);
              auVar31 = NEON_pmull(uVar28,uVar28,1);
              auVar33 = NEON_pmull(uVar30,uVar30,1);
              sVar5 = auVar35._0_2_ * 2;
              sVar6 = auVar35._2_2_ * 2;
              sVar7 = auVar35._4_2_ * 2;
              sVar8 = auVar35._6_2_ * 2;
              sVar9 = auVar35._8_2_ * 2;
              sVar10 = auVar35._10_2_ * 2;
              sVar11 = auVar35._12_2_ * 2;
              sVar12 = auVar35._14_2_ * 2;
              sVar13 = auVar31._0_2_ * 2;
              sVar14 = auVar31._2_2_ * 2;
              sVar15 = auVar31._4_2_ * 2;
              sVar16 = auVar31._6_2_ * 2;
              sVar17 = auVar31._8_2_ * 2;
              sVar18 = auVar31._10_2_ * 2;
              sVar19 = auVar31._12_2_ * 2;
              sVar20 = auVar31._14_2_ * 2;
              auVar34._0_8_ =
                   CONCAT17((byte)((ushort)sVar8 >> 8) | auVar33[7],
                            CONCAT16((byte)sVar8 | auVar33[6],
                                     CONCAT15((byte)((ushort)sVar7 >> 8) | auVar33[5],
                                              CONCAT14((byte)sVar7 | auVar33[4],
                                                       CONCAT13((byte)((ushort)sVar6 >> 8) |
                                                                auVar33[3],
                                                                CONCAT12((byte)sVar6 | auVar33[2],
                                                                         CONCAT11((byte)((ushort)
                                                  sVar5 >> 8) | auVar33[1],(byte)sVar5 | auVar33[0])
                                                  ))))));
              auVar34[8] = (byte)sVar9 | auVar33[8];
              auVar34[9] = (byte)((ushort)sVar9 >> 8) | auVar33[9];
              auVar34[10] = (byte)sVar10 | auVar33[10];
              auVar34[0xb] = (byte)((ushort)sVar10 >> 8) | auVar33[0xb];
              auVar34[0xc] = (byte)sVar11 | auVar33[0xc];
              auVar34[0xd] = (byte)((ushort)sVar11 >> 8) | auVar33[0xd];
              auVar34[0xe] = (byte)sVar12 | auVar33[0xe];
              auVar34[0xf] = (byte)((ushort)sVar12 >> 8) | auVar33[0xf];
              auVar31._0_8_ =
                   CONCAT17((byte)((ushort)sVar16 >> 8) | auVar29[7],
                            CONCAT16((byte)sVar16 | auVar29[6],
                                     CONCAT15((byte)((ushort)sVar15 >> 8) | auVar29[5],
                                              CONCAT14((byte)sVar15 | auVar29[4],
                                                       CONCAT13((byte)((ushort)sVar14 >> 8) |
                                                                auVar29[3],
                                                                CONCAT12((byte)sVar14 | auVar29[2],
                                                                         CONCAT11((byte)((ushort)
                                                  sVar13 >> 8) | auVar29[1],
                                                  (byte)sVar13 | auVar29[0])))))));
              auVar31[8] = (byte)sVar17 | auVar29[8];
              auVar31[9] = (byte)((ushort)sVar17 >> 8) | auVar29[9];
              auVar31[10] = (byte)sVar18 | auVar29[10];
              auVar31[0xb] = (byte)((ushort)sVar18 >> 8) | auVar29[0xb];
              auVar31[0xc] = (byte)sVar19 | auVar29[0xc];
              auVar31[0xd] = (byte)((ushort)sVar19 >> 8) | auVar29[0xd];
              auVar31[0xe] = (byte)sVar20 | auVar29[0xe];
              auVar31[0xf] = (byte)((ushort)sVar20 >> 8) | auVar29[0xf];
              auVar33 = NEON_pmull(auVar34._0_8_,auVar34._0_8_,1);
              auVar35 = NEON_pmull2(auVar34,auVar34,1);
              auVar34 = NEON_pmull(auVar31._0_8_,auVar31._0_8_,1);
              auVar29 = NEON_pmull2(auVar31,auVar31,1);
              sVar5 = auVar33._0_2_ * 2;
              sVar6 = auVar33._2_2_ * 2;
              sVar7 = auVar33._4_2_ * 2;
              sVar8 = auVar33._6_2_ * 2;
              sVar9 = auVar33._8_2_ * 2;
              sVar10 = auVar33._10_2_ * 2;
              sVar11 = auVar33._12_2_ * 2;
              sVar12 = auVar33._14_2_ * 2;
              sVar13 = auVar35._0_2_ * 2;
              sVar14 = auVar35._2_2_ * 2;
              sVar15 = auVar35._4_2_ * 2;
              sVar16 = auVar35._6_2_ * 2;
              sVar17 = auVar35._8_2_ * 2;
              sVar18 = auVar35._10_2_ * 2;
              sVar19 = auVar35._12_2_ * 2;
              sVar20 = auVar35._14_2_ * 2;
              auVar35[0] = (byte)sVar5 | auVar34[0];
              auVar35[1] = (byte)((ushort)sVar5 >> 8) | auVar34[1];
              auVar35[2] = (byte)sVar6 | auVar34[2];
              auVar35[3] = (byte)((ushort)sVar6 >> 8) | auVar34[3];
              auVar35[4] = (byte)sVar7 | auVar34[4];
              auVar35[5] = (byte)((ushort)sVar7 >> 8) | auVar34[5];
              auVar35[6] = (byte)sVar8 | auVar34[6];
              auVar35[7] = (byte)((ushort)sVar8 >> 8) | auVar34[7];
              auVar35[8] = (byte)sVar9 | auVar34[8];
              auVar35[9] = (byte)((ushort)sVar9 >> 8) | auVar34[9];
              auVar35[10] = (byte)sVar10 | auVar34[10];
              auVar35[0xb] = (byte)((ushort)sVar10 >> 8) | auVar34[0xb];
              auVar35[0xc] = (byte)sVar11 | auVar34[0xc];
              auVar35[0xd] = (byte)((ushort)sVar11 >> 8) | auVar34[0xd];
              auVar35[0xe] = (byte)sVar12 | auVar34[0xe];
              auVar35[0xf] = (byte)((ushort)sVar12 >> 8) | auVar34[0xf];
              auVar33[0] = (byte)sVar13 | auVar29[0];
              auVar33[1] = (byte)((ushort)sVar13 >> 8) | auVar29[1];
              auVar33[2] = (byte)sVar14 | auVar29[2];
              auVar33[3] = (byte)((ushort)sVar14 >> 8) | auVar29[3];
              auVar33[4] = (byte)sVar15 | auVar29[4];
              auVar33[5] = (byte)((ushort)sVar15 >> 8) | auVar29[5];
              auVar33[6] = (byte)sVar16 | auVar29[6];
              auVar33[7] = (byte)((ushort)sVar16 >> 8) | auVar29[7];
              auVar33[8] = (byte)sVar17 | auVar29[8];
              auVar33[9] = (byte)((ushort)sVar17 >> 8) | auVar29[9];
              auVar33[10] = (byte)sVar18 | auVar29[10];
              auVar33[0xb] = (byte)((ushort)sVar18 >> 8) | auVar29[0xb];
              auVar33[0xc] = (byte)sVar19 | auVar29[0xc];
              auVar33[0xd] = (byte)((ushort)sVar19 >> 8) | auVar29[0xd];
              auVar33[0xe] = (byte)sVar20 | auVar29[0xe];
              auVar33[0xf] = (byte)((ushort)sVar20 >> 8) | auVar29[0xf];
              auVar31 = NEON_rev32(auVar35,1);
              auVar29 = NEON_rev32(auVar33,1);
              puVar23[1] = auVar31._8_8_;
              *puVar23 = auVar31._0_8_;
              puVar23[3] = auVar29._8_8_;
              puVar23[2] = auVar29._0_8_;
              puVar23 = puVar23 + 4;
              puVar21 = puVar1;
            } while (puVar1 < (undefined1 *)(lVar26 + (ulong)uVar3));
          }
        }
      }
      if (((param_2 >> 3 & 1) != 0) &&
         (lVar26 = param_1 + uVar27 * 2, *(ushort *)(lVar26 + 0x50) < *(ushort *)(lVar26 + 0x60))) {
        FUN_03ff9980(param_1,uVar27 & 0xffffffff);
      }
      uVar27 = uVar27 + 1;
      param_2 = param_2 >> 4;
    } while (uVar27 != 8);
  }
  return;
}

