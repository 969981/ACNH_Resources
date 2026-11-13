
void FUN_013b90c8(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
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
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar18 = *(float *)(param_1 + 0x394);
  uVar2 = *(int *)(param_1 + 0x280) - 1;
  fVar19 = *(float *)(param_1 + 0x38c);
  fVar20 = *(float *)(param_1 + 0x390);
  fVar17 = 0.3;
  if (3 < uVar2) {
    fVar17 = 0.1;
  }
  iVar5 = FUN_006f0400(*(float *)(param_1 + 0x330) - fVar19,*(float *)(param_1 + 0x338) - fVar18);
  fVar11 = *(float *)(param_1 + 0x330);
  fVar10 = *(float *)(param_1 + 0x334);
  iVar7 = (int)((float)(iVar5 - *(int *)(param_1 + 0x39c)) * 0.2);
  fVar9 = *(float *)(param_1 + 0x338);
  iVar5 = 0x7fffffff;
  if (iVar7 < 1) {
    iVar5 = 0;
  }
  iVar8 = 0;
  if (iVar7 < 1) {
    iVar8 = -0x7fffffff;
  }
  iVar1 = iVar7;
  if (iVar5 <= iVar7) {
    iVar1 = iVar5;
  }
  if (iVar8 <= iVar7) {
    iVar8 = iVar1;
  }
  *(int *)(param_1 + 0x39c) = iVar8 + *(int *)(param_1 + 0x39c);
  if (((fVar19 == fVar11) && (fVar20 == fVar10)) && (fVar18 == fVar9)) {
    fVar15 = fVar19;
    fVar13 = fVar18;
    fVar14 = fVar20;
    goto LAB_013b9250;
  }
  fVar21 = fVar19 - fVar11;
  fVar22 = fVar20 - fVar10;
  fVar23 = fVar18 - fVar9;
  fVar12 = 0.05;
  if (3 < uVar2) {
    fVar12 = 0.0;
  }
  fVar16 = fVar12 * SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23);
  bVar3 = false;
  bVar4 = true;
  if (-1.1920929e-07 <= fVar16) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar16)) {
      bVar3 = fVar16 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar16;
    }
  }
  fVar15 = fVar11;
  fVar13 = fVar9;
  fVar14 = fVar10;
  if (!bVar4 || bVar3) goto LAB_013b9250;
  fVar21 = fVar12 * fVar21;
  fVar22 = fVar12 * fVar22;
  fVar12 = fVar12 * fVar23;
  if (fVar16 <= fVar17) {
    if (fVar16 < 0.0) {
      fVar17 = 0.0 / fVar16;
      goto LAB_013b9238;
    }
  }
  else {
    fVar17 = fVar17 / fVar16;
LAB_013b9238:
    fVar21 = fVar21 * fVar17;
    fVar22 = fVar22 * fVar17;
    fVar12 = fVar12 * fVar17;
  }
  fVar15 = fVar19 - fVar21;
  fVar14 = fVar20 - fVar22;
  fVar13 = fVar18 - fVar12;
LAB_013b9250:
  if (((fVar15 != fVar11) || (fVar14 != fVar10)) || (fVar13 != fVar9)) {
    *(float *)(param_1 + 0x38c) = fVar15;
    *(float *)(param_1 + 0x390) = fVar14;
    *(float *)(param_1 + 0x394) = fVar13;
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
  (**(code **)(*plVar6 + 0x100))(plVar6,param_1 + 0x38c);
  plVar6 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
                    /* WARNING: Could not recover jumptable at 0x013b92b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x160))(plVar6,param_1 + 0x39c);
  return;
}

