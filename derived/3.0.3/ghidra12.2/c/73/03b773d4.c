
void FUN_03b773d4(float param_1,float param_2,long param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 < 0.0) {
    return;
  }
  *(float *)(param_3 + 0xc) = param_1;
  if ((param_2 == 0.0) || (*(float *)(param_3 + 8) == param_1)) {
    fVar6 = param_1;
    if ((*(int *)(param_3 + 0x20) != 0) && (fVar7 = *(float *)(param_3 + 0x24), fVar7 != 0.0)) {
      iVar1 = *(int *)(param_3 + 0x20);
      fVar3 = 1.0;
      if (param_1 < 0.0) {
        fVar3 = -1.0;
      }
      fVar4 = -param_1;
      if (param_1 >= 0.0) {
        fVar4 = param_1;
      }
      fVar5 = 1.0;
      if (fVar4 / fVar7 <= 1.0) {
        fVar5 = fVar4 / fVar7;
      }
      if (iVar1 == 3) {
        fVar6 = asinf(fVar5);
        fVar5 = (fVar3 * fVar6) / 1.5707964;
        fVar7 = *(float *)(param_3 + 0x24);
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 == 1) {
            fVar6 = SQRT(fVar5);
            if (NAN(fVar6)) {
              fVar6 = sqrtf(fVar5);
            }
            fVar6 = fVar3 * fVar6 * *(float *)(param_3 + 0x24);
          }
          goto LAB_03b775a4;
        }
        fVar5 = fVar5 * fVar3 * fVar5;
      }
      fVar6 = fVar7 * fVar5;
    }
LAB_03b775a4:
    *(float *)(param_3 + 0xc) = param_1;
    *(float *)(param_3 + 8) = param_1;
    *(float *)(param_3 + 0x10) = fVar6;
    *(float *)(param_3 + 0x14) = fVar6;
    *(float *)(param_3 + 0x18) = fVar6;
    *(undefined4 *)(param_3 + 0x1c) = 0;
    return;
  }
  if ((*(int *)(param_3 + 0x20) != 0) && (fVar6 = *(float *)(param_3 + 0x24), fVar6 != 0.0)) {
    iVar1 = *(int *)(param_3 + 0x20);
    fVar7 = 1.0;
    if (param_1 < 0.0) {
      fVar7 = -1.0;
    }
    fVar3 = -param_1;
    if (param_1 >= 0.0) {
      fVar3 = param_1;
    }
    fVar4 = 1.0;
    if (fVar3 / fVar6 <= 1.0) {
      fVar4 = fVar3 / fVar6;
    }
    if (iVar1 == 3) {
      fVar6 = asinf(fVar4);
      fVar4 = (fVar7 * fVar6) / 1.5707964;
      fVar6 = *(float *)(param_3 + 0x24);
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 == 1) {
          fVar6 = SQRT(fVar4);
          if (NAN(fVar6)) {
            fVar6 = sqrtf(fVar4);
          }
          param_1 = fVar7 * fVar6 * *(float *)(param_3 + 0x24);
        }
        goto LAB_03b77528;
      }
      fVar4 = fVar4 * fVar7 * fVar4;
    }
    param_1 = fVar6 * fVar4;
  }
LAB_03b77528:
  lVar2 = *(long *)PTR_DAT_04bc3ee8;
  param_2 = (param_1 - *(float *)(param_3 + 0x10)) / param_2;
  *(float *)(param_3 + 0x18) = param_1;
  *(float *)(param_3 + 0x1c) = param_2;
  fVar6 = *(float *)(param_3 + 0x10) + *(float *)(*(long *)(lVar2 + 0x10) + 0x1c) * param_2;
  if (0.0 <= param_2) {
    if (fVar6 <= param_1) goto LAB_03b77564;
  }
  else if (param_1 <= fVar6) goto LAB_03b77564;
  fVar6 = param_1;
LAB_03b77564:
  *(float *)(param_3 + 0x14) = fVar6;
  return;
}

