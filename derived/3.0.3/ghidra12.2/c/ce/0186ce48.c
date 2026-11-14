
void FUN_0186ce48(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  
  lVar12 = *(long *)(param_2 + 0x4b8);
  uVar8 = FUN_006f0400(*(float *)(param_2 + 0x328) - *(float *)(*(long *)(param_2 + 0x300) + 0x278),
                       *(float *)(param_2 + 0x330) - *(float *)(*(long *)(param_2 + 0x300) + 0x280))
  ;
  pfVar10 = (float *)(**(code **)(*(long *)(lVar12 + 0x2a8) + 0xf0))(lVar12 + 0x2a8);
  puVar3 = (undefined8 *)0x0;
  if (*(char *)(param_2 + 0x497) != '\0') {
    puVar3 = &DAT_05000000;
  }
  uVar4 = *(uint *)(param_2 + 800);
  uVar5 = uVar4 - uVar8;
  uVar1 = uVar5;
  if (uVar4 < uVar8 || uVar5 == 0) {
    uVar1 = uVar8 - uVar4;
  }
  lVar2 = 1;
  if (uVar4 >= uVar8 && uVar5 != 0) {
    lVar2 = -1;
  }
  lVar11 = -1;
  if (uVar8 < uVar4) {
    lVar11 = 1;
  }
  if (0x80000000 < uVar1) {
    lVar2 = lVar11;
  }
  lVar11 = 0;
  if (uVar4 != uVar8) {
    lVar11 = lVar2;
  }
  lVar11 = lVar11 * ((long)puVar3 + (long)(*pfVar10 * param_1 * 11930465.0) & 0xffffffffU);
  uVar1 = uVar4 + (int)lVar11;
  if (lVar11 < 1) {
    if (-1 < lVar11) {
      bVar6 = (int)lVar11 != 0;
      goto LAB_0186cf84;
    }
    if (uVar1 < uVar4) {
      if (uVar4 < uVar8) goto LAB_0186cf4c;
    }
    else if (uVar8 <= uVar4) goto LAB_0186cf7c;
    if (uVar8 < uVar1) goto LAB_0186cf4c;
  }
  else {
    if (uVar4 < uVar1) {
      if (uVar4 <= uVar8) {
LAB_0186cf44:
        if (uVar8 <= uVar1) goto LAB_0186cf7c;
      }
LAB_0186cf4c:
      *(uint *)(param_2 + 800) = uVar1;
      bVar6 = true;
      goto LAB_0186cf84;
    }
    if (uVar8 < uVar4) goto LAB_0186cf44;
  }
LAB_0186cf7c:
  bVar6 = false;
  *(uint *)(param_2 + 800) = uVar8;
LAB_0186cf84:
  *(bool *)(param_2 + 0x496) = bVar6;
  uVar9 = (**(code **)(*(long *)(param_2 + 0x4c0) + (ulong)*(byte *)(param_2 + 0x4d4) * 8))
                    (param_2 + 0x4c0);
  *(undefined4 *)(param_2 + 0x4c8) = uVar9;
  pfVar10 = (float *)(**(code **)(*(long *)(lVar12 + 0x98) + 0xf0))();
  param_1 = *pfVar10 * param_1;
  if (*(char *)(param_2 + 0x496) != '\0') {
    uVar1 = *(uint *)(param_2 + 800);
    fVar13 = 0.0;
    if (uVar1 - uVar8 != 0) {
      uVar4 = uVar1 - uVar8;
      if (uVar1 <= uVar8) {
        uVar4 = uVar8 - uVar1;
      }
      uVar8 = -uVar4;
      if (uVar4 < 0x80000001) {
        uVar8 = uVar4;
      }
      fVar13 = (float)uVar8 * 1.4629181e-09;
    }
    param_1 = param_1 + (fVar13 / 3.1415927) * (fVar13 / 3.1415927) * (0.0 - param_1);
  }
  if (*(float *)(param_2 + 0x308) != param_1) {
    pfVar10 = (float *)(**(code **)(*(long *)(lVar12 + 0x158) + 0xf0))(lVar12 + 0x158);
    fVar13 = *(float *)(param_2 + 0x308);
    if (param_1 <= fVar13) {
      if (fVar13 <= param_1) {
        return;
      }
      fVar14 = fVar13 - *pfVar10;
      bVar6 = false;
      bVar7 = false;
      if (fVar14 <= fVar13) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar14) && !NAN(param_1)) {
          bVar6 = fVar14 == param_1;
          bVar7 = param_1 <= fVar14;
        }
      }
      if (bVar7 && !bVar6) {
        param_1 = fVar14;
      }
    }
    else {
      fVar14 = *pfVar10 + fVar13;
      bVar6 = false;
      bVar7 = false;
      if (fVar13 <= fVar14) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar14) && !NAN(param_1)) {
          bVar6 = fVar14 < param_1;
          bVar7 = false;
        }
      }
      if (bVar6 != bVar7) {
        param_1 = fVar14;
      }
    }
    *(float *)(param_2 + 0x308) = param_1;
  }
  return;
}

