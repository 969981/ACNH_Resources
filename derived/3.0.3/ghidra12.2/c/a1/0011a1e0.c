
undefined8
FUN_0011a1e0(undefined8 param_1,long param_2,ulong param_3,undefined1 *param_4,char param_5,
            char param_6,char param_7,byte param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  bool bVar10;
  short sVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  undefined1 *puVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined1 auStack_64 [4];
  
  if (CONCAT11(*(undefined1 *)(param_2 + 0x26),*(undefined1 *)(param_2 + 0x27)) <
      CONCAT11(*(undefined1 *)(param_2 + 0x2a),*(undefined1 *)(param_2 + 0x2b))) {
    bVar22 = *(byte *)(param_2 + 0x3c);
    bVar4 = *(byte *)(param_2 + 0x3d);
    bVar5 = *(byte *)(param_2 + 0x3e);
    bVar6 = *(byte *)(param_2 + 0x3f);
    puVar1 = param_4 + 0xc;
    lVar14 = param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                        (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                        (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23)) +
             (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(undefined1 *)(param_2 + 0x2f)) *
             (param_3 & 0xffff);
    *(char *)(lVar14 + 1) = (char)(*(ushort *)(param_4 + 4) >> 1);
    *(byte *)(lVar14 + 2) = param_4[4] << 7 | (param_4[0x15c] & 0x3f) << 1;
    *(char *)(lVar14 + 3) = (char)(*(ushort *)(param_4 + 6) >> 1);
    *(byte *)(lVar14 + 4) = param_4[6] << 7 | (param_4[0x15d] & 0x3f) << 1;
    uVar13 = *(uint *)(param_2 + 8);
    lVar14 = FUN_0011a890(param_1,param_2,lVar14 + 5,puVar1,(ulong)(byte)param_4[0x15c] << 1);
    if (lVar14 != 0) {
      puVar2 = param_4 + 0x7c;
      lVar14 = FUN_0011a890(param_1,param_2,lVar14,puVar2,(ulong)(byte)param_4[0x15d] << 1);
      if (lVar14 != 0) {
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
        bVar10 = uVar13 == 0x80020000;
        uVar24 = (*(uint *)(param_2 + 4) & 0xff00ff00) >> 8 |
                 (*(uint *)(param_2 + 4) & 0xff00ff) << 8;
        uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
        if ((bVar10 && uVar24 == 0x40000) || (bVar10 && uVar24 == 0x30000)) {
          puVar21 = (undefined1 *)
                    (param_2 + ((ulong)*(byte *)(param_2 + 0x44) << 0x18 |
                                (ulong)*(byte *)(param_2 + 0x45) << 0x10 |
                                (ulong)*(byte *)(param_2 + 0x46) << 8 |
                               (ulong)*(byte *)(param_2 + 0x47)) +
                    (ulong)((uint)param_3 & 0xffff) * 6);
          *puVar21 = *param_4;
          puVar21[1] = param_4[1];
          puVar21[2] = param_4[2];
          puVar21[3] = param_4[3];
          puVar21[4] = (char)(*(ushort *)(param_4 + 8) >> 1);
          puVar21[5] = param_4[8] << 7 | (param_4[0x15f] & 0x3f) << 1;
        }
        if (bVar10 && uVar24 == 0x40000 || uVar13 == 0x80030000 && uVar24 == 0x30000) {
          pcVar15 = (char *)(param_2 + ((ulong)*(byte *)(param_2 + 0x38) << 0x18 |
                                        (ulong)*(byte *)(param_2 + 0x39) << 0x10 |
                                        (ulong)*(byte *)(param_2 + 0x3a) << 8 |
                                       (ulong)*(byte *)(param_2 + 0x3b)) + (param_3 & 0xffff) * 0x70
                            );
          *pcVar15 = param_4[0x15e] << 1;
          pcVar15[1] = '\0';
          FUN_00100660(pcVar15 + 2,param_4 + 0xec,(ulong)(byte)param_4[0x15e] << 1);
        }
        uVar9 = (ushort)(param_3 >> 8) & 0xff | (ushort)(((uint)param_3 & 0xff00ff) << 8);
        *(ushort *)(param_2 + 0x36) = uVar9;
        if (uVar13 == 0x80020000) {
          uVar17 = (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(undefined1 *)(param_2 + 0x2f));
          iVar8 = 0;
          if (uVar17 != 0) {
            iVar8 = (int)((long)((lVar14 + -1) -
                                (param_2 +
                                ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                                 (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                                 (ulong)*(byte *)(param_2 + 0x22) << 8 |
                                (ulong)*(byte *)(param_2 + 0x23)))) / (long)uVar17);
          }
          uVar24 = 0;
          if ((iVar8 + 1U & 0xffff) <
              (uint)CONCAT11(*(undefined1 *)(param_2 + 0x2a),*(undefined1 *)(param_2 + 0x2b))) {
            uVar24 = iVar8 + 1;
          }
          *(ushort *)(param_2 + 0x32) =
               (ushort)(uVar24 >> 8) & 0xff | (ushort)((uVar24 & 0xff00ff) << 8);
        }
        lVar14 = param_2 + ((ulong)bVar22 << 0x18 | (ulong)bVar4 << 0x10 | (ulong)bVar5 << 8 |
                           (ulong)bVar6);
        uVar7 = CONCAT11(*(undefined1 *)(param_2 + 0x26),*(undefined1 *)(param_2 + 0x27));
        uVar17 = (ulong)uVar7;
        uVar24 = (uint)uVar7;
        if (uVar24 == 0) {
          uVar13 = 0;
          uVar25 = 0;
        }
        else if (uVar13 == 0x80030000) {
          uVar23 = 0;
          uVar16 = uVar17;
          uVar26 = uVar17;
          do {
            while( true ) {
              uVar25 = (uint)uVar26;
              uVar13 = (int)uVar16 - (uVar23 & 0xffff);
              if ((int)uVar13 < 0) {
                uVar13 = uVar13 + 1;
              }
              uVar3 = uVar23 + (uVar13 >> 1);
              uVar7 = *(ushort *)(lVar14 + ((ulong)uVar3 & 0xffff) * 2);
              uVar7 = uVar7 >> 8 | uVar7 << 8;
              lVar12 = FUN_00119860(param_1,param_2,uVar7,auStack_64,1);
              if (lVar12 == 0) {
                return 0xa222;
              }
              sVar11 = FUN_00100410(puVar1,lVar12);
              if (sVar11 < 0) break;
              if (sVar11 == 0) {
                lVar12 = FUN_00119c10(param_1,param_2,uVar7,auStack_64,1);
                if (lVar12 == 0) {
                  return 0xa222;
                }
                sVar11 = FUN_00100410(puVar2,lVar12);
                if (0 < sVar11) {
                  uVar23 = uVar3 + 1;
                  uVar3 = uVar25;
                }
                uVar13 = uVar3 & 0xffff;
                uVar16 = (ulong)uVar13;
                uVar26 = (ulong)uVar3;
                uVar25 = uVar3;
                if (uVar13 <= (uVar23 & 0xffff)) goto LAB_0011a654;
              }
              else {
                uVar23 = uVar3 + 1;
                uVar13 = uVar25 & 0xffff;
                uVar16 = (ulong)uVar13;
                if (uVar13 <= (uVar23 & 0xffff)) goto LAB_0011a654;
              }
            }
            uVar13 = uVar3 & 0xffff;
            uVar16 = (ulong)uVar13;
            uVar26 = (ulong)uVar3;
            uVar25 = uVar3;
          } while ((uVar23 & 0xffff) < uVar13);
        }
        else {
          uVar23 = 0;
          uVar16 = uVar17;
          uVar26 = uVar17;
          do {
            uVar13 = (int)uVar16 - (uVar23 & 0xffff);
            if ((int)uVar13 < 0) {
              uVar13 = uVar13 + 1;
            }
            uVar13 = uVar23 + (uVar13 >> 1);
            uVar7 = *(ushort *)(lVar14 + ((ulong)uVar13 & 0xffff) * 2);
            lVar12 = FUN_00119860(param_1,param_2,uVar7 >> 8 | uVar7 << 8,auStack_64,1);
            if (lVar12 == 0) {
              return 0xa222;
            }
            sVar11 = FUN_00100410(puVar1,lVar12);
            uVar25 = uVar13;
            if (0 < sVar11) {
              uVar25 = (uint)uVar26;
            }
            uVar26 = (ulong)uVar25;
            if (0 < sVar11) {
              uVar23 = uVar13 + 1;
            }
            uVar13 = uVar25 & 0xffff;
            uVar16 = (ulong)uVar13;
          } while ((uVar23 & 0xffff) < uVar13);
        }
LAB_0011a654:
        bVar22 = 1;
        if (param_6 != '\0') {
          bVar22 = 2;
        }
        *(ushort *)(param_2 + 0x34) =
             (ushort)(uVar24 + 1 >> 8) & 0xff | (ushort)((uVar24 + 1 & 0xff00ff) << 8);
        puVar18 = (ushort *)(lVar14 + (ulong)(uVar13 << 1));
        *(byte *)(param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                             (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                             (ulong)*(byte *)(param_2 + 0x22) << 8 |
                            (ulong)*(byte *)(param_2 + 0x23)) +
                 (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(undefined1 *)(param_2 + 0x2f)) *
                 (param_3 & 0xffff)) =
             bVar22 | param_7 << 7 | (param_5 == '\x01') << 6 | (param_8 & 1) << 4;
        if (((uVar25 & 0xffff) < uVar24) && (uVar13 = uVar24 - uVar25, (uVar13 & 0xffff) != 0)) {
          puVar19 = puVar18 + (ushort)uVar13;
          uVar23 = uVar13 & 3;
          puVar20 = puVar19;
          uVar3 = uVar23;
          if (2 < (uVar24 + ~uVar25 & 0xffff)) {
            uVar13 = uVar13 - uVar23;
            do {
              puVar19 = puVar20 + -4;
              uVar13 = uVar13 - 4;
              *(undefined8 *)(puVar20 + -3) = *(undefined8 *)puVar19;
              puVar20 = puVar19;
            } while ((uVar13 & 0xffff) != 0);
          }
          while (uVar3 != 0) {
            uVar23 = uVar23 - 1;
            *puVar19 = puVar20[-1];
            puVar19 = puVar19 + -1;
            puVar20 = puVar20 + -1;
            uVar3 = uVar23 & 0xffff;
          }
        }
        *puVar18 = uVar9;
        lVar14 = param_2 + ((ulong)*(byte *)(param_2 + 0x40) << 0x18 |
                            (ulong)*(byte *)(param_2 + 0x41) << 0x10 |
                            (ulong)*(byte *)(param_2 + 0x42) << 8 | (ulong)*(byte *)(param_2 + 0x43)
                           );
        if (uVar24 == 0) {
          puVar18 = (ushort *)(lVar14 + uVar17 * 2);
        }
        else {
          uVar13 = 0;
          uVar16 = uVar17;
          do {
            uVar25 = (int)uVar17 - (uVar13 & 0xffff);
            if ((int)uVar25 < 0) {
              uVar25 = uVar25 + 1;
            }
            uVar25 = uVar13 + (uVar25 >> 1);
            uVar7 = *(ushort *)(lVar14 + ((ulong)uVar25 & 0xffff) * 2);
            lVar12 = FUN_00119c10(param_1,param_2,uVar7 >> 8 | uVar7 << 8,auStack_64,1);
            if (lVar12 == 0) {
              return 0xa222;
            }
            sVar11 = FUN_00100410(puVar2,lVar12);
            uVar23 = uVar25;
            if (0 < sVar11) {
              uVar23 = (uint)uVar16;
            }
            uVar16 = (ulong)uVar23;
            if (0 < sVar11) {
              uVar13 = uVar25 + 1;
            }
            uVar25 = uVar23 & 0xffff;
            uVar17 = (ulong)uVar25;
          } while ((uVar13 & 0xffff) < uVar25);
          puVar18 = (ushort *)(lVar14 + (ulong)(uVar25 << 1));
          if (((uVar23 & 0xffff) < uVar24) && (uVar13 = uVar24 - uVar23, (uVar13 & 0xffff) != 0)) {
            puVar19 = puVar18 + (ushort)uVar13;
            uVar25 = uVar13 & 3;
            puVar20 = puVar19;
            uVar3 = uVar25;
            if (2 < (uVar24 + ~uVar23 & 0xffff)) {
              uVar13 = uVar13 - uVar25;
              do {
                puVar19 = puVar20 + -4;
                uVar13 = uVar13 - 4;
                *(undefined8 *)(puVar20 + -3) = *(undefined8 *)puVar19;
                puVar20 = puVar19;
              } while ((uVar13 & 0xffff) != 0);
            }
            while (uVar3 != 0) {
              uVar25 = uVar25 - 1;
              *puVar19 = puVar20[-1];
              puVar19 = puVar19 + -1;
              puVar20 = puVar20 + -1;
              uVar3 = uVar25 & 0xffff;
            }
          }
        }
        *puVar18 = uVar9;
        *(undefined2 *)(param_2 + 0x26) = *(undefined2 *)(param_2 + 0x34);
        return 0;
      }
    }
  }
  return 0xa222;
}

