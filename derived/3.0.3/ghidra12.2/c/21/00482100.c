
void FUN_00482100(undefined8 *param_1,undefined1 (*param_2) [12],undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar8 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar3 = *(undefined8 *)*param_2;
  pauVar2 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar12 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  uVar5 = *(undefined8 *)*pauVar2;
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar14 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar16._12_4_ = uVar12;
  auVar16._0_12_ = *pauVar2;
  auVar4._12_4_ = uVar12;
  auVar4._0_12_ = *pauVar2;
  auVar16 = NEON_ext(auVar16,auVar4,8,1);
  auVar15._12_4_ = uVar8;
  auVar15._0_12_ = *param_2;
  auVar17._12_4_ = uVar8;
  auVar17._0_12_ = *param_2;
  auVar15 = NEON_ext(auVar15,auVar17,8,1);
  auVar6._12_4_ = uVar14;
  auVar6._0_12_ = *pauVar1;
  auVar7._12_4_ = uVar14;
  auVar7._0_12_ = *pauVar1;
  auVar17 = NEON_ext(auVar6,auVar7,8,1);
  fVar11 = (float)param_3[1];
  fVar9 = (float)*param_3;
  fVar10 = (float)((ulong)*param_3 >> 0x20);
  param_1[1] = CONCAT44(auVar17._4_4_ * fVar11 + fVar13 * fVar9 + auVar17._4_4_ * fVar10,
                        auVar17._0_4_ * fVar11 +
                        (float)*(undefined8 *)*pauVar1 * fVar9 + fVar13 * fVar10);
  *param_1 = CONCAT44(auVar16._0_4_ * fVar11 +
                      (float)uVar5 * fVar9 + (float)((ulong)uVar5 >> 0x20) * fVar10,
                      auVar15._0_4_ * fVar11 +
                      (float)uVar3 * fVar9 + (float)((ulong)uVar3 >> 0x20) * fVar10);
  return;
}

