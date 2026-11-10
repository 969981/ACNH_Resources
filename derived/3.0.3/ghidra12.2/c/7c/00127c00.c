
ulong FUN_00127c00(long param_1,byte *param_2,int param_3,byte *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  byte *pbVar18;
  byte local_d0 [112];
  byte *local_58;
  
  iVar14 = *(int *)(param_1 + 0x70);
  if (iVar14 == 0x40050001) {
    bVar6 = *param_2 & 0x7f;
    uVar7 = *param_2 & 0x7f;
  }
  else {
    bVar6 = param_2[4] >> 1 & 0x3f;
    uVar7 = param_2[4] >> 1 & 0x3f;
  }
  if (bVar6 == 0) {
    bVar6 = param_2[4];
    bVar8 = *param_2 >> 1;
    uVar15 = (ulong)bVar8 & 0x3f;
    iVar14 = (int)uVar15;
    iVar10 = FUN_0010dbc0(param_1,10,
                          ((uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 | (uint)param_2[3]) +
                          param_3,iVar14 << 1,&local_58);
    if ((char)bVar6 < '\0') {
      if (-1 < iVar10) {
        if (iVar14 != 0) {
          if (iVar14 == 1) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            pbVar13 = (byte *)((ulong)local_d0 | 1);
            do {
              pbVar13[-1] = *local_58;
              *pbVar13 = local_58[1];
              pbVar13[1] = local_58[2];
              pbVar18 = local_58 + 3;
              lVar17 = lVar17 + 2;
              local_58 = local_58 + 4;
              pbVar13[2] = *pbVar18;
              pbVar13 = pbVar13 + 4;
            } while (uVar15 - ((ulong)bVar8 & 1) != lVar17);
          }
          if ((bVar8 & 1) != 0) {
            local_d0[lVar17 * 2] = *local_58;
            pbVar13 = local_58 + 1;
            local_58 = local_58 + 2;
            local_d0[lVar17 * 2 + 1] = *pbVar13;
          }
        }
        (local_d0 + uVar15 * 2)[0] = 0;
        (local_d0 + uVar15 * 2)[1] = 0;
        FUN_00114550(local_d0,param_4,uVar15);
        (param_4 + uVar15 * 2)[0] = 0;
        (param_4 + uVar15 * 2)[1] = 0;
        return uVar15;
      }
    }
    else if (-1 < iVar10) {
      if (iVar14 != 0) {
        iVar14 = -iVar14;
        do {
          *param_4 = *local_58;
          param_4[1] = local_58[1];
          local_58 = local_58 + 2;
          param_4 = param_4 + 2;
          bVar9 = iVar14 != -1;
          iVar14 = iVar14 + 1;
        } while (bVar9);
      }
      param_4[0] = 0;
      param_4[1] = 0;
      return uVar15;
    }
  }
  else {
    bVar9 = iVar14 == 0x40050001;
    lVar17 = 5;
    if (bVar9) {
      lVar17 = 1;
    }
    lVar2 = 6;
    if (bVar9) {
      lVar2 = 2;
    }
    lVar3 = 7;
    if (bVar9) {
      lVar3 = 3;
    }
    iVar10 = FUN_0010dbc0(param_1,10,
                          ((uint)param_2[lVar17] << 0x10 | (uint)param_2[lVar2] << 8 |
                          (uint)param_2[lVar3]) + param_3,uVar7 << 1,&local_58);
    if (-1 < iVar10) {
      if (iVar14 != 0x40050001) {
        iVar14 = -uVar7;
        do {
          pbVar13 = param_4;
          *pbVar13 = *local_58;
          pbVar13[1] = local_58[1];
          bVar9 = iVar14 != -1;
          iVar14 = iVar14 + 1;
          local_58 = local_58 + 2;
          param_4 = pbVar13 + 2;
        } while (bVar9);
        pbVar13[2] = 0;
        pbVar13[3] = 0;
        return (ulong)uVar7;
      }
      uVar4 = *(undefined1 *)(*(long *)(param_1 + 8) + 0x76);
      uVar5 = *(undefined1 *)(*(long *)(param_1 + 8) + 0x77);
      lVar17 = *(long *)(param_1 + 0x48);
      uVar16 = 0;
      pbVar13 = param_4;
      pbVar18 = local_58;
      uVar12 = 0;
      do {
        pbVar11 = (byte *)(lVar17 + (ulong)CONCAT11(uVar4,uVar5) * (ulong)*pbVar18);
        if ((*pbVar11 & 0xfc) == 0xd8) {
          iVar14 = 1;
          if (*(short *)(pbVar11 + 2) != 0) {
            iVar14 = 2;
          }
        }
        else {
          iVar14 = 1;
        }
        uVar1 = iVar14 * 2 + (uVar12 & 0xffff);
        if (0x6f < uVar1) break;
        FUN_00100660(pbVar13,pbVar11,iVar14 * 2);
        pbVar13 = pbVar13 + (ulong)(byte)iVar14 * 2;
        uVar16 = uVar16 + 1;
        pbVar18 = pbVar18 + 1;
        uVar12 = uVar1;
      } while ((uVar16 & 0xffff) < uVar7);
      pbVar13[0] = 0;
      pbVar13[1] = 0;
      (param_4 + (ulong)(uVar12 >> 1 & 0xff) * 2)[0] = 0;
      (param_4 + (ulong)(uVar12 >> 1 & 0xff) * 2)[1] = 0;
      return (ulong)(uVar12 >> 1 & 0x7fff);
    }
  }
  return 0xff;
}

