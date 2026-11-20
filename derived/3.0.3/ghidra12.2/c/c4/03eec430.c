
float FUN_03eec430(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(uint *)(param_2 + 0x178) <= param_3) {
    param_3 = 0;
  }
  lVar5 = *(long *)(param_2 + 0x180) + (long)(int)param_3 * 0xa0;
  lVar4 = *(long *)(lVar5 + 0x98);
  if (param_1 <= *(float *)(lVar4 + 0x18)) {
    fVar7 = *(float *)(lVar4 + 0x1c) -
            *(float *)(lVar4 + 0x20) * (*(float *)(lVar4 + 0x18) - param_1);
  }
  else {
    uVar2 = *(uint *)(lVar5 + 0x88);
    uVar3 = *(uint *)(lVar5 + 0x90);
    uVar6 = uVar2 - 1;
    if (uVar3 <= uVar6) {
      uVar6 = 0;
    }
    lVar5 = lVar4 + (long)(int)uVar6 * 0x28;
    if (param_1 <= *(float *)(lVar5 + 0x18)) {
      fVar7 = 0.0;
      if (1 < (int)uVar2) {
        uVar6 = 1;
        do {
          uVar1 = uVar6;
          if (uVar3 <= uVar6) {
            uVar1 = 0;
          }
          lVar5 = lVar4 + (ulong)uVar1 * 0x28;
          fVar9 = *(float *)(lVar5 + 0x18);
          if (param_1 <= fVar9) {
            uVar6 = uVar6 - 1;
            if (uVar3 <= uVar6) {
              uVar6 = 0;
            }
            lVar4 = lVar4 + (long)(int)uVar6 * 0x28;
            fVar7 = *(float *)(lVar4 + 0x18);
            if (fVar7 == fVar9) {
              fVar7 = *(float *)(lVar5 + 0x1c);
            }
            else {
              fVar9 = fVar9 - fVar7;
              fVar7 = (param_1 - fVar7) / fVar9;
              fVar8 = fVar7 * (fVar7 + fVar7);
              fVar10 = fVar7 * fVar7 * 3.0;
              fVar11 = fVar7 * fVar7;
              fVar7 = (fVar10 + fVar7 * fVar7 * fVar7 * -2.0) * *(float *)(lVar5 + 0x1c) +
                      ((fVar8 * fVar7 - fVar10) + 1.0) * *(float *)(lVar4 + 0x1c) +
                      fVar9 * (fVar7 + (fVar11 * fVar7 - fVar8)) * *(float *)(lVar4 + 0x24) +
                      fVar9 * (fVar11 * fVar7 - fVar11) * *(float *)(lVar5 + 0x20);
            }
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
      }
    }
    else {
      fVar7 = *(float *)(lVar5 + 0x1c) -
              *(float *)(lVar5 + 0x20) * (*(float *)(lVar5 + 0x18) - param_1);
    }
  }
  if (NAN(fVar7)) {
    fVar7 = 0.0;
  }
  return fVar7;
}

