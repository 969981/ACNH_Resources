
int FUN_00127850(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined2 *puVar16;
  long lVar17;
  uint uVar18;
  byte *pbVar19;
  byte *local_e0;
  undefined2 local_d8 [56];
  byte *local_68;
  
  lVar10 = *(long *)(param_1 + 0x10);
  iVar2 = *(int *)(lVar10 + 0x70);
  bVar3 = *(byte *)(param_1 + 0x67) >> 4;
  iVar9 = 0x9ba1;
  if (6 < bVar3) {
    return 0x9ba1;
  }
  lVar17 = *(long *)(lVar10 + 8);
  switch(bVar3) {
  default:
    uVar12 = *(uint *)(param_1 + 0x40);
    break;
  case 2:
    lVar14 = *(long *)(lVar10 + 0x50);
LAB_00127998:
    lVar14 = lVar14 + (ulong)(*(int *)(param_1 + 0x40) * 4 - 4);
    bVar3 = *(byte *)(lVar14 + 1);
    bVar4 = *(byte *)(lVar14 + 2);
    bVar5 = *(byte *)(lVar14 + 3);
    goto LAB_001279b8;
  case 3:
    goto switchD_001278bc_caseD_3;
  case 4:
    lVar14 = *(long *)(param_1 + 0x28);
    if (lVar14 != 0) {
      lVar14 = lVar14 + ((ulong)*(byte *)(lVar14 + 0x10) << 0x18 |
                         (ulong)*(byte *)(lVar14 + 0x11) << 0x10 |
                         (ulong)*(byte *)(lVar14 + 0x12) << 8 | (ulong)*(byte *)(lVar14 + 0x13));
      goto LAB_00127998;
    }
    uVar12 = (*(uint *)(lVar17 + 0x38) & 0xff00ff00) >> 8 |
             (*(uint *)(lVar17 + 0x38) & 0xff00ff) << 8;
    iVar9 = FUN_0010dbc0(lVar10,3,(uVar12 >> 0x10 | uVar12 << 0x10) + *(int *)(param_1 + 0x40) * 4 +
                                  -4,4,&local_e0);
    if (iVar9 < 0) {
      return 0xbda1;
    }
    bVar3 = local_e0[1];
    bVar4 = local_e0[2];
    bVar5 = local_e0[3];
    lVar10 = *(long *)(param_1 + 0x10);
LAB_001279b8:
    uVar12 = (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5;
    break;
  case 5:
  case 6:
    lVar14 = *(long *)(param_1 + 0x20);
    if (lVar14 == 0) {
      return 0;
    }
    lVar14 = lVar14 + ((ulong)*(byte *)(lVar14 + 0x10) << 0x18 |
                       (ulong)*(byte *)(lVar14 + 0x11) << 0x10 |
                       (ulong)*(byte *)(lVar14 + 0x12) << 8 | (ulong)*(byte *)(lVar14 + 0x13)) +
             (ulong)(*(int *)(param_1 + 0x40) * 4 - 4);
    uVar12 = (uint)*(byte *)(lVar14 + 1) << 0x10 | (uint)*(byte *)(lVar14 + 2) << 8 |
             (uint)*(byte *)(lVar14 + 3);
    iVar9 = 6;
    if (iVar2 != 0x40050001) {
      iVar9 = 10;
    }
    local_e0 = (byte *)(lVar10 + ((ulong)*(byte *)(lVar10 + 0x20) << 0x18 |
                                  (ulong)*(byte *)(lVar10 + 0x21) << 0x10 |
                                  (ulong)*(byte *)(lVar10 + 0x22) << 8 |
                                 (ulong)*(byte *)(lVar10 + 0x23)) + (ulong)((uVar12 - 1) * iVar9));
  }
  iVar9 = 6;
  if (iVar2 != 0x40050001) {
    iVar9 = 10;
  }
  uVar18 = (*(uint *)(lVar17 + 0x20) & 0xff00ff00) >> 8 | (*(uint *)(lVar17 + 0x20) & 0xff00ff) << 8
  ;
  uVar13 = (*(uint *)(lVar10 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar10 + 8) & 0xff00ff) << 8;
  uVar15 = 6;
  if ((uVar13 >> 0x10 | uVar13 << 0x10) != 0x40050001) {
    uVar15 = 10;
  }
  iVar9 = FUN_0010dbc0(lVar10,5,(uVar18 >> 0x10 | uVar18 << 0x10) + (uVar12 - 1) * iVar9,uVar15,
                       &local_e0);
  pbVar19 = local_e0;
  if (iVar9 < 0) {
    return 0xbda1;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar10 + 0x70) == 0x40050001) {
    uVar12 = *(uint *)(*(long *)(lVar10 + 8) + 0x24);
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    iVar9 = FUN_0010dbc0(lVar10,10,
                         ((uint)local_e0[1] << 0x10 | (uint)local_e0[2] << 8 | (uint)local_e0[3]) +
                         (uVar12 >> 0x10 | uVar12 << 0x10),*local_e0 & 0x7f,&local_68);
    uVar12 = *pbVar19 & 0x7f;
    if (iVar9 < 0) goto joined_r0x00127b1c;
    if ((*pbVar19 & 0x7f) != 0) {
      uVar6 = *(undefined1 *)(*(long *)(lVar10 + 8) + 0x76);
      uVar7 = *(undefined1 *)(*(long *)(lVar10 + 8) + 0x77);
      lVar10 = *(long *)(lVar10 + 0x48);
      uVar18 = 0;
      puVar16 = local_d8;
      pbVar19 = local_68;
      uVar13 = 0;
      do {
        pbVar11 = (byte *)(lVar10 + (ulong)CONCAT11(uVar6,uVar7) * (ulong)*pbVar19);
        if ((*pbVar11 & 0xfc) == 0xd8) {
          iVar9 = 1;
          if (*(short *)(pbVar11 + 2) != 0) {
            iVar9 = 2;
          }
        }
        else {
          iVar9 = 1;
        }
        uVar1 = iVar9 * 2 + (uVar13 & 0xffff);
        if (0x6f < uVar1) break;
        FUN_00100660(puVar16,pbVar11,iVar9 * 2);
        puVar16 = puVar16 + (byte)iVar9;
        uVar18 = uVar18 + 1;
        pbVar19 = pbVar19 + 1;
        uVar13 = uVar1;
      } while ((uVar18 & 0xffff) < uVar12);
      *puVar16 = 0;
      uVar12 = uVar13 >> 1 & 0x7fff;
      goto joined_r0x00127b1c;
    }
    local_d8[0] = 0;
LAB_00127b20:
    uVar12 = (*local_e0 & 0x7f) >> (ulong)(iVar2 != 0x40050001) & 0xff;
  }
  else {
    uVar12 = local_e0[4] >> 1 & 0x3f;
joined_r0x00127b1c:
    if (uVar12 == 0) goto LAB_00127b20;
  }
  if ((param_3 & 0xffff) < (uVar12 * 2 + 2 & 0xfffe)) {
    iVar9 = 0x94a1;
  }
  else {
    uVar12 = (*(uint *)(lVar17 + 0x24) & 0xff00ff00) >> 8 |
             (*(uint *)(lVar17 + 0x24) & 0xff00ff) << 8;
    cVar8 = FUN_00127c00(*(undefined8 *)(param_1 + 0x10),local_e0,uVar12 >> 0x10 | uVar12 << 0x10,
                         param_2);
    iVar9 = -0x425f;
    if (-1 < cVar8) {
      iVar9 = (int)cVar8;
    }
  }
switchD_001278bc_caseD_3:
  return iVar9;
}

