
void FUN_016738a4(long param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  pfVar2 = (float *)(**(code **)(*(long *)(lVar6 + 0x250) + 0xf0))(lVar6 + 0x250);
  fVar7 = *param_2;
  fVar14 = param_2[1];
  iVar1 = *(int *)(param_1 + 0x950) + -1;
  fVar13 = param_2[2];
  fVar16 = *pfVar2;
  fVar8 = (float)iVar1;
  if (*(int *)(param_1 + 0x950) == 0 || iVar1 == 0) {
    fVar8 = 0.0;
  }
  pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x158) + 0xf0))(lVar6 + 0x158);
  fVar17 = *pfVar3;
  fVar9 = exp2f(-fVar8);
  fVar10 = pfVar2[1];
  lVar4 = (**(code **)(*(long *)(lVar6 + 0x158) + 0xf0))(lVar6 + 0x158);
  fVar15 = *(float *)(lVar4 + 4);
  fVar8 = exp2f(-fVar8);
  fVar8 = (fVar10 + fVar10) / (fVar15 * fVar8);
  lVar4 = 0;
  if (*(long *)(DAT_05231900 + 0x78) != 0) {
    fVar10 = 57600.0 / (*(float *)(*(long *)(DAT_05231900 + 0x78) + 0x40) * 6.2831855) + fVar14;
    fVar15 = atan2f(fVar10,fVar13);
    fVar15 = 1.5707964 - fVar15;
    fVar11 = cosf(fVar15);
    if (fVar11 == 0.0) {
      fVar11 = 0.001;
    }
    else {
      fVar11 = cosf(fVar15);
    }
    lVar4 = *(long *)(DAT_05231900 + 0x78);
    fVar12 = *(float *)(lVar4 + 0x3c);
    fVar14 = fVar14 * (1.0 - fVar12) +
             fVar12 * (fVar10 / fVar11 + -57600.0 / (*(float *)(lVar4 + 0x40) * 6.2831855));
    fVar13 = fVar12 * ((fVar15 / (*(float *)(lVar4 + 0x40) * 0.017453292)) * 160.0 -
                      *(float *)(lVar4 + 0x38)) + (1.0 - fVar12) * fVar13;
  }
  fVar13 = fVar13 / fVar8;
  uVar5 = 0;
  if (fVar13 != (float)(int)fVar13) {
    uVar5 = (uint)(fVar13 < 0.0);
  }
  fVar8 = fVar8 * (float)(int)((int)fVar13 - uVar5);
  if (lVar4 != 0) {
    fVar15 = *(float *)(lVar4 + 0x40) * 0.017453292 * ((fVar8 + *(float *)(lVar4 + 0x38)) / 160.0);
    fVar13 = 57600.0 / (*(float *)(lVar4 + 0x40) * 6.2831855) + fVar14;
    fVar10 = cosf(fVar15);
    if (fVar10 == 0.0) {
      fVar10 = 0.001;
    }
    else {
      fVar10 = cosf(fVar15);
    }
    fVar15 = sinf(fVar15);
    fVar11 = *(float *)(*(long *)(DAT_05231900 + 0x78) + 0x3c);
    fVar8 = fVar15 * fVar13 * fVar11 + (1.0 - fVar11) * fVar8;
    fVar14 = fVar14 * (1.0 - fVar11) +
             fVar11 * (fVar10 * fVar13 +
                      -57600.0 / (*(float *)(*(long *)(DAT_05231900 + 0x78) + 0x40) * 6.2831855));
  }
  fVar13 = (fVar16 + fVar16) / (fVar17 * fVar9);
  fVar7 = fVar7 / fVar13;
  uVar5 = 0;
  if (fVar7 != (float)(int)fVar7) {
    uVar5 = (uint)(fVar7 < 0.0);
  }
  fVar13 = fVar13 * (float)(int)((int)fVar7 - uVar5);
  fVar7 = *pfVar2;
  pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x220) + 0xf0))(lVar6 + 0x220);
  fVar16 = *pfVar3;
  fVar15 = *pfVar2;
  fVar9 = pfVar2[1];
  pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x1f0) + 0xf0))(lVar6 + 0x1f0);
  fVar10 = pfVar2[1];
  fVar17 = *pfVar3;
  *(float *)(param_1 + 0x740) = fVar13 - fVar7;
  *(float *)(param_1 + 0x744) = fVar14 - (fVar14 + -100.0 + fVar16);
  *(float *)(param_1 + 0x748) = fVar8 - fVar9;
  *(float *)(param_1 + 0x74c) = fVar13 + fVar15;
  *(float *)(param_1 + 0x734) = fVar13;
  *(float *)(param_1 + 0x738) = fVar14;
  *(float *)(param_1 + 0x73c) = fVar8;
  *(float *)(param_1 + 0x754) = fVar8 + fVar10;
  *(float *)(param_1 + 0x750) = fVar14 - fVar17;
  return;
}

