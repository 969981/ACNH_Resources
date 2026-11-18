
void FUN_035f1c58(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  bVar3 = param_1[0x10a] + 8;
  param_1[0x10a] = bVar3;
  if (param_1[0x163] == 0) {
    lVar6 = ((ulong)*param_1 & 8) << 7;
    uVar7 = ((ulong)bVar3 + (ulong)param_1[3]) - 8;
  }
  else {
    lVar6 = ((ulong)*param_1 & 0x40) << 4;
    uVar7 = ~(ulong)param_1[0xe] + (ulong)bVar3;
  }
  lVar5 = *(long *)(param_1 + 0xc10);
  lVar6 = (uVar7 >> 3 & 0x1f) + lVar6 + ((ulong)*(ushort *)(param_1 + 0x166) & 0xf8) * 4 + 0x1800;
  bVar3 = *(byte *)(lVar5 + lVar6);
  param_1[0x10f] = param_1[0x163];
  param_1[0x10b] = bVar3;
  bVar3 = param_1[0x162] ^ bVar3;
  param_1[0x110] = bVar3;
  if ((long)(char)param_1[0x17] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)*(byte *)(lVar6 + lVar5 + 0x2000);
  }
  param_1[0x10c] = (byte)uVar7;
  uVar10 = 0;
  if ((uVar7 & 0x40) != 0) {
    uVar10 = 7;
  }
  pbVar1 = (byte *)(lVar5 + ((ulong)*(ushort *)(param_1 + 0x160) | (uVar7 & 8) << 10) +
                            (ulong)bVar3 * 0x10 +
                            (uVar10 ^ (ulong)*(ushort *)(param_1 + 0x166) & 7) * 2);
  bVar3 = *pbVar1;
  param_1[0x10d] = bVar3;
  bVar2 = pbVar1[1];
  uVar11 = *(undefined8 *)(&DAT_04102390 + (ulong)((uint)uVar7 >> 5 & 1) * 8);
  param_1[0xe5] = 7;
  puVar8 = *(undefined2 **)(param_1 + 0x7e0);
  bVar4 = (byte)uVar7 & 7 | (byte)(((uint)uVar7 >> 7) << 3);
  param_1[0x10e] = bVar2;
  uVar9 = NEON_ushl(CONCAT17(bVar3,CONCAT16(bVar3,CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,
                                                  CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))))),uVar11,
                    1);
  uVar11 = NEON_ushl(CONCAT17(bVar2,CONCAT16(bVar2,CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,
                                                  CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))))),uVar11,
                     1);
  uVar7 = *(ulong *)(param_1 + 0xf8);
  uVar9 = NEON_sli(CONCAT17((byte)((ulong)uVar9 >> 0x3f),
                            CONCAT16((byte)((ulong)uVar9 >> 0x30) >> 7,
                                     CONCAT15((byte)((ulong)uVar9 >> 0x28) >> 7,
                                              CONCAT14((byte)((ulong)uVar9 >> 0x20) >> 7,
                                                       CONCAT13((byte)((ulong)uVar9 >> 0x18) >> 7,
                                                                CONCAT12((byte)((ulong)uVar9 >> 0x10
                                                                               ) >> 7,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar9 >> 8) >> 7,(byte)uVar9 >> 7))))))),
                   CONCAT17((byte)((ulong)uVar11 >> 0x3f),
                            CONCAT16((byte)((ulong)uVar11 >> 0x30) >> 7,
                                     CONCAT15((byte)((ulong)uVar11 >> 0x28) >> 7,
                                              CONCAT14((byte)((ulong)uVar11 >> 0x20) >> 7,
                                                       CONCAT13((byte)((ulong)uVar11 >> 0x18) >> 7,
                                                                CONCAT12((byte)((ulong)uVar11 >>
                                                                               0x10) >> 7,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar11 >> 8) >> 7,(byte)uVar11 >> 7))))))),1,1);
  uVar10 = NEON_sli(uVar9,CONCAT17(bVar4,CONCAT16(bVar4,CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4
                                                  ,CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))))),2,1);
  *(ulong *)(param_1 + 0x100) = uVar10 & -(long)(char)param_1[0x17];
  **(undefined8 **)(param_1 + 0x7f0) = &DAT_101010101010101 + (uVar7 & 0x1f1f1f1f1f1f1f1f);
  *puVar8 = *(undefined2 *)(param_1 + (uVar7 & 0x1f) * 2 + 0x26);
  puVar8[1] = *(undefined2 *)(param_1 + (uVar7 >> 8 & 0x1f) * 2 + 0x26);
  puVar8[2] = *(undefined2 *)(param_1 + (uVar7 >> 0x10 & 0x1f) * 2 + 0x26);
  puVar8[3] = *(undefined2 *)(param_1 + (uVar7 >> 0x18 & 0x1f) * 2 + 0x26);
  puVar8[4] = *(undefined2 *)(param_1 + (uVar7 >> 0x20 & 0x1f) * 2 + 0x26);
  puVar8[5] = *(undefined2 *)(param_1 + (uVar7 >> 0x28 & 0x1f) * 2 + 0x26);
  puVar8[6] = *(undefined2 *)(param_1 + (uVar7 >> 0x30 & 0x1f) * 2 + 0x26);
  puVar8[7] = *(undefined2 *)(param_1 + ((uVar7 & 0x1f1f1f1f1f1f1f1f) >> 0x37) + 0x26);
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
  param_1[0xe4] = 4;
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
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x100);
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
  *(short *)(param_1 + 0xe6) = *(short *)(param_1 + 0xe6) + 8;
  return;
}

