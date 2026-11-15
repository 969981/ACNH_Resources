
/* WARNING: Type propagation algorithm not settling */

bool FUN_02219360(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  puVar2 = PTR_DAT_04bb3350;
  uVar13 = *param_3;
  if (uVar13 == 0) {
    return true;
  }
  if (DAT_04c93e08 == 0) {
    return true;
  }
  lVar12 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                    ((ulong)(uVar13 >> 0x11) & 0x7ff8));
  if (((lVar12 == 0) || ((*(uint *)(lVar12 + 0x248) >> 1 & 1) != 0)) ||
     (*(uint *)(lVar12 + 0x230) != uVar13)) {
    lVar12 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = DAT_04c93e08;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_02219428;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
    }
    if (lVar12 != 0) goto LAB_02219430;
LAB_022194ec:
    bVar3 = false;
  }
  else {
LAB_02219428:
    uVar13 = 0;
    if (lVar12 == 0) goto LAB_022194ec;
LAB_02219430:
    bVar3 = *(int *)(lVar12 + 0x150) == 1;
  }
  if (DAT_04c93e08 == 0) {
    uVar11 = 0;
    bVar4 = false;
    lVar14 = 0;
    goto LAB_02219530;
  }
  uVar11 = *param_2;
  if (((uVar11 == 0) ||
      (lVar14 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         ((ulong)(uVar11 >> 0x11) & 0x7ff8)), lVar14 == 0)) ||
     (((*(uint *)(lVar14 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar14 + 0x230) != uVar11)))) {
    lVar14 = 0;
  }
  if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar9 = DAT_04c93e08;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02219508;
      uVar11 = (uint)(0x101000100 >> (((ulong)*(uint *)(lVar9 + 0x5e8) & 7) << 3)) & 1;
    }
  }
  else {
LAB_02219508:
    uVar11 = 0;
  }
  if (lVar14 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(lVar14 + 0x150) == 1;
  }
LAB_02219530:
  uVar1 = 0;
  if (lVar12 != 0 && bVar3) {
    uVar1 = uVar13;
  }
  if (uVar1 != 1) {
    return true;
  }
  if (uVar11 == 0) {
    return false;
  }
  if (lVar14 == 0) {
    return false;
  }
  if (!bVar4) {
    return false;
  }
  pfVar8 = (float *)FUN_0252d9bc(0);
  lVar9 = FUN_0252dec4(0);
  if (pfVar8 == (float *)0x0) {
    return false;
  }
  if (lVar9 == 0) {
    return false;
  }
  fVar25 = 0.0;
  fVar15 = *pfVar8;
  fVar16 = pfVar8[2];
  fVar17 = *(float *)(*(long *)(lVar12 + 0x68) + 0x278);
  fVar21 = fVar17 - fVar15;
  fVar18 = *(float *)(*(long *)(lVar12 + 0x68) + 0x280);
  fVar22 = fVar18 - fVar16;
  fVar19 = *(float *)(*(long *)(lVar14 + 0x68) + 0x278);
  fVar20 = *(float *)(*(long *)(lVar14 + 0x68) + 0x280);
  fVar23 = fVar19 - fVar15;
  fVar24 = fVar20 - fVar16;
  fVar26 = SQRT(fVar21 * fVar21 + 0.0 + fVar22 * fVar22);
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = 1.0 / fVar26;
    fVar21 = fVar21 * fVar26;
    fVar22 = fVar22 * fVar26;
    fVar26 = fVar26 * 0.0 * 0.0;
  }
  fVar27 = SQRT(fVar23 * fVar23 + 0.0 + fVar24 * fVar24);
  if (0.0 < fVar27) {
    fVar27 = 1.0 / fVar27;
    fVar23 = fVar23 * fVar27;
    fVar24 = fVar24 * fVar27;
    fVar25 = fVar27 * 0.0 * 0.0;
  }
  uVar10 = (ulong)(*(uint *)(lVar9 + 4) >> 0x14) & 0xff0;
  fVar27 = (float)(*(uint *)(lVar9 + 4) & 0xffffff) * 5.9604645e-08;
  fVar28 = *(float *)((long)&DAT_04199798 + uVar10) +
           fVar27 * *(float *)((long)&DAT_0419979c + uVar10);
  fVar27 = *(float *)((long)&DAT_041997a0 + uVar10) +
           fVar27 * *(float *)((long)&DAT_041997a4 + uVar10);
  fVar21 = fVar26 + fVar28 * fVar21 + fVar27 * fVar22;
  fVar22 = fVar25 + fVar28 * fVar23 + fVar27 * fVar24;
  bVar3 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.8660254 < fVar21) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar22)) {
      bVar3 = fVar22 < 0.8660254;
      bVar4 = fVar22 == 0.8660254;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    return fVar21 < fVar22;
  }
  fVar17 = fVar15 - fVar17;
  fVar18 = fVar16 - fVar18;
  fVar15 = fVar15 - fVar19;
  fVar16 = fVar16 - fVar20;
  return fVar16 * fVar16 + fVar15 * fVar15 < fVar18 * fVar18 + fVar17 * fVar17;
}

