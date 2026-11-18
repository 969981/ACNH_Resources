
void FUN_035f11d0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  undefined2 *puVar9;
  byte bVar10;
  undefined2 uVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  bVar5 = param_1[0x10a] + 8;
  bVar10 = *param_1;
  param_1[0x10a] = bVar5;
  if (param_1[0x163] == 0) {
    lVar6 = ((ulong)bVar10 & 8) << 7;
    uVar7 = ((ulong)bVar5 + (ulong)param_1[3]) - 8;
  }
  else {
    lVar6 = ((ulong)bVar10 & 0x40) << 4;
    uVar7 = ~(ulong)param_1[0xe] + (ulong)bVar5;
  }
  lVar4 = *(long *)(param_1 + 0xc10);
  lVar6 = (uVar7 >> 3 & 0x1f) + lVar6 + ((ulong)*(ushort *)(param_1 + 0x166) & 0xf8) * 4 + 0x1800;
  bVar5 = *(byte *)(lVar4 + lVar6);
  param_1[0x10f] = param_1[0x163];
  param_1[0x10b] = bVar5;
  bVar5 = param_1[0x162] ^ bVar5;
  param_1[0x110] = bVar5;
  if ((long)(char)param_1[0x17] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)*(byte *)(lVar6 + lVar4 + 0x2000);
  }
  param_1[0x10c] = (byte)uVar7;
  uVar13 = 0;
  if ((uVar7 & 0x40) != 0) {
    uVar13 = 7;
  }
  bVar8 = (byte)uVar7 & 7 | (byte)(((uint)uVar7 >> 7) << 3);
  pbVar1 = (byte *)(lVar4 + ((ulong)*(ushort *)(param_1 + 0x160) | (uVar7 & 8) << 10) +
                            (ulong)bVar5 * 0x10 +
                            (uVar13 ^ (ulong)*(ushort *)(param_1 + 0x166) & 7) * 2);
  bVar5 = *pbVar1;
  uVar14 = *(undefined8 *)(&DAT_04102390 + (ulong)((uint)uVar7 >> 5 & 1) * 8);
  param_1[0x10d] = bVar5;
  bVar2 = pbVar1[1];
  param_1[0xe5] = 7;
  param_1[0x10e] = bVar2;
  uVar15 = NEON_ushl(CONCAT17(bVar5,CONCAT16(bVar5,CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,
                                                  CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))))),uVar14,
                     1);
  uVar14 = NEON_ushl(CONCAT17(bVar2,CONCAT16(bVar2,CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,
                                                  CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))))),uVar14,
                     1);
  uVar14 = NEON_sli(CONCAT17((byte)((ulong)uVar15 >> 0x3f),
                             CONCAT16((byte)((ulong)uVar15 >> 0x30) >> 7,
                                      CONCAT15((byte)((ulong)uVar15 >> 0x28) >> 7,
                                               CONCAT14((byte)((ulong)uVar15 >> 0x20) >> 7,
                                                        CONCAT13((byte)((ulong)uVar15 >> 0x18) >> 7,
                                                                 CONCAT12((byte)((ulong)uVar15 >>
                                                                                0x10) >> 7,
                                                                          CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) >> 7,(byte)uVar15 >> 7))))))),
                    CONCAT17((byte)((ulong)uVar14 >> 0x3f),
                             CONCAT16((byte)((ulong)uVar14 >> 0x30) >> 7,
                                      CONCAT15((byte)((ulong)uVar14 >> 0x28) >> 7,
                                               CONCAT14((byte)((ulong)uVar14 >> 0x20) >> 7,
                                                        CONCAT13((byte)((ulong)uVar14 >> 0x18) >> 7,
                                                                 CONCAT12((byte)((ulong)uVar14 >>
                                                                                0x10) >> 7,
                                                                          CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) >> 7,(byte)uVar14 >> 7))))))),1,1);
  uVar7 = NEON_sli(uVar14,CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8
                                                  ,CONCAT12(bVar8,CONCAT11(bVar8,bVar8))))))),2,1);
  *(ulong *)(param_1 + 0x100) = uVar7 & -(long)(char)param_1[0x17];
  if (((bVar10 >> 1 & 1) == 0) ||
     (((*(ulong *)(param_1 + 0x128) | *(ulong *)(param_1 + 0x120) |
        *(ulong *)(param_1 + 0x130) | *(ulong *)(param_1 + 0x138) |
        *(ulong *)(param_1 + 0x140) | *(ulong *)(param_1 + 0x148) | *(ulong *)(param_1 + 0x150) |
       *(ulong *)(param_1 + 0x158)) & 0xc30c30c30c30c3) == 0)) {
    uVar7 = *(ulong *)(param_1 + 0xf8);
    puVar9 = *(undefined2 **)(param_1 + 0x7e0);
    **(undefined8 **)(param_1 + 0x7f0) = &DAT_101010101010101 + (uVar7 & 0x1f1f1f1f1f1f1f1f);
    *puVar9 = *(undefined2 *)(param_1 + (uVar7 & 0x1f) * 2 + 0x26);
    puVar9[1] = *(undefined2 *)(param_1 + (uVar7 >> 8 & 0x1f) * 2 + 0x26);
    puVar9[2] = *(undefined2 *)(param_1 + (uVar7 >> 0x10 & 0x1f) * 2 + 0x26);
    puVar9[3] = *(undefined2 *)(param_1 + (uVar7 >> 0x18 & 0x1f) * 2 + 0x26);
    puVar9[4] = *(undefined2 *)(param_1 + (uVar7 >> 0x20 & 0x1f) * 2 + 0x26);
    puVar9[5] = *(undefined2 *)(param_1 + (uVar7 >> 0x28 & 0x1f) * 2 + 0x26);
    puVar9[6] = *(undefined2 *)(param_1 + (uVar7 >> 0x30 & 0x1f) * 2 + 0x26);
    puVar9[7] = *(undefined2 *)(param_1 + ((uVar7 & 0x1f1f1f1f1f1f1f1f) >> 0x37) + 0x26);
    param_1[0x120] = 0;
    param_1[0x121] = 0;
    param_1[0x122] = 0;
    param_1[0x123] = 0;
    param_1[0x124] = 0;
    param_1[0x125] = 0;
    param_1[0x126] = 0;
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x12a] = 0;
    param_1[299] = 0;
    param_1[300] = 0;
    param_1[0x12d] = 0;
    param_1[0x12e] = 0;
    param_1[0x12f] = 0;
    param_1[0x130] = 0;
    param_1[0x131] = 0;
    param_1[0x132] = 0;
    param_1[0x133] = 0;
    param_1[0x134] = 0;
    param_1[0x135] = 0;
    param_1[0x136] = 0;
    param_1[0x137] = 0;
    param_1[0x138] = 0;
    param_1[0x139] = 0;
    param_1[0x13a] = 0;
    param_1[0x13b] = 0;
    param_1[0x13c] = 0;
    param_1[0x13d] = 0;
    param_1[0x13e] = 0;
    param_1[0x13f] = 0;
    param_1[0x140] = 0;
    param_1[0x141] = 0;
    param_1[0x142] = 0;
    param_1[0x143] = 0;
    param_1[0x144] = 0;
    param_1[0x145] = 0;
    param_1[0x146] = 0;
    param_1[0x147] = 0;
    param_1[0x148] = 0;
    param_1[0x149] = 0;
    param_1[0x14a] = 0;
    param_1[0x14b] = 0;
    param_1[0x14c] = 0;
    param_1[0x14d] = 0;
    param_1[0x14e] = 0;
    param_1[0x14f] = 0;
    param_1[0x150] = 0;
    param_1[0x151] = 0;
    param_1[0x152] = 0;
    param_1[0x153] = 0;
    param_1[0x154] = 0;
    param_1[0x155] = 0;
    param_1[0x156] = 0;
    param_1[0x157] = 0;
    param_1[0x158] = 0;
    param_1[0x159] = 0;
    param_1[0x15a] = 0;
    param_1[0x15b] = 0;
    param_1[0x15c] = 0;
    param_1[0x15d] = 0;
    param_1[0x15e] = 0;
    param_1[0x15f] = 0;
    param_1[0x109] = param_1[0x109] + 8;
    param_1[0x108] = param_1[0x108] + 8;
    *(long *)(param_1 + 0x7e0) = *(long *)(param_1 + 0x7e0) + 0x10;
    *(long *)(param_1 + 0x7f0) = *(long *)(param_1 + 0x7f0) + 8;
  }
  else {
    bVar5 = param_1[0x108];
    uVar7 = *(ulong *)(param_1 + 0xf8);
    lVar6 = 8;
    do {
      bVar2 = param_1[0x119];
      uVar11 = *(undefined2 *)(param_1 + (uVar7 & 0x1f) * 2 + 0x26);
      bVar10 = (byte)uVar7 & 0x1f;
      uVar13 = *(ulong *)(param_1 + (ulong)bVar2 * 8 + 0x120);
      param_1[0x119] = bVar2 + 1 & 7;
      pbVar1 = param_1 + (ulong)bVar2 * 8 + 0x120;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      if ((uVar13 & 0xc30c30c30c30c3) != 0) {
        uVar3 = (uVar13 & 0x82082082082082) >> 1 | (uVar13 & 0x41041041041041) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> ((ulong)(uint)((int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) / 6) *
                                         6) & 0x3f);
        if ((((uVar7 & 3) == 0) || (param_1[0x18] != 0)) ||
           ((((uint)uVar7 >> 5 & 1) == 0 && (((uint)uVar13 >> 5 & 1) != 0)))) {
          bVar10 = (byte)uVar13 & 0x1f | 0x20;
          uVar11 = *(undefined2 *)(param_1 + (uVar13 & 0x1f) * 2 + 0x6e);
        }
      }
      puVar9 = *(undefined2 **)(param_1 + 0x7e0);
      bVar5 = bVar5 + 1;
      pcVar12 = *(char **)(param_1 + 0x7f0);
      lVar6 = lVar6 + -1;
      *puVar9 = uVar11;
      *pcVar12 = bVar10 + 1;
      param_1[0x108] = bVar5;
      *(undefined2 **)(param_1 + 0x7e0) = puVar9 + 1;
      *(char **)(param_1 + 0x7f0) = pcVar12 + 1;
      uVar7 = *(ulong *)(param_1 + 0xf8) >> 8;
      *(ulong *)(param_1 + 0xf8) = uVar7;
      param_1[0x109] = param_1[0x109] + 1;
    } while (lVar6 != 0);
  }
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x100);
  param_1[0xe4] = 4;
  *(short *)(param_1 + 0xe6) = *(short *)(param_1 + 0xe6) + 8;
  return;
}

