
undefined8 FUN_013191c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar8 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar11 = fVar8 + 2.5;
  fVar10 = fVar9 + 2.5;
  fVar8 = fVar8 + 10.0 + -2.5;
  fVar9 = fVar9 + 10.0 + -2.5;
  uVar3 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  uVar4 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  uVar5 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  uVar6 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  uVar1 = uVar3;
  if ((int)uVar5 <= (int)uVar3) {
    uVar1 = uVar5;
  }
  if ((int)uVar3 <= (int)uVar5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar4;
  if ((int)uVar6 <= (int)uVar4) {
    uVar5 = uVar6;
  }
  if ((int)uVar4 <= (int)uVar6) {
    uVar4 = uVar6;
  }
  if (uVar4 + 1 == uVar5) {
    return 0;
  }
  uVar6 = uVar1;
  do {
    if ((((((*(long *)PTR_DAT_04bb27c8 != 0) && (-1 < (int)uVar6)) &&
          (lVar7 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar7 != 0)) &&
         ((-1 < (int)uVar5 && (uVar6 < *(uint *)(lVar7 + 0x38))))) &&
        ((uVar5 < *(uint *)(lVar7 + 0x3c) &&
         ((uVar2 = uVar6 + *(uint *)(lVar7 + 0x38) * uVar5, uVar2 < *(uint *)(lVar7 + 0x68) &&
          (*(long *)(lVar7 + 0x70) != 0)))))) &&
       ((*(uint *)(*(long *)(lVar7 + 0x70) + (long)(int)uVar2 * 4) >> 3 & 1) != 0)) {
      return 1;
    }
    if ((int)uVar6 < (int)uVar3) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar5 = uVar5 + 1;
      uVar6 = uVar1;
    }
  } while ((uVar1 != uVar6) || (uVar4 + 1 != uVar5));
  return 0;
}

