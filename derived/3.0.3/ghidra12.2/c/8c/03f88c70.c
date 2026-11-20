
void FUN_03f88c70(long param_1,long param_2)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  long lVar4;
  uint *puVar5;
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
  long lVar26;
  undefined1 *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  ulong uVar34;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined8 uVar35;
  undefined1 uVar42;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined8 uVar43;
  undefined1 uVar50;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined8 uVar51;
  undefined1 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  
  lVar30 = *(long *)(param_1 + 0x25b200);
  if (*(char *)(lVar30 + 0x782f9) == '\0') {
    uVar11 = (int)((ulong)(lVar30 - (param_1 + 0x7a600)) >> 8) * -0x553340d5 + 3;
    uVar6 = uVar11 & 3;
    uVar11 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar6 = -(uVar11 & 3);
    }
    lVar30 = param_1 + 0x7a600 + (long)(int)uVar6 * 0x78300;
  }
  lVar31 = *(long *)(lVar30 + 0x78020);
  if (*(char *)(param_1 + 0x34b877) == '\0') {
    if ((*(char *)(lVar30 + 0x78029) != '\0') &&
       (uVar34 = (ulong)*(byte *)(lVar30 + 0x7802b), *(byte *)(lVar30 + 0x7802b) != 0)) {
      uVar32 = 0;
      lVar26 = lVar31 + (ulong)*(byte *)(lVar30 + 0x7802c) * 0x200;
      do {
        while( true ) {
          lVar28 = lVar30 + uVar32 * 3;
          if (*(char *)(lVar28 + 0x7802d) != '\0') break;
          pbVar1 = (byte *)(lVar30 + 0x7802c + uVar32 * 3);
          bVar7 = *pbVar1;
          iVar12 = (uint)pbVar1[3] - (uint)bVar7;
          if (0 < iVar12) {
            puVar25 = (undefined1 *)(param_2 + (ulong)bVar7 * 0x800);
            iVar33 = 0;
            lVar28 = param_1 + (ulong)*(byte *)(lVar28 + 0x7802e) * 0x20;
            pauVar2 = (undefined1 (*) [16])(lVar28 + 0x3cbd38);
            auVar23 = *pauVar2;
            auVar21 = *pauVar2;
            auVar19 = *pauVar2;
            auVar17 = *pauVar2;
            auVar15 = *pauVar2;
            auVar13 = *pauVar2;
            pauVar2 = (undefined1 (*) [16])(lVar28 + 0x3cbd48);
            auVar24 = *pauVar2;
            auVar22 = *pauVar2;
            auVar20 = *pauVar2;
            auVar18 = *pauVar2;
            auVar16 = *pauVar2;
            auVar14 = *pauVar2;
            lVar28 = lVar26;
            do {
              lVar29 = 0;
              do {
                puVar27 = puVar25;
                puVar3 = (undefined8 *)(lVar28 + lVar29);
                lVar29 = lVar29 + 0x20;
                uVar60 = puVar3[1];
                uVar51 = *puVar3;
                uVar59 = puVar3[3];
                uVar62 = puVar3[2];
                uVar35 = a64_TBL(ZEXT816(0),auVar13,auVar14,
                                 CONCAT17((char)((ulong)uVar60 >> 0x30),
                                          CONCAT16((char)((ulong)uVar60 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar60 >> 0x10),
                                                            CONCAT14((char)uVar60,
                                                                     CONCAT13((char)((ulong)uVar51
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar51 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar51 >> 0x10),
                                                           (char)uVar51))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar43 = a64_TBL(ZEXT816(0),auVar15,auVar16,
                                 CONCAT17((char)((ulong)uVar60 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar60 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar60 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar60 >> 5),
                                                                     CONCAT13((char)((ulong)uVar51
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar51 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar51 >> 0x10) >>
                                                                 5),(char)((ushort)uVar51 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar51 = a64_TBL(ZEXT816(0),auVar17,auVar18,
                                 CONCAT17((byte)((ulong)uVar60 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar60 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar60 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar60 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar51
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar51 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar51 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar51 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar60 = a64_TBL(ZEXT816(0),auVar19,auVar20,
                                 CONCAT17((char)((ulong)uVar59 >> 0x30),
                                          CONCAT16((char)((ulong)uVar59 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar59 >> 0x10),
                                                            CONCAT14((char)uVar59,
                                                                     CONCAT13((char)((ulong)uVar62
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar62 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar62 >> 0x10),
                                                           (char)uVar62))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar61 = a64_TBL(ZEXT816(0),auVar21,auVar22,
                                 CONCAT17((char)((ulong)uVar59 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar59 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar59 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar59 >> 5),
                                                                     CONCAT13((char)((ulong)uVar62
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar62 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar62 >> 0x10) >>
                                                                 5),(char)((ushort)uVar62 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                *puVar27 = (char)uVar35;
                puVar27[1] = (char)uVar43;
                puVar27[2] = (char)uVar51;
                puVar27[3] = 0xff;
                uVar36 = (undefined1)((ulong)uVar35 >> 8);
                puVar27[4] = uVar36;
                uVar44 = (undefined1)((ulong)uVar43 >> 8);
                puVar27[5] = uVar44;
                uVar52 = (undefined1)((ulong)uVar51 >> 8);
                puVar27[6] = uVar52;
                puVar27[7] = 0xff;
                uVar37 = (undefined1)((ulong)uVar35 >> 0x10);
                puVar27[8] = uVar37;
                uVar45 = (undefined1)((ulong)uVar43 >> 0x10);
                puVar27[9] = uVar45;
                uVar53 = (undefined1)((ulong)uVar51 >> 0x10);
                puVar27[10] = uVar53;
                puVar27[0xb] = 0xff;
                uVar38 = (undefined1)((ulong)uVar35 >> 0x18);
                puVar27[0xc] = uVar38;
                uVar46 = (undefined1)((ulong)uVar43 >> 0x18);
                puVar27[0xd] = uVar46;
                uVar54 = (undefined1)((ulong)uVar51 >> 0x18);
                puVar27[0xe] = uVar54;
                puVar27[0xf] = 0xff;
                uVar39 = (undefined1)((ulong)uVar35 >> 0x20);
                puVar27[0x10] = uVar39;
                uVar47 = (undefined1)((ulong)uVar43 >> 0x20);
                puVar27[0x11] = uVar47;
                uVar55 = (undefined1)((ulong)uVar51 >> 0x20);
                puVar27[0x12] = uVar55;
                puVar27[0x13] = 0xff;
                uVar40 = (undefined1)((ulong)uVar35 >> 0x28);
                puVar27[0x14] = uVar40;
                uVar48 = (undefined1)((ulong)uVar43 >> 0x28);
                puVar27[0x15] = uVar48;
                uVar56 = (undefined1)((ulong)uVar51 >> 0x28);
                puVar27[0x16] = uVar56;
                puVar27[0x17] = 0xff;
                uVar41 = (undefined1)((ulong)uVar35 >> 0x30);
                puVar27[0x18] = uVar41;
                uVar49 = (undefined1)((ulong)uVar43 >> 0x30);
                puVar27[0x19] = uVar49;
                uVar57 = (undefined1)((ulong)uVar51 >> 0x30);
                puVar27[0x1a] = uVar57;
                puVar27[0x1b] = 0xff;
                uVar42 = (undefined1)((ulong)uVar35 >> 0x38);
                puVar27[0x1c] = uVar42;
                uVar50 = (undefined1)((ulong)uVar43 >> 0x38);
                puVar27[0x1d] = uVar50;
                uVar58 = (undefined1)((ulong)uVar51 >> 0x38);
                puVar27[0x1e] = uVar58;
                puVar27[0x1f] = 0xff;
                uVar62 = a64_TBL(ZEXT816(0),auVar23,auVar24,
                                 CONCAT17((byte)((ulong)uVar59 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar59 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar59 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar59 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar62
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar62 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar62 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar62 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                puVar27[0x400] = (char)uVar35;
                puVar27[0x401] = (char)uVar43;
                puVar27[0x402] = (char)uVar51;
                puVar27[0x403] = 0xff;
                puVar27[0x404] = uVar36;
                puVar27[0x405] = uVar44;
                puVar27[0x406] = uVar52;
                puVar27[0x407] = 0xff;
                puVar27[0x408] = uVar37;
                puVar27[0x409] = uVar45;
                puVar27[0x40a] = uVar53;
                puVar27[0x40b] = 0xff;
                puVar27[0x40c] = uVar38;
                puVar27[0x40d] = uVar46;
                puVar27[0x40e] = uVar54;
                puVar27[0x40f] = 0xff;
                puVar27[0x410] = uVar39;
                puVar27[0x411] = uVar47;
                puVar27[0x412] = uVar55;
                puVar27[0x413] = 0xff;
                puVar27[0x414] = uVar40;
                puVar27[0x415] = uVar48;
                puVar27[0x416] = uVar56;
                puVar27[0x417] = 0xff;
                puVar27[0x418] = uVar41;
                puVar27[0x419] = uVar49;
                puVar27[0x41a] = uVar57;
                puVar27[0x41b] = 0xff;
                puVar27[0x41c] = uVar42;
                puVar27[0x41d] = uVar50;
                puVar27[0x41e] = uVar58;
                puVar27[0x41f] = 0xff;
                puVar27[0x420] = (char)uVar60;
                puVar27[0x421] = (char)uVar61;
                puVar27[0x422] = (char)uVar62;
                puVar27[0x423] = 0xff;
                uVar36 = (undefined1)((ulong)uVar60 >> 8);
                puVar27[0x424] = uVar36;
                uVar44 = (undefined1)((ulong)uVar61 >> 8);
                puVar27[0x425] = uVar44;
                uVar52 = (undefined1)((ulong)uVar62 >> 8);
                puVar27[0x426] = uVar52;
                puVar27[0x427] = 0xff;
                uVar37 = (undefined1)((ulong)uVar60 >> 0x10);
                puVar27[0x428] = uVar37;
                uVar45 = (undefined1)((ulong)uVar61 >> 0x10);
                puVar27[0x429] = uVar45;
                uVar53 = (undefined1)((ulong)uVar62 >> 0x10);
                puVar27[0x42a] = uVar53;
                puVar27[0x42b] = 0xff;
                uVar38 = (undefined1)((ulong)uVar60 >> 0x18);
                puVar27[0x42c] = uVar38;
                uVar46 = (undefined1)((ulong)uVar61 >> 0x18);
                puVar27[0x42d] = uVar46;
                uVar54 = (undefined1)((ulong)uVar62 >> 0x18);
                puVar27[0x42e] = uVar54;
                puVar27[0x42f] = 0xff;
                uVar39 = (undefined1)((ulong)uVar60 >> 0x20);
                puVar27[0x430] = uVar39;
                uVar47 = (undefined1)((ulong)uVar61 >> 0x20);
                puVar27[0x431] = uVar47;
                uVar55 = (undefined1)((ulong)uVar62 >> 0x20);
                puVar27[0x432] = uVar55;
                puVar27[0x433] = 0xff;
                uVar40 = (undefined1)((ulong)uVar60 >> 0x28);
                puVar27[0x434] = uVar40;
                uVar48 = (undefined1)((ulong)uVar61 >> 0x28);
                puVar27[0x435] = uVar48;
                uVar56 = (undefined1)((ulong)uVar62 >> 0x28);
                puVar27[0x436] = uVar56;
                puVar27[0x437] = 0xff;
                uVar41 = (undefined1)((ulong)uVar60 >> 0x30);
                puVar27[0x438] = uVar41;
                uVar49 = (undefined1)((ulong)uVar61 >> 0x30);
                puVar27[0x439] = uVar49;
                uVar57 = (undefined1)((ulong)uVar62 >> 0x30);
                puVar27[0x43a] = uVar57;
                puVar27[0x43b] = 0xff;
                uVar42 = (undefined1)((ulong)uVar60 >> 0x38);
                puVar27[0x43c] = uVar42;
                uVar50 = (undefined1)((ulong)uVar61 >> 0x38);
                puVar27[0x43d] = uVar50;
                uVar58 = (undefined1)((ulong)uVar62 >> 0x38);
                puVar27[0x43e] = uVar58;
                puVar27[0x43f] = 0xff;
                puVar27[0x20] = (char)uVar60;
                puVar27[0x21] = (char)uVar61;
                puVar27[0x22] = (char)uVar62;
                puVar27[0x23] = 0xff;
                puVar27[0x24] = uVar36;
                puVar27[0x25] = uVar44;
                puVar27[0x26] = uVar52;
                puVar27[0x27] = 0xff;
                puVar27[0x28] = uVar37;
                puVar27[0x29] = uVar45;
                puVar27[0x2a] = uVar53;
                puVar27[0x2b] = 0xff;
                puVar27[0x2c] = uVar38;
                puVar27[0x2d] = uVar46;
                puVar27[0x2e] = uVar54;
                puVar27[0x2f] = 0xff;
                puVar27[0x30] = uVar39;
                puVar27[0x31] = uVar47;
                puVar27[0x32] = uVar55;
                puVar27[0x33] = 0xff;
                puVar27[0x34] = uVar40;
                puVar27[0x35] = uVar48;
                puVar27[0x36] = uVar56;
                puVar27[0x37] = 0xff;
                puVar27[0x38] = uVar41;
                puVar27[0x39] = uVar49;
                puVar27[0x3a] = uVar57;
                puVar27[0x3b] = 0xff;
                puVar27[0x3c] = uVar42;
                puVar27[0x3d] = uVar50;
                puVar27[0x3e] = uVar58;
                puVar27[0x3f] = 0xff;
                puVar25 = puVar27 + 0x40;
              } while ((int)lVar29 != 0x200);
              iVar33 = iVar33 + 1;
              puVar25 = puVar27 + 0x440;
              lVar28 = lVar28 + lVar29;
            } while (iVar33 != iVar12);
            uVar34 = (ulong)*(byte *)(lVar30 + 0x7802b);
          }
          uVar32 = uVar32 + 1;
          lVar26 = lVar26 + (long)(iVar12 * 0x100) * 2;
          if (uVar34 <= uVar32) goto LAB_03f890d8;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar34);
    }
LAB_03f890d8:
    if ((*(char *)(lVar30 + 0x7802a) != '\0') &&
       (uVar34 = (ulong)*(byte *)(lVar30 + 0x7802b), *(byte *)(lVar30 + 0x7802b) != 0)) {
      uVar32 = 0;
      lVar31 = lVar31 + ((ulong)*(byte *)(lVar30 + 0x7802c) * -0x200 + 0x1de00) * 2;
      do {
        while( true ) {
          lVar26 = lVar30 + uVar32 * 3;
          if (*(char *)(lVar26 + 0x7802d) != '\x01') break;
          pbVar1 = (byte *)(lVar30 + 0x7802c + uVar32 * 3);
          bVar7 = *pbVar1;
          iVar12 = (uint)pbVar1[3] - (uint)bVar7;
          if (0 < iVar12) {
            bVar8 = *(byte *)(lVar26 + 0x7802e);
            lVar26 = param_2 + (ulong)bVar7 * 0x800;
            iVar33 = 0;
            lVar28 = lVar31;
            do {
              lVar29 = 0;
              do {
                uVar9 = *(ushort *)(lVar28 + lVar29);
                uVar10 = ((ushort *)(lVar28 + lVar29))[1];
                lVar4 = param_1 + (ulong)bVar8 * 0x20 + 0x3cbd38;
                puVar5 = (uint *)(lVar26 + lVar29);
                lVar29 = lVar29 + 4;
                uVar6 = CONCAT12(*(undefined1 *)
                                  (lVar4 + (((ulong)(uVar9 >> 10) & 0x1f) +
                                            ((ulong)(uVar10 >> 10) & 0x1f) + 1 >> 1)),
                                 CONCAT11(*(undefined1 *)
                                           (lVar4 + (((ulong)(uVar9 >> 5) & 0x1f) +
                                                     ((ulong)(uVar10 >> 5) & 0x1f) + 1 >> 1)),
                                          *(undefined1 *)
                                           (lVar4 + (((ulong)uVar9 & 0x1f) + ((ulong)uVar10 & 0x1f)
                                                     + 1 >> 1)))) | 0xff000000;
                puVar5[0x100] = uVar6;
                *puVar5 = uVar6;
              } while ((int)lVar29 != 0x400);
              iVar33 = iVar33 + 1;
              lVar26 = lVar26 + lVar29 + 0x400;
              lVar28 = lVar28 + lVar29 + -0x800;
            } while (iVar33 != iVar12);
            uVar34 = (ulong)*(byte *)(lVar30 + 0x7802b);
          }
          uVar32 = uVar32 + 1;
          lVar31 = lVar31 + (long)(iVar12 * -0x200) * 2;
          if (uVar34 <= uVar32) {
            return;
          }
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar34);
    }
  }
  else {
    if ((*(char *)(lVar30 + 0x78029) != '\0') &&
       (uVar34 = (ulong)*(byte *)(lVar30 + 0x7802b), *(byte *)(lVar30 + 0x7802b) != 0)) {
      uVar32 = 0;
      lVar26 = lVar31 + (ulong)*(byte *)(lVar30 + 0x7802c) * 0x200;
      do {
        while( true ) {
          lVar28 = lVar30 + uVar32 * 3;
          if (*(char *)(lVar28 + 0x7802d) != '\0') break;
          pbVar1 = (byte *)(lVar30 + 0x7802c + uVar32 * 3);
          bVar7 = *pbVar1;
          iVar12 = (uint)pbVar1[3] - (uint)bVar7;
          if (0 < iVar12) {
            puVar25 = (undefined1 *)(param_2 + (ulong)bVar7 * 0x800);
            iVar33 = 0;
            lVar28 = param_1 + (ulong)*(byte *)(lVar28 + 0x7802e) * 0x20;
            pauVar2 = (undefined1 (*) [16])(lVar28 + 0x3cbd38);
            auVar23 = *pauVar2;
            auVar21 = *pauVar2;
            auVar19 = *pauVar2;
            auVar17 = *pauVar2;
            auVar15 = *pauVar2;
            auVar13 = *pauVar2;
            pauVar2 = (undefined1 (*) [16])(lVar28 + 0x3cbd48);
            auVar24 = *pauVar2;
            auVar22 = *pauVar2;
            auVar20 = *pauVar2;
            auVar18 = *pauVar2;
            auVar16 = *pauVar2;
            auVar14 = *pauVar2;
            lVar28 = lVar26;
            do {
              lVar29 = 0;
              puVar27 = puVar25;
              do {
                puVar3 = (undefined8 *)(lVar28 + lVar29);
                lVar29 = lVar29 + 0x20;
                uVar60 = puVar3[1];
                uVar51 = *puVar3;
                uVar59 = puVar3[3];
                uVar62 = puVar3[2];
                puVar25 = puVar27 + 0x40;
                uVar35 = a64_TBL(ZEXT816(0),auVar13,auVar14,
                                 CONCAT17((char)((ulong)uVar60 >> 0x30),
                                          CONCAT16((char)((ulong)uVar60 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar60 >> 0x10),
                                                            CONCAT14((char)uVar60,
                                                                     CONCAT13((char)((ulong)uVar51
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar51 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar51 >> 0x10),
                                                           (char)uVar51))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar43 = a64_TBL(ZEXT816(0),auVar15,auVar16,
                                 CONCAT17((char)((ulong)uVar60 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar60 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar60 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar60 >> 5),
                                                                     CONCAT13((char)((ulong)uVar51
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar51 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar51 >> 0x10) >>
                                                                 5),(char)((ushort)uVar51 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar51 = a64_TBL(ZEXT816(0),auVar17,auVar18,
                                 CONCAT17((byte)((ulong)uVar60 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar60 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar60 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar60 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar51
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar51 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar51 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar51 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar60 = a64_TBL(ZEXT816(0),auVar19,auVar20,
                                 CONCAT17((char)((ulong)uVar59 >> 0x30),
                                          CONCAT16((char)((ulong)uVar59 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar59 >> 0x10),
                                                            CONCAT14((char)uVar59,
                                                                     CONCAT13((char)((ulong)uVar62
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar62 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar62 >> 0x10),
                                                           (char)uVar62))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar61 = a64_TBL(ZEXT816(0),auVar21,auVar22,
                                 CONCAT17((char)((ulong)uVar59 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar59 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar59 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar59 >> 5),
                                                                     CONCAT13((char)((ulong)uVar62
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar62 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar62 >> 0x10) >>
                                                                 5),(char)((ushort)uVar62 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar62 = a64_TBL(ZEXT816(0),auVar23,auVar24,
                                 CONCAT17((byte)((ulong)uVar59 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar59 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar59 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar59 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar62
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar62 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar62 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar62 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                *puVar27 = (char)uVar35;
                puVar27[1] = (char)uVar43;
                puVar27[2] = (char)uVar51;
                puVar27[3] = 0xff;
                puVar27[4] = (char)((ulong)uVar35 >> 8);
                puVar27[5] = (char)((ulong)uVar43 >> 8);
                puVar27[6] = (char)((ulong)uVar51 >> 8);
                puVar27[7] = 0xff;
                puVar27[8] = (char)((ulong)uVar35 >> 0x10);
                puVar27[9] = (char)((ulong)uVar43 >> 0x10);
                puVar27[10] = (char)((ulong)uVar51 >> 0x10);
                puVar27[0xb] = 0xff;
                puVar27[0xc] = (char)((ulong)uVar35 >> 0x18);
                puVar27[0xd] = (char)((ulong)uVar43 >> 0x18);
                puVar27[0xe] = (char)((ulong)uVar51 >> 0x18);
                puVar27[0xf] = 0xff;
                puVar27[0x10] = (char)((ulong)uVar35 >> 0x20);
                puVar27[0x11] = (char)((ulong)uVar43 >> 0x20);
                puVar27[0x12] = (char)((ulong)uVar51 >> 0x20);
                puVar27[0x13] = 0xff;
                puVar27[0x14] = (char)((ulong)uVar35 >> 0x28);
                puVar27[0x15] = (char)((ulong)uVar43 >> 0x28);
                puVar27[0x16] = (char)((ulong)uVar51 >> 0x28);
                puVar27[0x17] = 0xff;
                puVar27[0x18] = (char)((ulong)uVar35 >> 0x30);
                puVar27[0x19] = (char)((ulong)uVar43 >> 0x30);
                puVar27[0x1a] = (char)((ulong)uVar51 >> 0x30);
                puVar27[0x1b] = 0xff;
                puVar27[0x1c] = (char)((ulong)uVar35 >> 0x38);
                puVar27[0x1d] = (char)((ulong)uVar43 >> 0x38);
                puVar27[0x1e] = (char)((ulong)uVar51 >> 0x38);
                puVar27[0x1f] = 0xff;
                puVar27[0x20] = (char)uVar60;
                puVar27[0x21] = (char)uVar61;
                puVar27[0x22] = (char)uVar62;
                puVar27[0x23] = 0xff;
                puVar27[0x24] = (char)((ulong)uVar60 >> 8);
                puVar27[0x25] = (char)((ulong)uVar61 >> 8);
                puVar27[0x26] = (char)((ulong)uVar62 >> 8);
                puVar27[0x27] = 0xff;
                puVar27[0x28] = (char)((ulong)uVar60 >> 0x10);
                puVar27[0x29] = (char)((ulong)uVar61 >> 0x10);
                puVar27[0x2a] = (char)((ulong)uVar62 >> 0x10);
                puVar27[0x2b] = 0xff;
                puVar27[0x2c] = (char)((ulong)uVar60 >> 0x18);
                puVar27[0x2d] = (char)((ulong)uVar61 >> 0x18);
                puVar27[0x2e] = (char)((ulong)uVar62 >> 0x18);
                puVar27[0x2f] = 0xff;
                puVar27[0x30] = (char)((ulong)uVar60 >> 0x20);
                puVar27[0x31] = (char)((ulong)uVar61 >> 0x20);
                puVar27[0x32] = (char)((ulong)uVar62 >> 0x20);
                puVar27[0x33] = 0xff;
                puVar27[0x34] = (char)((ulong)uVar60 >> 0x28);
                puVar27[0x35] = (char)((ulong)uVar61 >> 0x28);
                puVar27[0x36] = (char)((ulong)uVar62 >> 0x28);
                puVar27[0x37] = 0xff;
                puVar27[0x38] = (char)((ulong)uVar60 >> 0x30);
                puVar27[0x39] = (char)((ulong)uVar61 >> 0x30);
                puVar27[0x3a] = (char)((ulong)uVar62 >> 0x30);
                puVar27[0x3b] = 0xff;
                puVar27[0x3c] = (char)((ulong)uVar60 >> 0x38);
                puVar27[0x3d] = (char)((ulong)uVar61 >> 0x38);
                puVar27[0x3e] = (char)((ulong)uVar62 >> 0x38);
                puVar27[0x3f] = 0xff;
                puVar27 = puVar25;
              } while ((int)lVar29 != 0x200);
              iVar33 = iVar33 + 1;
              lVar28 = lVar28 + lVar29;
            } while (iVar33 != iVar12 * 2);
            uVar34 = (ulong)*(byte *)(lVar30 + 0x7802b);
          }
          uVar32 = uVar32 + 1;
          lVar26 = lVar26 + (long)(iVar12 * 0x200) * 2;
          if (uVar34 <= uVar32) goto LAB_03f88e38;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar34);
    }
LAB_03f88e38:
    if ((*(char *)(lVar30 + 0x7802a) != '\0') &&
       (uVar34 = (ulong)*(byte *)(lVar30 + 0x7802b), *(byte *)(lVar30 + 0x7802b) != 0)) {
      uVar32 = 0;
      lVar31 = lVar31 + ((ulong)*(byte *)(lVar30 + 0x7802c) * -0x200 + 0x3be00) * 2;
      do {
        lVar26 = lVar30 + uVar32 * 3;
        if (*(char *)(lVar26 + 0x7802d) == '\x01') {
          pbVar1 = (byte *)(lVar30 + 0x7802c + uVar32 * 3);
          bVar7 = *pbVar1;
          iVar12 = (uint)pbVar1[3] - (uint)bVar7;
          if (0 < iVar12) {
            bVar8 = *(byte *)(lVar26 + 0x7802e);
            lVar26 = param_2 + (ulong)bVar7 * 0x800;
            iVar33 = 0;
            lVar28 = lVar31;
            do {
              lVar29 = 0;
              do {
                uVar9 = *(ushort *)(lVar28 + lVar29);
                uVar10 = ((ushort *)(lVar28 + lVar29))[1];
                lVar4 = param_1 + (ulong)bVar8 * 0x20 + 0x3cbd38;
                *(uint *)(lVar26 + lVar29) =
                     CONCAT12(*(undefined1 *)
                               (lVar4 + (((ulong)(uVar9 >> 10) & 0x1f) +
                                         ((ulong)(uVar10 >> 10) & 0x1f) + 1 >> 1)),
                              CONCAT11(*(undefined1 *)
                                        (lVar4 + (((ulong)(uVar9 >> 5) & 0x1f) +
                                                  ((ulong)(uVar10 >> 5) & 0x1f) + 1 >> 1)),
                                       *(undefined1 *)
                                        (lVar4 + (((ulong)uVar9 & 0x1f) + ((ulong)uVar10 & 0x1f) + 1
                                                 >> 1)))) | 0xff000000;
                lVar29 = lVar29 + 4;
              } while ((int)lVar29 != 0x400);
              iVar33 = iVar33 + 1;
              lVar26 = lVar26 + lVar29;
              lVar28 = lVar28 + lVar29 + -0x800;
            } while (iVar33 != iVar12 * 2);
            uVar34 = (ulong)*(byte *)(lVar30 + 0x7802b);
          }
          lVar31 = lVar31 + (long)(iVar12 * -0x400) * 2;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar34);
    }
  }
  return;
}

