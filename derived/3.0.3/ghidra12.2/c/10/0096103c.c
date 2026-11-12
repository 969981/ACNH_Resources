
void FUN_0096103c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  float fVar8;
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
  
  if (*(char *)(param_1 + 0x1b8) == '\0') {
    *(undefined1 *)(param_1 + 0x1b8) = 1;
    fVar8 = sinf(*(float *)(param_1 + 0x34));
    fVar9 = sinf(*(float *)(param_1 + 0x38));
    fVar10 = sinf(*(float *)(param_1 + 0x3c));
    fVar11 = cosf(*(float *)(param_1 + 0x34));
    fVar12 = cosf(*(float *)(param_1 + 0x38));
    fVar13 = cosf(*(float *)(param_1 + 0x3c));
    fVar16 = *(float *)(param_1 + 0x28) * fVar12 * fVar13;
    fVar17 = -(fVar9 * *(float *)(param_1 + 0x28));
    fVar14 = (-(fVar10 * fVar11) + fVar13 * fVar8 * fVar9) * *(float *)(param_1 + 0x2c) * 0.0;
    fVar20 = fVar14 + fVar16 * -0.5;
    fVar18 = *(float *)(param_1 + 0x48);
    fVar15 = fVar8 * fVar12 * *(float *)(param_1 + 0x2c) * 0.0;
    fVar19 = fVar15 + fVar17 * -0.5;
    fVar8 = (fVar8 * fVar10 + fVar9 * fVar11 * fVar13) * *(float *)(param_1 + 0x30);
    fVar12 = fVar11 * fVar12 * *(float *)(param_1 + 0x30);
    fVar9 = *(float *)(param_1 + 0x40);
    fVar21 = fVar9 + fVar20 + fVar8 * -0.5;
    fVar22 = fVar18 + fVar19 + fVar12 * -0.5;
    fVar14 = fVar14 + fVar16 * 0.5;
    fVar15 = fVar15 + fVar17 * 0.5;
    fVar16 = fVar9 + fVar20 + fVar8 * 0.5;
    fVar13 = fVar18 + fVar19 + fVar12 * 0.5;
    fVar10 = fVar9 + fVar14 + fVar8 * 0.5;
    fVar11 = fVar18 + fVar15 + fVar12 * 0.5;
    fVar9 = fVar9 + fVar14 + fVar8 * -0.5;
    fVar18 = fVar18 + fVar15 + fVar12 * -0.5;
    fVar8 = fVar21;
    if (fVar10 <= fVar21) {
      fVar8 = fVar10;
    }
    fVar12 = fVar21;
    if (fVar21 <= fVar10) {
      fVar12 = fVar10;
    }
    fVar14 = fVar16;
    if (fVar10 <= fVar16) {
      fVar14 = fVar10;
    }
    fVar15 = fVar16;
    if (fVar16 <= fVar10) {
      fVar15 = fVar10;
    }
    fVar10 = fVar22;
    if (fVar11 <= fVar22) {
      fVar10 = fVar11;
    }
    fVar17 = fVar22;
    if (fVar22 <= fVar11) {
      fVar17 = fVar11;
    }
    fVar19 = fVar13;
    if (fVar11 <= fVar13) {
      fVar19 = fVar11;
    }
    fVar20 = fVar13;
    if (fVar13 <= fVar11) {
      fVar20 = fVar11;
    }
    if (fVar13 <= fVar22) {
      fVar10 = fVar19;
    }
    if (fVar22 <= fVar13) {
      fVar17 = fVar20;
    }
    if (fVar16 <= fVar21) {
      fVar8 = fVar14;
    }
    if (fVar21 <= fVar16) {
      fVar12 = fVar15;
    }
    if (fVar9 <= fVar8) {
      fVar8 = fVar9;
    }
    if (fVar18 <= fVar10) {
      fVar10 = fVar18;
    }
    if (fVar12 <= fVar9) {
      fVar12 = fVar9;
    }
    if (fVar17 <= fVar18) {
      fVar17 = fVar18;
    }
    iVar2 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar3 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    iVar4 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    iVar5 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    iVar1 = iVar2;
    if (iVar4 <= iVar2) {
      iVar1 = iVar4;
    }
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    *(int *)(param_1 + 0x1e0) = iVar2;
    *(int *)(param_1 + 0x1d0) = iVar1;
    iVar1 = iVar3;
    if (iVar5 <= iVar3) {
      iVar1 = iVar5;
    }
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    *(int *)(param_1 + 0x1d4) = iVar1;
    puVar6 = PTR_DAT_04bb27c8;
    *(int *)(param_1 + 0x1e4) = iVar3;
    lVar7 = *(long *)(*(long *)puVar6 + 0xa8);
    if (lVar7 != 0) {
      FUN_00974960(lVar7,param_1 + 0x1c0,8);
      lVar7 = *(long *)(*(long *)puVar6 + 0xa8);
      if (lVar7 != 0) {
        FUN_00974a90(lVar7,param_1 + 0x1c0,1);
        return;
      }
    }
  }
  return;
}

