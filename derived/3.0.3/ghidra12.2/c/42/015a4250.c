
void FUN_015a4250(long param_1,long param_2,uint param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  undefined1 uVar50;
  undefined1 uVar49;
  undefined1 uVar48;
  undefined1 uVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  uint uVar80;
  uint uVar81;
  int iVar82;
  bool bVar83;
  int iVar84;
  ulong uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  int iVar90;
  int iVar91;
  uint uVar92;
  long lVar93;
  int iVar94;
  int iVar95;
  uint uVar96;
  int iVar97;
  uint uVar98;
  uint uVar99;
  undefined1 *puVar100;
  uint uVar101;
  ulong uVar102;
  long lVar103;
  long lVar104;
  bool bVar105;
  uint uVar106;
  ulong uVar107;
  uint uVar108;
  long lVar109;
  long lVar110;
  int iVar111;
  uint uVar112;
  float fVar113;
  float fVar114;
  long local_b0;
  int local_9c;
  int local_98;
  int local_94;
  int local_78;
  
  uVar80 = param_4 - 1;
  if (0 < (int)param_4) {
    uVar81 = param_3 - 1;
    if (0 < (int)param_3) {
      lVar104 = 0;
      iVar4 = 0;
      iVar23 = param_3 * 4;
      lVar93 = CONCAT44(param_4,param_3) << 0x20;
      iVar24 = param_3 * 0xc;
      iVar25 = param_3 * 0x10;
      iVar26 = param_3 << 3;
      uVar107 = 0;
      iVar82 = iVar23;
      do {
        uVar2 = uVar107 + 1;
        iVar90 = (int)uVar107;
        lVar110 = 0;
        uVar85 = 0;
        uVar92 = (uint)uVar2;
        if (uVar80 <= uVar107) {
          uVar92 = uVar80;
        }
        uVar86 = iVar90 + 2;
        if ((long)(int)(param_4 - 2) <= (long)uVar107) {
          uVar86 = uVar80;
        }
        uVar102 = (uVar107 << 0x20) - 0x200000000 >> 0x20;
        if (uVar107 < 2) {
          uVar102 = 0;
        }
        uVar9 = 0;
        if (uVar107 != 0) {
          uVar9 = (uVar107 << 0x20) - 0x100000000 >> 0x20;
        }
        iVar91 = (int)uVar9 * param_3;
        iVar45 = (int)uVar9 * param_3;
        iVar46 = uVar92 * param_3;
        iVar47 = uVar86 * param_3;
        uVar92 = iVar90 * 4;
        uVar86 = iVar23 * uVar92;
        iVar111 = (uVar92 | 1) * iVar23;
        iVar94 = (uVar92 | 2) * iVar23;
        iVar95 = ((uint)((uVar107 << 0x22) >> 0x20) | 3) * iVar23;
        uVar92 = (uVar92 | 3) * iVar23;
        uVar98 = uVar86 | 2;
        uVar101 = uVar86 | 1;
        lVar103 = lVar93 * uVar9;
        local_b0 = lVar93 * uVar102;
        lVar109 = lVar104;
        do {
          iVar84 = (int)uVar85;
          iVar97 = iVar84 + -2;
          uVar89 = uVar81;
          if (uVar85 < uVar81) {
            uVar89 = iVar84 + 1;
          }
          uVar99 = iVar84 + 2;
          if ((long)(int)(param_3 - 2) <= (long)uVar85) {
            uVar99 = uVar81;
          }
          if (uVar85 < 2) {
            iVar97 = 0;
          }
          iVar54 = 0;
          if (uVar85 != 0) {
            iVar54 = iVar84 + -1;
          }
          uVar10 = *(uint *)(param_2 + (lVar103 >> 0x1e));
          uVar11 = *(uint *)(param_2 + (long)(int)(uVar89 + iVar45) * 4);
          uVar3 = iVar54 + iVar90 * param_3;
          uVar3 = *(uint *)(param_2 +
                           (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
          uVar12 = *(uint *)(param_2 + (lVar109 >> 0x1e));
          uVar13 = *(uint *)(param_2 + (long)(int)(uVar89 + iVar90 * param_3) * 4);
          uVar112 = *(uint *)(param_2 + (long)(int)(uVar99 + iVar90 * param_3) * 4);
          uVar108 = *(uint *)(param_2 + (long)(iVar46 + iVar54) * 4);
          uVar14 = *(uint *)(param_2 + (long)iVar46 * 4 + lVar110);
          uVar15 = *(uint *)(param_2 + (long)(int)(uVar89 + iVar46) * 4);
          uVar87 = *(uint *)(param_2 + (long)(int)(uVar99 + iVar46) * 4);
          uVar96 = *(uint *)(param_2 + (long)iVar47 * 4 + lVar110);
          uVar16 = *(uint *)(param_2 + (long)(int)(uVar89 + iVar47) * 4);
          if (((uVar12 == uVar13) && (uVar14 == uVar15)) ||
             ((uVar12 == uVar14 && (uVar13 == uVar15)))) {
            local_94 = 0;
          }
          else {
            local_94 = 0;
            if ((uVar12 != uVar14) && (uVar12 != uVar13)) {
              uVar88 = uVar12 >> 0x18;
              uVar17 = uVar15 >> 0x18;
              uVar30 = (uVar12 & 0xff) * uVar88 >> 8;
              uVar31 = (uVar12 >> 8 & 0xff) * uVar88 >> 8;
              uVar32 = (uVar12 >> 0x10 & 0xff) * uVar88 >> 8;
              uVar33 = (uVar15 & 0xff) * uVar17 >> 8;
              uVar34 = (uVar15 >> 8 & 0xff) * uVar17 >> 8;
              iVar84 = uVar30 - uVar33;
              uVar106 = (uVar15 >> 0x10 & 0xff) * uVar17 >> 8;
              iVar55 = uVar31 - uVar34;
              uVar35 = uVar13 >> 0x18;
              uVar36 = (uVar13 >> 0x10 & 0xff) * uVar35 >> 8;
              uVar37 = uVar10 >> 0x18;
              iVar56 = ((uVar10 >> 0x10 & 0xff) * uVar37 >> 8) - uVar36;
              uVar38 = (uVar13 & 0xff) * uVar35 >> 8;
              iVar57 = ((uVar10 & 0xff) * uVar37 >> 8) - uVar38;
              uVar39 = (uVar13 >> 8 & 0xff) * uVar35 >> 8;
              iVar58 = ((uVar10 >> 8 & 0xff) * uVar37 >> 8) - uVar39;
              uVar40 = uVar87 >> 0x18;
              iVar59 = uVar38 - ((uVar87 & 0xff) * uVar40 >> 8);
              iVar60 = uVar39 - ((uVar87 >> 8 & 0xff) * uVar40 >> 8);
              iVar61 = uVar36 - ((uVar87 >> 0x10 & 0xff) * uVar40 >> 8);
              uVar87 = uVar14 >> 0x18;
              uVar41 = uVar3 >> 0x18;
              uVar42 = (uVar14 & 0xff) * uVar87 >> 8;
              uVar43 = (uVar14 >> 8 & 0xff) * uVar87 >> 8;
              iVar62 = ((uVar3 & 0xff) * uVar41 >> 8) - uVar42;
              iVar63 = ((uVar3 >> 8 & 0xff) * uVar41 >> 8) - uVar43;
              uVar44 = (uVar14 >> 0x10 & 0xff) * uVar87 >> 8;
              iVar64 = ((uVar3 >> 0x10 & 0xff) * uVar41 >> 8) - uVar44;
              uVar27 = uVar16 >> 0x18;
              iVar65 = uVar42 - ((uVar16 & 0xff) * uVar27 >> 8);
              iVar66 = uVar43 - ((uVar16 >> 8 & 0xff) * uVar27 >> 8);
              iVar67 = uVar44 - ((uVar16 >> 0x10 & 0xff) * uVar27 >> 8);
              iVar68 = uVar39 - uVar43;
              iVar69 = uVar38 - uVar42;
              uVar16 = uVar108 >> 0x18;
              iVar70 = ((uVar108 & 0xff) * uVar16 >> 8) - uVar30;
              iVar71 = ((uVar108 >> 8 & 0xff) * uVar16 >> 8) - uVar31;
              iVar72 = ((uVar108 >> 0x10 & 0xff) * uVar16 >> 8) - uVar32;
              uVar38 = uVar11 >> 0x18;
              iVar73 = uVar30 - ((uVar11 & 0xff) * uVar38 >> 8);
              iVar74 = uVar31 - ((uVar11 >> 8 & 0xff) * uVar38 >> 8);
              iVar75 = uVar32 - ((uVar11 >> 0x10 & 0xff) * uVar38 >> 8);
              uVar30 = uVar96 >> 0x18;
              iVar76 = ((uVar96 & 0xff) * uVar30 >> 8) - uVar33;
              iVar77 = ((uVar96 >> 8 & 0xff) * uVar30 >> 8) - uVar34;
              iVar78 = ((uVar96 >> 0x10 & 0xff) * uVar30 >> 8) - uVar106;
              uVar31 = uVar112 >> 0x18;
              iVar79 = uVar33 - ((uVar112 & 0xff) * uVar31 >> 8);
              iVar52 = uVar34 - ((uVar112 >> 8 & 0xff) * uVar31 >> 8);
              iVar53 = uVar106 - ((uVar112 >> 0x10 & 0xff) * uVar31 >> 8);
              fVar113 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar88 - uVar17) * (uVar88 - uVar17) * 0x1dc0 +
                                          iVar84 * iVar84 * 0x15aa +
                                          (iVar84 * -0x30 + iVar55 * 0x3343) * iVar55 +
                                          (iVar84 * -0x983 + (uVar32 - uVar106) * 0x1054 +
                                          iVar55 * -0xf8e) * (uVar32 - uVar106) >> 0x16) * 4) * 4.0
                        + 0.0 + *(float *)(&DAT_04175bc0 +
                                          (ulong)((uVar37 - uVar35) * (uVar37 - uVar35) * 0x1dc0 +
                                                  iVar57 * iVar57 * 0x15aa +
                                                  (iVar57 * -0x30 + iVar58 * 0x3343) * iVar58 +
                                                  (iVar57 * -0x983 + iVar56 * 0x1054 +
                                                  iVar58 * -0xf8e) * iVar56 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar35 - uVar40) * (uVar35 - uVar40) * 0x1dc0 +
                                          iVar59 * iVar59 * 0x15aa +
                                          (iVar59 * -0x30 + iVar60 * 0x3343) * iVar60 +
                                          (iVar59 * -0x983 + iVar61 * 0x1054 + iVar60 * -0xf8e) *
                                          iVar61 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar41 - uVar87) * (uVar41 - uVar87) * 0x1dc0 +
                                          iVar62 * iVar62 * 0x15aa +
                                          (iVar62 * -0x30 + iVar63 * 0x3343) * iVar63 +
                                          (iVar62 * -0x983 + iVar64 * 0x1054 + iVar63 * -0xf8e) *
                                          iVar64 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar87 - uVar27) * (uVar87 - uVar27) * 0x1dc0 +
                                          iVar65 * iVar65 * 0x15aa +
                                          (iVar65 * -0x30 + iVar66 * 0x3343) * iVar66 +
                                          (iVar65 * -0x983 + iVar67 * 0x1054 + iVar66 * -0xf8e) *
                                          iVar67 >> 0x16) * 4);
              fVar114 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar35 - uVar87) * (uVar35 - uVar87) * 0x1dc0 +
                                          iVar69 * iVar69 * 0x15aa +
                                          (iVar69 * -0x30 + iVar68 * 0x3343) * iVar68 +
                                          (iVar69 * -0x983 + (uVar36 - uVar44) * 0x1054 +
                                          iVar68 * -0xf8e) * (uVar36 - uVar44) >> 0x16) * 4) * 4.0 +
                        0.0 + *(float *)(&DAT_04175bc0 +
                                        (ulong)((uVar16 - uVar88) * (uVar16 - uVar88) * 0x1dc0 +
                                                iVar70 * iVar70 * 0x15aa +
                                                (iVar70 * -0x30 + iVar71 * 0x3343) * iVar71 +
                                                (iVar70 * -0x983 + iVar72 * 0x1054 + iVar71 * -0xf8e
                                                ) * iVar72 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar88 - uVar38) * (uVar88 - uVar38) * 0x1dc0 +
                                          iVar73 * iVar73 * 0x15aa +
                                          (iVar73 * -0x30 + iVar74 * 0x3343) * iVar74 +
                                          (iVar73 * -0x983 + iVar75 * 0x1054 + iVar74 * -0xf8e) *
                                          iVar75 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar30 - uVar17) * (uVar30 - uVar17) * 0x1dc0 +
                                          iVar76 * iVar76 * 0x15aa +
                                          (iVar76 * -0x30 + iVar77 * 0x3343) * iVar77 +
                                          (iVar76 * -0x983 + iVar78 * 0x1054 + iVar77 * -0xf8e) *
                                          iVar78 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar17 - uVar31) * (uVar17 - uVar31) * 0x1dc0 +
                                          iVar79 * iVar79 * 0x15aa +
                                          (iVar79 * -0x30 + iVar52 * 0x3343) * iVar52 +
                                          (iVar79 * -0x983 + iVar53 * 0x1054 + iVar52 * -0xf8e) *
                                          iVar53 >> 0x16) * 4);
              if ((fVar114 < fVar113) && (local_94 = 2, fVar113 <= fVar114 * 3.6)) {
                local_94 = 1;
              }
            }
          }
          uVar87 = iVar54 + iVar91;
          uVar16 = *(uint *)(param_2 +
                            (-(ulong)(uVar87 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar87 << 2));
          uVar87 = iVar97 + iVar90 * param_3;
          uVar87 = *(uint *)(param_2 +
                            (-(ulong)(uVar87 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar87 << 2));
          uVar88 = *(uint *)(param_2 + (long)(iVar46 + iVar97) * 4);
          uVar17 = *(uint *)(param_2 + (long)(iVar47 + iVar54) * 4);
          if ((((uVar12 == uVar14) && (uVar3 == uVar108)) ||
              ((uVar12 == uVar3 && (uVar14 == uVar108)))) ||
             ((local_78 = 0, uVar12 == uVar3 || (uVar12 == uVar14)))) {
            local_78 = 0;
          }
          else {
            uVar30 = uVar12 >> 0x18;
            uVar31 = uVar108 >> 0x18;
            uVar32 = (uVar12 & 0xff) * uVar30 >> 8;
            uVar33 = (uVar12 >> 0x10 & 0xff) * uVar30 >> 8;
            uVar34 = (uVar12 >> 8 & 0xff) * uVar30 >> 8;
            uVar106 = (uVar108 & 0xff) * uVar31 >> 8;
            uVar35 = (uVar108 >> 8 & 0xff) * uVar31 >> 8;
            iVar84 = uVar32 - uVar106;
            uVar36 = (uVar108 >> 0x10 & 0xff) * uVar31 >> 8;
            iVar55 = uVar34 - uVar35;
            uVar37 = uVar14 >> 0x18;
            uVar38 = (uVar14 >> 8 & 0xff) * uVar37 >> 8;
            uVar39 = uVar13 >> 0x18;
            uVar40 = (uVar14 >> 0x10 & 0xff) * uVar37 >> 8;
            iVar56 = ((uVar13 >> 8 & 0xff) * uVar39 >> 8) - uVar38;
            iVar57 = ((uVar13 >> 0x10 & 0xff) * uVar39 >> 8) - uVar40;
            uVar41 = (uVar14 & 0xff) * uVar37 >> 8;
            iVar58 = ((uVar13 & 0xff) * uVar39 >> 8) - uVar41;
            uVar42 = uVar17 >> 0x18;
            iVar59 = uVar41 - ((uVar17 & 0xff) * uVar42 >> 8);
            iVar60 = uVar38 - ((uVar17 >> 8 & 0xff) * uVar42 >> 8);
            iVar61 = uVar40 - ((uVar17 >> 0x10 & 0xff) * uVar42 >> 8);
            uVar17 = uVar10 >> 0x18;
            uVar43 = uVar3 >> 0x18;
            uVar44 = (uVar3 & 0xff) * uVar43 >> 8;
            iVar62 = ((uVar10 & 0xff) * uVar17 >> 8) - uVar44;
            uVar27 = (uVar3 >> 8 & 0xff) * uVar43 >> 8;
            iVar63 = ((uVar10 >> 8 & 0xff) * uVar17 >> 8) - uVar27;
            uVar28 = (uVar3 >> 0x10 & 0xff) * uVar43 >> 8;
            iVar64 = ((uVar10 >> 0x10 & 0xff) * uVar17 >> 8) - uVar28;
            uVar29 = uVar88 >> 0x18;
            iVar65 = uVar44 - ((uVar88 & 0xff) * uVar29 >> 8);
            iVar66 = uVar27 - ((uVar88 >> 8 & 0xff) * uVar29 >> 8);
            iVar67 = uVar28 - ((uVar88 >> 0x10 & 0xff) * uVar29 >> 8);
            iVar68 = uVar41 - uVar44;
            iVar69 = uVar38 - uVar27;
            uVar88 = uVar16 >> 0x18;
            iVar70 = ((uVar16 & 0xff) * uVar88 >> 8) - uVar32;
            iVar71 = ((uVar16 >> 8 & 0xff) * uVar88 >> 8) - uVar34;
            iVar72 = ((uVar16 >> 0x10 & 0xff) * uVar88 >> 8) - uVar33;
            uVar38 = uVar15 >> 0x18;
            iVar73 = uVar32 - ((uVar15 & 0xff) * uVar38 >> 8);
            iVar74 = uVar34 - ((uVar15 >> 8 & 0xff) * uVar38 >> 8);
            iVar75 = uVar33 - ((uVar15 >> 0x10 & 0xff) * uVar38 >> 8);
            uVar32 = uVar87 >> 0x18;
            iVar76 = ((uVar87 & 0xff) * uVar32 >> 8) - uVar106;
            iVar77 = ((uVar87 >> 8 & 0xff) * uVar32 >> 8) - uVar35;
            iVar78 = ((uVar87 >> 0x10 & 0xff) * uVar32 >> 8) - uVar36;
            uVar34 = uVar96 >> 0x18;
            iVar79 = uVar106 - ((uVar96 & 0xff) * uVar34 >> 8);
            iVar52 = uVar35 - ((uVar96 >> 8 & 0xff) * uVar34 >> 8);
            iVar53 = uVar36 - ((uVar96 >> 0x10 & 0xff) * uVar34 >> 8);
            fVar113 = *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar30 - uVar31) * (uVar30 - uVar31) * 0x1dc0 +
                                        iVar84 * iVar84 * 0x15aa +
                                        (iVar84 * -0x30 + iVar55 * 0x3343) * iVar55 +
                                        (iVar84 * -0x983 + (uVar33 - uVar36) * 0x1054 +
                                        iVar55 * -0xf8e) * (uVar33 - uVar36) >> 0x16) * 4) * 4.0 +
                      0.0 + *(float *)(&DAT_04175bc0 +
                                      (ulong)((uVar39 - uVar37) * (uVar39 - uVar37) * 0x1dc0 +
                                              iVar58 * iVar58 * 0x15aa +
                                              (iVar58 * -0x30 + iVar56 * 0x3343) * iVar56 +
                                              (iVar58 * -0x983 + iVar57 * 0x1054 + iVar56 * -0xf8e)
                                              * iVar57 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar37 - uVar42) * (uVar37 - uVar42) * 0x1dc0 +
                                        iVar59 * iVar59 * 0x15aa +
                                        (iVar59 * -0x30 + iVar60 * 0x3343) * iVar60 +
                                        (iVar59 * -0x983 + iVar61 * 0x1054 + iVar60 * -0xf8e) *
                                        iVar61 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar17 - uVar43) * (uVar17 - uVar43) * 0x1dc0 +
                                        iVar62 * iVar62 * 0x15aa +
                                        (iVar62 * -0x30 + iVar63 * 0x3343) * iVar63 +
                                        (iVar62 * -0x983 + iVar64 * 0x1054 + iVar63 * -0xf8e) *
                                        iVar64 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar43 - uVar29) * (uVar43 - uVar29) * 0x1dc0 +
                                        iVar65 * iVar65 * 0x15aa +
                                        (iVar65 * -0x30 + iVar66 * 0x3343) * iVar66 +
                                        (iVar65 * -0x983 + iVar67 * 0x1054 + iVar66 * -0xf8e) *
                                        iVar67 >> 0x16) * 4);
            fVar114 = *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar37 - uVar43) * (uVar37 - uVar43) * 0x1dc0 +
                                        iVar68 * iVar68 * 0x15aa +
                                        (iVar68 * -0x30 + iVar69 * 0x3343) * iVar69 +
                                        (iVar68 * -0x983 + (uVar40 - uVar28) * 0x1054 +
                                        iVar69 * -0xf8e) * (uVar40 - uVar28) >> 0x16) * 4) * 4.0 +
                      0.0 + *(float *)(&DAT_04175bc0 +
                                      (ulong)((uVar88 - uVar30) * (uVar88 - uVar30) * 0x1dc0 +
                                              iVar70 * iVar70 * 0x15aa +
                                              (iVar70 * -0x30 + iVar71 * 0x3343) * iVar71 +
                                              (iVar70 * -0x983 + iVar72 * 0x1054 + iVar71 * -0xf8e)
                                              * iVar72 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar30 - uVar38) * (uVar30 - uVar38) * 0x1dc0 +
                                        iVar73 * iVar73 * 0x15aa +
                                        (iVar73 * -0x30 + iVar74 * 0x3343) * iVar74 +
                                        (iVar73 * -0x983 + iVar75 * 0x1054 + iVar74 * -0xf8e) *
                                        iVar75 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar32 - uVar31) * (uVar32 - uVar31) * 0x1dc0 +
                                        iVar76 * iVar76 * 0x15aa +
                                        (iVar76 * -0x30 + iVar77 * 0x3343) * iVar77 +
                                        (iVar76 * -0x983 + iVar78 * 0x1054 + iVar77 * -0xf8e) *
                                        iVar78 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar31 - uVar34) * (uVar31 - uVar34) * 0x1dc0 +
                                        iVar79 * iVar79 * 0x15aa +
                                        (iVar79 * -0x30 + iVar52 * 0x3343) * iVar52 +
                                        (iVar79 * -0x983 + iVar53 * 0x1054 + iVar52 * -0xf8e) *
                                        iVar53 >> 0x16) * 4);
            if ((fVar114 < fVar113) && (local_78 = 2, fVar113 <= fVar114 * 3.6)) {
              local_78 = 1;
            }
          }
          uVar96 = iVar54 + (int)uVar102 * param_3;
          uVar96 = *(uint *)(param_2 +
                            (-(ulong)(uVar96 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar96 << 2));
          uVar88 = *(uint *)(param_2 + (local_b0 >> 0x1e));
          uVar17 = *(uint *)(param_2 + (long)(int)(uVar89 + (int)uVar102 * param_3) * 4);
          uVar89 = iVar97 + iVar91;
          uVar89 = *(uint *)(param_2 +
                            (-(ulong)(uVar89 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar89 << 2));
          uVar99 = *(uint *)(param_2 + (long)(int)(uVar99 + iVar45) * 4);
          if ((uVar12 == uVar3) && (uVar10 == uVar16)) {
            local_98 = 0;
          }
          else if ((uVar12 == uVar10) && (uVar3 == uVar16)) {
            local_98 = 0;
          }
          else {
            local_98 = 0;
            if ((uVar12 != uVar10) && (uVar12 != uVar3)) {
              uVar30 = uVar12 >> 0x18;
              uVar31 = uVar16 >> 0x18;
              uVar32 = (uVar12 & 0xff) * uVar30 >> 8;
              uVar33 = (uVar12 >> 0x10 & 0xff) * uVar30 >> 8;
              uVar34 = (uVar12 >> 8 & 0xff) * uVar30 >> 8;
              uVar106 = (uVar16 & 0xff) * uVar31 >> 8;
              iVar97 = uVar32 - uVar106;
              uVar35 = (uVar16 >> 8 & 0xff) * uVar31 >> 8;
              uVar36 = (uVar16 >> 0x10 & 0xff) * uVar31 >> 8;
              iVar84 = uVar34 - uVar35;
              uVar37 = uVar3 >> 0x18;
              uVar38 = (uVar3 >> 8 & 0xff) * uVar37 >> 8;
              uVar39 = uVar14 >> 0x18;
              uVar40 = (uVar3 >> 0x10 & 0xff) * uVar37 >> 8;
              iVar54 = ((uVar14 >> 8 & 0xff) * uVar39 >> 8) - uVar38;
              iVar55 = ((uVar14 >> 0x10 & 0xff) * uVar39 >> 8) - uVar40;
              uVar41 = (uVar3 & 0xff) * uVar37 >> 8;
              iVar56 = ((uVar14 & 0xff) * uVar39 >> 8) - uVar41;
              uVar42 = uVar89 >> 0x18;
              iVar57 = uVar41 - ((uVar89 & 0xff) * uVar42 >> 8);
              iVar58 = uVar40 - ((uVar89 >> 0x10 & 0xff) * uVar42 >> 8);
              iVar59 = uVar38 - ((uVar89 >> 8 & 0xff) * uVar42 >> 8);
              uVar89 = uVar13 >> 0x18;
              uVar43 = uVar10 >> 0x18;
              uVar44 = (uVar10 & 0xff) * uVar43 >> 8;
              iVar60 = ((uVar13 & 0xff) * uVar89 >> 8) - uVar44;
              uVar27 = (uVar10 >> 8 & 0xff) * uVar43 >> 8;
              iVar61 = ((uVar13 >> 8 & 0xff) * uVar89 >> 8) - uVar27;
              uVar28 = (uVar10 >> 0x10 & 0xff) * uVar43 >> 8;
              iVar62 = ((uVar13 >> 0x10 & 0xff) * uVar89 >> 8) - uVar28;
              uVar29 = uVar96 >> 0x18;
              iVar63 = uVar44 - ((uVar96 & 0xff) * uVar29 >> 8);
              iVar64 = uVar27 - ((uVar96 >> 8 & 0xff) * uVar29 >> 8);
              iVar65 = uVar28 - ((uVar96 >> 0x10 & 0xff) * uVar29 >> 8);
              iVar66 = uVar41 - uVar44;
              iVar67 = uVar38 - uVar27;
              uVar96 = uVar11 >> 0x18;
              iVar68 = ((uVar11 & 0xff) * uVar96 >> 8) - uVar32;
              iVar69 = ((uVar11 >> 8 & 0xff) * uVar96 >> 8) - uVar34;
              iVar70 = ((uVar11 >> 0x10 & 0xff) * uVar96 >> 8) - uVar33;
              uVar38 = uVar108 >> 0x18;
              iVar71 = uVar32 - ((uVar108 & 0xff) * uVar38 >> 8);
              iVar72 = uVar34 - ((uVar108 >> 8 & 0xff) * uVar38 >> 8);
              iVar73 = uVar33 - ((uVar108 >> 0x10 & 0xff) * uVar38 >> 8);
              uVar32 = uVar88 >> 0x18;
              iVar74 = ((uVar88 & 0xff) * uVar32 >> 8) - uVar106;
              iVar75 = ((uVar88 >> 8 & 0xff) * uVar32 >> 8) - uVar35;
              iVar76 = ((uVar88 >> 0x10 & 0xff) * uVar32 >> 8) - uVar36;
              uVar34 = uVar87 >> 0x18;
              iVar77 = uVar36 - ((uVar87 >> 0x10 & 0xff) * uVar34 >> 8);
              iVar78 = uVar106 - ((uVar87 & 0xff) * uVar34 >> 8);
              iVar79 = uVar35 - ((uVar87 >> 8 & 0xff) * uVar34 >> 8);
              fVar113 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar30 - uVar31) * (uVar30 - uVar31) * 0x1dc0 +
                                          iVar97 * iVar97 * 0x15aa +
                                          (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                          (iVar97 * -0x983 + (uVar33 - uVar36) * 0x1054 +
                                          iVar84 * -0xf8e) * (uVar33 - uVar36) >> 0x16) * 4) * 4.0 +
                        0.0 + *(float *)(&DAT_04175bc0 +
                                        (ulong)((uVar39 - uVar37) * (uVar39 - uVar37) * 0x1dc0 +
                                                iVar56 * iVar56 * 0x15aa +
                                                (iVar56 * -0x30 + iVar54 * 0x3343) * iVar54 +
                                                (iVar56 * -0x983 + iVar55 * 0x1054 + iVar54 * -0xf8e
                                                ) * iVar55 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar37 - uVar42) * (uVar37 - uVar42) * 0x1dc0 +
                                          iVar57 * iVar57 * 0x15aa +
                                          (iVar57 * -0x30 + iVar59 * 0x3343) * iVar59 +
                                          (iVar57 * -0x983 + iVar58 * 0x1054 + iVar59 * -0xf8e) *
                                          iVar58 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar89 - uVar43) * (uVar89 - uVar43) * 0x1dc0 +
                                          iVar60 * iVar60 * 0x15aa +
                                          (iVar60 * -0x30 + iVar61 * 0x3343) * iVar61 +
                                          (iVar60 * -0x983 + iVar62 * 0x1054 + iVar61 * -0xf8e) *
                                          iVar62 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar43 - uVar29) * (uVar43 - uVar29) * 0x1dc0 +
                                          iVar63 * iVar63 * 0x15aa +
                                          (iVar63 * -0x30 + iVar64 * 0x3343) * iVar64 +
                                          (iVar63 * -0x983 + iVar65 * 0x1054 + iVar64 * -0xf8e) *
                                          iVar65 >> 0x16) * 4);
              fVar114 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar37 - uVar43) * (uVar37 - uVar43) * 0x1dc0 +
                                          iVar66 * iVar66 * 0x15aa +
                                          (iVar66 * -0x30 + iVar67 * 0x3343) * iVar67 +
                                          (iVar66 * -0x983 + (uVar40 - uVar28) * 0x1054 +
                                          iVar67 * -0xf8e) * (uVar40 - uVar28) >> 0x16) * 4) * 4.0 +
                        0.0 + *(float *)(&DAT_04175bc0 +
                                        (ulong)((uVar96 - uVar30) * (uVar96 - uVar30) * 0x1dc0 +
                                                iVar68 * iVar68 * 0x15aa +
                                                (iVar68 * -0x30 + iVar69 * 0x3343) * iVar69 +
                                                (iVar68 * -0x983 + iVar70 * 0x1054 + iVar69 * -0xf8e
                                                ) * iVar70 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar30 - uVar38) * (uVar30 - uVar38) * 0x1dc0 +
                                          iVar71 * iVar71 * 0x15aa +
                                          (iVar71 * -0x30 + iVar72 * 0x3343) * iVar72 +
                                          (iVar71 * -0x983 + iVar73 * 0x1054 + iVar72 * -0xf8e) *
                                          iVar73 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar32 - uVar31) * (uVar32 - uVar31) * 0x1dc0 +
                                          iVar74 * iVar74 * 0x15aa +
                                          (iVar74 * -0x30 + iVar75 * 0x3343) * iVar75 +
                                          (iVar74 * -0x983 + iVar76 * 0x1054 + iVar75 * -0xf8e) *
                                          iVar76 >> 0x16) * 4) +
                        *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar31 - uVar34) * (uVar31 - uVar34) * 0x1dc0 +
                                          iVar78 * iVar78 * 0x15aa +
                                          (iVar78 * -0x30 + iVar79 * 0x3343) * iVar79 +
                                          (iVar78 * -0x983 + iVar77 * 0x1054 + iVar79 * -0xf8e) *
                                          iVar77 >> 0x16) * 4);
              if ((fVar114 < fVar113) && (local_98 = 2, fVar113 <= fVar114 * 3.6)) {
                local_98 = 1;
              }
            }
          }
          local_9c = 0;
          if ((((uVar13 != uVar11 || uVar12 != uVar10) && (uVar12 != uVar13 || uVar10 != uVar11)) &&
              (local_9c = 0, uVar12 != uVar13)) && (uVar12 != uVar10)) {
            uVar89 = uVar12 >> 0x18;
            uVar87 = uVar11 >> 0x18;
            uVar96 = (uVar12 & 0xff) * uVar89 >> 8;
            uVar30 = (uVar12 >> 8 & 0xff) * uVar89 >> 8;
            uVar31 = (uVar11 & 0xff) * uVar87 >> 8;
            uVar32 = (uVar12 >> 0x10 & 0xff) * uVar89 >> 8;
            iVar97 = uVar96 - uVar31;
            uVar33 = (uVar11 >> 8 & 0xff) * uVar87 >> 8;
            iVar84 = uVar30 - uVar33;
            uVar34 = (uVar11 >> 0x10 & 0xff) * uVar87 >> 8;
            uVar106 = uVar10 >> 0x18;
            uVar35 = uVar3 >> 0x18;
            uVar36 = (uVar10 >> 8 & 0xff) * uVar106 >> 8;
            iVar54 = ((uVar3 >> 8 & 0xff) * uVar35 >> 8) - uVar36;
            uVar37 = (uVar10 >> 0x10 & 0xff) * uVar106 >> 8;
            iVar55 = ((uVar3 >> 0x10 & 0xff) * uVar35 >> 8) - uVar37;
            uVar38 = (uVar10 & 0xff) * uVar106 >> 8;
            iVar56 = ((uVar3 & 0xff) * uVar35 >> 8) - uVar38;
            uVar39 = uVar17 >> 0x18;
            iVar57 = uVar38 - ((uVar17 & 0xff) * uVar39 >> 8);
            iVar58 = uVar37 - ((uVar17 >> 0x10 & 0xff) * uVar39 >> 8);
            iVar59 = uVar36 - ((uVar17 >> 8 & 0xff) * uVar39 >> 8);
            uVar17 = uVar13 >> 0x18;
            uVar40 = uVar14 >> 0x18;
            uVar41 = (uVar13 & 0xff) * uVar17 >> 8;
            uVar42 = (uVar13 >> 0x10 & 0xff) * uVar17 >> 8;
            iVar60 = ((uVar14 & 0xff) * uVar40 >> 8) - uVar41;
            uVar43 = (uVar13 >> 8 & 0xff) * uVar17 >> 8;
            iVar61 = ((uVar14 >> 0x10 & 0xff) * uVar40 >> 8) - uVar42;
            iVar62 = ((uVar14 >> 8 & 0xff) * uVar40 >> 8) - uVar43;
            uVar44 = uVar99 >> 0x18;
            iVar63 = uVar41 - ((uVar99 & 0xff) * uVar44 >> 8);
            iVar64 = uVar43 - ((uVar99 >> 8 & 0xff) * uVar44 >> 8);
            iVar65 = uVar42 - ((uVar99 >> 0x10 & 0xff) * uVar44 >> 8);
            iVar66 = uVar38 - uVar41;
            iVar67 = uVar36 - uVar43;
            uVar99 = uVar15 >> 0x18;
            iVar68 = ((uVar15 & 0xff) * uVar99 >> 8) - uVar96;
            iVar69 = ((uVar15 >> 8 & 0xff) * uVar99 >> 8) - uVar30;
            iVar70 = ((uVar15 >> 0x10 & 0xff) * uVar99 >> 8) - uVar32;
            uVar36 = uVar16 >> 0x18;
            iVar71 = uVar96 - ((uVar16 & 0xff) * uVar36 >> 8);
            iVar72 = uVar30 - ((uVar16 >> 8 & 0xff) * uVar36 >> 8);
            iVar73 = uVar32 - ((uVar16 >> 0x10 & 0xff) * uVar36 >> 8);
            uVar96 = uVar112 >> 0x18;
            iVar74 = ((uVar112 & 0xff) * uVar96 >> 8) - uVar31;
            iVar75 = ((uVar112 >> 8 & 0xff) * uVar96 >> 8) - uVar33;
            iVar76 = ((uVar112 >> 0x10 & 0xff) * uVar96 >> 8) - uVar34;
            uVar112 = uVar88 >> 0x18;
            iVar77 = uVar31 - ((uVar88 & 0xff) * uVar112 >> 8);
            iVar78 = uVar33 - ((uVar88 >> 8 & 0xff) * uVar112 >> 8);
            iVar79 = uVar34 - ((uVar88 >> 0x10 & 0xff) * uVar112 >> 8);
            fVar113 = *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar89 - uVar87) * (uVar89 - uVar87) * 0x1dc0 +
                                        iVar97 * iVar97 * 0x15aa +
                                        (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                        (iVar97 * -0x983 + (uVar32 - uVar34) * 0x1054 +
                                        iVar84 * -0xf8e) * (uVar32 - uVar34) >> 0x16) * 4) * 4.0 +
                      0.0 + *(float *)(&DAT_04175bc0 +
                                      (ulong)((uVar35 - uVar106) * (uVar35 - uVar106) * 0x1dc0 +
                                              iVar56 * iVar56 * 0x15aa +
                                              (iVar56 * -0x30 + iVar54 * 0x3343) * iVar54 +
                                              (iVar56 * -0x983 + iVar55 * 0x1054 + iVar54 * -0xf8e)
                                              * iVar55 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar106 - uVar39) * (uVar106 - uVar39) * 0x1dc0 +
                                        iVar57 * iVar57 * 0x15aa +
                                        (iVar57 * -0x30 + iVar59 * 0x3343) * iVar59 +
                                        (iVar57 * -0x983 + iVar58 * 0x1054 + iVar59 * -0xf8e) *
                                        iVar58 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar40 - uVar17) * (uVar40 - uVar17) * 0x1dc0 +
                                        iVar60 * iVar60 * 0x15aa +
                                        (iVar60 * -0x30 + iVar62 * 0x3343) * iVar62 +
                                        (iVar60 * -0x983 + iVar61 * 0x1054 + iVar62 * -0xf8e) *
                                        iVar61 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar17 - uVar44) * (uVar17 - uVar44) * 0x1dc0 +
                                        iVar63 * iVar63 * 0x15aa +
                                        (iVar63 * -0x30 + iVar64 * 0x3343) * iVar64 +
                                        (iVar63 * -0x983 + iVar65 * 0x1054 + iVar64 * -0xf8e) *
                                        iVar65 >> 0x16) * 4);
            fVar114 = *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar106 - uVar17) * (uVar106 - uVar17) * 0x1dc0 +
                                        iVar66 * iVar66 * 0x15aa +
                                        (iVar66 * -0x30 + iVar67 * 0x3343) * iVar67 +
                                        (iVar66 * -0x983 + (uVar37 - uVar42) * 0x1054 +
                                        iVar67 * -0xf8e) * (uVar37 - uVar42) >> 0x16) * 4) * 4.0 +
                      0.0 + *(float *)(&DAT_04175bc0 +
                                      (ulong)((uVar99 - uVar89) * (uVar99 - uVar89) * 0x1dc0 +
                                              iVar68 * iVar68 * 0x15aa +
                                              (iVar68 * -0x30 + iVar69 * 0x3343) * iVar69 +
                                              (iVar68 * -0x983 + iVar70 * 0x1054 + iVar69 * -0xf8e)
                                              * iVar70 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar89 - uVar36) * (uVar89 - uVar36) * 0x1dc0 +
                                        iVar71 * iVar71 * 0x15aa +
                                        (iVar71 * -0x30 + iVar72 * 0x3343) * iVar72 +
                                        (iVar71 * -0x983 + iVar73 * 0x1054 + iVar72 * -0xf8e) *
                                        iVar73 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar96 - uVar87) * (uVar96 - uVar87) * 0x1dc0 +
                                        iVar74 * iVar74 * 0x15aa +
                                        (iVar74 * -0x30 + iVar75 * 0x3343) * iVar75 +
                                        (iVar74 * -0x983 + iVar76 * 0x1054 + iVar75 * -0xf8e) *
                                        iVar76 >> 0x16) * 4) +
                      *(float *)(&DAT_04175bc0 +
                                (ulong)((uVar87 - uVar112) * (uVar87 - uVar112) * 0x1dc0 +
                                        iVar77 * iVar77 * 0x15aa +
                                        (iVar77 * -0x30 + iVar78 * 0x3343) * iVar78 +
                                        (iVar77 * -0x983 + iVar79 * 0x1054 + iVar78 * -0xf8e) *
                                        iVar79 >> 0x16) * 4);
            if ((fVar114 < fVar113) && (local_9c = 2, fVar113 <= fVar114 * 3.6)) {
              local_9c = 1;
            }
          }
          uVar99 = (uint)lVar110;
          iVar97 = iVar4 + uVar99;
          *(uint *)(param_1 + (long)iVar97 * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 1) * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 3) * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 2) * 4) = uVar12;
          iVar97 = iVar82 + uVar99;
          *(uint *)(param_1 + (long)iVar97 * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 1) * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 3) * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 2) * 4) = uVar12;
          iVar97 = iVar26 + uVar99;
          *(uint *)(param_1 + (long)iVar97 * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 1) * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 3) * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 2) * 4) = uVar12;
          iVar97 = iVar24 + uVar99;
          *(uint *)(param_1 + (long)iVar97 * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 1) * 4) = uVar12;
          *(uint *)(param_1 + (long)(iVar97 + 3) * 4) = uVar12;
          uVar89 = uVar99 | 3;
          *(uint *)(param_1 + (long)(iVar97 + 2) * 4) = uVar12;
          if (local_94 != 0) {
            if (local_94 == 1) {
              uVar88 = uVar12 >> 0x18;
              if (local_78 == 0) {
                bVar1 = false;
                if (local_9c != 0) goto LAB_015a6054;
LAB_015a6130:
                bVar105 = false;
                uVar112 = (uVar12 & 0xff) * uVar88 >> 8;
                uVar87 = (uVar12 >> 8 & 0xff) * uVar88 >> 8;
                uVar96 = (uVar12 >> 0x10 & 0xff) * uVar88 >> 8;
              }
              else {
                uVar112 = uVar11 >> 0x18;
                iVar97 = ((uVar12 & 0xff) * uVar88 >> 8) - ((uVar11 & 0xff) * uVar112 >> 8);
                iVar84 = ((uVar12 >> 8 & 0xff) * uVar88 >> 8) -
                         ((uVar11 >> 8 & 0xff) * uVar112 >> 8);
                iVar54 = ((uVar12 >> 0x10 & 0xff) * uVar88 >> 8) -
                         ((uVar11 >> 0x10 & 0xff) * uVar112 >> 8);
                bVar1 = 0xe0ffff <
                        (uVar88 - uVar112) * (uVar88 - uVar112) * 0x1dc0 + iVar97 * iVar97 * 0x15aa
                        + (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                        (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54;
                if (local_9c == 0) goto LAB_015a6130;
LAB_015a6054:
                uVar17 = uVar108 >> 0x18;
                uVar112 = (uVar12 & 0xff) * uVar88 >> 8;
                uVar87 = (uVar12 >> 8 & 0xff) * uVar88 >> 8;
                uVar96 = (uVar12 >> 0x10 & 0xff) * uVar88 >> 8;
                iVar97 = uVar112 - ((uVar108 & 0xff) * uVar17 >> 8);
                iVar84 = uVar87 - ((uVar108 >> 8 & 0xff) * uVar17 >> 8);
                iVar54 = uVar96 - ((uVar108 >> 0x10 & 0xff) * uVar17 >> 8);
                bVar105 = 0xe0ffff <
                          (uVar88 - uVar17) * (uVar88 - uVar17) * 0x1dc0 + iVar97 * iVar97 * 0x15aa
                          + (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54;
              }
              uVar17 = uVar15 >> 0x18;
              uVar30 = (uVar15 & 0xff) * uVar17 >> 8;
              uVar31 = (uVar15 >> 8 & 0xff) * uVar17 >> 8;
              iVar97 = uVar87 - uVar31;
              uVar32 = (uVar15 >> 0x10 & 0xff) * uVar17 >> 8;
              iVar84 = uVar112 - uVar30;
              if ((uVar88 - uVar17) * (uVar88 - uVar17) * 0x1dc0 + iVar84 * iVar84 * 0x15aa +
                  (iVar97 * 0x3343 + iVar84 * -0x30) * iVar97 +
                  ((uVar96 - uVar32) * 0x1054 + iVar97 * -0xf8e + iVar84 * -0x983) *
                  (uVar96 - uVar32) < 0xe10000) {
joined_r0x015a63d4:
                bVar83 = false;
              }
              else {
                uVar88 = uVar14 >> 0x18;
                uVar33 = uVar108 >> 0x18;
                uVar34 = (uVar14 & 0xff) * uVar88 >> 8;
                iVar97 = ((uVar108 & 0xff) * uVar33 >> 8) - uVar34;
                uVar106 = (uVar14 >> 8 & 0xff) * uVar88 >> 8;
                iVar84 = ((uVar108 >> 8 & 0xff) * uVar33 >> 8) - uVar106;
                uVar35 = (uVar14 >> 0x10 & 0xff) * uVar88 >> 8;
                iVar54 = ((uVar108 >> 0x10 & 0xff) * uVar33 >> 8) - uVar35;
                if (0xe0 < (uVar33 - uVar88) * (uVar33 - uVar88) * 0x1dc0 + iVar97 * iVar97 * 0x15aa
                           + (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                           (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 >> 0x10)
                goto joined_r0x015a63d4;
                iVar97 = uVar34 - uVar30;
                iVar84 = uVar106 - uVar31;
                iVar54 = uVar35 - uVar32;
                if (0xe0 < (uVar88 - uVar17) * (uVar88 - uVar17) * 0x1dc0 + iVar97 * iVar97 * 0x15aa
                           + (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                           (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 >> 0x10)
                goto joined_r0x015a63d4;
                uVar88 = uVar13 >> 0x18;
                uVar33 = (uVar13 & 0xff) * uVar88 >> 8;
                uVar34 = (uVar13 >> 8 & 0xff) * uVar88 >> 8;
                iVar97 = uVar31 - uVar34;
                uVar31 = (uVar13 >> 0x10 & 0xff) * uVar88 >> 8;
                iVar84 = uVar30 - uVar33;
                iVar54 = uVar32 - uVar31;
                if (0xe0 < (uVar17 - uVar88) * (uVar17 - uVar88) * 0x1dc0 + iVar84 * iVar84 * 0x15aa
                           + (iVar84 * -0x30 + iVar97 * 0x3343) * iVar97 +
                           (iVar84 * -0x983 + iVar54 * 0x1054 + iVar97 * -0xf8e) * iVar54 >> 0x10)
                goto joined_r0x015a63d4;
                uVar17 = uVar11 >> 0x18;
                iVar97 = uVar33 - ((uVar11 & 0xff) * uVar17 >> 8);
                iVar84 = uVar34 - ((uVar11 >> 8 & 0xff) * uVar17 >> 8);
                iVar54 = uVar31 - ((uVar11 >> 0x10 & 0xff) * uVar17 >> 8);
                bVar83 = (uVar88 - uVar17) * (uVar88 - uVar17) * 0x1dc0 + iVar97 * iVar97 * 0x15aa +
                         (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                         (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 < 0xe10000;
              }
              if (bVar1) {
                bVar105 = true;
              }
              else {
                bVar105 = (bool)(bVar105 | bVar83);
              }
            }
            else {
              uVar96 = uVar12 >> 0x18;
              bVar105 = false;
              uVar112 = (uVar12 & 0xff) * uVar96 >> 8;
              uVar87 = (uVar12 >> 8 & 0xff) * uVar96 >> 8;
              uVar96 = (uVar12 >> 0x10 & 0xff) * uVar96 >> 8;
            }
            uVar88 = uVar13 >> 0x18;
            uVar17 = uVar14 >> 0x18;
            iVar97 = (uVar12 >> 0x18) - uVar88;
            iVar84 = (uVar12 >> 0x18) - uVar17;
            uVar30 = (uVar13 & 0xff) * uVar88 >> 8;
            uVar31 = (uVar13 >> 8 & 0xff) * uVar88 >> 8;
            uVar32 = (uVar13 >> 0x10 & 0xff) * uVar88 >> 8;
            iVar54 = uVar112 - uVar30;
            iVar55 = uVar87 - uVar31;
            iVar56 = uVar96 - uVar32;
            uVar33 = (uVar14 & 0xff) * uVar17 >> 8;
            uVar34 = (uVar14 >> 8 & 0xff) * uVar17 >> 8;
            uVar106 = (uint)((uVar107 << 0x22) >> 0x20) | 3;
            iVar57 = uVar87 - uVar34;
            uVar87 = (uVar14 >> 0x10 & 0xff) * uVar17 >> 8;
            iVar58 = uVar112 - uVar33;
            iVar59 = uVar96 - uVar87;
            uVar112 = uVar13;
            if ((uint)(iVar58 * iVar58 * 0x15aa + iVar84 * iVar84 * 0x1dc0 +
                       (iVar57 * 0x3343 + iVar58 * -0x30) * iVar57 +
                      (iVar59 * 0x1054 + iVar57 * -0xf8e + iVar58 * -0x983) * iVar59) >> 0xe <=
                (uint)(iVar54 * iVar54 * 0x15aa + iVar97 * iVar97 * 0x1dc0 +
                       (iVar55 * 0x3343 + iVar54 * -0x30) * iVar55 +
                      (iVar56 * 0x1054 + iVar55 * -0xf8e + iVar54 * -0x983) * iVar56) >> 0xe) {
              uVar112 = uVar14;
            }
            if (bVar105) {
              uVar87 = uVar112 & 0xff;
              uVar88 = uVar112 >> 8 & 0xff;
              uVar96 = uVar112 >> 0x18;
              uVar112 = uVar112 >> 0x10 & 0xff;
              pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + iVar94) << 0x20) >> 0x1e));
              *pbVar5 = *pbVar5 + (char)((uVar87 - *pbVar5) * 0x17 >> 8);
              pbVar5[1] = pbVar5[1] + (char)((uVar88 - pbVar5[1]) * 0x17 >> 8);
              pbVar5[2] = pbVar5[2] + (char)((uVar112 - pbVar5[2]) * 0x17 >> 8);
              pbVar5[3] = pbVar5[3] + (char)((uVar96 - pbVar5[3]) * 0x17 >> 8);
              pbVar5 = (byte *)(param_1 +
                               ((long)((ulong)((uVar99 | 2) + uVar106 * iVar23) << 0x20) >> 0x1e));
              *pbVar5 = *pbVar5 + (char)((uVar87 - *pbVar5) * 0x17 >> 8);
              pbVar6 = (byte *)(param_1 +
                               ((long)((ulong)(uVar106 * iVar23 + uVar89) << 0x20) >> 0x1e));
              pbVar5[1] = pbVar5[1] + (char)((uVar88 - pbVar5[1]) * 0x17 >> 8);
              bVar18 = *pbVar6;
              pbVar5[2] = pbVar5[2] + (char)((uVar112 - pbVar5[2]) * 0x17 >> 8);
              bVar19 = pbVar6[1];
              pbVar5[3] = pbVar5[3] + (char)((uVar96 - pbVar5[3]) * 0x17 >> 8);
              *pbVar6 = bVar18 + (char)((uVar87 - bVar18) * 0xb0 >> 8);
              pbVar6[1] = bVar19 + (char)((uVar88 - bVar19) * 0xb0 >> 8);
              pbVar6[2] = pbVar6[2] + (char)((uVar112 - pbVar6[2]) * 0xb0 >> 8);
              pbVar6[3] = pbVar6[3] + (char)((uVar96 - pbVar6[3]) * 0xb0 >> 8);
            }
            else {
              uVar96 = uVar108 >> 0x18;
              iVar97 = uVar30 - ((uVar108 & 0xff) * uVar96 >> 8);
              iVar84 = uVar31 - ((uVar108 >> 8 & 0xff) * uVar96 >> 8);
              iVar54 = uVar32 - ((uVar108 >> 0x10 & 0xff) * uVar96 >> 8);
              fVar113 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar88 - uVar96) * (uVar88 - uVar96) * 0x1dc0 +
                                          iVar97 * iVar97 * 0x15aa +
                                          (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) *
                                          iVar54 >> 0x16) * 4);
              uVar96 = uVar11 >> 0x18;
              iVar97 = uVar33 - ((uVar11 & 0xff) * uVar96 >> 8);
              iVar84 = uVar34 - ((uVar11 >> 8 & 0xff) * uVar96 >> 8);
              iVar54 = uVar87 - ((uVar11 >> 0x10 & 0xff) * uVar96 >> 8);
              fVar114 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar17 - uVar96) * (uVar17 - uVar96) * 0x1dc0 +
                                          iVar97 * iVar97 * 0x15aa +
                                          (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) *
                                          iVar54 >> 0x16) * 4) * 2.2;
              uVar51 = (undefined1)uVar112;
              uVar48 = (undefined1)(uVar112 >> 8);
              uVar49 = (undefined1)(uVar112 >> 0x10);
              uVar50 = (undefined1)(uVar112 >> 0x18);
              if ((*(float *)(&DAT_04175bc0 +
                             (ulong)((uVar17 - uVar96) * (uVar17 - uVar96) * 0x1dc0 +
                                     iVar97 * iVar97 * 0x15aa +
                                     (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                     (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54
                                    >> 0x16) * 4) < fVar113 * 2.2) || (uVar12 == uVar108)) {
                if ((fVar114 <= fVar113) && (uVar12 != uVar11)) {
LAB_015a69f8:
                  if (uVar10 != uVar11) {
                    uVar87 = uVar112 & 0xff;
                    uVar96 = uVar112 >> 8 & 0xff;
                    uVar88 = uVar112 >> 0x10 & 0xff;
                    pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + uVar86) << 0x20) >> 0x1e));
                    uVar112 = uVar112 >> 0x18;
                    *pbVar5 = *pbVar5 + (char)(uVar87 - *pbVar5 >> 2);
                    pbVar5[1] = pbVar5[1] + (char)(uVar96 - pbVar5[1] >> 2);
                    pbVar5[2] = pbVar5[2] + (char)(uVar88 - pbVar5[2] >> 2);
                    pbVar6 = (byte *)(param_1 + ((long)((ulong)(uVar89 + iVar111) << 0x20) >> 0x1e))
                    ;
                    pbVar5[3] = pbVar5[3] + (char)(uVar112 - pbVar5[3] >> 2);
                    *pbVar6 = *pbVar6 + (char)((uVar87 - *pbVar6) * 0xc0 >> 8);
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)((uVar99 | 2) + iVar94) << 0x20) >> 0x1e));
                    pbVar6[1] = pbVar6[1] + (char)((uVar96 - pbVar6[1]) * 0xc0 >> 8);
                    bVar18 = *pbVar5;
                    pbVar6[2] = pbVar6[2] + (char)((uVar88 - pbVar6[2]) * 0xc0 >> 8);
                    bVar19 = pbVar5[1];
                    pbVar6[3] = pbVar6[3] + (char)((uVar112 - pbVar6[3]) * 0xc0 >> 8);
                    bVar20 = pbVar5[2];
                    *pbVar5 = bVar18 + (char)(uVar87 - bVar18 >> 2);
                    pbVar5[1] = bVar19 + (char)(uVar96 - bVar19 >> 2);
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)(uVar89 + iVar94) << 0x20) >> 0x1e));
                    bVar18 = pbVar5[3];
                    *puVar100 = uVar51;
                    pbVar5[2] = bVar20 + (char)(uVar88 - bVar20 >> 2);
                    puVar100[1] = uVar48;
                    puVar100[2] = uVar49;
                    pbVar5[3] = bVar18 + (char)(uVar112 - bVar18 >> 2);
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)(uVar106 * iVar23 + (uVar99 | 2)) << 0x20) >>
                                     0x1e));
                    puVar100[3] = uVar50;
                    *pbVar5 = *pbVar5 + (char)((uVar87 - *pbVar5) * 0xc0 >> 8);
                    pbVar5[2] = pbVar5[2] + (char)((uVar88 - pbVar5[2]) * 0xc0 >> 8);
                    pbVar5[1] = pbVar5[1] + (char)((uVar96 - pbVar5[1]) * 0xc0 >> 8);
                    pbVar5[3] = pbVar5[3] + (char)((uVar112 - pbVar5[3]) * 0xc0 >> 8);
                    puVar100 = (undefined1 *)
                               (param_1 +
                               ((long)((ulong)(uVar106 * iVar23 + uVar89) << 0x20) >> 0x1e));
                    *puVar100 = uVar51;
                    puVar100[1] = uVar48;
                    puVar100[2] = uVar49;
                    goto LAB_015a6ec0;
                  }
                }
