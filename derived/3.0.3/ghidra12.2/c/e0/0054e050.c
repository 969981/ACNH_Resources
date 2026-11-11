
void FUN_0054e050(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,float *param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  FUN_0054d9e0(param_1,param_2,param_5,param_6);
  fVar6 = ((float)*param_2 - *param_5) * *param_6;
  fVar7 = ((float)((ulong)*param_2 >> 0x20) - param_5[1]) * param_6[1];
  fVar10 = ((float)param_2[1] - param_5[2]) * param_6[2];
  fVar12 = ((float)((ulong)param_2[1] >> 0x20) - param_5[3]) * param_6[3];
  auVar16._4_4_ = fVar7;
  auVar16._0_4_ = fVar6;
  auVar16._8_4_ = fVar10;
  auVar16._12_4_ = fVar12;
  auVar17._4_4_ = fVar7;
  auVar17._0_4_ = fVar6;
  auVar17._8_4_ = fVar10;
  auVar17._12_4_ = fVar12;
  auVar16 = NEON_ext(auVar16,auVar17,8,1);
  FUN_0054d9e0(param_1,param_2 + 2,param_5 + 4,param_6 + 4);
  fVar10 = ((float)param_2[2] - param_5[4]) * param_6[4];
  fVar8 = ((float)((ulong)param_2[2] >> 0x20) - param_5[5]) * param_6[5];
  fVar12 = ((float)param_2[3] - param_5[6]) * param_6[6];
  fVar13 = ((float)((ulong)param_2[3] >> 0x20) - param_5[7]) * param_6[7];
  auVar18._4_4_ = fVar8;
  auVar18._0_4_ = fVar10;
  auVar18._8_4_ = fVar12;
  auVar18._12_4_ = fVar13;
  auVar19._4_4_ = fVar8;
  auVar19._0_4_ = fVar10;
  auVar19._8_4_ = fVar12;
  auVar19._12_4_ = fVar13;
  auVar17 = NEON_ext(auVar18,auVar19,8,1);
  FUN_0054d9e0(param_1,param_2 + 4,param_5 + 8,param_6 + 8);
  fVar12 = ((float)param_2[4] - param_5[8]) * param_6[8];
  fVar9 = ((float)((ulong)param_2[4] >> 0x20) - param_5[9]) * param_6[9];
  fVar13 = ((float)param_2[5] - param_5[10]) * param_6[10];
  fVar14 = ((float)((ulong)param_2[5] >> 0x20) - param_5[0xb]) * param_6[0xb];
  auVar1._4_4_ = fVar9;
  auVar1._0_4_ = fVar12;
  auVar1._8_4_ = fVar13;
  auVar1._12_4_ = fVar14;
  auVar2._4_4_ = fVar9;
  auVar2._0_4_ = fVar12;
  auVar2._8_4_ = fVar13;
  auVar2._12_4_ = fVar14;
  auVar18 = NEON_ext(auVar1,auVar2,8,1);
  FUN_0054d9e0(param_1,param_2 + 6,param_5 + 0xc,param_6 + 0xc);
  uVar5 = param_2[6];
  fVar13 = ((float)uVar5 - param_5[0xc]) * param_6[0xc];
  fVar14 = ((float)((ulong)uVar5 >> 0x20) - param_5[0xd]) * param_6[0xd];
  fVar11 = ((float)param_2[7] - param_5[0xe]) * param_6[0xe];
  fVar15 = ((float)((ulong)param_2[7] >> 0x20) - param_5[0xf]) * param_6[0xf];
  auVar3._4_4_ = fVar14;
  auVar3._0_4_ = fVar13;
  auVar3._8_4_ = fVar11;
  auVar3._12_4_ = fVar15;
  auVar4._4_4_ = fVar14;
  auVar4._0_4_ = fVar13;
  auVar4._8_4_ = fVar11;
  auVar4._12_4_ = fVar15;
  auVar19 = NEON_ext(auVar3,auVar4,8,1);
  *param_7 = CONCAT44(fVar10 + fVar8 + auVar17._0_4_,fVar6 + fVar7 + auVar16._0_4_);
  param_7[1] = CONCAT44(fVar13 + fVar14 + auVar19._0_4_,fVar12 + fVar9 + auVar18._0_4_);
  return;
}

