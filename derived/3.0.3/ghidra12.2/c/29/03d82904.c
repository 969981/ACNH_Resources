
void FUN_03d82904(long param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_1 + 0x240);
  fVar7 = *(float *)(param_1 + 0x244);
  if (fVar6 == fVar7) {
    fVar3 = *(float *)(param_1 + 0x248);
    fVar4 = fVar7;
  }
  else {
    FUN_03d82710(param_1);
    fVar3 = *(float *)(param_1 + 0x248);
    if (fVar3 == *(float *)(param_1 + 0x244)) {
      *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 600);
    }
    *(float *)(param_1 + 0x244) = *(float *)(param_1 + 0x240);
    fVar4 = *(float *)(param_1 + 0x240);
    if (fVar6 < fVar7) goto LAB_03d82a34;
  }
  if ((fVar4 != fVar3 && *(char *)(param_1 + 0x270) != '\0') && *(char *)(param_1 + 0x271) != '\0')
  {
    fVar5 = *(float *)(param_1 + 0x254);
    if (fVar5 <= 0.0) {
      fVar7 = fVar3 - fVar4;
      fVar6 = -fVar7;
      if (0.0 <= fVar7) {
        fVar6 = fVar7;
      }
      fVar6 = fVar6 * *(float *)(param_1 + 0x250);
      fVar7 = *(float *)(param_1 + 0x24c);
      if (*(float *)(param_1 + 0x24c) <= fVar6) {
        fVar7 = fVar6;
      }
      if (fVar4 <= fVar3) {
        if (fVar3 <= fVar4) goto LAB_03d82a34;
        fVar7 = fVar3 - fVar7;
        bVar1 = false;
        bVar2 = false;
        if (fVar7 <= fVar3) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar7) && !NAN(fVar4)) {
            bVar1 = fVar7 == fVar4;
            bVar2 = fVar4 <= fVar7;
          }
        }
        if (bVar2 && !bVar1) {
          fVar4 = fVar7;
        }
      }
      else {
        fVar7 = fVar3 + fVar7;
        bVar1 = false;
        bVar2 = false;
        if (fVar3 <= fVar7) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar7) && !NAN(fVar4)) {
            bVar1 = fVar7 < fVar4;
            bVar2 = false;
          }
        }
        if (bVar1 != bVar2) {
          fVar4 = fVar7;
        }
      }
      *(float *)(param_1 + 0x248) = fVar4;
      goto LAB_03d82a34;
    }
    if (0.0 <= fVar5) {
      fVar4 = fVar5 + -1.0;
      bVar1 = false;
      bVar2 = false;
      if (fVar4 <= fVar5) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar4)) {
          bVar1 = fVar4 == 0.0;
          bVar2 = 0.0 <= fVar4;
        }
      }
      fVar3 = 0.0;
      if (bVar2 && !bVar1) {
        fVar3 = fVar4;
      }
    }
    else {
      fVar4 = fVar5 + 1.0;
      bVar1 = false;
      bVar2 = false;
      if (fVar5 <= fVar4) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar4)) {
          bVar1 = fVar4 < 0.0;
          bVar2 = false;
        }
      }
      fVar3 = 0.0;
      if (bVar1 != bVar2) {
        fVar3 = fVar4;
      }
    }
    *(float *)(param_1 + 0x254) = fVar3;
  }
  if (fVar6 == fVar7) {
    return;
  }
LAB_03d82a34:
  FUN_03d82034(param_1);
  return;
}

