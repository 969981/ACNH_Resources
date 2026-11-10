
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00110880(long param_1,ushort *param_2,ulong param_3)

{
  short sVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ushort uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ushort uVar17;
  ushort uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  char *pcVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  byte *pbVar37;
  ulong uVar38;
  ulong uVar39;
  ushort uVar40;
  ushort uVar41;
  uint uVar42;
  ulong uVar43;
  
  if ((*(byte *)((long)param_2 + 0x5f) & 0xf) == 1) {
    param_2[0x2f] = 0x210;
    return 1;
  }
  lVar34 = *(long *)(*(long *)(param_1 + 0x28) + (param_3 & 0xffff) * 0x50 + 0x40);
  bVar5 = *(byte *)(lVar34 + 0x2050);
  if ((bVar5 >> 1 & 1) == 0) {
    lVar21 = *(long *)(param_2 + 4);
    uVar30 = (ulong)*(byte *)(lVar21 + 0x2b) << 0x18 | (ulong)*(byte *)(lVar21 + 0x2c) << 0x10 |
             (ulong)*(byte *)(lVar21 + 0x2d) << 8 | (ulong)*(byte *)(lVar21 + 0x2e);
    bVar5 = *(byte *)(lVar21 + 0x1c);
    if ((bVar5 & 3) == 0) {
      pbVar37 = (byte *)(lVar21 + 0x1c) +
                ((ulong)*(byte *)(lVar21 + 0x10) << 0x18 | (ulong)*(byte *)(lVar21 + 0x11) << 0x10 |
                 (ulong)*(byte *)(lVar21 + 0x12) << 8 | (ulong)*(byte *)(lVar21 + 0x13)) +
                ((ulong)*(byte *)(lVar21 + 0xc) << 0x18 | (ulong)*(byte *)(lVar21 + 0xd) << 0x10 |
                 (ulong)*(byte *)(lVar21 + 0xe) << 8 | (ulong)*(byte *)(lVar21 + 0xf)) + -4;
      cVar6 = *(char *)(param_1 + 0x51);
    }
    else {
      pbVar37 = (byte *)(lVar21 + ((ulong)*(byte *)(lVar21 + 0x52) << 0x18 |
                                   (ulong)*(byte *)(lVar21 + 0x53) << 0x10 |
                                   (ulong)*(byte *)(lVar21 + 0x54) << 8 |
                                  (ulong)*(byte *)(lVar21 + 0x55)));
      cVar6 = *(char *)(param_1 + 0x51);
    }
    if (cVar6 == '\0') {
      lVar21 = lVar21 + uVar30;
      lVar24 = lVar34 + (ulong)*(ushort *)(param_1 + 0x4e) * 2;
      uVar27 = *(ushort *)(lVar24 + 0x1fe0);
      if (0xff < uVar27) {
        return 0xad62;
      }
      uVar29 = *(ushort *)(lVar24 + 0x1fde);
      if (0xfe < uVar29) {
        return 0xad62;
      }
      uVar42 = (uint)uVar27;
      uVar13 = uVar42 - uVar29;
      if ((uVar13 & 0xffff) != 0) {
        uVar28 = param_2[0x2e];
        uVar30 = (ulong)uVar28;
        uVar12 = FUN_001136c0(lVar21,pbVar37,param_2,lVar34,uVar30);
        if ((uint)*param_2 == (uVar12 & 0xffff)) {
          bVar5 = *(char *)(lVar34 + 0x2051) + 1;
          *(byte *)(lVar34 + 0x2051) = bVar5;
          if (bVar5 < 3) {
            param_2[0x2f] = 0x210;
            *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar34 + uVar30 * 0x20 + 0x10);
            param_2[0x2e] = uVar28;
            return 1;
          }
          uVar12 = 0;
          uVar40 = 0;
          *(undefined1 *)(lVar34 + 0x2051) = 0;
          bVar10 = true;
          uVar32 = 0;
          if ((uVar13 & 0xffff) == 0) goto LAB_001109e4;
        }
        else {
          bVar11 = ((uVar12 ^ 0xffffffff) & 0xffff) == 0;
          bVar10 = false;
          uVar40 = (ushort)bVar11;
          uVar32 = uVar30;
          if ((uint)bVar11 == (uVar13 & 0xffff)) goto LAB_001109e4;
        }
        uVar14 = uVar28 + 1;
        if (uVar42 <= (uVar28 + 1 & 0xffff)) {
          uVar14 = (uint)uVar29;
        }
        do {
          lVar24 = lVar34 + ((ulong)uVar14 & 0xffff) * 0x20;
          uVar31 = *(uint *)(lVar24 + 0x10);
          if (uVar31 == 0xffffffff) {
            uVar15 = 0xffff;
            uVar23 = (uint)*param_2;
            if (*param_2 != 0xffff) goto LAB_00111404;
LAB_00111388:
            if ((*(int *)(param_2 + 0x1e) == *(int *)(lVar24 + 0x14)) &&
               (*(uint *)(param_2 + 0x1c) == uVar31)) {
              uVar15 = FUN_001136c0(lVar21,pbVar37,param_2,lVar34,(ulong)uVar14);
              uVar23 = (uint)*param_2;
              goto LAB_00111404;
            }
LAB_001114d8:
            param_2[0x2f] = 0x210;
            *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar24 + 0x14);
            *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar24 + 0x18);
            uVar13 = *(uint *)(lVar24 + 0x10);
            param_2[0x2e] = (ushort)uVar14;
LAB_001116b4:
            *(uint *)(param_2 + 0x1c) = uVar13;
            goto LAB_001114cc;
          }
          lVar25 = *(long *)(param_2 + 4);
          uVar15 = (uint)*(byte *)(lVar25 + 0x33);
          if ((*(byte *)(lVar25 + 0x1c) & 3) != 0) {
            uVar15 = uVar15 + 1;
          }
          if (*(byte *)(lVar25 + 0x32) == 0) {
            lVar26 = 0;
          }
          else {
            puVar3 = (undefined1 *)
                     (lVar21 + (ulong)*(uint *)(lVar24 + 0x14) + (ulong)uVar31 +
                     (((ulong)uVar15 & 0xff) + 1 >> 3));
            uVar23 = 0x10 - *(byte *)(lVar25 + 0x32);
            lVar26 = (long)(short)(CONCAT11(*puVar3,puVar3[1]) >>
                                   ((ulong)(uVar23 - (uVar15 + 1 & 7)) & 0x3f) &
                                  (ushort)(0xffffL >> ((ulong)uVar23 & 0x3f)));
          }
          bVar5 = *(byte *)(lVar25 + ((ulong)*(byte *)(lVar25 + 0x26) << 0x18 |
                                      (ulong)*(byte *)(lVar25 + 0x27) << 0x10 |
                                      (ulong)*(byte *)(lVar25 + 0x28) << 8 |
                                     (ulong)*(byte *)(lVar25 + 0x29)) + lVar26);
          uVar15 = (uint)bVar5;
          uVar23 = (*(uint *)(lVar25 + 4) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar25 + 4) & 0xff00ff) << 8;
          if ((uVar23 >> 0x10 | uVar23 << 0x10) != 0x30000) {
            iVar20 = ((uint)param_2[3] - (uint)param_2[2]) * (uint)bVar5;
            uVar15 = (uint)param_2[2] +
                     ((uint)((ulong)((long)iVar20 * 0x82082083) >> 0x25) - (iVar20 >> 0x1f));
          }
          uVar23 = (uint)*param_2;
          if ((uint)*param_2 == (uVar15 & 0xffff)) goto LAB_00111388;
LAB_00111404:
          if (uVar23 == (uVar15 & 0xffff)) goto LAB_001114d8;
          if (((uVar15 ^ 0xffffffff) & 0xffff) == 0) {
            uVar40 = uVar40 + 1;
          }
          uVar31 = uVar14;
          if ((short)uVar15 <= (short)uVar12) {
            uVar31 = (uint)uVar32;
            uVar15 = uVar12;
          }
          uVar12 = uVar15;
          uVar32 = (ulong)uVar31;
          uVar15 = uVar14 + 1 & 0xffff;
          uVar23 = (uint)uVar29;
          if (uVar15 <= uVar42 && uVar27 != uVar15) {
            uVar23 = uVar14 + 1;
          }
          if ((uint)uVar28 == (uVar23 & 0xffff)) {
            if (bVar10) {
              lVar21 = lVar34 + uVar30 * 0x20;
              param_2[0x2f] = 0x210;
              *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar21 + 0x14);
              *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar21 + 0x18);
              *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar21 + 0x10);
              param_2[0x2e] = uVar28;
              *(undefined1 *)(lVar34 + 0x2051) = 1;
              return 1;
            }
            if ((~uVar12 & 0xffff) == 0) goto LAB_0011144c;
            lVar21 = lVar34 + (uVar32 & 0xffff) * 0x20;
            *param_2 = (ushort)uVar12;
            param_2[0x2f] = 0x210;
            *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar21 + 0x14);
            *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar21 + 0x18);
            uVar13 = *(uint *)(lVar21 + 0x10);
            param_2[0x2e] = (ushort)uVar31;
            goto LAB_001116b4;
          }
