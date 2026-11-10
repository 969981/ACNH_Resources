
undefined8 FUN_0013dff0(undefined2 *param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  
  if ((*(byte *)((long)param_1 + 0x5f) & 0xf) == 3) {
    return 0;
  }
  lVar12 = *(long *)(param_1 + 4);
  lVar1 = lVar12 + ((ulong)*(byte *)(lVar12 + 0x34) << 0x18 |
                    (ulong)*(byte *)(lVar12 + 0x35) << 0x10 | (ulong)*(byte *)(lVar12 + 0x36) << 8 |
                   (ulong)*(byte *)(lVar12 + 0x37)) + (ulong)(uint)(*(int *)(param_1 + 0x1c) << 2);
  pbVar2 = (byte *)(lVar12 + ((ulong)*(byte *)(lVar12 + 0x28) << 0x18 |
                              (ulong)*(byte *)(lVar12 + 0x29) << 0x10 |
                              (ulong)*(byte *)(lVar12 + 0x2a) << 8 | (ulong)*(byte *)(lVar12 + 0x2b)
                             ) +
                   (ulong)(((uint)*(byte *)(lVar1 + 1) << 0x10 | (uint)*(byte *)(lVar1 + 2) << 8 |
                           (uint)*(byte *)(lVar1 + 3)) * 10 - 10));
  cVar9 = *(char *)(lVar12 + 0x47);
  if (cVar9 == 0) {
    uVar13 = 0;
    iVar17 = (int)*(char *)(lVar12 + 0x4b);
    if (iVar17 == 0) goto LAB_0013e0e8;
  }
  else {
    uVar13 = (uint)(ushort)(CONCAT11(pbVar2[8],pbVar2[9]) >> (ulong)(0x10U - (int)cVar9 & 0x1f));
    iVar17 = (int)*(char *)(lVar12 + 0x4b);
    if (*(char *)(lVar12 + 0x4b) == '\0') {
LAB_0013e0e8:
      uVar16 = 0;
      goto LAB_0013e0ec;
    }
  }
  uVar16 = 0xffffU >> (ulong)(0x10U - iVar17 & 0x1f) &
           (uint)(ushort)(CONCAT11(pbVar2[8],pbVar2[9]) >> (ulong)((0x10 - cVar9) - iVar17 & 0x1f));
LAB_0013e0ec:
  bVar7 = *(byte *)(lVar12 + 0x46);
  lVar1 = lVar12 + ((ulong)*(byte *)(lVar12 + 0x40) << 0x18 |
                    (ulong)*(byte *)(lVar12 + 0x41) << 0x10 | (ulong)*(byte *)(lVar12 + 0x42) << 8 |
                   (ulong)*(byte *)(lVar12 + 0x43));
  pbVar14 = (byte *)(lVar1 + (ulong)uVar13 * (ulong)(uint)bVar7);
  bVar8 = *pbVar14;
  uVar15 = (ushort)bVar8;
  if (bVar7 == 2) {
    uVar15 = CONCAT11(bVar8,pbVar14[1]);
  }
  pbVar14 = (byte *)(lVar1 + (ulong)(uVar16 * *(byte *)(lVar12 + 0x4a) +
                                    ((int)(short)((ushort)*(byte *)(lVar12 + 0x44) << 8) |
                                    (uint)*(byte *)(lVar12 + 0x45)) * (uint)bVar7));
  bVar7 = *pbVar14;
  uVar11 = (ushort)bVar7;
  if (*(byte *)(lVar12 + 0x4a) == 2) {
    uVar11 = CONCAT11(bVar7,pbVar14[1]);
  }
  uVar10 = *pbVar2 >> 1 & 0x3f;
  uVar3 = uVar10;
  if ((pbVar2[4] >> 1 & 0x3f) != 0) {
    uVar3 = pbVar2[4] >> 1 & 0x3f;
  }
  *(ushort *)(param_2 + 0x70) = uVar10 | uVar15 << 7;
  *(undefined1 *)(param_2 + 0x75) = 0;
  *(ushort *)(param_2 + 0x72) = uVar3 | uVar11 << 7;
  *(undefined2 *)(param_2 + 8) = *param_1;
  uVar4 = *(undefined8 *)(param_1 + 4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_2 + 0x28) = uVar6;
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(param_2 + 0x48) = uVar6;
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_2 + 0x68) = uVar6;
  *(undefined8 *)(param_2 + 0x50) = uVar4;
  *(undefined8 *)(param_2 + 0x58) = uVar5;
  uVar13 = (*(uint *)(*(long *)(param_1 + 4) + 4) & 0xff00ff00) >> 8 |
           (*(uint *)(*(long *)(param_1 + 4) + 4) & 0xff00ff) << 8;
  if ((uVar13 >> 0x10 | uVar13 << 0x10) == 0x20000) {
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) & 0xbf;
    *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) & 0x81;
    *(undefined1 *)(param_2 + 0x66) = 0x10;
  }
  *(undefined1 *)(param_2 + 0x74) = 0;
  return 1;
}

