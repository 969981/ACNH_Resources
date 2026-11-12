
void FUN_008cb1ac(float *param_1,float *param_2,float *param_3)

{
  uint *puVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar7 = *param_1;
  fVar6 = param_1[1];
  fVar10 = param_2[1];
  fVar9 = fVar7 - *param_2;
  fVar8 = param_1[2];
  fVar12 = param_1[3];
  fVar11 = fVar8 - param_2[2];
  param_1[0x25] = -fVar9;
  param_1[0x26] = -(fVar6 - fVar10);
  fVar10 = fVar11 * fVar11 + fVar9 * fVar9;
  param_1[0x27] = -fVar11;
  if (fVar10 <= fVar12 * fVar12) {
    fVar7 = param_1[4];
    param_1[0x1e] = 0.0;
    param_1[0x1f] = 0.0;
    param_1[0x20] = 0.0;
    if (fVar7 != 0.0) {
      fVar9 = 0.0 - fVar7;
      fVar8 = -fVar9;
      if (0.0 <= fVar9) {
        fVar8 = fVar9;
      }
      if (fVar8 <= 0.0) {
        param_1[4] = 0.0;
      }
      else {
        fVar10 = fVar9 * 0.2;
        fVar8 = 0.0;
        if (fVar9 <= 0.0) {
          fVar8 = -0.25;
        }
        fVar11 = 0.25;
        if (fVar9 <= 0.0) {
          fVar11 = -0.0;
        }
        if (fVar10 <= fVar11) {
          fVar11 = fVar10;
        }
        if (fVar8 <= fVar10) {
          fVar8 = fVar11;
        }
        param_1[4] = fVar7 + fVar8;
      }
    }
  }
  else {
    fVar14 = 0.0;
    fVar16 = SQRT(fVar9 * fVar9 + 0.0 + fVar11 * fVar11);
    if (0.0 < fVar16) {
      fVar16 = fVar12 / fVar16;
      fVar9 = fVar9 * fVar16;
      fVar14 = fVar16 * 0.0;
      fVar11 = fVar11 * fVar16;
    }
    fVar16 = *param_2;
    *param_1 = fVar9 + fVar16;
    param_1[1] = fVar14 + param_2[1];
    fVar10 = (SQRT(fVar10) - fVar12) / 5.0;
    fVar14 = param_2[2];
    fVar12 = param_1[4];
    param_1[1] = fVar6;
    param_1[2] = fVar11 + fVar14;
    if (fVar12 != fVar10) {
      fVar15 = fVar10 - fVar12;
      fVar13 = -fVar15;
      if (0.0 <= fVar15) {
        fVar13 = fVar15;
      }
      if (0.0 < fVar13) {
        fVar13 = fVar15 * 0.1;
        fVar10 = 0.0;
        if (fVar15 <= 0.0) {
          fVar10 = -0.5;
        }
        fVar17 = 0.5;
        if (fVar15 <= 0.0) {
          fVar17 = -0.0;
        }
        if (fVar13 <= fVar17) {
          fVar17 = fVar13;
        }
        if (fVar10 <= fVar13) {
          fVar10 = fVar17;
        }
        fVar10 = fVar12 + fVar10;
      }
      param_1[4] = fVar10;
    }
    param_1[0x1e] = (fVar9 + fVar16) - fVar7;
    param_1[0x1f] = fVar6 - fVar6;
    param_1[0x20] = (fVar11 + fVar14) - fVar8;
  }
  if (((*(uint *)(*(long *)(param_1 + 0x2c) + 0x248) >> 7 & 1) == 0) &&
     (*(char *)((long)param_1 + 0xae) == '\0')) {
    fVar7 = 2.0;
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      fVar7 = 2.0;
      if ((*puVar1 & 2) != 0) {
        fVar7 = 1.0;
      }
    }
    fVar8 = param_2[1];
    if (fVar6 != fVar8) {
      fVar10 = fVar8 - fVar6;
      fVar9 = -fVar10;
      if (0.0 <= fVar10) {
        fVar9 = fVar10;
      }
      if (fVar9 <= 0.5) {
        param_1[1] = fVar8;
      }
      else {
        fVar11 = -fVar7;
        fVar9 = fVar10 * 0.25;
        fVar8 = 0.5;
        if (fVar10 <= 0.0) {
          fVar7 = -0.5;
          fVar8 = fVar11;
        }
        if (fVar9 <= fVar7) {
          fVar7 = fVar9;
        }
        if (fVar8 <= fVar9) {
          fVar8 = fVar7;
        }
        param_1[1] = fVar6 + fVar8;
      }
    }
  }
  else {
    uVar3 = *(undefined8 *)param_2;
    param_1[2] = param_2[2];
    *(undefined8 *)param_1 = uVar3;
  }
  fVar6 = param_1[2];
  *(undefined1 *)((long)param_1 + 0xae) = 0;
  *(undefined8 *)param_2 = *(undefined8 *)param_1;
  param_2[2] = fVar6;
  fVar6 = param_1[0x15];
  fVar7 = *param_2;
  fVar9 = param_2[1];
  *param_2 = fVar7 + fVar6;
  fVar8 = param_1[0x16];
  fVar10 = param_2[2];
  param_2[1] = fVar9 + fVar8;
  fVar11 = param_1[0x17];
  param_2[2] = fVar10 + fVar11;
  fVar6 = fVar7 + fVar6 + param_1[0x18];
  *param_2 = fVar6;
  fVar7 = fVar9 + fVar8 + param_1[0x19];
  param_2[1] = fVar7;
  fVar8 = fVar10 + fVar11 + param_1[0x1a];
  param_2[2] = fVar8;
  fVar6 = fVar6 + param_1[0x1b];
  *param_2 = fVar6;
  fVar7 = fVar7 + param_1[0x1c];
  param_2[1] = fVar7;
  fVar8 = fVar8 + param_1[0x1d];
  param_2[2] = fVar8;
  if (*(char *)(param_1 + 0x2b) != '\0') {
    if (*(char *)((long)param_1 + 0xad) == '\0') {
      lVar4 = *(long *)(param_1 + 0x2c);
      *param_2 = *(float *)(lVar4 + 0x2a8);
      fVar6 = *(float *)(lVar4 + 0x2ac);
      pfVar5 = (float *)(lVar4 + 0x2b0);
    }
    else {
      *param_2 = fVar6 - *param_3;
      param_2[1] = fVar7 - param_3[1];
      param_2[2] = fVar8 - param_3[2];
      FUN_008d9418(param_1,param_2,0,0);
      *param_2 = *param_2 + *param_3;
      param_2[1] = param_2[1] + param_3[1];
      param_2[2] = param_2[2] + param_3[2];
      pfVar5 = param_1 + 0x2a;
      if (NAN(param_1[0x28])) {
        return;
      }
      if (NAN(param_1[0x29])) {
        return;
      }
      if (NAN(*pfVar5)) {
        return;
      }
      *param_2 = param_1[0x28];
      fVar6 = param_1[0x29];
    }
    param_2[1] = fVar6;
    param_2[2] = *pfVar5;
  }
  return;
}

