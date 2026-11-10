
uint FUN_001392e0(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  undefined2 *puVar17;
  ushort uVar18;
  byte *pbVar19;
  undefined2 local_d0 [56];
  
  bVar1 = *(byte *)(param_1 + 0x67) >> 4;
  uVar9 = 0x9b81;
  if (6 < bVar1) {
    return 0x9b81;
  }
  lVar11 = *(long *)(param_1 + 0x10);
  uVar8 = (*(uint *)(lVar11 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar11 + 8) & 0xff00ff) << 8;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  switch(bVar1) {
  default:
    iVar14 = 6;
    if (uVar8 != 0x50001) {
      iVar14 = 10;
    }
    pbVar15 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x20) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x21) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x22) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x23)) +
                      (ulong)(uint)((*(int *)(param_1 + 0x40) + -1) * iVar14));
    if (uVar8 == 0x50001) {
      bVar1 = *pbVar15;
      if ((bVar1 & 0x7f) != 0) {
        uVar2 = *(undefined1 *)(lVar11 + 0x76);
        uVar3 = *(undefined1 *)(lVar11 + 0x77);
        bVar4 = *(byte *)(lVar11 + 0x70);
        bVar5 = *(byte *)(lVar11 + 0x71);
        bVar6 = *(byte *)(lVar11 + 0x72);
        bVar7 = *(byte *)(lVar11 + 0x73);
        uVar18 = 0;
        puVar17 = local_d0;
        pbVar19 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x24) << 0x18 |
                                     (ulong)*(byte *)(lVar11 + 0x25) << 0x10 |
                                     (ulong)*(byte *)(lVar11 + 0x26) << 8 |
                                    (ulong)*(byte *)(lVar11 + 0x27)) +
                          ((ulong)pbVar15[1] << 0x10 | (ulong)pbVar15[2] << 8 | (ulong)pbVar15[3]));
        uVar9 = 0;
        do {
          pbVar10 = (byte *)(lVar11 + ((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 |
                                       (ulong)bVar6 << 8 | (ulong)bVar7) +
                            (ulong)CONCAT11(uVar2,uVar3) * (ulong)*pbVar19);
          if ((*pbVar10 & 0xfc) == 0xd8) {
            iVar14 = 1;
            if (*(short *)(pbVar10 + 2) != 0) {
              iVar14 = 2;
            }
          }
          else {
            iVar14 = 1;
          }
          uVar16 = iVar14 * 2 + (uVar9 & 0xffff);
          if (0x6f < uVar16) goto LAB_00139984;
          FUN_00100660(puVar17,pbVar10,iVar14 * 2);
          puVar17 = puVar17 + (byte)iVar14;
          uVar18 = uVar18 + 1;
          pbVar19 = pbVar19 + 1;
          uVar9 = uVar16;
        } while (uVar18 < (bVar1 & 0x7f));
        break;
      }
LAB_001399ac:
      local_d0[0] = 0;
      goto LAB_001399c0;
    }
