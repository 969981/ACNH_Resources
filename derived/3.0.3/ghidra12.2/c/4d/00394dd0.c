
void FUN_00394dd0(long param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5,
                 ulong *param_6,ulong *param_7,uint param_8)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (*(int *)(*(long *)(param_4 + 2) + 4) == 2) {
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    iVar4 = -(uint)((param_8 & 1) != 0);
    uVar8 = *param_7;
    uVar8 = uVar8 ^ (uVar8 ^ CONCAT44(0.0 - (float)(uVar8 >> 0x20),0.0 - (float)uVar8)) &
                    CONCAT44(iVar4,iVar4);
    fVar16 = (float)*(undefined8 *)param_4;
    fVar7 = (float)*param_5 + (float)uVar8 * fVar16;
    fVar5 = (float)((ulong)*param_5 >> 0x20) + (float)(uVar8 >> 0x20) * fVar16;
    fVar10 = (float)*param_6 * fVar16;
    fVar16 = (float)(*param_6 >> 0x20) * fVar16;
    *(float *)*param_2 = fVar10 + fVar7;
    *(float *)(*param_2 + 4) = fVar16 + fVar5;
    *param_2 = *param_2 + 8;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    *(float *)*param_2 = fVar7 - fVar10;
    *(float *)(*param_2 + 4) = fVar5 - fVar16;
    *param_2 = *param_2 + 8;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    return;
  }
  if (*(int *)(*(long *)(param_4 + 2) + 4) == 1) {
    uVar8 = *param_6;
    iVar4 = -(uint)((param_8 & 1) != 0);
    fVar16 = *param_4;
    fVar7 = param_4[1];
    uVar2 = *(undefined4 *)(param_1 + 0xe8);
    uVar8 = uVar8 ^ (uVar8 ^ CONCAT44(0.0 - (float)(uVar8 >> 0x20),0.0 - (float)uVar8)) &
                    CONCAT44(iVar4,iVar4);
    *(undefined4 *)*param_2 = *(undefined4 *)param_5;
    *(undefined4 *)(*param_2 + 4) = *(undefined4 *)((long)param_5 + 4);
    *param_2 = *param_2 + 8;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    fVar10 = (float)uVar8;
    fVar11 = (float)(uVar8 >> 0x20);
    fVar5 = acosf(fVar10 * (float)DAT_041015a8 + fVar11 * (float)((ulong)DAT_041015a8 >> 0x20));
    puVar3 = PTR_SinCosSampleTable_04bcef98;
    if (-1 < (int)fVar7) {
      fVar9 = *(float *)PTR_FloatPi_04bcee68;
      fVar6 = fVar9 + (fVar9 - fVar5);
      if (0.0 <= fVar10 * (float)DAT_041015b0 * (float)DAT_04101678 +
                 fVar11 * (float)((ulong)DAT_041015b0 >> 0x20) *
                 (float)((ulong)DAT_04101678 >> 0x20)) {
        fVar6 = fVar5;
      }
      fVar10 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
      fVar5 = *(float *)PTR_FloatPi_04bcedc8;
      iVar4 = (int)fVar7 + 1;
      do {
        fVar11 = (fVar10 / fVar5) * fVar6;
        uVar12 = *param_5;
        fVar6 = fVar9 / (float)(int)fVar7 + fVar6;
        iVar4 = iVar4 + -1;
        uVar8 = (ulong)fVar11;
        pfVar1 = (float *)(puVar3 + (uVar8 >> 0x18 & 0xff) * 0x10);
        fVar14 = *pfVar1;
        fVar13 = pfVar1[1];
        fVar17 = pfVar1[2];
        fVar15 = pfVar1[3];
        *(undefined4 *)*param_3 = uVar2;
        *param_3 = *param_3 + 4;
        fVar11 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
        *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
        *param_3 = *param_3 + 4;
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
        *(float *)*param_2 = (float)uVar12 + fVar16 * (fVar14 + fVar11 * fVar17);
        *(float *)(*param_2 + 4) =
             (float)((ulong)uVar12 >> 0x20) - fVar16 * (fVar13 + fVar11 * fVar15);
        *param_2 = *param_2 + 8;
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      } while (iVar4 != 0);
    }
  }
  return;
}

