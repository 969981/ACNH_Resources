
void FUN_00343990(float *param_1,long param_2,undefined8 param_3,long param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (1 < param_4) {
    uVar2 = *(undefined8 *)param_1;
    pfVar4 = param_1;
    uVar3 = 0;
    do {
      uVar5 = uVar3 << 1 | 1;
      uVar6 = uVar3 * 2 + 2;
      pfVar1 = pfVar4 + uVar3 * 2 + 2;
      if ((long)uVar6 < param_4) {
        fVar8 = *pfVar1;
        fVar7 = pfVar4[uVar3 * 2 + 4];
        if ((0.0 <= fVar8) || (0.0 <= fVar7)) {
          if (fVar8 < fVar7) goto LAB_003439b0;
        }
        else if (fVar7 < fVar8) {
LAB_003439b0:
          pfVar1 = pfVar4 + uVar3 * 2 + 4;
          uVar5 = uVar6;
        }
      }
      *(undefined8 *)pfVar4 = *(undefined8 *)pfVar1;
      pfVar4 = pfVar1;
      uVar3 = uVar5;
    } while ((long)uVar5 <= (long)(param_4 - 2U >> 1));
    pfVar4 = (float *)(param_2 + -8);
    if (pfVar1 == pfVar4) {
      *(undefined8 *)pfVar1 = uVar2;
      return;
    }
    *(undefined8 *)pfVar1 = *(undefined8 *)pfVar4;
    *(undefined8 *)pfVar4 = uVar2;
    uVar3 = (long)pfVar1 + (8 - (long)param_1);
    if (8 < (long)uVar3) {
      fVar7 = *pfVar1;
      uVar6 = (uVar3 >> 3) - 2;
      uVar3 = uVar6 >> 1;
      pfVar4 = param_1 + uVar3 * 2;
      fVar8 = *pfVar4;
      if ((0.0 <= fVar8) || (0.0 <= fVar7)) {
        if (fVar8 < fVar7) goto LAB_00343a98;
      }
      else if (fVar7 < fVar8) {
LAB_00343a98:
        fVar8 = pfVar1[1];
        *(undefined8 *)pfVar1 = *(undefined8 *)pfVar4;
        if (1 < uVar6) {
          pfVar1 = pfVar4;
          if (fVar7 < 0.0) {
            do {
              uVar6 = uVar3 - 1;
              uVar3 = uVar6 >> 1;
              pfVar4 = param_1 + uVar3 * 2;
              fVar9 = *pfVar4;
              if (0.0 <= fVar9) {
                if (fVar7 <= fVar9) goto LAB_00343b30;
              }
              else if (fVar9 <= fVar7) goto LAB_00343b30;
              *(undefined8 *)pfVar1 = *(undefined8 *)pfVar4;
              pfVar1 = pfVar4;
            } while (1 < uVar6);
          }
          else {
            do {
              uVar6 = uVar3 - 1;
              uVar3 = uVar6 >> 1;
              pfVar4 = param_1 + uVar3 * 2;
              if (fVar7 <= *pfVar4) {
LAB_00343b30:
                *pfVar1 = fVar7;
                pfVar1[1] = fVar8;
                return;
              }
              *(undefined8 *)pfVar1 = *(undefined8 *)pfVar4;
              pfVar1 = pfVar4;
            } while (1 < uVar6);
          }
        }
        *pfVar4 = fVar7;
        pfVar4[1] = fVar8;
        return;
      }
    }
  }
  return;
}

