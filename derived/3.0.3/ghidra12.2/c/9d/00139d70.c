
uint FUN_00139d70(long param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined2 *puVar17;
  uint uVar18;
  
  bVar4 = *(byte *)(param_1 + 0x67) >> 4;
  if (6 < bVar4) {
    return 0x9b82;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  uVar10 = (*(uint *)(lVar9 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar9 + 8) & 0xff00ff) << 8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  switch(bVar4) {
  default:
    if ((*(byte *)(param_1 + 0x70) & 0x7f) == 0) {
      return 0x9b82;
    }
    uVar16 = (ulong)*(byte *)(lVar9 + 0x20) << 0x18 | (ulong)*(byte *)(lVar9 + 0x21) << 0x10 |
             (ulong)*(byte *)(lVar9 + 0x22) << 8 | (ulong)*(byte *)(lVar9 + 0x23);
    iVar13 = 6;
    if (uVar10 != 0x50001) {
      iVar13 = 10;
    }
    uVar18 = (*(int *)(param_1 + 0x40) + -1) * iVar13;
    goto LAB_00139fd4;
  case 2:
    uVar16 = (ulong)*(byte *)(lVar9 + 0x20) << 0x18 | (ulong)*(byte *)(lVar9 + 0x21) << 0x10 |
             (ulong)*(byte *)(lVar9 + 0x22) << 8 | (ulong)*(byte *)(lVar9 + 0x23);
    lVar11 = lVar9 + ((ulong)*(byte *)(lVar9 + 0x2c) << 0x18 |
                      (ulong)*(byte *)(lVar9 + 0x2d) << 0x10 | (ulong)*(byte *)(lVar9 + 0x2e) << 8 |
                     (ulong)*(byte *)(lVar9 + 0x2f));
    break;
  case 3:
  case 4:
    lVar11 = *(long *)(param_1 + 0x28);
    uVar16 = (ulong)*(byte *)(lVar9 + 0x20) << 0x18 | (ulong)*(byte *)(lVar9 + 0x21) << 0x10 |
             (ulong)*(byte *)(lVar9 + 0x22) << 8 | (ulong)*(byte *)(lVar9 + 0x23);
    if (lVar11 == 0) {
      uVar14 = (ulong)*(byte *)(lVar9 + 0x38) << 0x18 | (ulong)*(byte *)(lVar9 + 0x39) << 0x10 |
               (ulong)*(byte *)(lVar9 + 0x3a) << 8;
      pbVar12 = (byte *)(lVar9 + 0x3b);
      lVar11 = lVar9;
    }
    else {
      uVar14 = (ulong)*(byte *)(lVar11 + 0x10) << 0x18 | (ulong)*(byte *)(lVar11 + 0x11) << 0x10 |
               (ulong)*(byte *)(lVar11 + 0x12) << 8;
      pbVar12 = (byte *)(lVar11 + 0x13);
    }
    lVar11 = lVar11 + (uVar14 | *pbVar12);
    break;
  case 5:
  case 6:
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return 0;
    }
    lVar11 = lVar11 + ((ulong)*(byte *)(lVar11 + 0x10) << 0x18 |
                       (ulong)*(byte *)(lVar11 + 0x11) << 0x10 |
                       (ulong)*(byte *)(lVar11 + 0x12) << 8 | (ulong)*(byte *)(lVar11 + 0x13)) +
             (ulong)(*(int *)(param_1 + 0x40) * 4 - 4);
    iVar13 = 6;
    if (uVar10 != 0x50001) {
      iVar13 = 10;
    }
    pbVar12 = (byte *)(lVar9 + ((ulong)*(byte *)(lVar9 + 0x20) << 0x18 |
                                (ulong)*(byte *)(lVar9 + 0x21) << 0x10 |
                                (ulong)*(byte *)(lVar9 + 0x22) << 8 | (ulong)*(byte *)(lVar9 + 0x23)
                               ) +
                      (ulong)((((uint)*(byte *)(lVar11 + 1) << 0x10 |
                                (uint)*(byte *)(lVar11 + 2) << 8 | (uint)*(byte *)(lVar11 + 3)) - 1)
                             * iVar13));
    goto LAB_00139fd8;
  }
  lVar11 = lVar11 + (ulong)(*(int *)(param_1 + 0x40) * 4 - 4);
  iVar13 = 6;
  if (uVar10 != 0x50001) {
    iVar13 = 10;
  }
  uVar18 = (((uint)*(byte *)(lVar11 + 1) << 0x10 | (uint)*(byte *)(lVar11 + 2) << 8 |
            (uint)*(byte *)(lVar11 + 3)) - 1) * iVar13;
LAB_00139fd4:
  pbVar12 = (byte *)(lVar9 + uVar16 + (ulong)uVar18);
LAB_00139fd8:
  uVar16 = ((ulong)*pbVar12 & 0x7f) >> (uVar10 != 0x50001);
  uVar18 = (uint)uVar16 << 1;
  if ((param_3 & 0xffff) < (uVar18 & 0xfe) + 2) {
    uVar15 = param_3 >> 1 & 0x7fff;
  }
  else {
    uVar15 = (uint)uVar16 & 0xff;
    pbVar12 = (byte *)(lVar9 + ((ulong)*(byte *)(lVar9 + 0x24) << 0x18 |
                                (ulong)*(byte *)(lVar9 + 0x25) << 0x10 |
                                (ulong)*(byte *)(lVar9 + 0x26) << 8 | (ulong)*(byte *)(lVar9 + 0x27)
                               ) +
                      ((ulong)pbVar12[1] << 0x10 | (ulong)pbVar12[2] << 8 | (ulong)pbVar12[3]));
    if (uVar10 == 0x50001) {
      uVar10 = 0;
      puVar17 = param_2;
      if ((uVar16 & 0xff) != 0) {
        uVar2 = *(undefined1 *)(lVar9 + 0x76);
        uVar3 = *(undefined1 *)(lVar9 + 0x77);
        bVar4 = *(byte *)(lVar9 + 0x70);
        bVar5 = *(byte *)(lVar9 + 0x71);
        bVar6 = *(byte *)(lVar9 + 0x72);
        bVar7 = *(byte *)(lVar9 + 0x73);
        uVar18 = 0;
        do {
          pbVar8 = (byte *)(lVar9 + ((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8
                                    | (ulong)bVar7) + (ulong)CONCAT11(uVar2,uVar3) * (ulong)*pbVar12
                           );
          if ((*pbVar8 & 0xfc) == 0xd8) {
            iVar13 = 1;
            if (*(short *)(pbVar8 + 2) != 0) {
              iVar13 = 2;
            }
          }
          else {
            iVar13 = 1;
          }
          uVar1 = iVar13 * 2 + (uVar10 & 0xffff);
          if ((param_3 & 0xffff) <= uVar1) break;
          FUN_00100660(puVar17,pbVar8,iVar13 * 2);
          puVar17 = puVar17 + (byte)iVar13;
          uVar18 = uVar18 + 1;
          pbVar12 = pbVar12 + 1;
          uVar10 = uVar1;
        } while ((uVar18 & 0xffff) < uVar15);
      }
      *puVar17 = 0;
      uVar15 = uVar10 >> 1 & 0x7fff;
      uVar16 = (ulong)uVar15;
    }
    else {
      FUN_00100660(param_2,pbVar12,uVar18 & 0xff);
    }
    param_2[uVar16] = 0;
  }
  if ((param_3 & 0xffff) < (uVar15 * 2 + 2 & 0xfffe)) {
    uVar15 = 0x9482;
  }
  else {
    param_2[uVar15] = 0;
  }
  return uVar15;
}

