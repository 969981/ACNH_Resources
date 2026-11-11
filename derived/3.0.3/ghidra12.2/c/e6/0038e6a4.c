
/* WARNING: Removing unreachable block (ram,0x0038ec58) */
/* WARNING: Removing unreachable block (ram,0x0038ec40) */
/* WARNING: Removing unreachable block (ram,0x0038e9dc) */
/* WARNING: Removing unreachable block (ram,0x0038e9c4) */
/* WARNING: Removing unreachable block (ram,0x0038e9d0) */
/* WARNING: Removing unreachable block (ram,0x0038e9e8) */
/* WARNING: Removing unreachable block (ram,0x0038ec4c) */
/* WARNING: Removing unreachable block (ram,0x0038ec64) */

void FUN_0038e6a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  FUN_003b4a20();
  FUN_0038dd30(param_1);
  FUN_003b4a28(param_1,param_4);
  iVar4 = FUN_003b49fc(param_1);
  if (iVar4 == 2) {
    piVar6 = (int *)FUN_003b49a8();
    fVar14 = *(float *)(param_1 + 0x40);
    fVar15 = *(float *)(param_1 + 0x44);
    uVar1 = *(uint *)(param_1 + 0x48);
    fVar16 = 2.0;
    if (fVar14 <= 1.0) {
      fVar16 = fVar14 + fVar14;
    }
    fVar14 = 2.0;
    if (fVar15 <= 1.0) {
      fVar14 = fVar15 + fVar15;
    }
    if ((uVar1 == 0xffffffff) || (uVar1 == 0)) goto LAB_0038ebac;
    if (uVar1 == 1) {
      iVar4 = 1;
LAB_0038ea80:
      *piVar6 = 0;
      piVar6[1] = iVar4;
      piVar6[2] = iVar4 + 1;
      piVar6 = piVar6 + 3;
    }
    else {
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        uVar9 = uVar10 + 2;
        *piVar6 = 0;
        piVar6[1] = uVar10 + 1;
        piVar6[2] = uVar9;
        piVar6[3] = 0;
        piVar6[4] = uVar9;
        piVar6[5] = uVar10 + 3;
        piVar6 = piVar6 + 6;
      } while ((uVar1 & 0xfffffffe) != uVar9);
      iVar4 = uVar10 + 3;
      if ((uVar1 & 1) != 0) goto LAB_0038ea80;
    }
    if (uVar1 == 0) goto LAB_0038ebac;
    iVar4 = uVar1 + 2;
    if (uVar1 == 1) {
      iVar11 = 1;
LAB_0038ead8:
      *piVar6 = iVar4;
      piVar6[1] = iVar11 + iVar4;
      piVar6[2] = iVar11 + iVar4 + 1;
      piVar6 = piVar6 + 3;
    }
    else {
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        iVar11 = uVar1 + uVar10;
        *piVar6 = iVar4;
        piVar6[1] = iVar11 + 3;
        piVar6[2] = iVar11 + 4;
        piVar6[3] = iVar4;
        piVar6[4] = iVar11 + 4;
        piVar6[5] = iVar11 + 5;
        piVar6 = piVar6 + 6;
        uVar9 = uVar10 + 2;
      } while ((uVar1 & 0xfffffffe) != uVar10 + 2);
      iVar11 = uVar10 + 3;
      if ((uVar1 & 1) != 0) goto LAB_0038ead8;
    }
    if (uVar1 == 0) goto LAB_0038ebac;
    iVar11 = iVar4 * 2;
    if (uVar1 == 1) {
      iVar13 = 1;
LAB_0038eb38:
      *piVar6 = iVar11;
      piVar6[1] = iVar13 + iVar11;
      piVar6[2] = iVar13 + iVar11 + 1;
      piVar6 = piVar6 + 3;
    }
    else {
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        iVar13 = uVar1 * 2 + uVar10;
        *piVar6 = iVar11;
        piVar6[1] = iVar13 + 5;
        piVar6[2] = iVar13 + 6;
        piVar6[3] = iVar11;
        piVar6[4] = iVar13 + 6;
        piVar6[5] = iVar13 + 7;
        piVar6 = piVar6 + 6;
        uVar9 = uVar10 + 2;
      } while ((uVar1 & 0xfffffffe) != uVar10 + 2);
      iVar13 = uVar10 + 3;
      if ((uVar1 & 1) != 0) goto LAB_0038eb38;
    }
    if (uVar1 != 0) {
      iVar4 = iVar4 * 3;
      if (uVar1 == 1) {
        iVar11 = 1;
      }
      else {
        uVar9 = 0;
        do {
          uVar10 = uVar9;
          iVar11 = uVar1 * 3 + uVar10;
          *piVar6 = iVar4;
          piVar6[1] = iVar11 + 7;
          piVar6[2] = iVar11 + 8;
          piVar6[3] = iVar4;
          piVar6[4] = iVar11 + 8;
          piVar6[5] = iVar11 + 9;
          piVar6 = piVar6 + 6;
          uVar9 = uVar10 + 2;
        } while ((uVar1 & 0xfffffffe) != uVar10 + 2);
        iVar11 = uVar10 + 3;
        if ((uVar1 & 1) == 0) goto LAB_0038ebac;
      }
      *piVar6 = iVar4;
      piVar6[1] = iVar11 + iVar4;
      piVar6[2] = iVar11 + iVar4 + 1;
      piVar6 = piVar6 + 3;
    }
