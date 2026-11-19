
void FUN_039a9f40(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    pfVar3 = (float *)0x0;
    lVar2 = (long)*(int *)(param_1 + 0x40) << 3;
    do {
      if (*(int *)(*(long *)*puVar1 + 0xa4) != 0) {
        pfVar4 = *(float **)(*(long *)*puVar1 + 0x38);
        if (pfVar3 == (float *)0x0) {
          *(float *)(param_1 + 0x290) = *pfVar4;
          *(float *)(param_1 + 0x294) = pfVar4[1];
          *(float *)(param_1 + 0x298) = pfVar4[2];
          *(float *)(param_1 + 0x29c) = pfVar4[3];
          pfVar3 = (float *)(param_1 + 0x290);
        }
        else {
          fVar5 = *pfVar4;
          fVar7 = pfVar4[1];
          fVar9 = pfVar3[1] - fVar7;
          fVar8 = pfVar4[2];
          fVar10 = *pfVar3 - fVar5;
          fVar11 = pfVar3[2] - fVar8;
          fVar6 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
          if (0.0 < fVar6) {
            fVar12 = 1.0 / fVar6;
            fVar10 = fVar10 * fVar12;
            fVar9 = fVar9 * fVar12;
            fVar11 = fVar11 * fVar12;
          }
          fVar13 = pfVar3[3];
          fVar14 = pfVar4[3];
          fVar15 = fVar13 - fVar14;
          fVar12 = -fVar15;
          if (0.0 <= fVar15) {
            fVar12 = fVar15;
          }
          if (fVar12 <= fVar6) {
            *pfVar3 = (*pfVar3 + fVar10 * fVar13 + (fVar5 - fVar10 * fVar14)) * 0.5;
            pfVar3[1] = (pfVar3[1] + fVar9 * fVar13 + (fVar7 - fVar9 * fVar14)) * 0.5;
            pfVar3[2] = (pfVar3[2] + fVar11 * fVar13 + (fVar8 - fVar11 * fVar14)) * 0.5;
            fVar5 = (fVar6 + fVar13 + pfVar4[3]) * 0.5;
          }
          else {
            if (0.0 <= fVar15) goto LAB_039a9f88;
            *pfVar3 = fVar5;
            pfVar3[1] = pfVar4[1];
            pfVar3[2] = pfVar4[2];
            fVar5 = pfVar4[3];
          }
          pfVar3[3] = fVar5;
        }
      }
LAB_039a9f88:
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}

