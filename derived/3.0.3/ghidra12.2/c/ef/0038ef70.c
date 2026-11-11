
float FUN_0038ef70(float param_1,ushort *param_2)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = *param_2;
  uVar3 = (ulong)uVar1;
  if (uVar3 == 0 || uVar3 - 1 == 0) {
    return *(float *)(param_2 + 4);
  }
  pfVar4 = *(float **)(param_2 + 4);
  fVar6 = 0.0;
  pfVar5 = pfVar4;
  if (*pfVar4 < param_1) {
    pfVar5 = pfVar4 + (uVar3 - 1) * 8;
    if (*pfVar5 <= param_1) {
      if (((uint)pfVar5[7] & 1) != 0) {
        fVar6 = 1.0;
        goto LAB_0038f0a8;
      }
      fVar6 = 1.0;
      lVar2 = uVar3 * 8 + -0x10;
    }
    else {
      uVar3 = (ulong)(uVar1 - 1);
      lVar2 = (ulong)(uVar1 - 2) * 8;
      pfVar5 = pfVar4;
      fVar6 = *pfVar4;
      do {
        fVar7 = pfVar5[8];
        if ((fVar6 <= param_1) && (param_1 < fVar7)) {
          fVar7 = (param_1 - fVar6) / (fVar7 - fVar6);
          fVar6 = 0.0;
          if (0.0 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar7 = 1.0;
          if (fVar6 <= 1.0) {
            fVar7 = fVar6;
          }
          fVar6 = (float)FUN_0038ed60(fVar7,pfVar5);
          fVar7 = 1.0 - fVar6;
          fVar6 = fVar6 * fVar6 * fVar6 +
                  pfVar5[2] * fVar7 * fVar6 * fVar6 * 3.0 + fVar7 * fVar6 * 3.0 * fVar7 * pfVar5[4];
          goto LAB_0038f0a8;
        }
        pfVar5 = pfVar5 + 8;
        uVar3 = uVar3 - 1;
        fVar6 = fVar7;
      } while (uVar3 != 0);
      fVar6 = 0.0;
    }
    pfVar5 = pfVar4 + lVar2;
    if (pfVar5 == (float *)0x0) {
      return 0.0;
    }
  }
LAB_0038f0a8:
  return pfVar5[5] + fVar6 * (pfVar5[6] - pfVar5[5]);
}

