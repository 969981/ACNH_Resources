
undefined8 FUN_00353404(long *param_1,float *param_2,long *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_4 == 9) {
    lVar3 = *param_3;
    *param_2 = *(float *)(lVar3 + 0x14);
    lVar2 = *param_3;
    iVar1 = *(int *)(lVar2 + 0x4c);
    if (0 < iVar1) {
      if (*(char *)(lVar2 + 0x38) == '\0') {
        fVar5 = (float)FUN_003500f0(lVar2);
      }
      else {
        fVar5 = *(float *)(lVar2 + 0x20);
      }
      fVar5 = fVar5 * (float)iVar1;
      *(float *)(lVar2 + 0x14) =
           *(float *)(param_3 + 3) +
           (float)((int)((*(float *)(lVar2 + 0x14) - *(float *)(param_3 + 3)) / fVar5) + 1) * fVar5;
    }
    param_2[2] = *(float *)(lVar3 + 0x14);
    fVar8 = *(float *)(lVar3 + 0x18);
    param_2[1] = fVar8;
    fVar9 = (float)FUN_00350128(lVar3);
    fVar5 = *param_2;
    fVar8 = fVar8 + fVar9;
    fVar9 = param_2[1];
    fVar7 = param_2[2];
    fVar6 = fVar7;
    if (fVar7 - fVar5 < 0.0) {
      fVar6 = fVar5;
      fVar5 = fVar7;
    }
    fVar7 = fVar8;
    if (fVar8 - fVar9 < 0.0) {
      fVar7 = fVar9;
      fVar9 = fVar8;
    }
    *param_2 = fVar5;
    param_2[1] = fVar9;
    param_2[2] = fVar6;
    param_2[3] = fVar7;
    return 1;
  }
  if (param_4 != 10) {
    return 0;
  }
  lVar4 = *param_3;
  param_2[2] = *(float *)(lVar4 + 0x14);
  param_2[1] = *(float *)(lVar4 + 0x18);
  lVar2 = *param_3;
  lVar3 = param_3[3];
  fVar9 = *(float *)(lVar2 + 0x18);
  fVar5 = (float)(**(code **)(*param_1 + 0x28))(param_1,lVar2);
  *(int *)(lVar2 + 0x14) = (int)lVar3;
  *(float *)(lVar2 + 0x18) = fVar9 + fVar5;
  fVar5 = *(float *)(lVar4 + 0x14);
  *param_2 = fVar5;
  fVar9 = *(float *)(lVar4 + 0x18);
  param_2[3] = fVar9;
  if (*(char *)(*param_3 + 0x62) == '\0') {
    fVar9 = (float)FUN_00350128();
    fVar9 = fVar9 + param_2[3];
    fVar5 = *param_2;
  }
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = fVar7;
  if (fVar7 - fVar5 < 0.0) {
    fVar8 = fVar5;
    fVar5 = fVar7;
  }
  param_2[2] = fVar8;
  fVar8 = fVar9;
  if (fVar9 - fVar6 < 0.0) {
    fVar8 = fVar6;
    fVar6 = fVar9;
  }
  *param_2 = fVar5;
  param_2[1] = fVar6;
  param_2[3] = fVar8;
  return 3;
}

