
void FUN_038c6010(float *param_1,long param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  short *psVar11;
  int iVar12;
  short sVar13;
  float *pfVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  
  uVar2 = param_3 + 1;
  if (param_1 != (float *)0x0) {
    if (0 < (int)param_3) {
      uVar15 = 0;
      pfVar14 = param_1;
      do {
        fVar17 = ((float)(int)uVar15 * 6.2831855) / (float)(int)param_3;
        fVar16 = cosf(fVar17);
        *pfVar14 = fVar16 * 0.5;
        fVar16 = sinf(fVar17);
        pfVar14[1] = 0.5;
        pfVar14[5] = 0.0;
        pfVar14[2] = fVar16 * -0.5;
        pfVar14[3] = *pfVar14;
        pfVar14[4] = 1.0 - fVar16 * -0.5;
        fVar16 = cosf(fVar17);
        pfVar4 = pfVar14 + (ulong)uVar2 * 9;
        *pfVar4 = fVar16 * 0.5;
        fVar16 = sinf(fVar17);
        fVar17 = *pfVar14;
        uVar15 = uVar15 + 1;
        pfVar4[1] = -0.5;
        pfVar4[5] = 1.0;
        pfVar4[2] = fVar16 * -0.5;
        pfVar4[3] = fVar17;
        pfVar1 = pfVar14 + 2;
        pfVar14 = pfVar14 + 9;
        pfVar4[4] = 1.0 - *pfVar1;
      } while (param_3 != uVar15);
    }
    pfVar14 = param_1 + (long)(int)param_3 * 9;
    param_1 = param_1 + (long)(int)(uVar2 + param_3) * 9;
    pfVar14[0] = 0.0;
    pfVar14[1] = 0.5;
    pfVar14[2] = 0.0;
    pfVar14[3] = 0.5;
    pfVar14[4] = 0.5;
    pfVar14[5] = 0.0;
    param_1[0] = 0.0;
    param_1[1] = -0.5;
    param_1[2] = 0.0;
    param_1[3] = 0.5;
    param_1[4] = 0.5;
    param_1[5] = 1.0;
  }
  if ((param_2 != 0) && (0 < (int)param_3)) {
    iVar12 = param_3 * 3;
    uVar9 = (ulong)param_3;
    uVar15 = 0;
    psVar11 = (short *)(param_2 + 4);
    do {
      bVar8 = uVar9 - 1 != uVar15;
      sVar6 = (short)uVar15;
      psVar11[-2] = sVar6;
      sVar7 = (short)param_3;
      uVar15 = uVar15 + 1;
      sVar13 = 0;
      if (bVar8) {
        sVar13 = (short)uVar15;
      }
      *psVar11 = sVar7;
      psVar11[-1] = sVar13;
      *(short *)(param_2 + (long)iVar12 * 2) = sVar7 + sVar6 + 1;
      *(short *)(param_2 + (long)(iVar12 + 1) * 2) = (short)(uVar2 + param_3);
      iVar3 = iVar12 + 2;
      iVar12 = iVar12 + 3;
      psVar11 = psVar11 + 3;
      *(short *)(param_2 + (long)iVar3 * 2) = sVar13 + (short)uVar2;
    } while (uVar9 != uVar15);
    lVar10 = 0;
    sVar13 = 1;
    do {
      iVar12 = param_3 * 6 + (int)lVar10;
      sVar5 = sVar7 + sVar13;
      *(short *)(param_2 + (long)iVar12 * 2) = sVar13 + -1;
      *(short *)(param_2 + (long)(iVar12 + 1) * 2) = sVar5;
      sVar6 = 0;
      if (uVar9 * 6 + -6 != lVar10) {
        sVar6 = sVar13;
      }
      lVar10 = lVar10 + 6;
      *(short *)(param_2 + (long)(iVar12 + 2) * 2) = sVar6;
      *(short *)(param_2 + (long)(iVar12 + 3) * 2) = sVar6;
      sVar13 = sVar13 + 1;
      *(short *)(param_2 + (long)(iVar12 + 4) * 2) = sVar5;
      *(short *)(param_2 + (long)(iVar12 + 5) * 2) = sVar6 + (short)uVar2;
    } while (uVar9 * 6 != lVar10);
  }
  return;
}

