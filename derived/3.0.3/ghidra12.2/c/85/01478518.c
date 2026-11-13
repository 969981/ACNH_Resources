
bool FUN_01478518(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar7 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
  uVar4 = *(uint *)(param_1 + 0x8d0);
  uVar9 = *(uint *)(lVar7 + 4);
  if (uVar9 == uVar4) {
    lVar10 = 0;
  }
  else {
    uVar5 = uVar9 - uVar4;
    uVar2 = uVar5;
    if (uVar9 < uVar4 || uVar5 == 0) {
      uVar2 = uVar4 - uVar9;
    }
    lVar10 = 1;
    if (uVar9 >= uVar4 && uVar5 != 0) {
      lVar10 = -1;
    }
    lVar3 = -1;
    if (uVar4 < uVar9) {
      lVar3 = 1;
    }
    if (0x80000000 < uVar2) {
      lVar10 = lVar3;
    }
  }
  lVar10 = lVar10 * (ulong)*(uint *)(param_1 + 0x8d4);
  uVar2 = uVar9 + (int)lVar10;
  if (lVar10 < 1) {
    if (-1 < lVar10) {
      bVar6 = (int)lVar10 == 0;
      goto LAB_014785e4;
    }
    if (uVar2 < uVar9) {
      if (uVar4 <= uVar9 && uVar2 <= uVar4) goto LAB_014785d8;
    }
    else if (uVar4 <= uVar9 || uVar2 <= uVar4) goto LAB_014785d8;
  }
  else if (uVar9 < uVar2) {
    if (uVar9 <= uVar4 && uVar4 <= uVar2) goto LAB_014785d8;
  }
  else if (uVar9 <= uVar4 || uVar4 <= uVar2) {
LAB_014785d8:
    *(uint *)(lVar7 + 4) = uVar4;
    bVar6 = true;
    uVar9 = uVar4;
    goto LAB_014785e4;
  }
  bVar6 = false;
  *(uint *)(lVar7 + 4) = uVar2;
  uVar9 = uVar2;
LAB_014785e4:
  fVar16 = *(float *)(param_1 + 0x8d8);
  uVar1 = (ulong)(uVar9 >> 0x18);
  fVar17 = *(float *)(param_1 + 0x8dc);
  fVar18 = *(float *)(param_1 + 0x8e0);
  fVar11 = (float)(uVar9 & 0xffffff) * 5.9604645e-08;
  fVar12 = (float)(&DAT_04199798)[uVar1 * 4] + fVar11 * (float)(&DAT_0419979c)[uVar1 * 4];
  fVar11 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar11 * (float)(&DAT_041997a4)[uVar1 * 4];
  fVar15 = fVar12 * 0.0;
  pfVar8 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
  fVar13 = *(float *)(param_1 + 0x8e8);
  fVar14 = *(float *)(param_1 + 0x8ec);
  *pfVar8 = *(float *)(param_1 + 0x8e4) -
            (fVar15 * fVar17 + fVar16 * fVar11 + fVar18 * (fVar12 + 0.0) + 0.0);
  pfVar8[1] = fVar13 - ((fVar15 * 0.0 + 1.0) * fVar17 + fVar16 * fVar11 * 0.0 + fVar18 * fVar15 +
                       0.0);
  pfVar8[2] = fVar14 - ((fVar17 * fVar11 * 0.0 - fVar16 * fVar12) + fVar18 * fVar11 + 0.0);
  return bVar6;
}

