
void FUN_0153bb64(long param_1,undefined8 *param_2,float *param_3,int *param_4,undefined4 param_5)

{
  ulong uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_34;
  
  if (*(long *)(param_1 + 0x290) != 0) {
    local_34 = param_5;
    FUN_015380bc(param_1,&local_34);
    fVar6 = (float)*param_2;
    fVar11 = fVar6 * 0.0;
    fVar4 = (float)((ulong)*param_2 >> 0x20);
    fVar13 = fVar4 * 0.0;
    fVar5 = (float)param_2[1];
    fVar15 = fVar5 * 0.0;
    fVar7 = (float)((ulong)param_2[1] >> 0x20);
    fVar17 = fVar7 * 0.0;
    fVar8 = (float)param_2[2];
    fVar9 = (float)((ulong)param_2[2] >> 0x20);
    fVar10 = (float)param_2[3];
    fVar19 = (float)((ulong)param_2[3] >> 0x20);
    fVar21 = (float)param_2[4];
    fVar22 = (float)((ulong)param_2[4] >> 0x20);
    fVar23 = (float)param_2[5];
    fVar20 = (float)((ulong)param_2[5] >> 0x20);
    fVar3 = fVar6 + fVar8 * 0.0 + fVar21 * 0.0 + 0.0;
    fVar4 = fVar4 + fVar9 * 0.0 + fVar22 * 0.0 + 0.0;
    fVar5 = fVar5 + fVar10 * 0.0 + fVar23 * 0.0 + 0.0;
    fVar6 = -*(float *)(param_1 + 0x278) + fVar7 + fVar19 * 0.0 + fVar20 * 0.0;
    fVar12 = fVar8 + fVar11 + fVar21 * 0.0 + 0.0;
    fVar14 = fVar9 + fVar13 + fVar22 * 0.0 + 0.0;
    fVar16 = fVar10 + fVar15 + fVar23 * 0.0 + 0.0;
    fVar18 = -*(float *)(param_1 + 0x27c) + fVar19 + fVar17 + fVar20 * 0.0;
    fVar7 = fVar21 + fVar11 + fVar8 * 0.0 + 0.0;
    fVar8 = fVar22 + fVar13 + fVar9 * 0.0 + 0.0;
    fVar9 = fVar23 + fVar15 + fVar10 * 0.0 + 0.0;
    fVar10 = -*(float *)(param_1 + 0x280) + fVar20 + fVar17 + fVar19 * 0.0;
    param_2[1] = CONCAT44(fVar6,fVar5);
    *param_2 = CONCAT44(fVar4,fVar3);
    param_2[3] = CONCAT44(fVar18,fVar16);
    param_2[2] = CONCAT44(fVar14,fVar12);
    param_2[5] = CONCAT44(fVar10,fVar9);
    param_2[4] = CONCAT44(fVar8,fVar7);
    uVar2 = *param_4 + *(int *)(*(long *)(*(long *)(param_1 + 0x290) + 0x68) + 0x2b4);
    uVar1 = (ulong)(uVar2 >> 0x18);
    fVar19 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    fVar15 = (float)(&DAT_04199798)[uVar1 * 4] + fVar19 * (float)(&DAT_0419979c)[uVar1 * 4];
    fVar21 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar19 * (float)(&DAT_041997a4)[uVar1 * 4];
    fVar11 = -((float)(&DAT_0419979c)[uVar1 * 4] * fVar19) - (float)(&DAT_04199798)[uVar1 * 4];
    fVar22 = fVar15 * 0.0;
    fVar15 = fVar15 + 0.0;
    fVar17 = fVar22 * 0.0 + 1.0;
    fVar23 = fVar21 * 0.0;
    fVar19 = fVar6 * fVar21 + fVar18 * fVar22 + fVar10 * fVar15 + 0.0;
    fVar13 = fVar6 * fVar11 + fVar18 * fVar23 + fVar10 * fVar21 + 0.0;
    param_2[1] = CONCAT44(fVar19,fVar5 * fVar21 + fVar16 * fVar22 + fVar9 * fVar15 + 0.0);
    *param_2 = CONCAT44(fVar4 * fVar21 + fVar14 * fVar22 + fVar8 * fVar15 + 0.0,
                        fVar3 * fVar21 + fVar12 * fVar22 + fVar7 * fVar15 + 0.0);
    fVar6 = fVar6 * fVar23 + fVar18 * fVar17 + fVar10 * fVar22 + 0.0;
    param_2[3] = CONCAT44(fVar6,fVar5 * fVar23 + fVar16 * fVar17 + fVar9 * fVar22 + 0.0);
    param_2[2] = CONCAT44(fVar4 * fVar23 + fVar14 * fVar17 + fVar8 * fVar22 + 0.0,
                          fVar3 * fVar23 + fVar12 * fVar17 + fVar7 * fVar22 + 0.0);
    param_2[5] = CONCAT44(fVar13,fVar5 * fVar11 + fVar16 * fVar23 + fVar9 * fVar21 + 0.0);
    param_2[4] = CONCAT44(fVar4 * fVar11 + fVar14 * fVar23 + fVar8 * fVar21 + 0.0,
                          fVar3 * fVar11 + fVar12 * fVar23 + fVar7 * fVar21 + 0.0);
    fVar4 = *param_3;
    fVar3 = *(float *)(param_1 + 0x284);
    fVar5 = *(float *)(param_1 + 0x28c);
    fVar7 = param_3[2];
    *(float *)((long)param_2 + 0x1c) = *(float *)(param_1 + 0x288) + param_3[1] + fVar6;
    *(float *)((long)param_2 + 0xc) = fVar3 + fVar4 + fVar19;
    *(float *)((long)param_2 + 0x2c) = fVar13 + fVar5 + fVar7;
  }
  return;
}

