
void FUN_035f0670(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  byte bVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  bVar4 = param_1[0x10a] + 8;
  bVar6 = *param_1;
  bVar2 = param_1[0x163];
  param_1[0x10a] = bVar4;
  if (bVar2 == 0) {
    uVar12 = ((ulong)bVar4 + (ulong)param_1[3]) - 8;
  }
  else {
    uVar12 = ~(ulong)param_1[0xe] + (ulong)bVar4;
  }
  uVar10 = ((ulong)bVar6 & 8) << 7;
  if (bVar2 != 0) {
    uVar10 = ((ulong)bVar6 & 0x40) << 4;
  }
  bVar4 = *(byte *)(*(long *)(param_1 + 0xc10) +
                    (uVar10 | uVar12 >> 3 & 0x1f |
                              ((ulong)(*(ushort *)(param_1 + 0x166) >> 3) & 0x1f) << 5) + 0x1800);
  param_1[0x10f] = bVar2;
  param_1[0x10c] = 0;
  param_1[0x10b] = bVar4;
  bVar4 = param_1[0x162] ^ bVar4;
  param_1[0x110] = bVar4;
  pbVar1 = (byte *)(*(long *)(param_1 + 0xc10) + (ulong)*(ushort *)(param_1 + 0x160) +
                   (((ulong)*(ushort *)(param_1 + 0x166) & 7) << 1 | (ulong)bVar4 << 4));
  bVar4 = *pbVar1;
  param_1[0x10d] = bVar4;
  uVar13 = DAT_04101608;
  bVar2 = pbVar1[1];
  param_1[0x10e] = bVar2;
  uVar11 = NEON_ushl(CONCAT17(bVar4,CONCAT16(bVar4,CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4,
                                                  CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))))),uVar13,
                     1);
  uVar13 = NEON_ushl(CONCAT17(bVar2,CONCAT16(bVar2,CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,
                                                  CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))))),uVar13,
                     1);
  uVar13 = NEON_sli(CONCAT17((byte)((ulong)uVar11 >> 0x3f),
                             CONCAT16((byte)((ulong)uVar11 >> 0x30) >> 7,
                                      CONCAT15((byte)((ulong)uVar11 >> 0x28) >> 7,
                                               CONCAT14((byte)((ulong)uVar11 >> 0x20) >> 7,
                                                        CONCAT13((byte)((ulong)uVar11 >> 0x18) >> 7,
                                                                 CONCAT12((byte)((ulong)uVar11 >>
                                                                                0x10) >> 7,
                                                                          CONCAT11((byte)((ulong)
                                                  uVar11 >> 8) >> 7,(byte)uVar11 >> 7))))))),
                    CONCAT17((byte)((ulong)uVar13 >> 0x3f),
                             CONCAT16((byte)((ulong)uVar13 >> 0x30) >> 7,
                                      CONCAT15((byte)((ulong)uVar13 >> 0x28) >> 7,
                                               CONCAT14((byte)((ulong)uVar13 >> 0x20) >> 7,
                                                        CONCAT13((byte)((ulong)uVar13 >> 0x18) >> 7,
                                                                 CONCAT12((byte)((ulong)uVar13 >>
                                                                                0x10) >> 7,
                                                                          CONCAT11((byte)((ulong)
                                                  uVar13 >> 8) >> 7,(byte)uVar13 >> 7))))))),1,1);
  uVar12 = NEON_sli(uVar13,0,2,1);
  *(ulong *)(param_1 + 0x100) = uVar12 & -(long)(char)param_1[0x17];
  param_1[0xe4] = 5;
  param_1[0xe5] = 7;
  if (((bVar6 >> 1 & 1) == 0) ||
     (((*(ulong *)(param_1 + 0x128) | *(ulong *)(param_1 + 0x120) |
        *(ulong *)(param_1 + 0x130) | *(ulong *)(param_1 + 0x138) |
        *(ulong *)(param_1 + 0x140) | *(ulong *)(param_1 + 0x148) | *(ulong *)(param_1 + 0x150) |
       *(ulong *)(param_1 + 0x158)) & 0xc30c30c30c30c3) == 0)) {
    uVar12 = *(ulong *)(param_1 + 0xf8);
    puVar7 = *(undefined2 **)(param_1 + 0x7e0);
    **(undefined8 **)(param_1 + 0x7f0) = &DAT_101010101010101 + (uVar12 & 0x1f1f1f1f1f1f1f1f);
    *puVar7 = *(undefined2 *)(param_1 + (uVar12 & 0x1f) * 2 + 0x1e);
    puVar7[1] = *(undefined2 *)(param_1 + (uVar12 >> 8 & 0x1f) * 2 + 0x1e);
    puVar7[2] = *(undefined2 *)(param_1 + (uVar12 >> 0x10 & 0x1f) * 2 + 0x1e);
    puVar7[3] = *(undefined2 *)(param_1 + (uVar12 >> 0x18 & 0x1f) * 2 + 0x1e);
    puVar7[4] = *(undefined2 *)(param_1 + (uVar12 >> 0x20 & 0x1f) * 2 + 0x1e);
    puVar7[5] = *(undefined2 *)(param_1 + (uVar12 >> 0x28 & 0x1f) * 2 + 0x1e);
    puVar7[6] = *(undefined2 *)(param_1 + (uVar12 >> 0x30 & 0x1f) * 2 + 0x1e);
    puVar7[7] = *(undefined2 *)(param_1 + ((uVar12 & 0x1f1f1f1f1f1f1f1f) >> 0x37) + 0x1e);
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
    bVar4 = param_1[0x108];
    lVar5 = 8;
    uVar12 = *(ulong *)(param_1 + 0xf8);
    do {
      bVar2 = param_1[0x119];
      bVar6 = (byte)uVar12 & 0x1f;
      uVar8 = *(undefined2 *)(param_1 + (uVar12 & 0x1f) * 2 + 0x1e);
      uVar10 = *(ulong *)(param_1 + (ulong)bVar2 * 8 + 0x120);
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
      if ((uVar10 & 0xc30c30c30c30c3) != 0) {
        uVar3 = (uVar10 & 0x82082082082082) >> 1 | (uVar10 & 0x41041041041041) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> ((ulong)(uint)((int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) / 6) *
                                         6) & 0x3f);
        if (((uVar12 & 3) == 0) ||
           ((((uint)uVar12 >> 5 & 1) == 0 && (((uint)uVar10 >> 5 & 1) != 0)))) {
          bVar6 = (byte)uVar10 & 0x1f | 0x20;
          uVar8 = *(undefined2 *)(param_1 + (ulong)param_1[(uVar10 & 0x1f) + 0x66] * 2 + 0x6e);
        }
      }
      puVar7 = *(undefined2 **)(param_1 + 0x7e0);
      bVar4 = bVar4 + 1;
      pcVar9 = *(char **)(param_1 + 0x7f0);
      lVar5 = lVar5 + -1;
      *puVar7 = uVar8;
      *pcVar9 = bVar6 + 1;
      param_1[0x108] = bVar4;
      *(undefined2 **)(param_1 + 0x7e0) = puVar7 + 1;
      *(char **)(param_1 + 0x7f0) = pcVar9 + 1;
      uVar12 = *(ulong *)(param_1 + 0xf8) >> 8;
      *(ulong *)(param_1 + 0xf8) = uVar12;
      param_1[0x109] = param_1[0x109] + 1;
    } while (lVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x100);
  param_1[0xe4] = 4;
  *(short *)(param_1 + 0xe6) = *(short *)(param_1 + 0xe6) + 8;
  return;
}

