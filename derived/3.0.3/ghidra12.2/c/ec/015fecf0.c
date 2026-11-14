
void FUN_015fecf0(float *param_1,long param_2,undefined8 param_3,long param_4)

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
          if (fVar7 < fVar8) goto LAB_015fed10;
        }
        else if (fVar8 < fVar7) {
LAB_015fed10:
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
        if (fVar7 < fVar8) {
LAB_015fedf8:
          fVar8 = pfVar1[1];
          *(undefined8 *)pfVar1 = *(undefined8 *)pfVar4;
          if (uVar6 < 2) {
LAB_015fee0c:
            pfVar1 = pfVar4;
          }
          else if (fVar7 < 0.0) {
            do {
              uVar6 = uVar3 - 1;
              uVar3 = uVar6 >> 1;
              pfVar1 = param_1 + uVar3 * 2;
              fVar9 = *pfVar1;
              if (0.0 <= fVar9) {
                if (fVar9 <= fVar7) goto LAB_015fee0c;
              }
              else if (fVar7 <= fVar9) goto LAB_015fee0c;
              *(undefined8 *)pfVar4 = *(undefined8 *)pfVar1;
              pfVar4 = pfVar1;
            } while (1 < uVar6);
          }
          else {
            do {
              uVar6 = uVar3 - 1;
              uVar3 = uVar6 >> 1;
              pfVar1 = param_1 + uVar3 * 2;
              if (*pfVar1 <= fVar7) goto LAB_015fee0c;
              *(undefined8 *)pfVar4 = *(undefined8 *)pfVar1;
              pfVar4 = pfVar1;
            } while (1 < uVar6);
          }
          *pfVar1 = fVar7;
          pfVar1[1] = fVar8;
          return;
        }
      }
      else if (fVar8 < fVar7) goto LAB_015fedf8;
    }
  }
  return;
}

