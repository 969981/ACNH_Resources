
void FUN_03f89240(long param_1,long param_2)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
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
  uint uVar31;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  uint3 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  uint3 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  uint3 uVar81;
  undefined1 uVar83;
  undefined8 uVar82;
  undefined8 uVar84;
  uint6 uVar85;
  undefined8 uVar86;
  ushort uVar88;
  ushort uVar89;
  ulong uVar87;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined1 uVar95;
  uint3 uVar96;
  
  lVar24 = *(long *)(param_1 + 0x25b200);
  if (*(char *)(lVar24 + 0x782f9) == '\0') {
    uVar5 = (int)((ulong)(lVar24 - (param_1 + 0x7a600)) >> 8) * -0x553340d5 + 3;
    uVar31 = uVar5 & 3;
    uVar5 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar31 = -(uVar5 & 3);
    }
    lVar24 = param_1 + 0x7a600 + (long)(int)uVar31 * 0x78300;
  }
  lVar25 = *(long *)(lVar24 + 0x78020);
  if (*(char *)(param_1 + 0x34b877) == '\0') {
    if ((*(char *)(lVar24 + 0x78029) != '\0') &&
       (uVar28 = (ulong)*(byte *)(lVar24 + 0x7802b), *(byte *)(lVar24 + 0x7802b) != 0)) {
      uVar26 = 0;
      lVar22 = lVar25 + (ulong)*(byte *)(lVar24 + 0x7802c) * 0x200;
      do {
        while( true ) {
          lVar19 = lVar24 + uVar26 * 3;
          if (*(char *)(lVar19 + 0x7802d) != '\0') break;
          pbVar1 = (byte *)(lVar24 + 0x7802c + uVar26 * 3);
          bVar4 = *pbVar1;
          iVar6 = (uint)pbVar1[3] - (uint)bVar4;
          if (0 < iVar6) {
            puVar20 = (undefined1 *)(param_2 + (ulong)bVar4 * 0x1000);
            iVar27 = 0;
            lVar19 = param_1 + (ulong)*(byte *)(lVar19 + 0x7802e) * 0x20;
            pauVar2 = (undefined1 (*) [16])(lVar19 + 0x3cbd38);
            auVar17 = *pauVar2;
            auVar15 = *pauVar2;
            auVar13 = *pauVar2;
            auVar11 = *pauVar2;
            auVar9 = *pauVar2;
            auVar7 = *pauVar2;
            pauVar2 = (undefined1 (*) [16])(lVar19 + 0x3cbd48);
            auVar18 = *pauVar2;
            auVar16 = *pauVar2;
            auVar14 = *pauVar2;
            auVar12 = *pauVar2;
            auVar10 = *pauVar2;
            auVar8 = *pauVar2;
            lVar19 = lVar22;
            do {
              lVar23 = 0;
              do {
                puVar21 = puVar20;
                puVar3 = (undefined8 *)(lVar19 + lVar23);
                lVar23 = lVar23 + 0x20;
                uVar86 = puVar3[1];
                uVar84 = *puVar3;
                uVar91 = puVar3[3];
                uVar82 = puVar3[2];
                uVar93 = a64_TBL(ZEXT816(0),auVar7,auVar8,
                                 CONCAT17((char)((ulong)uVar91 >> 0x30),
                                          CONCAT16((char)((ulong)uVar91 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar91 >> 0x10),
                                                            CONCAT14((char)uVar91,
                                                                     CONCAT13((char)((ulong)uVar82
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar82 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar82 >> 0x10),
                                                           (char)uVar82))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar90 = a64_TBL(ZEXT816(0),auVar9,auVar10,
                                 CONCAT17((char)((ulong)uVar86 >> 0x30),
                                          CONCAT16((char)((ulong)uVar86 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar86 >> 0x10),
                                                            CONCAT14((char)uVar86,
                                                                     CONCAT13((char)((ulong)uVar84
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar84 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar84 >> 0x10),
                                                           (char)uVar84))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar29 = (undefined1)uVar93;
                uVar32 = (undefined1)((ulong)uVar93 >> 8);
                uVar38 = (undefined1)((ulong)uVar93 >> 0x10);
                uVar44 = (undefined1)((ulong)uVar93 >> 0x18);
                uVar92 = a64_TBL(ZEXT816(0),auVar11,auVar12,
                                 CONCAT17((char)((ulong)uVar86 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar86 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar86 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar86 >> 5),
                                                                     CONCAT13((char)((ulong)uVar84
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar84 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar84 >> 0x10) >>
                                                                 5),(char)((ushort)uVar84 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar50 = (undefined1)((ulong)uVar93 >> 0x20);
                uVar56 = (undefined1)((ulong)uVar93 >> 0x28);
                uVar62 = (undefined1)((ulong)uVar93 >> 0x30);
                uVar68 = (undefined1)((ulong)uVar93 >> 0x38);
                uVar84 = a64_TBL(ZEXT816(0),auVar13,auVar14,
                                 CONCAT17((byte)((ulong)uVar86 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar86 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar86 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar86 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar84
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar84 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar84 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar84 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar33 = (undefined1)((ulong)uVar90 >> 8);
                uVar75 = CONCAT12(uVar33,(short)uVar90) & 0xff00ff;
                uVar39 = (undefined1)((ulong)uVar90 >> 0x10);
                uVar45 = (undefined1)((ulong)uVar90 >> 0x18);
                uVar74 = (undefined1)uVar75;
                uVar93 = a64_TBL(ZEXT816(0),auVar15,auVar16,
                                 CONCAT17((char)((ulong)uVar91 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar91 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar91 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar91 >> 5),
                                                                     CONCAT13((char)((ulong)uVar82
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar82 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar82 >> 0x10) >>
                                                                 5),(char)((ushort)uVar82 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar34 = (undefined1)((ulong)uVar92 >> 8);
                uVar78 = CONCAT12(uVar34,(short)uVar92) & 0xff00ff;
                uVar40 = (undefined1)((ulong)uVar92 >> 0x10);
                uVar46 = (undefined1)((ulong)uVar92 >> 0x18);
                uVar77 = (undefined1)uVar78;
                uVar86 = a64_TBL(ZEXT816(0),auVar17,auVar18,
                                 CONCAT17((byte)((ulong)uVar91 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar91 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar91 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar91 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar82
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar82 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar82 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar82 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar35 = (undefined1)((ulong)uVar93 >> 8);
                uVar96 = CONCAT12(uVar35,(short)uVar93) & 0xff00ff;
                uVar41 = (undefined1)((ulong)uVar93 >> 0x10);
                uVar47 = (undefined1)((ulong)uVar93 >> 0x18);
                uVar95 = (undefined1)uVar96;
                uVar51 = (undefined1)((ulong)uVar93 >> 0x20);
                uVar57 = (undefined1)((ulong)uVar93 >> 0x28);
                uVar63 = (undefined1)((ulong)uVar93 >> 0x30);
                uVar69 = (undefined1)((ulong)uVar93 >> 0x38);
                uVar52 = (undefined1)((ulong)uVar90 >> 0x20);
                uVar58 = (undefined1)((ulong)uVar90 >> 0x28);
                uVar64 = (undefined1)((ulong)uVar90 >> 0x30);
                uVar70 = (undefined1)((ulong)uVar90 >> 0x38);
                uVar53 = (undefined1)((ulong)uVar92 >> 0x20);
                uVar59 = (undefined1)((ulong)uVar92 >> 0x28);
                uVar65 = (undefined1)((ulong)uVar92 >> 0x30);
                uVar71 = (undefined1)((ulong)uVar92 >> 0x38);
                uVar30 = (undefined1)uVar86;
                uVar36 = (undefined1)((ulong)uVar86 >> 8);
                uVar42 = (undefined1)((ulong)uVar86 >> 0x10);
                uVar48 = (undefined1)((ulong)uVar86 >> 0x18);
                uVar54 = (undefined1)((ulong)uVar86 >> 0x20);
                uVar60 = (undefined1)((ulong)uVar86 >> 0x28);
                uVar66 = (undefined1)((ulong)uVar86 >> 0x30);
                uVar72 = (undefined1)((ulong)uVar86 >> 0x38);
                uVar37 = (undefined1)((ulong)uVar84 >> 8);
                uVar81 = CONCAT12(uVar37,(short)uVar84) & 0xff00ff;
                uVar43 = (undefined1)((ulong)uVar84 >> 0x10);
                uVar49 = (undefined1)((ulong)uVar84 >> 0x18);
                uVar80 = (undefined1)uVar81;
                uVar55 = (undefined1)((ulong)uVar84 >> 0x20);
                uVar61 = (undefined1)((ulong)uVar84 >> 0x28);
                uVar67 = (undefined1)((ulong)uVar84 >> 0x30);
                uVar73 = (undefined1)((ulong)uVar84 >> 0x38);
                *puVar21 = uVar74;
                puVar21[1] = uVar77;
                puVar21[2] = uVar80;
                puVar21[3] = 0xff;
                puVar21[4] = (char)uVar90;
                puVar21[5] = (char)uVar92;
                puVar21[6] = (char)uVar84;
                puVar21[7] = 0xff;
                uVar76 = (undefined1)(uVar75 >> 0x10);
                puVar21[8] = uVar76;
                uVar79 = (undefined1)(uVar78 >> 0x10);
                puVar21[9] = uVar79;
                uVar83 = (undefined1)(uVar81 >> 0x10);
                puVar21[10] = uVar83;
                puVar21[0xb] = 0xff;
                puVar21[0xc] = uVar33;
                puVar21[0xd] = uVar34;
                puVar21[0xe] = uVar37;
                puVar21[0xf] = 0xff;
                puVar21[0x10] = uVar39;
                puVar21[0x11] = uVar40;
                puVar21[0x12] = uVar43;
                puVar21[0x13] = 0xff;
                puVar21[0x14] = uVar39;
                puVar21[0x15] = uVar40;
                puVar21[0x16] = uVar43;
                puVar21[0x17] = 0xff;
                puVar21[0x18] = uVar45;
                puVar21[0x19] = uVar46;
                puVar21[0x1a] = uVar49;
                puVar21[0x1b] = 0xff;
                puVar21[0x1c] = uVar45;
                puVar21[0x1d] = uVar46;
                puVar21[0x1e] = uVar49;
                puVar21[0x1f] = 0xff;
                puVar21[0x800] = uVar74;
                puVar21[0x801] = uVar77;
                puVar21[0x802] = uVar80;
                puVar21[0x803] = 0xff;
                puVar21[0x804] = (char)uVar90;
                puVar21[0x805] = (char)uVar92;
                puVar21[0x806] = (char)uVar84;
                puVar21[0x807] = 0xff;
                puVar21[0x808] = uVar76;
                puVar21[0x809] = uVar79;
                puVar21[0x80a] = uVar83;
                puVar21[0x80b] = 0xff;
                puVar21[0x80c] = uVar33;
                puVar21[0x80d] = uVar34;
                puVar21[0x80e] = uVar37;
                puVar21[0x80f] = 0xff;
                puVar21[0x810] = uVar39;
                puVar21[0x811] = uVar40;
                puVar21[0x812] = uVar43;
                puVar21[0x813] = 0xff;
                puVar21[0x814] = uVar39;
                puVar21[0x815] = uVar40;
                puVar21[0x816] = uVar43;
                puVar21[0x817] = 0xff;
                puVar21[0x818] = uVar45;
                puVar21[0x819] = uVar46;
                puVar21[0x81a] = uVar49;
                puVar21[0x81b] = 0xff;
                puVar21[0x81c] = uVar45;
                puVar21[0x81d] = uVar46;
                puVar21[0x81e] = uVar49;
                puVar21[0x81f] = 0xff;
                puVar21[0x40] = uVar29;
                puVar21[0x41] = uVar95;
                puVar21[0x42] = uVar30;
                puVar21[0x43] = 0xff;
                puVar21[0x44] = uVar29;
                puVar21[0x45] = (char)uVar93;
                puVar21[0x46] = uVar30;
                puVar21[0x47] = 0xff;
                puVar21[0x48] = uVar32;
                uVar33 = (undefined1)(uVar96 >> 0x10);
                puVar21[0x49] = uVar33;
                puVar21[0x4a] = uVar36;
                puVar21[0x4b] = 0xff;
                puVar21[0x4c] = uVar32;
                puVar21[0x4d] = uVar35;
                puVar21[0x4e] = uVar36;
                puVar21[0x4f] = 0xff;
                puVar21[0x50] = uVar38;
                puVar21[0x51] = uVar41;
                puVar21[0x52] = uVar42;
                puVar21[0x53] = 0xff;
                puVar21[0x54] = uVar38;
                puVar21[0x55] = uVar41;
                puVar21[0x56] = uVar42;
                puVar21[0x57] = 0xff;
                puVar21[0x58] = uVar44;
                puVar21[0x59] = uVar47;
                puVar21[0x5a] = uVar48;
                puVar21[0x5b] = 0xff;
                puVar21[0x5c] = uVar44;
                puVar21[0x5d] = uVar47;
                puVar21[0x5e] = uVar48;
                puVar21[0x5f] = 0xff;
                puVar21[0x60] = uVar50;
                puVar21[0x61] = uVar51;
                puVar21[0x62] = uVar54;
                puVar21[99] = 0xff;
                puVar21[100] = uVar50;
                puVar21[0x65] = uVar51;
                puVar21[0x66] = uVar54;
                puVar21[0x67] = 0xff;
                puVar21[0x68] = uVar56;
                puVar21[0x69] = uVar57;
                puVar21[0x6a] = uVar60;
                puVar21[0x6b] = 0xff;
                puVar21[0x6c] = uVar56;
                puVar21[0x6d] = uVar57;
                puVar21[0x6e] = uVar60;
                puVar21[0x6f] = 0xff;
                puVar21[0x70] = uVar62;
                puVar21[0x71] = uVar63;
                puVar21[0x72] = uVar66;
                puVar21[0x73] = 0xff;
                puVar21[0x74] = uVar62;
                puVar21[0x75] = uVar63;
                puVar21[0x76] = uVar66;
                puVar21[0x77] = 0xff;
                puVar21[0x78] = uVar68;
                puVar21[0x79] = uVar69;
                puVar21[0x7a] = uVar72;
                puVar21[0x7b] = 0xff;
                puVar21[0x7c] = uVar68;
                puVar21[0x7d] = uVar69;
                puVar21[0x7e] = uVar72;
                puVar21[0x7f] = 0xff;
                puVar21[0x820] = uVar52;
                puVar21[0x821] = uVar53;
                puVar21[0x822] = uVar55;
                puVar21[0x823] = 0xff;
                puVar21[0x824] = uVar52;
                puVar21[0x825] = uVar53;
                puVar21[0x826] = uVar55;
                puVar21[0x827] = 0xff;
                puVar21[0x828] = uVar58;
                puVar21[0x829] = uVar59;
                puVar21[0x82a] = uVar61;
                puVar21[0x82b] = 0xff;
                puVar21[0x82c] = uVar58;
                puVar21[0x82d] = uVar59;
                puVar21[0x82e] = uVar61;
                puVar21[0x82f] = 0xff;
                puVar21[0x830] = uVar64;
                puVar21[0x831] = uVar65;
                puVar21[0x832] = uVar67;
                puVar21[0x833] = 0xff;
                puVar21[0x834] = uVar64;
                puVar21[0x835] = uVar65;
                puVar21[0x836] = uVar67;
                puVar21[0x837] = 0xff;
                puVar21[0x838] = uVar70;
                puVar21[0x839] = uVar71;
                puVar21[0x83a] = uVar73;
                puVar21[0x83b] = 0xff;
                puVar21[0x83c] = uVar70;
                puVar21[0x83d] = uVar71;
                puVar21[0x83e] = uVar73;
                puVar21[0x83f] = 0xff;
                puVar21[0x840] = uVar29;
                puVar21[0x841] = uVar95;
                puVar21[0x842] = uVar30;
                puVar21[0x843] = 0xff;
                puVar21[0x844] = uVar29;
                puVar21[0x845] = (char)uVar93;
                puVar21[0x846] = uVar30;
                puVar21[0x847] = 0xff;
                puVar21[0x848] = uVar32;
                puVar21[0x849] = uVar33;
                puVar21[0x84a] = uVar36;
                puVar21[0x84b] = 0xff;
                puVar21[0x84c] = uVar32;
                puVar21[0x84d] = uVar35;
                puVar21[0x84e] = uVar36;
                puVar21[0x84f] = 0xff;
                puVar21[0x850] = uVar38;
                puVar21[0x851] = uVar41;
                puVar21[0x852] = uVar42;
                puVar21[0x853] = 0xff;
                puVar21[0x854] = uVar38;
                puVar21[0x855] = uVar41;
                puVar21[0x856] = uVar42;
                puVar21[0x857] = 0xff;
                puVar21[0x858] = uVar44;
                puVar21[0x859] = uVar47;
                puVar21[0x85a] = uVar48;
                puVar21[0x85b] = 0xff;
                puVar21[0x85c] = uVar44;
                puVar21[0x85d] = uVar47;
                puVar21[0x85e] = uVar48;
                puVar21[0x85f] = 0xff;
                puVar21[0x20] = uVar52;
                puVar21[0x21] = uVar53;
                puVar21[0x22] = uVar55;
                puVar21[0x23] = 0xff;
                puVar21[0x24] = uVar52;
                puVar21[0x25] = uVar53;
                puVar21[0x26] = uVar55;
                puVar21[0x27] = 0xff;
                puVar21[0x28] = uVar58;
                puVar21[0x29] = uVar59;
                puVar21[0x2a] = uVar61;
                puVar21[0x2b] = 0xff;
                puVar21[0x2c] = uVar58;
                puVar21[0x2d] = uVar59;
                puVar21[0x2e] = uVar61;
                puVar21[0x2f] = 0xff;
                puVar21[0x30] = uVar64;
                puVar21[0x31] = uVar65;
                puVar21[0x32] = uVar67;
                puVar21[0x33] = 0xff;
                puVar21[0x34] = uVar64;
                puVar21[0x35] = uVar65;
                puVar21[0x36] = uVar67;
                puVar21[0x37] = 0xff;
                puVar21[0x38] = uVar70;
                puVar21[0x39] = uVar71;
                puVar21[0x3a] = uVar73;
                puVar21[0x3b] = 0xff;
                puVar21[0x3c] = uVar70;
                puVar21[0x3d] = uVar71;
                puVar21[0x3e] = uVar73;
                puVar21[0x3f] = 0xff;
                puVar21[0x860] = uVar50;
                puVar21[0x861] = uVar51;
                puVar21[0x862] = uVar54;
                puVar21[0x863] = 0xff;
                puVar21[0x864] = uVar50;
                puVar21[0x865] = uVar51;
                puVar21[0x866] = uVar54;
                puVar21[0x867] = 0xff;
                puVar21[0x868] = uVar56;
                puVar21[0x869] = uVar57;
                puVar21[0x86a] = uVar60;
                puVar21[0x86b] = 0xff;
                puVar21[0x86c] = uVar56;
                puVar21[0x86d] = uVar57;
                puVar21[0x86e] = uVar60;
                puVar21[0x86f] = 0xff;
                puVar21[0x870] = uVar62;
                puVar21[0x871] = uVar63;
                puVar21[0x872] = uVar66;
                puVar21[0x873] = 0xff;
                puVar21[0x874] = uVar62;
                puVar21[0x875] = uVar63;
                puVar21[0x876] = uVar66;
                puVar21[0x877] = 0xff;
                puVar21[0x878] = uVar68;
                puVar21[0x879] = uVar69;
                puVar21[0x87a] = uVar72;
                puVar21[0x87b] = 0xff;
                puVar21[0x87c] = uVar68;
                puVar21[0x87d] = uVar69;
                puVar21[0x87e] = uVar72;
                puVar21[0x87f] = 0xff;
                puVar20 = puVar21 + 0x80;
              } while ((int)lVar23 != 0x200);
              iVar27 = iVar27 + 1;
              puVar20 = puVar21 + 0x880;
              lVar19 = lVar19 + lVar23;
            } while (iVar27 != iVar6);
            uVar28 = (ulong)*(byte *)(lVar24 + 0x7802b);
          }
          uVar26 = uVar26 + 1;
          lVar22 = lVar22 + (long)(iVar6 * 0x100) * 2;
          if (uVar28 <= uVar26) goto LAB_03f89760;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar28);
    }
LAB_03f89760:
    if ((*(char *)(lVar24 + 0x7802a) != '\0') &&
       (uVar28 = (ulong)*(byte *)(lVar24 + 0x7802b), *(byte *)(lVar24 + 0x7802b) != 0)) {
      uVar26 = 0;
      lVar25 = lVar25 + ((ulong)*(byte *)(lVar24 + 0x7802c) * -0x200 + 0x1de00) * 2;
      do {
        while( true ) {
          lVar22 = lVar24 + uVar26 * 3;
          if (*(char *)(lVar22 + 0x7802d) != '\x01') break;
          pbVar1 = (byte *)(lVar24 + 0x7802c + uVar26 * 3);
          bVar4 = *pbVar1;
          iVar6 = (uint)pbVar1[3] - (uint)bVar4;
          if (0 < iVar6) {
            lVar19 = param_2 + (ulong)bVar4 * 0x1000;
            iVar27 = 0;
            lVar22 = param_1 + (ulong)*(byte *)(lVar22 + 0x7802e) * 0x20;
            pauVar2 = (undefined1 (*) [16])(lVar22 + 0x3cbd38);
            auVar17 = *pauVar2;
            auVar15 = *pauVar2;
            auVar13 = *pauVar2;
            auVar11 = *pauVar2;
            auVar9 = *pauVar2;
            auVar7 = *pauVar2;
            pauVar2 = (undefined1 (*) [16])(lVar22 + 0x3cbd48);
            auVar18 = *pauVar2;
            auVar16 = *pauVar2;
            auVar14 = *pauVar2;
            auVar12 = *pauVar2;
            auVar10 = *pauVar2;
            auVar8 = *pauVar2;
            lVar22 = lVar25;
            do {
              lVar23 = 0;
              lVar22 = lVar22 + -0x800;
              do {
                uVar91 = *(undefined8 *)(lVar22 + 0x808);
                uVar82 = *(undefined8 *)(lVar22 + 0x800);
                puVar20 = (undefined1 *)(lVar19 + lVar23);
                lVar23 = lVar23 + 0x40;
                uVar87 = *(ulong *)(lVar22 + 0x818);
                uVar28 = *(ulong *)(lVar22 + 0x810);
                lVar22 = lVar22 + 0x20;
                uVar84 = a64_TBL(ZEXT816(0),auVar7,auVar8,
                                 CONCAT17((char)((ulong)uVar91 >> 0x30),
                                          CONCAT16((char)((ulong)uVar91 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar91 >> 0x10),
                                                            CONCAT14((char)uVar91,
                                                                     CONCAT13((char)((ulong)uVar82
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar82 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar82 >> 0x10),
                                                           (char)uVar82))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar86 = a64_TBL(ZEXT816(0),auVar9,auVar10,
                                 CONCAT17((char)((ulong)uVar91 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar91 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar91 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar91 >> 5),
                                                                     CONCAT13((char)((ulong)uVar82
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar82 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar82 >> 0x10) >>
                                                                 5),(char)((ushort)uVar82 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar88 = (ushort)(uVar87 >> 0x10);
                uVar89 = (ushort)(uVar87 >> 0x20);
                uVar85 = CONCAT24(uVar89 >> 10,CONCAT22(uVar88 >> 10,(short)(uVar87 >> 10))) &
                         0xffffffff003f;
                uVar82 = a64_TBL(ZEXT816(0),auVar11,auVar12,
                                 CONCAT17((byte)((ulong)uVar91 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar91 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar91 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar91 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar82
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar82 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar82 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar82 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar31 = CONCAT22((ushort)(uVar28 >> 0x10) >> 5,(short)(uVar28 >> 5)) & 0xffff07ff;
                *puVar20 = (char)uVar84;
                puVar20[1] = (char)uVar86;
                puVar20[2] = (char)uVar82;
                puVar20[3] = 0xff;
                uVar29 = (undefined1)((ulong)uVar84 >> 8);
                puVar20[4] = uVar29;
                uVar37 = (undefined1)((ulong)uVar86 >> 8);
                puVar20[5] = uVar37;
                uVar44 = (undefined1)((ulong)uVar82 >> 8);
                puVar20[6] = uVar44;
                puVar20[7] = 0xff;
                uVar30 = (undefined1)((ulong)uVar84 >> 0x10);
                puVar20[8] = uVar30;
                uVar38 = (undefined1)((ulong)uVar86 >> 0x10);
                puVar20[9] = uVar38;
                uVar45 = (undefined1)((ulong)uVar82 >> 0x10);
                puVar20[10] = uVar45;
                puVar20[0xb] = 0xff;
                uVar32 = (undefined1)((ulong)uVar84 >> 0x18);
                puVar20[0xc] = uVar32;
                uVar39 = (undefined1)((ulong)uVar86 >> 0x18);
                puVar20[0xd] = uVar39;
                uVar46 = (undefined1)((ulong)uVar82 >> 0x18);
                puVar20[0xe] = uVar46;
                puVar20[0xf] = 0xff;
                uVar33 = (undefined1)((ulong)uVar84 >> 0x20);
                puVar20[0x10] = uVar33;
                uVar40 = (undefined1)((ulong)uVar86 >> 0x20);
                puVar20[0x11] = uVar40;
                uVar47 = (undefined1)((ulong)uVar82 >> 0x20);
                puVar20[0x12] = uVar47;
                puVar20[0x13] = 0xff;
                uVar34 = (undefined1)((ulong)uVar84 >> 0x28);
                puVar20[0x14] = uVar34;
                uVar41 = (undefined1)((ulong)uVar86 >> 0x28);
                puVar20[0x15] = uVar41;
                uVar48 = (undefined1)((ulong)uVar82 >> 0x28);
                puVar20[0x16] = uVar48;
                puVar20[0x17] = 0xff;
                uVar35 = (undefined1)((ulong)uVar84 >> 0x30);
                puVar20[0x18] = uVar35;
                uVar42 = (undefined1)((ulong)uVar86 >> 0x30);
                puVar20[0x19] = uVar42;
                uVar49 = (undefined1)((ulong)uVar82 >> 0x30);
                puVar20[0x1a] = uVar49;
                puVar20[0x1b] = 0xff;
                uVar36 = (undefined1)((ulong)uVar84 >> 0x38);
                puVar20[0x1c] = uVar36;
                uVar43 = (undefined1)((ulong)uVar86 >> 0x38);
                puVar20[0x1d] = uVar43;
                uVar50 = (undefined1)((ulong)uVar82 >> 0x38);
                puVar20[0x1e] = uVar50;
                puVar20[0x1f] = 0xff;
                uVar91 = a64_TBL(ZEXT816(0),auVar13,auVar14,
                                 CONCAT17((char)(uVar87 >> 0x30),
                                          CONCAT16((char)(uVar87 >> 0x20),
                                                   CONCAT15((char)(uVar87 >> 0x10),
                                                            CONCAT14((char)uVar87,
                                                                     CONCAT13((char)(uVar28 >> 0x30)
                                                                              ,CONCAT12((char)(
                                                  uVar28 >> 0x20),
                                                  CONCAT11((char)(uVar28 >> 0x10),(char)uVar28))))))
                                         ) & 0x1f1f1f1f1f1f1f1f);
                uVar90 = a64_TBL(ZEXT816(0),auVar15,auVar16,
                                 CONCAT17((char)(uVar87 >> 0x35),
                                          CONCAT16((char)(uVar89 >> 5),
                                                   CONCAT15((char)(uVar88 >> 5),
                                                            CONCAT14((char)((ushort)uVar87 >> 5),
                                                                     CONCAT13((char)(uVar28 >> 0x35)
                                                                              ,CONCAT12((char)((
                                                  ushort)(uVar28 >> 0x20) >> 5),
                                                  CONCAT11((char)(uVar31 >> 0x10),(char)uVar31))))))
                                         ) & 0x1f1f1f1f1f1f1f1f);
                uVar92 = a64_TBL(ZEXT816(0),auVar17,auVar18,
                                 CONCAT17((byte)(uVar87 >> 0x3a),
                                          CONCAT16((char)(uVar85 >> 0x20),
                                                   CONCAT15((char)(uVar85 >> 0x10),
                                                            CONCAT14((char)uVar85,
                                                                     CONCAT13((byte)(uVar28 >> 0x3a)
                                                                              ,CONCAT12((byte)(
                                                  uVar28 >> 0x28) >> 2,
                                                  CONCAT11((byte)(uVar28 >> 0x18) >> 2,
                                                           (char)(uVar28 >> 10)))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                puVar20[0x800] = (char)uVar84;
                puVar20[0x801] = (char)uVar86;
                puVar20[0x802] = (char)uVar82;
                puVar20[0x803] = 0xff;
                puVar20[0x804] = uVar29;
                puVar20[0x805] = uVar37;
                puVar20[0x806] = uVar44;
                puVar20[0x807] = 0xff;
                puVar20[0x808] = uVar30;
                puVar20[0x809] = uVar38;
                puVar20[0x80a] = uVar45;
                puVar20[0x80b] = 0xff;
                puVar20[0x80c] = uVar32;
                puVar20[0x80d] = uVar39;
                puVar20[0x80e] = uVar46;
                puVar20[0x80f] = 0xff;
                puVar20[0x810] = uVar33;
                puVar20[0x811] = uVar40;
                puVar20[0x812] = uVar47;
                puVar20[0x813] = 0xff;
                puVar20[0x814] = uVar34;
                puVar20[0x815] = uVar41;
                puVar20[0x816] = uVar48;
                puVar20[0x817] = 0xff;
                puVar20[0x818] = uVar35;
                puVar20[0x819] = uVar42;
                puVar20[0x81a] = uVar49;
                puVar20[0x81b] = 0xff;
                puVar20[0x81c] = uVar36;
                puVar20[0x81d] = uVar43;
                puVar20[0x81e] = uVar50;
                puVar20[0x81f] = 0xff;
                puVar20[0x820] = (char)uVar91;
                puVar20[0x821] = (char)uVar90;
                puVar20[0x822] = (char)uVar92;
                puVar20[0x823] = 0xff;
                uVar29 = (undefined1)((ulong)uVar91 >> 8);
                puVar20[0x824] = uVar29;
                uVar37 = (undefined1)((ulong)uVar90 >> 8);
                puVar20[0x825] = uVar37;
                uVar44 = (undefined1)((ulong)uVar92 >> 8);
                puVar20[0x826] = uVar44;
                puVar20[0x827] = 0xff;
                uVar30 = (undefined1)((ulong)uVar91 >> 0x10);
                puVar20[0x828] = uVar30;
                uVar38 = (undefined1)((ulong)uVar90 >> 0x10);
                puVar20[0x829] = uVar38;
                uVar45 = (undefined1)((ulong)uVar92 >> 0x10);
                puVar20[0x82a] = uVar45;
                puVar20[0x82b] = 0xff;
                uVar32 = (undefined1)((ulong)uVar91 >> 0x18);
                puVar20[0x82c] = uVar32;
                uVar39 = (undefined1)((ulong)uVar90 >> 0x18);
                puVar20[0x82d] = uVar39;
                uVar46 = (undefined1)((ulong)uVar92 >> 0x18);
                puVar20[0x82e] = uVar46;
                puVar20[0x82f] = 0xff;
                uVar33 = (undefined1)((ulong)uVar91 >> 0x20);
                puVar20[0x830] = uVar33;
                uVar40 = (undefined1)((ulong)uVar90 >> 0x20);
                puVar20[0x831] = uVar40;
                uVar47 = (undefined1)((ulong)uVar92 >> 0x20);
                puVar20[0x832] = uVar47;
                puVar20[0x833] = 0xff;
                uVar34 = (undefined1)((ulong)uVar91 >> 0x28);
                puVar20[0x834] = uVar34;
                uVar41 = (undefined1)((ulong)uVar90 >> 0x28);
                puVar20[0x835] = uVar41;
                uVar48 = (undefined1)((ulong)uVar92 >> 0x28);
                puVar20[0x836] = uVar48;
                puVar20[0x837] = 0xff;
                uVar35 = (undefined1)((ulong)uVar91 >> 0x30);
                puVar20[0x838] = uVar35;
                uVar42 = (undefined1)((ulong)uVar90 >> 0x30);
                puVar20[0x839] = uVar42;
                uVar49 = (undefined1)((ulong)uVar92 >> 0x30);
                puVar20[0x83a] = uVar49;
                puVar20[0x83b] = 0xff;
                uVar36 = (undefined1)((ulong)uVar91 >> 0x38);
                puVar20[0x83c] = uVar36;
                uVar43 = (undefined1)((ulong)uVar90 >> 0x38);
                puVar20[0x83d] = uVar43;
                uVar50 = (undefined1)((ulong)uVar92 >> 0x38);
                puVar20[0x83e] = uVar50;
                puVar20[0x83f] = 0xff;
                puVar20[0x20] = (char)uVar91;
                puVar20[0x21] = (char)uVar90;
                puVar20[0x22] = (char)uVar92;
                puVar20[0x23] = 0xff;
                puVar20[0x24] = uVar29;
                puVar20[0x25] = uVar37;
                puVar20[0x26] = uVar44;
                puVar20[0x27] = 0xff;
                puVar20[0x28] = uVar30;
                puVar20[0x29] = uVar38;
                puVar20[0x2a] = uVar45;
                puVar20[0x2b] = 0xff;
                puVar20[0x2c] = uVar32;
                puVar20[0x2d] = uVar39;
                puVar20[0x2e] = uVar46;
                puVar20[0x2f] = 0xff;
                puVar20[0x30] = uVar33;
                puVar20[0x31] = uVar40;
                puVar20[0x32] = uVar47;
                puVar20[0x33] = 0xff;
                puVar20[0x34] = uVar34;
                puVar20[0x35] = uVar41;
                puVar20[0x36] = uVar48;
                puVar20[0x37] = 0xff;
                puVar20[0x38] = uVar35;
                puVar20[0x39] = uVar42;
                puVar20[0x3a] = uVar49;
                puVar20[0x3b] = 0xff;
                puVar20[0x3c] = uVar36;
                puVar20[0x3d] = uVar43;
                puVar20[0x3e] = uVar50;
                puVar20[0x3f] = 0xff;
              } while ((int)lVar23 != 0x800);
              iVar27 = iVar27 + 1;
              lVar19 = lVar19 + lVar23 + 0x800;
            } while (iVar27 != iVar6);
            uVar28 = (ulong)*(byte *)(lVar24 + 0x7802b);
          }
          uVar26 = uVar26 + 1;
          lVar25 = lVar25 + (long)(iVar6 * -0x200) * 2;
          if (uVar28 <= uVar26) {
            return;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar28);
    }
  }
  else {
    if ((*(char *)(lVar24 + 0x78029) != '\0') &&
       (uVar28 = (ulong)*(byte *)(lVar24 + 0x7802b), *(byte *)(lVar24 + 0x7802b) != 0)) {
      uVar26 = 0;
      lVar22 = lVar25 + (ulong)*(byte *)(lVar24 + 0x7802c) * 0x200;
      do {
        while( true ) {
          lVar19 = lVar24 + uVar26 * 3;
          if (*(char *)(lVar19 + 0x7802d) != '\0') break;
          pbVar1 = (byte *)(lVar24 + 0x7802c + uVar26 * 3);
          bVar4 = *pbVar1;
          iVar6 = (uint)pbVar1[3] - (uint)bVar4;
          if (0 < iVar6) {
            puVar20 = (undefined1 *)(param_2 + (ulong)bVar4 * 0x1000);
            iVar27 = 0;
            lVar19 = param_1 + (ulong)*(byte *)(lVar19 + 0x7802e) * 0x20;
            pauVar2 = (undefined1 (*) [16])(lVar19 + 0x3cbd38);
            auVar17 = *pauVar2;
            auVar15 = *pauVar2;
            auVar13 = *pauVar2;
            auVar11 = *pauVar2;
            auVar9 = *pauVar2;
            auVar7 = *pauVar2;
            pauVar2 = (undefined1 (*) [16])(lVar19 + 0x3cbd48);
            auVar18 = *pauVar2;
            auVar16 = *pauVar2;
            auVar14 = *pauVar2;
            auVar12 = *pauVar2;
            auVar10 = *pauVar2;
            auVar8 = *pauVar2;
            lVar19 = lVar22;
            do {
              lVar23 = 0;
              puVar21 = puVar20;
              do {
                puVar3 = (undefined8 *)(lVar19 + lVar23);
                lVar23 = lVar23 + 0x20;
                uVar86 = puVar3[1];
                uVar84 = *puVar3;
                uVar91 = puVar3[3];
                uVar82 = puVar3[2];
                uVar93 = a64_TBL(ZEXT816(0),auVar7,auVar8,
                                 CONCAT17((char)((ulong)uVar91 >> 0x30),
                                          CONCAT16((char)((ulong)uVar91 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar91 >> 0x10),
                                                            CONCAT14((char)uVar91,
                                                                     CONCAT13((char)((ulong)uVar82
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar82 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar82 >> 0x10),
                                                           (char)uVar82))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar90 = a64_TBL(ZEXT816(0),auVar9,auVar10,
                                 CONCAT17((char)((ulong)uVar86 >> 0x30),
                                          CONCAT16((char)((ulong)uVar86 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar86 >> 0x10),
                                                            CONCAT14((char)uVar86,
                                                                     CONCAT13((char)((ulong)uVar84
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar84 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar84 >> 0x10),
                                                           (char)uVar84))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar29 = (undefined1)((ulong)uVar93 >> 8);
                uVar36 = (undefined1)((ulong)uVar93 >> 0x10);
                uVar42 = (undefined1)((ulong)uVar93 >> 0x18);
                uVar92 = a64_TBL(ZEXT816(0),auVar11,auVar12,
                                 CONCAT17((char)((ulong)uVar86 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar86 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar86 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar86 >> 5),
                                                                     CONCAT13((char)((ulong)uVar84
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar84 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar84 >> 0x10) >>
                                                                 5),(char)((ushort)uVar84 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar30 = (undefined1)((ulong)uVar90 >> 8);
                uVar75 = CONCAT12(uVar30,(short)uVar90) & 0xff00ff;
                uVar37 = (undefined1)((ulong)uVar90 >> 0x10);
                uVar43 = (undefined1)((ulong)uVar90 >> 0x18);
                uVar94 = a64_TBL(ZEXT816(0),auVar13,auVar14,
                                 CONCAT17((char)((ulong)uVar91 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar91 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar91 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar91 >> 5),
                                                                     CONCAT13((char)((ulong)uVar82
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar82 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar82 >> 0x10) >>
                                                                 5),(char)((ushort)uVar82 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar32 = (undefined1)((ulong)uVar92 >> 8);
                uVar78 = CONCAT12(uVar32,(short)uVar92) & 0xff00ff;
                uVar38 = (undefined1)((ulong)uVar92 >> 0x10);
                uVar44 = (undefined1)((ulong)uVar92 >> 0x18);
                uVar84 = a64_TBL(ZEXT816(0),auVar15,auVar16,
                                 CONCAT17((byte)((ulong)uVar86 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar86 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar86 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar86 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar84
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar84 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar84 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar84 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar33 = (undefined1)((ulong)uVar94 >> 8);
                uVar96 = CONCAT12(uVar33,(short)uVar94) & 0xff00ff;
                uVar39 = (undefined1)((ulong)uVar94 >> 0x10);
                uVar45 = (undefined1)((ulong)uVar94 >> 0x18);
                uVar86 = a64_TBL(ZEXT816(0),auVar17,auVar18,
                                 CONCAT17((byte)((ulong)uVar91 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar91 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar91 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar91 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar82
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar82 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar82 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar82 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar34 = (undefined1)((ulong)uVar86 >> 8);
                uVar40 = (undefined1)((ulong)uVar86 >> 0x10);
                uVar46 = (undefined1)((ulong)uVar86 >> 0x18);
                uVar35 = (undefined1)((ulong)uVar84 >> 8);
                uVar81 = CONCAT12(uVar35,(short)uVar84) & 0xff00ff;
                uVar41 = (undefined1)((ulong)uVar84 >> 0x10);
                uVar47 = (undefined1)((ulong)uVar84 >> 0x18);
                *puVar21 = (char)uVar75;
                puVar21[1] = (char)uVar78;
                puVar21[2] = (char)uVar81;
                puVar21[3] = 0xff;
                puVar21[4] = (char)uVar90;
                puVar21[5] = (char)uVar92;
                puVar21[6] = (char)uVar84;
                puVar21[7] = 0xff;
                puVar21[8] = (char)(uVar75 >> 0x10);
                puVar21[9] = (char)(uVar78 >> 0x10);
                puVar21[10] = (char)(uVar81 >> 0x10);
                puVar21[0xb] = 0xff;
                puVar21[0xc] = uVar30;
                puVar21[0xd] = uVar32;
                puVar21[0xe] = uVar35;
                puVar21[0xf] = 0xff;
                puVar21[0x10] = uVar37;
                puVar21[0x11] = uVar38;
                puVar21[0x12] = uVar41;
                puVar21[0x13] = 0xff;
                puVar21[0x14] = uVar37;
                puVar21[0x15] = uVar38;
                puVar21[0x16] = uVar41;
                puVar21[0x17] = 0xff;
                puVar21[0x18] = uVar43;
                puVar21[0x19] = uVar44;
                puVar21[0x1a] = uVar47;
                puVar21[0x1b] = 0xff;
                puVar21[0x1c] = uVar43;
                puVar21[0x1d] = uVar44;
                puVar21[0x1e] = uVar47;
                puVar21[0x1f] = 0xff;
                puVar21[0x40] = (char)uVar93;
                puVar21[0x41] = (char)uVar96;
                puVar21[0x42] = (char)uVar86;
                puVar21[0x43] = 0xff;
                puVar21[0x44] = (char)uVar93;
                puVar21[0x45] = (char)uVar94;
                puVar21[0x46] = (char)uVar86;
                puVar21[0x47] = 0xff;
                puVar21[0x48] = uVar29;
                puVar21[0x49] = (char)(uVar96 >> 0x10);
                puVar21[0x4a] = uVar34;
                puVar21[0x4b] = 0xff;
                puVar21[0x4c] = uVar29;
                puVar21[0x4d] = uVar33;
                puVar21[0x4e] = uVar34;
                puVar21[0x4f] = 0xff;
                puVar21[0x50] = uVar36;
                puVar21[0x51] = uVar39;
                puVar21[0x52] = uVar40;
                puVar21[0x53] = 0xff;
                puVar21[0x54] = uVar36;
                puVar21[0x55] = uVar39;
                puVar21[0x56] = uVar40;
                puVar21[0x57] = 0xff;
                puVar21[0x58] = uVar42;
                puVar21[0x59] = uVar45;
                puVar21[0x5a] = uVar46;
                puVar21[0x5b] = 0xff;
                puVar21[0x5c] = uVar42;
                puVar21[0x5d] = uVar45;
                puVar21[0x5e] = uVar46;
                puVar21[0x5f] = 0xff;
                uVar29 = (undefined1)((ulong)uVar93 >> 0x20);
                uVar33 = (undefined1)((ulong)uVar93 >> 0x28);
                uVar36 = (undefined1)((ulong)uVar93 >> 0x30);
                uVar39 = (undefined1)((ulong)uVar93 >> 0x38);
                uVar30 = (undefined1)((ulong)uVar94 >> 0x20);
                uVar34 = (undefined1)((ulong)uVar94 >> 0x28);
                uVar37 = (undefined1)((ulong)uVar94 >> 0x30);
                uVar40 = (undefined1)((ulong)uVar94 >> 0x38);
                uVar32 = (undefined1)((ulong)uVar86 >> 0x20);
                uVar35 = (undefined1)((ulong)uVar86 >> 0x28);
                uVar38 = (undefined1)((ulong)uVar86 >> 0x30);
                uVar41 = (undefined1)((ulong)uVar86 >> 0x38);
                puVar20 = puVar21 + 0x80;
                puVar21[0x60] = uVar29;
                puVar21[0x61] = uVar30;
                puVar21[0x62] = uVar32;
                puVar21[99] = 0xff;
                puVar21[100] = uVar29;
                puVar21[0x65] = uVar30;
                puVar21[0x66] = uVar32;
                puVar21[0x67] = 0xff;
                puVar21[0x68] = uVar33;
                puVar21[0x69] = uVar34;
                puVar21[0x6a] = uVar35;
                puVar21[0x6b] = 0xff;
                puVar21[0x6c] = uVar33;
                puVar21[0x6d] = uVar34;
                puVar21[0x6e] = uVar35;
                puVar21[0x6f] = 0xff;
                puVar21[0x70] = uVar36;
                puVar21[0x71] = uVar37;
                puVar21[0x72] = uVar38;
                puVar21[0x73] = 0xff;
                puVar21[0x74] = uVar36;
                puVar21[0x75] = uVar37;
                puVar21[0x76] = uVar38;
                puVar21[0x77] = 0xff;
                puVar21[0x78] = uVar39;
                puVar21[0x79] = uVar40;
                puVar21[0x7a] = uVar41;
                puVar21[0x7b] = 0xff;
                puVar21[0x7c] = uVar39;
                puVar21[0x7d] = uVar40;
                puVar21[0x7e] = uVar41;
                puVar21[0x7f] = 0xff;
                uVar29 = (undefined1)((ulong)uVar90 >> 0x20);
                uVar33 = (undefined1)((ulong)uVar90 >> 0x28);
                uVar36 = (undefined1)((ulong)uVar90 >> 0x30);
                uVar39 = (undefined1)((ulong)uVar90 >> 0x38);
                uVar30 = (undefined1)((ulong)uVar92 >> 0x20);
                uVar34 = (undefined1)((ulong)uVar92 >> 0x28);
                uVar37 = (undefined1)((ulong)uVar92 >> 0x30);
                uVar40 = (undefined1)((ulong)uVar92 >> 0x38);
                uVar32 = (undefined1)((ulong)uVar84 >> 0x20);
                uVar35 = (undefined1)((ulong)uVar84 >> 0x28);
                uVar38 = (undefined1)((ulong)uVar84 >> 0x30);
                uVar41 = (undefined1)((ulong)uVar84 >> 0x38);
                puVar21[0x20] = uVar29;
                puVar21[0x21] = uVar30;
                puVar21[0x22] = uVar32;
                puVar21[0x23] = 0xff;
                puVar21[0x24] = uVar29;
                puVar21[0x25] = uVar30;
                puVar21[0x26] = uVar32;
                puVar21[0x27] = 0xff;
                puVar21[0x28] = uVar33;
                puVar21[0x29] = uVar34;
                puVar21[0x2a] = uVar35;
                puVar21[0x2b] = 0xff;
                puVar21[0x2c] = uVar33;
                puVar21[0x2d] = uVar34;
                puVar21[0x2e] = uVar35;
                puVar21[0x2f] = 0xff;
                puVar21[0x30] = uVar36;
                puVar21[0x31] = uVar37;
                puVar21[0x32] = uVar38;
                puVar21[0x33] = 0xff;
                puVar21[0x34] = uVar36;
                puVar21[0x35] = uVar37;
                puVar21[0x36] = uVar38;
                puVar21[0x37] = 0xff;
                puVar21[0x38] = uVar39;
                puVar21[0x39] = uVar40;
                puVar21[0x3a] = uVar41;
                puVar21[0x3b] = 0xff;
                puVar21[0x3c] = uVar39;
                puVar21[0x3d] = uVar40;
                puVar21[0x3e] = uVar41;
                puVar21[0x3f] = 0xff;
                puVar21 = puVar20;
              } while ((int)lVar23 != 0x200);
              iVar27 = iVar27 + 1;
              lVar19 = lVar19 + lVar23;
            } while (iVar27 != iVar6 * 2);
            uVar28 = (ulong)*(byte *)(lVar24 + 0x7802b);
          }
          uVar26 = uVar26 + 1;
          lVar22 = lVar22 + (long)(iVar6 * 0x200) * 2;
          if (uVar28 <= uVar26) goto LAB_03f8944c;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar28);
    }
LAB_03f8944c:
    if ((*(char *)(lVar24 + 0x7802a) != '\0') &&
       (uVar28 = (ulong)*(byte *)(lVar24 + 0x7802b), *(byte *)(lVar24 + 0x7802b) != 0)) {
      uVar26 = 0;
      lVar25 = lVar25 + ((ulong)*(byte *)(lVar24 + 0x7802c) * -0x200 + 0x3be00) * 2;
      do {
        lVar22 = lVar24 + uVar26 * 3;
        if (*(char *)(lVar22 + 0x7802d) == '\x01') {
          pbVar1 = (byte *)(lVar24 + 0x7802c + uVar26 * 3);
          bVar4 = *pbVar1;
          iVar6 = (uint)pbVar1[3] - (uint)bVar4;
          if (0 < iVar6) {
            lVar19 = param_2 + (ulong)bVar4 * 0x1000;
            iVar27 = 0;
            lVar22 = param_1 + (ulong)*(byte *)(lVar22 + 0x7802e) * 0x20;
            pauVar2 = (undefined1 (*) [16])(lVar22 + 0x3cbd38);
            auVar17 = *pauVar2;
            auVar15 = *pauVar2;
            auVar13 = *pauVar2;
            auVar11 = *pauVar2;
            auVar9 = *pauVar2;
            auVar7 = *pauVar2;
            pauVar2 = (undefined1 (*) [16])(lVar22 + 0x3cbd48);
            auVar18 = *pauVar2;
            auVar16 = *pauVar2;
            auVar14 = *pauVar2;
            auVar12 = *pauVar2;
            auVar10 = *pauVar2;
            auVar8 = *pauVar2;
            lVar22 = lVar25;
            do {
              lVar23 = 0;
              lVar22 = lVar22 + -0x800;
              do {
                uVar91 = *(undefined8 *)(lVar22 + 0x808);
                uVar82 = *(undefined8 *)(lVar22 + 0x800);
                puVar20 = (undefined1 *)(lVar19 + lVar23);
                lVar23 = lVar23 + 0x40;
                uVar92 = *(undefined8 *)(lVar22 + 0x818);
                uVar90 = *(undefined8 *)(lVar22 + 0x810);
                lVar22 = lVar22 + 0x20;
                uVar84 = a64_TBL(ZEXT816(0),auVar7,auVar8,
                                 CONCAT17((char)((ulong)uVar91 >> 0x30),
                                          CONCAT16((char)((ulong)uVar91 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar91 >> 0x10),
                                                            CONCAT14((char)uVar91,
                                                                     CONCAT13((char)((ulong)uVar82
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar82 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar82 >> 0x10),
                                                           (char)uVar82))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar86 = a64_TBL(ZEXT816(0),auVar9,auVar10,
                                 CONCAT17((char)((ulong)uVar91 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar91 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar91 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar91 >> 5),
                                                                     CONCAT13((char)((ulong)uVar82
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar82 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar82 >> 0x10) >>
                                                                 5),(char)((ushort)uVar82 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar82 = a64_TBL(ZEXT816(0),auVar11,auVar12,
                                 CONCAT17((byte)((ulong)uVar91 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar91 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar91 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar91 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar82
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar82 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar82 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar82 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                uVar91 = a64_TBL(ZEXT816(0),auVar13,auVar14,
                                 CONCAT17((char)((ulong)uVar92 >> 0x30),
                                          CONCAT16((char)((ulong)uVar92 >> 0x20),
                                                   CONCAT15((char)((ulong)uVar92 >> 0x10),
                                                            CONCAT14((char)uVar92,
                                                                     CONCAT13((char)((ulong)uVar90
                                                                                    >> 0x30),
                                                                              CONCAT12((char)((ulong
                                                  )uVar90 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar90 >> 0x10),
                                                           (char)uVar90))))))) & 0x1f1f1f1f1f1f1f1f)
                ;
                uVar93 = a64_TBL(ZEXT816(0),auVar15,auVar16,
                                 CONCAT17((char)((ulong)uVar92 >> 0x35),
                                          CONCAT16((char)((ushort)((ulong)uVar92 >> 0x20) >> 5),
                                                   CONCAT15((char)((ushort)((ulong)uVar92 >> 0x10)
                                                                  >> 5),
                                                            CONCAT14((char)((ushort)uVar92 >> 5),
                                                                     CONCAT13((char)((ulong)uVar90
                                                                                    >> 0x35),
                                                                              CONCAT12((char)((
                                                  ushort)((ulong)uVar90 >> 0x20) >> 5),
                                                  CONCAT11((char)((ushort)((ulong)uVar90 >> 0x10) >>
                                                                 5),(char)((ushort)uVar90 >> 5))))))
                                                  )) & 0x1f1f1f1f1f1f1f1f);
                uVar90 = a64_TBL(ZEXT816(0),auVar17,auVar18,
                                 CONCAT17((byte)((ulong)uVar92 >> 0x3a),
                                          CONCAT16((byte)((ulong)uVar92 >> 0x28) >> 2,
                                                   CONCAT15((byte)((ulong)uVar92 >> 0x18) >> 2,
                                                            CONCAT14((byte)((ulong)uVar92 >> 8) >> 2
                                                                     ,CONCAT13((byte)((ulong)uVar90
                                                                                     >> 0x3a),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar90 >> 0x28) >> 2,
                                                  CONCAT11((byte)((ulong)uVar90 >> 0x18) >> 2,
                                                           (byte)((ulong)uVar90 >> 8) >> 2))))))) &
                                 0x1f1f1f1f1f1f1f1f);
                *puVar20 = (char)uVar84;
                puVar20[1] = (char)uVar86;
                puVar20[2] = (char)uVar82;
                puVar20[3] = 0xff;
                puVar20[4] = (char)((ulong)uVar84 >> 8);
                puVar20[5] = (char)((ulong)uVar86 >> 8);
                puVar20[6] = (char)((ulong)uVar82 >> 8);
                puVar20[7] = 0xff;
                puVar20[8] = (char)((ulong)uVar84 >> 0x10);
                puVar20[9] = (char)((ulong)uVar86 >> 0x10);
                puVar20[10] = (char)((ulong)uVar82 >> 0x10);
                puVar20[0xb] = 0xff;
                puVar20[0xc] = (char)((ulong)uVar84 >> 0x18);
                puVar20[0xd] = (char)((ulong)uVar86 >> 0x18);
                puVar20[0xe] = (char)((ulong)uVar82 >> 0x18);
                puVar20[0xf] = 0xff;
                puVar20[0x10] = (char)((ulong)uVar84 >> 0x20);
                puVar20[0x11] = (char)((ulong)uVar86 >> 0x20);
                puVar20[0x12] = (char)((ulong)uVar82 >> 0x20);
                puVar20[0x13] = 0xff;
                puVar20[0x14] = (char)((ulong)uVar84 >> 0x28);
                puVar20[0x15] = (char)((ulong)uVar86 >> 0x28);
                puVar20[0x16] = (char)((ulong)uVar82 >> 0x28);
                puVar20[0x17] = 0xff;
                puVar20[0x18] = (char)((ulong)uVar84 >> 0x30);
                puVar20[0x19] = (char)((ulong)uVar86 >> 0x30);
                puVar20[0x1a] = (char)((ulong)uVar82 >> 0x30);
                puVar20[0x1b] = 0xff;
                puVar20[0x1c] = (char)((ulong)uVar84 >> 0x38);
                puVar20[0x1d] = (char)((ulong)uVar86 >> 0x38);
                puVar20[0x1e] = (char)((ulong)uVar82 >> 0x38);
                puVar20[0x1f] = 0xff;
                puVar20[0x20] = (char)uVar91;
                puVar20[0x21] = (char)uVar93;
                puVar20[0x22] = (char)uVar90;
                puVar20[0x23] = 0xff;
                puVar20[0x24] = (char)((ulong)uVar91 >> 8);
                puVar20[0x25] = (char)((ulong)uVar93 >> 8);
                puVar20[0x26] = (char)((ulong)uVar90 >> 8);
                puVar20[0x27] = 0xff;
                puVar20[0x28] = (char)((ulong)uVar91 >> 0x10);
                puVar20[0x29] = (char)((ulong)uVar93 >> 0x10);
                puVar20[0x2a] = (char)((ulong)uVar90 >> 0x10);
                puVar20[0x2b] = 0xff;
                puVar20[0x2c] = (char)((ulong)uVar91 >> 0x18);
                puVar20[0x2d] = (char)((ulong)uVar93 >> 0x18);
                puVar20[0x2e] = (char)((ulong)uVar90 >> 0x18);
                puVar20[0x2f] = 0xff;
                puVar20[0x30] = (char)((ulong)uVar91 >> 0x20);
                puVar20[0x31] = (char)((ulong)uVar93 >> 0x20);
                puVar20[0x32] = (char)((ulong)uVar90 >> 0x20);
                puVar20[0x33] = 0xff;
                puVar20[0x34] = (char)((ulong)uVar91 >> 0x28);
                puVar20[0x35] = (char)((ulong)uVar93 >> 0x28);
                puVar20[0x36] = (char)((ulong)uVar90 >> 0x28);
                puVar20[0x37] = 0xff;
                puVar20[0x38] = (char)((ulong)uVar91 >> 0x30);
                puVar20[0x39] = (char)((ulong)uVar93 >> 0x30);
                puVar20[0x3a] = (char)((ulong)uVar90 >> 0x30);
                puVar20[0x3b] = 0xff;
                puVar20[0x3c] = (char)((ulong)uVar91 >> 0x38);
                puVar20[0x3d] = (char)((ulong)uVar93 >> 0x38);
                puVar20[0x3e] = (char)((ulong)uVar90 >> 0x38);
                puVar20[0x3f] = 0xff;
              } while ((int)lVar23 != 0x800);
              iVar27 = iVar27 + 1;
              lVar19 = lVar19 + lVar23;
            } while (iVar27 != iVar6 * 2);
            uVar28 = (ulong)*(byte *)(lVar24 + 0x7802b);
          }
          lVar25 = lVar25 + (long)(iVar6 * -0x400) * 2;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar28);
    }
  }
  return;
}

