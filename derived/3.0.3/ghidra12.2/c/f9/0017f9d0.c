
void FUN_0017f9d0(long *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  ushort uVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  undefined4 uVar22;
  char *pcVar23;
  byte *pbVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  byte *pbVar28;
  int iVar29;
  int iVar30;
  byte *pbVar31;
  byte *pbVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  byte *pbVar36;
  
  lVar17 = param_1[7];
  pbVar31 = (byte *)param_1[3];
  iVar13 = (int)param_1[4];
  iVar29 = (int)pbVar31;
  iVar3 = iVar13 + iVar29;
  uVar7 = *(uint *)(lVar17 + 0x78);
  uVar9 = *(uint *)(lVar17 + 0x7c);
  uVar14 = *(uint *)(lVar17 + 0x44);
  iVar4 = iVar3 + ~param_2;
  pbVar5 = pbVar31 + (iVar13 - 0x101);
  pbVar18 = (byte *)*param_1;
  pbVar6 = pbVar18 + ((int)param_1[1] - 5);
  uVar33 = (ulong)*(uint *)(lVar17 + 0x58);
  iVar8 = *(int *)(lVar17 + 0x3c);
  uVar10 = *(uint *)(lVar17 + 0x40);
  pbVar11 = *(byte **)(lVar17 + 0x48);
  uVar21 = *(ulong *)(lVar17 + 0x50);
  lVar20 = *(long *)(lVar17 + 0x68);
  lVar12 = *(long *)(lVar17 + 0x70);
  pcVar23 = "invalid distance too far back";
LAB_0017fa8c:
  uVar26 = (uint)uVar33;
  if (uVar26 < 0xf) {
    bVar15 = *pbVar18;
    uVar35 = uVar26 + 8;
    uVar26 = uVar26 + 0x10;
    pbVar19 = pbVar18 + 1;
    pbVar18 = pbVar18 + 2;
    uVar21 = ((ulong)bVar15 << (uVar33 & 0x3f)) + uVar21 +
             ((ulong)*pbVar19 << ((ulong)uVar35 & 0x3f));
  }
  pbVar19 = (byte *)(lVar20 + (uVar21 & (uint)~(-1 << (ulong)(uVar7 & 0x1f))) * 4);
  uVar21 = uVar21 >> ((ulong)pbVar19[1] & 0x3f);
  uVar33 = (ulong)(uVar26 - pbVar19[1]);
  uVar26 = (uint)*pbVar19;
  if (*pbVar19 != 0) {
    do {
      uVar35 = (uint)uVar33;
      if ((uVar26 >> 4 & 1) != 0) {
        uVar34 = (uint)*(ushort *)(pbVar19 + 2);
        uVar26 = uVar26 & 0xf;
        if (uVar26 != 0) {
          pbVar19 = pbVar18;
          if (uVar35 < uVar26) {
            pbVar19 = pbVar18 + 1;
            uVar35 = uVar35 + 8;
            uVar21 = ((ulong)*pbVar18 << (uVar33 & 0x3f)) + uVar21;
          }
          uVar33 = (ulong)(uVar35 - uVar26);
          uVar35 = (uint)uVar21;
          uVar21 = uVar21 >> uVar26;
          uVar34 = (uVar35 & (-1 << (ulong)uVar26 ^ 0xffffffffU)) + uVar34;
          pbVar18 = pbVar19;
        }
        uVar26 = (uint)uVar33;
        if (uVar26 < 0xf) {
          bVar15 = *pbVar18;
          uVar35 = uVar26 + 8;
          uVar26 = uVar26 + 0x10;
          pbVar19 = pbVar18 + 1;
          pbVar18 = pbVar18 + 2;
          uVar21 = ((ulong)bVar15 << (uVar33 & 0x3f)) + uVar21 +
                   ((ulong)*pbVar19 << ((ulong)uVar35 & 0x3f));
        }
        pbVar19 = (byte *)(lVar12 + (uVar21 & (uint)~(-1 << (ulong)(uVar9 & 0x1f))) * 4);
        uVar21 = uVar21 >> ((ulong)pbVar19[1] & 0x3f);
        uVar26 = uVar26 - pbVar19[1];
        bVar15 = *pbVar19;
        goto joined_r0x0017fba0;
      }
      if ((uVar26 >> 6 & 1) != 0) {
        if ((uVar26 >> 5 & 1) != 0) {
          uVar22 = 0x3f3f;
          goto LAB_00180110;
        }
        pcVar23 = "invalid literal/length code";
        goto LAB_00180108;
      }
      pbVar19 = (byte *)(lVar20 + (ulong)*(ushort *)(pbVar19 + 2) * 4 +
                        (uVar21 & (uint)~(-1 << (ulong)(uVar26 & 0x1f))) * 4);
      uVar21 = uVar21 >> ((ulong)pbVar19[1] & 0x3f);
      uVar33 = (ulong)(uVar35 - pbVar19[1]);
      uVar26 = (uint)*pbVar19;
    } while (uVar26 != 0);
  }
  *pbVar31 = pbVar19[2];
  pbVar31 = pbVar31 + 1;
  goto LAB_0017fb10;
joined_r0x0017fba0:
  uVar33 = (ulong)uVar26;
  if ((bVar15 >> 4 & 1) != 0) goto LAB_0017fbd4;
  if ((bVar15 >> 6 & 1) != 0) {
    pcVar23 = "invalid distance code";
    goto LAB_00180108;
  }
  pbVar19 = (byte *)(lVar12 + (ulong)*(ushort *)(pbVar19 + 2) * 4 +
                    (uVar21 & (uint)~(-1 << (ulong)(bVar15 & 0x1f))) * 4);
  uVar21 = uVar21 >> ((ulong)pbVar19[1] & 0x3f);
  uVar26 = uVar26 - pbVar19[1];
  bVar15 = *pbVar19;
  goto joined_r0x0017fba0;
LAB_0017fbd4:
  uVar35 = bVar15 & 0xf;
  if (uVar26 < uVar35) {
    uVar2 = uVar26 + 8;
    uVar21 = ((ulong)*pbVar18 << (uVar33 & 0x3f)) + uVar21;
    if (uVar2 < uVar35) {
      uVar21 = ((ulong)pbVar18[1] << ((ulong)uVar2 & 0x3f)) + uVar21;
      pbVar18 = pbVar18 + 2;
      uVar26 = uVar26 + 0x10;
    }
    else {
      pbVar18 = pbVar18 + 1;
      uVar26 = uVar2;
    }
  }
  uVar16 = *(ushort *)(pbVar19 + 2);
  uVar33 = (ulong)(uVar26 - uVar35);
  pbVar28 = (byte *)(uVar21 & (uint)~(-1 << uVar35));
  iVar30 = (int)pbVar31;
  uVar2 = iVar30 - (iVar29 - (param_2 - iVar13));
  uVar21 = uVar21 >> uVar35;
  pbVar19 = pbVar28 + uVar16;
  uVar26 = (uint)pbVar19 - uVar2;
  if ((uint)pbVar19 < uVar2 || uVar26 == 0) {
    lVar25 = 0;
    uVar26 = uVar34;
    do {
      pbVar28 = pbVar31 + lVar25 + (1 - ((ulong)pbVar19 & 0xffffffff));
      pbVar32 = pbVar31 + lVar25;
      uVar26 = uVar26 - 3;
      lVar25 = lVar25 + 3;
      *pbVar32 = pbVar28[-1];
      pbVar32[1] = *pbVar28;
      pbVar32[2] = pbVar28[1];
    } while (2 < uVar26);
    pbVar28 = pbVar31 + lVar25;
    pbVar31 = pbVar28;
    if (uVar34 != (uint)lVar25) {
      pbVar31 = pbVar28 + 1;
      *pbVar28 = pbVar28[-((ulong)pbVar19 & 0xffffffff)];
      if (uVar34 - 1 != (uint)lVar25) {
        pbVar28[1] = (pbVar28 + -((ulong)pbVar19 & 0xffffffff))[1];
        pbVar31 = pbVar28 + 2;
      }
    }
    goto LAB_0017fb10;
  }
  if ((uVar10 < uVar26) && (*(int *)(lVar17 + 0x1be8) != 0)) {
LAB_00180108:
    param_1[6] = (long)pcVar23;
    uVar22 = 0x3f51;
LAB_00180110:
    *(undefined4 *)(lVar17 + 8) = uVar22;
LAB_00180114:
    uVar7 = (uint)uVar33 & 7;
    param_1[3] = (long)pbVar31;
    lVar20 = (long)pbVar18 - (uVar33 >> 3);
    *param_1 = lVar20;
    *(int *)(param_1 + 4) = ((int)pbVar5 - (int)pbVar31) + 0x101;
    *(int *)(param_1 + 1) = ((int)pbVar6 - (int)lVar20) + 5;
    *(ulong *)(lVar17 + 0x50) = uVar21 & (uint)~(-1 << (ulong)uVar7);
    *(uint *)(lVar17 + 0x58) = uVar7;
    return;
  }
  iVar27 = (int)pbVar28;
  pbVar32 = pbVar31;
  if (uVar14 == 0) {
    pbVar24 = (byte *)(ulong)(uVar34 - uVar26);
    pbVar36 = pbVar11 + (iVar8 - uVar26);
    if (uVar26 <= uVar34 && uVar34 - uVar26 != 0) {
      pbVar32 = pbVar11 + (iVar8 - uVar26);
      for (uVar35 = uVar26 & 7; uVar35 != 0; uVar35 = uVar35 - 1) {
        uVar26 = uVar26 - 1;
        *pbVar31 = *pbVar32;
        pbVar32 = pbVar32 + 1;
        pbVar31 = pbVar31 + 1;
      }
      pbVar36 = pbVar31;
      if (6 < (iVar4 + iVar27 + (uint)uVar16) - iVar30) {
        do {
          pbVar31 = pbVar36 + 8;
          uVar26 = uVar26 - 8;
          *pbVar36 = *pbVar32;
          pbVar36[1] = pbVar32[1];
          pbVar36[2] = pbVar32[2];
          pbVar36[3] = pbVar32[3];
          pbVar36[4] = pbVar32[4];
          pbVar36[5] = pbVar32[5];
          pbVar36[6] = pbVar32[6];
          pbVar1 = pbVar32 + 7;
          pbVar32 = pbVar32 + 8;
          pbVar36[7] = *pbVar1;
          pbVar36 = pbVar31;
        } while (uVar26 != 0);
      }
      pbVar36 = pbVar31 + -(long)pbVar19;
LAB_0017ff18:
      pbVar32 = pbVar31;
      uVar34 = (uint)pbVar24;
    }
  }
  else if (uVar14 < uVar26) {
    uVar35 = uVar26 - uVar14;
    pbVar24 = (byte *)(ulong)uVar35;
    uVar2 = uVar34 - uVar35;
    pbVar36 = pbVar11 + ((uVar14 + iVar8) - uVar26);
    if (uVar35 <= uVar34 && uVar2 != 0) {
      pbVar31 = pbVar11 + ((uVar14 + iVar8) - uVar26);
      for (uVar35 = uVar35 & 7; uVar35 != 0; uVar35 = uVar35 - 1) {
        pbVar24 = (byte *)(ulong)((int)pbVar24 - 1);
        *pbVar32 = *pbVar31;
        pbVar31 = pbVar31 + 1;
        pbVar32 = pbVar32 + 1;
      }
      pbVar36 = pbVar32;
      if (6 < (((iVar3 + ~uVar14) - param_2) + iVar27 + (uint)uVar16) - iVar30) {
        do {
          pbVar32 = pbVar36 + 8;
          uVar26 = (int)pbVar24 - 8;
          pbVar24 = (byte *)(ulong)uVar26;
          *pbVar36 = *pbVar31;
          pbVar36[1] = pbVar31[1];
          pbVar36[2] = pbVar31[2];
          pbVar36[3] = pbVar31[3];
          pbVar36[4] = pbVar31[4];
          pbVar36[5] = pbVar31[5];
          pbVar36[6] = pbVar31[6];
          pbVar1 = pbVar31 + 7;
          pbVar31 = pbVar31 + 8;
          pbVar36[7] = *pbVar1;
          pbVar36 = pbVar32;
        } while (uVar26 != 0);
      }
      pbVar36 = pbVar11;
      uVar34 = uVar2;
      if (uVar14 <= uVar2 && uVar2 - uVar14 != 0) {
        if ((uVar14 & 7) == 0) {
          pbVar24 = pbVar11;
          uVar26 = uVar14;
        }
        else {
          pbVar31 = pbVar11;
          pbVar28 = pbVar32;
          uVar26 = uVar14 & 7;
          do {
            pbVar24 = pbVar31 + 1;
            uVar26 = uVar26 - 1;
            pbVar32 = pbVar28 + 1;
            *pbVar28 = *pbVar31;
            pbVar31 = pbVar24;
            pbVar28 = pbVar32;
          } while (uVar26 != 0);
          uVar26 = uVar14 & 0xfffffff8;
        }
        pbVar28 = (byte *)(ulong)uVar26;
        pbVar31 = pbVar32;
        if (7 < uVar14) {
          do {
            pbVar32 = pbVar31 + 8;
            uVar26 = (int)pbVar28 - 8;
            pbVar28 = (byte *)(ulong)uVar26;
            *pbVar31 = *pbVar24;
            pbVar31[1] = pbVar24[1];
            pbVar31[2] = pbVar24[2];
            pbVar31[3] = pbVar24[3];
            pbVar31[4] = pbVar24[4];
            pbVar31[5] = pbVar24[5];
            pbVar31[6] = pbVar24[6];
            pbVar36 = pbVar24 + 7;
            pbVar24 = pbVar24 + 8;
            pbVar31[7] = *pbVar36;
            pbVar31 = pbVar32;
          } while (uVar26 != 0);
        }
        pbVar36 = pbVar32 + -((ulong)pbVar19 & 0xffffffff);
        uVar34 = uVar2 - uVar14;
      }
    }
  }
  else {
    pbVar24 = (byte *)(ulong)(uVar34 - uVar26);
    pbVar36 = pbVar11 + (uVar14 - uVar26);
    if (uVar26 <= uVar34 && uVar34 - uVar26 != 0) {
      pbVar32 = pbVar11 + (uVar14 - uVar26);
      for (uVar35 = uVar26 & 7; uVar35 != 0; uVar35 = uVar35 - 1) {
        uVar26 = uVar26 - 1;
        *pbVar31 = *pbVar32;
        pbVar32 = pbVar32 + 1;
        pbVar31 = pbVar31 + 1;
      }
      pbVar36 = pbVar31;
      if (6 < (iVar4 + iVar27 + (uint)uVar16) - iVar30) {
        do {
          pbVar31 = pbVar36 + 8;
          uVar26 = uVar26 - 8;
          *pbVar36 = *pbVar32;
          pbVar36[1] = pbVar32[1];
          pbVar36[2] = pbVar32[2];
          pbVar36[3] = pbVar32[3];
          pbVar36[4] = pbVar32[4];
          pbVar36[5] = pbVar32[5];
          pbVar36[6] = pbVar32[6];
          pbVar1 = pbVar32 + 7;
          pbVar32 = pbVar32 + 8;
          pbVar36[7] = *pbVar1;
          pbVar36 = pbVar31;
        } while (uVar26 != 0);
      }
      pbVar36 = pbVar31 + -((ulong)pbVar19 & 0xffffffff);
      goto LAB_0017ff18;
    }
  }
  if (2 < uVar34) {
    uVar35 = uVar34 - 3;
    uVar26 = uVar35 / 3 + 1 & 3;
    pbVar19 = pbVar32;
    pbVar31 = pbVar36;
    if (uVar26 != 0) {
      uVar34 = uVar34 + uVar26 * -3;
      do {
        pbVar31 = pbVar36 + 3;
        pbVar19 = pbVar32 + 3;
        uVar26 = uVar26 - 1;
        *pbVar32 = *pbVar36;
        pbVar32[1] = pbVar36[1];
        pbVar32[2] = pbVar36[2];
        pbVar32 = pbVar19;
        pbVar36 = pbVar31;
        pbVar24 = pbVar19;
        pbVar28 = pbVar31;
      } while (uVar26 != 0);
    }
    pbVar36 = pbVar28;
    pbVar32 = pbVar24;
    if (8 < uVar35) {
      do {
        pbVar36 = pbVar31 + 0xc;
        pbVar32 = pbVar19 + 0xc;
        uVar34 = uVar34 - 0xc;
        *pbVar19 = *pbVar31;
        pbVar19[1] = pbVar31[1];
        pbVar19[2] = pbVar31[2];
        pbVar19[3] = pbVar31[3];
        pbVar19[4] = pbVar31[4];
        pbVar19[5] = pbVar31[5];
        pbVar19[6] = pbVar31[6];
        pbVar19[7] = pbVar31[7];
        pbVar19[8] = pbVar31[8];
        pbVar19[9] = pbVar31[9];
        pbVar19[10] = pbVar31[10];
        pbVar19[0xb] = pbVar31[0xb];
        pbVar19 = pbVar32;
        pbVar31 = pbVar36;
      } while (2 < uVar34);
    }
  }
  if (uVar34 == 0) {
    pbVar31 = pbVar32;
  }
  else {
    pbVar31 = pbVar32 + 1;
    *pbVar32 = *pbVar36;
    if (uVar34 != 1) {
      pbVar31 = pbVar32 + 2;
      pbVar32[1] = pbVar36[1];
    }
  }
LAB_0017fb10:
  if ((pbVar6 <= pbVar18) || (pbVar5 <= pbVar31)) goto LAB_00180114;
  goto LAB_0017fa8c;
}

