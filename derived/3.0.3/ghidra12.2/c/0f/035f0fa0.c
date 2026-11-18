
void FUN_035f0fa0(byte *param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  bVar4 = param_1[0x115];
  pbVar2 = (byte *)(*(long *)(param_1 + 0xc28) + (ulong)param_1[(ulong)bVar4 + 0x16b] * 4);
  bVar8 = *param_1;
  bVar5 = pbVar2[2];
  param_1[0x116] = bVar5;
  if ((bVar8 >> 1 & 1) == 0) {
    uVar9 = (ulong)param_1[0x114];
  }
  else {
    uVar3 = pbVar2[3] & 0xffffffef ^ 0xffffff80;
    uVar9 = (ulong)uVar3;
    param_1[0x114] = (byte)uVar3;
  }
  uVar11 = (8L << ((ulong)(bVar8 >> 2) & 1)) - 1;
  uVar10 = (ulong)param_1[4] - (ulong)*pbVar2 & uVar11;
  if ((uVar9 & 0x40) != 0) {
    uVar10 = uVar11 - uVar10;
  }
  uVar3 = (uint)bVar5;
  if ((bVar8 & 4) != 0) {
    uVar3 = bVar5 & 0xfe;
  }
  pbVar2 = (byte *)(*(long *)(param_1 + 0xc10) +
                   ((uVar9 & 8) << 10 | (ulong)uVar3 << 4) + uVar10 * 2);
  bVar5 = *pbVar2;
  param_1[0x117] = bVar5;
  bVar6 = pbVar2[1];
  param_1[0x118] = bVar6;
  if ((param_2 == 0) && ((bVar8 >> 1 & 1) != 0)) {
    bVar8 = (byte)uVar9 & 7 | (byte)(((uint)uVar9 >> 7 & 1) << 3);
    uVar10 = (ulong)((uint)bVar4 * 3) << 1;
    uVar14 = NEON_ushl(CONCAT17(bVar5,CONCAT16(bVar5,CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,
                                                  CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))))),
                       *(undefined8 *)(&DAT_04102390 + (ulong)((uint)uVar9 >> 5 & 1) * 8),1);
    uVar15 = NEON_ushl(CONCAT17(bVar6,CONCAT16(bVar6,CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,
                                                  CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))))),
                       *(undefined8 *)(&DAT_04102390 + (ulong)((uint)uVar9 >> 5 & 1) * 8),1);
    uVar14 = NEON_sli(CONCAT17((byte)((ulong)uVar14 >> 0x3f),
                               CONCAT16((byte)((ulong)uVar14 >> 0x30) >> 7,
                                        CONCAT15((byte)((ulong)uVar14 >> 0x28) >> 7,
                                                 CONCAT14((byte)((ulong)uVar14 >> 0x20) >> 7,
                                                          CONCAT13((byte)((ulong)uVar14 >> 0x18) >>
                                                                   7,CONCAT12((byte)((ulong)uVar14
                                                                                    >> 0x10) >> 7,
                                                                              CONCAT11((byte)((ulong
                                                  )uVar14 >> 8) >> 7,(byte)uVar14 >> 7))))))),
                      CONCAT17((byte)((ulong)uVar15 >> 0x3f),
                               CONCAT16((byte)((ulong)uVar15 >> 0x30) >> 7,
                                        CONCAT15((byte)((ulong)uVar15 >> 0x28) >> 7,
                                                 CONCAT14((byte)((ulong)uVar15 >> 0x20) >> 7,
                                                          CONCAT13((byte)((ulong)uVar15 >> 0x18) >>
                                                                   7,CONCAT12((byte)((ulong)uVar15
                                                                                    >> 0x10) >> 7,
                                                                              CONCAT11((byte)((ulong
                                                  )uVar15 >> 8) >> 7,(byte)uVar15 >> 7))))))),1,1);
    uVar11 = NEON_sli(uVar14,CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(
                                                  bVar8,CONCAT12(bVar8,CONCAT11(bVar8,bVar8))))))),2
                      ,1);
    uVar9 = (ulong)((uint)param_1[0x119] * -8) & 0x3f;
    uVar9 = uVar11 >> uVar9 | uVar11 << 0x40 - uVar9;
    *(ulong *)(param_1 + 0x120) = (uVar9 & 0x3f) << (uVar10 & 0x3e) | *(ulong *)(param_1 + 0x120);
    *(ulong *)(param_1 + 0x128) =
         (uVar9 >> 8 & 0x3f) << (uVar10 & 0x3e) | *(ulong *)(param_1 + 0x128);
    *(ulong *)(param_1 + 0x130) =
         (uVar9 >> 0x10 & 0x3f) << (uVar10 & 0x3e) | *(ulong *)(param_1 + 0x130);
    *(ulong *)(param_1 + 0x138) =
         *(ulong *)(param_1 + 0x138) | (uVar9 >> 0x18 & 0x3f) << (uVar10 & 0x3e);
    *(ulong *)(param_1 + 0x140) =
         *(ulong *)(param_1 + 0x140) | (uVar9 >> 0x20 & 0x3f) << (uVar10 & 0x3e);
    *(ulong *)(param_1 + 0x148) =
         *(ulong *)(param_1 + 0x148) | (uVar9 >> 0x28 & 0x3f) << (uVar10 & 0x3e);
    *(ulong *)(param_1 + 0x150) =
         *(ulong *)(param_1 + 0x150) | (uVar9 >> 0x30 & 0x3f) << (uVar10 & 0x3e);
    *(ulong *)(param_1 + 0x158) =
         *(ulong *)(param_1 + 0x158) | (uVar9 >> 0x38 & 0x3f) << (uVar10 & 0x3e);
  }
  uVar7 = 1 << (ulong)(bVar4 & 0x1f);
  uVar3 = (uint)*(ushort *)(param_1 + 0x112) | uVar7 & 0xffff;
  *(ushort *)(param_1 + 0x112) = *(ushort *)(param_1 + 0x112) | (ushort)uVar7;
  uVar7 = ~uVar3;
  uVar7 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  lVar12 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
  if (lVar12 + 1U < (ulong)param_1[0x16a]) {
    lVar13 = lVar12;
    do {
      lVar1 = lVar13 + 1;
      if ((((uVar3 >> (ulong)((uint)lVar1 & 0x1f) & 1) == 0) &&
          (bVar4 = *(byte *)(*(long *)(param_1 + 0xc28) + (ulong)param_1[lVar13 + 0x16c] * 4 + 1),
          param_1[0x108] <= bVar4)) &&
         (bVar4 <= *(byte *)(*(long *)(param_1 + 0xc28) + (ulong)param_1[lVar12 + 0x16b] * 4 + 1)))
      {
        lVar12 = lVar1;
      }
      lVar13 = lVar1;
    } while ((ulong)param_1[0x16a] - 1 != lVar1);
  }
  param_1[0x115] = (byte)lVar12;
  param_1[0xe4] = 5;
  param_1[0xe5] = 7;
  return;
}

