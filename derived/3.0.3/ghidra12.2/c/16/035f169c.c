
void FUN_035f169c(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  bVar3 = param_1[0x10a] + 8;
  bVar2 = param_1[0x163];
  param_1[0x10a] = bVar3;
  if (bVar2 == 0) {
    uVar5 = ((ulong)bVar3 + (ulong)param_1[3]) - 8;
  }
  else {
    uVar5 = ~(ulong)param_1[0xe] + (ulong)bVar3;
  }
  uVar7 = ((ulong)*param_1 & 8) << 7;
  if (bVar2 != 0) {
    uVar7 = ((ulong)*param_1 & 0x40) << 4;
  }
  bVar3 = *(byte *)(*(long *)(param_1 + 0xc10) +
                    (uVar7 | uVar5 >> 3 & 0x1f |
                             ((ulong)(*(ushort *)(param_1 + 0x166) >> 3) & 0x1f) << 5) + 0x1800);
  param_1[0x10f] = bVar2;
  param_1[0x10c] = 0;
  bVar2 = param_1[0x162] ^ bVar3;
  param_1[0x10b] = bVar3;
  param_1[0x110] = bVar2;
  pbVar1 = (byte *)(*(long *)(param_1 + 0xc10) + (ulong)*(ushort *)(param_1 + 0x160) +
                   (((ulong)*(ushort *)(param_1 + 0x166) & 7) << 1 | (ulong)bVar2 << 4));
  uVar5 = *(ulong *)(param_1 + 0xf8);
  bVar3 = *pbVar1;
  param_1[0x10d] = bVar3;
  uVar8 = DAT_04101608;
  bVar2 = pbVar1[1];
  param_1[0xe5] = 7;
  param_1[0x10e] = bVar2;
  uVar6 = NEON_ushl(CONCAT17(bVar3,CONCAT16(bVar3,CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,
                                                  CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))))),uVar8,1
                   );
  uVar8 = NEON_ushl(CONCAT17(bVar2,CONCAT16(bVar2,CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,
                                                  CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))))),uVar8,1
                   );
  uVar8 = NEON_sli(CONCAT17((byte)((ulong)uVar6 >> 0x3f),
                            CONCAT16((byte)((ulong)uVar6 >> 0x30) >> 7,
                                     CONCAT15((byte)((ulong)uVar6 >> 0x28) >> 7,
                                              CONCAT14((byte)((ulong)uVar6 >> 0x20) >> 7,
                                                       CONCAT13((byte)((ulong)uVar6 >> 0x18) >> 7,
                                                                CONCAT12((byte)((ulong)uVar6 >> 0x10
                                                                               ) >> 7,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar6 >> 8) >> 7,(byte)uVar6 >> 7))))))),
                   CONCAT17((byte)((ulong)uVar8 >> 0x3f),
                            CONCAT16((byte)((ulong)uVar8 >> 0x30) >> 7,
                                     CONCAT15((byte)((ulong)uVar8 >> 0x28) >> 7,
                                              CONCAT14((byte)((ulong)uVar8 >> 0x20) >> 7,
                                                       CONCAT13((byte)((ulong)uVar8 >> 0x18) >> 7,
                                                                CONCAT12((byte)((ulong)uVar8 >> 0x10
                                                                               ) >> 7,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar8 >> 8) >> 7,(byte)uVar8 >> 7))))))),1,1);
  uVar7 = NEON_sli(uVar8,0,2,1);
  *(ulong *)(param_1 + 0x100) = uVar7 & -(long)(char)param_1[0x17];
  puVar4 = *(undefined2 **)(param_1 + 0x7e0);
  **(undefined8 **)(param_1 + 0x7f0) = &DAT_101010101010101 + (uVar5 & 0x1f1f1f1f1f1f1f1f);
  *puVar4 = *(undefined2 *)(param_1 + (uVar5 & 0x1f) * 2 + 0x1e);
  puVar4[1] = *(undefined2 *)(param_1 + (uVar5 >> 8 & 0x1f) * 2 + 0x1e);
  puVar4[2] = *(undefined2 *)(param_1 + (uVar5 >> 0x10 & 0x1f) * 2 + 0x1e);
  puVar4[3] = *(undefined2 *)(param_1 + (uVar5 >> 0x18 & 0x1f) * 2 + 0x1e);
  puVar4[4] = *(undefined2 *)(param_1 + (uVar5 >> 0x20 & 0x1f) * 2 + 0x1e);
  puVar4[5] = *(undefined2 *)(param_1 + (uVar5 >> 0x28 & 0x1f) * 2 + 0x1e);
  puVar4[6] = *(undefined2 *)(param_1 + (uVar5 >> 0x30 & 0x1f) * 2 + 0x1e);
  puVar4[7] = *(undefined2 *)(param_1 + ((uVar5 & 0x1f1f1f1f1f1f1f1f) >> 0x37) + 0x1e);
  param_1[0xe4] = 4;
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
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x100);
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
  param_1[0x109] = param_1[0x109] + 8;
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
  param_1[0x108] = param_1[0x108] + 8;
  *(long *)(param_1 + 0x7e0) = *(long *)(param_1 + 0x7e0) + 0x10;
  *(long *)(param_1 + 0x7f0) = *(long *)(param_1 + 0x7f0) + 8;
  *(short *)(param_1 + 0xe6) = *(short *)(param_1 + 0xe6) + 8;
  return;
}

