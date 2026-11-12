
undefined8 FUN_0094b390(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = *(float *)(param_2 + 8);
  fVar10 = *(float *)(param_2 + 0x10);
  fVar11 = *(float *)(param_2 + 0x14);
  fVar12 = *(float *)(param_2 + 0x1c);
  fVar6 = fVar11 - fVar9;
  iVar1 = -(uint)(fVar11 < fVar9);
  if (fVar9 < fVar11) {
    iVar1 = 1;
  }
  iVar2 = -(uint)(fVar12 < fVar10);
  if (fVar10 < fVar12) {
    iVar2 = 1;
  }
  fVar3 = -fVar6;
  if (0.0 <= fVar6) {
    fVar3 = fVar6;
  }
  fVar7 = fVar12 - fVar10;
  fVar6 = -fVar7;
  if (0.0 <= fVar7) {
    fVar6 = fVar7;
  }
  uVar4 = FUN_00949bd0();
  if ((uVar4 & 1) == 0) {
    fVar7 = fVar10 / 5.0;
    uVar5 = 0;
    if (fVar7 != (float)(int)fVar7) {
      uVar5 = (uint)(fVar7 < 0.0);
    }
    fVar8 = (float)(int)((int)fVar7 - uVar5) * 5.0;
    fVar7 = fVar10 - fVar8;
    if (fVar10 <= fVar12) {
      fVar7 = (fVar8 + 5.0) - fVar10;
    }
    fVar7 = fVar7 / fVar6;
    fVar10 = fVar9 / 5.0;
    uVar5 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar5 = (uint)(fVar10 < 0.0);
    }
    fVar12 = (float)(int)((int)fVar10 - uVar5) * 5.0;
    fVar10 = fVar9 - fVar12;
    if (fVar9 <= fVar11) {
      fVar10 = (fVar12 + 5.0) - fVar9;
    }
    fVar10 = fVar10 / fVar3;
    do {
      if (fVar10 <= fVar7) {
        if (*(int *)(param_3 + 8) == *(int *)(param_4 + 8)) {
          return 0;
        }
        fVar10 = 5.0 / fVar3 + fVar10;
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + iVar1;
      }
      else {
        if (*(int *)(param_3 + 0xc) == *(int *)(param_4 + 0xc)) {
          return 0;
        }
        fVar7 = 5.0 / fVar6 + fVar7;
        *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + iVar2;
      }
      uVar4 = FUN_00949bd0(param_1,param_2,param_3);
    } while ((uVar4 & 1) == 0);
  }
  return 1;
}

