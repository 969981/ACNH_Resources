
void FUN_00482420(undefined8 *param_1,undefined1 (*param_2) [12])

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar9 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar7 = (float)*(undefined8 *)*param_2;
  fVar8 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar16 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  fVar11 = (float)*(undefined8 *)*pauVar2;
  fVar13 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar18 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  uVar6 = *(undefined8 *)*pauVar1;
  fVar17 = (float)((ulong)uVar6 >> 0x20);
  auVar20._12_4_ = uVar16;
  auVar20._0_12_ = *pauVar2;
  auVar3._12_4_ = uVar16;
  auVar3._0_12_ = *pauVar2;
  auVar20 = NEON_ext(auVar20,auVar3,8,1);
  auVar19._12_4_ = uVar9;
  auVar19._0_12_ = *param_2;
  auVar21._12_4_ = uVar9;
  auVar21._0_12_ = *param_2;
  auVar19 = NEON_ext(auVar19,auVar21,8,1);
  auVar4._12_4_ = uVar18;
  auVar4._0_12_ = *pauVar1;
  auVar5._12_4_ = uVar18;
  auVar5._0_12_ = *pauVar1;
  auVar21 = NEON_ext(auVar4,auVar5,8,1);
  fVar10 = auVar21._4_4_;
  param_1[5] = auVar21._0_8_;
  param_1[4] = CONCAT44(auVar20._0_4_,auVar19._0_4_);
  param_1[1] = uVar6;
  *param_1 = CONCAT44(fVar11,fVar7);
  param_1[3] = CONCAT44(fVar10,fVar17);
  param_1[2] = CONCAT44(fVar13,fVar8);
  fVar12 = -(float)*(undefined8 *)param_2[4];
  fVar14 = -(float)((ulong)*(undefined8 *)param_2[4] >> 0x20);
  fVar15 = -(float)*(undefined8 *)(param_2[4] + 8);
  param_1[7] = CONCAT44(fVar10 * fVar15 + fVar17 * fVar12 + fVar10 * fVar14,
                        auVar21._0_4_ * fVar15 + (float)uVar6 * fVar12 + fVar17 * fVar14);
  param_1[6] = CONCAT44(auVar20._0_4_ * fVar15 + fVar11 * fVar12 + fVar13 * fVar14,
                        auVar19._0_4_ * fVar15 + fVar7 * fVar12 + fVar8 * fVar14);
  return;
}

