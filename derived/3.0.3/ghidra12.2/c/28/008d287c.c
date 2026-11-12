
void FUN_008d287c(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x30950) != *(int *)(param_1 + 0x30954)) {
    return;
  }
  fVar2 = *(float *)(param_2 + 0xa0);
  fVar1 = *(float *)(param_2 + 0xa4);
  fVar4 = 0.0;
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (DAT_04ced028 < fVar3) {
    if (DAT_04ced02c <= fVar3) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = (fVar3 - DAT_04ced028) / (DAT_04ced02c - DAT_04ced028) + 0.0;
    }
  }
  fVar1 = -fVar1;
  if (0.0 < fVar3) {
    fVar2 = fVar2 * (fVar4 / fVar3);
    fVar1 = (fVar4 / fVar3) * fVar1;
  }
  fVar3 = -fVar2;
  if (0.0 <= fVar2) {
    fVar3 = fVar2;
  }
  if (fVar3 <= 0.0) {
    fVar2 = *(float *)(param_1 + 0x315d8) * 0.8;
LAB_008d2938:
    *(float *)(param_1 + 0x315d8) = fVar2;
  }
  else {
    fVar2 = fVar2 + fVar2;
    fVar3 = *(float *)(param_1 + 0x315d8);
    if (fVar3 != fVar2) {
      fVar5 = fVar2 - fVar3;
      fVar4 = -fVar5;
      if (0.0 <= fVar5) {
        fVar4 = fVar5;
      }
      if (0.0 < fVar4) {
        fVar4 = fVar5 * 0.5;
        fVar2 = 0.0;
        if (fVar5 <= 0.0) {
          fVar2 = -2.0;
        }
        fVar6 = 2.0;
        if (fVar5 <= 0.0) {
          fVar6 = -0.0;
        }
        if (fVar4 <= fVar6) {
          fVar6 = fVar4;
        }
        if (fVar2 <= fVar4) {
          fVar2 = fVar6;
        }
        fVar2 = fVar3 + fVar2;
      }
      goto LAB_008d2938;
    }
    fVar2 = fVar3;
  }
  fVar3 = -fVar1;
  if (0.0 <= fVar1) {
    fVar3 = fVar1;
  }
  *(int *)(param_1 + 0x315d4) = *(int *)(param_1 + 0x315d4) + (int)(long)(fVar2 * 11930465.0);
  if (fVar3 <= 0.0) {
    fVar1 = *(float *)(param_1 + 0x315dc) * 0.8;
LAB_008d29a8:
    *(float *)(param_1 + 0x315dc) = fVar1;
  }
  else {
    fVar1 = fVar1 * 0.03;
    fVar2 = *(float *)(param_1 + 0x315dc);
    if (fVar2 != fVar1) {
      fVar4 = fVar1 - fVar2;
      fVar3 = -fVar4;
      if (0.0 <= fVar4) {
        fVar3 = fVar4;
      }
      if (0.0 < fVar3) {
        fVar3 = fVar4 * 0.5;
        fVar1 = 0.0;
        if (fVar4 <= 0.0) {
          fVar1 = -2.0;
        }
        fVar5 = 2.0;
        if (fVar4 <= 0.0) {
          fVar5 = -0.0;
        }
        if (fVar3 <= fVar5) {
          fVar5 = fVar3;
        }
        if (fVar1 <= fVar3) {
          fVar1 = fVar5;
        }
        fVar1 = fVar2 + fVar1;
      }
      goto LAB_008d29a8;
    }
    fVar1 = fVar2;
  }
  if ((-1.1920929e-07 <= fVar1) && (fVar1 <= 1.1920929e-07)) {
    return;
  }
  if (fVar1 <= 0.0) {
    fVar2 = *(float *)(param_1 + 0x31760);
    if (fVar2 == 0.0) {
      return;
    }
    fVar3 = 0.0;
    fVar5 = 0.0 - fVar2;
    fVar4 = -fVar5;
    if (0.0 <= fVar5) {
      fVar4 = fVar5;
    }
    if (fVar4 <= 0.0) goto LAB_008d2a88;
    fVar4 = -fVar1;
    fVar6 = fVar5 * 0.25;
    fVar3 = 0.0;
    if (fVar5 <= 0.0) {
      fVar4 = -0.0;
      fVar3 = fVar1;
    }
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
    if (fVar3 <= fVar6) {
      fVar3 = fVar4;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x31760);
    fVar3 = 1.0;
    if (fVar2 == 1.0) {
      return;
    }
    fVar5 = 1.0 - fVar2;
    fVar4 = -fVar5;
    if (0.0 <= fVar5) {
      fVar4 = fVar5;
    }
    if (fVar4 <= 0.0) goto LAB_008d2a88;
    fVar4 = fVar5 * 0.25;
    fVar3 = 0.0;
    if (fVar5 <= 0.0) {
      fVar3 = -fVar1;
    }
    if (fVar5 <= 0.0) {
      fVar1 = -0.0;
    }
    if (fVar4 <= fVar1) {
      fVar1 = fVar4;
    }
    if (fVar3 <= fVar4) {
      fVar3 = fVar1;
    }
  }
  fVar3 = fVar2 + fVar3;
LAB_008d2a88:
  *(float *)(param_1 + 0x31760) = fVar3;
  return;
}

