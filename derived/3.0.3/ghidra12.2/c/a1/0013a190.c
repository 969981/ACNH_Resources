
undefined8 FUN_0013a190(long *param_1,long param_2,short *param_3)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ushort uVar8;
  ushort uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  
  if (*(int *)(param_2 + 0x4c) == 0) {
    return 0x9985;
  }
  lVar7 = *param_1;
  lVar10 = lVar7 + ((ulong)*(byte *)(lVar7 + 0x2c) << 0x18 | (ulong)*(byte *)(lVar7 + 0x2d) << 0x10
                    | (ulong)*(byte *)(lVar7 + 0x2e) << 8 | (ulong)*(byte *)(lVar7 + 0x2f)) +
           (ulong)(*(int *)(param_2 + 0x4c) * 4 - 4);
  bVar3 = *(byte *)(lVar10 + 1);
  bVar4 = *(byte *)(lVar10 + 2);
  bVar5 = *(byte *)(lVar10 + 3);
  uVar14 = *(uint *)(lVar7 + 8);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
  uVar6 = uVar14 >> 0x10 | uVar14 << 0x10;
  uVar14 = (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5;
  *(uint *)(param_2 + 0x40) = uVar14;
  *(uint *)(param_2 + 0x44) = uVar14;
  *(uint *)(param_2 + 0x48) = uVar14;
  lVar10 = *param_1;
  iVar11 = 10;
  if (uVar6 == 0x50001) {
    iVar11 = 6;
  }
  pbVar2 = (byte *)(lVar10 + ((ulong)*(byte *)(lVar10 + 0x20) << 0x18 |
                              (ulong)*(byte *)(lVar10 + 0x21) << 0x10 |
                              (ulong)*(byte *)(lVar10 + 0x22) << 8 | (ulong)*(byte *)(lVar10 + 0x23)
                             ) + (ulong)((uVar14 - 1) * iVar11));
  bVar3 = *(byte *)(lVar10 + 0x4a);
  bVar4 = *(byte *)(lVar10 + 0x4b);
  uVar12 = (ulong)bVar4;
  if (bVar4 != 0) {
    lVar7 = 8;
    pbVar13 = pbVar2 + 8;
    if (uVar6 == 0x50001) {
      lVar7 = 4;
      pbVar13 = pbVar2 + 4;
    }
    uVar12 = (ulong)(ushort)(CONCAT11(pbVar2[lVar7],pbVar13[1]) >> (ulong)(0x10 - bVar4 & 0x1f));
  }
  pbVar13 = (byte *)(lVar10 + ((ulong)*(byte *)(lVar10 + 0x44) << 0x18 |
                               (ulong)*(byte *)(lVar10 + 0x45) << 0x10 |
                               (ulong)*(byte *)(lVar10 + 0x46) << 8 |
                              (ulong)*(byte *)(lVar10 + 0x47)) + uVar12 * bVar3);
  bVar4 = *pbVar13;
  uVar9 = (ushort)bVar4;
  if (bVar3 == 2) {
    uVar9 = CONCAT11(bVar4,pbVar13[1]);
  }
  *(ushort *)(param_2 + 0x70) = uVar9 << 7 | *(ushort *)(param_2 + 0x70) & 0x7f;
  lVar10 = *param_1;
  bVar4 = *(byte *)(lVar10 + 0x4f);
  uVar14 = (uint)bVar4;
  if (bVar4 != 0) {
    lVar7 = 8;
    pbVar13 = pbVar2 + 8;
    if (uVar6 == 0x50001) {
      lVar7 = 4;
      pbVar13 = pbVar2 + 4;
    }
    uVar14 = 0x10 - bVar4;
    uVar14 = 0xffffU >> (ulong)(uVar14 & 0x1f) &
             (uint)(ushort)(CONCAT11(pbVar2[lVar7],pbVar13[1]) >>
                           (ulong)(uVar14 - *(byte *)(lVar10 + 0x4b) & 0x1f));
  }
  pbVar13 = (byte *)(lVar10 + ((ulong)*(byte *)(lVar10 + 0x44) << 0x18 |
                               (ulong)*(byte *)(lVar10 + 0x45) << 0x10 |
                               (ulong)*(byte *)(lVar10 + 0x46) << 8 |
                              (ulong)*(byte *)(lVar10 + 0x47)) +
                    (ulong)(uVar14 * *(byte *)(lVar10 + 0x4e) +
                           ((int)(short)((ushort)*(byte *)(lVar10 + 0x48) << 8) |
                           (uint)*(byte *)(lVar10 + 0x49)) * (uint)bVar3));
  bVar3 = *pbVar13;
  uVar8 = (ushort)bVar3;
  if (*(byte *)(lVar10 + 0x4e) == 2) {
    uVar8 = CONCAT11(bVar3,pbVar13[1]);
  }
  *(ushort *)(param_2 + 0x72) = uVar8 << 7 | *(ushort *)(param_2 + 0x72) & 0x7f;
  uVar14 = (uint)*param_3;
  if (999 < *param_3) {
    uVar14 = 1000;
  }
  *(ushort *)(param_2 + 8) = (ushort)uVar14 & ((ushort)(uVar14 >> 0xf) ^ 0xffff);
  bVar1 = uVar6 != 0x50001;
  *(ushort *)(param_2 + 0x70) = uVar9 << 7 | (ushort)((*pbVar2 & 0x7f) >> bVar1) & 0xff;
  if (uVar6 == 0x50001) {
    bVar3 = *pbVar2 & 0x7f;
    uVar9 = *pbVar2 & 0x7f;
  }
  else {
    bVar3 = pbVar2[4] >> 1 & 0x3f;
    uVar9 = pbVar2[4] >> 1 & 0x3f;
  }
  if (bVar3 == 0) {
    uVar9 = (ushort)((*pbVar2 & 0x7f) >> (ulong)bVar1);
  }
  *(undefined1 *)(param_2 + 0x74) = 0;
  *(ushort *)(param_2 + 0x72) = uVar8 << 7 | uVar9 & 0x7f;
  return 1;
}

