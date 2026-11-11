
void FUN_00394b70(long param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5,
                 undefined8 *param_6,uint param_7)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  *(int *)*param_3 = *(int *)(param_1 + 0xe8) + -1;
  *param_3 = *param_3 + 4;
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
  *param_3 = *param_3 + 4;
  uVar2 = *(undefined4 *)(param_1 + 0xe8);
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  fVar16 = *param_4;
  fVar3 = param_4[1];
  *(int *)*param_2 = (int)*param_5;
  *(undefined4 *)(*param_2 + 4) = *(undefined4 *)((long)param_5 + 4);
  *param_2 = *param_2 + 8;
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  fVar10 = (float)*param_6;
  fVar11 = (float)((ulong)*param_6 >> 0x20);
  fVar7 = acosf(fVar10 * (float)DAT_041015a8 + fVar11 * (float)((ulong)DAT_041015a8 >> 0x20));
  puVar4 = PTR_SinCosSampleTable_04bcef98;
  if (-1 < (int)fVar3) {
    fVar9 = *(float *)PTR_FloatPi_04bcee68;
    fVar8 = fVar9 + (fVar9 - fVar7);
    if (0.0 <= fVar10 * (float)DAT_041015b0 * (float)DAT_04101678 +
               fVar11 * (float)((ulong)DAT_041015b0 >> 0x20) * (float)((ulong)DAT_04101678 >> 0x20))
    {
      fVar8 = fVar7;
    }
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
    fVar7 = *(float *)PTR_FloatPi_04bcedc8;
    iVar5 = (int)fVar3 + 1;
    do {
      fVar11 = (fVar10 / fVar7) * fVar8;
      uVar12 = *param_5;
      fVar8 = fVar9 / (float)(int)fVar3 + fVar8;
      iVar5 = iVar5 + -1;
      uVar6 = (ulong)fVar11;
      pfVar1 = (float *)(puVar4 + (uVar6 >> 0x18 & 0xff) * 0x10);
      fVar14 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar17 = pfVar1[2];
      fVar15 = pfVar1[3];
      *(undefined4 *)*param_3 = uVar2;
      *param_3 = *param_3 + 4;
      fVar11 = (float)((uint)uVar6 & 0xffffff) * 5.9604645e-08;
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      *param_3 = *param_3 + 4;
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      *(float *)*param_2 = (float)uVar12 + fVar16 * (fVar14 + fVar11 * fVar17);
      *(float *)(*param_2 + 4) =
           (float)((ulong)uVar12 >> 0x20) - fVar16 * (fVar13 + fVar11 * fVar15);
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    } while (iVar5 != 0);
  }
  if ((param_7 & 1) != 0) {
    *(int *)*param_3 = *(int *)(param_1 + 0xe8) + -1;
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  }
  return;
}

