
float FUN_01869394(float param_1,long param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar12 = *(long *)(param_2 + 0x4b8);
  uVar6 = FUN_006f0400(*(float *)(param_2 + 0x328) - *(float *)(*(long *)(param_2 + 0x300) + 0x278),
                       *(float *)(param_2 + 0x330) - *(float *)(*(long *)(param_2 + 0x300) + 0x280))
  ;
  uVar8 = *(uint *)(param_2 + 800);
  if (uVar8 == uVar6) {
    lVar9 = 0;
  }
  else {
    uVar1 = uVar8 - uVar6;
    if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
      uVar1 = uVar6 - uVar8;
    }
    if (uVar1 < 0x80000001) {
      lVar10 = -1;
    }
    else {
      lVar10 = 1;
    }
    lVar9 = -lVar10;
    if (uVar6 < uVar8) {
      lVar9 = lVar10;
    }
  }
  lVar9 = lVar9 * (ulong)*param_3;
  uVar1 = uVar8 + (int)lVar9;
  if (lVar9 < 1) {
    if (lVar9 < 0) {
      if (uVar1 < uVar8) {
        if (uVar6 <= uVar8 && uVar1 <= uVar6) goto LAB_01869474;
      }
      else if (uVar6 <= uVar8 || uVar1 <= uVar6) goto LAB_01869474;
      goto LAB_01869448;
    }
    bVar3 = (int)lVar9 == 0;
  }
  else {
    if (uVar8 < uVar1) {
      if (uVar8 <= uVar6 && uVar6 <= uVar1) goto LAB_01869474;
    }
    else if (uVar8 <= uVar6 || uVar6 <= uVar1) {
LAB_01869474:
      *(uint *)(param_2 + 800) = uVar6;
      bVar3 = true;
      uVar8 = uVar6;
      goto LAB_01869480;
    }
LAB_01869448:
    bVar3 = false;
    *(uint *)(param_2 + 800) = uVar1;
    uVar8 = uVar1;
  }
LAB_01869480:
  uVar1 = *(uint *)(param_2 + 0x31c);
  *(byte *)(param_2 + 0x496) = bVar3 ^ 1;
  uVar11 = *param_4;
  if (uVar1 == uVar11) goto LAB_01869510;
  bVar4 = uVar1 < uVar11;
  bVar5 = uVar1 - uVar11 == 0;
  uVar2 = uVar1 - uVar11;
  if (bVar4 || bVar5) {
    uVar2 = uVar11 - uVar1;
  }
  lVar10 = -0x1000000;
  if (!bVar4 && !bVar5) {
    lVar10 = 0x1000000;
  }
  lVar9 = 0x1000000;
  if (!bVar4 && !bVar5) {
    lVar9 = -0x1000000;
  }
  if (uVar2 < 0x80000001) {
    lVar10 = lVar9;
  }
  uVar2 = uVar1 + (int)lVar10;
  if (lVar10 < 1) {
    if (-1 < lVar10) goto LAB_01869510;
    if (uVar2 < uVar1) {
      if (uVar1 < uVar11) goto LAB_01869508;
    }
    else if (uVar11 <= uVar1) goto LAB_0186950c;
    if (uVar11 < uVar2) goto LAB_01869508;
  }
  else {
    if (uVar1 < uVar2) {
      if (uVar11 < uVar1) goto LAB_01869508;
    }
    else if (uVar1 <= uVar11) goto LAB_0186950c;
    if (uVar2 < uVar11) {
LAB_01869508:
      uVar11 = uVar2;
    }
  }
LAB_0186950c:
  *(uint *)(param_2 + 0x31c) = uVar11;
LAB_01869510:
  if (bVar3 == false) {
    fVar14 = 0.0;
    if (uVar8 - uVar6 != 0) {
      uVar1 = uVar8 - uVar6;
      if (uVar8 <= uVar6) {
        uVar1 = uVar6 - uVar8;
      }
      uVar8 = -uVar1;
      if (uVar1 < 0x80000001) {
        uVar8 = uVar1;
      }
      fVar14 = (float)uVar8 * 1.4629181e-09;
    }
    param_1 = param_1 + (fVar14 / 3.1415927) * (fVar14 / 3.1415927) * (0.0 - param_1);
  }
  if (param_1 != *(float *)(param_2 + 0x308)) {
    pfVar7 = (float *)(**(code **)(*(long *)(lVar12 + 0x188) + 0xf0))(lVar12 + 0x188);
    fVar13 = *(float *)(param_2 + 0x308);
    fVar14 = param_1;
    if (param_1 <= fVar13) {
      if (fVar13 <= param_1) {
        return param_1;
      }
      fVar15 = fVar13 - *pfVar7;
      bVar3 = false;
      bVar4 = false;
      if (fVar15 <= fVar13) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar15) && !NAN(param_1)) {
          bVar3 = fVar15 == param_1;
          bVar4 = param_1 <= fVar15;
        }
      }
      if (bVar4 && !bVar3) {
        fVar14 = fVar15;
      }
    }
    else {
      fVar15 = *pfVar7 + fVar13;
      bVar3 = false;
      bVar4 = false;
      if (fVar13 <= fVar15) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar15) && !NAN(param_1)) {
          bVar3 = fVar15 < param_1;
          bVar4 = false;
        }
      }
      if (bVar3 != bVar4) {
        fVar14 = fVar15;
      }
    }
    *(float *)(param_2 + 0x308) = fVar14;
  }
  return param_1;
}

