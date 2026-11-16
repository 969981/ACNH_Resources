
float FUN_0256a1c4(long param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_48;
  undefined4 local_44;
  
  fVar6 = SQRT(*(float *)(param_1 + 0x6d4) * *(float *)(param_1 + 0x6d4) +
               *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x6d0));
  lVar1 = FUN_0251e98c(1);
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x120) + 0xf0))(lVar1 + 0x120);
  fVar3 = 0.0;
  if (*pfVar2 <= fVar6) {
    lVar1 = FUN_0251e98c(1);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x120) + 0xf0))(lVar1 + 0x120);
    fVar3 = *pfVar2;
    lVar1 = FUN_0251e98c(1);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x120) + 0xf0))(lVar1 + 0x120);
    fVar4 = (fVar6 - *pfVar2) / (1.0 - fVar3);
    fVar6 = 0.9999;
    if (fVar4 <= 0.9999) {
      fVar6 = fVar4;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar4) {
      fVar3 = fVar6;
    }
  }
  fVar6 = -fVar3;
  if (0.0 <= fVar3) {
    fVar6 = fVar3;
  }
  if (fVar6 < 1.1920929e-07) {
    return 0.0;
  }
  pfVar2 = (float *)&DAT_0417abf4;
  if (*(char *)(param_1 + 0x438) != '\0') {
    pfVar2 = (float *)(param_1 + 0x2c);
  }
  fVar6 = SQRT(pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2);
  lVar1 = FUN_0251e98c(1);
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x120) + 0xf0))(lVar1 + 0x120);
  fVar3 = 0.0;
  if (*pfVar2 <= fVar6) {
    lVar1 = FUN_0251e98c(1);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x120) + 0xf0))(lVar1 + 0x120);
    fVar3 = *pfVar2;
    lVar1 = FUN_0251e98c(1);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x120) + 0xf0))(lVar1 + 0x120);
    fVar4 = (fVar6 - *pfVar2) / (1.0 - fVar3);
    fVar6 = 0.9999;
    if (fVar4 <= 0.9999) {
      fVar6 = fVar4;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar4) {
      fVar3 = fVar6;
    }
  }
  fVar6 = -fVar3;
  if (0.0 <= fVar3) {
    fVar6 = fVar3;
  }
  if (fVar6 < 1.1920929e-07) {
    return 0.0;
  }
  pfVar2 = (float *)&DAT_0417abf4;
  if (*(char *)(param_1 + 0x438) != '\0') {
    pfVar2 = (float *)(param_1 + 0x2c);
  }
  FUN_02569464(&local_44,pfVar2);
  fVar3 = (float)NEON_ucvtf(local_44);
  fVar3 = fVar3 * 8.381903e-08;
  FUN_02569464(&local_48,param_1 + 0x6d0);
  fVar6 = (float)NEON_ucvtf(local_48);
  fVar6 = fVar6 * 8.381903e-08;
  if (fVar6 <= 360.0) {
    if (fVar6 < 0.0) {
      fVar4 = fVar6 / 360.0 + -1.0;
      goto LAB_0256a400;
    }
  }
  else {
    fVar4 = fVar6 / 360.0;
LAB_0256a400:
    fVar6 = fVar6 - (float)(int)fVar4 * 360.0;
  }
  if (fVar3 <= 360.0) {
    if (0.0 <= fVar3) goto LAB_0256a448;
    fVar4 = fVar3 / 360.0 + -1.0;
  }
  else {
    fVar4 = fVar3 / 360.0;
  }
  fVar3 = fVar3 - (float)(int)fVar4 * 360.0;
LAB_0256a448:
  fVar4 = 0.0;
  if (fVar6 != fVar3) {
    fVar4 = fVar6 - fVar3;
    fVar5 = fVar4;
    if (fVar6 <= fVar3) {
      fVar5 = fVar3 - fVar6;
    }
    if (fVar5 <= 180.0) {
      if (fVar6 <= fVar3) {
        return fVar3 - fVar6;
      }
    }
    else {
      fVar4 = 360.0 - fVar5;
      if (fVar3 < fVar6) {
        return fVar4;
      }
    }
    fVar4 = -fVar4;
  }
  return fVar4;
}

