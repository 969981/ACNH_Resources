
void FUN_03f88070(long param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 *puVar26;
  undefined1 *puVar27;
  long lVar28;
  ushort *puVar29;
  ushort *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  ushort *puVar36;
  int iVar37;
  ulong uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
  lVar33 = *(long *)(param_1 + 0x25b200);
  if (*(char *)(lVar33 + 0x782f9) == '\0') {
    uVar12 = (int)((ulong)(lVar33 - (param_1 + 0x7a600)) >> 8) * -0x553340d5 + 3;
    uVar5 = uVar12 & 3;
    uVar12 = -uVar12;
    if (-1 < (int)uVar12) {
      uVar5 = -(uVar12 & 3);
    }
    lVar33 = param_1 + 0x7a600 + (long)(int)uVar5 * 0x78300;
  }
  lVar34 = *(long *)(lVar33 + 0x78020);
  if (*(char *)(param_1 + 0x34b877) == '\0') {
    if ((*(char *)(lVar33 + 0x78029) != '\0') &&
       (uVar38 = (ulong)*(byte *)(lVar33 + 0x7802b), *(byte *)(lVar33 + 0x7802b) != 0)) {
      uVar35 = 0;
      lVar28 = lVar34 + (ulong)*(byte *)(lVar33 + 0x7802c) * 0x200;
      do {
        while( true ) {
          lVar32 = lVar33 + uVar35 * 3;
          if (*(char *)(lVar32 + 0x7802d) != '\0') break;
          pbVar1 = (byte *)(lVar33 + 0x7802c + uVar35 * 3);
          bVar6 = *pbVar1;
          iVar13 = (uint)pbVar1[3] - (uint)bVar6;
          if (0 < iVar13) {
            puVar26 = (undefined1 *)(param_2 + (ulong)bVar6 * 0x400);
            iVar37 = 0;
            lVar32 = param_1 + (ulong)*(byte *)(lVar32 + 0x7802e) * 0x20;
            pauVar3 = (undefined1 (*) [16])(lVar32 + 0x3cbd38);
            auVar24 = *pauVar3;
            auVar22 = *pauVar3;
            auVar20 = *pauVar3;
            auVar18 = *pauVar3;
            auVar16 = *pauVar3;
            auVar14 = *pauVar3;
            pauVar3 = (undefined1 (*) [16])(lVar32 + 0x3cbd48);
            auVar25 = *pauVar3;
            auVar23 = *pauVar3;
            auVar21 = *pauVar3;
            auVar19 = *pauVar3;
            auVar17 = *pauVar3;
            auVar15 = *pauVar3;
            lVar32 = lVar28;
            do {
              lVar31 = 0;
              puVar27 = puVar26;
              do {
                puVar4 = (undefined8 *)(lVar32 + lVar31);
                lVar31 = lVar31 + 0x20;
                uVar43 = puVar4[1];
                uVar41 = *puVar4;
                uVar42 = puVar4[3];
                uVar45 = puVar4[2];
                puVar26 = puVar27 + 0x40;
                uVar39 = a64_TBL(ZEXT816(0),auVar14,auVar15,
                                 CONCAT17((char)((ulong)uVar43 >> 0x30),
                                          CONCAT16((char)((ulong)uVar43 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar43 >> 0x10),
                                                            CONCAT14((char)uVar43,
                                                                     CONCAT13((char)((ulong)uVar41
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar41 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar41 >> 0x10),
                                                           (char)uVar41))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar40 = a64_TBL(ZEXT816(0),auVar16,auVar17,
                                 CONCAT17((char)((ulong)uVar43 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar43 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar43 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar43 >> 5),
                                                                     CONCAT13((char)((ulong)uVar41
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar41 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar41 >> 0x10) >>
                                                                 5),(char)((ushort)uVar41 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar41 = a64_TBL(ZEXT816(0),auVar18,auVar19,
                                 CONCAT17((byte)((ulong)uVar43 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar43 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar43 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar43 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar41
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar41 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar41 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar41 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar43 = a64_TBL(ZEXT816(0),auVar20,auVar21,
                                 CONCAT17((char)((ulong)uVar42 >> 0x30),
                                          CONCAT16((char)((ulong)uVar42 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar42 >> 0x10),
                                                            CONCAT14((char)uVar42,
                                                                     CONCAT13((char)((ulong)uVar45
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar45 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar45 >> 0x10),
                                                           (char)uVar45))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar44 = a64_TBL(ZEXT816(0),auVar22,auVar23,
                                 CONCAT17((char)((ulong)uVar42 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar42 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar42 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar42 >> 5),
                                                                     CONCAT13((char)((ulong)uVar45
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar45 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar45 >> 0x10) >>
                                                                 5),(char)((ushort)uVar45 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar45 = a64_TBL(ZEXT816(0),auVar24,auVar25,
                                 CONCAT17((byte)((ulong)uVar42 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar42 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar42 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar42 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar45
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar45 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar45 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar45 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                *puVar27 = (char)uVar39;
                puVar27[1] = (char)uVar40;
                puVar27[2] = (char)uVar41;
                puVar27[3] = 0xff;
                puVar27[4] = (char)((ulong)uVar39 >> 8);
                puVar27[5] = (char)((ulong)uVar40 >> 8);
                puVar27[6] = (char)((ulong)uVar41 >> 8);
                puVar27[7] = 0xff;
                puVar27[8] = (char)((ulong)uVar39 >> 0x10);
                puVar27[9] = (char)((ulong)uVar40 >> 0x10);
                puVar27[10] = (char)((ulong)uVar41 >> 0x10);
                puVar27[0xb] = 0xff;
                puVar27[0xc] = (char)((ulong)uVar39 >> 0x18);
                puVar27[0xd] = (char)((ulong)uVar40 >> 0x18);
                puVar27[0xe] = (char)((ulong)uVar41 >> 0x18);
                puVar27[0xf] = 0xff;
                puVar27[0x10] = (char)((ulong)uVar39 >> 0x20);
                puVar27[0x11] = (char)((ulong)uVar40 >> 0x20);
                puVar27[0x12] = (char)((ulong)uVar41 >> 0x20);
                puVar27[0x13] = 0xff;
                puVar27[0x14] = (char)((ulong)uVar39 >> 0x28);
                puVar27[0x15] = (char)((ulong)uVar40 >> 0x28);
                puVar27[0x16] = (char)((ulong)uVar41 >> 0x28);
                puVar27[0x17] = 0xff;
                puVar27[0x18] = (char)((ulong)uVar39 >> 0x30);
                puVar27[0x19] = (char)((ulong)uVar40 >> 0x30);
                puVar27[0x1a] = (char)((ulong)uVar41 >> 0x30);
                puVar27[0x1b] = 0xff;
                puVar27[0x1c] = (char)((ulong)uVar39 >> 0x38);
                puVar27[0x1d] = (char)((ulong)uVar40 >> 0x38);
                puVar27[0x1e] = (char)((ulong)uVar41 >> 0x38);
                puVar27[0x1f] = 0xff;
                puVar27[0x20] = (char)uVar43;
                puVar27[0x21] = (char)uVar44;
                puVar27[0x22] = (char)uVar45;
                puVar27[0x23] = 0xff;
                puVar27[0x24] = (char)((ulong)uVar43 >> 8);
                puVar27[0x25] = (char)((ulong)uVar44 >> 8);
                puVar27[0x26] = (char)((ulong)uVar45 >> 8);
                puVar27[0x27] = 0xff;
                puVar27[0x28] = (char)((ulong)uVar43 >> 0x10);
                puVar27[0x29] = (char)((ulong)uVar44 >> 0x10);
                puVar27[0x2a] = (char)((ulong)uVar45 >> 0x10);
                puVar27[0x2b] = 0xff;
                puVar27[0x2c] = (char)((ulong)uVar43 >> 0x18);
                puVar27[0x2d] = (char)((ulong)uVar44 >> 0x18);
                puVar27[0x2e] = (char)((ulong)uVar45 >> 0x18);
                puVar27[0x2f] = 0xff;
                puVar27[0x30] = (char)((ulong)uVar43 >> 0x20);
                puVar27[0x31] = (char)((ulong)uVar44 >> 0x20);
                puVar27[0x32] = (char)((ulong)uVar45 >> 0x20);
                puVar27[0x33] = 0xff;
                puVar27[0x34] = (char)((ulong)uVar43 >> 0x28);
                puVar27[0x35] = (char)((ulong)uVar44 >> 0x28);
                puVar27[0x36] = (char)((ulong)uVar45 >> 0x28);
                puVar27[0x37] = 0xff;
                puVar27[0x38] = (char)((ulong)uVar43 >> 0x30);
                puVar27[0x39] = (char)((ulong)uVar44 >> 0x30);
                puVar27[0x3a] = (char)((ulong)uVar45 >> 0x30);
                puVar27[0x3b] = 0xff;
                puVar27[0x3c] = (char)((ulong)uVar43 >> 0x38);
                puVar27[0x3d] = (char)((ulong)uVar44 >> 0x38);
                puVar27[0x3e] = (char)((ulong)uVar45 >> 0x38);
                puVar27[0x3f] = 0xff;
                puVar27 = puVar26;
              } while ((int)lVar31 != 0x200);
              iVar37 = iVar37 + 1;
              lVar32 = lVar32 + lVar31;
            } while (iVar37 != iVar13);
            uVar38 = (ulong)*(byte *)(lVar33 + 0x7802b);
          }
          uVar35 = uVar35 + 1;
          lVar28 = lVar28 + (long)(iVar13 * 0x100) * 2;
          if (uVar38 <= uVar35) goto LAB_03f88508;
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 < uVar38);
    }
LAB_03f88508:
    if ((*(char *)(lVar33 + 0x7802a) != '\0') &&
       (uVar38 = (ulong)*(byte *)(lVar33 + 0x7802b), *(byte *)(lVar33 + 0x7802b) != 0)) {
      uVar35 = 0;
      lVar34 = lVar34 + ((ulong)*(byte *)(lVar33 + 0x7802c) * -0x200 + 0x1de00) * 2;
      do {
        while( true ) {
          lVar28 = lVar33 + uVar35 * 3;
          if (*(char *)(lVar28 + 0x7802d) != '\x01') break;
          pbVar1 = (byte *)(lVar33 + 0x7802c + uVar35 * 3);
          bVar6 = *pbVar1;
          iVar13 = (uint)pbVar1[3] - (uint)bVar6;
          if (0 < iVar13) {
            bVar7 = *(byte *)(lVar28 + 0x7802e);
            lVar28 = param_2 + (ulong)bVar6 * 0x400;
            iVar37 = 0;
            lVar32 = lVar34;
            do {
              lVar31 = 0;
              do {
                uVar8 = *(ushort *)(lVar32 + lVar31);
                uVar11 = ((ushort *)(lVar32 + lVar31))[1];
                lVar2 = param_1 + (ulong)bVar7 * 0x20 + 0x3cbd38;
                *(uint *)(lVar28 + lVar31) =
                     CONCAT12(*(undefined1 *)
                               (lVar2 + (((ulong)(uVar8 >> 10) & 0x1f) +
                                         ((ulong)(uVar11 >> 10) & 0x1f) + 1 >> 1)),
                              CONCAT11(*(undefined1 *)
                                        (lVar2 + (((ulong)(uVar8 >> 5) & 0x1f) +
                                                  ((ulong)(uVar11 >> 5) & 0x1f) + 1 >> 1)),
                                       *(undefined1 *)
                                        (lVar2 + (((ulong)uVar8 & 0x1f) + ((ulong)uVar11 & 0x1f) + 1
                                                 >> 1)))) | 0xff000000;
                lVar31 = lVar31 + 4;
              } while ((int)lVar31 != 0x400);
              iVar37 = iVar37 + 1;
              lVar28 = lVar28 + lVar31;
              lVar32 = lVar32 + lVar31 + -0x800;
            } while (iVar37 != iVar13);
            uVar38 = (ulong)*(byte *)(lVar33 + 0x7802b);
          }
          uVar35 = uVar35 + 1;
          lVar34 = lVar34 + (long)(iVar13 * -0x200) * 2;
          if (uVar38 <= uVar35) {
            return;
          }
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 < uVar38);
    }
  }
  else {
    if ((*(char *)(lVar33 + 0x78029) != '\0') &&
       (uVar38 = (ulong)*(byte *)(lVar33 + 0x7802b), *(byte *)(lVar33 + 0x7802b) != 0)) {
      uVar35 = 0;
      puVar36 = (ushort *)(lVar34 + (ulong)*(byte *)(lVar33 + 0x7802c) * 0x200);
      do {
        while( true ) {
          lVar28 = lVar33 + uVar35 * 3;
          if (*(char *)(lVar28 + 0x7802d) != '\0') break;
          pbVar1 = (byte *)(lVar33 + 0x7802c + uVar35 * 3);
          bVar6 = *pbVar1;
          iVar13 = (uint)pbVar1[3] - (uint)bVar6;
          if (0 < iVar13) {
            bVar7 = *(byte *)(lVar28 + 0x7802e);
            lVar28 = param_2 + (ulong)bVar6 * 0x400;
            iVar37 = 0;
            puVar29 = puVar36;
            do {
              lVar32 = 0;
              puVar30 = puVar29 + 0x100;
              do {
                puVar29 = puVar30 + 1;
                uVar11 = *puVar30;
                uVar8 = puVar30[-0x100];
                lVar31 = param_1 + (ulong)bVar7 * 0x20 + 0x3cbd38;
                *(uint *)(lVar28 + lVar32) =
                     CONCAT12(*(undefined1 *)
                               (lVar31 + (((ulong)(uVar11 >> 10) & 0x1f) +
                                          ((ulong)(uVar8 >> 10) & 0x1f) + 1 >> 1)),
                              CONCAT11(*(undefined1 *)
                                        (lVar31 + (((ulong)(uVar11 >> 5) & 0x1f) +
                                                   ((ulong)(uVar8 >> 5) & 0x1f) + 1 >> 1)),
                                       *(undefined1 *)
                                        (lVar31 + (((ulong)uVar11 & 0x1f) + ((ulong)uVar8 & 0x1f) +
                                                   1 >> 1)))) | 0xff000000;
                lVar32 = lVar32 + 4;
                puVar30 = puVar29;
              } while ((int)lVar32 != 0x400);
              iVar37 = iVar37 + 1;
              lVar28 = lVar28 + lVar32;
            } while (iVar37 != iVar13);
            uVar38 = (ulong)*(byte *)(lVar33 + 0x7802b);
          }
          uVar35 = uVar35 + 1;
          puVar36 = puVar36 + iVar13 * 0x200;
          if (uVar38 <= uVar35) goto LAB_03f88230;
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 < uVar38);
    }
LAB_03f88230:
    if ((*(char *)(lVar33 + 0x7802a) != '\0') &&
       (uVar38 = (ulong)*(byte *)(lVar33 + 0x7802b), *(byte *)(lVar33 + 0x7802b) != 0)) {
      uVar35 = 0;
      lVar34 = lVar34 + ((ulong)*(byte *)(lVar33 + 0x7802c) * -0x200 + 0x3be00) * 2;
      do {
        lVar28 = lVar33 + uVar35 * 3;
        if (*(char *)(lVar28 + 0x7802d) == '\x01') {
          pbVar1 = (byte *)(lVar33 + 0x7802c + uVar35 * 3);
          bVar6 = *pbVar1;
          iVar13 = (uint)pbVar1[3] - (uint)bVar6;
          if (0 < iVar13) {
            bVar7 = *(byte *)(lVar28 + 0x7802e);
            lVar28 = param_2 + (ulong)bVar6 * 0x400;
            iVar37 = 0;
            lVar32 = lVar34;
            do {
              lVar31 = 0;
              do {
                puVar36 = (ushort *)(lVar32 + lVar31);
                uVar8 = *puVar36;
                uVar11 = puVar36[1];
                uVar9 = puVar36[-0x200];
                uVar10 = puVar36[-0x1ff];
                lVar2 = param_1 + (ulong)bVar7 * 0x20 + 0x3cbd38;
                *(uint *)(lVar28 + lVar31) =
                     CONCAT12(*(undefined1 *)
                               (lVar2 + (((ulong)(uVar9 >> 10) & 0x1f) +
                                         ((ulong)(uVar8 >> 10) & 0x1f) +
                                         ((ulong)(uVar10 >> 10) & 0x1f) +
                                         ((ulong)(uVar11 >> 10) & 0x1f) + 2 >> 2)),
                              CONCAT11(*(undefined1 *)
                                        (lVar2 + (((ulong)(uVar9 >> 5) & 0x1f) +
                                                  ((ulong)(uVar8 >> 5) & 0x1f) +
                                                  ((ulong)(uVar10 >> 5) & 0x1f) +
                                                  ((ulong)(uVar11 >> 5) & 0x1f) + 2 >> 2)),
                                       *(undefined1 *)
                                        (lVar2 + (((ulong)uVar9 & 0x1f) + ((ulong)uVar8 & 0x1f) +
                                                  ((ulong)uVar10 & 0x1f) + ((ulong)uVar11 & 0x1f) +
                                                  2 >> 2)))) | 0xff000000;
                lVar31 = lVar31 + 4;
              } while ((int)lVar31 != 0x400);
              iVar37 = iVar37 + 1;
              lVar28 = lVar28 + lVar31;
              lVar32 = lVar32 + lVar31 + -0xc00;
            } while (iVar37 != iVar13);
            uVar38 = (ulong)*(byte *)(lVar33 + 0x7802b);
          }
          lVar34 = lVar34 + (long)(iVar13 * -0x400) * 2;
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 < uVar38);
    }
  }
  return;
}