LAB_015a6bf4:
                uVar87 = uVar112 >> 8 & 0xff;
                uVar96 = uVar112 >> 0x10 & 0xff;
                pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + iVar94) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)((uVar112 & 0xff) - (uint)*pbVar5 >> 1);
                pbVar5[1] = pbVar5[1] + (char)(uVar87 - pbVar5[1] >> 1);
                pbVar5[2] = pbVar5[2] + (char)(uVar96 - pbVar5[2] >> 1);
                pbVar6 = (byte *)(param_1 +
                                 ((long)((ulong)((uVar99 | 2) + uVar106 * iVar23) << 0x20) >> 0x1e))
                ;
                pbVar5[3] = pbVar5[3] + (char)((uVar112 >> 0x18) - (uint)pbVar5[3] >> 1);
                *pbVar6 = *pbVar6 + (char)((uVar112 & 0xff) - (uint)*pbVar6 >> 1);
                pbVar6[1] = pbVar6[1] + (char)(uVar87 - pbVar6[1] >> 1);
                pbVar6[2] = pbVar6[2] + (char)(uVar96 - pbVar6[2] >> 1);
                pbVar6[3] = pbVar6[3] + (char)((uVar112 >> 0x18) - (uint)pbVar6[3] >> 1);
                puVar100 = (undefined1 *)
                           (param_1 + ((long)((ulong)(uVar106 * iVar23 + uVar89) << 0x20) >> 0x1e));
                *puVar100 = uVar51;
                puVar100[1] = uVar48;
                puVar100[3] = uVar50;
                puVar100[2] = uVar49;
              }
              else {
                if ((fVar113 < fVar114) || (uVar12 == uVar11)) {
                  if (uVar3 == uVar108) goto LAB_015a6bf4;
LAB_015a6ce0:
                  uVar87 = uVar112 & 0xff;
                  uVar96 = uVar112 >> 8 & 0xff;
                  uVar88 = uVar112 >> 0x10 & 0xff;
                  iVar97 = uVar106 * iVar23;
                  uVar112 = uVar112 >> 0x18;
                  pbVar5 = (byte *)(param_1 +
                                   ((long)((ulong)((uVar99 | 2) + iVar94) << 0x20) >> 0x1e));
                  puVar100 = (undefined1 *)
                             (param_1 + ((long)((ulong)(iVar97 + (uVar99 | 2)) << 0x20) >> 0x1e));
                  *pbVar5 = *pbVar5 + (char)(uVar87 - *pbVar5 >> 2);
                  pbVar5[1] = pbVar5[1] + (char)(uVar96 - pbVar5[1] >> 2);
                  pbVar5[2] = pbVar5[2] + (char)(uVar88 - pbVar5[2] >> 2);
                  pbVar6 = (byte *)(param_1 + ((long)((ulong)(iVar97 + uVar99) << 0x20) >> 0x1e));
                  pbVar5[3] = pbVar5[3] + (char)(uVar112 - pbVar5[3] >> 2);
                  *pbVar6 = *pbVar6 + (char)(uVar87 - *pbVar6 >> 2);
                  pbVar6[1] = pbVar6[1] + (char)(uVar96 - pbVar6[1] >> 2);
                  pbVar6[2] = pbVar6[2] + (char)(uVar88 - pbVar6[2] >> 2);
                  pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + iVar94) << 0x20) >> 0x1e));
                  pbVar6[3] = pbVar6[3] + (char)(uVar112 - pbVar6[3] >> 2);
                  *pbVar5 = *pbVar5 + (char)((uVar87 - *pbVar5) * 0xc0 >> 8);
                  pbVar6 = (byte *)(param_1 +
                                   ((long)((ulong)((uVar99 | 1) + iVar97) << 0x20) >> 0x1e));
                  pbVar5[1] = pbVar5[1] + (char)((uVar96 - pbVar5[1]) * 0xc0 >> 8);
                  bVar18 = pbVar6[1];
                  pbVar5[2] = pbVar5[2] + (char)((uVar88 - pbVar5[2]) * 0xc0 >> 8);
                  pbVar5[3] = pbVar5[3] + (char)((uVar112 - pbVar5[3]) * 0xc0 >> 8);
                  pbVar6[1] = bVar18 + (char)((uVar96 - bVar18) * 0xc0 >> 8);
                  *pbVar6 = *pbVar6 + (char)((uVar87 - *pbVar6) * 0xc0 >> 8);
                  bVar18 = pbVar6[2];
                  *puVar100 = uVar51;
                  pbVar6[2] = bVar18 + (char)((uVar88 - bVar18) * 0xc0 >> 8);
                  bVar18 = pbVar6[3];
                  puVar100[2] = uVar49;
                  pbVar6[3] = bVar18 + (char)((uVar112 - bVar18) * 0xc0 >> 8);
                  puVar100[3] = uVar50;
                  puVar100[1] = uVar48;
                  puVar100 = (undefined1 *)
                             (param_1 + ((long)((ulong)(iVar97 + uVar89) << 0x20) >> 0x1e));
                  *puVar100 = uVar51;
                  puVar100[1] = uVar48;
                  puVar100[2] = uVar49;
                }
                else {
                  if (uVar3 == uVar108) goto LAB_015a69f8;
                  if (uVar10 == uVar11) goto LAB_015a6ce0;
                  uVar87 = uVar112 & 0xff;
                  uVar96 = uVar112 >> 8 & 0xff;
                  uVar88 = uVar112 >> 0x10 & 0xff;
                  iVar97 = uVar106 * iVar23;
                  uVar112 = uVar112 >> 0x18;
                  pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + uVar86) << 0x20) >> 0x1e));
                  *pbVar5 = *pbVar5 + (char)(uVar87 - *pbVar5 >> 2);
                  pbVar5[1] = pbVar5[1] + (char)(uVar96 - pbVar5[1] >> 2);
                  pbVar5[2] = pbVar5[2] + (char)(uVar88 - pbVar5[2] >> 2);
                  pbVar6 = (byte *)(param_1 + ((long)((ulong)(iVar97 + uVar99) << 0x20) >> 0x1e));
                  pbVar5[3] = pbVar5[3] + (char)(uVar112 - pbVar5[3] >> 2);
                  *pbVar6 = *pbVar6 + (char)(uVar87 - *pbVar6 >> 2);
                  pbVar6[1] = pbVar6[1] + (char)(uVar96 - pbVar6[1] >> 2);
                  pbVar6[2] = pbVar6[2] + (char)(uVar88 - pbVar6[2] >> 2);
                  pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + iVar111) << 0x20) >> 0x1e));
                  pbVar6[3] = pbVar6[3] + (char)(uVar112 - pbVar6[3] >> 2);
                  *pbVar5 = *pbVar5 + (char)((uVar87 - *pbVar5) * 0xc0 >> 8);
                  pbVar5[1] = pbVar5[1] + (char)((uVar96 - pbVar5[1]) * 0xc0 >> 8);
                  pbVar5[2] = pbVar5[2] + (char)((uVar88 - pbVar5[2]) * 0xc0 >> 8);
                  pbVar5[3] = pbVar5[3] + (char)((uVar112 - pbVar5[3]) * 0xc0 >> 8);
                  pbVar5 = (byte *)(param_1 +
                                   ((long)((ulong)((uVar99 | 2) + iVar94) << 0x20) >> 0x1e));
                  *pbVar5 = *pbVar5 + (char)((uVar87 - *pbVar5) * 0x55 >> 8);
                  pbVar5[1] = pbVar5[1] + (char)((uVar96 - pbVar5[1]) * 0x55 >> 8);
                  pbVar5[2] = pbVar5[2] + (char)((uVar88 - pbVar5[2]) * 0x55 >> 8);
                  pbVar5[3] = pbVar5[3] + (char)((uVar112 - pbVar5[3]) * 0x55 >> 8);
                  puVar100 = (undefined1 *)
                             (param_1 + ((long)((ulong)(uVar89 + iVar94) << 0x20) >> 0x1e));
                  pbVar5 = (byte *)(param_1 +
                                   ((long)((ulong)((uVar99 | 1) + iVar97) << 0x20) >> 0x1e));
                  *puVar100 = uVar51;
                  puVar100[1] = uVar48;
                  puVar100[2] = uVar49;
                  puVar100[3] = uVar50;
                  *pbVar5 = *pbVar5 + (char)((uVar87 - *pbVar5) * 0xc0 >> 8);
                  pbVar5[1] = pbVar5[1] + (char)((uVar96 - pbVar5[1]) * 0xc0 >> 8);
                  pbVar5[2] = pbVar5[2] + (char)((uVar88 - pbVar5[2]) * 0xc0 >> 8);
                  pbVar5[3] = pbVar5[3] + (char)((uVar112 - pbVar5[3]) * 0xc0 >> 8);
                  puVar100 = (undefined1 *)
                             (param_1 + ((long)((ulong)(iVar97 + (uVar99 | 2)) << 0x20) >> 0x1e));
                  *puVar100 = uVar51;
                  puVar100[1] = uVar48;
                  puVar100[2] = uVar49;
                  puVar100[3] = uVar50;
                  puVar100 = (undefined1 *)
                             (param_1 + ((long)((ulong)(iVar97 + uVar89) << 0x20) >> 0x1e));
                  *puVar100 = uVar51;
                  puVar100[1] = uVar48;
                  puVar100[2] = uVar49;
                }
