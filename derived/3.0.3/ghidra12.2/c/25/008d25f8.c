
void FUN_008d25f8(float param_1,float param_2,long param_3,uint *param_4,float *param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  bVar3 = false;
  bVar4 = true;
  if (-0.01 <= param_1) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(param_1)) {
      bVar3 = param_1 == 0.01;
      bVar4 = 0.01 <= param_1;
    }
  }
  if (!bVar4 || bVar3) {
    *(float *)(param_3 + 0x315e0) = *(float *)(param_3 + 0x315e0) * 0.5;
    *param_5 = param_1;
    return;
  }
  uVar6 = *param_4;
  fVar9 = param_1 * 0.6;
  fVar8 = *(float *)(param_3 + 0x315e0);
  if (fVar8 != fVar9) {
    fVar11 = fVar9 - fVar8;
    fVar10 = -fVar11;
    if (0.0 <= fVar11) {
      fVar10 = fVar11;
    }
    if (0.0 < fVar10) {
      fVar10 = fVar11 * 0.5;
      fVar9 = 0.0;
      if (fVar11 <= 0.0) {
        fVar9 = -2.0;
      }
      fVar12 = 2.0;
      if (fVar11 <= 0.0) {
        fVar12 = -0.0;
      }
      if (fVar10 <= fVar12) {
        fVar12 = fVar10;
      }
      if (fVar9 <= fVar10) {
        fVar9 = fVar12;
      }
      fVar9 = fVar8 + fVar9;
    }
    fVar8 = fVar9;
    *(float *)(param_3 + 0x315e0) = fVar8;
  }
  uVar6 = uVar6 + (int)(long)(fVar8 * 11930465.0);
  uVar1 = -uVar6;
  if (uVar6 < 0x80000001) {
    uVar1 = uVar6;
  }
  iVar5 = 1;
  if (0x80000000 < uVar6) {
    iVar5 = -1;
  }
  iVar2 = 0;
  if (uVar6 != 0) {
    iVar2 = iVar5;
  }
  uVar7 = (uint)(long)(param_2 * 11930465.0);
  if (uVar7 <= uVar1) {
    uVar6 = iVar2 * uVar7;
  }
  if (((DAT_04ced598 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04ced598), iVar5 != 0)) {
    DAT_04ced590 = 0;
    __cxa_guard_release(&DAT_04ced598);
  }
  if (((param_1 <= 0.0) || (*param_5 <= 0.0)) && ((0.0 <= param_1 || (0.0 <= *param_5))))
  goto LAB_008d27f8;
  fVar8 = (float)NEON_ucvtf(*param_4);
  fVar8 = fVar8 * 8.381903e-08;
  fVar9 = fVar8 + -360.0;
  if (fVar8 <= 180.0) {
    fVar9 = fVar8;
  }
  fVar10 = (float)DAT_04ced590 * 8.381903e-08;
  fVar8 = fVar10 + -360.0;
  if (fVar10 <= 180.0) {
    fVar8 = fVar10;
  }
  if (fVar9 < fVar8) {
code_r0x008d27bc:
    if (fVar8 < fVar9) goto LAB_008d27f8;
    fVar10 = (float)uVar6 * 8.381903e-08;
    fVar9 = fVar10 + -360.0;
    if (fVar10 <= 180.0) {
      fVar9 = fVar10;
    }
    if (fVar9 <= fVar8) goto LAB_008d27f8;
  }
  else {
    fVar11 = (float)uVar6 * 8.381903e-08;
    fVar10 = fVar11 + -360.0;
    if (fVar11 <= 180.0) {
      fVar10 = fVar11;
    }
    if (fVar8 <= fVar10) goto code_r0x008d27bc;
  }
  uVar6 = DAT_04ced590;
LAB_008d27f8:
  *param_4 = uVar6;
  *param_5 = param_1;
  return;
}

