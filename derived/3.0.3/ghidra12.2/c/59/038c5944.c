
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_038c5944(long param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  float fVar2;
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
  float fVar24;
  float fVar25;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  fVar6 = *param_2;
  fVar2 = param_2[1];
  fVar12 = 0.0;
  fVar4 = 0.0;
  fVar8 = param_3[1] - fVar2;
  fVar7 = *param_3 - fVar6;
  fVar3 = param_2[2];
  fVar9 = param_3[2] - fVar3;
  fVar21 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9);
  fVar5 = 1.0 / fVar21;
  fVar10 = fVar8;
  if (0.0 < fVar21) {
    fVar10 = fVar8 * fVar5;
  }
  fVar11 = 0.0;
  fVar14 = fVar9;
  fVar17 = fVar7;
  if (0.0 < fVar21) {
    fVar14 = fVar9 * fVar5;
    fVar17 = fVar7 * fVar5;
  }
  fVar16 = fVar17 + fVar10 * 0.0 + fVar14 * 0.0 + 1.0;
  fVar5 = 1.0;
  if (1.1920929e-06 < fVar16) {
    fVar2 = SQRT(fVar16 + fVar16);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar16 + fVar16);
    }
    fVar4 = 1.0 / fVar2;
    fVar11 = fVar2 * 0.5 + fVar2 * 0.5;
    fVar12 = (fVar10 * -0.0 + fVar14 * 0.0) * fVar4;
    fVar5 = (fVar17 * 0.0 - fVar14) * fVar4;
    fVar4 = (fVar10 + fVar17 * -0.0) * fVar4;
    fVar3 = param_2[2];
    fVar9 = param_3[2] - fVar3;
    fVar6 = *param_2;
    fVar2 = param_2[1];
    fVar7 = *param_3 - fVar6;
    fVar8 = param_3[1] - fVar2;
  }
  fVar22 = fVar12 + fVar12;
  fVar17 = fVar5 * (fVar5 + fVar5);
  fVar14 = (fVar5 + fVar5) * fVar4;
  fVar2 = fVar8 * 0.5 + fVar2;
  fVar6 = fVar7 * 0.5 + fVar6;
  fVar16 = fVar4 * (fVar4 + fVar4);
  fVar10 = 1.0 - fVar12 * fVar22;
  fVar23 = fVar14 - fVar11 * fVar12;
  fVar14 = fVar11 * fVar12 + fVar14;
  fVar7 = (1.0 - fVar17) - fVar16;
  fVar24 = fVar5 * fVar22 - fVar11 * fVar4;
  fVar8 = fVar5 * fVar22 + fVar11 * fVar4;
  fVar16 = fVar10 - fVar16;
  fVar10 = fVar10 - fVar17;
  fVar25 = fVar11 * fVar5 + fVar22 * fVar4;
  fVar4 = fVar22 * fVar4 - fVar11 * fVar5;
  puVar1 = *(undefined8 **)(param_1 + 8);
  fVar5 = (float)_DAT_04102880;
  fVar12 = (float)((ulong)_DAT_04102880 >> 0x20);
  fVar15 = (float)_UNK_04102888;
  fVar18 = (float)_DAT_041023d0;
  fVar19 = (float)((ulong)_DAT_041023d0 >> 0x20);
  fVar20 = (float)_UNK_041023d8;
  fVar22 = fVar21 * fVar8 + fVar5 * fVar16 + fVar18 * fVar23 + 0.0;
  fVar13 = fVar8 * 0.0 + fVar12 * fVar16 + fVar19 * fVar23 + 0.0;
  fVar23 = fVar8 * 0.0 + fVar15 * fVar16 + fVar20 * fVar23 + 0.0;
  fVar17 = fVar21 * fVar7 + fVar5 * fVar24 + fVar18 * fVar25 + 0.0;
  fVar11 = fVar7 * 0.0 + fVar12 * fVar24 + fVar19 * fVar25 + 0.0;
  fVar16 = fVar7 * 0.0 + fVar15 * fVar24 + fVar20 * fVar25 + 0.0;
  fVar7 = fVar21 * fVar4 + fVar5 * fVar14 + fVar18 * fVar10 + 0.0;
  fVar8 = fVar4 * 0.0 + fVar12 * fVar14 + fVar19 * fVar10 + 0.0;
  fVar12 = fVar4 * 0.0 + fVar15 * fVar14 + fVar20 * fVar10 + 0.0;
  fVar3 = fVar9 * 0.5 + fVar3;
  fVar10 = (float)*puVar1;
  fVar4 = (float)((ulong)*puVar1 >> 0x20);
  fVar5 = (float)puVar1[1];
  local_40 = CONCAT44(fVar11 * fVar10 + fVar13 * fVar4 + fVar8 * fVar5 + 0.0,
                      fVar17 * fVar10 + fVar22 * fVar4 + fVar7 * fVar5 + 0.0);
  uStack_38 = CONCAT44((float)((ulong)puVar1[1] >> 0x20) +
                       fVar6 * fVar10 + fVar2 * fVar4 + fVar3 * fVar5,
                       fVar16 * fVar10 + fVar23 * fVar4 + fVar12 * fVar5 + 0.0);
  fVar10 = (float)puVar1[2];
  fVar4 = (float)((ulong)puVar1[2] >> 0x20);
  fVar5 = (float)puVar1[3];
  uStack_30 = CONCAT44(fVar11 * fVar10 + fVar13 * fVar4 + fVar8 * fVar5 + 0.0,
                       fVar17 * fVar10 + fVar22 * fVar4 + fVar7 * fVar5 + 0.0);
  uStack_28 = CONCAT44((float)((ulong)puVar1[3] >> 0x20) +
                       fVar6 * fVar10 + fVar2 * fVar4 + fVar3 * fVar5,
                       fVar16 * fVar10 + fVar23 * fVar4 + fVar12 * fVar5 + 0.0);
  fVar10 = (float)puVar1[4];
  fVar4 = (float)((ulong)puVar1[4] >> 0x20);
  fVar5 = (float)puVar1[5];
  uStack_18 = CONCAT44((float)((ulong)puVar1[5] >> 0x20) +
                       fVar6 * fVar10 + fVar2 * fVar4 + fVar3 * fVar5,
                       fVar16 * fVar10 + fVar23 * fVar4 + fVar12 * fVar5 + 0.0);
  local_20 = CONCAT44(fVar11 * fVar10 + fVar13 * fVar4 + fVar8 * fVar5 + 0.0,
                      fVar17 * fVar10 + fVar22 * fVar4 + fVar7 * fVar5 + 0.0);
  (**(code **)(**(long **)PTR_DAT_04bd0c50 + 0x48))
            (*(long **)PTR_DAT_04bd0c50,*(undefined8 *)(param_1 + 0x20),&local_40,param_4,param_5);
  return;
}