LAB_015a6ec0:
                puVar100[3] = uVar50;
              }
            }
          }
          uVar112 = uVar99 | 3;
          if (local_78 != 0) {
            if (local_78 == 1) {
              uVar17 = uVar12 >> 0x18;
              if (local_98 == 0) {
                bVar1 = false;
              }
              else {
                uVar87 = uVar15 >> 0x18;
                iVar97 = ((uVar12 & 0xff) * uVar17 >> 8) - ((uVar15 & 0xff) * uVar87 >> 8);
                iVar84 = ((uVar12 >> 8 & 0xff) * uVar17 >> 8) - ((uVar15 >> 8 & 0xff) * uVar87 >> 8)
                ;
                iVar54 = ((uVar12 >> 0x10 & 0xff) * uVar17 >> 8) -
                         ((uVar15 >> 0x10 & 0xff) * uVar87 >> 8);
                bVar1 = 0xe0ffff <
                        (uVar17 - uVar87) * (uVar17 - uVar87) * 0x1dc0 + iVar97 * iVar97 * 0x15aa +
                        (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                        (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54;
              }
              if (local_94 == 0) {
                bVar105 = false;
                uVar96 = (uVar12 & 0xff) * uVar17 >> 8;
                uVar88 = (uVar12 >> 8 & 0xff) * uVar17 >> 8;
                uVar87 = (uVar12 >> 0x10 & 0xff) * uVar17 >> 8;
              }
              else {
                uVar30 = uVar16 >> 0x18;
                uVar96 = (uVar12 & 0xff) * uVar17 >> 8;
                uVar88 = (uVar12 >> 8 & 0xff) * uVar17 >> 8;
                uVar87 = (uVar12 >> 0x10 & 0xff) * uVar17 >> 8;
                iVar97 = uVar96 - ((uVar16 & 0xff) * uVar30 >> 8);
                iVar84 = uVar88 - ((uVar16 >> 8 & 0xff) * uVar30 >> 8);
                iVar54 = uVar87 - ((uVar16 >> 0x10 & 0xff) * uVar30 >> 8);
                bVar105 = 0xe0ffff <
                          (uVar17 - uVar30) * (uVar17 - uVar30) * 0x1dc0 + iVar97 * iVar97 * 0x15aa
                          + (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54;
              }
              uVar30 = uVar108 >> 0x18;
              uVar31 = (uVar108 & 0xff) * uVar30 >> 8;
              uVar32 = (uVar108 >> 8 & 0xff) * uVar30 >> 8;
              iVar97 = uVar88 - uVar32;
              uVar33 = (uVar108 >> 0x10 & 0xff) * uVar30 >> 8;
              iVar84 = uVar96 - uVar31;
              if ((uVar17 - uVar30) * (uVar17 - uVar30) * 0x1dc0 + iVar84 * iVar84 * 0x15aa +
                  (iVar97 * 0x3343 + iVar84 * -0x30) * iVar97 +
                  ((uVar87 - uVar33) * 0x1054 + iVar97 * -0xf8e + iVar84 * -0x983) *
                  (uVar87 - uVar33) < 0xe10000) {
LAB_015a7108:
                bVar83 = false;
              }
              else {
                uVar17 = uVar16 >> 0x18;
                uVar34 = uVar3 >> 0x18;
                uVar106 = (uVar3 & 0xff) * uVar34 >> 8;
                iVar97 = ((uVar16 & 0xff) * uVar17 >> 8) - uVar106;
                uVar35 = (uVar3 >> 8 & 0xff) * uVar34 >> 8;
                iVar84 = ((uVar16 >> 8 & 0xff) * uVar17 >> 8) - uVar35;
                uVar36 = (uVar3 >> 0x10 & 0xff) * uVar34 >> 8;
                iVar54 = ((uVar16 >> 0x10 & 0xff) * uVar17 >> 8) - uVar36;
                if ((uVar17 - uVar34) * (uVar17 - uVar34) * 0x1dc0 + iVar97 * iVar97 * 0x15aa +
                    (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                    (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 >> 0x10 < 0xe1) {
                  iVar97 = uVar106 - uVar31;
                  iVar84 = uVar35 - uVar32;
                  iVar54 = uVar36 - uVar33;
                  if ((uVar34 - uVar30) * (uVar34 - uVar30) * 0x1dc0 + iVar97 * iVar97 * 0x15aa +
                      (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                      (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 >> 0x10 < 0xe1)
                  {
                    uVar17 = uVar14 >> 0x18;
                    uVar34 = (uVar14 & 0xff) * uVar17 >> 8;
                    uVar106 = (uVar14 >> 8 & 0xff) * uVar17 >> 8;
                    iVar97 = uVar32 - uVar106;
                    uVar32 = (uVar14 >> 0x10 & 0xff) * uVar17 >> 8;
                    iVar84 = uVar31 - uVar34;
                    iVar54 = uVar33 - uVar32;
                    if (0xe0 < (uVar30 - uVar17) * (uVar30 - uVar17) * 0x1dc0 +
                               iVar84 * iVar84 * 0x15aa +
                               (iVar84 * -0x30 + iVar97 * 0x3343) * iVar97 +
                               (iVar84 * -0x983 + iVar54 * 0x1054 + iVar97 * -0xf8e) * iVar54 >>
                               0x10) goto LAB_015a7108;
                    uVar30 = uVar15 >> 0x18;
                    iVar97 = uVar34 - ((uVar15 & 0xff) * uVar30 >> 8);
                    iVar84 = uVar106 - ((uVar15 >> 8 & 0xff) * uVar30 >> 8);
                    iVar54 = uVar32 - ((uVar15 >> 0x10 & 0xff) * uVar30 >> 8);
                    bVar83 = (uVar17 - uVar30) * (uVar17 - uVar30) * 0x1dc0 +
                             iVar97 * iVar97 * 0x15aa + (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84
                             + (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 <
                             0xe10000;
                    goto joined_r0x015a731c;
                  }
                }
                bVar83 = false;
              }
joined_r0x015a731c:
              if (bVar1) {
                bVar105 = true;
              }
              else {
                bVar105 = (bool)(bVar105 | bVar83);
              }
            }
            else {
              uVar87 = uVar12 >> 0x18;
              bVar105 = false;
              uVar96 = (uVar12 & 0xff) * uVar87 >> 8;
              uVar88 = (uVar12 >> 8 & 0xff) * uVar87 >> 8;
              uVar87 = (uVar12 >> 0x10 & 0xff) * uVar87 >> 8;
            }
            uVar17 = uVar3 >> 0x18;
            uVar30 = uVar14 >> 0x18;
            iVar97 = (uVar12 >> 0x18) - uVar30;
            iVar84 = (uVar12 >> 0x18) - uVar17;
            uVar31 = (uVar14 & 0xff) * uVar30 >> 8;
            uVar32 = (uVar14 >> 8 & 0xff) * uVar30 >> 8;
            uVar33 = (uVar14 >> 0x10 & 0xff) * uVar30 >> 8;
            iVar54 = uVar96 - uVar31;
            iVar55 = uVar88 - uVar32;
            iVar56 = uVar87 - uVar33;
            uVar34 = (uVar3 & 0xff) * uVar17 >> 8;
            uVar106 = (uVar3 >> 8 & 0xff) * uVar17 >> 8;
            iVar57 = uVar88 - uVar106;
            uVar88 = (uVar3 >> 0x10 & 0xff) * uVar17 >> 8;
            iVar58 = uVar96 - uVar34;
            iVar59 = uVar87 - uVar88;
            uVar87 = uVar14;
            if ((uint)(iVar58 * iVar58 * 0x15aa + iVar84 * iVar84 * 0x1dc0 +
                       (iVar57 * 0x3343 + iVar58 * -0x30) * iVar57 +
                      (iVar59 * 0x1054 + iVar57 * -0xf8e + iVar58 * -0x983) * iVar59) >> 0xe <=
                (uint)(iVar54 * iVar54 * 0x15aa + iVar97 * iVar97 * 0x1dc0 +
                       (iVar55 * 0x3343 + iVar54 * -0x30) * iVar55 +
                      (iVar56 * 0x1054 + iVar55 * -0xf8e + iVar54 * -0x983) * iVar56) >> 0xe) {
              uVar87 = uVar3;
            }
            if (bVar105) {
              uVar96 = uVar87 & 0xff;
              uVar88 = uVar87 >> 8 & 0xff;
              pbVar5 = (byte *)(param_1 + ((long)((ulong)((uVar112 - 3) + iVar94) << 0x20) >> 0x1e))
              ;
              pbVar6 = (byte *)(param_1 + ((long)((ulong)((uVar92 | 1) + uVar99) << 0x20) >> 0x1e));
              bVar18 = *pbVar6;
              bVar19 = pbVar5[2];
              uVar17 = uVar87 >> 0x10 & 0xff;
              bVar20 = pbVar5[3];
              uVar87 = uVar87 >> 0x18;
              *pbVar5 = *pbVar5 + (char)((uVar96 - *pbVar5) * 0x17 >> 8);
              bVar21 = pbVar6[1];
              pbVar5[1] = pbVar5[1] + (char)((uVar88 - pbVar5[1]) * 0x17 >> 8);
              bVar22 = pbVar6[2];
              *pbVar6 = bVar18 + (char)((uVar96 - bVar18) * 0x17 >> 8);
              pbVar5[2] = bVar19 + (char)((uVar17 - bVar19) * 0x17 >> 8);
              pbVar7 = (byte *)(param_1 + ((long)((ulong)((uVar112 - 3) + uVar92) << 0x20) >> 0x1e))
              ;
              bVar18 = pbVar7[2];
              pbVar5[3] = bVar20 + (char)((uVar87 - bVar20) * 0x17 >> 8);
              pbVar6[1] = bVar21 + (char)((uVar88 - bVar21) * 0x17 >> 8);
              pbVar6[2] = bVar22 + (char)((uVar17 - bVar22) * 0x17 >> 8);
              pbVar6[3] = pbVar6[3] + (char)((uVar87 - pbVar6[3]) * 0x17 >> 8);
              pbVar7[2] = bVar18 + (char)((uVar17 - bVar18) * 0xb0 >> 8);
              *pbVar7 = *pbVar7 + (char)((uVar96 - *pbVar7) * 0xb0 >> 8);
              pbVar7[1] = pbVar7[1] + (char)((uVar88 - pbVar7[1]) * 0xb0 >> 8);
              pbVar7[3] = pbVar7[3] + (char)((uVar87 - pbVar7[3]) * 0xb0 >> 8);
            }
            else {
              uVar96 = uVar16 >> 0x18;
              iVar97 = uVar31 - ((uVar16 & 0xff) * uVar96 >> 8);
              iVar84 = uVar32 - ((uVar16 >> 8 & 0xff) * uVar96 >> 8);
              iVar54 = uVar33 - ((uVar16 >> 0x10 & 0xff) * uVar96 >> 8);
              fVar113 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar30 - uVar96) * (uVar30 - uVar96) * 0x1dc0 +
                                          iVar97 * iVar97 * 0x15aa +
                                          (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) *
                                          iVar54 >> 0x16) * 4);
              uVar96 = uVar15 >> 0x18;
              iVar97 = uVar34 - ((uVar15 & 0xff) * uVar96 >> 8);
              iVar84 = uVar106 - ((uVar15 >> 8 & 0xff) * uVar96 >> 8);
              iVar54 = uVar88 - ((uVar15 >> 0x10 & 0xff) * uVar96 >> 8);
              fVar114 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar17 - uVar96) * (uVar17 - uVar96) * 0x1dc0 +
                                          iVar97 * iVar97 * 0x15aa +
                                          (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) *
                                          iVar54 >> 0x16) * 4) * 2.2;
              uVar51 = (undefined1)uVar87;
              uVar48 = (undefined1)(uVar87 >> 8);
              uVar49 = (undefined1)(uVar87 >> 0x10);
              uVar50 = (undefined1)(uVar87 >> 0x18);
              if ((*(float *)(&DAT_04175bc0 +
                             (ulong)((uVar17 - uVar96) * (uVar17 - uVar96) * 0x1dc0 +
                                     iVar97 * iVar97 * 0x15aa +
                                     (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                     (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54
                                    >> 0x16) * 4) < fVar113 * 2.2) || (uVar12 == uVar16)) {
                if ((fVar113 < fVar114) || ((uVar12 == uVar15 || (uVar13 == uVar15))))
                goto LAB_015a78e8;
LAB_015a76f8:
                uVar96 = uVar87 & 0xff;
                uVar88 = uVar87 >> 8 & 0xff;
                uVar17 = uVar87 >> 0x10 & 0xff;
                uVar87 = uVar87 >> 0x18;
                pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + iVar95) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)(uVar96 - *pbVar5 >> 2);
                pbVar5[1] = pbVar5[1] + (char)(uVar88 - pbVar5[1] >> 2);
                pbVar5[2] = pbVar5[2] + (char)(uVar17 - pbVar5[2] >> 2);
                pbVar6 = (byte *)(param_1 + ((long)((ulong)((uVar92 | 2) + uVar99) << 0x20) >> 0x1e)
                                 );
                pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                *pbVar6 = *pbVar6 + (char)((uVar96 - *pbVar6) * 0xc0 >> 8);
                pbVar6[1] = pbVar6[1] + (char)((uVar88 - pbVar6[1]) * 0xc0 >> 8);
                pbVar6[2] = pbVar6[2] + (char)((uVar17 - pbVar6[2]) * 0xc0 >> 8);
                pbVar6[3] = pbVar6[3] + (char)((uVar87 - pbVar6[3]) * 0xc0 >> 8);
                pbVar5 = (byte *)(param_1 +
                                 ((long)((ulong)((uVar112 - 2) + iVar94) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)(uVar96 - *pbVar5 >> 2);
                pbVar5[1] = pbVar5[1] + (char)(uVar88 - pbVar5[1] >> 2);
                pbVar5[2] = pbVar5[2] + (char)(uVar17 - pbVar5[2] >> 2);
                pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                puVar100 = (undefined1 *)
                           (param_1 + ((long)((ulong)((uVar112 - 2) + uVar92) << 0x20) >> 0x1e));
                *puVar100 = uVar51;
                puVar100[1] = uVar48;
                puVar100[2] = uVar49;
                puVar100[3] = uVar50;
                pbVar5 = (byte *)(param_1 +
                                 ((long)((ulong)((uVar112 - 3) + iVar94) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)((uVar96 - *pbVar5) * 0xc0 >> 8);
                pbVar5[1] = pbVar5[1] + (char)((uVar88 - pbVar5[1]) * 0xc0 >> 8);
                pbVar5[2] = pbVar5[2] + (char)((uVar17 - pbVar5[2]) * 0xc0 >> 8);
                pbVar5[3] = pbVar5[3] + (char)((uVar87 - pbVar5[3]) * 0xc0 >> 8);
                puVar100 = (undefined1 *)
                           (param_1 + ((long)((ulong)((uVar112 - 3) + uVar92) << 0x20) >> 0x1e));
                *puVar100 = uVar51;
                puVar100[1] = uVar48;
                puVar100[2] = uVar49;
LAB_015a8cec:
                puVar100[3] = uVar50;
              }
              else {
                if ((fVar113 < fVar114) || (uVar12 == uVar15)) {
                  if (uVar10 != uVar16) goto LAB_015a88a8;
                }
                else {
                  if (uVar10 != uVar16) {
                    if (uVar13 != uVar15) {
                      uVar96 = uVar87 & 0xff;
                      uVar88 = uVar87 >> 8 & 0xff;
                      uVar17 = uVar87 >> 0x10 & 0xff;
                      uVar87 = uVar87 >> 0x18;
                      pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + iVar95) << 0x20) >> 0x1e)
                                       );
                      *pbVar5 = *pbVar5 + (char)(uVar96 - *pbVar5 >> 2);
                      pbVar5[1] = pbVar5[1] + (char)(uVar88 - pbVar5[1] >> 2);
                      pbVar5[2] = pbVar5[2] + (char)(uVar17 - pbVar5[2] >> 2);
                      pbVar6 = (byte *)(param_1 +
                                       ((long)((ulong)((uVar92 | 2) + uVar99) << 0x20) >> 0x1e));
                      pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                      *pbVar6 = *pbVar6 + (char)((uVar96 - *pbVar6) * 0xc0 >> 8);
                      pbVar6[1] = pbVar6[1] + (char)((uVar88 - pbVar6[1]) * 0xc0 >> 8);
                      pbVar5 = (byte *)(param_1 +
                                       ((long)((ulong)((uVar112 - 2) + iVar94) << 0x20) >> 0x1e));
                      pbVar6[2] = pbVar6[2] + (char)((uVar17 - pbVar6[2]) * 0xc0 >> 8);
                      bVar18 = *pbVar5;
                      pbVar6[3] = pbVar6[3] + (char)((uVar87 - pbVar6[3]) * 0xc0 >> 8);
                      *pbVar5 = bVar18 + (char)((uVar96 - bVar18) * 0x55 >> 8);
                      pbVar5[1] = pbVar5[1] + (char)((uVar88 - pbVar5[1]) * 0x55 >> 8);
                      pbVar5[2] = pbVar5[2] + (char)((uVar17 - pbVar5[2]) * 0x55 >> 8);
                      pbVar5[3] = pbVar5[3] + (char)((uVar87 - pbVar5[3]) * 0x55 >> 8);
                      puVar100 = (undefined1 *)
                                 (param_1 +
                                 ((long)((ulong)((uVar112 - 2) + uVar92) << 0x20) >> 0x1e));
                      *puVar100 = uVar51;
                      puVar100[1] = uVar48;
                      puVar100[2] = uVar49;
                      puVar100[3] = uVar50;
                      iVar97 = uVar112 - 3;
                      pbVar5 = (byte *)(param_1 + ((long)((ulong)(iVar97 + uVar86) << 0x20) >> 0x1e)
                                       );
                      *pbVar5 = *pbVar5 + (char)(uVar96 - *pbVar5 >> 2);
                      pbVar5[1] = pbVar5[1] + (char)(uVar88 - pbVar5[1] >> 2);
                      pbVar5[2] = pbVar5[2] + (char)(uVar17 - pbVar5[2] >> 2);
                      pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                      pbVar5 = (byte *)(param_1 +
                                       ((long)((ulong)(uint)(iVar97 + iVar111) << 0x20) >> 0x1e));
                      *pbVar5 = *pbVar5 + (char)((uVar96 - *pbVar5) * 0xc0 >> 8);
                      pbVar5[1] = pbVar5[1] + (char)((uVar88 - pbVar5[1]) * 0xc0 >> 8);
                      pbVar5[2] = pbVar5[2] + (char)((uVar17 - pbVar5[2]) * 0xc0 >> 8);
                      pbVar5[3] = pbVar5[3] + (char)((uVar87 - pbVar5[3]) * 0xc0 >> 8);
                      puVar100 = (undefined1 *)
                                 (param_1 + ((long)((ulong)(uint)(iVar97 + iVar94) << 0x20) >> 0x1e)
                                 );
                      *puVar100 = uVar51;
                      puVar100[1] = uVar48;
                      puVar100[2] = uVar49;
                      puVar100[3] = uVar50;
                      puVar100 = (undefined1 *)
                                 (param_1 + ((long)((ulong)(iVar97 + uVar92) << 0x20) >> 0x1e));
                      *puVar100 = uVar51;
                      puVar100[1] = uVar48;
                      puVar100[2] = uVar49;
                      goto LAB_015a8cec;
                    }
LAB_015a88a8:
                    iVar97 = uVar112 - 3;
                    uVar96 = uVar87 & 0xff;
                    uVar88 = uVar87 >> 8 & 0xff;
                    uVar17 = uVar87 >> 0x10 & 0xff;
                    uVar87 = uVar87 >> 0x18;
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)((uVar112 - 2) + iVar94) << 0x20) >> 0x1e));
                    *pbVar5 = *pbVar5 + (char)(uVar96 - *pbVar5 >> 2);
                    pbVar5[1] = pbVar5[1] + (char)(uVar88 - pbVar5[1] >> 2);
                    pbVar5[2] = pbVar5[2] + (char)(uVar17 - pbVar5[2] >> 2);
                    pbVar6 = (byte *)(param_1 + ((long)((ulong)(iVar97 + uVar86) << 0x20) >> 0x1e));
                    pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                    *pbVar6 = *pbVar6 + (char)(uVar96 - *pbVar6 >> 2);
                    pbVar6[1] = pbVar6[1] + (char)(uVar88 - pbVar6[1] >> 2);
                    pbVar6[2] = pbVar6[2] + (char)(uVar17 - pbVar6[2] >> 2);
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)((uVar112 - 2) + uVar92) << 0x20) >> 0x1e));
                    pbVar6[3] = pbVar6[3] + (char)(uVar87 - pbVar6[3] >> 2);
                    *pbVar5 = *pbVar5 + (char)((uVar96 - *pbVar5) * 0xc0 >> 8);
                    pbVar5[1] = pbVar5[1] + (char)((uVar88 - pbVar5[1]) * 0xc0 >> 8);
                    pbVar5[2] = pbVar5[2] + (char)((uVar17 - pbVar5[2]) * 0xc0 >> 8);
                    pbVar6 = (byte *)(param_1 +
                                     ((long)((ulong)(uint)(iVar97 + iVar111) << 0x20) >> 0x1e));
                    pbVar5[3] = pbVar5[3] + (char)((uVar87 - pbVar5[3]) * 0xc0 >> 8);
                    *pbVar6 = *pbVar6 + (char)((uVar96 - *pbVar6) * 0xc0 >> 8);
                    pbVar6[1] = pbVar6[1] + (char)((uVar88 - pbVar6[1]) * 0xc0 >> 8);
                    pbVar6[2] = pbVar6[2] + (char)((uVar17 - pbVar6[2]) * 0xc0 >> 8);
                    pbVar6[3] = pbVar6[3] + (char)((uVar87 - pbVar6[3]) * 0xc0 >> 8);
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)(uint)(iVar97 + iVar94) << 0x20) >> 0x1e));
                    *puVar100 = uVar51;
                    puVar100[1] = uVar48;
                    puVar100[2] = uVar49;
                    puVar100[3] = uVar50;
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)(iVar97 + uVar92) << 0x20) >> 0x1e));
                    *puVar100 = uVar51;
                    puVar100[1] = uVar48;
                    puVar100[2] = uVar49;
                    goto LAB_015a8cec;
                  }
                  if (uVar13 != uVar15) goto LAB_015a76f8;
                }
