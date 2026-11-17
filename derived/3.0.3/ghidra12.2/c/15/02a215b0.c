
float FUN_02a215b0(float param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_2 + 3) == '\0') {
    do {
      uVar1 = (DAT_055f531c % 0xadc8) * 0xbc8f;
      iVar3 = 0x7fffffff;
      if ((DAT_055f531c / 0xadc8) * 0xd47 <= uVar1) {
        iVar3 = 0;
      }
      uVar1 = iVar3 + uVar1 + (DAT_055f531c / 0xadc8) * -0xd47;
      uVar2 = (uVar1 % 0xadc8) * 0xbc8f;
      iVar3 = 0x7fffffff;
      if ((uVar1 / 0xadc8) * 0xd47 <= uVar2) {
        iVar3 = 0;
      }
      DAT_055f531c = iVar3 + uVar2 + (uVar1 / 0xadc8) * -0xd47;
      fVar4 = (float)(uVar1 - 1) * 4.656613e-10 * 2.0 + -1.0;
      fVar7 = (float)(DAT_055f531c - 1) * 4.656613e-10 * 2.0 + -1.0;
      fVar6 = fVar7 * fVar7 + fVar4 * fVar4;
    } while ((1.0 < fVar6) || (fVar6 == 0.0));
    fVar5 = logf(fVar6);
    fVar6 = (fVar5 * -2.0) / fVar6;
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    fVar4 = fVar4 * fVar5;
    *(undefined1 *)(param_2 + 3) = 1;
    param_2[2] = fVar7 * fVar5;
  }
  else {
    fVar4 = param_2[2];
    *(undefined1 *)(param_2 + 3) = 0;
  }
  fVar7 = *param_2;
  fVar6 = fVar7 + param_2[1] * fVar4;
  fVar4 = fVar7 + param_1;
  if (fVar6 <= fVar7 + param_1) {
    fVar4 = fVar6;
  }
  fVar5 = fVar7 - param_1;
  if (fVar7 - param_1 <= fVar6) {
    fVar5 = fVar4;
  }
  return fVar5;
}

