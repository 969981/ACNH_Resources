
byte * FUN_00119860(long param_1,long param_2,ushort param_3,byte *param_4,byte param_5)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ushort uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ushort uVar18;
  byte *pbVar19;
  uint uVar20;
  
  pbVar15 = (byte *)(param_1 + 0x61e30);
  pbVar7 = pbVar15;
  *param_4 = 0;
  if (param_5 == 0) {
    uVar12 = 0;
  }
  else {
    uVar13 = 0;
LAB_00119890:
    do {
      if (uVar13 != 0) {
        uVar5 = CONCAT11(*(undefined1 *)(param_2 + 0x2a),*(undefined1 *)(param_2 + 0x2b));
        if (uVar5 != 0) {
          uVar18 = 0;
          uVar8 = param_3;
          do {
            param_3 = 0;
            if ((ushort)(uVar8 + 1) < uVar5) {
              param_3 = uVar8 + 1;
            }
            if ((*(byte *)(param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                                      (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                                      (ulong)*(byte *)(param_2 + 0x22) << 8 |
                                     (ulong)*(byte *)(param_2 + 0x23)) +
                          (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),
                                          *(undefined1 *)(param_2 + 0x2f)) * (ulong)param_3) & 3) !=
                0) goto LAB_0011990c;
            uVar18 = uVar18 + 1;
            uVar8 = param_3;
          } while (uVar18 < uVar5);
        }
        param_3 = 0;
      }
LAB_0011990c:
      pbVar16 = (byte *)(param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                                    (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                                    (ulong)*(byte *)(param_2 + 0x22) << 8 |
                                   (ulong)*(byte *)(param_2 + 0x23)) +
                        (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),
                                        *(undefined1 *)(param_2 + 0x2f)) * (ulong)param_3);
      if (1 < (*pbVar16 & 3) - 1) {
        return (byte *)0x0;
      }
      uVar20 = pbVar16[2] & 0x7f;
      uVar1 = (uint)*param_4 + (uVar20 >> 1);
      *param_4 = (byte)uVar1;
      if (0x37 < (uVar1 & 0xff)) {
        return (byte *)0x0;
      }
      bVar2 = *(byte *)(param_2 + 0x2f);
      pbVar16 = pbVar16 + 5;
      uVar3 = *(undefined1 *)(param_2 + 0x2e);
      uVar10 = bVar2 - 5;
      uVar1 = uVar20;
      if ((uVar10 & 0xff) <= uVar20) {
        uVar1 = uVar10;
      }
      if ((uVar1 & 0xff) == 0) {
        uVar20 = uVar20 - uVar1;
        if ((uVar20 & 0xff) != 0) goto LAB_00119a84;
LAB_001199dc:
        uVar13 = uVar13 + 1;
        if (param_5 <= uVar13) break;
        goto LAB_00119890;
      }
      uVar10 = 4 - bVar2;
      pbVar19 = (byte *)(ulong)uVar10;
      if ((uVar10 & 0xff) < (~uVar20 & 0xff)) {
        uVar10 = ~uVar20;
      }
      uVar10 = -uVar10 - 2 & 0xff;
      uVar9 = uVar1 & 7;
      pbVar17 = pbVar16;
      pbVar6 = (byte *)(ulong)uVar10;
      pbVar14 = pbVar15;
      if (6 < uVar10) {
        uVar10 = uVar1 - uVar9;
        do {
          *pbVar15 = *pbVar16;
          pbVar15[1] = pbVar16[1];
          pbVar15[2] = pbVar16[2];
          pbVar15[3] = pbVar16[3];
          pbVar15[4] = pbVar16[4];
          pbVar15[5] = pbVar16[5];
          pbVar15[6] = pbVar16[6];
          pbVar17 = pbVar16 + 8;
          pbVar19 = pbVar15 + 8;
          uVar10 = uVar10 - 8;
          pbVar15[7] = pbVar16[7];
          pbVar16 = pbVar17;
          pbVar15 = pbVar19;
          pbVar6 = pbVar17;
          pbVar14 = pbVar19;
        } while ((uVar10 & 0xff) != 0);
      }
      pbVar15 = pbVar19;
      pbVar16 = pbVar6;
      if (uVar9 != 0) {
        do {
          pbVar16 = pbVar17 + 1;
          uVar9 = uVar9 - 1;
          pbVar15 = pbVar14 + 1;
          *pbVar14 = *pbVar17;
          pbVar17 = pbVar16;
          pbVar14 = pbVar15;
        } while ((uVar9 & 0xff) != 0);
      }
      uVar20 = uVar20 - uVar1;
      if ((uVar20 & 0xff) == 0) goto LAB_001199dc;
LAB_00119a84:
      uVar1 = (uint)CONCAT11(uVar3,bVar2);
      pbVar19 = (byte *)(param_2 +
                        ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                         (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                         (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23)));
      uVar3 = *(undefined1 *)(param_2 + 0x2a);
      uVar4 = *(undefined1 *)(param_2 + 0x2b);
      do {
        while( true ) {
          if (pbVar19 + (int)(CONCAT11(uVar3,uVar4) * uVar1 + -1) <= pbVar16) {
            pbVar16 = pbVar19;
          }
          if (*pbVar16 != 0) {
            return (byte *)0x0;
          }
          uVar10 = uVar20;
          if (uVar1 <= (uVar20 & 0xff)) {
            uVar10 = bVar2 - 1;
          }
          pbVar16 = pbVar16 + 1;
          if ((uVar10 & 0xff) == 0) break;
          uVar9 = uVar10 - 1 & 0xff;
          uVar11 = uVar10 & 7;
          pbVar17 = (byte *)(ulong)uVar9;
          pbVar14 = pbVar15;
          if (6 < uVar9) {
            uVar9 = uVar10 - uVar11;
            do {
              *pbVar15 = *pbVar16;
              pbVar15[1] = pbVar16[1];
              pbVar15[2] = pbVar16[2];
              pbVar15[3] = pbVar16[3];
              pbVar15[4] = pbVar16[4];
              pbVar15[5] = pbVar16[5];
              pbVar15[6] = pbVar16[6];
              pbVar14 = pbVar16 + 7;
              pbVar17 = pbVar15 + 8;
              uVar9 = uVar9 - 8;
              pbVar16 = pbVar16 + 8;
              pbVar15[7] = *pbVar14;
              pbVar15 = pbVar17;
              pbVar14 = pbVar17;
            } while ((uVar9 & 0xff) != 0);
          }
          pbVar15 = pbVar17;
          if (uVar11 != 0) {
            pbVar17 = pbVar16;
            do {
              pbVar16 = pbVar17 + 1;
              uVar11 = uVar11 - 1;
              pbVar15 = pbVar14 + 1;
              *pbVar14 = *pbVar17;
              pbVar14 = pbVar15;
              pbVar17 = pbVar16;
            } while ((uVar11 & 0xff) != 0);
          }
          uVar20 = uVar20 - uVar10;
          if ((uVar20 & 0xff) == 0) goto LAB_00119bb0;
        }
        uVar20 = uVar20 - uVar10;
      } while ((uVar20 & 0xff) != 0);
LAB_00119bb0:
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_5);
    uVar12 = (ulong)*param_4;
  }
  *(undefined2 *)(param_1 + uVar12 * 2 + 0x61e30) = 0;
  return pbVar7;
}