LAB_0013999c:
    uVar9 = pbVar15[4] >> 1 & 0x3f;
    if ((pbVar15[4] >> 1 & 0x3f) == 0) goto LAB_001399c0;
    goto LAB_001399e0;
  case 2:
    lVar12 = lVar11 + ((ulong)*(byte *)(lVar11 + 0x2c) << 0x18 |
                       (ulong)*(byte *)(lVar11 + 0x2d) << 0x10 |
                       (ulong)*(byte *)(lVar11 + 0x2e) << 8 | (ulong)*(byte *)(lVar11 + 0x2f)) +
             (ulong)(*(int *)(param_1 + 0x40) * 4 - 4);
    iVar14 = 6;
    if (uVar8 != 0x50001) {
      iVar14 = 10;
    }
    pbVar15 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x20) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x21) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x22) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x23)) +
                      (ulong)((((uint)*(byte *)(lVar12 + 1) << 0x10 |
                                (uint)*(byte *)(lVar12 + 2) << 8 | (uint)*(byte *)(lVar12 + 3)) - 1)
                             * iVar14));
    if (uVar8 != 0x50001) goto LAB_0013999c;
    bVar1 = *pbVar15;
    if ((bVar1 & 0x7f) == 0) goto LAB_001399ac;
    uVar2 = *(undefined1 *)(lVar11 + 0x76);
    uVar3 = *(undefined1 *)(lVar11 + 0x77);
    bVar4 = *(byte *)(lVar11 + 0x70);
    bVar5 = *(byte *)(lVar11 + 0x71);
    bVar6 = *(byte *)(lVar11 + 0x72);
    bVar7 = *(byte *)(lVar11 + 0x73);
    uVar18 = 0;
    puVar17 = local_d0;
    pbVar19 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x24) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x25) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x26) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x27)) +
                      ((ulong)pbVar15[1] << 0x10 | (ulong)pbVar15[2] << 8 | (ulong)pbVar15[3]));
    uVar9 = 0;
    do {
      pbVar10 = (byte *)(lVar11 + ((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 |
                                  (ulong)bVar7) + (ulong)CONCAT11(uVar2,uVar3) * (ulong)*pbVar19);
      if ((*pbVar10 & 0xfc) == 0xd8) {
        iVar14 = 1;
        if (*(short *)(pbVar10 + 2) != 0) {
          iVar14 = 2;
        }
      }
      else {
        iVar14 = 1;
      }
      uVar16 = iVar14 * 2 + (uVar9 & 0xffff);
      if (0x6f < uVar16) goto LAB_00139984;
      FUN_00100660(puVar17,pbVar10,iVar14 * 2);
      puVar17 = puVar17 + (byte)iVar14;
      uVar18 = uVar18 + 1;
      pbVar19 = pbVar19 + 1;
      uVar9 = uVar16;
    } while (uVar18 < (bVar1 & 0x7f));
    break;
  case 3:
    goto switchD_00139338_caseD_3;
  case 4:
    lVar12 = *(long *)(param_1 + 0x28);
    if (lVar12 == 0) {
      uVar13 = (ulong)*(byte *)(lVar11 + 0x38) << 0x18 | (ulong)*(byte *)(lVar11 + 0x39) << 0x10 |
               (ulong)*(byte *)(lVar11 + 0x3a) << 8;
      pbVar15 = (byte *)(lVar11 + 0x3b);
      lVar12 = lVar11;
    }
    else {
      uVar13 = (ulong)*(byte *)(lVar12 + 0x10) << 0x18 | (ulong)*(byte *)(lVar12 + 0x11) << 0x10 |
               (ulong)*(byte *)(lVar12 + 0x12) << 8;
      pbVar15 = (byte *)(lVar12 + 0x13);
    }
    lVar12 = lVar12 + (uVar13 | *pbVar15) + (ulong)(*(int *)(param_1 + 0x40) * 4 - 4);
    iVar14 = 6;
    if (uVar8 != 0x50001) {
      iVar14 = 10;
    }
    pbVar15 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x20) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x21) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x22) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x23)) +
                      (ulong)((((uint)*(byte *)(lVar12 + 1) << 0x10 |
                                (uint)*(byte *)(lVar12 + 2) << 8 | (uint)*(byte *)(lVar12 + 3)) - 1)
                             * iVar14));
    if (uVar8 != 0x50001) goto LAB_0013999c;
    bVar1 = *pbVar15;
    if ((bVar1 & 0x7f) == 0) goto LAB_001399ac;
    uVar2 = *(undefined1 *)(lVar11 + 0x76);
    uVar3 = *(undefined1 *)(lVar11 + 0x77);
    bVar4 = *(byte *)(lVar11 + 0x70);
    bVar5 = *(byte *)(lVar11 + 0x71);
    bVar6 = *(byte *)(lVar11 + 0x72);
    bVar7 = *(byte *)(lVar11 + 0x73);
    uVar18 = 0;
    puVar17 = local_d0;
    pbVar19 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x24) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x25) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x26) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x27)) +
                      ((ulong)pbVar15[1] << 0x10 | (ulong)pbVar15[2] << 8 | (ulong)pbVar15[3]));
    uVar9 = 0;
    do {
      pbVar10 = (byte *)(lVar11 + ((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 |
                                  (ulong)bVar7) + (ulong)CONCAT11(uVar2,uVar3) * (ulong)*pbVar19);
      if ((*pbVar10 & 0xfc) == 0xd8) {
        iVar14 = 1;
        if (*(short *)(pbVar10 + 2) != 0) {
          iVar14 = 2;
        }
      }
      else {
        iVar14 = 1;
      }
      uVar16 = iVar14 * 2 + (uVar9 & 0xffff);
      if (0x6f < uVar16) goto LAB_00139984;
      FUN_00100660(puVar17,pbVar10,iVar14 * 2);
      puVar17 = puVar17 + (byte)iVar14;
      uVar18 = uVar18 + 1;
      pbVar19 = pbVar19 + 1;
      uVar9 = uVar16;
    } while (uVar18 < (bVar1 & 0x7f));
    break;
  case 5:
  case 6:
    lVar12 = *(long *)(param_1 + 0x20);
    if (lVar12 == 0) {
      return 0;
    }
    lVar12 = lVar12 + ((ulong)*(byte *)(lVar12 + 0x10) << 0x18 |
                       (ulong)*(byte *)(lVar12 + 0x11) << 0x10 |
                       (ulong)*(byte *)(lVar12 + 0x12) << 8 | (ulong)*(byte *)(lVar12 + 0x13)) +
             (ulong)(*(int *)(param_1 + 0x40) * 4 - 4);
    iVar14 = 6;
    if (uVar8 != 0x50001) {
      iVar14 = 10;
    }
    pbVar15 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x20) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x21) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x22) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x23)) +
                      (ulong)((((uint)*(byte *)(lVar12 + 1) << 0x10 |
                                (uint)*(byte *)(lVar12 + 2) << 8 | (uint)*(byte *)(lVar12 + 3)) - 1)
                             * iVar14));
    if (uVar8 != 0x50001) goto LAB_0013999c;
    bVar1 = *pbVar15;
    if ((bVar1 & 0x7f) == 0) goto LAB_001399ac;
    uVar2 = *(undefined1 *)(lVar11 + 0x76);
    uVar3 = *(undefined1 *)(lVar11 + 0x77);
    bVar4 = *(byte *)(lVar11 + 0x70);
    bVar5 = *(byte *)(lVar11 + 0x71);
    bVar6 = *(byte *)(lVar11 + 0x72);
    bVar7 = *(byte *)(lVar11 + 0x73);
    uVar18 = 0;
    puVar17 = local_d0;
    pbVar19 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x24) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x25) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x26) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x27)) +
                      ((ulong)pbVar15[1] << 0x10 | (ulong)pbVar15[2] << 8 | (ulong)pbVar15[3]));
    uVar9 = 0;
    do {
      pbVar10 = (byte *)(lVar11 + ((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 |
                                  (ulong)bVar7) + (ulong)CONCAT11(uVar2,uVar3) * (ulong)*pbVar19);
      if ((*pbVar10 & 0xfc) == 0xd8) {
        iVar14 = 1;
        if (*(short *)(pbVar10 + 2) != 0) {
          iVar14 = 2;
        }
      }
      else {
        iVar14 = 1;
      }
      uVar16 = iVar14 * 2 + (uVar9 & 0xffff);
      if (0x6f < uVar16) goto LAB_00139984;
      FUN_00100660(puVar17,pbVar10,iVar14 * 2);
      puVar17 = puVar17 + (byte)iVar14;
      uVar18 = uVar18 + 1;
      pbVar19 = pbVar19 + 1;
      uVar9 = uVar16;
    } while (uVar18 < (bVar1 & 0x7f));
  }
  uVar9 = uVar16;
LAB_00139984:
  *puVar17 = 0;
  uVar9 = uVar9 >> 1 & 0x7fff;
  if (uVar9 == 0) {
LAB_001399c0:
    uVar9 = (*pbVar15 & 0x7f) >> (uVar8 != 0x50001) & 0xff;
  }
LAB_001399e0:
  if ((param_3 & 0xffff) < (uVar9 * 2 + 2 & 0xfffe)) {
    uVar9 = 0x9481;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x10);
    uVar9 = FUN_00139a50(lVar11,pbVar15,
                         lVar11 + ((ulong)*(byte *)(lVar11 + 0x24) << 0x18 |
                                   (ulong)*(byte *)(lVar11 + 0x25) << 0x10 |
                                   (ulong)*(byte *)(lVar11 + 0x26) << 8 |
                                  (ulong)*(byte *)(lVar11 + 0x27)),param_2);
    uVar9 = uVar9 & 0xff;
  }
switchD_00139338_caseD_3:
  return uVar9;
}