LAB_015a78e8:
                uVar96 = uVar87 >> 8 & 0xff;
                uVar88 = uVar87 >> 0x10 & 0xff;
                pbVar5 = (byte *)(param_1 + ((long)((ulong)((uVar92 | 1) + uVar99) << 0x20) >> 0x1e)
                                 );
                pbVar6 = (byte *)(param_1 +
                                 ((long)((ulong)((uVar112 - 3) + iVar94) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)((uVar87 & 0xff) - (uint)*pbVar5 >> 1);
                pbVar5[1] = pbVar5[1] + (char)(uVar96 - pbVar5[1] >> 1);
                bVar18 = *pbVar6;
                pbVar5[2] = pbVar5[2] + (char)(uVar88 - pbVar5[2] >> 1);
                pbVar5[3] = pbVar5[3] + (char)((uVar87 >> 0x18) - (uint)pbVar5[3] >> 1);
                *pbVar6 = bVar18 + (char)((uVar87 & 0xff) - (uint)bVar18 >> 1);
                pbVar6[1] = pbVar6[1] + (char)(uVar96 - pbVar6[1] >> 1);
                pbVar6[2] = pbVar6[2] + (char)(uVar88 - pbVar6[2] >> 1);
                pbVar6[3] = pbVar6[3] + (char)((uVar87 >> 0x18) - (uint)pbVar6[3] >> 1);
                puVar100 = (undefined1 *)
                           (param_1 + ((long)((ulong)((uVar112 - 3) + uVar92) << 0x20) >> 0x1e));
                *puVar100 = uVar51;
                puVar100[1] = uVar48;
                puVar100[3] = uVar50;
                puVar100[2] = uVar49;
              }
            }
          }
          if (local_98 != 0) {
            if (local_98 == 1) {
              uVar17 = uVar12 >> 0x18;
              if (local_9c == 0) {
                bVar1 = false;
                if (local_78 != 0) goto LAB_015a7a88;
LAB_015a7b58:
                bVar105 = false;
                uVar87 = (uVar12 >> 8 & 0xff) * uVar17 >> 8;
                uVar88 = (uVar12 & 0xff) * uVar17 >> 8;
                uVar96 = (uVar12 >> 0x10 & 0xff) * uVar17 >> 8;
              }
              else {
                uVar87 = uVar108 >> 0x18;
                iVar97 = ((uVar12 & 0xff) * uVar17 >> 8) - ((uVar108 & 0xff) * uVar87 >> 8);
                iVar84 = ((uVar12 >> 8 & 0xff) * uVar17 >> 8) -
                         ((uVar108 >> 8 & 0xff) * uVar87 >> 8);
                iVar54 = ((uVar12 >> 0x10 & 0xff) * uVar17 >> 8) -
                         ((uVar108 >> 0x10 & 0xff) * uVar87 >> 8);
                bVar1 = 0xe0ffff <
                        (uVar17 - uVar87) * (uVar17 - uVar87) * 0x1dc0 + iVar97 * iVar97 * 0x15aa +
                        (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                        (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54;
                if (local_78 == 0) goto LAB_015a7b58;
LAB_015a7a88:
                uVar30 = uVar11 >> 0x18;
                uVar87 = (uVar12 >> 8 & 0xff) * uVar17 >> 8;
                uVar96 = (uVar12 >> 0x10 & 0xff) * uVar17 >> 8;
                uVar88 = (uVar12 & 0xff) * uVar17 >> 8;
                iVar97 = uVar96 - ((uVar11 >> 0x10 & 0xff) * uVar30 >> 8);
                iVar84 = uVar88 - ((uVar11 & 0xff) * uVar30 >> 8);
                iVar54 = uVar87 - ((uVar11 >> 8 & 0xff) * uVar30 >> 8);
                bVar105 = 0xe0ffff <
                          (uVar17 - uVar30) * (uVar17 - uVar30) * 0x1dc0 + iVar84 * iVar84 * 0x15aa
                          + (iVar84 * -0x30 + iVar54 * 0x3343) * iVar54 +
                          (iVar84 * -0x983 + iVar97 * 0x1054 + iVar54 * -0xf8e) * iVar97;
              }
              uVar30 = uVar16 >> 0x18;
              uVar31 = (uVar16 & 0xff) * uVar30 >> 8;
              uVar32 = (uVar16 >> 8 & 0xff) * uVar30 >> 8;
              iVar97 = uVar87 - uVar32;
              uVar33 = (uVar16 >> 0x10 & 0xff) * uVar30 >> 8;
              iVar84 = uVar88 - uVar31;
              if ((uVar17 - uVar30) * (uVar17 - uVar30) * 0x1dc0 + iVar84 * iVar84 * 0x15aa +
                  (iVar97 * 0x3343 + iVar84 * -0x30) * iVar97 +
                  ((uVar96 - uVar33) * 0x1054 + iVar97 * -0xf8e + iVar84 * -0x983) *
                  (uVar96 - uVar33) < 0xe10000) {
joined_r0x015a7e00:
                bVar83 = false;
              }
              else {
                uVar17 = uVar10 >> 0x18;
                uVar34 = uVar11 >> 0x18;
                uVar106 = (uVar10 & 0xff) * uVar17 >> 8;
                iVar97 = ((uVar11 & 0xff) * uVar34 >> 8) - uVar106;
                uVar35 = (uVar10 >> 8 & 0xff) * uVar17 >> 8;
                iVar84 = ((uVar11 >> 8 & 0xff) * uVar34 >> 8) - uVar35;
                uVar36 = (uVar10 >> 0x10 & 0xff) * uVar17 >> 8;
                iVar54 = ((uVar11 >> 0x10 & 0xff) * uVar34 >> 8) - uVar36;
                if (0xe0 < (uVar34 - uVar17) * (uVar34 - uVar17) * 0x1dc0 + iVar97 * iVar97 * 0x15aa
                           + (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                           (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 >> 0x10)
                goto joined_r0x015a7e00;
                iVar97 = uVar106 - uVar31;
                iVar84 = uVar35 - uVar32;
                iVar54 = uVar36 - uVar33;
                if (0xe0 < (uVar17 - uVar30) * (uVar17 - uVar30) * 0x1dc0 + iVar97 * iVar97 * 0x15aa
                           + (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                           (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 >> 0x10)
                goto joined_r0x015a7e00;
                uVar17 = uVar3 >> 0x18;
                uVar34 = (uVar3 & 0xff) * uVar17 >> 8;
                uVar106 = (uVar3 >> 8 & 0xff) * uVar17 >> 8;
                iVar97 = uVar32 - uVar106;
                uVar32 = (uVar3 >> 0x10 & 0xff) * uVar17 >> 8;
                iVar84 = uVar31 - uVar34;
                iVar54 = uVar33 - uVar32;
                if (0xe0 < (uVar30 - uVar17) * (uVar30 - uVar17) * 0x1dc0 + iVar84 * iVar84 * 0x15aa
                           + (iVar84 * -0x30 + iVar97 * 0x3343) * iVar97 +
                           (iVar84 * -0x983 + iVar54 * 0x1054 + iVar97 * -0xf8e) * iVar54 >> 0x10)
                goto joined_r0x015a7e00;
                uVar30 = uVar108 >> 0x18;
                iVar97 = uVar34 - ((uVar108 & 0xff) * uVar30 >> 8);
                iVar84 = uVar106 - ((uVar108 >> 8 & 0xff) * uVar30 >> 8);
                iVar54 = uVar32 - ((uVar108 >> 0x10 & 0xff) * uVar30 >> 8);
                bVar83 = (uVar17 - uVar30) * (uVar17 - uVar30) * 0x1dc0 + iVar97 * iVar97 * 0x15aa +
                         (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                         (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 < 0xe10000;
              }
              if (bVar1) {
                bVar105 = true;
              }
              else {
                bVar105 = (bool)(bVar105 | bVar83);
              }
            }
            else {
              uVar96 = uVar12 >> 0x18;
              bVar105 = false;
              uVar87 = (uVar12 >> 8 & 0xff) * uVar96 >> 8;
              uVar88 = (uVar12 & 0xff) * uVar96 >> 8;
              uVar96 = (uVar12 >> 0x10 & 0xff) * uVar96 >> 8;
            }
            uVar17 = uVar3 >> 0x18;
            iVar97 = (uVar12 >> 0x18) - uVar17;
            uVar30 = (uVar3 & 0xff) * uVar17 >> 8;
            uVar31 = (uVar3 >> 8 & 0xff) * uVar17 >> 8;
            uVar32 = (uVar3 >> 0x10 & 0xff) * uVar17 >> 8;
            iVar84 = uVar88 - uVar30;
            iVar54 = uVar87 - uVar31;
            uVar33 = uVar10 >> 0x18;
            iVar55 = (uVar12 >> 0x18) - uVar33;
            iVar56 = uVar96 - uVar32;
            uVar34 = (uVar10 & 0xff) * uVar33 >> 8;
            iVar57 = uVar88 - uVar34;
            uVar88 = (uVar10 >> 8 & 0xff) * uVar33 >> 8;
            uVar106 = (uVar10 >> 0x10 & 0xff) * uVar33 >> 8;
            iVar58 = uVar87 - uVar88;
            iVar59 = uVar96 - uVar106;
            uVar87 = uVar3;
            if ((uint)(iVar57 * iVar57 * 0x15aa + iVar55 * iVar55 * 0x1dc0 +
                       (iVar58 * 0x3343 + iVar57 * -0x30) * iVar58 +
                      (iVar59 * 0x1054 + iVar58 * -0xf8e + iVar57 * -0x983) * iVar59) >> 0xe <=
                (uint)(iVar84 * iVar84 * 0x15aa + iVar97 * iVar97 * 0x1dc0 +
                       (iVar54 * 0x3343 + iVar84 * -0x30) * iVar54 +
                      (iVar56 * 0x1054 + iVar54 * -0xf8e + iVar84 * -0x983) * iVar56) >> 0xe) {
              uVar87 = uVar10;
            }
            if (bVar105) {
              uVar89 = uVar87 & 0xff;
              uVar108 = uVar87 >> 8 & 0xff;
              pbVar5 = (byte *)(param_1 + ((long)((ulong)((uVar112 - 3) + iVar111) << 0x20) >> 0x1e)
                               );
              pbVar6 = (byte *)(param_1 + ((long)((ulong)(uVar101 + uVar99) << 0x20) >> 0x1e));
              bVar18 = *pbVar6;
              bVar19 = pbVar5[2];
              uVar96 = uVar87 >> 0x10 & 0xff;
              bVar20 = pbVar5[3];
              uVar87 = uVar87 >> 0x18;
              *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0x17 >> 8);
              bVar21 = pbVar6[1];
              pbVar5[1] = pbVar5[1] + (char)((uVar108 - pbVar5[1]) * 0x17 >> 8);
              bVar22 = pbVar6[2];
              *pbVar6 = bVar18 + (char)((uVar89 - bVar18) * 0x17 >> 8);
              pbVar5[2] = bVar19 + (char)((uVar96 - bVar19) * 0x17 >> 8);
              pbVar5[3] = bVar20 + (char)((uVar87 - bVar20) * 0x17 >> 8);
              pbVar6[1] = bVar21 + (char)((uVar108 - bVar21) * 0x17 >> 8);
              pbVar6[2] = bVar22 + (char)((uVar96 - bVar22) * 0x17 >> 8);
              pbVar6[3] = pbVar6[3] + (char)((uVar87 - pbVar6[3]) * 0x17 >> 8);
              pbVar5 = (byte *)(param_1 + ((long)((ulong)((uVar112 - 3) + uVar86) << 0x20) >> 0x1e))
              ;
              *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0xb0 >> 8);
              pbVar5[1] = pbVar5[1] + (char)((uVar108 - pbVar5[1]) * 0xb0 >> 8);
              pbVar5[2] = pbVar5[2] + (char)((uVar96 - pbVar5[2]) * 0xb0 >> 8);
              pbVar5[3] = pbVar5[3] + (char)((uVar87 - pbVar5[3]) * 0xb0 >> 8);
            }
            else {
              uVar96 = uVar11 >> 0x18;
              iVar97 = uVar30 - ((uVar11 & 0xff) * uVar96 >> 8);
              iVar84 = uVar31 - ((uVar11 >> 8 & 0xff) * uVar96 >> 8);
              iVar54 = uVar32 - ((uVar11 >> 0x10 & 0xff) * uVar96 >> 8);
              fVar113 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar17 - uVar96) * (uVar17 - uVar96) * 0x1dc0 +
                                          iVar97 * iVar97 * 0x15aa +
                                          (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) *
                                          iVar54 >> 0x16) * 4);
              uVar96 = uVar108 >> 0x18;
              iVar97 = uVar34 - ((uVar108 & 0xff) * uVar96 >> 8);
              iVar84 = uVar88 - ((uVar108 >> 8 & 0xff) * uVar96 >> 8);
              iVar54 = uVar106 - ((uVar108 >> 0x10 & 0xff) * uVar96 >> 8);
              fVar114 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar33 - uVar96) * (uVar33 - uVar96) * 0x1dc0 +
                                          iVar97 * iVar97 * 0x15aa +
                                          (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) *
                                          iVar54 >> 0x16) * 4) * 2.2;
              uVar51 = (undefined1)uVar87;
              uVar48 = (undefined1)(uVar87 >> 8);
              uVar49 = (undefined1)(uVar87 >> 0x10);
              uVar50 = (undefined1)(uVar87 >> 0x18);
              if ((*(float *)(&DAT_04175bc0 +
                             (ulong)((uVar33 - uVar96) * (uVar33 - uVar96) * 0x1dc0 +
                                     iVar97 * iVar97 * 0x15aa +
                                     (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                     (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54
                                    >> 0x16) * 4) < fVar113 * 2.2) || (uVar12 == uVar11)) {
                if (fVar114 <= fVar113 && uVar12 != uVar108) {
LAB_015a83d0:
                  iVar97 = uVar112 - 3;
                  if (uVar14 != uVar108) {
                    uVar89 = uVar87 & 0xff;
                    uVar108 = uVar87 >> 8 & 0xff;
                    uVar96 = uVar87 >> 0x10 & 0xff;
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)(uint)(iVar97 + iVar95) << 0x20) >> 0x1e));
                    uVar87 = uVar87 >> 0x18;
                    *pbVar5 = *pbVar5 + (char)(uVar89 - *pbVar5 >> 2);
                    pbVar5[1] = pbVar5[1] + (char)(uVar108 - pbVar5[1] >> 2);
                    pbVar5[2] = pbVar5[2] + (char)(uVar96 - pbVar5[2] >> 2);
                    pbVar6 = (byte *)(param_1 +
                                     ((long)((ulong)(uint)(iVar97 + iVar94) << 0x20) >> 0x1e));
                    pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                    *pbVar6 = *pbVar6 + (char)((uVar89 - *pbVar6) * 0xc0 >> 8);
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)((uVar112 - 2) + iVar111) << 0x20) >> 0x1e));
                    pbVar6[1] = pbVar6[1] + (char)((uVar108 - pbVar6[1]) * 0xc0 >> 8);
                    bVar18 = *pbVar5;
                    pbVar6[2] = pbVar6[2] + (char)((uVar96 - pbVar6[2]) * 0xc0 >> 8);
                    bVar19 = pbVar5[1];
                    pbVar6[3] = pbVar6[3] + (char)((uVar87 - pbVar6[3]) * 0xc0 >> 8);
                    bVar20 = pbVar5[2];
                    *pbVar5 = bVar18 + (char)(uVar89 - bVar18 >> 2);
                    pbVar5[1] = bVar19 + (char)(uVar108 - bVar19 >> 2);
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)(uint)(iVar97 + iVar111) << 0x20) >> 0x1e))
                    ;
                    bVar18 = pbVar5[3];
                    *puVar100 = uVar51;
                    pbVar5[2] = bVar20 + (char)(uVar96 - bVar20 >> 2);
                    puVar8 = (undefined1 *)
                             (param_1 + ((long)((ulong)(iVar97 + uVar86) << 0x20) >> 0x1e));
                    puVar100[1] = uVar48;
                    puVar100[2] = uVar49;
                    pbVar5[3] = bVar18 + (char)(uVar87 - bVar18 >> 2);
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)((uVar112 - 2) + uVar86) << 0x20) >> 0x1e));
                    puVar100[3] = uVar50;
                    bVar18 = pbVar5[1];
                    bVar19 = pbVar5[2];
                    bVar20 = pbVar5[3];
                    *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0xc0 >> 8);
                    *puVar8 = uVar51;
                    pbVar5[1] = bVar18 + (char)((uVar108 - bVar18) * 0xc0 >> 8);
                    puVar8[1] = uVar48;
                    pbVar5[2] = bVar19 + (char)((uVar96 - bVar19) * 0xc0 >> 8);
                    puVar8[2] = uVar49;
                    pbVar5[3] = bVar20 + (char)((uVar87 - bVar20) * 0xc0 >> 8);
                    puVar8[3] = uVar50;
                    goto LAB_015a8d00;
                  }
                }
