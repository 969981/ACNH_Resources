
void FUN_013bba10(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar8 = 0;
  pfVar1 = (float *)(param_1 + 0x3b8);
  do {
    fVar11 = (float)iVar8 * 0.0625;
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    if (0.0 <= fVar11) {
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar11)) {
        bVar5 = fVar11 < 1.0;
        bVar6 = fVar11 == 1.0;
        bVar7 = false;
      }
    }
    if (bVar6 || bVar5 != bVar7) {
      fVar12 = 1.0 - fVar11;
      fVar20 = fVar11 * fVar11;
      fVar14 = *(float *)(param_1 + 0x3a4);
      pfVar10 = pfVar1 + (long)iVar8 * 5;
      fVar15 = *(float *)(param_1 + 0x3a8);
      fVar17 = *(float *)(param_1 + 0x298);
      fVar18 = *(float *)(param_1 + 0x29c);
      fVar13 = fVar12 * fVar12;
      fVar12 = fVar11 * (fVar12 + fVar12);
      fVar16 = *(float *)(param_1 + 0x3b0);
      fVar19 = *(float *)(param_1 + 0x3b4);
      *pfVar10 = fVar13 * *(float *)(param_1 + 0x3a0) + fVar12 * *(float *)(param_1 + 0x294) +
                 fVar20 * *(float *)(param_1 + 0x3ac);
      pfVar10[1] = fVar13 * fVar14 + fVar12 * fVar17 + fVar20 * fVar16;
      pfVar10[2] = fVar13 * fVar15 + fVar12 * fVar18 + fVar20 * fVar19;
    }
    pfVar1[(long)iVar8 * 5 + 3] = 0.0;
    if (0 < iVar8) {
      fVar12 = 0.0;
      uVar9 = 1;
      pfVar10 = pfVar1;
      do {
        pfVar2 = pfVar10 + 5;
        if (0xf < uVar9) {
          pfVar2 = pfVar1;
        }
        pfVar3 = pfVar10;
        if (0x10 < uVar9) {
          pfVar3 = pfVar1;
        }
        uVar9 = uVar9 + 1;
        fVar12 = fVar12 + SQRT((pfVar2[1] - pfVar3[1]) * (pfVar2[1] - pfVar3[1]) +
                               (*pfVar2 - *pfVar3) * (*pfVar2 - *pfVar3) +
                               (pfVar2[2] - pfVar3[2]) * (pfVar2[2] - pfVar3[2]));
        pfVar1[(long)iVar8 * 5 + 3] = fVar12;
        pfVar10 = pfVar10 + 5;
      } while (iVar8 + 1 != uVar9);
    }
    lVar4 = (long)iVar8;
    iVar8 = iVar8 + 1;
    pfVar1[lVar4 * 5 + 4] = fVar11;
  } while (iVar8 != 0x10);
  fVar12 = *(float *)(param_1 + 0x4f0);
  fVar11 = 1.0 / (fVar12 / *(float *)(param_1 + 0x34c));
  *(float *)(param_1 + 0x4fc) = fVar11;
  *(float *)(param_1 + 0x4f8) = fVar11;
  *(float *)(param_1 + 0x3c4) = *(float *)(param_1 + 0x3c4) / fVar12;
  *(float *)(param_1 + 0x3d8) = *(float *)(param_1 + 0x3d8) / fVar12;
  *(float *)(param_1 + 0x3ec) = *(float *)(param_1 + 0x3ec) / fVar12;
  *(float *)(param_1 + 0x400) = *(float *)(param_1 + 0x400) / fVar12;
  *(float *)(param_1 + 0x414) = *(float *)(param_1 + 0x414) / fVar12;
  *(float *)(param_1 + 0x428) = *(float *)(param_1 + 0x428) / fVar12;
  *(float *)(param_1 + 0x43c) = *(float *)(param_1 + 0x43c) / fVar12;
  *(float *)(param_1 + 0x450) = *(float *)(param_1 + 0x450) / fVar12;
  *(float *)(param_1 + 0x464) = *(float *)(param_1 + 0x464) / fVar12;
  *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x478) / fVar12;
  *(float *)(param_1 + 0x48c) = *(float *)(param_1 + 0x48c) / fVar12;
  *(float *)(param_1 + 0x4a0) = *(float *)(param_1 + 0x4a0) / fVar12;
  *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) / fVar12;
  *(float *)(param_1 + 0x4c8) = *(float *)(param_1 + 0x4c8) / fVar12;
  *(float *)(param_1 + 0x4dc) = *(float *)(param_1 + 0x4dc) / fVar12;
  *(float *)(param_1 + 0x4f0) = fVar12 / fVar12;
  return;
}

