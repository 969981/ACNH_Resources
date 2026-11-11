
void FUN_003b4074(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  fVar5 = (float)param_4[1];
  fVar6 = (float)((ulong)param_4[1] >> 0x20);
  fVar3 = (float)*param_4;
  fVar4 = (float)((ulong)*param_4 >> 0x20);
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  auVar9._4_4_ = fVar4;
  auVar9._0_4_ = fVar3;
  auVar9._8_4_ = fVar5;
  auVar9._12_4_ = fVar6;
  auVar10._4_4_ = fVar4;
  auVar10._0_4_ = fVar3;
  auVar10._8_4_ = fVar5;
  auVar10._12_4_ = fVar6;
  auVar9 = NEON_ext(auVar9,auVar10,8,1);
  fVar3 = SQRT(auVar9._0_4_ + fVar3 + auVar9._4_4_ + fVar4);
  fVar4 = *(float *)(param_4 + 2) * *(float *)(param_4 + 2);
  fVar5 = *(float *)((long)param_4 + 0x14) * *(float *)((long)param_4 + 0x14);
  fVar6 = *(float *)(param_4 + 3) * *(float *)(param_4 + 3);
  fVar7 = *(float *)((long)param_4 + 0x1c) * *(float *)((long)param_4 + 0x1c);
  auVar1._4_4_ = fVar5;
  auVar1._0_4_ = fVar4;
  auVar1._8_4_ = fVar6;
  auVar1._12_4_ = fVar7;
  auVar2._4_4_ = fVar5;
  auVar2._0_4_ = fVar4;
  auVar2._8_4_ = fVar6;
  auVar2._12_4_ = fVar7;
  auVar9 = NEON_ext(auVar1,auVar2,8,1);
  auVar8._0_4_ = *(float *)(param_4 + 4) * *(float *)(param_4 + 4);
  auVar8._4_4_ = *(float *)((long)param_4 + 0x24) * *(float *)((long)param_4 + 0x24);
  auVar8._8_4_ = *(float *)(param_4 + 5) * *(float *)(param_4 + 5);
  auVar8._12_4_ = *(float *)((long)param_4 + 0x2c) * *(float *)((long)param_4 + 0x2c);
  auVar10 = NEON_ext(auVar8,auVar8,8,1);
  fVar4 = SQRT(auVar9._0_4_ + fVar4 + auVar9._4_4_ + fVar5);
  fVar5 = SQRT(auVar10._0_4_ + auVar8._0_4_ + auVar10._4_4_ + auVar8._4_4_);
  (*(code *)(&PTR_LAB_0484e5b0)[param_1 - 0x20000U >> 0x10])(param_2,param_3,param_4,param_5);
  param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) * fVar3,(float)param_2[1] * fVar3);
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar3,(float)*param_2 * fVar3);
  *(float *)(param_2 + 3) = *(float *)(param_2 + 3) * fVar4;
  *(float *)((long)param_2 + 0x1c) = *(float *)((long)param_2 + 0x1c) * fVar4;
  *(float *)(param_2 + 2) = *(float *)(param_2 + 2) * fVar4;
  *(float *)((long)param_2 + 0x14) = *(float *)((long)param_2 + 0x14) * fVar4;
  param_2[5] = CONCAT44((float)((ulong)param_2[5] >> 0x20) * fVar5,(float)param_2[5] * fVar5);
  param_2[4] = CONCAT44((float)((ulong)param_2[4] >> 0x20) * fVar5,(float)param_2[4] * fVar5);
  return;
}

