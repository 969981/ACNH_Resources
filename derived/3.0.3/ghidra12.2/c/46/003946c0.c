
void FUN_003946c0(long param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5,
                 uint param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
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
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar18 = NEON_rev64(param_5[6],4);
  fVar15 = (float)param_5[3];
  fVar17 = (float)uVar18;
  fVar16 = (float)((ulong)param_5[3] >> 0x20);
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  fVar20 = (float)DAT_04101678;
  fVar21 = (float)((ulong)DAT_04101678 >> 0x20);
  fVar3 = fVar15 * fVar17 * fVar20 + fVar16 * fVar19 * fVar21;
  if (fVar3 != 0.0) {
    uVar18 = param_5[2];
    uVar6 = param_5[5];
    fVar10 = (float)param_5[4];
    fVar13 = (float)param_5[1];
    fVar11 = (float)((ulong)param_5[4] >> 0x20);
    fVar14 = (float)((ulong)param_5[1] >> 0x20);
    fVar4 = ((fVar10 - fVar13) * fVar17 * fVar20 + (fVar11 - fVar14) * fVar19 * fVar21) / fVar3;
    fVar5 = fVar13 + fVar15 * fVar4;
    fVar7 = fVar14 + fVar16 * fVar4;
    fVar8 = (float)*param_5;
    fVar22 = fVar5 - fVar8;
    fVar9 = (float)((ulong)*param_5 >> 0x20);
    fVar23 = fVar7 - fVar9;
    fVar4 = (float)FUN_0038ef70(*(long *)(param_4 + 2) + 0x20);
    if (fVar4 * *param_4 <= SQRT(fVar22 * fVar22 + fVar23 * fVar23)) {
      if ((param_6 & 1) == 0) {
        return;
      }
      iVar2 = param_7 + 1;
      *(int *)*param_3 = param_7;
      *param_3 = *param_3 + 4;
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    }
    else {
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + -1;
      fVar4 = (float)uVar18;
      fVar23 = (float)uVar6;
      fVar22 = (float)((ulong)uVar18 >> 0x20);
      fVar12 = (float)((ulong)uVar6 >> 0x20);
      *param_3 = *param_3 + 4;
      piVar1 = (int *)(param_1 + 0xec);
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      fVar3 = ((fVar23 - fVar4) * fVar17 * fVar20 + (fVar12 - fVar22) * fVar19 * fVar21) / fVar3;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(float *)*param_2 = fVar13;
      *(float *)(*param_2 + 4) = fVar14;
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      *(float *)*param_2 = fVar8;
      *(float *)(*param_2 + 4) = fVar9;
      *param_2 = *param_2 + 8;
      iVar2 = *(int *)(param_1 + 0xe8) + 1;
      *(int *)(param_1 + 0xe8) = iVar2;
      *(int *)*param_3 = iVar2;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(float *)*param_2 = fVar5;
      *(float *)(*param_2 + 4) = fVar7;
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      *(float *)*param_2 = fVar10;
      *(float *)(*param_2 + 4) = fVar11;
      *param_2 = *param_2 + 8;
      iVar2 = *(int *)(param_1 + 0xe8);
      *(int *)(param_1 + 0xe8) = iVar2 + 1;
      *(int *)*param_3 = iVar2;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(float *)*param_2 = fVar23;
      *(float *)(*param_2 + 4) = fVar12;
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      *(float *)*param_2 = fVar4 + fVar15 * fVar3;
      *(float *)(*param_2 + 4) = fVar22 + fVar16 * fVar3;
      *param_2 = *param_2 + 8;
      iVar2 = *(int *)(param_1 + 0xe8) + 1;
      *(int *)(param_1 + 0xe8) = iVar2;
      *(int *)*param_3 = iVar2;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(float *)*param_2 = fVar8;
      *(float *)(*param_2 + 4) = fVar9;
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      *(float *)*param_2 = fVar4;
      *(float *)(*param_2 + 4) = fVar22;
      *param_2 = *param_2 + 8;
      iVar2 = *(int *)(param_1 + 0xe8);
      *(int *)(param_1 + 0xe8) = iVar2 + 1;
      if ((param_6 & 1) != 0) {
        return;
      }
      *(int *)*param_3 = iVar2;
      *param_3 = *param_3 + 4;
      iVar2 = *(int *)(param_1 + 0xe8);
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    }
    *(int *)*param_3 = iVar2;
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  }
  return;
}

