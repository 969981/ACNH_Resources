
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d1b30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar2 = *param_2;
  fVar1 = (float)uVar2;
  fVar8 = (float)param_2[2];
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  fVar5 = (float)((ulong)param_2[2] >> 0x20);
  fVar4 = (float)param_2[1];
  fVar6 = (float)param_2[3];
  if (fVar6 < fVar4 || (fVar8 < fVar1 || fVar5 < fVar3)) {
    param_4[1] = param_2[1];
    *param_4 = uVar2;
    uVar2 = param_2[2];
    param_4[3] = param_2[3];
    param_4[2] = uVar2;
    return;
  }
  auVar12._8_8_ = _UNK_0413f418;
  auVar12._0_8_ = DAT_0413f410;
  auVar14 = NEON_ext(auVar12,auVar12,8,1);
  auVar12 = NEON_ext(auVar14,auVar12,8,1);
  fVar9 = (fVar1 + fVar8) * auVar12._0_4_;
  fVar10 = (fVar3 + fVar5) * auVar12._4_4_;
  fVar11 = (fVar4 + fVar6) * auVar12._8_4_;
  fVar1 = (fVar8 - fVar1) * auVar12._0_4_;
  fVar3 = (fVar5 - fVar3) * auVar12._4_4_;
  fVar4 = (fVar6 - fVar4) * auVar12._8_4_;
  fVar8 = (float)param_1[4];
  fVar5 = (float)((ulong)param_1[4] >> 0x20);
  fVar6 = (float)param_1[5];
  fVar7 = (float)((ulong)param_1[5] >> 0x20);
  fVar16 = (float)*param_3;
  fVar17 = (float)((ulong)*param_3 >> 0x20);
  fVar18 = (float)*param_1;
  fVar19 = (float)((ulong)*param_1 >> 0x20);
  fVar20 = (float)param_1[1];
  fVar21 = (float)((ulong)param_1[1] >> 0x20);
  fVar22 = (float)param_1[2];
  fVar23 = (float)((ulong)param_1[2] >> 0x20);
  fVar24 = (float)param_1[3];
  fVar25 = (float)((ulong)param_1[3] >> 0x20);
  fVar13 = ABS(fVar18 * fVar1) + ABS(fVar22 * fVar3) + ABS(fVar8 * fVar4) + fVar16;
  fVar15 = ABS(fVar19 * fVar1) + ABS(fVar23 * fVar3) + ABS(fVar5 * fVar4) + fVar17;
  fVar16 = ABS(fVar20 * fVar1) + ABS(fVar24 * fVar3) + ABS(fVar6 * fVar4) + fVar16;
  fVar17 = ABS(fVar21 * fVar1) + ABS(fVar25 * fVar3) + ABS(fVar7 * fVar4) + fVar17;
  fVar1 = *(float *)(param_1 + 6) + fVar8 * fVar11 + fVar18 * fVar9 + fVar22 * fVar10;
  fVar3 = *(float *)((long)param_1 + 0x34) + fVar5 * fVar11 + fVar19 * fVar9 + fVar23 * fVar10;
  fVar4 = *(float *)(param_1 + 7) + fVar6 * fVar11 + fVar20 * fVar9 + fVar24 * fVar10;
  fVar8 = *(float *)((long)param_1 + 0x3c) + fVar7 * fVar11 + fVar21 * fVar9 + fVar25 * fVar10;
  param_4[1] = CONCAT44(fVar8 - fVar17,fVar4 - fVar16);
  *param_4 = CONCAT44(fVar3 - fVar15,fVar1 - fVar13);
  param_4[3] = CONCAT44(fVar17 + fVar8,fVar16 + fVar4);
  param_4[2] = CONCAT44(fVar15 + fVar3,fVar13 + fVar1);
  return;
}