LAB_015a85d4:
                uVar89 = uVar87 >> 8 & 0xff;
                uVar108 = uVar87 >> 0x10 & 0xff;
                pbVar5 = (byte *)(param_1 +
                                 ((long)((ulong)((uVar112 - 3) + iVar111) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)((uVar87 & 0xff) - (uint)*pbVar5 >> 1);
                pbVar5[1] = pbVar5[1] + (char)(uVar89 - pbVar5[1] >> 1);
                pbVar5[2] = pbVar5[2] + (char)(uVar108 - pbVar5[2] >> 1);
                pbVar5[3] = pbVar5[3] + (char)((uVar87 >> 0x18) - (uint)pbVar5[3] >> 1);
                pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar101 + uVar99) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)((uVar87 & 0xff) - (uint)*pbVar5 >> 1);
                pbVar5[1] = pbVar5[1] + (char)(uVar89 - pbVar5[1] >> 1);
                pbVar5[2] = pbVar5[2] + (char)(uVar108 - pbVar5[2] >> 1);
                pbVar5[3] = pbVar5[3] + (char)((uVar87 >> 0x18) - (uint)pbVar5[3] >> 1);
                puVar100 = (undefined1 *)
                           (param_1 + ((long)((ulong)((uVar112 - 3) + uVar86) << 0x20) >> 0x1e));
                *puVar100 = uVar51;
                puVar100[1] = uVar48;
                puVar100[3] = uVar50;
                puVar100[2] = uVar49;
              }
              else {
                if (fVar113 < fVar114 || uVar12 == uVar108) {
                  if (uVar13 == uVar11) goto LAB_015a85d4;
                }
                else {
                  if (uVar13 == uVar11) goto LAB_015a83d0;
                  if (uVar14 != uVar108) {
                    uVar108 = uVar87 & 0xff;
                    iVar97 = uVar112 - 3;
                    uVar96 = uVar87 >> 8 & 0xff;
                    uVar88 = uVar87 >> 0x10 & 0xff;
                    uVar87 = uVar87 >> 0x18;
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)(uint)(iVar97 + iVar95) << 0x20) >> 0x1e));
                    pbVar6 = (byte *)(param_1 +
                                     ((long)((ulong)(uint)(iVar97 + iVar94) << 0x20) >> 0x1e));
                    *pbVar5 = *pbVar5 + (char)(uVar108 - *pbVar5 >> 2);
                    pbVar5[1] = pbVar5[1] + (char)(uVar96 - pbVar5[1] >> 2);
                    pbVar5[2] = pbVar5[2] + (char)(uVar88 - pbVar5[2] >> 2);
                    pbVar7 = (byte *)(param_1 +
                                     ((long)((ulong)((uVar112 - 2) + iVar111) << 0x20) >> 0x1e));
                    pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                    bVar18 = *pbVar6;
                    *pbVar7 = *pbVar7 + (char)((uVar108 - *pbVar7) * 0x55 >> 8);
                    bVar19 = pbVar6[2];
                    pbVar7[1] = pbVar7[1] + (char)((uVar96 - pbVar7[1]) * 0x55 >> 8);
                    bVar20 = pbVar6[3];
                    bVar21 = pbVar6[1];
                    pbVar7[2] = pbVar7[2] + (char)((uVar88 - pbVar7[2]) * 0x55 >> 8);
                    *pbVar6 = bVar18 + (char)((uVar108 - bVar18) * 0xc0 >> 8);
                    pbVar6[1] = bVar21 + (char)((uVar96 - bVar21) * 0xc0 >> 8);
                    pbVar6[2] = bVar19 + (char)((uVar88 - bVar19) * 0xc0 >> 8);
                    bVar18 = pbVar7[3];
                    pbVar6[3] = bVar20 + (char)((uVar87 - bVar20) * 0xc0 >> 8);
                    pbVar7[3] = bVar18 + (char)((uVar87 - bVar18) * 0x55 >> 8);
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)(uint)(iVar97 + iVar111) << 0x20) >> 0x1e))
                    ;
                    puVar8 = (undefined1 *)
                             (param_1 + ((long)((ulong)(iVar97 + uVar86) << 0x20) >> 0x1e));
                    *puVar100 = uVar51;
                    puVar100[1] = uVar48;
                    puVar100[2] = uVar49;
                    puVar100[3] = uVar50;
                    *puVar8 = uVar51;
                    puVar8[1] = uVar48;
                    puVar8[2] = uVar49;
                    puVar8[3] = uVar50;
                    pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + uVar86) << 0x20) >> 0x1e));
                    *pbVar5 = *pbVar5 + (char)(uVar108 - *pbVar5 >> 2);
                    pbVar5[1] = pbVar5[1] + (char)(uVar96 - pbVar5[1] >> 2);
                    pbVar5[2] = pbVar5[2] + (char)(uVar88 - pbVar5[2] >> 2);
                    pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                    pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar98 + uVar99) << 0x20) >> 0x1e));
                    *pbVar5 = *pbVar5 + (char)((uVar108 - *pbVar5) * 0xc0 >> 8);
                    pbVar5[1] = pbVar5[1] + (char)((uVar96 - pbVar5[1]) * 0xc0 >> 8);
                    pbVar5[2] = pbVar5[2] + (char)((uVar88 - pbVar5[2]) * 0xc0 >> 8);
                    pbVar5[3] = pbVar5[3] + (char)((uVar87 - pbVar5[3]) * 0xc0 >> 8);
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)((uVar112 - 2) + uVar86) << 0x20) >> 0x1e))
                    ;
                    *puVar100 = uVar51;
                    puVar100[1] = uVar48;
                    puVar100[2] = uVar49;
                    puVar100[3] = uVar50;
                    goto LAB_015a8d00;
                  }
                }
                uVar108 = uVar87 & 0xff;
                uVar96 = uVar87 >> 8 & 0xff;
                uVar88 = uVar87 >> 0x10 & 0xff;
                uVar87 = uVar87 >> 0x18;
                pbVar5 = (byte *)(param_1 +
                                 ((long)((ulong)((uVar112 - 2) + iVar111) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)(uVar108 - *pbVar5 >> 2);
                pbVar5[1] = pbVar5[1] + (char)(uVar96 - pbVar5[1] >> 2);
                pbVar5[2] = pbVar5[2] + (char)(uVar88 - pbVar5[2] >> 2);
                pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                pbVar5 = (byte *)(param_1 +
                                 ((long)((ulong)((uVar112 - 3) + iVar111) << 0x20) >> 0x1e));
                bVar18 = *pbVar5;
                bVar19 = pbVar5[1];
                bVar20 = pbVar5[2];
                puVar100 = (undefined1 *)
                           (param_1 + ((long)((ulong)((uVar112 - 2) + uVar86) << 0x20) >> 0x1e));
                *puVar100 = uVar51;
                puVar100[3] = uVar50;
                *pbVar5 = bVar18 + (char)((uVar108 - bVar18) * 0xc0 >> 8);
                pbVar5[1] = bVar19 + (char)((uVar96 - bVar19) * 0xc0 >> 8);
                pbVar5[2] = bVar20 + (char)((uVar88 - bVar20) * 0xc0 >> 8);
                pbVar5[3] = pbVar5[3] + (char)((uVar87 - pbVar5[3]) * 0xc0 >> 8);
                pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar89 + uVar86) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)(uVar108 - *pbVar5 >> 2);
                pbVar5[1] = pbVar5[1] + (char)(uVar96 - pbVar5[1] >> 2);
                pbVar5[2] = pbVar5[2] + (char)(uVar88 - pbVar5[2] >> 2);
                pbVar5[3] = pbVar5[3] + (char)(uVar87 - pbVar5[3] >> 2);
                pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar98 + uVar99) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)((uVar108 - *pbVar5) * 0xc0 >> 8);
                pbVar5[1] = pbVar5[1] + (char)((uVar96 - pbVar5[1]) * 0xc0 >> 8);
                pbVar5[2] = pbVar5[2] + (char)((uVar88 - pbVar5[2]) * 0xc0 >> 8);
                pbVar5[3] = pbVar5[3] + (char)((uVar87 - pbVar5[3]) * 0xc0 >> 8);
                puVar100[1] = uVar48;
                puVar100[2] = uVar49;
                puVar100 = (undefined1 *)
                           (param_1 + ((long)((ulong)((uVar112 - 3) + uVar86) << 0x20) >> 0x1e));
                *puVar100 = uVar51;
                puVar100[1] = uVar48;
                puVar100[2] = uVar49;
                puVar100[3] = uVar50;
              }
            }
          }
