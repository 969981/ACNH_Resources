
void FUN_029dc580(float param_1,int param_2,long param_3,long *param_4,long *param_5)

{
  float *pfVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar6 = (long)*(int *)((long)param_5 + 0x74);
  lVar9 = (long)*(int *)((long)param_4 + 0x74);
  pfVar10 = (float *)(param_5[0xd] - lVar6);
  pfVar1 = (float *)((long)param_5 + (0x60 - lVar6));
  if (((long *)param_4[0xd] != param_4 + 0xc) || (uVar8 = 0, pfVar10 != pfVar1)) {
    pfVar11 = (float *)((long)(param_4 + 0xc) - lVar9);
    uVar8 = 0;
    pfVar7 = (float *)(param_4[0xd] - lVar9);
    fVar14 = 1.0 - param_1;
    do {
      fVar12 = *pfVar7;
      lVar4 = (long)(uVar8 << 0x20) >> 0x1b;
      if ((pfVar10 == pfVar1) || (fVar13 = *pfVar10, fVar12 < fVar13)) {
        fVar15 = pfVar7[1];
        fVar12 = (float)(**(code **)(*param_5 + 0x28))(param_5);
        fVar13 = *pfVar7;
        pfVar3 = (float *)(param_3 + lVar4);
        pfVar3[2] = 0.0;
        pfVar3[3] = 1.0;
        *pfVar3 = fVar13;
        pfVar3[1] = fVar12 * param_1 + fVar15 * fVar14;
        pfVar7 = (float *)(*(long *)((long)pfVar7 + lVar9 + 8) + -lVar9);
      }
      else {
        if ((pfVar7 == pfVar11) || (fVar13 < fVar12)) {
          fVar12 = (float)(**(code **)(*param_4 + 0x28))(fVar13);
          fVar15 = *pfVar10;
          fVar13 = pfVar10[1];
          pfVar3 = (float *)(param_3 + lVar4);
          pfVar3[2] = 0.0;
          pfVar3[3] = 1.0;
          *pfVar3 = fVar15;
          pfVar3[1] = fVar13 * param_1 + fVar12 * fVar14;
          lVar4 = *(long *)((long)pfVar10 + lVar6 + 8);
        }
        else {
          fVar13 = pfVar7[1];
          pfVar3 = (float *)(param_3 + lVar4);
          fVar15 = pfVar10[1];
          *pfVar3 = fVar12;
          pfVar3[2] = 0.0;
          pfVar3[3] = 1.0;
          pfVar3[1] = fVar15 * param_1 + fVar13 * fVar14;
          pfVar7 = (float *)(*(long *)((long)pfVar7 + lVar9 + 8) + -lVar9);
          lVar4 = *(long *)((long)pfVar10 + lVar6 + 8);
        }
        pfVar10 = (float *)(lVar4 - lVar6);
      }
      uVar2 = uVar8 + 1;
      uVar8 = uVar2 & 0xffffffff;
    } while ((pfVar10 != pfVar1 || pfVar7 != pfVar11) && ((int)uVar2 != param_2));
  }
  iVar5 = (int)uVar8;
  while (iVar5 != param_2) {
    *(undefined4 *)(param_3 + (-(uVar8 >> 0x1f) & 0xffffffe000000000 | uVar8 << 5)) = 0x7f7fffff;
    uVar2 = uVar8 + 1;
    uVar8 = uVar2 & 0xffffffff;
    iVar5 = (int)uVar2;
  }
  return;
}

