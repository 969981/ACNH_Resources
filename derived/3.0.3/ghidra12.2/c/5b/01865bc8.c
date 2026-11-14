
void FUN_01865bc8(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  lVar10 = *(long *)(param_1 + 0x4c8);
  uVar5 = FUN_006f0400(*(float *)(param_1 + 0x328) - *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                       *(float *)(param_1 + 0x330) - *(float *)(*(long *)(param_1 + 0x300) + 0x280))
  ;
  if (*(char *)(param_1 + 0x497) == '\0') {
    fVar11 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
    local_50 = PTR_DAT_04bb2010 + 0x10;
    fVar13 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
    local_48 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iStack_44 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    uVar6 = FUN_01a1ddd0(&local_50,PTR_LAB_04bbfc90);
    if ((uVar6 & 1) != 0) goto LAB_01865c84;
    pfVar7 = (float *)(**(code **)(*(long *)(lVar10 + 0x218) + 0xf0))(lVar10 + 0x218);
    uVar6 = (ulong)(*pfVar7 * 11930465.0);
  }
  else {
LAB_01865c84:
    pfVar7 = (float *)(**(code **)(*(long *)(lVar10 + 0x218) + 0xf0))(lVar10 + 0x218);
    uVar6 = (ulong)((int)(long)(*pfVar7 * 11930465.0) + 0x5000000);
  }
  uVar2 = *(uint *)(param_1 + 800);
  if (uVar2 == uVar5) {
    lVar8 = 0;
  }
  else {
    uVar1 = uVar2 - uVar5;
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      uVar1 = uVar5 - uVar2;
    }
    if (uVar1 < 0x80000001) {
      lVar9 = -1;
    }
    else {
      lVar9 = 1;
    }
    lVar8 = -lVar9;
    if (uVar5 < uVar2) {
      lVar8 = lVar9;
    }
  }
  lVar8 = lVar8 * (uVar6 & 0xffffffff);
  uVar1 = uVar2 + (int)lVar8;
  if (lVar8 < 1) {
    if (lVar8 < 0) {
      if (uVar1 < uVar2) {
        if (uVar2 < uVar5) goto LAB_01865d40;
      }
      else if (uVar5 <= uVar2) goto LAB_01865d9c;
      if (uVar1 <= uVar5) goto LAB_01865d9c;
LAB_01865d40:
      bVar3 = false;
      *(uint *)(param_1 + 800) = uVar1;
    }
    else {
      bVar3 = (int)lVar8 == 0;
    }
  }
  else {
    if (uVar2 < uVar1) {
      if (uVar5 < uVar2) goto LAB_01865d40;
LAB_01865d38:
      if (uVar1 < uVar5) goto LAB_01865d40;
    }
    else if (uVar5 < uVar2) goto LAB_01865d38;
LAB_01865d9c:
    *(uint *)(param_1 + 800) = uVar5;
    bVar3 = true;
  }
  *(byte *)(param_1 + 0x496) = bVar3 ^ 1;
  pfVar7 = (float *)(**(code **)(*(long *)(lVar10 + 0x98) + 0xf0))();
  fVar11 = *pfVar7;
  if (bVar3 == false) {
    uVar2 = *(uint *)(param_1 + 800);
    fVar13 = 0.0;
    if (uVar2 - uVar5 != 0) {
      uVar1 = uVar2 - uVar5;
      if (uVar2 <= uVar5) {
        uVar1 = uVar5 - uVar2;
      }
      uVar5 = -uVar1;
      if (uVar1 < 0x80000001) {
        uVar5 = uVar1;
      }
      fVar13 = (float)uVar5 * 1.4629181e-09;
    }
    fVar11 = fVar11 + (fVar13 / 3.1415927) * (fVar13 / 3.1415927) * (0.0 - fVar11);
  }
  if (*(float *)(param_1 + 0x308) != fVar11) {
    pfVar7 = (float *)(**(code **)(*(long *)(lVar10 + 0x188) + 0xf0))(lVar10 + 0x188);
    fVar13 = *(float *)(param_1 + 0x308);
    if (fVar11 <= fVar13) {
      if (fVar13 <= fVar11) goto LAB_01865e74;
      fVar14 = fVar13 - *pfVar7;
      bVar3 = false;
      bVar4 = false;
      if (fVar14 <= fVar13) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar14) && !NAN(fVar11)) {
          bVar3 = fVar14 == fVar11;
          bVar4 = fVar11 <= fVar14;
        }
      }
      if (bVar4 && !bVar3) {
        fVar11 = fVar14;
      }
    }
    else {
      fVar14 = *pfVar7 + fVar13;
      bVar3 = false;
      bVar4 = false;
      if (fVar13 <= fVar14) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar14) && !NAN(fVar11)) {
          bVar3 = fVar14 < fVar11;
          bVar4 = false;
        }
      }
      if (bVar3 != bVar4) {
        fVar11 = fVar14;
      }
    }
    *(float *)(param_1 + 0x308) = fVar11;
  }
LAB_01865e74:
  lVar9 = *(long *)(param_1 + 0x4c8);
  uVar12 = FUN_01a18270(param_1 + 0x500,0);
  *(undefined4 *)(param_1 + 0x344) = uVar12;
  pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x1b8) + 0xf0))(lVar9 + 0x1b8);
  fVar11 = *pfVar7;
  lVar10 = FUN_0252d9bc(0);
  if (lVar10 != 0) {
    if (*(float *)(param_1 + 0x338) < *(float *)(lVar10 + 4)) {
      fVar11 = fVar11 + *(float *)(lVar10 + 4);
    }
  }
  pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x158) + 0xf0))(lVar9 + 0x158);
  fVar14 = *pfVar7;
  fVar13 = (float)FUN_01a1fbe0(*(long *)(param_1 + 0x300) + 0x278);
  fVar11 = fVar11 + fVar13;
  fVar13 = *(float *)(param_1 + 0x338);
  if (fVar11 <= fVar13) {
    if (fVar13 <= fVar11) {
      return;
    }
    fVar14 = fVar13 - fVar14;
    bVar3 = false;
    bVar4 = false;
    if (fVar14 <= fVar13) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar14) && !NAN(fVar11)) {
        bVar3 = fVar14 == fVar11;
        bVar4 = fVar11 <= fVar14;
      }
    }
    if (bVar4 && !bVar3) {
      fVar11 = fVar14;
    }
  }
  else {
    fVar14 = fVar14 + fVar13;
    bVar3 = false;
    bVar4 = false;
    if (fVar13 <= fVar14) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar14) && !NAN(fVar11)) {
        bVar3 = fVar14 < fVar11;
        bVar4 = false;
      }
    }
    if (bVar3 != bVar4) {
      fVar11 = fVar14;
    }
  }
  *(float *)(param_1 + 0x338) = fVar11;
  return;
}

