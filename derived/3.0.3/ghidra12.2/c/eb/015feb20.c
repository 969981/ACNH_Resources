
void FUN_015feb20(long param_1,undefined8 param_2,long param_3,float *param_4)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
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
  lVar5 = (long)param_4 - param_1 >> 2;
  uVar4 = lVar5 + 1;
  uVar1 = lVar5 + 2;
  pfVar3 = (float *)(param_1 + uVar4 * 8);
  if ((long)uVar1 < param_3) {
    fVar8 = *pfVar3;
    fVar7 = pfVar3[2];
    if ((0.0 <= fVar8) || (0.0 <= fVar7)) {
      if (fVar7 < fVar8) goto LAB_015feb80;
    }
    else if (fVar8 < fVar7) {
LAB_015feb80:
      pfVar3 = pfVar3 + 2;
      uVar4 = uVar1;
    }
  }
  fVar8 = *pfVar3;
  fVar7 = *param_4;
  if ((0.0 <= fVar8) || (0.0 <= fVar7)) {
    if (fVar8 <= fVar7) goto LAB_015febb4;
  }
  else if (fVar7 <= fVar8) {
LAB_015febb4:
    fVar8 = param_4[1];
    *(undefined8 *)param_4 = *(undefined8 *)pfVar3;
    if ((long)uVar2 < (long)uVar4) {
LAB_015febc8:
      pfVar6 = pfVar3;
    }
    else if (fVar7 < 0.0) {
      do {
        lVar5 = uVar4 * 2;
        uVar4 = uVar4 << 1 | 1;
        uVar1 = lVar5 + 2;
        pfVar6 = (float *)(param_1 + uVar4 * 8);
        if ((long)uVar1 < param_3) {
          fVar10 = *pfVar6;
          fVar9 = pfVar6[2];
          if ((0.0 <= fVar10) || (0.0 <= fVar9)) {
            if (fVar9 < fVar10) goto LAB_015feccc;
          }
          else if (fVar10 < fVar9) {
LAB_015feccc:
            uVar4 = uVar1;
            pfVar6 = pfVar6 + 2;
          }
        }
        fVar9 = *pfVar6;
        if (0.0 <= fVar9) {
          if (fVar7 < fVar9) goto LAB_015febc8;
        }
        else if (fVar9 < fVar7) goto LAB_015febc8;
        *(undefined8 *)pfVar3 = *(undefined8 *)pfVar6;
        pfVar3 = pfVar6;
      } while ((long)uVar4 <= (long)uVar2);
    }
    else {
      do {
        lVar5 = uVar4 * 2;
        uVar4 = uVar4 << 1 | 1;
        uVar1 = lVar5 + 2;
        pfVar6 = (float *)(param_1 + uVar4 * 8);
        if ((long)uVar1 < param_3) {
          fVar10 = *pfVar6;
          fVar9 = pfVar6[2];
          if ((0.0 <= fVar10) || (0.0 <= fVar9)) {
            if (fVar9 < fVar10) goto LAB_015fec30;
          }
          else if (fVar10 < fVar9) {
LAB_015fec30:
            uVar4 = uVar1;
            pfVar6 = pfVar6 + 2;
          }
        }
        if (fVar7 < *pfVar6) goto LAB_015febc8;
        *(undefined8 *)pfVar3 = *(undefined8 *)pfVar6;
        pfVar3 = pfVar6;
      } while ((long)uVar4 <= (long)uVar2);
    }
    *pfVar6 = fVar7;
    pfVar6[1] = fVar8;
    return;
  }
  return;
}

