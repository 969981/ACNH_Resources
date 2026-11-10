
void FUN_003437b0(long param_1,undefined8 param_2,long param_3,float *param_4)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_3 < 2) {
    return;
  }
  uVar2 = param_3 - 2U >> 1;
  if ((long)uVar2 < (long)param_4 - param_1 >> 3) {
    return;
  }
  lVar6 = (long)param_4 - param_1 >> 2;
  uVar5 = lVar6 + 1;
  uVar1 = lVar6 + 2;
  pfVar3 = (float *)(param_1 + uVar5 * 8);
  if ((long)uVar1 < param_3) {
    fVar8 = *pfVar3;
    fVar7 = pfVar3[2];
    if ((0.0 <= fVar8) || (0.0 <= fVar7)) {
      if (fVar8 < fVar7) goto LAB_00343810;
    }
    else if (fVar7 < fVar8) {
LAB_00343810:
      pfVar3 = pfVar3 + 2;
      uVar5 = uVar1;
    }
  }
  fVar8 = *pfVar3;
  fVar7 = *param_4;
  if ((0.0 <= fVar8) || (0.0 <= fVar7)) {
    if (fVar7 <= fVar8) goto LAB_00343844;
  }
  else if (fVar8 <= fVar7) {
LAB_00343844:
    fVar8 = param_4[1];
    *(undefined8 *)param_4 = *(undefined8 *)pfVar3;
    if ((long)uVar5 <= (long)uVar2) {
      pfVar4 = pfVar3;
      if (fVar7 < 0.0) {
        do {
          lVar6 = uVar5 * 2;
          uVar5 = uVar5 << 1 | 1;
          uVar1 = lVar6 + 2;
          pfVar3 = (float *)(param_1 + uVar5 * 8);
          if ((long)uVar1 < param_3) {
            fVar10 = *pfVar3;
            fVar9 = pfVar3[2];
            if ((0.0 <= fVar10) || (0.0 <= fVar9)) {
              if (fVar10 < fVar9) goto LAB_0034395c;
            }
            else if (fVar9 < fVar10) {
LAB_0034395c:
              uVar5 = uVar1;
              pfVar3 = pfVar3 + 2;
            }
          }
          fVar9 = *pfVar3;
          if (0.0 <= fVar9) {
            if (fVar9 < fVar7) goto LAB_00343978;
          }
          else if (fVar7 < fVar9) goto LAB_00343978;
          *(undefined8 *)pfVar4 = *(undefined8 *)pfVar3;
          pfVar4 = pfVar3;
        } while ((long)uVar5 <= (long)uVar2);
      }
      else {
        do {
          lVar6 = uVar5 * 2;
          uVar5 = uVar5 << 1 | 1;
          uVar1 = lVar6 + 2;
          pfVar3 = (float *)(param_1 + uVar5 * 8);
          if ((long)uVar1 < param_3) {
            fVar10 = *pfVar3;
            fVar9 = pfVar3[2];
            if ((0.0 <= fVar10) || (0.0 <= fVar9)) {
              if (fVar10 < fVar9) goto LAB_003438c0;
            }
            else if (fVar9 < fVar10) {
LAB_003438c0:
              uVar5 = uVar1;
              pfVar3 = pfVar3 + 2;
            }
          }
          if (*pfVar3 < fVar7) {
LAB_00343978:
            *pfVar4 = fVar7;
            pfVar4[1] = fVar8;
            return;
          }
          *(undefined8 *)pfVar4 = *(undefined8 *)pfVar3;
          pfVar4 = pfVar3;
        } while ((long)uVar5 <= (long)uVar2);
      }
    }
    *pfVar3 = fVar7;
    pfVar3[1] = fVar8;
    return;
  }
  return;
}