LAB_015a8d00:
          if (local_9c != 0) {
            if (local_9c == 1) {
              uVar87 = uVar12 >> 0x18;
              if (local_94 == 0) {
                bVar1 = false;
                if (local_98 != 0) goto LAB_015a8dc0;
LAB_015a8ea8:
                bVar105 = false;
                uVar89 = (uVar12 & 0xff) * uVar87 >> 8;
                uVar112 = (uVar12 >> 8 & 0xff) * uVar87 >> 8;
                uVar108 = (uVar12 >> 0x10 & 0xff) * uVar87 >> 8;
              }
              else {
                uVar89 = uVar16 >> 0x18;
                iVar97 = ((uVar12 & 0xff) * uVar87 >> 8) - ((uVar16 & 0xff) * uVar89 >> 8);
                iVar84 = ((uVar12 >> 8 & 0xff) * uVar87 >> 8) - ((uVar16 >> 8 & 0xff) * uVar89 >> 8)
                ;
                iVar54 = ((uVar12 >> 0x10 & 0xff) * uVar87 >> 8) -
                         ((uVar16 >> 0x10 & 0xff) * uVar89 >> 8);
                bVar1 = 0xe0ffff <
                        (uVar87 - uVar89) * (uVar87 - uVar89) * 0x1dc0 + iVar97 * iVar97 * 0x15aa +
                        (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                        (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54;
                if (local_98 == 0) goto LAB_015a8ea8;
LAB_015a8dc0:
                uVar96 = uVar15 >> 0x18;
                uVar89 = (uVar12 & 0xff) * uVar87 >> 8;
                uVar112 = (uVar12 >> 8 & 0xff) * uVar87 >> 8;
                uVar108 = (uVar12 >> 0x10 & 0xff) * uVar87 >> 8;
                iVar97 = uVar89 - ((uVar15 & 0xff) * uVar96 >> 8);
                iVar84 = uVar108 - ((uVar15 >> 0x10 & 0xff) * uVar96 >> 8);
                iVar54 = uVar112 - ((uVar15 >> 8 & 0xff) * uVar96 >> 8);
                bVar105 = 0xe0ffff <
                          (uVar87 - uVar96) * (uVar87 - uVar96) * 0x1dc0 + iVar97 * iVar97 * 0x15aa
                          + (iVar97 * -0x30 + iVar54 * 0x3343) * iVar54 +
                          (iVar97 * -0x983 + iVar84 * 0x1054 + iVar54 * -0xf8e) * iVar84;
              }
              uVar96 = uVar11 >> 0x18;
              uVar88 = (uVar11 & 0xff) * uVar96 >> 8;
              iVar97 = uVar89 - uVar88;
              uVar17 = (uVar11 >> 8 & 0xff) * uVar96 >> 8;
              iVar84 = uVar112 - uVar17;
              uVar11 = (uVar11 >> 0x10 & 0xff) * uVar96 >> 8;
              if ((uVar87 - uVar96) * (uVar87 - uVar96) * 0x1dc0 + iVar97 * iVar97 * 0x15aa +
                  (iVar84 * 0x3343 + iVar97 * -0x30) * iVar84 +
                  ((uVar108 - uVar11) * 0x1054 + iVar84 * -0xf8e + iVar97 * -0x983) *
                  (uVar108 - uVar11) < 0xe10000) {
joined_r0x015a9144:
                bVar83 = false;
              }
              else {
                uVar87 = uVar15 >> 0x18;
                uVar30 = uVar13 >> 0x18;
                uVar31 = (uVar13 >> 8 & 0xff) * uVar30 >> 8;
                uVar32 = (uVar13 >> 0x10 & 0xff) * uVar30 >> 8;
                iVar97 = ((uVar15 >> 8 & 0xff) * uVar87 >> 8) - uVar31;
                iVar84 = ((uVar15 >> 0x10 & 0xff) * uVar87 >> 8) - uVar32;
                uVar33 = (uVar13 & 0xff) * uVar30 >> 8;
                iVar54 = ((uVar15 & 0xff) * uVar87 >> 8) - uVar33;
                if (0xe0 < (uVar87 - uVar30) * (uVar87 - uVar30) * 0x1dc0 + iVar54 * iVar54 * 0x15aa
                           + (iVar54 * -0x30 + iVar97 * 0x3343) * iVar97 +
                           (iVar54 * -0x983 + iVar84 * 0x1054 + iVar97 * -0xf8e) * iVar84 >> 0x10)
                goto joined_r0x015a9144;
                iVar97 = uVar33 - uVar88;
                iVar84 = uVar31 - uVar17;
                iVar54 = uVar32 - uVar11;
                if (0xe0 < (uVar30 - uVar96) * (uVar30 - uVar96) * 0x1dc0 + iVar97 * iVar97 * 0x15aa
                           + (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                           (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 >> 0x10)
                goto joined_r0x015a9144;
                uVar87 = uVar10 >> 0x18;
                uVar30 = (uVar10 & 0xff) * uVar87 >> 8;
                uVar31 = (uVar10 >> 8 & 0xff) * uVar87 >> 8;
                iVar97 = uVar17 - uVar31;
                uVar17 = (uVar10 >> 0x10 & 0xff) * uVar87 >> 8;
                iVar84 = uVar88 - uVar30;
                iVar54 = uVar11 - uVar17;
                if (0xe0 < (uVar96 - uVar87) * (uVar96 - uVar87) * 0x1dc0 + iVar84 * iVar84 * 0x15aa
                           + (iVar84 * -0x30 + iVar97 * 0x3343) * iVar97 +
                           (iVar84 * -0x983 + iVar54 * 0x1054 + iVar97 * -0xf8e) * iVar54 >> 0x10)
                goto joined_r0x015a9144;
                uVar11 = uVar16 >> 0x18;
                iVar97 = uVar30 - ((uVar16 & 0xff) * uVar11 >> 8);
                iVar84 = uVar31 - ((uVar16 >> 8 & 0xff) * uVar11 >> 8);
                iVar54 = uVar17 - ((uVar16 >> 0x10 & 0xff) * uVar11 >> 8);
                bVar83 = (uVar87 - uVar11) * (uVar87 - uVar11) * 0x1dc0 + iVar97 * iVar97 * 0x15aa +
                         (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                         (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54 < 0xe10000;
              }
              if (bVar1) {
                bVar105 = true;
              }
              else {
                bVar105 = (bool)(bVar105 | bVar83);
              }
            }
            else {
              uVar11 = uVar12 >> 0x18;
              bVar105 = false;
              uVar89 = (uVar12 & 0xff) * uVar11 >> 8;
              uVar112 = (uVar12 >> 8 & 0xff) * uVar11 >> 8;
              uVar108 = (uVar12 >> 0x10 & 0xff) * uVar11 >> 8;
            }
            uVar11 = uVar10 >> 0x18;
            iVar97 = (uVar12 >> 0x18) - uVar11;
            uVar87 = (uVar10 & 0xff) * uVar11 >> 8;
            uVar96 = (uVar10 >> 8 & 0xff) * uVar11 >> 8;
            uVar88 = (uVar10 >> 0x10 & 0xff) * uVar11 >> 8;
            iVar84 = uVar89 - uVar87;
            iVar54 = uVar112 - uVar96;
            iVar55 = uVar108 - uVar88;
            uVar17 = uVar13 >> 0x18;
            uVar30 = (uVar13 >> 8 & 0xff) * uVar17 >> 8;
            iVar56 = uVar112 - uVar30;
            iVar57 = (uVar12 >> 0x18) - uVar17;
            uVar112 = (uVar13 & 0xff) * uVar17 >> 8;
            iVar58 = uVar89 - uVar112;
            uVar89 = (uVar13 >> 0x10 & 0xff) * uVar17 >> 8;
            iVar59 = uVar108 - uVar89;
            if ((uint)(iVar58 * iVar58 * 0x15aa + iVar57 * iVar57 * 0x1dc0 +
                       (iVar56 * 0x3343 + iVar58 * -0x30) * iVar56 +
                      (iVar59 * 0x1054 + iVar56 * -0xf8e + iVar58 * -0x983) * iVar59) >> 0xe <=
                (uint)(iVar84 * iVar84 * 0x15aa + iVar97 * iVar97 * 0x1dc0 +
                       (iVar54 * 0x3343 + iVar84 * -0x30) * iVar54 +
                      (iVar55 * 0x1054 + iVar54 * -0xf8e + iVar84 * -0x983) * iVar55) >> 0xe) {
              uVar10 = uVar13;
            }
            if (bVar105) {
              uVar89 = uVar10 & 0xff;
              uVar11 = uVar10 >> 8 & 0xff;
              uVar3 = uVar10 >> 0x18;
              uVar10 = uVar10 >> 0x10 & 0xff;
              pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar98 + uVar99) << 0x20) >> 0x1e));
              *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0x17 >> 8);
              pbVar5[1] = pbVar5[1] + (char)((uVar11 - pbVar5[1]) * 0x17 >> 8);
              pbVar5[2] = pbVar5[2] + (char)((uVar10 - pbVar5[2]) * 0x17 >> 8);
              pbVar5[3] = pbVar5[3] + (char)((uVar3 - pbVar5[3]) * 0x17 >> 8);
              pbVar5 = (byte *)(param_1 + ((long)((ulong)((uVar99 | 3) + iVar111) << 0x20) >> 0x1e))
              ;
              *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0x17 >> 8);
              pbVar5[1] = pbVar5[1] + (char)((uVar11 - pbVar5[1]) * 0x17 >> 8);
              pbVar6 = (byte *)(param_1 + ((long)((ulong)((uVar99 | 3) + uVar86) << 0x20) >> 0x1e));
              bVar18 = *pbVar6;
              pbVar5[2] = pbVar5[2] + (char)((uVar10 - pbVar5[2]) * 0x17 >> 8);
              bVar19 = pbVar6[1];
              bVar20 = pbVar6[2];
              pbVar5[3] = pbVar5[3] + (char)((uVar3 - pbVar5[3]) * 0x17 >> 8);
              *pbVar6 = bVar18 + (char)((uVar89 - bVar18) * 0xb0 >> 8);
              pbVar6[1] = bVar19 + (char)((uVar11 - bVar19) * 0xb0 >> 8);
              pbVar6[2] = bVar20 + (char)((uVar10 - bVar20) * 0xb0 >> 8);
              pbVar6[3] = pbVar6[3] + (char)((uVar3 - pbVar6[3]) * 0xb0 >> 8);
            }
            else {
              uVar13 = uVar15 >> 0x18;
              iVar97 = uVar87 - ((uVar15 & 0xff) * uVar13 >> 8);
              iVar84 = uVar96 - ((uVar15 >> 8 & 0xff) * uVar13 >> 8);
              iVar54 = uVar88 - ((uVar15 >> 0x10 & 0xff) * uVar13 >> 8);
              fVar113 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar11 - uVar13) * (uVar11 - uVar13) * 0x1dc0 +
                                          iVar97 * iVar97 * 0x15aa +
                                          (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) *
                                          iVar54 >> 0x16) * 4);
              uVar11 = uVar16 >> 0x18;
              iVar97 = uVar112 - ((uVar16 & 0xff) * uVar11 >> 8);
              iVar84 = uVar30 - ((uVar16 >> 8 & 0xff) * uVar11 >> 8);
              iVar54 = uVar89 - ((uVar16 >> 0x10 & 0xff) * uVar11 >> 8);
              fVar114 = *(float *)(&DAT_04175bc0 +
                                  (ulong)((uVar17 - uVar11) * (uVar17 - uVar11) * 0x1dc0 +
                                          iVar97 * iVar97 * 0x15aa +
                                          (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                          (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) *
                                          iVar54 >> 0x16) * 4) * 2.2;
              uVar51 = (undefined1)uVar10;
              uVar48 = (undefined1)(uVar10 >> 8);
              uVar49 = (undefined1)(uVar10 >> 0x10);
              uVar50 = (undefined1)(uVar10 >> 0x18);
              if ((*(float *)(&DAT_04175bc0 +
                             (ulong)((uVar17 - uVar11) * (uVar17 - uVar11) * 0x1dc0 +
                                     iVar97 * iVar97 * 0x15aa +
                                     (iVar97 * -0x30 + iVar84 * 0x3343) * iVar84 +
                                     (iVar97 * -0x983 + iVar54 * 0x1054 + iVar84 * -0xf8e) * iVar54
                                    >> 0x16) * 4) < fVar113 * 2.2) || (uVar12 == uVar15)) {
                if ((fVar114 <= fVar113) && (uVar12 != uVar16)) {
LAB_015a95e8:
                  if (uVar3 != uVar16) {
                    uVar89 = uVar10 & 0xff;
                    uVar3 = uVar10 >> 8 & 0xff;
                    uVar11 = uVar10 >> 0x10 & 0xff;
                    uVar10 = uVar10 >> 0x18;
                    pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar101 + uVar99) << 0x20) >> 0x1e))
                    ;
                    pbVar6 = (byte *)(param_1 + ((long)((ulong)(uVar86 + uVar99) << 0x20) >> 0x1e));
                    *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0xc0 >> 8);
                    pbVar5[1] = pbVar5[1] + (char)((uVar3 - pbVar5[1]) * 0xc0 >> 8);
                    pbVar5[2] = pbVar5[2] + (char)((uVar11 - pbVar5[2]) * 0xc0 >> 8);
                    pbVar7 = (byte *)(param_1 +
                                     ((long)((ulong)((uVar99 | 2) + iVar111) << 0x20) >> 0x1e));
                    pbVar5[3] = pbVar5[3] + (char)((uVar10 - pbVar5[3]) * 0xc0 >> 8);
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)((uVar99 | 2) + uVar86) << 0x20) >> 0x1e));
                    bVar18 = pbVar7[1];
                    bVar19 = pbVar7[2];
                    bVar20 = pbVar7[3];
                    *pbVar7 = *pbVar7 + (char)(uVar89 - *pbVar7 >> 2);
                    bVar21 = *pbVar6;
                    *puVar100 = uVar51;
                    pbVar7[1] = bVar18 + (char)(uVar3 - bVar18 >> 2);
                    bVar18 = pbVar6[1];
                    pbVar7[2] = bVar19 + (char)(uVar11 - bVar19 >> 2);
                    bVar19 = pbVar6[2];
                    pbVar7[3] = bVar20 + (char)(uVar10 - bVar20 >> 2);
                    bVar20 = pbVar6[3];
                    puVar100[3] = uVar50;
                    *pbVar6 = bVar21 + (char)(uVar89 - bVar21 >> 2);
                    pbVar6[1] = bVar18 + (char)(uVar3 - bVar18 >> 2);
                    puVar100[1] = uVar48;
                    puVar100[2] = uVar49;
                    pbVar6[2] = bVar19 + (char)(uVar11 - bVar19 >> 2);
                    pbVar6[3] = bVar20 + (char)(uVar10 - bVar20 >> 2);
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)((uVar99 | 3) + iVar111) << 0x20) >> 0x1e));
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)((uVar99 | 3) + uVar86) << 0x20) >> 0x1e));
                    bVar18 = pbVar5[2];
                    bVar19 = pbVar5[3];
                    *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0xc0 >> 8);
                    pbVar5[1] = pbVar5[1] + (char)((uVar3 - pbVar5[1]) * 0xc0 >> 8);
                    *puVar100 = uVar51;
                    puVar100[1] = uVar48;
                    pbVar5[2] = bVar18 + (char)((uVar11 - bVar18) * 0xc0 >> 8);
                    puVar100[2] = uVar49;
                    pbVar5[3] = bVar19 + (char)((uVar10 - bVar19) * 0xc0 >> 8);
                    puVar100[3] = uVar50;
                    goto LAB_015a45d0;
                  }
                }
