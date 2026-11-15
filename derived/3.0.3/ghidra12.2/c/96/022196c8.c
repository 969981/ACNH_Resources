
undefined8 FUN_022196c8(undefined8 param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pfVar3 = (float *)FUN_0252d9bc(0);
  lVar4 = FUN_0252dec4(0);
  if (pfVar3 == (float *)0x0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  if (DAT_04c93e08 == 0) {
    return 0;
  }
  uVar7 = *param_2;
  if ((((uVar7 == 0) ||
       (lVar9 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         ((ulong)(uVar7 >> 0x11) & 0x7ff8)), lVar9 == 0)) ||
      ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar9 + 0x230) != uVar7)) {
    lVar9 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar1 = DAT_04c93e08;
    iVar2 = (**(code **)(*plVar5 + 0x60))();
    if (iVar2 < 0x11) {
      uVar7 = 1;
      goto joined_r0x022197b4;
    }
    if (*(uint *)(lVar1 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar1 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x022197b4;
    }
  }
  uVar7 = 0;
joined_r0x022197b4:
  if (lVar9 != 0) {
    uVar7 = uVar7 ^ 1;
    if (*(int *)(lVar9 + 0x150) != 1) {
      uVar7 = 1;
    }
    if (uVar7 == 0) {
      lVar9 = *(long *)(lVar9 + 0x68);
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) {
        pfVar6 = (float *)(**(code **)(*(long *)(DAT_053e0208 + 0x17ee0) + 0xf0))();
        fVar10 = *pfVar6 * 5.0;
      }
      else {
        fVar10 = 15.0;
      }
      fVar13 = *(float *)(lVar9 + 0x278);
      fVar17 = *pfVar3 - fVar13;
      fVar16 = *(float *)(lVar9 + 0x280);
      fVar18 = pfVar3[2] - fVar16;
      if (fVar18 * fVar18 + fVar17 * fVar17 <= fVar10 * fVar10) {
        fVar13 = fVar13 - *pfVar3;
        fVar17 = 0.0;
        fVar16 = fVar16 - pfVar3[2];
        fVar10 = SQRT(fVar13 * fVar13 + 0.0 + fVar16 * fVar16);
        if (0.0 < fVar10) {
          fVar10 = 1.0 / fVar10;
          fVar13 = fVar13 * fVar10;
          fVar16 = fVar16 * fVar10;
          fVar17 = fVar10 * 0.0 * 0.0;
        }
        uVar8 = (ulong)(*(uint *)(lVar4 + 4) >> 0x14) & 0xff0;
        fVar10 = (float)(*(uint *)(lVar4 + 4) & 0xffffff) * 5.9604645e-08;
        fVar11 = *(float *)((long)&DAT_04199798 + uVar8);
        fVar14 = *(float *)((long)&DAT_0419979c + uVar8);
        fVar12 = *(float *)((long)&DAT_041997a0 + uVar8);
        fVar15 = *(float *)((long)&DAT_041997a4 + uVar8);
        pfVar3 = (float *)(**(code **)(*(long *)(DAT_053e0208 + 0x17f10) + 0xf0))();
        fVar18 = cosf(*pfVar3 * 0.017453292);
        if (fVar18 <= fVar17 + (fVar11 + fVar10 * fVar14) * fVar13 +
                      (fVar12 + fVar10 * fVar15) * fVar16) {
          return 1;
        }
      }
    }
  }
  return 0;
}

