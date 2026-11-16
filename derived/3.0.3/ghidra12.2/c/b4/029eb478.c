
void FUN_029eb478(long param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2[0x10] != '\0') {
    fVar7 = *(float *)(param_2 + 0x24);
    fVar6 = *(float *)(param_2 + 0x14);
    fVar3 = *(float *)(param_2 + 0x18);
    fVar8 = 0.0;
    fVar4 = *(float *)(param_2 + 0x1c);
    fVar5 = fVar7 - fVar3;
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= fVar5) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= fVar5;
      }
    }
    if (bVar2 && !bVar1) {
      fVar8 = (*(float *)(param_2 + 0x20) - fVar6) / (-(fVar3 * fVar3) + fVar7 * fVar7);
    }
    fVar5 = (*(float *)(param_2 + 0x28) - fVar4) / fVar5;
    *(float *)(param_1 + 0x30) = fVar8;
    *(float *)(param_1 + 0x34) = fVar6 + fVar3 * -(fVar8 * fVar3);
    *(float *)(param_1 + 0x1c) = fVar5;
    *(float *)(param_1 + 0x20) = fVar4 - fVar3 * fVar5;
  }
  if (param_2[8] != '\0') {
    fVar3 = *(float *)(param_2 + 0xc);
    *(float *)(param_1 + 0x14) = fVar3;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x20) + fVar3 * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0x34) + fVar3 * fVar3 * *(float *)(param_1 + 0x30);
  }
  if (param_2[1] != '\0') {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x2c);
  }
  if (*param_2 == '\0') {
    fVar3 = *(float *)(param_1 + 0x28) + 1.0;
    *(float *)(param_1 + 0x28) = fVar3;
    if (*(float *)(param_1 + 0x2c) <= fVar3) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      fVar4 = (float)FUN_02a215b0(0x3f800000,param_1 + 0x38);
      fVar3 = 1.0;
      if (fVar4 <= 1.0) {
        fVar3 = fVar4;
      }
      fVar5 = -1.0;
      if (-1.0 <= fVar4) {
        fVar5 = fVar3;
      }
      *(float *)(param_1 + 8) = *(float *)(param_1 + 0x14) + fVar5 * *(float *)(param_1 + 0x18);
    }
    fVar5 = *(float *)(param_1 + 0x24);
    fVar4 = *(float *)(param_2 + 4);
    fVar3 = (1.0 - fVar5) * (1.0 - fVar5) * -2.0;
    if (fVar5 < 0.5) {
      fVar3 = fVar5 * (fVar5 + fVar5);
    }
    *(float *)(param_1 + 0x24) = fVar5 + fVar3;
    fVar3 = *(float *)(param_1 + 8);
    fVar5 = 0.5;
    if (fVar3 < 0.0) {
      fVar5 = -0.5;
    }
    fVar7 = *(float *)(param_1 + 0x10);
    fVar6 = -0.5;
    if (fVar7 < 0.0) {
      fVar6 = 0.5;
    }
    *(float *)(param_1 + 0x10) =
         fVar7 + fVar4 * fVar3 * fVar3 * fVar5 + fVar4 * fVar7 * fVar7 * fVar6;
  }
  fVar3 = *(float *)(param_1 + 0x18);
  if ((fVar3 < -1.1920929e-07) || (fVar4 = 0.0, 1.1920929e-07 < fVar3)) {
    fVar4 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x14)) / fVar3;
  }
  *(float *)(param_1 + 0xc) = fVar4;
  return;
}