LAB_0011144c:
          uVar14 = uVar23;
        } while ((uVar13 & 0xffff) != (int)(short)uVar40);
      }
    }
    else {
      lVar34 = lVar21 + uVar30;
      pcVar33 = (char *)(lVar34 + (ulong)*(uint *)(param_2 + 0x1e) +
                        (ulong)*(uint *)(param_2 + 0x1c));
      uVar13 = (uint)*(byte *)(lVar21 + 0x33);
      if ((bVar5 & 3) != 0) {
        uVar13 = uVar13 + 1;
      }
      bVar7 = *(byte *)(lVar21 + 0x32);
      uVar30 = (ulong)bVar7 + (ulong)(byte)uVar13 + (ulong)*(byte *)(lVar21 + 0x30) +
               (ulong)*(byte *)(lVar21 + 0x31) + 1;
      uVar12 = 0x10 - *(byte *)(lVar21 + 0x2f);
      uVar32 = uVar30 + *(byte *)(lVar21 + 0x2f);
      uVar42 = (uint)uVar32;
      if (((char)bVar5 < '\0') && (*pcVar33 < '\0')) {
        bVar5 = *(byte *)(lVar21 + 0x35);
        uVar27 = (ushort)(0xffff >> (ulong)(0x10 - bVar5 & 0x1f)) &
                 CONCAT11(pcVar33[uVar32 >> 3],(pcVar33 + (uVar32 >> 3))[1]) >>
                 (ulong)((0x10 - (uVar42 & 7)) - (uint)bVar5 & 0x1f);
        uVar42 = uVar42 + bVar5;
      }
      else {
        uVar27 = 0;
      }
      sVar1 = uVar27 + (CONCAT11(pcVar33[uVar30 >> 3],(pcVar33 + (uVar30 >> 3))[1]) >>
                        (ulong)(uVar12 - ((uint)uVar30 & 7) & 0x1f) &
                       (ushort)(0xffff >> (ulong)(uVar12 & 0x1f))) +
              ((ushort)(uVar42 + 7 >> 3) & 0xff);
      pcVar33 = pcVar33 + sVar1;
      if (pcVar33 <= (char *)(lVar34 + (ulong)*(uint *)(param_2 + 0x20))) {
        if (bVar7 == 0) {
          lVar34 = 0;
          uVar13 = (*(uint *)(lVar21 + 4) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar21 + 4) & 0xff00ff) << 8;
          uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
        }
        else {
          uVar42 = 0x10 - bVar7;
          lVar34 = (long)(short)(CONCAT11(pcVar33[((ulong)uVar13 & 0xff) + 1 >> 3],
                                          (pcVar33 + (((ulong)uVar13 & 0xff) + 1 >> 3))[1]) >>
                                 ((ulong)(uVar42 - (uVar13 + 1 & 7)) & 0x3f) &
                                (ushort)(0xffffL >> ((ulong)uVar42 & 0x3f)));
          uVar13 = (*(uint *)(lVar21 + 4) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar21 + 4) & 0xff00ff) << 8;
          uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
        }
        if (uVar13 != 0x30000) {
          iVar20 = ((uint)param_2[3] - (uint)param_2[2]) *
                   (uint)*(byte *)(lVar21 + ((ulong)*(byte *)(lVar21 + 0x26) << 0x18 |
                                             (ulong)*(byte *)(lVar21 + 0x27) << 0x10 |
                                             (ulong)*(byte *)(lVar21 + 0x28) << 8 |
                                            (ulong)*(byte *)(lVar21 + 0x29)) + lVar34);
          *param_2 = param_2[2] +
                     ((short)((ulong)((long)iVar20 * 0x82082083) >> 0x25) - (short)(iVar20 >> 0x1f))
          ;
        }
        param_2[0x2f] = 0x210;
        *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) + (int)sVar1;
        return 1;
      }
    }