LAB_015a97d4:
                uVar89 = uVar10 >> 8 & 0xff;
                uVar3 = uVar10 >> 0x10 & 0xff;
                pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar98 + uVar99) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)((uVar10 & 0xff) - (uint)*pbVar5 >> 1);
                pbVar5[1] = pbVar5[1] + (char)(uVar89 - pbVar5[1] >> 1);
                pbVar5[2] = pbVar5[2] + (char)(uVar3 - pbVar5[2] >> 1);
                pbVar5[3] = pbVar5[3] + (char)((uVar10 >> 0x18) - (uint)pbVar5[3] >> 1);
                pbVar5 = (byte *)(param_1 +
                                 ((long)((ulong)((uVar99 | 3) + iVar111) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)((uVar10 & 0xff) - (uint)*pbVar5 >> 1);
                pbVar5[1] = pbVar5[1] + (char)(uVar89 - pbVar5[1] >> 1);
                pbVar5[2] = pbVar5[2] + (char)(uVar3 - pbVar5[2] >> 1);
                pbVar5[3] = pbVar5[3] + (char)((uVar10 >> 0x18) - (uint)pbVar5[3] >> 1);
                puVar100 = (undefined1 *)
                           (param_1 + ((long)((ulong)((uVar99 | 3) + uVar86) << 0x20) >> 0x1e));
                *puVar100 = uVar51;
                puVar100[1] = uVar48;
                puVar100[3] = uVar50;
                puVar100[2] = uVar49;
              }
              else {
                if ((fVar113 < fVar114) || (uVar12 == uVar16)) {
                  if (uVar14 == uVar15) goto LAB_015a97d4;
                }
                else {
                  if (uVar14 == uVar15) goto LAB_015a95e8;
                  if (uVar3 != uVar16) {
                    uVar89 = uVar10 & 0xff;
                    uVar11 = uVar10 >> 8 & 0xff;
                    uVar12 = uVar10 >> 0x10 & 0xff;
                    uVar10 = uVar10 >> 0x18;
                    pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar86 + uVar99) << 0x20) >> 0x1e));
                    pbVar6 = (byte *)(param_1 + ((long)((ulong)(uVar101 + uVar99) << 0x20) >> 0x1e))
                    ;
                    *pbVar5 = *pbVar5 + (char)(uVar89 - *pbVar5 >> 2);
                    bVar18 = pbVar6[1];
                    bVar19 = *pbVar6;
                    pbVar5[1] = pbVar5[1] + (char)(uVar11 - pbVar5[1] >> 2);
                    bVar20 = pbVar6[2];
                    pbVar5[2] = pbVar5[2] + (char)(uVar12 - pbVar5[2] >> 2);
                    bVar21 = pbVar6[3];
                    pbVar5[3] = pbVar5[3] + (char)(uVar10 - pbVar5[3] >> 2);
                    pbVar6[1] = bVar18 + (char)((uVar11 - bVar18) * 0xc0 >> 8);
                    *pbVar6 = bVar19 + (char)((uVar89 - bVar19) * 0xc0 >> 8);
                    uVar3 = uVar99 | 3;
                    pbVar6[3] = bVar21 + (char)((uVar10 - bVar21) * 0xc0 >> 8);
                    pbVar6[2] = bVar20 + (char)((uVar12 - bVar20) * 0xc0 >> 8);
                    pbVar5 = (byte *)(param_1 +
                                     ((long)((ulong)((uVar99 | 2) + iVar111) << 0x20) >> 0x1e));
                    bVar18 = pbVar5[1];
                    bVar19 = pbVar5[2];
                    bVar20 = pbVar5[3];
                    *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0x55 >> 8);
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)((uVar99 | 2) + uVar86) << 0x20) >> 0x1e));
                    *puVar100 = uVar51;
                    pbVar5[1] = bVar18 + (char)((uVar11 - bVar18) * 0x55 >> 8);
                    pbVar5[2] = bVar19 + (char)((uVar12 - bVar19) * 0x55 >> 8);
                    puVar100[2] = uVar49;
                    puVar100[1] = uVar48;
                    pbVar5[3] = bVar20 + (char)((uVar10 - bVar20) * 0x55 >> 8);
                    puVar100[3] = uVar50;
                    pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar3 + iVar95) << 0x20) >> 0x1e));
                    *pbVar5 = *pbVar5 + (char)(uVar89 - *pbVar5 >> 2);
                    pbVar5[1] = pbVar5[1] + (char)(uVar11 - pbVar5[1] >> 2);
                    pbVar5[2] = pbVar5[2] + (char)(uVar12 - pbVar5[2] >> 2);
                    pbVar6 = (byte *)(param_1 + ((long)((ulong)(uVar3 + iVar94) << 0x20) >> 0x1e));
                    pbVar5[3] = pbVar5[3] + (char)(uVar10 - pbVar5[3] >> 2);
                    *pbVar6 = *pbVar6 + (char)((uVar89 - *pbVar6) * 0xc0 >> 8);
                    pbVar6[2] = pbVar6[2] + (char)((uVar12 - pbVar6[2]) * 0xc0 >> 8);
                    pbVar6[1] = pbVar6[1] + (char)((uVar11 - pbVar6[1]) * 0xc0 >> 8);
                    pbVar6[3] = pbVar6[3] + (char)((uVar10 - pbVar6[3]) * 0xc0 >> 8);
                    puVar100 = (undefined1 *)
                               (param_1 + ((long)((ulong)(uVar3 + iVar111) << 0x20) >> 0x1e));
                    puVar8 = (undefined1 *)
                             (param_1 + ((long)((ulong)(uVar3 + uVar86) << 0x20) >> 0x1e));
                    *puVar100 = uVar51;
                    puVar100[1] = uVar48;
                    puVar100[2] = uVar49;
                    puVar100[3] = uVar50;
                    *puVar8 = uVar51;
                    puVar8[1] = uVar48;
                    puVar8[2] = uVar49;
                    puVar8[3] = uVar50;
                    goto LAB_015a45d0;
                  }
                }
                uVar89 = uVar10 & 0xff;
                uVar11 = uVar10 >> 8 & 0xff;
                uVar12 = uVar10 >> 0x10 & 0xff;
                uVar3 = uVar99 | 3;
                pbVar5 = (byte *)(param_1 +
                                 ((long)((ulong)((uVar99 | 2) + iVar111) << 0x20) >> 0x1e));
                uVar10 = uVar10 >> 0x18;
                *pbVar5 = *pbVar5 + (char)(uVar89 - *pbVar5 >> 2);
                pbVar5[1] = pbVar5[1] + (char)(uVar11 - pbVar5[1] >> 2);
                pbVar5[2] = pbVar5[2] + (char)(uVar12 - pbVar5[2] >> 2);
                pbVar5[3] = pbVar5[3] + (char)(uVar10 - pbVar5[3] >> 2);
                pbVar5 = (byte *)(param_1 + ((long)((ulong)((uVar99 | 2) + uVar86) << 0x20) >> 0x1e)
                                 );
                *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0xc0 >> 8);
                pbVar5[1] = pbVar5[1] + (char)((uVar11 - pbVar5[1]) * 0xc0 >> 8);
                pbVar5[2] = pbVar5[2] + (char)((uVar12 - pbVar5[2]) * 0xc0 >> 8);
                pbVar6 = (byte *)(param_1 + ((long)((ulong)(uVar3 + iVar95) << 0x20) >> 0x1e));
                pbVar5[3] = pbVar5[3] + (char)((uVar10 - pbVar5[3]) * 0xc0 >> 8);
                *pbVar6 = *pbVar6 + (char)(uVar89 - *pbVar6 >> 2);
                pbVar6[1] = pbVar6[1] + (char)(uVar11 - pbVar6[1] >> 2);
                pbVar6[2] = pbVar6[2] + (char)(uVar12 - pbVar6[2] >> 2);
                pbVar6[3] = pbVar6[3] + (char)(uVar10 - pbVar6[3] >> 2);
                pbVar5 = (byte *)(param_1 + ((long)((ulong)(uVar3 + iVar94) << 0x20) >> 0x1e));
                *pbVar5 = *pbVar5 + (char)((uVar89 - *pbVar5) * 0xc0 >> 8);
                pbVar5[1] = pbVar5[1] + (char)((uVar11 - pbVar5[1]) * 0xc0 >> 8);
                pbVar5[2] = pbVar5[2] + (char)((uVar12 - pbVar5[2]) * 0xc0 >> 8);
                pbVar5[3] = pbVar5[3] + (char)((uVar10 - pbVar5[3]) * 0xc0 >> 8);
                puVar100 = (undefined1 *)
                           (param_1 + ((long)((ulong)(uVar3 + iVar111) << 0x20) >> 0x1e));
                puVar8 = (undefined1 *)(param_1 + ((long)((ulong)(uVar3 + uVar86) << 0x20) >> 0x1e))
                ;
                *puVar100 = uVar51;
                puVar100[1] = uVar48;
                puVar100[2] = uVar49;
                puVar100[3] = uVar50;
                *puVar8 = uVar51;
                puVar8[1] = uVar48;
                puVar8[2] = uVar49;
                puVar8[3] = uVar50;
              }
            }
          }
LAB_015a45d0:
          lVar109 = lVar109 + 0x100000000;
          lVar103 = lVar103 + 0x100000000;
          local_b0 = local_b0 + 0x100000000;
          uVar85 = uVar85 + 1;
          lVar110 = lVar110 + 4;
        } while (uVar85 != param_3);
        lVar104 = lVar104 + ((ulong)param_3 << 0x20);
        iVar24 = iVar24 + iVar25;
        iVar26 = iVar26 + iVar25;
        iVar82 = iVar82 + iVar25;
        iVar4 = iVar4 + iVar25;
        uVar107 = uVar2;
      } while (uVar2 != param_4);
    }
  }
  return;
}

