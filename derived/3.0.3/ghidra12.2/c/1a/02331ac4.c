
void FUN_02331ac4(long param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = *(float *)(param_1 + 0x338);
  if (*(char *)(param_1 + 0x334) == '\0') {
    if (0.0 <= fVar3) {
      if (fVar3 <= 0.0) goto LAB_02331b74;
      fVar6 = fVar3 + -0.1;
      bVar1 = false;
      bVar2 = false;
      if (fVar6 <= fVar3) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar6)) {
          bVar1 = fVar6 == 0.0;
          bVar2 = 0.0 <= fVar6;
        }
      }
      fVar3 = 0.0;
      if (bVar2 && !bVar1) {
        fVar3 = fVar6;
      }
    }
    else {
      fVar6 = fVar3 + 0.1;
      bVar1 = false;
      bVar2 = false;
      if (fVar3 <= fVar6) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar6)) {
          bVar1 = fVar6 < 0.0;
          bVar2 = false;
        }
      }
      fVar3 = 0.0;
      if (bVar1 != bVar2) {
        fVar3 = fVar6;
      }
    }
LAB_02331b70:
    *(float *)(param_1 + 0x338) = fVar3;
  }
  else {
    if (fVar3 < 1.0) {
      fVar6 = fVar3 + 0.1;
      bVar1 = false;
      bVar2 = false;
      if (fVar3 <= fVar6) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar6)) {
          bVar1 = fVar6 < 1.0;
          bVar2 = false;
        }
      }
      fVar3 = 1.0;
      if (bVar1 != bVar2) {
        fVar3 = fVar6;
      }
      goto LAB_02331b70;
    }
    if (1.0 < fVar3) {
      fVar6 = fVar3 + -0.1;
      bVar1 = false;
      bVar2 = false;
      if (fVar6 <= fVar3) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar6)) {
          bVar1 = fVar6 == 1.0;
          bVar2 = 1.0 <= fVar6;
        }
      }
      fVar3 = 1.0;
      if (bVar2 && !bVar1) {
        fVar3 = fVar6;
      }
      goto LAB_02331b70;
    }
  }
LAB_02331b74:
  if (fVar3 == 1.0) {
    fVar4 = *(float *)(param_1 + 0x310);
    *(float *)(param_1 + 0x31c) = fVar4;
    fVar5 = *(float *)(param_1 + 0x314);
    fVar3 = *(float *)(param_1 + 0x318);
    fVar8 = *(float *)(param_1 + 0x278);
    fVar6 = *(float *)(param_1 + 0x27c);
    fVar7 = *(float *)(param_1 + 0x280);
    *(float *)(param_1 + 800) = fVar5;
  }
  else {
    if (fVar3 == 0.0) {
      fVar8 = *(float *)(param_1 + 0x278);
      *(float *)(param_1 + 0x31c) = fVar8;
      fVar5 = *(float *)(param_1 + 0x27c);
      fVar7 = *(float *)(param_1 + 0x280);
      *(float *)(param_1 + 800) = fVar5;
      *(float *)(param_1 + 0x324) = fVar7;
      fVar3 = fVar7;
      fVar6 = fVar5;
      fVar4 = fVar8;
      goto LAB_02331bd0;
    }
    fVar8 = *(float *)(param_1 + 0x278);
    fVar7 = *(float *)(param_1 + 0x280);
    fVar6 = *(float *)(param_1 + 0x27c);
    fVar5 = fVar3 * 0.0 + fVar6;
    fVar4 = fVar8 + fVar3 * (*(float *)(param_1 + 0x310) - fVar8);
    fVar3 = fVar7 + fVar3 * (*(float *)(param_1 + 0x318) - fVar7);
    *(float *)(param_1 + 800) = fVar5;
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(float *)(param_1 + 0x324) = fVar3;
LAB_02331bd0:
  *(float *)(param_1 + 0x328) = fVar8 - fVar4;
  *(float *)(param_1 + 0x32c) = fVar6 - fVar5;
  *(float *)(param_1 + 0x330) = fVar7 - fVar3;
  return;
}

