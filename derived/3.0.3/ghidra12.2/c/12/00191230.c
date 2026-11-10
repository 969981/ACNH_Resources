
/* WARNING: Removing unreachable block (ram,0x0019186c) */

void FUN_00191230(long param_1,long *param_2,long param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  double *pdVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  double dVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  double dVar23;
  
  pbVar1 = (byte *)*param_2;
  lVar2 = param_2[1];
  bVar4 = *pbVar1;
  uVar16 = (uint)bVar4;
  uVar10 = (uint)bVar4;
  pbVar21 = pbVar1;
  uVar15 = uVar10;
  if (uVar16 == 0x2d) {
    bVar3 = pbVar1[1];
    uVar16 = (uint)bVar3;
    pbVar21 = pbVar1 + 1;
    uVar15 = (uint)bVar3;
  }
  uVar15 = uVar15 - 0x30;
  if (uVar15 == 0) {
    pbVar20 = pbVar21 + 1;
    uVar16 = (uint)*pbVar20;
    dVar19 = 0.0;
    bVar9 = false;
    uVar18 = 0;
    dVar23 = 0.0;
    bVar6 = false;
    goto joined_r0x0019149c;
  }
  if (8 < uVar16 - 0x31) {
    uVar11 = 3;
    goto LAB_00191738;
  }
  dVar23 = 0.0;
  pbVar20 = pbVar21 + 1;
  uVar16 = (uint)*pbVar20;
  uVar17 = (uint)*pbVar20;
  if (uVar10 == 0x2d) {
    if (uVar17 - 0x30 < 10) {
      uVar7 = 0;
      do {
        uVar18 = uVar7;
        if (0xccccccb < uVar15) {
          if (uVar15 == 0xccccccc) {
            if (uVar16 < 0x39) goto LAB_001912b8;
            uVar16 = 0x39;
            uVar15 = 0xccccccc;
          }
          pbVar20 = pbVar21 + uVar18 + 1;
          dVar19 = (double)(ulong)uVar15;
          goto LAB_001913f0;
        }
LAB_001912b8:
        iVar5 = uVar16 + uVar15 * 10;
        uVar16 = (uint)pbVar21[uVar18 + 2];
        uVar15 = iVar5 - 0x30;
        uVar7 = uVar18 + 1;
      } while (uVar16 - 0x30 < 10);
      dVar19 = 0.0;
      bVar9 = false;
      bVar6 = false;
      pbVar20 = pbVar21 + uVar18 + 2;
      uVar18 = uVar18 + 1;
      goto joined_r0x0019149c;
    }
LAB_00191670:
    dVar19 = 0.0;
    uVar18 = 0;
    bVar6 = false;
  }
  else {
    if (9 < uVar17 - 0x30) goto LAB_00191670;
    uVar7 = 0;
    do {
      uVar18 = uVar7;
      if (0x19999998 < uVar15) {
        if (uVar15 == 0x19999999) {
          if (uVar16 < 0x36) goto LAB_00191388;
          uVar15 = 0x19999999;
        }
        pbVar20 = pbVar21 + uVar18 + 1;
        dVar19 = (double)(ulong)uVar15;
        if (uVar10 != 0x2d) goto LAB_00191320;
        goto LAB_001913f0;
      }
LAB_00191388:
      iVar5 = uVar16 + uVar15 * 10;
      uVar16 = (uint)pbVar21[uVar18 + 2];
      uVar15 = iVar5 - 0x30;
      uVar7 = uVar18 + 1;
    } while (uVar16 - 0x30 < 10);
    dVar19 = 0.0;
    bVar6 = false;
    pbVar20 = pbVar21 + uVar18 + 2;
    uVar18 = uVar18 + 1;
    uVar17 = uVar16;
  }
  goto joined_r0x001914bc;
  while( true ) {
    pbVar20 = pbVar20 + 1;
    dVar19 = (double)((ulong)(uVar16 - 0x30) + (long)dVar19 * 10);
    uVar18 = (ulong)((int)uVar18 + 1);
    uVar16 = (uint)*pbVar20;
    if (9 < uVar16 - 0x30) break;
LAB_001913f0:
    if ((0xccccccccccccccb < (ulong)dVar19) &&
       ((dVar19 != 5.1488004017107686e-247 || (0x38 < uVar16)))) goto LAB_00191430;
  }
  goto LAB_001914c4;
LAB_00191430:
  dVar23 = (double)(ulong)dVar19;
  do {
    if (1.7976931348623158e+307 <= dVar23) goto LAB_001917a4;
    iVar5 = uVar16 - 0x30;
    pbVar20 = pbVar20 + 1;
    uVar16 = (uint)*pbVar20;
    dVar23 = (double)iVar5 + dVar23 * 10.0;
  } while (uVar16 - 0x30 < 10);
  bVar9 = true;
  bVar6 = true;
  goto joined_r0x0019149c;
LAB_00191654:
  do {
    pbVar20 = pbVar20 + 1;
  } while (*pbVar20 - 0x30 < 10);
  goto LAB_001917cc;
  while( true ) {
    pbVar20 = pbVar20 + 1;
    dVar19 = (double)((ulong)(uVar16 - 0x30) + (long)dVar19 * 10);
    uVar18 = (ulong)((int)uVar18 + 1);
    uVar16 = (uint)*pbVar20;
    if (9 < uVar16 - 0x30) break;
LAB_00191320:
    if ((0x1999999999999998 < (ulong)dVar19) &&
       ((dVar19 != 2.353437368264535e-185 || (0x35 < uVar16)))) goto LAB_00191430;
  }
LAB_001914c4:
  bVar6 = true;
  uVar17 = uVar16;
joined_r0x001914bc:
  bVar9 = false;
  dVar23 = 0.0;
  uVar16 = uVar17;
joined_r0x0019149c:
  if (uVar16 == 0x2e) {
    pbVar21 = pbVar20 + 1;
    uVar16 = (uint)*pbVar21;
    if (9 < uVar16 - 0x30) {
      uVar11 = 0xe;
      goto LAB_00191738;
    }
    if (bVar9) {
      uVar17 = 0;
LAB_0019158c:
      do {
        if (0x39 < uVar16) {
          bVar9 = true;
          pbVar20 = pbVar21;
          goto joined_r0x00191694;
        }
        if ((int)uVar18 < 0x11) {
          uVar17 = uVar17 - 1;
          dVar23 = (double)(int)(uVar16 - 0x30) + dVar23 * 10.0;
          if (0.0 < dVar23) {
            uVar18 = (ulong)((int)uVar18 + 1);
          }
        }
        pbVar21 = pbVar21 + 1;
        uVar16 = (uint)*pbVar21;
        pbVar20 = pbVar21;
      } while (0x2f < uVar16);
      goto joined_r0x001917dc;
    }
    if (!bVar6) {
      dVar19 = (double)(ulong)uVar15;
    }
    lVar8 = 0;
    do {
      lVar22 = lVar8;
      if ((0x39 < uVar16) || ((ulong)dVar19 >> 0x35 != 0)) {
        dVar23 = (double)(ulong)dVar19;
        uVar17 = -(int)lVar22;
        pbVar21 = pbVar20 + lVar22 + 1;
        goto LAB_0019158c;
      }
      dVar19 = (double)((ulong)(uVar16 - 0x30) + (long)dVar19 * 10);
      uVar16 = (uint)pbVar20[lVar22 + 2];
      uVar17 = (uint)uVar18;
      if (dVar19 != 0.0) {
        uVar17 = uVar17 + 1;
      }
      uVar18 = (ulong)uVar17;
      lVar8 = lVar22 + 1;
    } while (0x2f < uVar16);
    dVar23 = (double)(ulong)dVar19;
    uVar17 = -(int)(lVar22 + 1);
    pbVar20 = pbVar20 + lVar22 + 2;
joined_r0x00191878:
    if ((int)uVar17 < -0x134) goto LAB_001916b8;
LAB_001917e0:
    if ((int)uVar17 < 0) {
      dVar19 = *(double *)(&DAT_04109488 + (ulong)-uVar17 * 8);
LAB_00191800:
      dVar19 = dVar23 / dVar19;
    }
    else {
      dVar19 = dVar23 * *(double *)(&DAT_04109488 + (ulong)uVar17 * 8);
    }
  }
  else {
    uVar17 = 0;
joined_r0x00191694:
    if ((uVar16 == 0x65) || (uVar16 == 0x45)) {
      if (!bVar6) {
        dVar19 = (double)(ulong)uVar15;
      }
      pbVar21 = pbVar20 + 1;
      bVar4 = *pbVar21;
      if (!bVar9) {
        dVar23 = (double)(ulong)dVar19;
      }
      bVar9 = bVar4 != 0x2b;
      if ((!bVar9) || (bVar4 == 0x2d)) {
        pbVar21 = pbVar20 + 2;
        uVar15 = *pbVar21 - 0x30;
        if (uVar15 < 10) {
          pbVar20 = pbVar20 + 3;
          if (bVar4 == 0x2b) goto LAB_00191774;
          uVar16 = (uint)*pbVar20;
          if (9 < *pbVar20 - 0x30) {
            uVar17 = uVar17 - uVar15;
            goto joined_r0x00191878;
          }
          do {
            uVar15 = (uVar16 + uVar15 * 10) - 0x30;
            if (0xccccccb < (int)uVar15) goto LAB_00191654;
            pbVar20 = pbVar20 + 1;
            uVar16 = (uint)*pbVar20;
          } while (uVar16 - 0x30 < 10);
LAB_001917cc:
          uVar16 = -uVar15;
          if (!bVar9) {
            uVar16 = uVar15;
          }
          uVar17 = uVar17 + uVar16;
          goto joined_r0x001917dc;
        }
      }
      else {
        uVar15 = bVar4 - 0x30;
        if (uVar15 < 10) {
          pbVar20 = pbVar20 + 2;
LAB_00191774:
          do {
            bVar4 = *pbVar20;
            if (9 < bVar4 - 0x30) {
              bVar9 = false;
              goto LAB_001917cc;
            }
            pbVar20 = pbVar20 + 1;
            uVar15 = ((uint)bVar4 + uVar15 * 10) - 0x30;
          } while ((int)uVar15 <= (int)(0x134 - uVar17));
LAB_001917a4:
          *(long *)(param_1 + 0x38) = (long)pbVar1 - lVar2;
          *(undefined4 *)(param_1 + 0x30) = 0xd;
LAB_001917b0:
          *param_2 = (long)pbVar20;
          param_2[1] = lVar2;
          return;
        }
      }
      uVar11 = 0xf;
LAB_00191738:
      *(undefined4 *)(param_1 + 0x30) = uVar11;
      *(long *)(param_1 + 0x38) = (long)pbVar21 - lVar2;
      *param_2 = (long)pbVar21;
      param_2[1] = lVar2;
      return;
    }
    if (!bVar9) {
      if (bVar6) {
        if (bVar4 != 0x2d) {
          pdVar12 = *(double **)(param_3 + 0x40);
          if (*(double **)(param_3 + 0x48) < pdVar12 + 3) {
            FUN_00191a28(param_3 + 0x28,1);
            pdVar12 = *(double **)(param_3 + 0x40);
          }
          *(double **)(param_3 + 0x40) = pdVar12 + 3;
          *pdVar12 = dVar19;
          uVar13 = 0x196;
          if ((long)dVar19 < 0) {
            uVar13 = 0x116;
          }
          pdVar12[1] = 0.0;
          pdVar12[2] = 0.0;
          *(ushort *)((long)pdVar12 + 0x16) = uVar13;
          if (((ulong)dVar19 >> 0x20 != 0) ||
             (*(ushort *)((long)pdVar12 + 0x16) = uVar13 | 0x40, (ulong)dVar19 >> 0x1f != 0))
          goto LAB_001917b0;
          uVar13 = uVar13 | 0x60;
          goto LAB_00191834;
        }
        dVar19 = (double)-(long)dVar19;
        pdVar12 = *(double **)(param_3 + 0x40);
        if (*(double **)(param_3 + 0x48) < pdVar12 + 3) {
          FUN_00191a28(param_3 + 0x28,1);
          pdVar12 = *(double **)(param_3 + 0x40);
        }
        *(double **)(param_3 + 0x40) = pdVar12 + 3;
        pdVar12[1] = 0.0;
        pdVar12[2] = 0.0;
        *pdVar12 = dVar19;
        *(undefined2 *)((long)pdVar12 + 0x16) = 0x96;
        if ((long)dVar19 < 0) {
          if ((ulong)dVar19 < 0xffffffff80000000) goto LAB_001917b0;
          uVar13 = 0xb6;
          goto LAB_00191834;
        }
        uVar13 = 0x1d6;
        if ((ulong)dVar19 >> 0x20 != 0) {
          uVar13 = 0x196;
        }
        *(ushort *)((long)pdVar12 + 0x16) = uVar13;
        if ((ulong)dVar19 >> 0x1f == 0) {
          uVar13 = uVar13 | 0x20;
          goto LAB_00191834;
        }
        goto LAB_001917b0;
      }
      if (bVar4 == 0x2d) {
        pdVar12 = *(double **)(param_3 + 0x40);
        uVar15 = -uVar15;
        if (*(double **)(param_3 + 0x48) < pdVar12 + 3) {
          FUN_00191a28(param_3 + 0x28,1);
          pdVar12 = *(double **)(param_3 + 0x40);
        }
        *(double **)(param_3 + 0x40) = pdVar12 + 3;
        pdVar12[1] = 0.0;
        pdVar12[2] = 0.0;
        *pdVar12 = (double)(long)(int)uVar15;
        uVar14 = 0xb6;
      }
      else {
        pdVar12 = *(double **)(param_3 + 0x40);
        if (*(double **)(param_3 + 0x48) < pdVar12 + 3) {
          FUN_00191a28(param_3 + 0x28,1);
          pdVar12 = *(double **)(param_3 + 0x40);
        }
        *(double **)(param_3 + 0x40) = pdVar12 + 3;
        pdVar12[1] = 0.0;
        pdVar12[2] = 0.0;
        *pdVar12 = (double)(ulong)uVar15;
        uVar14 = 0x1d6;
      }
      uVar13 = 0x1f6;
      if ((int)uVar15 < 0) {
        uVar13 = uVar14;
      }
      goto LAB_00191834;
    }
joined_r0x001917dc:
    if (-0x135 < (int)uVar17) goto LAB_001917e0;
LAB_001916b8:
    dVar19 = 0.0;
    if (0xfffffd97 < uVar17) {
      dVar23 = dVar23 / 1e+308;
      dVar19 = *(double *)(PTR_DAT_04bcbe70 + (ulong)(-uVar17 - 0x134) * 8);
      goto LAB_00191800;
    }
  }
  dVar23 = -dVar19;
  if (uVar10 != 0x2d) {
    dVar23 = dVar19;
  }
  pdVar12 = *(double **)(param_3 + 0x40);
  if (*(double **)(param_3 + 0x48) < pdVar12 + 3) {
    FUN_00191a28(param_3 + 0x28,1);
    pdVar12 = *(double **)(param_3 + 0x40);
  }
  *(double **)(param_3 + 0x40) = pdVar12 + 3;
  *pdVar12 = dVar23;
  uVar13 = 0x216;
  pdVar12[1] = 0.0;
  pdVar12[2] = 0.0;
LAB_00191834:
  *(ushort *)((long)pdVar12 + 0x16) = uVar13;
  *param_2 = (long)pbVar20;
  param_2[1] = lVar2;
  return;
}

