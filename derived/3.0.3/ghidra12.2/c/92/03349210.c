
undefined8 FUN_03349210(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = *(float *)(param_1 + 0x20a0);
  fVar6 = 0.0 - fVar5;
  if (fVar5 == 0.0) {
    fVar6 = 0.0;
  }
  if (fVar6 == 0.0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x1fd0);
  uVar3 = *(uint *)(param_1 + 0x2058);
  if ((iVar1 < 3) || ((int)(uVar3 + 3) <= iVar1)) {
    iVar4 = *(int *)(param_1 + 0x2060) - uVar3;
    if (iVar4 < 3) {
      if (-1 < iVar4) goto LAB_033492a4;
    }
    else {
      iVar4 = iVar4 + -2;
    }
    fVar6 = fVar6 + *(float *)(param_1 + 0x20b8) * (float)iVar4;
  }
  else if (*(int *)(param_1 + 0x2060) == iVar1 + -1) {
    fVar6 = fVar6 - *(float *)(param_1 + 0x20b8);
  }
  else {
    uVar3 = uVar3 - 1;
    *(uint *)(param_1 + 0x2058) = uVar3;
  }
LAB_033492a4:
  if (fVar6 == 0.0) {
    return 0;
  }
  fVar7 = -fVar6;
  if (0.0 <= fVar6) {
    fVar7 = fVar6;
  }
  if (1.0 < fVar7) {
    fVar7 = fVar6 * 0.5;
    fVar6 = 20.0;
    if ((fVar7 <= 20.0) && (fVar6 = fVar7, fVar7 < -20.0)) {
      fVar6 = -20.0;
    }
  }
  fVar5 = fVar5 + fVar6;
  fVar6 = *(float *)(param_1 + 0x20b8);
  *(float *)(param_1 + 0x20a0) = fVar5;
  if (fVar6 <= fVar5) {
    do {
      fVar5 = fVar5 - fVar6;
      uVar3 = uVar3 + 1;
    } while (fVar6 <= fVar5);
    *(float *)(param_1 + 0x20a0) = fVar5;
    *(uint *)(param_1 + 0x2058) = uVar3;
  }
  if (fVar5 <= -fVar6) {
    do {
      fVar5 = fVar6 + fVar5;
      uVar3 = uVar3 - 1;
    } while (fVar5 <= -fVar6);
    *(float *)(param_1 + 0x20a0) = fVar5;
    *(uint *)(param_1 + 0x2058) = uVar3;
  }
  uVar2 = iVar1 - 1;
  if (((int)uVar3 < iVar1) && (uVar2 = uVar3, -1 < (int)uVar3)) {
    return 1;
  }
  *(uint *)(param_1 + 0x2058) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  return 1;
}

