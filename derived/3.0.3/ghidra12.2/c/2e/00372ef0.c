
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00372ef0(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                 float *param_5,undefined8 param_6,undefined8 *param_7)

{
  float extraout_s0;
  float fVar1;
  float extraout_var;
  float fVar2;
  float extraout_var_00;
  float fVar3;
  float extraout_var_01;
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
  
  fVar7 = param_3._12_4_;
  fVar3 = param_3._8_4_;
  fVar2 = param_3._4_4_;
  fVar8 = param_2._12_4_;
  fVar6 = param_2._8_4_;
  fVar5 = param_2._4_4_;
  fVar4 = param_2._0_4_;
  fVar1 = param_3._0_4_;
  FUN_003728e0(param_6);
  fVar10 = extraout_s0;
  fVar11 = extraout_var;
  fVar12 = extraout_var_00;
  fVar13 = extraout_var_01;
  if (param_7 != (undefined8 *)0x0) {
    fVar9 = (float)param_7[3];
    fVar15 = (float)param_7[2];
    fVar17 = (float)((ulong)param_7[2] >> 0x20);
    fVar13 = (float)*param_7;
    fVar14 = (float)((ulong)*param_7 >> 0x20);
    fVar16 = (float)param_7[1];
    fVar10 = extraout_s0 * fVar13 + fVar4 * fVar14 + fVar1 * fVar16 + 0.0;
    fVar11 = extraout_var * fVar13 + fVar5 * fVar14 + fVar2 * fVar16 + 0.0;
    fVar12 = extraout_var_00 * fVar13 + fVar6 * fVar14 + fVar3 * fVar16 + 0.0;
    fVar13 = (float)((ulong)param_7[1] >> 0x20) +
             extraout_var_01 * fVar13 + fVar8 * fVar14 + fVar7 * fVar16;
    fVar4 = extraout_s0 * fVar15 + fVar4 * fVar17 + fVar1 * fVar9 + 0.0;
    fVar5 = extraout_var * fVar15 + fVar5 * fVar17 + fVar2 * fVar9 + 0.0;
    fVar6 = extraout_var_00 * fVar15 + fVar6 * fVar17 + fVar3 * fVar9 + 0.0;
    fVar8 = (float)((ulong)param_7[3] >> 0x20) +
            extraout_var_01 * fVar15 + fVar8 * fVar17 + fVar7 * fVar9;
  }
  fVar14 = param_1 * 0.5;
  fVar16 = fVar14 + param_3._0_4_;
  fVar17 = param_2._0_4_ * 0.5;
  fVar7 = (float)((ulong)_DAT_041023d0 >> 0x20);
  fVar15 = (float)((ulong)_UNK_041023d8 >> 0x20);
  fVar1 = fVar10 * 1.0 + fVar11 * 0.0 + (float)_DAT_041023d0 * fVar12 + 0.0;
  fVar2 = fVar10 * 0.0 + fVar11 * 1.0 + fVar7 * fVar12 + 0.0;
  fVar3 = fVar10 * 0.0 + fVar11 * 0.0 + (float)_UNK_041023d8 * fVar12 + 0.0;
  fVar13 = fVar13 + fVar16 * fVar10 + (param_4 - fVar17) * fVar11 + fVar15 * fVar12;
  fVar10 = fVar4 * 1.0 + fVar5 * 0.0 + (float)_DAT_041023d0 * fVar6 + 0.0;
  fVar12 = fVar4 * 0.0 + fVar5 * 1.0 + fVar7 * fVar6 + 0.0;
  fVar7 = fVar4 * 0.0 + fVar5 * 0.0 + (float)_UNK_041023d8 * fVar6 + 0.0;
  fVar8 = fVar8 + fVar16 * fVar4 + (param_4 - fVar17) * fVar5 + fVar15 * fVar6;
  fVar11 = fVar1 * -(param_1 * 0.5);
  fVar4 = fVar10 * -(param_1 * 0.5);
  fVar1 = fVar1 * fVar14;
  fVar10 = fVar10 * fVar14;
  fVar14 = fVar13 + (fVar1 - fVar2 * fVar17) + fVar3 * 0.0;
  fVar16 = fVar8 + (fVar10 - fVar12 * fVar17) + fVar7 * 0.0;
  fVar5 = fVar13 + fVar11 + fVar2 * fVar17 + fVar3 * 0.0;
  fVar6 = fVar8 + fVar4 + fVar12 * fVar17 + fVar7 * 0.0;
  fVar1 = fVar13 + fVar1 + fVar2 * fVar17 + fVar3 * 0.0;
  fVar15 = fVar8 + fVar10 + fVar12 * fVar17 + fVar7 * 0.0;
  fVar13 = fVar13 + (fVar11 - fVar2 * fVar17) + fVar3 * 0.0;
  fVar8 = fVar8 + (fVar4 - fVar12 * fVar17) + fVar7 * 0.0;
  fVar10 = -3.4028235e+38;
  if (-3.4028235e+38 <= fVar5) {
    fVar10 = fVar5;
  }
  fVar11 = -3.4028235e+38;
  if (-3.4028235e+38 <= fVar6) {
    fVar11 = fVar6;
  }
  fVar12 = 3.4028235e+38;
  if (fVar5 <= 3.4028235e+38) {
    fVar12 = fVar5;
  }
  fVar4 = 3.4028235e+38;
  if (fVar6 <= 3.4028235e+38) {
    fVar4 = fVar6;
  }
  if (fVar10 <= fVar1) {
    fVar10 = fVar1;
  }
  if (fVar11 <= fVar15) {
    fVar11 = fVar15;
  }
  if (fVar1 <= fVar12) {
    fVar12 = fVar1;
  }
  if (fVar15 <= fVar4) {
    fVar4 = fVar15;
  }
  if (fVar10 <= fVar14) {
    fVar10 = fVar14;
  }
  if (fVar11 <= fVar16) {
    fVar11 = fVar16;
  }
  if (fVar14 <= fVar12) {
    fVar12 = fVar14;
  }
  if (fVar16 <= fVar4) {
    fVar4 = fVar16;
  }
  if (fVar10 <= fVar13) {
    fVar10 = fVar13;
  }
  if (fVar11 <= fVar8) {
    fVar11 = fVar8;
  }
  if (fVar13 <= fVar12) {
    fVar12 = fVar13;
  }
  if (fVar8 <= fVar4) {
    fVar4 = fVar8;
  }
  *param_5 = fVar12;
  param_5[1] = fVar11;
  param_5[2] = fVar10;
  param_5[3] = fVar4;
  return;
}

