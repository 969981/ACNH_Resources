
void FUN_0038f390(long *param_1,float *param_2,int *param_3,long param_4,uint *param_5)

{
  int iVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar20 = *(float *)(param_1 + 1);
  fVar21 = *(float *)((long)param_1 + 0xc);
  iVar4 = *param_3;
  uVar6 = (**(code **)(*param_1 + 0x50))();
  fVar14 = *(float *)(param_1 + 2);
  uVar6 = iVar4 - ((uVar6 ^ 0xffffffff) & 1);
  uVar9 = (ulong)uVar6;
  if (fVar14 == 0.0 && 0 < (int)uVar6) {
    pfVar2 = param_2;
    do {
      uVar9 = uVar9 - 1;
      fVar16 = *pfVar2 - pfVar2[2];
      fVar14 = fVar14 + SQRT((pfVar2[1] - pfVar2[3]) * (pfVar2[1] - pfVar2[3]) + fVar16 * fVar16);
      *(float *)(param_1 + 2) = fVar14;
      pfVar2 = pfVar2 + 2;
    } while (uVar9 != 0);
  }
  fVar21 = fVar21 * fVar14;
  fVar15 = 0.0;
  lVar10 = 0;
  lVar11 = 0;
  iVar7 = -1;
  iVar4 = 0;
  fVar16 = 0.0;
  do {
    iVar8 = iVar4;
    if ((ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) * 8 == lVar10) {
      return;
    }
    pfVar2 = (float *)((long)param_2 + lVar10);
    fVar17 = SQRT((pfVar2[1] - pfVar2[3]) * (pfVar2[1] - pfVar2[3]) +
                  (*pfVar2 - pfVar2[2]) * (*pfVar2 - pfVar2[2]));
    fVar19 = fVar16 + fVar17;
    if ((fVar20 * fVar14 <= fVar19) && (iVar7 < 0)) {
      fVar15 = (fVar20 * fVar14 - fVar16) / fVar17;
      iVar7 = iVar8;
    }
    lVar11 = lVar11 + 0x100000000;
    lVar10 = lVar10 + 8;
    iVar4 = iVar8 + 1;
    fVar16 = fVar19;
  } while (fVar19 < fVar21);
  pfVar2 = param_2 + (long)iVar7 * 2;
  fVar17 = (fVar21 - (fVar19 - fVar17)) / fVar17;
  fVar14 = (float)*(undefined8 *)pfVar2;
  fVar21 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
  if (iVar8 == iVar7) {
    puVar3 = (undefined8 *)((long)param_2 + (lVar11 >> 0x1d));
    uVar18 = *puVar3;
    fVar20 = (float)uVar18 - fVar14;
    fVar16 = (float)((ulong)uVar18 >> 0x20) - fVar21;
    *(ulong *)pfVar2 = CONCAT44(fVar21 + fVar16 * fVar15,fVar14 + fVar20 * fVar15);
    *puVar3 = CONCAT44(fVar21 + fVar16 * fVar17,fVar14 + fVar20 * fVar17);
    *param_3 = iVar4;
    uVar6 = *param_5;
  }
  else {
    puVar3 = (undefined8 *)((long)param_2 + lVar10);
    uVar18 = puVar3[-1];
    *(ulong *)pfVar2 =
         CONCAT44(fVar21 + ((float)((ulong)*(undefined8 *)(param_2 + (long)iVar7 * 2 + 2) >> 0x20) -
                           fVar21) * fVar15,
                  fVar14 + ((float)*(undefined8 *)(param_2 + (long)iVar7 * 2 + 2) - fVar14) * fVar15
                 );
    fVar14 = (float)uVar18;
    fVar21 = (float)((ulong)uVar18 >> 0x20);
    *puVar3 = CONCAT44(fVar21 + ((float)((ulong)*puVar3 >> 0x20) - fVar21) * fVar17,
                       fVar14 + ((float)*puVar3 - fVar14) * fVar17);
    *param_3 = iVar4;
    uVar6 = *param_5;
  }
  if (0 < (int)uVar6) {
    uVar9 = 0;
    piVar12 = (int *)(param_4 + 0x10);
    iVar13 = 0;
    do {
      iVar5 = *piVar12;
      iVar1 = iVar5 + iVar13;
      if ((iVar13 <= iVar7) && (iVar7 < iVar1)) {
        uVar18 = *(undefined8 *)pfVar2;
        *piVar12 = iVar5 - (iVar7 - iVar13);
        *(undefined8 *)(piVar12 + -4) = uVar18;
        *(long *)(piVar12 + -2) = *(long *)(piVar12 + -2) + (long)(iVar7 - iVar13) * 8;
      }
      if (iVar1 <= iVar7) {
        *(undefined1 *)(piVar12 + 1) = 1;
      }
      if (iVar8 < iVar1) {
        uVar6 = (int)uVar9 + 1;
        *piVar12 = ((*piVar12 - iVar13) - iVar5) + iVar4;
        break;
      }
      uVar9 = uVar9 + 1;
      piVar12 = piVar12 + 6;
      iVar13 = iVar1;
    } while (uVar6 != uVar9);
  }
  *param_5 = uVar6;
  return;
}