LAB_001109e4:
    *(undefined1 *)((long)param_2 + 0x5f) = 3;
    return 0;
  }
  *(byte *)(lVar34 + 0x2050) = bVar5 & 0xfd;
  if (*(char *)(param_1 + 0x50) != '\x01') {
    return 1;
  }
  lVar24 = *(long *)(param_2 + 4);
  lVar21 = lVar24 + ((ulong)*(byte *)(lVar24 + 0x2b) << 0x18 |
                     (ulong)*(byte *)(lVar24 + 0x2c) << 0x10 | (ulong)*(byte *)(lVar24 + 0x2d) << 8
                    | (ulong)*(byte *)(lVar24 + 0x2e));
  if (*(short *)(param_1 + 0x4c) != 0) {
    lVar25 = lVar34 + (ulong)*(ushort *)(param_1 + 0x4e) * 2;
    uVar27 = *(ushort *)(lVar25 + 0x1fe0);
    if (0xff < (ulong)uVar27) {
      return 0xad62;
    }
    uVar29 = *(ushort *)(lVar25 + 0x1fde);
    uVar30 = (ulong)uVar29;
    if (0xfe < uVar29) {
      return 0xad62;
    }
    if (*(char *)(param_1 + 0x51) == '\0') {
      if (uVar29 < uVar27) {
        iVar20 = 0;
        uVar32 = uVar30;
        uVar28 = 0;
        do {
          lVar25 = lVar34 + uVar32 * 0x20;
          uVar42 = *(uint *)(lVar25 + 0x14);
          uVar13 = (uint)*(byte *)(lVar24 + 0x33);
          if ((*(byte *)(lVar24 + 0x1c) & 3) != 0) {
            uVar13 = uVar13 + 1;
          }
          pcVar33 = (char *)(lVar21 + (ulong)uVar42);
          bVar5 = *(byte *)(lVar24 + 0x32);
          if (bVar5 == 0) {
            uVar29 = 0;
            uVar12 = *(uint *)(lVar25 + 0x18);
            if (uVar12 < uVar42) goto LAB_00110edc;
LAB_00110ef8:
            uVar38 = (ulong)uVar13 & 0xff;
            pbVar37 = (byte *)(lVar24 + ((ulong)*(byte *)(lVar24 + 0x26) << 0x18 |
                                         (ulong)*(byte *)(lVar24 + 0x27) << 0x10 |
                                         (ulong)*(byte *)(lVar24 + 0x28) << 8 |
                                        (ulong)*(byte *)(lVar24 + 0x29)));
            uVar41 = (ushort)pbVar37[(short)uVar29];
            uVar39 = bVar5 + uVar38 + (ulong)*(byte *)(lVar24 + 0x30) +
                     (ulong)*(byte *)(lVar24 + 0x31) + 1;
            uVar42 = 0x10 - *(byte *)(lVar24 + 0x2f);
            uVar14 = (uint)bVar5;
            uVar16 = uVar38 + 1 >> 3;
            uVar19 = (ulong)((0x10 - uVar14) - (uVar13 + 1 & 7));
            uVar13 = uVar42 - ((uint)uVar39 & 7);
            uVar38 = uVar39 + *(byte *)(lVar24 + 0x2f);
            pcVar2 = (char *)(lVar21 + (ulong)uVar12);
            uVar12 = (uint)uVar38;
            uVar40 = (ushort)(0xffff >> (ulong)(uVar42 & 0x1f));
            uVar9 = (ushort)(0xffffL >> ((ulong)(0x10 - uVar14) & 0x3f));
            if ((char)*(byte *)(lVar24 + 0x1c) < '\0') {
              iVar22 = 0;
              iVar35 = 0;
              uVar18 = 0;
              do {
                while( true ) {
                  uVar29 = uVar41;
                  if (uVar41 <= uVar18) {
                    uVar29 = uVar18;
                  }
                  iVar36 = iVar22;
                  if (uVar41 <= uVar18) {
                    iVar36 = iVar35;
                  }
                  if (*pcVar33 < '\0') {
                    bVar5 = *(byte *)(lVar24 + 0x35);
                    uVar43 = (ulong)(uVar12 + bVar5);
                    uVar41 = (ushort)(0xffff >> (ulong)(0x10 - bVar5 & 0x1f)) &
                             CONCAT11(pcVar33[uVar38 >> 3],(pcVar33 + (uVar38 >> 3))[1]) >>
                             (ulong)((0x10 - (uVar12 & 7)) - (uint)bVar5 & 0x1f);
                  }
                  else {
                    uVar41 = 0;
                    uVar43 = uVar38;
                  }
                  sVar1 = uVar41 + (CONCAT11(pcVar33[uVar39 >> 3],(pcVar33 + (uVar39 >> 3))[1]) >>
                                    (ulong)(uVar13 & 0x1f) & uVar40) +
                          ((ushort)((int)uVar43 + 7U >> 3) & 0xff);
                  iVar22 = iVar22 + sVar1;
                  pcVar33 = pcVar33 + sVar1;
                  iVar35 = iVar36;
                  uVar18 = uVar29;
                  if (uVar14 == 0) break;
                  uVar41 = (ushort)pbVar37[(short)(CONCAT11(pcVar33[uVar16],(pcVar33 + uVar16)[1])
                                                   >> (uVar19 & 0x3f) & uVar9)];
                  if (pcVar2 < pcVar33) goto LAB_001110e4;
                }
                uVar41 = (ushort)*pbVar37;
              } while (pcVar33 <= pcVar2);
            }
            else {
              iVar22 = 0;
              iVar35 = 0;
              uVar18 = 0;
              uVar17 = 0;
              do {
                while( true ) {
                  uVar29 = uVar41;
                  uVar4 = uVar41;
                  if (uVar41 <= uVar17) {
                    uVar29 = uVar18;
                    uVar4 = uVar17;
                  }
                  sVar1 = (CONCAT11(pcVar33[uVar39 >> 3],(pcVar33 + (uVar39 >> 3))[1]) >>
                           (ulong)(uVar13 & 0x1f) & uVar40) + ((ushort)(uVar12 + 7 >> 3) & 0xff);
                  iVar36 = iVar22;
                  if (uVar41 <= uVar17) {
                    iVar36 = iVar35;
                  }
                  iVar22 = iVar22 + sVar1;
                  pcVar33 = pcVar33 + sVar1;
                  iVar35 = iVar36;
                  uVar18 = uVar29;
                  uVar17 = uVar4;
                  if (uVar14 == 0) break;
                  uVar41 = (ushort)pbVar37[(short)(CONCAT11(pcVar33[uVar16],(pcVar33 + uVar16)[1])
                                                   >> (uVar19 & 0x3f) & uVar9)];
                  if (pcVar2 < pcVar33) goto LAB_001110e4;
                }
                uVar41 = (ushort)*pbVar37;
              } while (pcVar33 <= pcVar2);
            }
          }
          else {
            uVar12 = 0x10 - bVar5;
            uVar29 = CONCAT11(pcVar33[((ulong)uVar13 & 0xff) + 1 >> 3],
                              (pcVar33 + (((ulong)uVar13 & 0xff) + 1 >> 3))[1]) >>
                     ((ulong)(uVar12 - (uVar13 + 1 & 7)) & 0x3f) &
                     (ushort)(0xffffL >> ((ulong)uVar12 & 0x3f));
            uVar12 = *(uint *)(lVar25 + 0x18);
            if (uVar42 <= uVar12) goto LAB_00110ef8;
LAB_00110edc:
            iVar36 = 0;
            uVar29 = 0;
          }
LAB_001110e4:
          *(int *)(lVar25 + 0x10) = iVar36;
          lVar24 = *(long *)(param_2 + 4);
          uVar13 = (uint)uVar32;
          if (uVar29 <= uVar28) {
            uVar13 = (uint)uVar30;
          }
          uVar30 = (ulong)uVar13;
          uVar32 = uVar32 + 1;
          if (uVar29 <= uVar28) {
            uVar29 = uVar28;
            iVar36 = iVar20;
          }
          iVar20 = iVar36;
          uVar28 = uVar29;
        } while (uVar32 != uVar27);
      }
      else {
        iVar20 = 0;
        uVar29 = 0;
      }
    }
    else {
      uVar13 = (uint)*(byte *)(lVar24 + 0x33);
      if ((*(byte *)(lVar24 + 0x1c) & 3) != 0) {
        uVar13 = uVar13 + 1;
      }
      if (*(byte *)(lVar24 + 0x32) == 0) {
        lVar21 = 0;
      }
      else {
        puVar3 = (undefined1 *)
                 (lVar21 + (ulong)*(uint *)(lVar34 + uVar30 * 0x20 + 0x14) +
                 (((ulong)uVar13 & 0xff) + 1 >> 3));
        uVar42 = 0x10 - *(byte *)(lVar24 + 0x32);
        lVar21 = (long)(short)(CONCAT11(*puVar3,puVar3[1]) >>
                               ((ulong)(uVar42 - (uVar13 + 1 & 7)) & 0x3f) &
                              (ushort)(0xffffL >> ((ulong)uVar42 & 0x3f)));
      }
      uVar29 = (ushort)*(byte *)(lVar24 + ((ulong)*(byte *)(lVar24 + 0x26) << 0x18 |
                                           (ulong)*(byte *)(lVar24 + 0x27) << 0x10 |
                                           (ulong)*(byte *)(lVar24 + 0x28) << 8 |
                                          (ulong)*(byte *)(lVar24 + 0x29)) + lVar21);
      iVar20 = 0;
    }
    lVar21 = lVar34 + (uVar30 & 0xffff) * 0x20;
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar21 + 0x14);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar21 + 0x18);
    uVar13 = (*(uint *)(lVar24 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar24 + 4) & 0xff00ff) << 8;
    if ((uVar13 >> 0x10 | uVar13 << 0x10) != 0x30000) {
      iVar36 = ((uint)param_2[3] - (uint)param_2[2]) * (int)(short)uVar29;
      *param_2 = param_2[2] +
                 ((short)((ulong)((long)iVar36 * 0x82082083) >> 0x25) - (short)(iVar36 >> 0x1f));
    }
    *(int *)(param_2 + 0x1c) = iVar20;
    param_2[0x2e] = (ushort)uVar30;
