
void FUN_00482180(undefined8 *param_1,undefined1 (*param_2) [12],undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar9 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar4 = *(undefined8 *)*param_2;
  fVar5 = (float)*param_3 - (float)*(undefined8 *)param_2[4];
  fVar6 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)*(undefined8 *)param_2[4] >> 0x20);
  fVar7 = (float)param_3[1] - (float)*(undefined8 *)(param_2[4] + 8);
  auVar11._12_4_ = uVar9;
  auVar11._0_12_ = *param_2;
  auVar12._12_4_ = uVar9;
  auVar12._0_12_ = *param_2;
  auVar11 = NEON_ext(auVar11,auVar12,8,1);
  pauVar1 = (undefined1 (*) [16])(param_2[1] + 4);
  uVar10 = *(undefined8 *)*pauVar1;
  pauVar2 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar9 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar8 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  auVar12 = NEON_ext(*pauVar1,*pauVar1,8,1);
  auVar13._12_4_ = uVar9;
  auVar13._0_12_ = *pauVar2;
  auVar3._12_4_ = uVar9;
  auVar3._0_12_ = *pauVar2;
  auVar13 = NEON_ext(auVar13,auVar3,8,1);
  param_1[1] = CONCAT44(auVar13._4_4_ * fVar7 + fVar8 * fVar5 + auVar13._4_4_ * fVar6,
                        auVar13._0_4_ * fVar7 +
                        (float)*(undefined8 *)*pauVar2 * fVar5 + fVar8 * fVar6);
  *param_1 = CONCAT44(auVar12._0_4_ * fVar7 +
                      (float)uVar10 * fVar5 + (float)((ulong)uVar10 >> 0x20) * fVar6,
                      auVar11._0_4_ * fVar7 +
                      (float)uVar4 * fVar5 + (float)((ulong)uVar4 >> 0x20) * fVar6);
  return;
}

