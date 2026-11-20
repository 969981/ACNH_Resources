
void FUN_03ff9980(long param_1,ushort param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
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
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  undefined8 *puVar27;
  ulong uVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  lVar30 = param_1 + (ulong)param_2 * 2;
  uVar28 = (ulong)*(ushort *)(lVar30 + 0x50) & 0xffc0;
  *(undefined2 *)(lVar30 + 0x50) = 0xffff;
  uVar2 = *(ushort *)(lVar30 + 0x60);
  *(undefined2 *)(lVar30 + 0x60) = 0;
  if ((uint)uVar28 < (uint)uVar2) {
    lVar30 = *(long *)(param_1 + 0x78);
    puVar27 = (undefined8 *)(*(long *)(param_1 + 0x90) + uVar28);
    puVar29 = (undefined1 *)(lVar30 + uVar28);
    do {
      uVar31 = CONCAT17(puVar29[0xe],
                        CONCAT16(puVar29[0xc],
                                 CONCAT15(puVar29[10],
                                          CONCAT14(puVar29[8],
                                                   CONCAT13(puVar29[6],
                                                            CONCAT12(puVar29[4],
                                                                     CONCAT11(puVar29[2],*puVar29)))
                                                  ))));
      uVar33 = CONCAT17(puVar29[0xf],
                        CONCAT16(puVar29[0xd],
                                 CONCAT15(puVar29[0xb],
                                          CONCAT14(puVar29[9],
                                                   CONCAT13(puVar29[7],
                                                            CONCAT12(puVar29[5],
                                                                     CONCAT11(puVar29[3],puVar29[1])
                                                                    ))))));
      uVar35 = CONCAT17(puVar29[0x2e],
                        CONCAT16(puVar29[0x2c],
                                 CONCAT15(puVar29[0x2a],
                                          CONCAT14(puVar29[0x28],
                                                   CONCAT13(puVar29[0x26],
                                                            CONCAT12(puVar29[0x24],
                                                                     CONCAT11(puVar29[0x22],
                                                                              puVar29[0x20])))))));
      uVar37 = CONCAT17(puVar29[0x2f],
                        CONCAT16(puVar29[0x2d],
                                 CONCAT15(puVar29[0x2b],
                                          CONCAT14(puVar29[0x29],
                                                   CONCAT13(puVar29[0x27],
                                                            CONCAT12(puVar29[0x25],
                                                                     CONCAT11(puVar29[0x23],
                                                                              puVar29[0x21])))))));
      uVar44 = CONCAT17(puVar29[0x3e],
                        CONCAT16(puVar29[0x3c],
                                 CONCAT15(puVar29[0x3a],
                                          CONCAT14(puVar29[0x38],
                                                   CONCAT13(puVar29[0x36],
                                                            CONCAT12(puVar29[0x34],
                                                                     CONCAT11(puVar29[0x32],
                                                                              puVar29[0x30])))))));
      uVar46 = CONCAT17(puVar29[0x3f],
                        CONCAT16(puVar29[0x3d],
                                 CONCAT15(puVar29[0x3b],
                                          CONCAT14(puVar29[0x39],
                                                   CONCAT13(puVar29[0x37],
                                                            CONCAT12(puVar29[0x35],
                                                                     CONCAT11(puVar29[0x33],
                                                                              puVar29[0x31])))))));
      auVar47 = NEON_pmull(uVar31,uVar31,1);
      auVar32 = NEON_pmull(uVar33,uVar33,1);
      puVar1 = puVar29 + 0x40;
      uVar31 = CONCAT17(puVar29[0x1e],
                        CONCAT16(puVar29[0x1c],
                                 CONCAT15(puVar29[0x1a],
                                          CONCAT14(puVar29[0x18],
                                                   CONCAT13(puVar29[0x16],
                                                            CONCAT12(puVar29[0x14],
                                                                     CONCAT11(puVar29[0x12],
                                                                              puVar29[0x10])))))));
      uVar33 = CONCAT17(puVar29[0x1f],
                        CONCAT16(puVar29[0x1d],
                                 CONCAT15(puVar29[0x1b],
                                          CONCAT14(puVar29[0x19],
                                                   CONCAT13(puVar29[0x17],
                                                            CONCAT12(puVar29[0x15],
                                                                     CONCAT11(puVar29[0x13],
                                                                              puVar29[0x11])))))));
      auVar34 = NEON_pmull(uVar35,uVar35,1);
      auVar36 = NEON_pmull(uVar37,uVar37,1);
      auVar38 = NEON_pmull(uVar44,uVar44,1);
      sVar3 = auVar36._0_2_ * 2;
      sVar4 = auVar36._2_2_ * 2;
      sVar5 = auVar36._4_2_ * 2;
      sVar6 = auVar36._6_2_ * 2;
      sVar7 = auVar36._8_2_ * 2;
      sVar8 = auVar36._10_2_ * 2;
      sVar9 = auVar36._12_2_ * 2;
      sVar10 = auVar36._14_2_ * 2;
      sVar11 = auVar34._0_2_ * 2;
      sVar12 = auVar34._2_2_ * 2;
      sVar13 = auVar34._4_2_ * 2;
      sVar14 = auVar34._6_2_ * 2;
      sVar15 = auVar34._8_2_ * 2;
      sVar16 = auVar34._10_2_ * 2;
      sVar17 = auVar34._12_2_ * 2;
      sVar18 = auVar34._14_2_ * 2;
      sVar19 = auVar38._0_2_ * 2;
      sVar20 = auVar38._2_2_ * 2;
      sVar21 = auVar38._4_2_ * 2;
      sVar22 = auVar38._6_2_ * 2;
      sVar23 = auVar38._8_2_ * 2;
      sVar24 = auVar38._10_2_ * 2;
      sVar25 = auVar38._12_2_ * 2;
      sVar26 = auVar38._14_2_ * 2;
      auVar48 = NEON_pmull(uVar31,uVar31,1);
      auVar36 = NEON_pmull(uVar33,uVar33,1);
      auVar41 = NEON_pmull(uVar46,uVar46,1);
      auVar34._0_8_ =
           CONCAT17((byte)((ushort)sVar6 >> 8) | auVar32[7],
                    CONCAT16((byte)sVar6 | auVar32[6],
                             CONCAT15((byte)((ushort)sVar5 >> 8) | auVar32[5],
                                      CONCAT14((byte)sVar5 | auVar32[4],
                                               CONCAT13((byte)((ushort)sVar4 >> 8) | auVar32[3],
                                                        CONCAT12((byte)sVar4 | auVar32[2],
                                                                 CONCAT11((byte)((ushort)sVar3 >> 8)
                                                                          | auVar32[1],
                                                                          (byte)sVar3 | auVar32[0]))
                                                       )))));
      auVar34[8] = (byte)sVar7 | auVar32[8];
      auVar34[9] = (byte)((ushort)sVar7 >> 8) | auVar32[9];
      auVar34[10] = (byte)sVar8 | auVar32[10];
      auVar34[0xb] = (byte)((ushort)sVar8 >> 8) | auVar32[0xb];
      auVar34[0xc] = (byte)sVar9 | auVar32[0xc];
      auVar34[0xd] = (byte)((ushort)sVar9 >> 8) | auVar32[0xd];
      auVar34[0xe] = (byte)sVar10 | auVar32[0xe];
      auVar34[0xf] = (byte)((ushort)sVar10 >> 8) | auVar32[0xf];
      auVar38._0_8_ =
           CONCAT17((byte)((ushort)sVar14 >> 8) | auVar47[7],
                    CONCAT16((byte)sVar14 | auVar47[6],
                             CONCAT15((byte)((ushort)sVar13 >> 8) | auVar47[5],
                                      CONCAT14((byte)sVar13 | auVar47[4],
                                               CONCAT13((byte)((ushort)sVar12 >> 8) | auVar47[3],
                                                        CONCAT12((byte)sVar12 | auVar47[2],
                                                                 CONCAT11((byte)((ushort)sVar11 >> 8
                                                                                ) | auVar47[1],
                                                                          (byte)sVar11 | auVar47[0])
                                                                ))))));
      auVar38[8] = (byte)sVar15 | auVar47[8];
      auVar38[9] = (byte)((ushort)sVar15 >> 8) | auVar47[9];
      auVar38[10] = (byte)sVar16 | auVar47[10];
      auVar38[0xb] = (byte)((ushort)sVar16 >> 8) | auVar47[0xb];
      auVar38[0xc] = (byte)sVar17 | auVar47[0xc];
      auVar38[0xd] = (byte)((ushort)sVar17 >> 8) | auVar47[0xd];
      auVar38[0xe] = (byte)sVar18 | auVar47[0xe];
      auVar38[0xf] = (byte)((ushort)sVar18 >> 8) | auVar47[0xf];
      sVar3 = auVar41._0_2_ * 2;
      sVar4 = auVar41._2_2_ * 2;
      sVar5 = auVar41._4_2_ * 2;
      sVar6 = auVar41._6_2_ * 2;
      sVar7 = auVar41._8_2_ * 2;
      sVar8 = auVar41._10_2_ * 2;
      sVar9 = auVar41._12_2_ * 2;
      sVar10 = auVar41._14_2_ * 2;
      auVar43._0_8_ =
           CONCAT17((byte)((ushort)sVar22 >> 8) | auVar48[7],
                    CONCAT16((byte)sVar22 | auVar48[6],
                             CONCAT15((byte)((ushort)sVar21 >> 8) | auVar48[5],
                                      CONCAT14((byte)sVar21 | auVar48[4],
                                               CONCAT13((byte)((ushort)sVar20 >> 8) | auVar48[3],
                                                        CONCAT12((byte)sVar20 | auVar48[2],
                                                                 CONCAT11((byte)((ushort)sVar19 >> 8
                                                                                ) | auVar48[1],
                                                                          (byte)sVar19 | auVar48[0])
                                                                ))))));
      auVar43[8] = (byte)sVar23 | auVar48[8];
      auVar43[9] = (byte)((ushort)sVar23 >> 8) | auVar48[9];
      auVar43[10] = (byte)sVar24 | auVar48[10];
      auVar43[0xb] = (byte)((ushort)sVar24 >> 8) | auVar48[0xb];
      auVar43[0xc] = (byte)sVar25 | auVar48[0xc];
      auVar43[0xd] = (byte)((ushort)sVar25 >> 8) | auVar48[0xd];
      auVar43[0xe] = (byte)sVar26 | auVar48[0xe];
      auVar43[0xf] = (byte)((ushort)sVar26 >> 8) | auVar48[0xf];
      auVar42 = NEON_pmull(auVar34._0_8_,auVar34._0_8_,1);
      auVar32 = NEON_pmull2(auVar34,auVar34,1);
      auVar47._0_8_ =
           CONCAT17((byte)((ushort)sVar6 >> 8) | auVar36[7],
                    CONCAT16((byte)sVar6 | auVar36[6],
                             CONCAT15((byte)((ushort)sVar5 >> 8) | auVar36[5],
                                      CONCAT14((byte)sVar5 | auVar36[4],
                                               CONCAT13((byte)((ushort)sVar4 >> 8) | auVar36[3],
                                                        CONCAT12((byte)sVar4 | auVar36[2],
                                                                 CONCAT11((byte)((ushort)sVar3 >> 8)
                                                                          | auVar36[1],
                                                                          (byte)sVar3 | auVar36[0]))
                                                       )))));
      auVar47[8] = (byte)sVar7 | auVar36[8];
      auVar47[9] = (byte)((ushort)sVar7 >> 8) | auVar36[9];
      auVar47[10] = (byte)sVar8 | auVar36[10];
      auVar47[0xb] = (byte)((ushort)sVar8 >> 8) | auVar36[0xb];
      auVar47[0xc] = (byte)sVar9 | auVar36[0xc];
      auVar47[0xd] = (byte)((ushort)sVar9 >> 8) | auVar36[0xd];
      auVar47[0xe] = (byte)sVar10 | auVar36[0xe];
      auVar47[0xf] = (byte)((ushort)sVar10 >> 8) | auVar36[0xf];
      auVar45 = NEON_pmull(auVar43._0_8_,auVar43._0_8_,1);
      auVar41 = NEON_pmull2(auVar43,auVar43,1);
      auVar48 = NEON_pmull(auVar38._0_8_,auVar38._0_8_,1);
      auVar34 = NEON_pmull2(auVar38,auVar38,1);
      auVar38 = NEON_pmull(auVar47._0_8_,auVar47._0_8_,1);
      auVar36 = NEON_pmull2(auVar47,auVar47,1);
      sVar3 = auVar41._0_2_ * 2;
      sVar4 = auVar41._2_2_ * 2;
      sVar5 = auVar41._4_2_ * 2;
      sVar6 = auVar41._6_2_ * 2;
      sVar7 = auVar41._8_2_ * 2;
      sVar8 = auVar41._10_2_ * 2;
      sVar9 = auVar41._12_2_ * 2;
      sVar10 = auVar41._14_2_ * 2;
      sVar11 = auVar45._0_2_ * 2;
      sVar12 = auVar45._2_2_ * 2;
      sVar13 = auVar45._4_2_ * 2;
      sVar14 = auVar45._6_2_ * 2;
      sVar15 = auVar45._8_2_ * 2;
      sVar16 = auVar45._10_2_ * 2;
      sVar17 = auVar45._12_2_ * 2;
      sVar18 = auVar45._14_2_ * 2;
      auVar41._0_8_ =
           CONCAT17((byte)((ushort)sVar6 >> 8) | auVar34[7],
                    CONCAT16((byte)sVar6 | auVar34[6],
                             CONCAT15((byte)((ushort)sVar5 >> 8) | auVar34[5],
                                      CONCAT14((byte)sVar5 | auVar34[4],
                                               CONCAT13((byte)((ushort)sVar4 >> 8) | auVar34[3],
                                                        CONCAT12((byte)sVar4 | auVar34[2],
                                                                 CONCAT11((byte)((ushort)sVar3 >> 8)
                                                                          | auVar34[1],
                                                                          (byte)sVar3 | auVar34[0]))
                                                       )))));
      auVar41[8] = (byte)sVar7 | auVar34[8];
      auVar41[9] = (byte)((ushort)sVar7 >> 8) | auVar34[9];
      auVar41[10] = (byte)sVar8 | auVar34[10];
      auVar41[0xb] = (byte)((ushort)sVar8 >> 8) | auVar34[0xb];
      auVar41[0xc] = (byte)sVar9 | auVar34[0xc];
      auVar41[0xd] = (byte)((ushort)sVar9 >> 8) | auVar34[0xd];
      auVar41[0xe] = (byte)sVar10 | auVar34[0xe];
      auVar41[0xf] = (byte)((ushort)sVar10 >> 8) | auVar34[0xf];
      sVar3 = auVar38._0_2_ * 2;
      sVar4 = auVar38._2_2_ * 2;
      sVar5 = auVar38._4_2_ * 2;
      sVar6 = auVar38._6_2_ * 2;
      sVar7 = auVar38._8_2_ * 2;
      sVar8 = auVar38._10_2_ * 2;
      sVar9 = auVar38._12_2_ * 2;
      sVar10 = auVar38._14_2_ * 2;
      sVar19 = auVar36._0_2_ * 2;
      sVar20 = auVar36._2_2_ * 2;
      sVar21 = auVar36._4_2_ * 2;
      sVar22 = auVar36._6_2_ * 2;
      sVar23 = auVar36._8_2_ * 2;
      sVar24 = auVar36._10_2_ * 2;
      sVar25 = auVar36._12_2_ * 2;
      sVar26 = auVar36._14_2_ * 2;
      auVar39._0_8_ =
           CONCAT17((byte)((ushort)sVar14 >> 8) | auVar48[7],
                    CONCAT16((byte)sVar14 | auVar48[6],
                             CONCAT15((byte)((ushort)sVar13 >> 8) | auVar48[5],
                                      CONCAT14((byte)sVar13 | auVar48[4],
                                               CONCAT13((byte)((ushort)sVar12 >> 8) | auVar48[3],
                                                        CONCAT12((byte)sVar12 | auVar48[2],
                                                                 CONCAT11((byte)((ushort)sVar11 >> 8
                                                                                ) | auVar48[1],
                                                                          (byte)sVar11 | auVar48[0])
                                                                ))))));
      auVar39[8] = (byte)sVar15 | auVar48[8];
      auVar39[9] = (byte)((ushort)sVar15 >> 8) | auVar48[9];
      auVar39[10] = (byte)sVar16 | auVar48[10];
      auVar39[0xb] = (byte)((ushort)sVar16 >> 8) | auVar48[0xb];
      auVar39[0xc] = (byte)sVar17 | auVar48[0xc];
      auVar39[0xd] = (byte)((ushort)sVar17 >> 8) | auVar48[0xd];
      auVar39[0xe] = (byte)sVar18 | auVar48[0xe];
      auVar39[0xf] = (byte)((ushort)sVar18 >> 8) | auVar48[0xf];
      auVar45._0_8_ =
           CONCAT17((byte)((ushort)sVar6 >> 8) | auVar42[7],
                    CONCAT16((byte)sVar6 | auVar42[6],
                             CONCAT15((byte)((ushort)sVar5 >> 8) | auVar42[5],
                                      CONCAT14((byte)sVar5 | auVar42[4],
                                               CONCAT13((byte)((ushort)sVar4 >> 8) | auVar42[3],
                                                        CONCAT12((byte)sVar4 | auVar42[2],
                                                                 CONCAT11((byte)((ushort)sVar3 >> 8)
                                                                          | auVar42[1],
                                                                          (byte)sVar3 | auVar42[0]))
                                                       )))));
      auVar45[8] = (byte)sVar7 | auVar42[8];
      auVar45[9] = (byte)((ushort)sVar7 >> 8) | auVar42[9];
      auVar45[10] = (byte)sVar8 | auVar42[10];
      auVar45[0xb] = (byte)((ushort)sVar8 >> 8) | auVar42[0xb];
      auVar45[0xc] = (byte)sVar9 | auVar42[0xc];
      auVar45[0xd] = (byte)((ushort)sVar9 >> 8) | auVar42[0xd];
      auVar45[0xe] = (byte)sVar10 | auVar42[0xe];
      auVar45[0xf] = (byte)((ushort)sVar10 >> 8) | auVar42[0xf];
      auVar36._0_8_ =
           CONCAT17((byte)((ushort)sVar22 >> 8) | auVar32[7],
                    CONCAT16((byte)sVar22 | auVar32[6],
                             CONCAT15((byte)((ushort)sVar21 >> 8) | auVar32[5],
                                      CONCAT14((byte)sVar21 | auVar32[4],
                                               CONCAT13((byte)((ushort)sVar20 >> 8) | auVar32[3],
                                                        CONCAT12((byte)sVar20 | auVar32[2],
                                                                 CONCAT11((byte)((ushort)sVar19 >> 8
                                                                                ) | auVar32[1],
                                                                          (byte)sVar19 | auVar32[0])
                                                                ))))));
      auVar36[8] = (byte)sVar23 | auVar32[8];
      auVar36[9] = (byte)((ushort)sVar23 >> 8) | auVar32[9];
      auVar36[10] = (byte)sVar24 | auVar32[10];
      auVar36[0xb] = (byte)((ushort)sVar24 >> 8) | auVar32[0xb];
      auVar36[0xc] = (byte)sVar25 | auVar32[0xc];
      auVar36[0xd] = (byte)((ushort)sVar25 >> 8) | auVar32[0xd];
      auVar36[0xe] = (byte)sVar26 | auVar32[0xe];
      auVar36[0xf] = (byte)((ushort)sVar26 >> 8) | auVar32[0xf];
      auVar38 = NEON_pmull(auVar39._0_8_,auVar39._0_8_,1);
      auVar47 = NEON_pmull2(auVar39,auVar39,1);
      auVar43 = NEON_pmull(auVar41._0_8_,auVar41._0_8_,1);
      auVar34 = NEON_pmull2(auVar41,auVar41,1);
      auVar48 = NEON_pmull(auVar45._0_8_,auVar45._0_8_,1);
      auVar41 = NEON_pmull2(auVar45,auVar45,1);
      auVar45 = NEON_pmull(auVar36._0_8_,auVar36._0_8_,1);
      auVar32 = NEON_pmull2(auVar36,auVar36,1);
      sVar3 = auVar41._0_2_ * 2;
      sVar4 = auVar41._2_2_ * 2;
      sVar5 = auVar41._4_2_ * 2;
      sVar6 = auVar41._6_2_ * 2;
      sVar7 = auVar41._8_2_ * 2;
      sVar8 = auVar41._10_2_ * 2;
      sVar9 = auVar41._12_2_ * 2;
      sVar10 = auVar41._14_2_ * 2;
      sVar11 = auVar48._0_2_ * 2;
      sVar12 = auVar48._2_2_ * 2;
      sVar13 = auVar48._4_2_ * 2;
      sVar14 = auVar48._6_2_ * 2;
      sVar15 = auVar48._8_2_ * 2;
      sVar16 = auVar48._10_2_ * 2;
      sVar17 = auVar48._12_2_ * 2;
      sVar18 = auVar48._14_2_ * 2;
      sVar19 = auVar32._0_2_ * 2;
      sVar20 = auVar32._2_2_ * 2;
      sVar21 = auVar32._4_2_ * 2;
      sVar22 = auVar32._6_2_ * 2;
      sVar23 = auVar32._8_2_ * 2;
      sVar24 = auVar32._10_2_ * 2;
      sVar25 = auVar32._12_2_ * 2;
      sVar26 = auVar32._14_2_ * 2;
      auVar42[0] = (byte)sVar3 | auVar47[0];
      auVar42[1] = (byte)((ushort)sVar3 >> 8) | auVar47[1];
      auVar42[2] = (byte)sVar4 | auVar47[2];
      auVar42[3] = (byte)((ushort)sVar4 >> 8) | auVar47[3];
      auVar42[4] = (byte)sVar5 | auVar47[4];
      auVar42[5] = (byte)((ushort)sVar5 >> 8) | auVar47[5];
      auVar42[6] = (byte)sVar6 | auVar47[6];
      auVar42[7] = (byte)((ushort)sVar6 >> 8) | auVar47[7];
      auVar42[8] = (byte)sVar7 | auVar47[8];
      auVar42[9] = (byte)((ushort)sVar7 >> 8) | auVar47[9];
      auVar42[10] = (byte)sVar8 | auVar47[10];
      auVar42[0xb] = (byte)((ushort)sVar8 >> 8) | auVar47[0xb];
      auVar42[0xc] = (byte)sVar9 | auVar47[0xc];
      auVar42[0xd] = (byte)((ushort)sVar9 >> 8) | auVar47[0xd];
      auVar42[0xe] = (byte)sVar10 | auVar47[0xe];
      auVar42[0xf] = (byte)((ushort)sVar10 >> 8) | auVar47[0xf];
      sVar3 = auVar45._0_2_ * 2;
      sVar4 = auVar45._2_2_ * 2;
      sVar5 = auVar45._4_2_ * 2;
      sVar6 = auVar45._6_2_ * 2;
      sVar7 = auVar45._8_2_ * 2;
      sVar8 = auVar45._10_2_ * 2;
      sVar9 = auVar45._12_2_ * 2;
      sVar10 = auVar45._14_2_ * 2;
      auVar48[0] = (byte)sVar11 | auVar38[0];
      auVar48[1] = (byte)((ushort)sVar11 >> 8) | auVar38[1];
      auVar48[2] = (byte)sVar12 | auVar38[2];
      auVar48[3] = (byte)((ushort)sVar12 >> 8) | auVar38[3];
      auVar48[4] = (byte)sVar13 | auVar38[4];
      auVar48[5] = (byte)((ushort)sVar13 >> 8) | auVar38[5];
      auVar48[6] = (byte)sVar14 | auVar38[6];
      auVar48[7] = (byte)((ushort)sVar14 >> 8) | auVar38[7];
      auVar48[8] = (byte)sVar15 | auVar38[8];
      auVar48[9] = (byte)((ushort)sVar15 >> 8) | auVar38[9];
      auVar48[10] = (byte)sVar16 | auVar38[10];
      auVar48[0xb] = (byte)((ushort)sVar16 >> 8) | auVar38[0xb];
      auVar48[0xc] = (byte)sVar17 | auVar38[0xc];
      auVar48[0xd] = (byte)((ushort)sVar17 >> 8) | auVar38[0xd];
      auVar48[0xe] = (byte)sVar18 | auVar38[0xe];
      auVar48[0xf] = (byte)((ushort)sVar18 >> 8) | auVar38[0xf];
      auVar32[0] = (byte)sVar19 | auVar34[0];
      auVar32[1] = (byte)((ushort)sVar19 >> 8) | auVar34[1];
      auVar32[2] = (byte)sVar20 | auVar34[2];
      auVar32[3] = (byte)((ushort)sVar20 >> 8) | auVar34[3];
      auVar32[4] = (byte)sVar21 | auVar34[4];
      auVar32[5] = (byte)((ushort)sVar21 >> 8) | auVar34[5];
      auVar32[6] = (byte)sVar22 | auVar34[6];
      auVar32[7] = (byte)((ushort)sVar22 >> 8) | auVar34[7];
      auVar32[8] = (byte)sVar23 | auVar34[8];
      auVar32[9] = (byte)((ushort)sVar23 >> 8) | auVar34[9];
      auVar32[10] = (byte)sVar24 | auVar34[10];
      auVar32[0xb] = (byte)((ushort)sVar24 >> 8) | auVar34[0xb];
      auVar32[0xc] = (byte)sVar25 | auVar34[0xc];
      auVar32[0xd] = (byte)((ushort)sVar25 >> 8) | auVar34[0xd];
      auVar32[0xe] = (byte)sVar26 | auVar34[0xe];
      auVar32[0xf] = (byte)((ushort)sVar26 >> 8) | auVar34[0xf];
      auVar40[0] = (byte)sVar3 | auVar43[0];
      auVar40[1] = (byte)((ushort)sVar3 >> 8) | auVar43[1];
      auVar40[2] = (byte)sVar4 | auVar43[2];
      auVar40[3] = (byte)((ushort)sVar4 >> 8) | auVar43[3];
      auVar40[4] = (byte)sVar5 | auVar43[4];
      auVar40[5] = (byte)((ushort)sVar5 >> 8) | auVar43[5];
      auVar40[6] = (byte)sVar6 | auVar43[6];
      auVar40[7] = (byte)((ushort)sVar6 >> 8) | auVar43[7];
      auVar40[8] = (byte)sVar7 | auVar43[8];
      auVar40[9] = (byte)((ushort)sVar7 >> 8) | auVar43[9];
      auVar40[10] = (byte)sVar8 | auVar43[10];
      auVar40[0xb] = (byte)((ushort)sVar8 >> 8) | auVar43[0xb];
      auVar40[0xc] = (byte)sVar9 | auVar43[0xc];
      auVar40[0xd] = (byte)((ushort)sVar9 >> 8) | auVar43[0xd];
      auVar40[0xe] = (byte)sVar10 | auVar43[0xe];
      auVar40[0xf] = (byte)((ushort)sVar10 >> 8) | auVar43[0xf];
      auVar34 = NEON_rev64(auVar48,1);
      auVar36 = NEON_rev64(auVar42,1);
      auVar32 = NEON_rev64(auVar32,1);
      auVar38 = NEON_rev64(auVar40,1);
      puVar27[1] = auVar34._8_8_;
      *puVar27 = auVar34._0_8_;
      puVar27[3] = auVar36._8_8_;
      puVar27[2] = auVar36._0_8_;
      puVar27[5] = auVar38._8_8_;
      puVar27[4] = auVar38._0_8_;
      puVar27[7] = auVar32._8_8_;
      puVar27[6] = auVar32._0_8_;
      puVar27 = puVar27 + 8;
      puVar29 = puVar1;
    } while (puVar1 < (undefined1 *)(lVar30 + (ulong)uVar2));
  }
  return;
}

