
float FUN_025692d8(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
  puVar1 = &DAT_0417abf4;
  if (*(char *)(param_1 + 0x438) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x2c);
  }
  FUN_02569464(&local_4,puVar1);
  fVar3 = (float)NEON_ucvtf(local_4);
  fVar3 = fVar3 * 8.381903e-08;
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x2b4));
  fVar4 = fVar4 * 8.381903e-08;
  if (fVar4 <= 360.0) {
    if (fVar4 < 0.0) {
      fVar5 = fVar4 / 360.0 + -1.0;
      goto LAB_02569360;
    }
  }
  else {
    fVar5 = fVar4 / 360.0;
LAB_02569360:
    fVar4 = fVar4 - (float)(int)fVar5 * 360.0;
  }
  if (fVar3 <= 360.0) {
    if (0.0 <= fVar3) goto LAB_025693a8;
    fVar5 = fVar3 / 360.0 + -1.0;
  }
  else {
    fVar5 = fVar3 / 360.0;
  }
  fVar3 = fVar3 - (float)(int)fVar5 * 360.0;
LAB_025693a8:
  fVar5 = 0.0;
  if (fVar4 != fVar3) {
    fVar5 = fVar4 - fVar3;
    fVar6 = fVar5;
    if (fVar4 <= fVar3) {
      fVar6 = fVar3 - fVar4;
    }
    if (fVar6 <= 180.0) {
      if (fVar4 <= fVar3) {
        return fVar3 - fVar4;
      }
    }
    else {
      fVar5 = 360.0 - fVar6;
      if (fVar3 < fVar4) {
        return fVar5;
      }
    }
    fVar5 = -fVar5;
  }
  return fVar5;
}

