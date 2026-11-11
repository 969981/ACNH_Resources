
void FUN_003906a0(long param_1,long *param_2,int *param_3)

{
  float *pfVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 uVar9;
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
  float local_60 [6];
  undefined1 *puStack_48;
  
  puVar7 = (undefined8 *)*param_2;
  fVar10 = *(float *)(param_1 + 0x34) * 0.5;
  fVar8 = *(float *)(param_1 + 0x30) * 0.5;
  if (*(float *)(param_1 + 0x38) <= fVar8) {
    fVar8 = *(float *)(param_1 + 0x38);
  }
  if (fVar8 <= fVar10) {
    fVar10 = fVar8;
  }
  fVar8 = acosf(-2.0 / fVar10 + 1.0);
  puVar2 = PTR_SinCosSampleTable_04bcef98;
  if (fVar8 <= 0.0) {
    uVar4 = 1;
  }
  else {
    uVar4 = (int)(*(float *)PTR_FloatPi_04bcee68 / fVar8) + 1;
    if (uVar4 == 0xffffffff) goto LAB_0039090c;
  }
  uVar5 = 0;
  fVar13 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
  fVar8 = *(float *)PTR_FloatPi_04bcee68 * 0.5;
  fVar11 = fVar8 / (float)uVar4;
  fVar12 = *(float *)PTR_FloatPi_04bcedc8;
  do {
    fVar18 = *(float *)(param_1 + 0x38);
    local_60[0] = 1.0;
    local_60[1] = -1.0;
    local_60[2] = -1.0;
    local_60[3] = -1.0;
    local_60[4] = -1.0;
    local_60[5] = 1.0;
    puStack_48 = &DAT_3f8000003f800000;
    fVar16 = *(float *)(param_1 + 0x34) * 0.5;
    fVar14 = *(float *)(param_1 + 0x30) * 0.5;
    fVar15 = fVar14;
    if (fVar18 <= fVar14) {
      fVar15 = fVar18;
    }
    fVar17 = fVar16;
    if (fVar15 <= fVar16) {
      fVar17 = fVar15;
    }
    fVar15 = *(float *)(param_1 + 0x28) + (fVar14 - fVar17) * local_60[uVar5 * 2];
    fVar16 = *(float *)(param_1 + 0x2c) + (fVar16 - fVar17) * local_60[uVar5 * 2 + 1];
    fVar14 = fVar8 * (float)(int)uVar5;
    if ((uVar5 & 1) == 0) {
      if (*(float *)(param_1 + 0x30) < fVar18 + fVar18) goto LAB_00390888;
LAB_00390808:
      uVar6 = uVar4 + 1;
      do {
        fVar18 = fVar14 * (fVar13 / fVar12);
        fVar14 = fVar11 + fVar14;
        uVar6 = uVar6 - 1;
        uVar3 = (ulong)fVar18;
        pfVar1 = (float *)(puVar2 + (uVar3 >> 0x18 & 0xff) * 0x10);
        fVar19 = pfVar1[3];
        fVar18 = (float)((uint)uVar3 & 0xffffff) * 5.9604645e-08;
        fVar17 = pfVar1[1];
        *(float *)*param_2 = fVar15 + fVar10 * (*pfVar1 + fVar18 * pfVar1[2]);
        *(float *)(*param_2 + 4) = fVar16 - fVar10 * (fVar17 + fVar18 * fVar19);
        *param_2 = *param_2 + 8;
        *param_3 = *param_3 + 1;
      } while (uVar6 != 0);
    }
    else {
      if (fVar18 + fVar18 <= *(float *)(param_1 + 0x34)) goto LAB_00390808;
LAB_00390888:
      uVar6 = 0;
      do {
        if (uVar6 < uVar4) {
          uVar3 = (ulong)(fVar14 * (fVar13 / fVar12));
          pfVar1 = (float *)(puVar2 + (uVar3 >> 0x18 & 0xff) * 0x10);
          fVar19 = pfVar1[1];
          fVar18 = (float)((uint)uVar3 & 0xffffff) * 5.9604645e-08;
          fVar17 = pfVar1[3];
          *(float *)*param_2 = fVar15 + fVar10 * (*pfVar1 + fVar18 * pfVar1[2]);
          *(float *)(*param_2 + 4) = fVar16 - fVar10 * (fVar19 + fVar18 * fVar17);
          *param_2 = *param_2 + 8;
          *param_3 = *param_3 + 1;
        }
        fVar14 = fVar11 + fVar14;
        uVar6 = uVar6 + 1;
      } while (uVar4 + 1 != uVar6);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 4);
LAB_0039090c:
  uVar9 = *puVar7;
  *(int *)*param_2 = (int)uVar9;
  *(int *)(*param_2 + 4) = (int)((ulong)uVar9 >> 0x20);
  *param_2 = *param_2 + 8;
  *param_3 = *param_3 + 1;
  return;
}

