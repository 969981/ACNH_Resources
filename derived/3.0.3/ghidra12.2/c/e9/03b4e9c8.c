
void FUN_03b4e9c8(int *param_1,float *param_2,float *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = *param_3;
  bVar3 = false;
  bVar4 = true;
  if (-1.0 <= fVar8) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar8)) {
      bVar3 = fVar8 == 1.0;
      bVar4 = 1.0 <= fVar8;
    }
  }
  if (bVar4 && !bVar3) {
    return;
  }
  fVar8 = param_3[1];
  bVar3 = false;
  bVar4 = true;
  if (-1.0 <= fVar8) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar8)) {
      bVar3 = fVar8 == 1.0;
      bVar4 = 1.0 <= fVar8;
    }
  }
  if (bVar4 && !bVar3) {
    return;
  }
  *param_1 = 0;
  *param_2 = 0.0;
  if (0 < param_4) {
    return;
  }
  lVar6 = *(long *)(*(long *)(DAT_05aebb78 + 0x10) + 8);
  if (lVar6 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar6 + 8);
  if (lVar6 == 0) {
    return;
  }
  if (*(long *)(lVar6 + 0x10) == 0) {
    return;
  }
  uVar2 = *(uint *)(lVar6 + 8);
  if (uVar2 == 0) {
    return;
  }
  if (-1 < (int)*(uint *)(lVar6 + 0x18)) {
    param_5 = *(uint *)(lVar6 + 0x18);
  }
  if ((int)uVar2 <= (int)param_5) {
    param_5 = 0;
  }
  if (uVar2 <= param_5) {
    return;
  }
  plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + (long)(int)param_5 * 8);
  if (plVar7 == (long *)0x0) {
    return;
  }
  if ((DAT_05aec018 == '\0') && (uVar5 = (**(code **)(*plVar7 + 0x28))(plVar7), (uVar5 & 1) == 0)) {
    fVar9 = *param_3;
    fVar10 = 1.0737418e+09;
    if (fVar9 <= 1.0) {
      fVar10 = fVar9 * 1.0737418e+09;
    }
    fVar8 = -1.0737418e+09;
    if (-1.0 <= fVar9) {
      fVar8 = fVar10;
    }
    goto LAB_03b4ecb4;
  }
  fVar8 = *param_3;
  fVar10 = param_3[1];
  if ((fVar8 == 0.0) && (fVar10 == 0.0)) {
    *param_1 = 0;
    *param_2 = 1.0;
    return;
  }
  uVar2 = *(uint *)((long)plVar7 + 0x24);
  uVar1 = *(uint *)(plVar7 + 5);
  if (fVar8 <= fVar10) {
    if (fVar8 <= -fVar10) {
      if (fVar8 != 0.0) {
        fVar10 = (-1.0 / fVar8) * fVar10;
      }
      fVar9 = 0.0;
      if (fVar8 != 0.0) {
        fVar9 = -1.0 / fVar8;
      }
      *param_2 = 1.0 - 1.0 / fVar9;
      if (0.0 <= param_3[1]) {
        fVar8 = -1.0737418e+09;
        fVar9 = 1.0737418e+09 - (float)uVar1;
        goto LAB_03b4ec94;
      }
      fVar9 = ((float)uVar2 + -1.0737418e+09) * (fVar10 + 1.0) - (float)uVar2;
    }
    else {
      fVar9 = 0.0;
      if (fVar10 != 0.0) {
        fVar9 = 1.0 / fVar10;
      }
      if (fVar10 != 0.0) {
        fVar8 = fVar8 * (1.0 / fVar10);
      }
      *param_2 = 1.0 - 1.0 / fVar9;
      fVar9 = 4.2949673e+09 - (float)uVar1;
      fVar9 = fVar9 + ((float)uVar1 - fVar9) * (fVar8 + 1.0) * 0.5;
    }
  }
  else if (fVar8 <= -fVar10) {
    fVar11 = 0.0;
    if (fVar10 != 0.0) {
      fVar11 = -1.0 / fVar10;
    }
    fVar9 = (float)uVar2;
    if (fVar10 != 0.0) {
      fVar8 = fVar8 * (-1.0 / fVar10);
    }
    *param_2 = 1.0 - 1.0 / fVar11;
    fVar9 = (fVar9 + fVar9) * (fVar8 + 1.0) * 0.5 - fVar9;
  }
  else {
    if (fVar8 != 0.0) {
      fVar10 = (1.0 / fVar8) * fVar10;
    }
    fVar9 = 0.0;
    if (fVar8 != 0.0) {
      fVar9 = 1.0 / fVar8;
    }
    *param_2 = 1.0 - 1.0 / fVar9;
    if (0.0 <= param_3[1]) {
      fVar8 = 1.0737418e+09;
      fVar9 = (float)uVar1 + -1.0737418e+09;
LAB_03b4ec94:
      fVar9 = fVar9 * fVar10;
    }
    else {
      fVar8 = (float)uVar2;
      fVar9 = (1.0737418e+09 - fVar8) * (fVar10 + 1.0);
    }
    fVar9 = fVar9 + fVar8;
  }
  fVar8 = fVar9 + 4.2949673e+09;
  if (0.0 <= fVar9) {
    fVar8 = fVar9;
  }
LAB_03b4ecb4:
  *param_1 = (int)fVar8;
  return;
}

