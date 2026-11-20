
void FUN_03f4bad0(long param_1,long param_2,float *param_3,long param_4)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = 0;
  do {
    pfVar1 = (float *)(param_2 + 8 + lVar2);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[-2] / fVar6;
    fVar3 = pfVar1[-1] / fVar6;
    pfVar1[-2] = fVar7;
    pfVar1[-1] = fVar3;
    fVar5 = *pfVar1 / fVar6;
    fVar8 = 1.0;
    fVar6 = fVar6 / fVar6;
    *pfVar1 = fVar5;
    pfVar1[1] = fVar6;
    pfVar1 = (float *)(param_4 + lVar2);
    if (*(char *)(param_1 + 0x3361) != '\0') {
      fVar8 = (float)NEON_fminnm(1.0 / ABS((fVar7 * 0.21258622 + fVar3 * 0.7151703 +
                                            fVar5 * 0.0722005 + fVar6 * 0.0) -
                                           (*pfVar1 * 0.21258622 + pfVar1[1] * 0.7151703 +
                                            pfVar1[2] * 0.0722005 + pfVar1[3] * 0.0)),0x3f800000);
    }
    fVar4 = fVar8;
    if (*(char *)(param_1 + 0x3362) != '\0') {
      fVar5 = fVar7 * 1.6 + fVar3 * -1.6 + fVar5 * -1.6 + fVar6 * 0.0;
      fVar6 = *pfVar1 * 1.6 + pfVar1[1] * -1.6 + pfVar1[2] * -1.6 + pfVar1[3] * 0.0;
      fVar3 = 0.0;
      if (0.0 <= fVar6) {
        fVar3 = fVar6;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar4 = 1.0 / ABS(fVar6 - fVar3);
      if (fVar8 <= fVar4) {
        fVar4 = fVar8;
      }
    }
    lVar2 = lVar2 + 0x10;
    *param_3 = fVar4;
    param_3 = param_3 + 1;
  } while (lVar2 != 0x90);
  return;
}

