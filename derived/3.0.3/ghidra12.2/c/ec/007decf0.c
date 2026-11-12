
void FUN_007decf0(long *param_1,undefined4 *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = (**(code **)(*param_1 + 0x48))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    fVar4 = 1.0;
    *(undefined4 *)(lVar1 + 0x10) = *param_2;
    *(undefined4 *)(lVar1 + 0x14) = param_2[1];
    *(undefined4 *)(lVar1 + 0x18) = param_2[2];
    fVar2 = 0.0;
    fVar6 = param_3[3];
    fVar5 = *param_3;
    fVar8 = param_3[6];
    fVar9 = fVar5 + fVar6 * 0.0 + fVar8 * 0.0 + 1.0;
    fVar7 = 0.0;
    fVar3 = 0.0;
    if (1.1920929e-06 < fVar9) {
      fVar2 = SQRT(fVar9 + fVar9);
      if (NAN(fVar2)) {
        fVar2 = sqrtf(fVar9 + fVar9);
      }
      fVar7 = 1.0 / fVar2;
      fVar2 = fVar2 * 0.5 + fVar2 * 0.5;
      fVar3 = (fVar6 * -0.0 + fVar8 * 0.0) * fVar7;
      fVar4 = (fVar5 * 0.0 - fVar8) * fVar7;
      fVar7 = (fVar6 + fVar5 * -0.0) * fVar7;
    }
    fVar8 = fVar3 + fVar3;
    fVar10 = fVar4 * (fVar4 + fVar4);
    fVar9 = fVar7 * (fVar7 + fVar7);
    fVar6 = (fVar4 + fVar4) * fVar7;
    fVar5 = 1.0 - fVar3 * fVar8;
    *(float *)(lVar1 + 0x20) = fVar4 * fVar8 + fVar2 * fVar7;
    *(float *)(lVar1 + 0x34) = fVar2 * fVar4 + fVar8 * fVar7;
    *(float *)(lVar1 + 0x24) = fVar8 * fVar7 - fVar2 * fVar4;
    *(float *)(lVar1 + 0x28) = fVar4 * fVar8 - fVar2 * fVar7;
    *(float *)(lVar1 + 0x30) = fVar2 * fVar3 + fVar6;
    *(float *)(lVar1 + 0x1c) = (1.0 - fVar10) - fVar9;
    *(float *)(lVar1 + 0x2c) = fVar5 - fVar9;
    *(float *)(lVar1 + 0x38) = fVar6 - fVar2 * fVar3;
    *(float *)(lVar1 + 0x3c) = fVar5 - fVar10;
  }
  return;
}

