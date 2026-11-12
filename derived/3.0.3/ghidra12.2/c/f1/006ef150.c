
undefined8 FUN_006ef150(long param_1,long param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_1 + 0x3c) * *(float *)(param_2 + 0xc) +
          fVar3 * *(float *)(param_1 + 0x38) +
          *(float *)(param_2 + 0x10) * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
  if (fVar4 <= 0.0) {
    return 0;
  }
  fVar6 = *(float *)(param_1 + 0x44) +
          *(float *)(param_1 + 0x3c) * *(float *)(param_2 + 0x18) +
          *(float *)(param_2 + 0x14) * *(float *)(param_1 + 0x38) +
          *(float *)(param_2 + 0x1c) * *(float *)(param_1 + 0x40);
  if (0.0 <= fVar6) {
    return 0;
  }
  fVar6 = fVar4 - fVar6;
  bVar1 = false;
  bVar2 = true;
  if (-1.1920929e-07 <= fVar6) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar6;
    }
  }
  if (!bVar2 || bVar1) {
    return 0;
  }
  fVar4 = fVar4 / fVar6;
  fVar3 = fVar3 + fVar4 * (*(float *)(param_2 + 0x14) - fVar3);
  *param_3 = fVar3;
  fVar6 = *(float *)(param_2 + 0xc) +
          fVar4 * (*(float *)(param_2 + 0x18) - *(float *)(param_2 + 0xc));
  param_3[1] = fVar6;
  fVar5 = *(float *)(param_2 + 0x10) +
          fVar4 * (*(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x10));
  param_3[2] = fVar5;
  fVar7 = *(float *)(param_1 + 0x38);
  fVar4 = -fVar7;
  if (0.0 <= fVar7) {
    fVar4 = fVar7;
  }
  if (0.008 <= fVar4) {
    fVar7 = *(float *)(param_1 + 0xc);
    fVar4 = *(float *)(param_1 + 0x10);
    fVar8 = *(float *)(param_1 + 0x18);
    fVar9 = *(float *)(param_1 + 0x1c);
    fVar10 = -((fVar9 - fVar4) * (fVar6 - fVar7)) + (fVar5 - fVar4) * (fVar8 - fVar7);
    if (fVar10 <= 0.002) {
      fVar11 = *(float *)(param_1 + 0x24);
      fVar12 = *(float *)(param_1 + 0x28);
      fVar13 = -((fVar4 - fVar12) * (fVar6 - fVar11)) + (fVar5 - fVar12) * (fVar7 - fVar11);
      bVar1 = false;
      bVar2 = true;
      if (-((fVar12 - fVar9) * (fVar6 - fVar8)) + (fVar5 - fVar9) * (fVar11 - fVar8) <= 0.002) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar13)) {
          bVar1 = fVar13 == 0.002;
          bVar2 = 0.002 <= fVar13;
        }
      }
      if (!bVar2 || bVar1) goto LAB_006ef210;
    }
    if (fVar10 < -0.002) {
      return 0;
    }
    fVar10 = *(float *)(param_1 + 0x24);
    fVar11 = *(float *)(param_1 + 0x28);
    if (-((fVar11 - fVar9) * (fVar6 - fVar8)) + (fVar5 - fVar9) * (fVar10 - fVar8) < -0.002) {
      return 0;
    }
    if (-((fVar4 - fVar11) * (fVar6 - fVar10)) + (fVar5 - fVar11) * (fVar7 - fVar10) < -0.002) {
      return 0;
    }
  }
LAB_006ef210:
  fVar7 = *(float *)(param_1 + 0x3c);
  fVar4 = -fVar7;
  if (0.0 <= fVar7) {
    fVar4 = fVar7;
  }
  if (0.008 <= fVar4) {
    fVar4 = *(float *)(param_1 + 8);
    fVar8 = *(float *)(param_1 + 0x1c);
    fVar7 = *(float *)(param_1 + 0x10);
    fVar9 = *(float *)(param_1 + 0x14);
    fVar10 = -((fVar9 - fVar4) * (fVar5 - fVar7)) + (fVar3 - fVar4) * (fVar8 - fVar7);
    if (fVar10 <= 0.002) {
      fVar11 = *(float *)(param_1 + 0x28);
      fVar12 = *(float *)(param_1 + 0x20);
      fVar13 = -((fVar4 - fVar12) * (fVar5 - fVar11)) + (fVar3 - fVar12) * (fVar7 - fVar11);
      bVar1 = false;
      bVar2 = true;
      if (-((fVar12 - fVar9) * (fVar5 - fVar8)) + (fVar3 - fVar9) * (fVar11 - fVar8) <= 0.002) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar13)) {
          bVar1 = fVar13 == 0.002;
          bVar2 = 0.002 <= fVar13;
        }
      }
      if (!bVar2 || bVar1) goto LAB_006ef234;
    }
    if (fVar10 < -0.002) {
      return 0;
    }
    fVar10 = *(float *)(param_1 + 0x28);
    fVar11 = *(float *)(param_1 + 0x20);
    if (-((fVar11 - fVar9) * (fVar5 - fVar8)) + (fVar3 - fVar9) * (fVar10 - fVar8) < -0.002) {
      return 0;
    }
    if (-((fVar4 - fVar11) * (fVar5 - fVar10)) + (fVar3 - fVar11) * (fVar7 - fVar10) < -0.002) {
      return 0;
    }
  }
LAB_006ef234:
  fVar5 = *(float *)(param_1 + 0x40);
  fVar4 = -fVar5;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  if (0.008 <= fVar4) {
    fVar5 = *(float *)(param_1 + 8);
    fVar4 = *(float *)(param_1 + 0xc);
    fVar7 = *(float *)(param_1 + 0x14);
    fVar8 = *(float *)(param_1 + 0x18);
    fVar9 = -((fVar8 - fVar4) * (fVar3 - fVar5)) + (fVar6 - fVar4) * (fVar7 - fVar5);
    if (fVar9 <= 0.002) {
      fVar10 = *(float *)(param_1 + 0x20);
      fVar11 = *(float *)(param_1 + 0x24);
      fVar12 = -((fVar4 - fVar11) * (fVar3 - fVar10)) + (fVar6 - fVar11) * (fVar5 - fVar10);
      bVar1 = false;
      bVar2 = true;
      if (-((fVar11 - fVar8) * (fVar3 - fVar7)) + (fVar6 - fVar8) * (fVar10 - fVar7) <= 0.002) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar12)) {
          bVar1 = fVar12 == 0.002;
          bVar2 = 0.002 <= fVar12;
        }
      }
      if (!bVar2 || bVar1) {
        return 1;
      }
    }
    if (fVar9 < -0.002) {
      return 0;
    }
    fVar9 = *(float *)(param_1 + 0x20);
    fVar10 = *(float *)(param_1 + 0x24);
    if (-((fVar10 - fVar8) * (fVar3 - fVar7)) + (fVar6 - fVar8) * (fVar9 - fVar7) < -0.002) {
      return 0;
    }
    if (-((fVar4 - fVar10) * (fVar3 - fVar9)) + (fVar6 - fVar10) * (fVar5 - fVar9) < -0.002) {
      return 0;
    }
  }
  return 1;
}

