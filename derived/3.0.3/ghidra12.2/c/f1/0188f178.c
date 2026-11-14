
void FUN_0188f178(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *(float *)(param_1 + 0x4a4);
  fVar8 = *(float *)(*(long *)(param_1 + 0x300) + 0x27c);
  if (*(float *)(param_1 + 0x418) <= fVar8) {
    bVar4 = false;
    if ((0.0 < fVar7) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x414)) && !NAN(fVar8))) {
      bVar4 = *(float *)(param_1 + 0x414) < fVar8;
    }
    if (bVar4) {
      if (0.0 <= fVar7) {
        fVar8 = fVar7 - *(float *)(param_1 + 0x424);
        bVar4 = false;
        bVar5 = false;
        if (fVar8 <= fVar7) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar8)) {
            bVar4 = fVar8 == 0.0;
            bVar5 = 0.0 <= fVar8;
          }
        }
        fVar7 = 0.0;
        if (bVar5 && !bVar4) {
          fVar7 = fVar8;
        }
      }
      else {
        fVar8 = fVar7 + *(float *)(param_1 + 0x424);
        bVar4 = false;
        bVar5 = false;
        if (fVar7 <= fVar8) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar8)) {
            bVar4 = fVar8 < 0.0;
            bVar5 = false;
          }
        }
        fVar7 = 0.0;
        if (bVar4 != bVar5) {
          fVar7 = fVar8;
        }
      }
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x41c);
    if (fVar8 <= fVar7) {
      if (fVar8 < fVar7) {
        fVar9 = fVar7 - *(float *)(param_1 + 0x424);
        bVar4 = false;
        bVar5 = false;
        if (fVar9 <= fVar7) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar9) && !NAN(fVar8)) {
            bVar4 = fVar9 == fVar8;
            bVar5 = fVar8 <= fVar9;
          }
        }
        if (bVar5 && !bVar4) {
          fVar8 = fVar9;
        }
        fVar7 = fVar8;
      }
    }
    else {
      fVar9 = fVar7 + *(float *)(param_1 + 0x424);
      bVar4 = false;
      bVar5 = false;
      if (fVar7 <= fVar9) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar9) && !NAN(fVar8)) {
          bVar4 = fVar9 < fVar8;
          bVar5 = false;
        }
      }
      if (bVar4 != bVar5) {
        fVar8 = fVar9;
      }
      fVar7 = fVar8;
    }
  }
  *(float *)(param_1 + 0x4a4) = fVar7;
  iVar6 = (**(code **)(*(long *)(param_1 + 0x470) + (ulong)*(byte *)(param_1 + 0x484) * 8))
                    (param_1 + 0x470);
  iVar2 = *(int *)(param_1 + 0x480);
  *(int *)(param_1 + 0x478) = iVar6;
  iVar3 = *(int *)(param_1 + 0x47c);
  iVar1 = iVar3;
  if (iVar3 <= iVar2) {
    iVar1 = iVar2;
    iVar2 = iVar3;
  }
  if (((iVar1 <= iVar6 || iVar6 <= iVar2) && (*(float *)(param_1 + 0x308) <= 0.0)) &&
     (*(int *)(param_1 + 0x280) != 1)) {
    FUN_03ebb160(param_1 + 0x278,1);
    return;
  }
  return;
}

