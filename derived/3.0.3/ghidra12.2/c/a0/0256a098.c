
float FUN_0256a098(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_4;
  
  puVar1 = &DAT_0417abf4;
  if (*(char *)(param_1 + 0x438) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x2c);
  }
  FUN_02569464(&local_4,puVar1);
  fVar2 = (float)NEON_ucvtf(local_4);
  fVar2 = fVar2 * 8.381903e-08;
  fVar3 = (float)NEON_ucvtf(*param_2);
  fVar3 = fVar3 * 8.381903e-08;
  if (fVar3 <= 360.0) {
    if (fVar3 < 0.0) {
      fVar4 = fVar3 / 360.0 + -1.0;
      goto LAB_0256a11c;
    }
  }
  else {
    fVar4 = fVar3 / 360.0;
LAB_0256a11c:
    fVar3 = fVar3 - (float)(int)fVar4 * 360.0;
  }
  if (fVar2 <= 360.0) {
    if (0.0 <= fVar2) goto LAB_0256a164;
    fVar4 = fVar2 / 360.0 + -1.0;
  }
  else {
    fVar4 = fVar2 / 360.0;
  }
  fVar2 = fVar2 - (float)(int)fVar4 * 360.0;
LAB_0256a164:
  fVar4 = 0.0;
  if (fVar3 != fVar2) {
    fVar4 = fVar3 - fVar2;
    fVar5 = fVar4;
    if (fVar3 <= fVar2) {
      fVar5 = fVar2 - fVar3;
    }
    if (fVar5 <= 180.0) {
      if (fVar3 <= fVar2) {
        return fVar2 - fVar3;
      }
    }
    else {
      fVar4 = 360.0 - fVar5;
      if (fVar2 < fVar3) {
        return fVar4;
      }
    }
    fVar4 = -fVar4;
  }
  return fVar4;
}

