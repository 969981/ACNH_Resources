
void FUN_003414b0(long param_1,undefined8 param_2,long param_3,float *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  
  if (1 < param_3) {
    uVar3 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 3 <= (long)uVar3) {
      lVar7 = (long)param_4 - param_1 >> 2;
      uVar5 = lVar7 + 1;
      uVar1 = lVar7 + 2;
      pfVar4 = (float *)(param_1 + uVar5 * 8);
      if ((long)uVar1 < param_3) {
        fVar9 = pfVar4[2];
        if (*pfVar4 <= fVar9) {
          if (fVar9 <= *pfVar4) {
            if ((int)pfVar4[3] <= (int)pfVar4[1]) goto LAB_00341510;
          }
          pfVar4 = pfVar4 + 2;
          uVar5 = uVar1;
        }
      }
LAB_00341510:
      fVar9 = *param_4;
      if (*pfVar4 <= fVar9) {
        if (*pfVar4 < fVar9) {
          return;
        }
        fVar6 = param_4[1];
        if ((int)pfVar4[1] < (int)fVar6) {
          return;
        }
      }
      else {
        fVar6 = param_4[1];
      }
      *(undefined8 *)param_4 = *(undefined8 *)pfVar4;
      if ((long)uVar3 < (long)uVar5) {
        *pfVar4 = fVar9;
        pfVar4[1] = fVar6;
        return;
      }
      do {
        uVar2 = uVar5 << 1 | 1;
        uVar1 = uVar5 * 2 + 2;
        pfVar8 = (float *)(param_1 + uVar2 * 8);
        uVar5 = uVar2;
        if ((long)uVar1 < param_3) {
          fVar10 = pfVar8[2];
          if ((*pfVar8 <= fVar10) && ((*pfVar8 < fVar10 || ((int)pfVar8[1] < (int)pfVar8[3])))) {
            uVar5 = uVar1;
            pfVar8 = pfVar8 + 2;
          }
        }
        if (*pfVar8 <= fVar9) {
          if (*pfVar8 < fVar9) break;
          if ((int)pfVar8[1] < (int)fVar6) {
            *pfVar4 = fVar9;
            pfVar4[1] = fVar6;
            return;
          }
        }
        *(undefined8 *)pfVar4 = *(undefined8 *)pfVar8;
        pfVar4 = pfVar8;
      } while ((long)uVar5 <= (long)uVar3);
      *pfVar4 = fVar9;
      pfVar4[1] = fVar6;
      return;
    }
  }
  return;
}

