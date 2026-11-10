
ulong FUN_00114b00(long param_1,undefined2 *param_2,uint param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((*(byte *)(param_1 + 0x70) & 0x7f) == 0) {
    return 0x9b12;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  lVar13 = lVar10 + ((ulong)*(byte *)(lVar10 + 0x24) << 0x18 |
                     (ulong)*(byte *)(lVar10 + 0x25) << 0x10 | (ulong)*(byte *)(lVar10 + 0x26) << 8
                    | (ulong)*(byte *)(lVar10 + 0x27)) + (ulong)*(uint *)(param_1 + 0x40);
  uVar14 = (ulong)*(byte *)(lVar10 + 0x2c) << 0x18 | (ulong)*(byte *)(lVar10 + 0x2d) << 0x10 |
           (ulong)*(byte *)(lVar10 + 0x2e) << 8 | (ulong)*(byte *)(lVar10 + 0x2f);
  bVar3 = *(byte *)(lVar13 + 9);
  uVar15 = (ulong)*(byte *)(lVar13 + 7) << 8 | ((ulong)*(byte *)(lVar13 + 6) & 0xf) << 0x10 |
           (ulong)*(byte *)(lVar13 + 8);
  if (CONCAT11(*(undefined1 *)(lVar10 + 0x20),*(undefined1 *)(lVar10 + 0x21)) == 0) {
    if (((ulong)bVar3 & 0xfe) + 2 <= (ulong)(ushort)param_3) {
      uVar8 = (uint)(bVar3 >> 1);
      if (uVar8 != 0) {
        puVar11 = (undefined1 *)(lVar10 + uVar14 + uVar15);
        if (uVar8 != 1) {
          iVar12 = (bVar3 >> 1 & 1) - uVar8;
          do {
            *(undefined1 *)param_2 = *puVar11;
            *(undefined1 *)((long)param_2 + 1) = puVar11[1];
            *(undefined1 *)(param_2 + 1) = puVar11[2];
            *(undefined1 *)((long)param_2 + 3) = puVar11[3];
            param_2 = param_2 + 2;
            puVar11 = puVar11 + 4;
            iVar12 = iVar12 + 2;
          } while (iVar12 != 0);
        }
        if ((bVar3 >> 1 & 1) != 0) {
          *(undefined1 *)param_2 = *puVar11;
          *(undefined1 *)((long)param_2 + 1) = puVar11[1];
          param_2 = param_2 + 1;
        }
      }
      *param_2 = 0;
      return (ulong)uVar8;
    }
  }
  else {
    if (CONCAT11(*(undefined1 *)(lVar10 + 0x22),*(undefined1 *)(lVar10 + 0x23)) == 2) {
      if (bVar3 == 0) {
        uVar9 = 0;
      }
      else {
        bVar4 = *(byte *)(lVar10 + 0x1c);
        bVar5 = *(byte *)(lVar10 + 0x1d);
        bVar6 = *(byte *)(lVar10 + 0x1e);
        bVar7 = *(byte *)(lVar10 + 0x1f);
        lVar13 = 0;
        uVar9 = 0;
        do {
          if (((ulong)param_3 & 0xffff) < lVar13 + 4U) {
            uVar9 = (ulong)(param_3 >> 1 & 0x7fff);
            goto LAB_00114cc4;
          }
          pbVar1 = (byte *)(lVar10 + uVar14 + uVar15 + uVar9);
          uVar9 = uVar9 + 1;
          puVar11 = (undefined1 *)
                    (lVar10 + ((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 |
                              (ulong)bVar7) + ((ulong)((uint)*pbVar1 * 2 + 0xfffe) & 0xfffe));
          puVar2 = (undefined1 *)((long)param_2 + lVar13);
          lVar13 = lVar13 + 2;
          *puVar2 = *puVar11;
          puVar2[1] = puVar11[1];
        } while (uVar9 < bVar3);
        param_2 = (undefined2 *)((long)param_2 + lVar13);
      }
      *param_2 = 0;
    }
    else {
      uVar9 = 0;
    }
LAB_00114cc4:
    if ((uVar9 & 0xffff) * 2 + 2 <= (ulong)(ushort)param_3) {
      return uVar9;
    }
  }
  return 0x9412;
}

