
undefined4 FUN_01fa5220(undefined4 *param_1,float *param_2,float *param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  if (*param_4 == 6) {
    return 4;
  }
  if (*param_4 - 2U < 4) {
    fVar6 = 0.0;
    if (*param_4 - 2U < 4) {
      fVar6 = *(float *)(&DAT_04102950 + (long)(int)(*param_4 - 2U) * 4);
    }
  }
  else {
    uVar4 = FUN_006f0400(*param_3 - *param_2,param_3[2] - param_2[2]);
    fVar6 = (float)uVar4 * 8.381903e-08;
  }
  fVar7 = (float)NEON_ucvtf(*param_1);
  fVar6 = fVar6 + fVar7 * -8.381903e-08;
  if (fVar6 <= 180.0) {
    if (-180.0 <= fVar6) goto LAB_01fa52f4;
    fVar7 = 360.0;
  }
  else {
    fVar7 = -360.0;
  }
  fVar6 = fVar6 + fVar7;
LAB_01fa52f4:
  bVar1 = false;
  if ((-45.0 < fVar6) && (bVar1 = false, !NAN(fVar6))) {
    bVar1 = fVar6 < 45.0;
  }
  if (bVar1) {
    return 1;
  }
  bVar1 = false;
  if ((45.0 < fVar6) && (bVar1 = false, !NAN(fVar6))) {
    bVar1 = fVar6 < 135.0;
  }
  if (bVar1) {
    return 2;
  }
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar6 < -45.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 < -135.0;
      bVar2 = fVar6 == -135.0;
      bVar3 = false;
    }
  }
  uVar5 = 3;
  if (bVar2 || bVar1 != bVar3) {
    uVar5 = 5;
  }
  return uVar5;
}

