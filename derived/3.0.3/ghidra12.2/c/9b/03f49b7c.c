
void FUN_03f49b7c(long param_1,float *param_2,float *param_3,float *param_4)

{
  char *pcVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = param_2[3];
  pcVar1 = (char *)(param_1 + 0x1061);
  fVar7 = *param_2 / fVar6;
  fVar3 = param_2[1] / fVar6;
  *param_2 = fVar7;
  param_2[1] = fVar3;
  fVar5 = param_2[2] / fVar6;
  fVar6 = fVar6 / fVar6;
  param_2[2] = fVar5;
  param_2[3] = fVar6;
  if (*pcVar1 == '\0') {
    fVar8 = 1.0;
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  else {
    fVar8 = (float)NEON_fminnm(1.0 / ABS((fVar7 * 0.21258622 + fVar3 * 0.7151703 + fVar5 * 0.0722005
                                         + fVar6 * 0.0) -
                                         (*param_4 * 0.21258622 + param_4[1] * 0.7151703 +
                                          param_4[2] * 0.0722005 + param_4[3] * 0.0)),0x3f800000);
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  fVar4 = fVar8;
  if (cVar2 != '\0') {
    fVar5 = fVar7 * 1.6 + fVar3 * -1.6 + fVar5 * -1.6 + fVar6 * 0.0;
    fVar6 = *param_4 * 1.6 + param_4[1] * -1.6 + param_4[2] * -1.6 + param_4[3] * 0.0;
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
  *param_3 = fVar4;
  fVar6 = param_2[7];
  fVar7 = param_2[4] / fVar6;
  fVar3 = param_2[5] / fVar6;
  param_2[4] = fVar7;
  param_2[5] = fVar3;
  fVar5 = param_2[6] / fVar6;
  fVar6 = fVar6 / fVar6;
  param_2[6] = fVar5;
  param_2[7] = fVar6;
  if (*pcVar1 == '\0') {
    fVar8 = 1.0;
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  else {
    fVar8 = (float)NEON_fminnm(1.0 / ABS((fVar7 * 0.21258622 + fVar3 * 0.7151703 + fVar5 * 0.0722005
                                         + fVar6 * 0.0) -
                                         (param_4[4] * 0.21258622 + param_4[5] * 0.7151703 +
                                          param_4[6] * 0.0722005 + param_4[7] * 0.0)),0x3f800000);
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  fVar4 = fVar8;
  if (cVar2 != '\0') {
    fVar5 = fVar7 * 1.6 + fVar3 * -1.6 + fVar5 * -1.6 + fVar6 * 0.0;
    fVar6 = param_4[4] * 1.6 + param_4[5] * -1.6 + param_4[6] * -1.6 + param_4[7] * 0.0;
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
  param_3[1] = fVar4;
  fVar6 = param_2[0xb];
  fVar7 = param_2[8] / fVar6;
  fVar3 = param_2[9] / fVar6;
  param_2[8] = fVar7;
  param_2[9] = fVar3;
  fVar5 = param_2[10] / fVar6;
  fVar6 = fVar6 / fVar6;
  param_2[10] = fVar5;
  param_2[0xb] = fVar6;
  if (*pcVar1 == '\0') {
    fVar8 = 1.0;
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  else {
    fVar8 = (float)NEON_fminnm(1.0 / ABS((fVar7 * 0.21258622 + fVar3 * 0.7151703 + fVar5 * 0.0722005
                                         + fVar6 * 0.0) -
                                         (param_4[8] * 0.21258622 + param_4[9] * 0.7151703 +
                                          param_4[10] * 0.0722005 + param_4[0xb] * 0.0)),0x3f800000)
    ;
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  fVar4 = fVar8;
  if (cVar2 != '\0') {
    fVar5 = fVar7 * 1.6 + fVar3 * -1.6 + fVar5 * -1.6 + fVar6 * 0.0;
    fVar6 = param_4[8] * 1.6 + param_4[9] * -1.6 + param_4[10] * -1.6 + param_4[0xb] * 0.0;
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
  param_3[2] = fVar4;
  fVar6 = param_2[0xf];
  fVar7 = param_2[0xc] / fVar6;
  fVar3 = param_2[0xd] / fVar6;
  param_2[0xc] = fVar7;
  param_2[0xd] = fVar3;
  fVar5 = param_2[0xe] / fVar6;
  fVar6 = fVar6 / fVar6;
  param_2[0xe] = fVar5;
  param_2[0xf] = fVar6;
  if (*pcVar1 == '\0') {
    fVar8 = 1.0;
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  else {
    fVar8 = (float)NEON_fminnm(1.0 / ABS((fVar7 * 0.21258622 + fVar3 * 0.7151703 + fVar5 * 0.0722005
                                         + fVar6 * 0.0) -
                                         (param_4[0xc] * 0.21258622 + param_4[0xd] * 0.7151703 +
                                          param_4[0xe] * 0.0722005 + param_4[0xf] * 0.0)),0x3f800000
                              );
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  fVar4 = fVar8;
  if (cVar2 != '\0') {
    fVar5 = fVar7 * 1.6 + fVar3 * -1.6 + fVar5 * -1.6 + fVar6 * 0.0;
    fVar6 = param_4[0xc] * 1.6 + param_4[0xd] * -1.6 + param_4[0xe] * -1.6 + param_4[0xf] * 0.0;
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
  param_3[3] = fVar4;
  fVar6 = param_2[0x13];
  fVar7 = param_2[0x10] / fVar6;
  fVar3 = param_2[0x11] / fVar6;
  param_2[0x10] = fVar7;
  param_2[0x11] = fVar3;
  fVar5 = param_2[0x12] / fVar6;
  fVar6 = fVar6 / fVar6;
  param_2[0x12] = fVar5;
  param_2[0x13] = fVar6;
  if (*pcVar1 == '\0') {
    fVar8 = 1.0;
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  else {
    fVar8 = (float)NEON_fminnm(1.0 / ABS((fVar7 * 0.21258622 + fVar3 * 0.7151703 + fVar5 * 0.0722005
                                         + fVar6 * 0.0) -
                                         (param_4[0x10] * 0.21258622 + param_4[0x11] * 0.7151703 +
                                          param_4[0x12] * 0.0722005 + param_4[0x13] * 0.0)),
                               0x3f800000);
    cVar2 = *(char *)(param_1 + 0x1062);
  }
  fVar4 = fVar8;
  if (cVar2 != '\0') {
    fVar5 = fVar7 * 1.6 + fVar3 * -1.6 + fVar5 * -1.6 + fVar6 * 0.0;
    fVar6 = param_4[0x10] * 1.6 + param_4[0x11] * -1.6 + param_4[0x12] * -1.6 + param_4[0x13] * 0.0;
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
  param_3[4] = fVar4;
  return;
}

