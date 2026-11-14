
undefined8 FUN_015f0b58(long param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_2;
  if ((((fVar1 <= *(float *)(param_1 + 0x228)) &&
       (fVar2 = *param_3, *(float *)(param_1 + 0x21c) <= fVar2)) &&
      (fVar3 = param_2[1], fVar3 <= *(float *)(param_1 + 0x22c))) &&
     (((fVar4 = param_3[1], *(float *)(param_1 + 0x220) <= fVar4 &&
       (fVar5 = param_2[2], fVar5 <= *(float *)(param_1 + 0x230))) &&
      (fVar6 = param_3[2], *(float *)(param_1 + 0x224) <= fVar6)))) {
    fVar7 = fVar1;
    if (*(float *)(param_1 + 0x1a4) <= 0.0) {
      fVar7 = fVar2;
    }
    fVar8 = fVar3;
    if (*(float *)(param_1 + 0x1a8) <= 0.0) {
      fVar8 = fVar4;
    }
    fVar9 = fVar5;
    if (*(float *)(param_1 + 0x1ac) <= 0.0) {
      fVar9 = fVar6;
    }
    if (*(float *)(param_1 + 0x1b0) +
        *(float *)(param_1 + 0x1a8) * fVar8 + *(float *)(param_1 + 0x1a4) * fVar7 +
        *(float *)(param_1 + 0x1ac) * fVar9 <= 0.0) {
      fVar7 = fVar1;
      if (*(float *)(param_1 + 0x1b4) <= 0.0) {
        fVar7 = fVar2;
      }
      fVar8 = fVar3;
      if (*(float *)(param_1 + 0x1b8) <= 0.0) {
        fVar8 = fVar4;
      }
      fVar9 = fVar5;
      if (*(float *)(param_1 + 0x1bc) <= 0.0) {
        fVar9 = fVar6;
      }
      if (*(float *)(param_1 + 0x1c0) +
          *(float *)(param_1 + 0x1b8) * fVar8 + *(float *)(param_1 + 0x1b4) * fVar7 +
          *(float *)(param_1 + 0x1bc) * fVar9 <= 0.0) {
        fVar7 = fVar1;
        if (*(float *)(param_1 + 0x1c4) <= 0.0) {
          fVar7 = fVar2;
        }
        fVar8 = fVar3;
        if (*(float *)(param_1 + 0x1c8) <= 0.0) {
          fVar8 = fVar4;
        }
        fVar9 = fVar5;
        if (*(float *)(param_1 + 0x1cc) <= 0.0) {
          fVar9 = fVar6;
        }
        if (*(float *)(param_1 + 0x1d0) +
            *(float *)(param_1 + 0x1c8) * fVar8 + *(float *)(param_1 + 0x1c4) * fVar7 +
            *(float *)(param_1 + 0x1cc) * fVar9 <= 0.0) {
          fVar7 = fVar1;
          if (*(float *)(param_1 + 0x1d4) <= 0.0) {
            fVar7 = fVar2;
          }
          fVar8 = fVar3;
          if (*(float *)(param_1 + 0x1d8) <= 0.0) {
            fVar8 = fVar4;
          }
          fVar9 = fVar5;
          if (*(float *)(param_1 + 0x1dc) <= 0.0) {
            fVar9 = fVar6;
          }
          if (*(float *)(param_1 + 0x1e0) +
              *(float *)(param_1 + 0x1d8) * fVar8 + *(float *)(param_1 + 0x1d4) * fVar7 +
              *(float *)(param_1 + 0x1dc) * fVar9 <= 0.0) {
            fVar7 = fVar1;
            if (*(float *)(param_1 + 0x1e4) <= 0.0) {
              fVar7 = fVar2;
            }
            fVar8 = fVar3;
            if (*(float *)(param_1 + 0x1e8) <= 0.0) {
              fVar8 = fVar4;
            }
            fVar9 = fVar5;
            if (*(float *)(param_1 + 0x1ec) <= 0.0) {
              fVar9 = fVar6;
            }
            if (*(float *)(param_1 + 0x1f0) +
                *(float *)(param_1 + 0x1e8) * fVar8 + *(float *)(param_1 + 0x1e4) * fVar7 +
                *(float *)(param_1 + 0x1ec) * fVar9 <= 0.0) {
              if (*(float *)(param_1 + 500) <= 0.0) {
                fVar1 = fVar2;
              }
              if (*(float *)(param_1 + 0x1f8) <= 0.0) {
                fVar3 = fVar4;
              }
              if (*(float *)(param_1 + 0x1fc) <= 0.0) {
                fVar5 = fVar6;
              }
              if (*(float *)(param_1 + 0x200) +
                  *(float *)(param_1 + 0x1f8) * fVar3 + *(float *)(param_1 + 500) * fVar1 +
                  *(float *)(param_1 + 0x1fc) * fVar5 <= 0.0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

