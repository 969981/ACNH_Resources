
void FUN_02946460(long param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((*(byte *)(param_1 + 0x274) >> 6 & 1) == 0) {
    fVar4 = 1.0;
  }
  else {
    lVar1 = FUN_02945728(param_1);
    pfVar2 = (float *)(**(code **)(**(long **)(*(long *)(lVar1 + 0x4d0) +
                                              (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
    fVar4 = *pfVar2;
  }
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined8 *)(param_1 + 0x38c) = 0;
  lVar1 = FUN_02945728(param_1);
  pfVar2 = (float *)(**(code **)(**(long **)(*(long *)(lVar1 + 0xb80) +
                                            (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
  fVar7 = *pfVar2;
  lVar1 = FUN_02945728(param_1);
  pfVar2 = (float *)(**(code **)(**(long **)(*(long *)(lVar1 + 0xa10) +
                                            (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
  *(float *)(param_1 + 900) = fVar7 / *pfVar2;
  lVar1 = FUN_02945728(param_1);
  pfVar2 = (float *)(**(code **)(**(long **)(*(long *)(lVar1 + 0xa10) +
                                            (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
  fVar5 = fVar4 * *pfVar2 * *(float *)(param_1 + 900);
  fVar3 = *(float *)(param_1 + 0x2b4) - *(float *)(param_1 + 0x2a8);
  *(float *)(param_1 + 0x388) = fVar5;
  *(float *)(param_1 + 0x3a4) = fVar3;
  fVar6 = *(float *)(param_1 + 700) - *(float *)(param_1 + 0x2b0);
  *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x2b8) - *(float *)(param_1 + 0x2ac);
  fVar7 = -fVar3;
  if (0.0 <= fVar3) {
    fVar7 = fVar3;
  }
  *(float *)(param_1 + 0x3ac) = fVar6;
  fVar9 = fVar7 - fVar5;
  fVar8 = -fVar6;
  if (0.0 <= fVar6) {
    fVar8 = fVar6;
  }
  fVar8 = fVar8 - fVar5;
  if (fVar9 <= 0.0) {
    if (fVar3 != 0.0) {
      lVar1 = FUN_02945728(param_1);
      pfVar2 = (float *)(**(code **)(**(long **)(*(long *)(lVar1 + 0xa10) +
                                                (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
      fVar7 = fVar7 / (fVar4 * *pfVar2);
      goto LAB_02946608;
    }
  }
  else {
    *(float *)(param_1 + 0x38c) = *(float *)(param_1 + 900);
    if (fVar9 != 0.0) {
      lVar1 = FUN_02945728(param_1);
      pfVar2 = (float *)(**(code **)(**(long **)(*(long *)(lVar1 + 0xb80) +
                                                (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
      fVar7 = *(float *)(param_1 + 0x38c) + fVar9 / (fVar4 * *pfVar2);
LAB_02946608:
      *(float *)(param_1 + 0x38c) = fVar7;
    }
  }
  if (fVar8 <= 0.0) {
    fVar7 = *(float *)(param_1 + 0x3ac);
    if (fVar7 == 0.0) {
      fVar3 = *(float *)(param_1 + 0x390);
      goto LAB_029466a4;
    }
    fVar3 = -fVar7;
    if (0.0 <= fVar7) {
      fVar3 = fVar7;
    }
    lVar1 = FUN_02945728(param_1);
    pfVar2 = (float *)(**(code **)(**(long **)(*(long *)(lVar1 + 0xa10) +
                                              (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
    fVar3 = fVar3 / (fVar4 * *pfVar2);
  }
  else {
    fVar3 = *(float *)(param_1 + 900);
    *(float *)(param_1 + 0x390) = fVar3;
    if (fVar8 == 0.0) goto LAB_029466a4;
    lVar1 = FUN_02945728(param_1);
    pfVar2 = (float *)(**(code **)(**(long **)(*(long *)(lVar1 + 0xb80) +
                                              (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
    fVar3 = *(float *)(param_1 + 0x390) + fVar8 / (fVar4 * *pfVar2);
  }
  *(float *)(param_1 + 0x390) = fVar3;
LAB_029466a4:
  fVar4 = *(float *)(param_1 + 0x38c);
  if (fVar4 <= fVar3) {
    *(float *)(param_1 + 0x38c) = fVar3;
  }
  else {
    *(float *)(param_1 + 0x390) = fVar4;
    fVar3 = fVar4;
  }
  *(float *)(param_1 + 0x394) = fVar3;
  return;
}

