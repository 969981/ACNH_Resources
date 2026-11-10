
undefined8 FUN_0011bed0(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined1 uVar13;
  short sVar14;
  byte bVar15;
  ushort uVar16;
  ushort uVar17;
  long lVar18;
  byte bVar19;
  long lVar20;
  long lVar21;
  ushort uVar22;
  long lVar23;
  undefined1 uVar24;
  long lVar25;
  byte *pbVar26;
  ushort uVar27;
  ushort uVar28;
  ulong uVar29;
  
  lVar21 = *(long *)(param_2 + 4);
  uVar2 = (*(byte *)((long)param_2 + 0x5f) >> 4) + 0xd;
  if ((uVar2 & 0xf) < 4) {
    lVar18 = ((long)((ulong)uVar2 << 0x3c) >> 0x3c) * 8;
    lVar25 = *(long *)(&DAT_04058500 + lVar18);
    lVar23 = *(long *)(&DAT_04057680 + lVar18);
    lVar20 = *(long *)(&DAT_040577e0 + lVar18);
    lVar18 = *(long *)(&DAT_04057d80 + lVar18);
  }
  else {
    lVar18 = 0x3f;
    lVar20 = 0x3e;
    lVar23 = 0x3d;
    lVar25 = 0x3c;
  }
  uVar22 = *(ushort *)
            (lVar21 + ((ulong)*(byte *)(lVar21 + lVar25) << 0x18 |
                       (ulong)*(byte *)(lVar21 + lVar23) << 0x10 |
                       (ulong)*(byte *)(lVar21 + lVar20) << 8 | (ulong)*(byte *)(lVar21 + lVar18)) +
            ((ulong)*(uint *)(param_2 + 0x1c) & 0xffff) * 2);
  uVar22 = uVar22 >> 8 | uVar22 << 8;
  bVar19 = *(byte *)(param_2 + 0x2f) & 0xf;
  if ((*(byte *)(param_2 + 0x2f) & 0xf) == 0) {
    if (CONCAT11(*(undefined1 *)(lVar21 + 0x2a),*(undefined1 *)(lVar21 + 0x2b)) <= uVar22) {
      return 0x991b;
    }
  }
  else {
    uVar16 = CONCAT11(*(undefined1 *)(lVar21 + 0x2a),*(undefined1 *)(lVar21 + 0x2b));
    if (uVar16 == 0) {
      return 0x991b;
    }
    do {
      uVar27 = 0;
      bVar19 = bVar19 - 1;
      uVar28 = uVar22;
      do {
        uVar22 = 0;
        if ((ushort)(uVar28 + 1) < uVar16) {
          uVar22 = uVar28 + 1;
        }
        if ((*(byte *)(lVar21 + ((ulong)*(byte *)(lVar21 + 0x20) << 0x18 |
                                 (ulong)*(byte *)(lVar21 + 0x21) << 0x10 |
                                 (ulong)*(byte *)(lVar21 + 0x22) << 8 |
                                (ulong)*(byte *)(lVar21 + 0x23)) +
                      (ulong)CONCAT11(*(undefined1 *)(lVar21 + 0x2e),*(undefined1 *)(lVar21 + 0x2f))
                      * (ulong)uVar22) & 3) != 0) goto LAB_0011bff8;
        uVar27 = uVar27 + 1;
        uVar28 = uVar22;
      } while (uVar27 < uVar16);
      uVar22 = 0;
LAB_0011bff8:
    } while (bVar19 != 0);
    if (uVar16 <= uVar22) {
      return 0x991b;
    }
  }
  pbVar26 = (byte *)(lVar21 + ((ulong)*(byte *)(lVar21 + 0x20) << 0x18 |
                               (ulong)*(byte *)(lVar21 + 0x21) << 0x10 |
                               (ulong)*(byte *)(lVar21 + 0x22) << 8 |
                              (ulong)*(byte *)(lVar21 + 0x23)) +
                    (ulong)CONCAT11(*(undefined1 *)(lVar21 + 0x2e),*(undefined1 *)(lVar21 + 0x2f)) *
                    (ulong)uVar22);
  *(ushort *)(param_1 + 0x60798) = uVar22;
  bVar19 = *pbVar26;
  *(char *)(param_1 + 0x6079e) = (char)(bVar19 & 3);
  *(short *)(param_1 + 0x6079a) =
       (short)(((uint)(*(ushort *)(pbVar26 + 1) >> 8) | (*(ushort *)(pbVar26 + 1) & 0xff00ff) << 8)
              >> 7);
  *(short *)(param_1 + 0x6079c) =
       (short)(((uint)(*(ushort *)(pbVar26 + 3) >> 8) | (*(ushort *)(pbVar26 + 3) & 0xff00ff) << 8)
              >> 7);
  bVar15 = pbVar26[2] >> 1 & 0x3f;
  *(byte *)(param_1 + 0x607a1) = pbVar26[2] & 0x7f;
  *(byte *)(param_1 + 0x6079f) = bVar15;
  bVar10 = pbVar26[4];
  *(byte *)(param_1 + 0x607a2) = bVar10 & 0x7f;
  *(byte *)(param_1 + 0x607a0) = bVar10 >> 1 & 0x3f;
  *(byte *)(param_1 + 0x607a3) = *pbVar26 >> 6 & 1;
  if (1 < (bVar19 & 3) - 1) {
    return 0x991b;
  }
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  param_3[2] = *(long *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_2 + 0x14);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x1c);
  param_3[9] = *(undefined8 *)(param_2 + 0x20);
  param_3[7] = uVar9;
  param_3[8] = uVar6;
  param_3[3] = uVar7;
  param_3[4] = uVar4;
  param_3[5] = uVar8;
  param_3[6] = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x2c);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(ushort *)((long)param_3 + 0x42) = uVar22;
  param_3[0xc] = uVar5;
  param_3[0xd] = uVar7;
  param_3[10] = uVar4;
  param_3[0xb] = uVar6;
  *(undefined2 *)(param_3 + 1) = *param_2;
  sVar14 = *(short *)(param_1 + 0x6079a);
  *(ushort *)(param_3 + 0xe) = *(ushort *)(param_3 + 0xe) & 0x7f | sVar14 << 7;
  uVar16 = sVar14 << 7;
  if ((*(byte *)((long)param_2 + 0x5f) & 0xf0) == 0x30) {
    bVar19 = *(byte *)(param_1 + 0x6079f);
    *(ushort *)((long)param_3 + 0x72) = *(ushort *)((long)param_3 + 0x72) & 0xff80 | bVar19 & 0x7f;
    bVar10 = *(byte *)(param_1 + 0x607a0);
    uVar27 = bVar19 & 0x7f;
    if (bVar10 == 0) {
      bVar10 = *(byte *)(param_1 + 0x6079f);
    }
    *(ushort *)(param_3 + 0xe) = uVar16 | bVar10 & 0x7f;
  }
  else {
    *(ushort *)(param_3 + 0xe) = uVar16 | *(byte *)(param_1 + 0x6079f) & 0x7f;
    bVar19 = *(byte *)(param_1 + 0x607a0);
    if (bVar19 == 0) {
      bVar19 = *(byte *)(param_1 + 0x6079f);
    }
    uVar27 = bVar19 & 0x7f;
    *(ushort *)((long)param_3 + 0x72) = *(ushort *)((long)param_3 + 0x72) & 0xff80 | uVar27;
  }
  *(ushort *)((long)param_3 + 0x72) = uVar27 | *(short *)(param_1 + 0x6079c) << 7;
  if ((byte)((*(byte *)((long)param_2 + 0x5f) >> 4) - 5) < 2) {
    uVar24 = *(undefined1 *)(param_1 + 0x6079f);
  }
  else {
    uVar24 = 0;
  }
  *(undefined1 *)((long)param_3 + 0x75) = uVar24;
  *(undefined1 *)((long)param_3 + 0x74) = 0;
  if (1 < *(byte *)(param_3 + 0xd) - 1) {
    lVar21 = param_3[2];
    if (*(byte *)(param_3 + 0xd) == 3) {
      uVar2 = *(uint *)(lVar21 + 0x70);
    }
    else {
      uVar2 = (*(uint *)(lVar21 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar21 + 8) & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    }
    if ((uVar2 == 0x80020000) && ((*(byte *)((long)param_3 + 0x67) & 0xf0) == 0x10)) {
      if (((*(byte *)((long)param_3 + 0x66) ^ 0xff) & 0xa0) == 0) {
        *(undefined1 *)((long)param_3 + 0x66) = 0x20;
        uVar16 = CONCAT11(*(undefined1 *)(lVar21 + 0x2a),*(undefined1 *)(lVar21 + 0x2b));
        if (uVar16 == 0) {
          uVar27 = 0;
LAB_0011c2f4:
          if (uVar16 <= uVar27) {
            return 0x991b;
          }
        }
        else {
          uVar28 = 0;
          uVar27 = uVar22;
          do {
            uVar17 = 0;
            if ((ushort)(uVar27 + 1) < uVar16) {
              uVar17 = uVar27 + 1;
            }
            uVar27 = uVar17;
            if ((*(byte *)(lVar21 + ((ulong)*(byte *)(lVar21 + 0x20) << 0x18 |
                                     (ulong)*(byte *)(lVar21 + 0x21) << 0x10 |
                                     (ulong)*(byte *)(lVar21 + 0x22) << 8 |
                                    (ulong)*(byte *)(lVar21 + 0x23)) +
                          (ulong)CONCAT11(*(undefined1 *)(lVar21 + 0x2e),
                                          *(undefined1 *)(lVar21 + 0x2f)) * (ulong)uVar27) & 3) != 0
               ) goto LAB_0011c2f4;
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar16);
          uVar27 = 0;
          if (uVar16 == 0) {
            return 0x991b;
          }
        }
        bVar19 = *(byte *)(lVar21 + 0x20);
        bVar10 = *(byte *)(lVar21 + 0x21);
        bVar11 = *(byte *)(lVar21 + 0x22);
        bVar12 = *(byte *)(lVar21 + 0x23);
        uVar24 = *(undefined1 *)(lVar21 + 0x2e);
        uVar13 = *(undefined1 *)(lVar21 + 0x2f);
        *(ushort *)(param_1 + 0x60798) = uVar27;
        pbVar26 = (byte *)(lVar21 + ((ulong)bVar19 << 0x18 | (ulong)bVar10 << 0x10 |
                                     (ulong)bVar11 << 8 | (ulong)bVar12) +
                          (ulong)CONCAT11(uVar24,uVar13) * (ulong)uVar27);
        bVar19 = *pbVar26;
        *(char *)(param_1 + 0x6079e) = (char)(bVar19 & 3);
        *(short *)(param_1 + 0x6079a) =
             (short)(((uint)(*(ushort *)(pbVar26 + 1) >> 8) |
                     (*(ushort *)(pbVar26 + 1) & 0xff00ff) << 8) >> 7);
        uVar16 = *(ushort *)(pbVar26 + 3) >> 8;
        uVar2 = (*(ushort *)(pbVar26 + 3) & 0xff00ff) << 8;
        *(short *)(param_1 + 0x6079c) = (short)((uVar16 | uVar2) >> 7);
        bVar10 = pbVar26[2];
        *(byte *)(param_1 + 0x607a1) = bVar10 & 0x7f;
        *(byte *)(param_1 + 0x6079f) = bVar10 >> 1 & 0x3f;
        bVar10 = pbVar26[4];
        *(byte *)(param_1 + 0x607a2) = bVar10 & 0x7f;
        *(byte *)(param_1 + 0x607a0) = bVar10 >> 1 & 0x3f;
        *(byte *)(param_1 + 0x607a3) = *pbVar26 >> 6 & 1;
        if (1 < (bVar19 & 3) - 1) {
          return 0x991b;
        }
        uVar27 = *(ushort *)((long)param_3 + 0x72);
        uVar28 = (ushort)uVar2;
        *(ushort *)((long)param_3 + 0x72) = uVar16 & 0xff80 | uVar28 | uVar27 & 0x7f;
        *(ushort *)(param_3 + 0xe) =
             *(ushort *)(param_3 + 0xe) & 0xff80 |
             *(ushort *)(param_3 + 0xe) + (ushort)*(byte *)(param_1 + 0x6079f) & 0x7f;
        bVar19 = *(byte *)(param_1 + 0x607a0);
        if (bVar19 == 0) {
          bVar19 = *(byte *)(param_1 + 0x6079f);
        }
        *(ushort *)((long)param_3 + 0x72) = uVar27 + bVar19 & 0x7f | uVar16 & 0xff80 | uVar28;
        if (*(uint *)(param_1 + 0x61e2c) < 0x14) {
          if (*(char *)(param_1 + 0x60832) == '\0') {
            lVar21 = 0;
          }
          else if (*(char *)(param_1 + 0x608c2) == '\0') {
            lVar21 = 1;
          }
          else if (*(char *)(param_1 + 0x60952) == '\0') {
            lVar21 = 2;
          }
          else if (*(char *)(param_1 + 0x609e2) == '\0') {
            lVar21 = 3;
          }
          else if (*(char *)(param_1 + 0x60a72) == '\0') {
            lVar21 = 4;
          }
          else if (*(char *)(param_1 + 0x60b02) == '\0') {
            lVar21 = 5;
          }
          else if (*(char *)(param_1 + 0x60b92) == '\0') {
            lVar21 = 6;
          }
          else if (*(char *)(param_1 + 0x60c22) == '\0') {
            lVar21 = 7;
          }
          else if (*(char *)(param_1 + 0x60cb2) == '\0') {
            lVar21 = 8;
          }
          else if (*(char *)(param_1 + 0x60d42) == '\0') {
            lVar21 = 9;
          }
          else if (*(char *)(param_1 + 0x60dd2) == '\0') {
            lVar21 = 10;
          }
          else if (*(char *)(param_1 + 0x60e62) == '\0') {
            lVar21 = 0xb;
          }
          else if (*(char *)(param_1 + 0x60ef2) == '\0') {
            lVar21 = 0xc;
          }
          else if (*(char *)(param_1 + 0x60f82) == '\0') {
            lVar21 = 0xd;
          }
          else if (*(char *)(param_1 + 0x61012) == '\0') {
            lVar21 = 0xe;
          }
          else if (*(char *)(param_1 + 0x610a2) == '\0') {
            lVar21 = 0xf;
          }
          else if (*(char *)(param_1 + 0x61132) == '\0') {
            lVar21 = 0x10;
          }
          else if (*(char *)(param_1 + 0x611c2) == '\0') {
            lVar21 = 0x11;
          }
          else if (*(char *)(param_1 + 0x61252) == '\0') {
            lVar21 = 0x12;
          }
          else if (*(char *)(param_1 + 0x612e2) == '\0') {
            lVar21 = 0x13;
          }
          else if (*(char *)(param_1 + 0x61372) == '\0') {
            lVar21 = 0x14;
          }
          else if (*(char *)(param_1 + 0x61402) == '\0') {
            lVar21 = 0x15;
          }
          else if (*(char *)(param_1 + 0x61492) == '\0') {
            lVar21 = 0x16;
          }
          else if (*(char *)(param_1 + 0x61522) == '\0') {
            lVar21 = 0x17;
          }
          else if (*(char *)(param_1 + 0x615b2) == '\0') {
            lVar21 = 0x18;
          }
          else if (*(char *)(param_1 + 0x61642) == '\0') {
            lVar21 = 0x19;
          }
          else if (*(char *)(param_1 + 0x616d2) == '\0') {
            lVar21 = 0x1a;
          }
          else if (*(char *)(param_1 + 0x61762) == '\0') {
            lVar21 = 0x1b;
          }
          else if (*(char *)(param_1 + 0x617f2) == '\0') {
            lVar21 = 0x1c;
          }
          else if (*(char *)(param_1 + 0x61882) == '\0') {
            lVar21 = 0x1d;
          }
          else if (*(char *)(param_1 + 0x61912) == '\0') {
            lVar21 = 0x1e;
          }
          else if (*(char *)(param_1 + 0x619a2) == '\0') {
            lVar21 = 0x1f;
          }
          else if (*(char *)(param_1 + 0x61a32) == '\0') {
            lVar21 = 0x20;
          }
          else if (*(char *)(param_1 + 0x61ac2) == '\0') {
            lVar21 = 0x21;
          }
          else if (*(char *)(param_1 + 0x61b52) == '\0') {
            lVar21 = 0x22;
          }
          else if (*(char *)(param_1 + 0x61be2) == '\0') {
            lVar21 = 0x23;
          }
          else if (*(char *)(param_1 + 0x61c72) == '\0') {
            lVar21 = 0x24;
          }
          else if (*(char *)(param_1 + 0x61d02) == '\0') {
            lVar21 = 0x25;
          }
          else if (*(char *)(param_1 + 0x61d92) == '\0') {
            lVar21 = 0x26;
          }
          else {
            if (*(char *)(param_1 + 0x61e22) != '\0') {
              return 1;
            }
            lVar21 = 0x27;
          }
          lVar18 = param_1 + 0x607e8;
          uVar29 = 1;
          if (*(char *)(param_1 + 0x60832) != '\0') goto LAB_0011c7f0;
          do {
            do {
              if (0x27 < uVar29) {
                lVar21 = param_1 + lVar21 * 0x90;
                *(byte *)(lVar21 + 0x60830) = bVar15;
                *(byte *)(lVar21 + 0x60831) = *(byte *)(param_3 + 0xe) & 0x7f;
                uVar4 = param_3[2];
                uVar5 = *param_3;
                uVar6 = param_3[1];
                *(undefined8 *)(lVar21 + 0x607c0) = param_3[3];
                *(undefined8 *)(lVar21 + 0x607b8) = uVar4;
                *(undefined8 *)(lVar21 + 0x607b0) = uVar6;
                *(undefined8 *)(lVar21 + 0x607a8) = uVar5;
                uVar4 = param_3[6];
                uVar5 = param_3[4];
                uVar6 = param_3[5];
                *(undefined8 *)(lVar21 + 0x607e0) = param_3[7];
                *(undefined8 *)(lVar21 + 0x607d8) = uVar4;
                *(undefined8 *)(lVar21 + 0x607d0) = uVar6;
                *(undefined8 *)(lVar21 + 0x607c8) = uVar5;
                uVar4 = param_3[10];
                uVar5 = param_3[8];
                uVar6 = param_3[9];
                *(undefined8 *)(lVar21 + 0x60800) = param_3[0xb];
                *(undefined8 *)(lVar21 + 0x607f8) = uVar4;
                *(undefined8 *)(lVar21 + 0x607f0) = uVar6;
                *(undefined8 *)(lVar21 + 0x607e8) = uVar5;
                uVar4 = param_3[0xe];
                uVar5 = param_3[0xc];
                uVar6 = param_3[0xd];
                *(undefined8 *)(lVar21 + 0x60820) = param_3[0xf];
                *(undefined8 *)(lVar21 + 0x60818) = uVar4;
                *(undefined8 *)(lVar21 + 0x60810) = uVar6;
                *(undefined8 *)(lVar21 + 0x60808) = uVar5;
                iVar3 = *(int *)(param_1 + 0x61e2c) + 1;
                *(int *)(param_1 + 0x61e2c) = iVar3;
                *(char *)(lVar21 + 0x60832) = (char)iVar3;
                *(undefined1 *)(lVar21 + 0x60833) = 0;
                return 1;
              }
              pcVar1 = (char *)(lVar18 + 0xda);
              lVar18 = lVar18 + 0x90;
              uVar29 = uVar29 + 1;
            } while (*pcVar1 == '\0');
LAB_0011c7f0:
          } while (*(ushort *)(lVar18 + 2) != uVar22);
        }
      }
      else if ((char)*(byte *)((long)param_3 + 0x66) < '\0') {
        *(undefined1 *)((long)param_3 + 0x66) = 0x10;
      }
    }
  }
  return 1;
}