LAB_001114cc:
    *(undefined1 *)(lVar34 + 0x2051) = 1;
    return 1;
  }
  bVar7 = *(byte *)(lVar24 + 0x1c);
  pcVar33 = (char *)(lVar21 + (ulong)*(uint *)(param_2 + 0x1e));
  pbVar37 = (byte *)(lVar24 + ((ulong)*(byte *)(lVar24 + 0x26) << 0x18 |
                               (ulong)*(byte *)(lVar24 + 0x27) << 0x10 |
                               (ulong)*(byte *)(lVar24 + 0x28) << 8 |
                              (ulong)*(byte *)(lVar24 + 0x29)));
  bVar5 = *(byte *)(lVar24 + 0x32);
  uVar13 = (uint)*(byte *)(lVar24 + 0x33);
  if ((bVar7 & 3) != 0) {
    uVar13 = uVar13 + 1;
  }
  if (bVar5 == 0) {
    bVar8 = *pbVar37;
    cVar6 = *(char *)(param_1 + 0x51);
  }
  else {
    uVar42 = 0x10 - bVar5;
    bVar8 = pbVar37[(short)(CONCAT11(pcVar33[((ulong)uVar13 & 0xff) + 1 >> 3],
                                     (pcVar33 + (((ulong)uVar13 & 0xff) + 1 >> 3))[1]) >>
                            ((ulong)(uVar42 - (uVar13 + 1 & 7)) & 0x3f) &
                           (ushort)(0xffffL >> ((ulong)uVar42 & 0x3f)))];
    cVar6 = *(char *)(param_1 + 0x51);
  }
  uVar27 = (ushort)bVar8;
  if (cVar6 == '\0') {
    uVar30 = (ulong)bVar5 + (ulong)(byte)uVar13 + (ulong)*(byte *)(lVar24 + 0x30) +
             (ulong)*(byte *)(lVar24 + 0x31) + 1;
    uVar32 = uVar30 >> 3;
    uVar42 = 0x10 - *(byte *)(lVar24 + 0x2f);
    uVar12 = uVar42 - ((uint)uVar30 & 7);
    uVar29 = (ushort)(0xffff >> (ulong)(uVar42 & 0x1f));
    uVar30 = uVar30 + *(byte *)(lVar24 + 0x2f);
    uVar42 = (uint)uVar30;
    if (((char)bVar7 < '\0') && (*pcVar33 < '\0')) {
      bVar8 = *(byte *)(lVar24 + 0x35);
      uVar28 = (ushort)(0xffff >> (ulong)(0x10 - bVar8 & 0x1f)) &
               CONCAT11(pcVar33[uVar30 >> 3],(pcVar33 + (uVar30 >> 3))[1]) >>
               (ulong)((0x10 - (uVar42 & 7)) - (uint)bVar8 & 0x1f);
      uVar39 = (ulong)(uVar42 + bVar8);
    }
    else {
      uVar28 = 0;
      uVar39 = uVar30;
    }
    sVar1 = uVar28 + (CONCAT11(pcVar33[uVar32],(pcVar33 + uVar32)[1]) >> (ulong)(uVar12 & 0x1f) &
                     uVar29) + ((ushort)((int)uVar39 + 7U >> 3) & 0xff);
    pcVar33 = pcVar33 + sVar1;
    pcVar2 = (char *)(lVar21 + (ulong)*(uint *)(param_2 + 0x20));
    if (pcVar33 <= pcVar2) {
      iVar20 = (int)sVar1;
      iVar36 = 0x10 - (uVar42 & 7);
      if (bVar5 == 0) {
        bVar5 = *pbVar37;
        iVar22 = 0;
        uVar28 = uVar27;
        do {
          iVar35 = iVar20;
          if (bVar5 <= uVar28) {
            iVar35 = iVar22;
          }
          uVar27 = (ushort)bVar5;
          if (bVar5 <= uVar28) {
            uVar27 = uVar28;
          }
          if (((char)bVar7 < '\0') && (*pcVar33 < '\0')) {
            bVar8 = *(byte *)(lVar24 + 0x35);
            uVar39 = (ulong)(uVar42 + bVar8);
            uVar28 = (ushort)(0xffff >> (ulong)(0x10 - bVar8 & 0x1f)) &
                     CONCAT11(pcVar33[uVar30 >> 3],(pcVar33 + (uVar30 >> 3))[1]) >>
                     (ulong)(iVar36 - (uint)bVar8 & 0x1f);
          }
          else {
            uVar28 = 0;
            uVar39 = uVar30;
          }
          sVar1 = uVar28 + (CONCAT11(pcVar33[uVar32],(pcVar33 + uVar32)[1]) >>
                            (ulong)(uVar12 & 0x1f) & uVar29) +
                  ((ushort)((int)uVar39 + 7U >> 3) & 0xff);
          pcVar33 = pcVar33 + sVar1;
          iVar20 = iVar20 + sVar1;
          iVar22 = iVar35;
          uVar28 = uVar27;
        } while (pcVar33 <= pcVar2);
      }
      else {
        uVar14 = 0x10 - bVar5;
        iVar22 = 0;
        uVar28 = uVar27;
        do {
          bVar5 = pbVar37[(short)(CONCAT11(pcVar33[((ulong)uVar13 & 0xff) + 1 >> 3],
                                           (pcVar33 + (((ulong)uVar13 & 0xff) + 1 >> 3))[1]) >>
                                  ((ulong)(uVar14 - (uVar13 + 1 & 7)) & 0x3f) &
                                 (ushort)(0xffffL >> ((ulong)uVar14 & 0x3f)))];
          uVar27 = (ushort)bVar5;
          if (bVar5 <= uVar28) {
            uVar27 = uVar28;
          }
          iVar35 = iVar20;
          if (bVar5 <= uVar28) {
            iVar35 = iVar22;
          }
          if (((char)bVar7 < '\0') && (*pcVar33 < '\0')) {
            bVar5 = *(byte *)(lVar24 + 0x35);
            uVar39 = (ulong)(uVar42 + bVar5);
            uVar28 = (ushort)(0xffff >> (ulong)(0x10 - bVar5 & 0x1f)) &
                     CONCAT11(pcVar33[uVar30 >> 3],(pcVar33 + (uVar30 >> 3))[1]) >>
                     (ulong)(iVar36 - (uint)bVar5 & 0x1f);
          }
          else {
            uVar28 = 0;
            uVar39 = uVar30;
          }
          sVar1 = uVar28 + (CONCAT11(pcVar33[uVar32],(pcVar33 + uVar32)[1]) >>
                            (ulong)(uVar12 & 0x1f) & uVar29) +
                  ((ushort)((int)uVar39 + 7U >> 3) & 0xff);
          pcVar33 = pcVar33 + sVar1;
          iVar20 = iVar20 + sVar1;
          iVar22 = iVar35;
          uVar28 = uVar27;
        } while (pcVar33 <= pcVar2);
      }
      uVar13 = (*(uint *)(lVar24 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar24 + 4) & 0xff00ff) << 8;
      uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
      goto joined_r0x00110e40;
    }
  }
  iVar35 = 0;
  uVar13 = (*(uint *)(lVar24 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar24 + 4) & 0xff00ff) << 8;
  uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
joined_r0x00110e40:
  if (uVar13 != 0x30000) {
    iVar20 = ((uint)param_2[3] - (uint)param_2[2]) * (int)(short)uVar27;
    *param_2 = param_2[2] +
               ((short)((ulong)((long)iVar20 * 0x82082083) >> 0x25) - (short)(iVar20 >> 0x1f));
  }
  *(int *)(param_2 + 0x1c) = iVar35;
  return 1;
}

