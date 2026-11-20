
void FUN_03f88670(long param_1,long param_2)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auVar13 [16];
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
  undefined1 *puVar25;
  undefined1 *puVar26;
  long lVar27;
  ushort *puVar28;
  ushort *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  ushort *puVar35;
  int iVar36;
  ulong uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  uint3 uVar56;
  uint3 uVar57;
  uint3 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  uint3 uVar67;
  
  lVar32 = *(long *)(param_1 + 0x25b200);
  if (*(char *)(lVar32 + 0x782f9) == '\0') {
    uVar11 = (int)((ulong)(lVar32 - (param_1 + 0x7a600)) >> 8) * -0x553340d5 + 3;
    uVar6 = uVar11 & 3;
    uVar11 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar6 = -(uVar11 & 3);
    }
    lVar32 = param_1 + 0x7a600 + (long)(int)uVar6 * 0x78300;
  }
  lVar33 = *(long *)(lVar32 + 0x78020);
  if (*(char *)(param_1 + 0x34b877) == '\0') {
    if ((*(char *)(lVar32 + 0x78029) != '\0') &&
       (uVar37 = (ulong)*(byte *)(lVar32 + 0x7802b), *(byte *)(lVar32 + 0x7802b) != 0)) {
      uVar34 = 0;
      lVar27 = lVar33 + (ulong)*(byte *)(lVar32 + 0x7802c) * 0x200;
      do {
        while( true ) {
          lVar31 = lVar32 + uVar34 * 3;
          if (*(char *)(lVar31 + 0x7802d) != '\0') break;
          pbVar1 = (byte *)(lVar32 + 0x7802c + uVar34 * 3);
          bVar7 = *pbVar1;
          iVar12 = (uint)pbVar1[3] - (uint)bVar7;
          if (0 < iVar12) {
            puVar25 = (undefined1 *)(param_2 + (ulong)bVar7 * 0x800);
            iVar36 = 0;
            lVar31 = param_1 + (ulong)*(byte *)(lVar31 + 0x7802e) * 0x20;
            pauVar4 = (undefined1 (*) [16])(lVar31 + 0x3cbd38);
            auVar23 = *pauVar4;
            auVar21 = *pauVar4;
            auVar19 = *pauVar4;
            auVar17 = *pauVar4;
            auVar15 = *pauVar4;
            auVar13 = *pauVar4;
            pauVar4 = (undefined1 (*) [16])(lVar31 + 0x3cbd48);
            auVar24 = *pauVar4;
            auVar22 = *pauVar4;
            auVar20 = *pauVar4;
            auVar18 = *pauVar4;
            auVar16 = *pauVar4;
            auVar14 = *pauVar4;
            lVar31 = lVar27;
            do {
              lVar30 = 0;
              puVar26 = puVar25;
              do {
                puVar5 = (undefined8 *)(lVar31 + lVar30);
                lVar30 = lVar30 + 0x20;
                uVar61 = puVar5[1];
                uVar60 = *puVar5;
                uVar63 = puVar5[3];
                uVar59 = puVar5[2];
                uVar65 = a64_TBL(ZEXT816(0),auVar13,auVar14,
                                 CONCAT17((char)((ulong)uVar63 >> 0x30),
                                          CONCAT16((char)((ulong)uVar63 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar63 >> 0x10),
                                                            CONCAT14((char)uVar63,
                                                                     CONCAT13((char)((ulong)uVar59
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar59 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar59 >> 0x10),
                                                           (char)uVar59))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar62 = a64_TBL(ZEXT816(0),auVar15,auVar16,
                                 CONCAT17((char)((ulong)uVar61 >> 0x30),
                                          CONCAT16((char)((ulong)uVar61 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar61 >> 0x10),
                                                            CONCAT14((char)uVar61,
                                                                     CONCAT13((char)((ulong)uVar60
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar60 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar60 >> 0x10),
                                                           (char)uVar60))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar38 = (undefined1)((ulong)uVar65 >> 8);
                uVar44 = (undefined1)((ulong)uVar65 >> 0x10);
                uVar50 = (undefined1)((ulong)uVar65 >> 0x18);
                uVar64 = a64_TBL(ZEXT816(0),auVar17,auVar18,
                                 CONCAT17((char)((ulong)uVar61 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar61 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar61 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar61 >> 5),
                                                                     CONCAT13((char)((ulong)uVar60
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar60 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar60 >> 0x10) >>
                                                                 5),(char)((ushort)uVar60 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar39 = (undefined1)((ulong)uVar62 >> 8);
                uVar56 = CONCAT12(uVar39,(short)uVar62) & 0xff00ff;
                uVar45 = (undefined1)((ulong)uVar62 >> 0x10);
                uVar51 = (undefined1)((ulong)uVar62 >> 0x18);
                uVar66 = a64_TBL(ZEXT816(0),auVar19,auVar20,
                                 CONCAT17((char)((ulong)uVar63 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar63 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar63 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar63 >> 5),
                                                                     CONCAT13((char)((ulong)uVar59
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar59 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar59 >> 0x10) >>
                                                                 5),(char)((ushort)uVar59 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar40 = (undefined1)((ulong)uVar64 >> 8);
                uVar57 = CONCAT12(uVar40,(short)uVar64) & 0xff00ff;
                uVar46 = (undefined1)((ulong)uVar64 >> 0x10);
                uVar52 = (undefined1)((ulong)uVar64 >> 0x18);
                uVar60 = a64_TBL(ZEXT816(0),auVar21,auVar22,
                                 CONCAT17((byte)((ulong)uVar61 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar61 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar61 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar61 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar60
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar60 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar60 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar60 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar41 = (undefined1)((ulong)uVar66 >> 8);
                uVar67 = CONCAT12(uVar41,(short)uVar66) & 0xff00ff;
                uVar47 = (undefined1)((ulong)uVar66 >> 0x10);
                uVar53 = (undefined1)((ulong)uVar66 >> 0x18);
                uVar61 = a64_TBL(ZEXT816(0),auVar23,auVar24,
                                 CONCAT17((byte)((ulong)uVar63 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar63 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar63 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar63 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar59
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar59 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar59 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar59 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar42 = (undefined1)((ulong)uVar61 >> 8);
                uVar48 = (undefined1)((ulong)uVar61 >> 0x10);
                uVar54 = (undefined1)((ulong)uVar61 >> 0x18);
                uVar43 = (undefined1)((ulong)uVar60 >> 8);
                uVar58 = CONCAT12(uVar43,(short)uVar60) & 0xff00ff;
                uVar49 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar55 = (undefined1)((ulong)uVar60 >> 0x18);
                *puVar26 = (char)uVar56;
                puVar26[1] = (char)uVar57;
                puVar26[2] = (char)uVar58;
                puVar26[3] = 0xff;
                puVar26[4] = (char)uVar62;
                puVar26[5] = (char)uVar64;
                puVar26[6] = (char)uVar60;
                puVar26[7] = 0xff;
                puVar26[8] = (char)(uVar56 >> 0x10);
                puVar26[9] = (char)(uVar57 >> 0x10);
                puVar26[10] = (char)(uVar58 >> 0x10);
                puVar26[0xb] = 0xff;
                puVar26[0xc] = uVar39;
                puVar26[0xd] = uVar40;
                puVar26[0xe] = uVar43;
                puVar26[0xf] = 0xff;
                puVar26[0x10] = uVar45;
                puVar26[0x11] = uVar46;
                puVar26[0x12] = uVar49;
                puVar26[0x13] = 0xff;
                puVar26[0x14] = uVar45;
                puVar26[0x15] = uVar46;
                puVar26[0x16] = uVar49;
                puVar26[0x17] = 0xff;
                puVar26[0x18] = uVar51;
                puVar26[0x19] = uVar52;
                puVar26[0x1a] = uVar55;
                puVar26[0x1b] = 0xff;
                puVar26[0x1c] = uVar51;
                puVar26[0x1d] = uVar52;
                puVar26[0x1e] = uVar55;
                puVar26[0x1f] = 0xff;
                puVar26[0x40] = (char)uVar65;
                puVar26[0x41] = (char)uVar67;
                puVar26[0x42] = (char)uVar61;
                puVar26[0x43] = 0xff;
                puVar26[0x44] = (char)uVar65;
                puVar26[0x45] = (char)uVar66;
                puVar26[0x46] = (char)uVar61;
                puVar26[0x47] = 0xff;
                puVar26[0x48] = uVar38;
                puVar26[0x49] = (char)(uVar67 >> 0x10);
                puVar26[0x4a] = uVar42;
                puVar26[0x4b] = 0xff;
                puVar26[0x4c] = uVar38;
                puVar26[0x4d] = uVar41;
                puVar26[0x4e] = uVar42;
                puVar26[0x4f] = 0xff;
                puVar26[0x50] = uVar44;
                puVar26[0x51] = uVar47;
                puVar26[0x52] = uVar48;
                puVar26[0x53] = 0xff;
                puVar26[0x54] = uVar44;
                puVar26[0x55] = uVar47;
                puVar26[0x56] = uVar48;
                puVar26[0x57] = 0xff;
                puVar26[0x58] = uVar50;
                puVar26[0x59] = uVar53;
                puVar26[0x5a] = uVar54;
                puVar26[0x5b] = 0xff;
                puVar26[0x5c] = uVar50;
                puVar26[0x5d] = uVar53;
                puVar26[0x5e] = uVar54;
                puVar26[0x5f] = 0xff;
                uVar38 = (undefined1)((ulong)uVar65 >> 0x20);
                uVar41 = (undefined1)((ulong)uVar65 >> 0x28);
                uVar44 = (undefined1)((ulong)uVar65 >> 0x30);
                uVar47 = (undefined1)((ulong)uVar65 >> 0x38);
                uVar39 = (undefined1)((ulong)uVar66 >> 0x20);
                uVar42 = (undefined1)((ulong)uVar66 >> 0x28);
                uVar45 = (undefined1)((ulong)uVar66 >> 0x30);
                uVar48 = (undefined1)((ulong)uVar66 >> 0x38);
                uVar40 = (undefined1)((ulong)uVar61 >> 0x20);
                uVar43 = (undefined1)((ulong)uVar61 >> 0x28);
                uVar46 = (undefined1)((ulong)uVar61 >> 0x30);
                uVar49 = (undefined1)((ulong)uVar61 >> 0x38);
                puVar25 = puVar26 + 0x80;
                puVar26[0x60] = uVar38;
                puVar26[0x61] = uVar39;
                puVar26[0x62] = uVar40;
                puVar26[99] = 0xff;
                puVar26[100] = uVar38;
                puVar26[0x65] = uVar39;
                puVar26[0x66] = uVar40;
                puVar26[0x67] = 0xff;
                puVar26[0x68] = uVar41;
                puVar26[0x69] = uVar42;
                puVar26[0x6a] = uVar43;
                puVar26[0x6b] = 0xff;
                puVar26[0x6c] = uVar41;
                puVar26[0x6d] = uVar42;
                puVar26[0x6e] = uVar43;
                puVar26[0x6f] = 0xff;
                puVar26[0x70] = uVar44;
                puVar26[0x71] = uVar45;
                puVar26[0x72] = uVar46;
                puVar26[0x73] = 0xff;
                puVar26[0x74] = uVar44;
                puVar26[0x75] = uVar45;
                puVar26[0x76] = uVar46;
                puVar26[0x77] = 0xff;
                puVar26[0x78] = uVar47;
                puVar26[0x79] = uVar48;
                puVar26[0x7a] = uVar49;
                puVar26[0x7b] = 0xff;
                puVar26[0x7c] = uVar47;
                puVar26[0x7d] = uVar48;
                puVar26[0x7e] = uVar49;
                puVar26[0x7f] = 0xff;
                uVar38 = (undefined1)((ulong)uVar62 >> 0x20);
                uVar41 = (undefined1)((ulong)uVar62 >> 0x28);
                uVar44 = (undefined1)((ulong)uVar62 >> 0x30);
                uVar47 = (undefined1)((ulong)uVar62 >> 0x38);
                uVar39 = (undefined1)((ulong)uVar64 >> 0x20);
                uVar42 = (undefined1)((ulong)uVar64 >> 0x28);
                uVar45 = (undefined1)((ulong)uVar64 >> 0x30);
                uVar48 = (undefined1)((ulong)uVar64 >> 0x38);
                uVar40 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar43 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar46 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar49 = (undefined1)((ulong)uVar60 >> 0x38);
                puVar26[0x20] = uVar38;
                puVar26[0x21] = uVar39;
                puVar26[0x22] = uVar40;
                puVar26[0x23] = 0xff;
                puVar26[0x24] = uVar38;
                puVar26[0x25] = uVar39;
                puVar26[0x26] = uVar40;
                puVar26[0x27] = 0xff;
                puVar26[0x28] = uVar41;
                puVar26[0x29] = uVar42;
                puVar26[0x2a] = uVar43;
                puVar26[0x2b] = 0xff;
                puVar26[0x2c] = uVar41;
                puVar26[0x2d] = uVar42;
                puVar26[0x2e] = uVar43;
                puVar26[0x2f] = 0xff;
                puVar26[0x30] = uVar44;
                puVar26[0x31] = uVar45;
                puVar26[0x32] = uVar46;
                puVar26[0x33] = 0xff;
                puVar26[0x34] = uVar44;
                puVar26[0x35] = uVar45;
                puVar26[0x36] = uVar46;
                puVar26[0x37] = 0xff;
                puVar26[0x38] = uVar47;
                puVar26[0x39] = uVar48;
                puVar26[0x3a] = uVar49;
                puVar26[0x3b] = 0xff;
                puVar26[0x3c] = uVar47;
                puVar26[0x3d] = uVar48;
                puVar26[0x3e] = uVar49;
                puVar26[0x3f] = 0xff;
                puVar26 = puVar25;
              } while ((int)lVar30 != 0x200);
              iVar36 = iVar36 + 1;
              lVar31 = lVar31 + lVar30;
            } while (iVar36 != iVar12);
            uVar37 = (ulong)*(byte *)(lVar32 + 0x7802b);
          }
          uVar34 = uVar34 + 1;
          lVar27 = lVar27 + (long)(iVar12 * 0x100) * 2;
          if (uVar37 <= uVar34) goto LAB_03f88afc;
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < uVar37);
    }
LAB_03f88afc:
    if ((*(char *)(lVar32 + 0x7802a) != '\0') &&
       (uVar37 = (ulong)*(byte *)(lVar32 + 0x7802b), *(byte *)(lVar32 + 0x7802b) != 0)) {
      uVar34 = 0;
      lVar33 = lVar33 + ((ulong)*(byte *)(lVar32 + 0x7802c) * -0x200 + 0x1de00) * 2;
      do {
        while( true ) {
          lVar27 = lVar32 + uVar34 * 3;
          if (*(char *)(lVar27 + 0x7802d) != '\x01') break;
          pbVar1 = (byte *)(lVar32 + 0x7802c + uVar34 * 3);
          bVar7 = *pbVar1;
          iVar12 = (uint)pbVar1[3] - (uint)bVar7;
          if (0 < iVar12) {
            lVar31 = param_2 + (ulong)bVar7 * 0x800;
            iVar36 = 0;
            lVar27 = param_1 + (ulong)*(byte *)(lVar27 + 0x7802e) * 0x20;
            pauVar4 = (undefined1 (*) [16])(lVar27 + 0x3cbd38);
            auVar23 = *pauVar4;
            auVar21 = *pauVar4;
            auVar19 = *pauVar4;
            auVar17 = *pauVar4;
            auVar15 = *pauVar4;
            auVar13 = *pauVar4;
            pauVar4 = (undefined1 (*) [16])(lVar27 + 0x3cbd48);
            auVar24 = *pauVar4;
            auVar22 = *pauVar4;
            auVar20 = *pauVar4;
            auVar18 = *pauVar4;
            auVar16 = *pauVar4;
            auVar14 = *pauVar4;
            lVar27 = lVar33;
            do {
              lVar30 = 0;
              lVar27 = lVar27 + -0x800;
              do {
                uVar63 = *(undefined8 *)(lVar27 + 0x808);
                uVar59 = *(undefined8 *)(lVar27 + 0x800);
                puVar25 = (undefined1 *)(lVar31 + lVar30);
                lVar30 = lVar30 + 0x40;
                uVar64 = *(undefined8 *)(lVar27 + 0x818);
                uVar62 = *(undefined8 *)(lVar27 + 0x810);
                lVar27 = lVar27 + 0x20;
                uVar60 = a64_TBL(ZEXT816(0),auVar13,auVar14,
                                 CONCAT17((char)((ulong)uVar63 >> 0x30),
                                          CONCAT16((char)((ulong)uVar63 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar63 >> 0x10),
                                                            CONCAT14((char)uVar63,
                                                                     CONCAT13((char)((ulong)uVar59
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar59 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar59 >> 0x10),
                                                           (char)uVar59))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar61 = a64_TBL(ZEXT816(0),auVar15,auVar16,
                                 CONCAT17((char)((ulong)uVar63 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar63 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar63 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar63 >> 5),
                                                                     CONCAT13((char)((ulong)uVar59
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar59 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar59 >> 0x10) >>
                                                                 5),(char)((ushort)uVar59 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar59 = a64_TBL(ZEXT816(0),auVar17,auVar18,
                                 CONCAT17((byte)((ulong)uVar63 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar63 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar63 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar63 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar59
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar59 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar59 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar59 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar63 = a64_TBL(ZEXT816(0),auVar19,auVar20,
                                 CONCAT17((char)((ulong)uVar64 >> 0x30),
                                          CONCAT16((char)((ulong)uVar64 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar64 >> 0x10),
                                                            CONCAT14((char)uVar64,
                                                                     CONCAT13((char)((ulong)uVar62
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar62 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar62 >> 0x10),
                                                           (char)uVar62))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar65 = a64_TBL(ZEXT816(0),auVar21,auVar22,
                                 CONCAT17((char)((ulong)uVar64 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar64 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar64 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar64 >> 5),
                                                                     CONCAT13((char)((ulong)uVar62
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar62 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar62 >> 0x10) >>
                                                                 5),(char)((ushort)uVar62 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar62 = a64_TBL(ZEXT816(0),auVar23,auVar24,
                                 CONCAT17((byte)((ulong)uVar64 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar64 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar64 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar64 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar62
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar62 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar62 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar62 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                *puVar25 = (char)uVar60;
                puVar25[1] = (char)uVar61;
                puVar25[2] = (char)uVar59;
                puVar25[3] = 0xff;
                puVar25[4] = (char)((ulong)uVar60 >> 8);
                puVar25[5] = (char)((ulong)uVar61 >> 8);
                puVar25[6] = (char)((ulong)uVar59 >> 8);
                puVar25[7] = 0xff;
                puVar25[8] = (char)((ulong)uVar60 >> 0x10);
                puVar25[9] = (char)((ulong)uVar61 >> 0x10);
                puVar25[10] = (char)((ulong)uVar59 >> 0x10);
                puVar25[0xb] = 0xff;
                puVar25[0xc] = (char)((ulong)uVar60 >> 0x18);
                puVar25[0xd] = (char)((ulong)uVar61 >> 0x18);
                puVar25[0xe] = (char)((ulong)uVar59 >> 0x18);
                puVar25[0xf] = 0xff;
                puVar25[0x10] = (char)((ulong)uVar60 >> 0x20);
                puVar25[0x11] = (char)((ulong)uVar61 >> 0x20);
                puVar25[0x12] = (char)((ulong)uVar59 >> 0x20);
                puVar25[0x13] = 0xff;
                puVar25[0x14] = (char)((ulong)uVar60 >> 0x28);
                puVar25[0x15] = (char)((ulong)uVar61 >> 0x28);
                puVar25[0x16] = (char)((ulong)uVar59 >> 0x28);
                puVar25[0x17] = 0xff;
                puVar25[0x18] = (char)((ulong)uVar60 >> 0x30);
                puVar25[0x19] = (char)((ulong)uVar61 >> 0x30);
                puVar25[0x1a] = (char)((ulong)uVar59 >> 0x30);
                puVar25[0x1b] = 0xff;
                puVar25[0x1c] = (char)((ulong)uVar60 >> 0x38);
                puVar25[0x1d] = (char)((ulong)uVar61 >> 0x38);
                puVar25[0x1e] = (char)((ulong)uVar59 >> 0x38);
                puVar25[0x1f] = 0xff;
                puVar25[0x20] = (char)uVar63;
                puVar25[0x21] = (char)uVar65;
                puVar25[0x22] = (char)uVar62;
                puVar25[0x23] = 0xff;
                puVar25[0x24] = (char)((ulong)uVar63 >> 8);
                puVar25[0x25] = (char)((ulong)uVar65 >> 8);
                puVar25[0x26] = (char)((ulong)uVar62 >> 8);
                puVar25[0x27] = 0xff;
                puVar25[0x28] = (char)((ulong)uVar63 >> 0x10);
                puVar25[0x29] = (char)((ulong)uVar65 >> 0x10);
                puVar25[0x2a] = (char)((ulong)uVar62 >> 0x10);
                puVar25[0x2b] = 0xff;
                puVar25[0x2c] = (char)((ulong)uVar63 >> 0x18);
                puVar25[0x2d] = (char)((ulong)uVar65 >> 0x18);
                puVar25[0x2e] = (char)((ulong)uVar62 >> 0x18);
                puVar25[0x2f] = 0xff;
                puVar25[0x30] = (char)((ulong)uVar63 >> 0x20);
                puVar25[0x31] = (char)((ulong)uVar65 >> 0x20);
                puVar25[0x32] = (char)((ulong)uVar62 >> 0x20);
                puVar25[0x33] = 0xff;
                puVar25[0x34] = (char)((ulong)uVar63 >> 0x28);
                puVar25[0x35] = (char)((ulong)uVar65 >> 0x28);
                puVar25[0x36] = (char)((ulong)uVar62 >> 0x28);
                puVar25[0x37] = 0xff;
                puVar25[0x38] = (char)((ulong)uVar63 >> 0x30);
                puVar25[0x39] = (char)((ulong)uVar65 >> 0x30);
                puVar25[0x3a] = (char)((ulong)uVar62 >> 0x30);
                puVar25[0x3b] = 0xff;
                puVar25[0x3c] = (char)((ulong)uVar63 >> 0x38);
                puVar25[0x3d] = (char)((ulong)uVar65 >> 0x38);
                puVar25[0x3e] = (char)((ulong)uVar62 >> 0x38);
                puVar25[0x3f] = 0xff;
              } while ((int)lVar30 != 0x800);
              iVar36 = iVar36 + 1;
              lVar31 = lVar31 + lVar30;
            } while (iVar36 != iVar12);
            uVar37 = (ulong)*(byte *)(lVar32 + 0x7802b);
          }
          uVar34 = uVar34 + 1;
          lVar33 = lVar33 + (long)(iVar12 * -0x200) * 2;
          if (uVar37 <= uVar34) {
            return;
          }
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < uVar37);
    }
  }
  else {
    if ((*(char *)(lVar32 + 0x78029) != '\0') &&
       (uVar37 = (ulong)*(byte *)(lVar32 + 0x7802b), *(byte *)(lVar32 + 0x7802b) != 0)) {
      uVar34 = 0;
      puVar35 = (ushort *)(lVar33 + (ulong)*(byte *)(lVar32 + 0x7802c) * 0x200);
      do {
        while( true ) {
          lVar27 = lVar32 + uVar34 * 3;
          if (*(char *)(lVar27 + 0x7802d) != '\0') break;
          pbVar1 = (byte *)(lVar32 + 0x7802c + uVar34 * 3);
          bVar7 = *pbVar1;
          iVar12 = (uint)pbVar1[3] - (uint)bVar7;
          if (0 < iVar12) {
            bVar8 = *(byte *)(lVar27 + 0x7802e);
            lVar27 = param_2 + (ulong)bVar7 * 0x800;
            iVar36 = 0;
            puVar28 = puVar35;
            do {
              lVar31 = 0;
              puVar29 = puVar28 + 0x100;
              do {
                puVar28 = puVar29 + 1;
                uVar10 = *puVar29;
                uVar9 = puVar29[-0x100];
                lVar30 = param_1 + (ulong)bVar8 * 0x20 + 0x3cbd38;
                puVar2 = (uint *)(lVar27 + lVar31);
                lVar31 = lVar31 + 8;
                uVar6 = CONCAT12(*(undefined1 *)
                                  (lVar30 + (((ulong)(uVar10 >> 10) & 0x1f) +
                                             ((ulong)(uVar9 >> 10) & 0x1f) + 1 >> 1)),
                                 CONCAT11(*(undefined1 *)
                                           (lVar30 + (((ulong)(uVar10 >> 5) & 0x1f) +
                                                      ((ulong)(uVar9 >> 5) & 0x1f) + 1 >> 1)),
                                          *(undefined1 *)
                                           (lVar30 + (((ulong)uVar10 & 0x1f) + ((ulong)uVar9 & 0x1f)
                                                      + 1 >> 1)))) | 0xff000000;
                *puVar2 = uVar6;
                puVar2[1] = uVar6;
                puVar29 = puVar28;
              } while ((int)lVar31 != 0x800);
              iVar36 = iVar36 + 1;
              lVar27 = lVar27 + lVar31;
            } while (iVar36 != iVar12);
            uVar37 = (ulong)*(byte *)(lVar32 + 0x7802b);
          }
          uVar34 = uVar34 + 1;
          puVar35 = puVar35 + iVar12 * 0x200;
          if (uVar37 <= uVar34) goto LAB_03f88824;
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < uVar37);
    }
LAB_03f88824:
    if ((*(char *)(lVar32 + 0x7802a) != '\0') &&
       (uVar37 = (ulong)*(byte *)(lVar32 + 0x7802b), *(byte *)(lVar32 + 0x7802b) != 0)) {
      uVar34 = 0;
      lVar33 = lVar33 + ((ulong)*(byte *)(lVar32 + 0x7802c) * -0x200 + 0x3be00) * 2;
      do {
        lVar27 = lVar32 + uVar34 * 3;
        if (*(char *)(lVar27 + 0x7802d) == '\x01') {
          pbVar1 = (byte *)(lVar32 + 0x7802c + uVar34 * 3);
          bVar7 = *pbVar1;
          iVar12 = (uint)pbVar1[3] - (uint)bVar7;
          if (0 < iVar12) {
            bVar8 = *(byte *)(lVar27 + 0x7802e);
            lVar31 = param_2 + (ulong)bVar7 * 0x800;
            iVar36 = 0;
            lVar27 = lVar33;
            do {
              lVar30 = 0;
              lVar27 = lVar27 + -0xc00;
              do {
                uVar9 = *(ushort *)(lVar27 + 0x800);
                uVar10 = *(ushort *)(lVar27 + 0xc00);
                lVar27 = lVar27 + 2;
                lVar3 = param_1 + (ulong)bVar8 * 0x20 + 0x3cbd38;
                *(uint *)(lVar31 + lVar30) =
                     CONCAT12(*(undefined1 *)
                               (lVar3 + (((ulong)(uVar9 >> 10) & 0x1f) +
                                         ((ulong)(uVar10 >> 10) & 0x1f) + 1 >> 1)),
                              CONCAT11(*(undefined1 *)
                                        (lVar3 + (((ulong)(uVar9 >> 5) & 0x1f) +
                                                  ((ulong)(uVar10 >> 5) & 0x1f) + 1 >> 1)),
                                       *(undefined1 *)
                                        (lVar3 + (((ulong)uVar9 & 0x1f) + ((ulong)uVar10 & 0x1f) + 1
                                                 >> 1)))) | 0xff000000;
                lVar30 = lVar30 + 4;
              } while ((int)lVar30 != 0x800);
              iVar36 = iVar36 + 1;
              lVar31 = lVar31 + lVar30;
            } while (iVar36 != iVar12);
            uVar37 = (ulong)*(byte *)(lVar32 + 0x7802b);
          }
          lVar33 = lVar33 + (long)(iVar12 * -0x400) * 2;
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < uVar37);
    }
  }
  return;
}

