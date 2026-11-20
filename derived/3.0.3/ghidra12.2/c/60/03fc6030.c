
void FUN_03fc6030(long param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
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
  short sVar21;
  short sVar22;
  short sVar23;
  undefined1 *puVar24;
  undefined1 uVar25;
  ushort *puVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  ushort *puVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    uVar34 = *(uint *)(param_1 + 0xc);
    uVar33 = 0;
    *(undefined1 *)(param_1 + 0x70) = 0;
    do {
      if ((uVar34 >> 1 & 1) != 0) {
        lVar31 = param_1 + uVar33 * 2;
        puVar26 = (ushort *)(lVar31 + 0x20);
        uVar4 = *puVar26;
        puVar30 = (ushort *)(lVar31 + 0x10);
        uVar5 = *puVar30;
        if ((uint)uVar5 < (uint)uVar4) {
          uVar29 = (ulong)uVar5 & 0xfff0;
          *puVar30 = 0xffff;
          *puVar26 = 0;
          if ((uint)uVar29 < (uint)uVar4) {
            lVar31 = *(long *)(param_1 + 0x78);
            puVar24 = (undefined1 *)(lVar31 + uVar29);
            puVar27 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar29);
            do {
              uVar35 = CONCAT17(puVar24[0xe],
                                CONCAT16(puVar24[0xc],
                                         CONCAT15(puVar24[10],
                                                  CONCAT14(puVar24[8],
                                                           CONCAT13(puVar24[6],
                                                                    CONCAT12(puVar24[4],
                                                                             CONCAT11(puVar24[2],
                                                                                      *puVar24))))))
                               );
              uVar37 = CONCAT17(puVar24[0xf],
                                CONCAT16(puVar24[0xd],
                                         CONCAT15(puVar24[0xb],
                                                  CONCAT14(puVar24[9],
                                                           CONCAT13(puVar24[7],
                                                                    CONCAT12(puVar24[5],
                                                                             CONCAT11(puVar24[3],
                                                                                      puVar24[1]))))
                                                 )));
              puVar24 = puVar24 + 0x10;
              auVar38 = NEON_pmull(uVar35,uVar35,1);
              auVar36 = NEON_pmull(uVar37,uVar37,1);
              sVar8 = auVar36._0_2_ * 2;
              sVar9 = auVar36._2_2_ * 2;
              sVar10 = auVar36._4_2_ * 2;
              sVar11 = auVar36._6_2_ * 2;
              sVar12 = auVar36._8_2_ * 2;
              sVar13 = auVar36._10_2_ * 2;
              sVar14 = auVar36._12_2_ * 2;
              sVar15 = auVar36._14_2_ * 2;
              auVar36[0] = (byte)sVar8 | auVar38[0];
              auVar36[1] = (byte)((ushort)sVar8 >> 8) | auVar38[1];
              auVar36[2] = (byte)sVar9 | auVar38[2];
              auVar36[3] = (byte)((ushort)sVar9 >> 8) | auVar38[3];
              auVar36[4] = (byte)sVar10 | auVar38[4];
              auVar36[5] = (byte)((ushort)sVar10 >> 8) | auVar38[5];
              auVar36[6] = (byte)sVar11 | auVar38[6];
              auVar36[7] = (byte)((ushort)sVar11 >> 8) | auVar38[7];
              auVar36[8] = (byte)sVar12 | auVar38[8];
              auVar36[9] = (byte)((ushort)sVar12 >> 8) | auVar38[9];
              auVar36[10] = (byte)sVar13 | auVar38[10];
              auVar36[0xb] = (byte)((ushort)sVar13 >> 8) | auVar38[0xb];
              auVar36[0xc] = (byte)sVar14 | auVar38[0xc];
              auVar36[0xd] = (byte)((ushort)sVar14 >> 8) | auVar38[0xd];
              auVar36[0xe] = (byte)sVar15 | auVar38[0xe];
              auVar36[0xf] = (byte)((ushort)sVar15 >> 8) | auVar38[0xf];
              auVar36 = NEON_rev16(auVar36,1);
              puVar27[1] = auVar36._8_8_;
              *puVar27 = auVar36._0_8_;
              puVar27 = puVar27 + 2;
            } while (puVar24 < (undefined1 *)(lVar31 + (ulong)uVar4));
          }
        }
      }
      if ((uVar34 >> 2 & 1) != 0) {
        lVar31 = param_1 + uVar33 * 2;
        puVar26 = (ushort *)(lVar31 + 0x40);
        uVar4 = *puVar26;
        puVar30 = (ushort *)(lVar31 + 0x30);
        uVar5 = *puVar30;
        if ((uint)uVar5 < (uint)uVar4) {
          uVar29 = (ulong)uVar5 & 0xffe0;
          *puVar30 = 0xffff;
          *puVar26 = 0;
          if ((uint)uVar29 < (uint)uVar4) {
            lVar31 = *(long *)(param_1 + 0x78);
            puVar27 = (undefined8 *)(*(long *)(param_1 + 0x88) + uVar29);
            puVar24 = (undefined1 *)(lVar31 + uVar29);
            do {
              puVar1 = puVar24 + 0x20;
              uVar35 = CONCAT17(puVar24[0xe],
                                CONCAT16(puVar24[0xc],
                                         CONCAT15(puVar24[10],
                                                  CONCAT14(puVar24[8],
                                                           CONCAT13(puVar24[6],
                                                                    CONCAT12(puVar24[4],
                                                                             CONCAT11(puVar24[2],
                                                                                      *puVar24))))))
                               );
              uVar37 = CONCAT17(puVar24[0xf],
                                CONCAT16(puVar24[0xd],
                                         CONCAT15(puVar24[0xb],
                                                  CONCAT14(puVar24[9],
                                                           CONCAT13(puVar24[7],
                                                                    CONCAT12(puVar24[5],
                                                                             CONCAT11(puVar24[3],
                                                                                      puVar24[1]))))
                                                 )));
              auVar36 = NEON_pmull(uVar35,uVar35,1);
              uVar35 = CONCAT17(puVar24[0x1e],
                                CONCAT16(puVar24[0x1c],
                                         CONCAT15(puVar24[0x1a],
                                                  CONCAT14(puVar24[0x18],
                                                           CONCAT13(puVar24[0x16],
                                                                    CONCAT12(puVar24[0x14],
                                                                             CONCAT11(puVar24[0x12],
                                                                                      puVar24[0x10])
                                                                            ))))));
              uVar39 = CONCAT17(puVar24[0x1f],
                                CONCAT16(puVar24[0x1d],
                                         CONCAT15(puVar24[0x1b],
                                                  CONCAT14(puVar24[0x19],
                                                           CONCAT13(puVar24[0x17],
                                                                    CONCAT12(puVar24[0x15],
                                                                             CONCAT11(puVar24[0x13],
                                                                                      puVar24[0x11])
                                                                            ))))));
              auVar42 = NEON_pmull(uVar39,uVar39,1);
              auVar38 = NEON_pmull(uVar35,uVar35,1);
              auVar40 = NEON_pmull(uVar37,uVar37,1);
              sVar8 = auVar42._0_2_ * 2;
              sVar9 = auVar42._2_2_ * 2;
              sVar10 = auVar42._4_2_ * 2;
              sVar11 = auVar42._6_2_ * 2;
              sVar12 = auVar42._8_2_ * 2;
              sVar13 = auVar42._10_2_ * 2;
              sVar14 = auVar42._12_2_ * 2;
              sVar15 = auVar42._14_2_ * 2;
              sVar16 = auVar38._0_2_ * 2;
              sVar17 = auVar38._2_2_ * 2;
              sVar18 = auVar38._4_2_ * 2;
              sVar19 = auVar38._6_2_ * 2;
              sVar20 = auVar38._8_2_ * 2;
              sVar21 = auVar38._10_2_ * 2;
              sVar22 = auVar38._12_2_ * 2;
              sVar23 = auVar38._14_2_ * 2;
              auVar41._0_8_ =
                   CONCAT17((byte)((ushort)sVar11 >> 8) | auVar40[7],
                            CONCAT16((byte)sVar11 | auVar40[6],
                                     CONCAT15((byte)((ushort)sVar10 >> 8) | auVar40[5],
                                              CONCAT14((byte)sVar10 | auVar40[4],
                                                       CONCAT13((byte)((ushort)sVar9 >> 8) |
                                                                auVar40[3],
                                                                CONCAT12((byte)sVar9 | auVar40[2],
                                                                         CONCAT11((byte)((ushort)
                                                  sVar8 >> 8) | auVar40[1],(byte)sVar8 | auVar40[0])
                                                  ))))));
              auVar41[8] = (byte)sVar12 | auVar40[8];
              auVar41[9] = (byte)((ushort)sVar12 >> 8) | auVar40[9];
              auVar41[10] = (byte)sVar13 | auVar40[10];
              auVar41[0xb] = (byte)((ushort)sVar13 >> 8) | auVar40[0xb];
              auVar41[0xc] = (byte)sVar14 | auVar40[0xc];
              auVar41[0xd] = (byte)((ushort)sVar14 >> 8) | auVar40[0xd];
              auVar41[0xe] = (byte)sVar15 | auVar40[0xe];
              auVar41[0xf] = (byte)((ushort)sVar15 >> 8) | auVar40[0xf];
              auVar38._0_8_ =
                   CONCAT17((byte)((ushort)sVar19 >> 8) | auVar36[7],
                            CONCAT16((byte)sVar19 | auVar36[6],
                                     CONCAT15((byte)((ushort)sVar18 >> 8) | auVar36[5],
                                              CONCAT14((byte)sVar18 | auVar36[4],
                                                       CONCAT13((byte)((ushort)sVar17 >> 8) |
                                                                auVar36[3],
                                                                CONCAT12((byte)sVar17 | auVar36[2],
                                                                         CONCAT11((byte)((ushort)
                                                  sVar16 >> 8) | auVar36[1],
                                                  (byte)sVar16 | auVar36[0])))))));
              auVar38[8] = (byte)sVar20 | auVar36[8];
              auVar38[9] = (byte)((ushort)sVar20 >> 8) | auVar36[9];
              auVar38[10] = (byte)sVar21 | auVar36[10];
              auVar38[0xb] = (byte)((ushort)sVar21 >> 8) | auVar36[0xb];
              auVar38[0xc] = (byte)sVar22 | auVar36[0xc];
              auVar38[0xd] = (byte)((ushort)sVar22 >> 8) | auVar36[0xd];
              auVar38[0xe] = (byte)sVar23 | auVar36[0xe];
              auVar38[0xf] = (byte)((ushort)sVar23 >> 8) | auVar36[0xf];
              auVar40 = NEON_pmull(auVar41._0_8_,auVar41._0_8_,1);
              auVar42 = NEON_pmull2(auVar41,auVar41,1);
              auVar41 = NEON_pmull(auVar38._0_8_,auVar38._0_8_,1);
              auVar36 = NEON_pmull2(auVar38,auVar38,1);
              sVar8 = auVar40._0_2_ * 2;
              sVar9 = auVar40._2_2_ * 2;
              sVar10 = auVar40._4_2_ * 2;
              sVar11 = auVar40._6_2_ * 2;
              sVar12 = auVar40._8_2_ * 2;
              sVar13 = auVar40._10_2_ * 2;
              sVar14 = auVar40._12_2_ * 2;
              sVar15 = auVar40._14_2_ * 2;
              sVar16 = auVar42._0_2_ * 2;
              sVar17 = auVar42._2_2_ * 2;
              sVar18 = auVar42._4_2_ * 2;
              sVar19 = auVar42._6_2_ * 2;
              sVar20 = auVar42._8_2_ * 2;
              sVar21 = auVar42._10_2_ * 2;
              sVar22 = auVar42._12_2_ * 2;
              sVar23 = auVar42._14_2_ * 2;
              auVar42[0] = (byte)sVar8 | auVar41[0];
              auVar42[1] = (byte)((ushort)sVar8 >> 8) | auVar41[1];
              auVar42[2] = (byte)sVar9 | auVar41[2];
              auVar42[3] = (byte)((ushort)sVar9 >> 8) | auVar41[3];
              auVar42[4] = (byte)sVar10 | auVar41[4];
              auVar42[5] = (byte)((ushort)sVar10 >> 8) | auVar41[5];
              auVar42[6] = (byte)sVar11 | auVar41[6];
              auVar42[7] = (byte)((ushort)sVar11 >> 8) | auVar41[7];
              auVar42[8] = (byte)sVar12 | auVar41[8];
              auVar42[9] = (byte)((ushort)sVar12 >> 8) | auVar41[9];
              auVar42[10] = (byte)sVar13 | auVar41[10];
              auVar42[0xb] = (byte)((ushort)sVar13 >> 8) | auVar41[0xb];
              auVar42[0xc] = (byte)sVar14 | auVar41[0xc];
              auVar42[0xd] = (byte)((ushort)sVar14 >> 8) | auVar41[0xd];
              auVar42[0xe] = (byte)sVar15 | auVar41[0xe];
              auVar42[0xf] = (byte)((ushort)sVar15 >> 8) | auVar41[0xf];
              auVar40[0] = (byte)sVar16 | auVar36[0];
              auVar40[1] = (byte)((ushort)sVar16 >> 8) | auVar36[1];
              auVar40[2] = (byte)sVar17 | auVar36[2];
              auVar40[3] = (byte)((ushort)sVar17 >> 8) | auVar36[3];
              auVar40[4] = (byte)sVar18 | auVar36[4];
              auVar40[5] = (byte)((ushort)sVar18 >> 8) | auVar36[5];
              auVar40[6] = (byte)sVar19 | auVar36[6];
              auVar40[7] = (byte)((ushort)sVar19 >> 8) | auVar36[7];
              auVar40[8] = (byte)sVar20 | auVar36[8];
              auVar40[9] = (byte)((ushort)sVar20 >> 8) | auVar36[9];
              auVar40[10] = (byte)sVar21 | auVar36[10];
              auVar40[0xb] = (byte)((ushort)sVar21 >> 8) | auVar36[0xb];
              auVar40[0xc] = (byte)sVar22 | auVar36[0xc];
              auVar40[0xd] = (byte)((ushort)sVar22 >> 8) | auVar36[0xd];
              auVar40[0xe] = (byte)sVar23 | auVar36[0xe];
              auVar40[0xf] = (byte)((ushort)sVar23 >> 8) | auVar36[0xf];
              auVar38 = NEON_rev32(auVar42,1);
              auVar36 = NEON_rev32(auVar40,1);
              puVar27[1] = auVar38._8_8_;
              *puVar27 = auVar38._0_8_;
              puVar27[3] = auVar36._8_8_;
              puVar27[2] = auVar36._0_8_;
              puVar27 = puVar27 + 4;
              puVar24 = puVar1;
            } while (puVar1 < (undefined1 *)(lVar31 + (ulong)uVar4));
          }
        }
      }
      if (((uVar34 >> 3 & 1) != 0) &&
         (lVar31 = param_1 + uVar33 * 2, *(ushort *)(lVar31 + 0x50) < *(ushort *)(lVar31 + 0x60))) {
        FUN_03ff9980(param_1,uVar33 & 0xffffffff);
      }
      uVar33 = uVar33 + 1;
      uVar34 = uVar34 >> 4;
    } while (uVar33 != 8);
  }
  cVar2 = *(char *)(param_1 + 0x3170f7);
  uVar25 = *(undefined1 *)(param_1 + 0x45e71);
  *(undefined1 *)(param_1 + 0x45e7c) = 0;
  *(undefined2 *)(param_1 + 0x45e7a) = 0;
  uVar34 = (int)((ulong)(*(long *)(param_1 + 0x226a80) - (param_1 + 0x45e80)) >> 8) * -0x553340d5 +
           1;
  uVar7 = -uVar34;
  uVar34 = uVar34 & 3;
  if (-1 < (int)uVar7) {
    uVar34 = -(uVar7 & 3);
  }
  lVar32 = param_1 + 0x45e80 + (long)(int)uVar34 * 0x78300;
  bVar3 = *(byte *)(param_1 + 0x316a9f);
  *(undefined1 *)(lVar32 + 0x782f9) = 0;
  *(long *)(param_1 + 0x226a80) = lVar32;
  *(undefined2 *)(lVar32 + 0x7802b) = 0;
  lVar28 = *(long *)(lVar32 + 0x78020);
  lVar31 = 0x1de00;
  if (cVar2 != '\0') {
    lVar31 = 0x3be00;
  }
  *(undefined1 *)(lVar32 + 0x7802e) = uVar25;
  iVar6 = bVar3 - 1;
  lVar31 = lVar28 + lVar31 * 2;
  *(char *)(lVar32 + 0x7802d) = (char)iVar6;
  uVar25 = *(undefined1 *)(param_1 + 0x4594c);
  *(long *)(&LAB_00316a88 + param_1) = lVar28;
  *(long *)(&LAB_00316a90 + param_1) = lVar31;
  *(undefined1 *)(lVar32 + 0x78028) = uVar25;
  if (iVar6 == 0) {
    *(long *)(param_1 + 0x45a00) = lVar28;
    if ((0x94U >> (ulong)(*(byte *)(param_1 + 0x316a9e) & 0x1f) & 1) == 0) {
LAB_03fc62d0:
      if ((((*(int *)(*(long *)(param_1 + 0x45e68) + 0x50) == 0) &&
           (*(int *)(*(long *)(param_1 + 0x45e68) + 0x60) == 0)) &&
          (*(byte *)(param_1 + 0x316aa1) < 2)) && (*(char *)(param_1 + 0x3170e8) == '\0')) {
        *(undefined1 **)(param_1 + 0x3170f8) = &LAB_03fcb350;
        uVar25 = 4;
        goto LAB_03fc6308;
      }
    }
  }
  else {
    *(long *)(param_1 + 0x45a00) = lVar31;
    if (((0x94U >> (ulong)(*(byte *)(param_1 + 0x316a9e) & 0x1f) & 1) == 0) && (bVar3 != 2))
    goto LAB_03fc62d0;
  }
  *(undefined1 **)(param_1 + 0x3170f8) = &LAB_03fcbe70;
  uVar25 = 1;
LAB_03fc6308:
  *(undefined1 *)(param_1 + 0x317100) = uVar25;
  return;
}

