
undefined8 FUN_016e0e30(float param_1,float *param_2,uint param_3)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = *param_2;
  fVar11 = param_2[2];
  lVar6 = *(long *)PTR_DAT_04bb27c8;
  if ((((lVar6 != 0) && (lVar8 = *(long *)(lVar6 + 0xa8), lVar8 != 0)) &&
      (uVar7 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0), -1 < (int)uVar7)) &&
     ((uVar3 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0), -1 < (int)uVar3 &&
      (uVar7 < *(uint *)(lVar8 + 0x38) && uVar3 < *(uint *)(lVar8 + 0x3c))))) {
    uVar7 = uVar7 + *(uint *)(lVar8 + 0x38) * uVar3;
    if ((uVar7 < *(uint *)(lVar8 + 0x68) && *(long *)(lVar8 + 0x70) != 0) &&
       ((*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar7 * 4) >> 3 & 1) != 0)) {
      return 1;
    }
  }
  fVar12 = -param_1;
  if (0.0 <= param_1) {
    fVar12 = param_1;
  }
  if (1.1920929e-07 < fVar12) {
    bVar5 = (param_3 & 1) == 0;
    iVar9 = 0x10;
    if (bVar5) {
      iVar9 = 8;
    }
    piVar2 = &DAT_05240234;
    if (bVar5) {
      piVar2 = &DAT_05240230;
    }
    uVar7 = 0;
    do {
      uVar1 = (ulong)(uVar7 >> 0x18);
      fVar12 = (float)(uVar7 & 0xffffff) * 5.9604645e-08;
      fVar13 = fVar10 + ((float)(&DAT_04199798)[uVar1 * 4] +
                        fVar12 * (float)(&DAT_0419979c)[uVar1 * 4]) * param_1;
      fVar12 = fVar11 + ((float)(&DAT_041997a0)[uVar1 * 4] +
                        fVar12 * (float)(&DAT_041997a4)[uVar1 * 4]) * param_1;
      if (((lVar6 != 0) && (lVar8 = *(long *)(lVar6 + 0xa8), lVar8 != 0)) &&
         ((uVar3 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0), -1 < (int)uVar3 &&
          ((uVar4 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0), -1 < (int)uVar4 &&
           (uVar3 < *(uint *)(lVar8 + 0x38) && uVar4 < *(uint *)(lVar8 + 0x3c))))))) {
        uVar3 = uVar3 + *(uint *)(lVar8 + 0x38) * uVar4;
        if ((uVar3 < *(uint *)(lVar8 + 0x68) && *(long *)(lVar8 + 0x70) != 0) &&
           ((*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar3 * 4) >> 3 & 1) != 0)) {
          return 1;
        }
      }
      uVar7 = uVar7 + *piVar2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return 0;
}

