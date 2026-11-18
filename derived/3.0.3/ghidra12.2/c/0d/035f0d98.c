
void FUN_035f0d98(byte *param_1)

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
  param_1[0xe4] = 4;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x100);
  param_1[0x109] = param_1[0x109] + 8;
  param_1[0x108] = param_1[0x108] + 8;
  *(long *)(param_1 + 0x7e0) = *(long *)(param_1 + 0x7e0) + 0x10;
  *(long *)(param_1 + 0x7f0) = *(long *)(param_1 + 0x7f0) + 8;
  *(short *)(param_1 + 0xe6) = *(short *)(param_1 + 0xe6) + 8;
  return;
}

