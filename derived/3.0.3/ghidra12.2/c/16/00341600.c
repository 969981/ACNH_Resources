
void FUN_00341600(float *param_1,float *param_2)

{
  bool bVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  
  if (8 < (long)param_2 - (long)param_1) {
    uVar2 = (ulong)((long)param_2 - (long)param_1) >> 3;
    do {
      uVar5 = *(undefined8 *)param_1;
      pfVar3 = param_1;
      uVar7 = 0;
      do {
        uVar8 = uVar7 << 1 | 1;
        pfVar4 = pfVar3 + (uVar7 + 1) * 2;
        uVar7 = uVar7 * 2 + 2;
        if ((long)uVar7 < (long)uVar2) {
          fVar9 = pfVar4[2];
          if ((*pfVar4 <= fVar9) && ((*pfVar4 < fVar9 || ((int)pfVar4[1] < (int)pfVar4[3])))) {
            pfVar4 = pfVar4 + 2;
            uVar8 = uVar7;
          }
        }
        *(undefined8 *)pfVar3 = *(undefined8 *)pfVar4;
        pfVar3 = pfVar4;
        uVar7 = uVar8;
      } while ((long)uVar8 <= (long)(uVar2 - 2 >> 1));
      param_2 = param_2 + -2;
      if (pfVar4 == param_2) {
        *(undefined8 *)pfVar4 = uVar5;
      }
      else {
        *(undefined8 *)pfVar4 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar5;
        uVar7 = (long)pfVar4 + (8 - (long)param_1);
        if (8 < (long)uVar7) {
          fVar9 = *pfVar4;
          uVar8 = (uVar7 >> 3) - 2;
          uVar7 = uVar8 >> 1;
          pfVar3 = param_1 + uVar7 * 2;
          if (*pfVar3 <= fVar9) {
            if (fVar9 <= *pfVar3) {
              fVar6 = pfVar4[1];
              if ((int)fVar6 <= (int)pfVar3[1]) goto LAB_00341618;
            }
            else {
              fVar6 = pfVar4[1];
            }
            *(undefined8 *)pfVar4 = *(undefined8 *)pfVar3;
            if (uVar8 < 2) {
LAB_00341724:
              pfVar4 = pfVar3;
            }
            else {
              do {
                uVar8 = uVar7 - 1;
                uVar7 = uVar8 >> 1;
                pfVar4 = param_1 + uVar7 * 2;
                if ((fVar9 < *pfVar4) || ((fVar9 <= *pfVar4 && ((int)fVar6 <= (int)pfVar4[1]))))
                goto LAB_00341724;
                *(undefined8 *)pfVar3 = *(undefined8 *)pfVar4;
                pfVar3 = pfVar4;
              } while (1 < uVar8);
            }
            *pfVar4 = fVar9;
            pfVar4[1] = fVar6;
          }
        }
      }
LAB_00341618:
      bVar1 = 2 < (long)uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  return;
}