LAB_0038ebac:
    iVar11 = uVar1 * 4;
    iVar4 = iVar11 + 8;
    if (fVar16 < 2.0) {
      *piVar6 = iVar4;
      piVar6[1] = iVar11 + 10;
      piVar6[2] = iVar11 + 0xb;
      piVar6[3] = iVar4;
      piVar6[4] = iVar11 + 0xb;
      piVar6[5] = iVar11 + 9;
      piVar6[6] = iVar11 + 0xc;
      piVar6[7] = iVar11 + 0xf;
      piVar6[8] = iVar11 + 0xe;
      piVar6[9] = iVar11 + 0xc;
      piVar6[10] = iVar11 + 0xd;
      piVar6[0xb] = iVar11 + 0xf;
      piVar6 = piVar6 + 0xc;
      iVar4 = iVar11 + 0x10;
    }
    if (fVar14 < 2.0) {
      *piVar6 = iVar4;
      piVar6[1] = iVar4 + 1;
      piVar6[2] = iVar4 + 2;
      piVar6[3] = iVar4;
      piVar6[4] = iVar4 + 2;
      piVar6[5] = iVar4 + 3;
      return;
    }
    return;
  }
  if (iVar4 != 1) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl();
  }
  psVar5 = (short *)FUN_003b49a8();
  fVar14 = *(float *)(param_1 + 0x40);
  fVar15 = *(float *)(param_1 + 0x44);
  uVar1 = *(uint *)(param_1 + 0x48);
  fVar16 = 2.0;
  if (fVar14 <= 1.0) {
    fVar16 = fVar14 + fVar14;
  }
  fVar14 = 2.0;
  if (fVar15 <= 1.0) {
    fVar14 = fVar15 + fVar15;
  }
  sVar3 = (short)uVar1;
  if ((uVar1 == 0xffffffff) || (uVar1 == 0)) goto LAB_0038e90c;
  if (uVar1 == 1) {
    sVar7 = 1;
LAB_0038e7ac:
    psVar5[1] = sVar7;
    *psVar5 = 0;
    psVar5[2] = sVar7 + 1;
    psVar5 = psVar5 + 3;
  }
  else {
    uVar9 = 0;
    do {
      sVar7 = (short)uVar9;
      uVar9 = uVar9 + 2;
      *psVar5 = 0;
      psVar5[1] = sVar7 + 1;
      psVar5[2] = (short)uVar9;
      psVar5[3] = 0;
      psVar5[4] = (short)uVar9;
      psVar5[5] = sVar7 + 3;
      psVar5 = psVar5 + 6;
    } while ((uVar1 & 0xfffffffe) != uVar9);
    sVar7 = sVar7 + 3;
    if ((uVar1 & 1) != 0) goto LAB_0038e7ac;
  }
  if (uVar1 == 0) goto LAB_0038e90c;
  sVar7 = sVar3 + 2;
  if (uVar1 == 1) {
    sVar8 = 1;
LAB_0038e814:
    *psVar5 = sVar7;
    psVar5[1] = sVar8 + sVar7;
    psVar5[2] = sVar8 + sVar7 + 1;
    psVar5 = psVar5 + 3;
  }
  else {
    uVar9 = 0;
    do {
      sVar8 = (short)uVar9;
      sVar12 = sVar3 + sVar8;
      uVar9 = uVar9 + 2;
      *psVar5 = sVar7;
      psVar5[3] = sVar7;
      psVar5[1] = sVar12 + 3;
      psVar5[2] = sVar12 + 4;
      psVar5[4] = sVar12 + 4;
      psVar5[5] = sVar12 + 5;
      psVar5 = psVar5 + 6;
    } while ((uVar1 & 0xfffffffe) != uVar9);
    sVar8 = sVar8 + 3;
    if ((uVar1 & 1) != 0) goto LAB_0038e814;
  }
  if (uVar1 == 0) goto LAB_0038e90c;
  sVar8 = sVar7 * 2;
  if (uVar1 == 1) {
    sVar12 = 1;
LAB_0038e884:
    *psVar5 = sVar8;
    psVar5[1] = sVar12 + sVar8;
    psVar5[2] = sVar12 + sVar8 + 1;
    psVar5 = psVar5 + 3;
  }
  else {
    uVar9 = 0;
    do {
      sVar12 = (short)uVar9;
      sVar2 = sVar3 * 2 + sVar12;
      uVar9 = uVar9 + 2;
      *psVar5 = sVar8;
      psVar5[3] = sVar8;
      psVar5[1] = sVar2 + 5;
      psVar5[2] = sVar2 + 6;
      psVar5[4] = sVar2 + 6;
      psVar5[5] = sVar2 + 7;
      psVar5 = psVar5 + 6;
    } while ((uVar1 & 0xfffffffe) != uVar9);
    sVar12 = sVar12 + 3;
    if ((uVar1 & 1) != 0) goto LAB_0038e884;
  }
  if (uVar1 != 0) {
    sVar7 = sVar7 * 3;
    if (uVar1 == 1) {
      sVar8 = 1;
    }
    else {
      uVar9 = 0;
      do {
        sVar8 = (short)uVar9;
        sVar12 = sVar3 * 3 + sVar8;
        uVar9 = uVar9 + 2;
        *psVar5 = sVar7;
        psVar5[3] = sVar7;
        psVar5[1] = sVar12 + 7;
        psVar5[2] = sVar12 + 8;
        psVar5[4] = sVar12 + 8;
        psVar5[5] = sVar12 + 9;
        psVar5 = psVar5 + 6;
      } while ((uVar1 & 0xfffffffe) != uVar9);
      sVar8 = sVar8 + 3;
      if ((uVar1 & 1) == 0) goto LAB_0038e90c;
    }
    *psVar5 = sVar7;
    psVar5[1] = sVar8 + sVar7;
    psVar5[2] = sVar8 + sVar7 + 1;
    psVar5 = psVar5 + 3;
  }
LAB_0038e90c:
  sVar3 = sVar3 * 4;
  sVar7 = sVar3 + 8;
  if (fVar16 < 2.0) {
    *psVar5 = sVar7;
    psVar5[3] = sVar7;
    psVar5[5] = sVar3 + 9;
    psVar5[1] = sVar3 + 10;
    psVar5[2] = sVar3 + 0xb;
    psVar5[4] = sVar3 + 0xb;
    psVar5[6] = sVar3 + 0xc;
    psVar5[9] = sVar3 + 0xc;
    psVar5[7] = sVar3 + 0xf;
    psVar5[8] = sVar3 + 0xe;
    psVar5[10] = sVar3 + 0xd;
    sVar7 = sVar3 + 0x10;
    psVar5[0xb] = sVar3 + 0xf;
    psVar5 = psVar5 + 0xc;
  }
  if (fVar14 < 2.0) {
    *psVar5 = sVar7;
    psVar5[3] = sVar7;
    psVar5[1] = sVar7 + 1;
    psVar5[2] = sVar7 + 2;
    psVar5[4] = sVar7 + 2;
    psVar5[5] = sVar7 + 3;
    return;
  }
  return;
}

