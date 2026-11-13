
bool FUN_014cbe28(long param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = *(float *)(param_1 + 0x6d0);
  fVar9 = *(float *)(param_1 + 0x6d4);
  fVar7 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
  lVar2 = FUN_014c9440();
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0xf0) + 0xf0))();
  fVar6 = *pfVar3;
  fVar5 = 0.0;
  if (fVar6 < fVar7) {
    if (fVar7 < pfVar3[1]) {
      fVar5 = (fVar7 - fVar6) / (pfVar3[1] - fVar6) + 0.0;
    }
    else {
      fVar5 = 1.0;
    }
  }
  if (0.0 < fVar7) {
    fVar8 = fVar8 * (fVar5 / fVar7);
    fVar9 = fVar9 * (fVar5 / fVar7);
    fVar7 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
  }
  if (fVar7 < 0.25) {
    if (*(float *)(param_1 + 0xae8) < -1.1920929e-07) {
      return true;
    }
    if (1.1920929e-07 < *(float *)(param_1 + 0xae8)) {
      return true;
    }
  }
  iVar1 = *(int *)(param_1 + 0xaf4);
  lVar2 = FUN_014c9440(param_1);
  piVar4 = (int *)(**(code **)(*(long *)(lVar2 + 0x1d0) + 0xf0))(lVar2 + 0x1d0);
  return *piVar4 < iVar1;
}

