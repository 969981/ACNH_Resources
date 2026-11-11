
void FUN_0047f9c0(undefined8 *param_1,float *param_2,undefined1 (*param_3) [12])

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_004385d0(&local_60);
  fVar20 = (float)*(undefined8 *)(*param_3 + 8);
  uVar21 = (undefined4)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  fVar18 = (float)*(undefined8 *)*param_3;
  fVar19 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_3[1] + 4);
  fVar24 = (float)*(undefined8 *)param_3[2];
  uVar25 = (undefined4)((ulong)*(undefined8 *)param_3[2] >> 0x20);
  fVar22 = (float)*(undefined8 *)*pauVar2;
  fVar23 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_3[2] + 8);
  fVar28 = (float)*(undefined8 *)(param_3[3] + 4);
  uVar29 = (undefined4)((ulong)*(undefined8 *)(param_3[3] + 4) >> 0x20);
  uStack_58 = *(undefined8 *)*pauVar1;
  fVar26 = (float)uStack_58;
  fVar27 = (float)((ulong)uStack_58 >> 0x20);
  auVar32._12_4_ = uVar25;
  auVar32._0_12_ = *pauVar2;
  auVar33._12_4_ = uVar25;
  auVar33._0_12_ = *pauVar2;
  auVar32 = NEON_ext(auVar32,auVar33,8,1);
  auVar4._12_4_ = uVar29;
  auVar4._0_12_ = *pauVar1;
  auVar5._12_4_ = uVar29;
  auVar5._0_12_ = *pauVar1;
  auVar33 = NEON_ext(auVar4,auVar5,8,1);
  auVar30._12_4_ = uVar21;
  auVar30._0_12_ = *param_3;
  auVar3._12_4_ = uVar21;
  auVar3._0_12_ = *param_3;
  auVar30 = NEON_ext(auVar30,auVar3,8,1);
  local_40 = CONCAT44(auVar32._0_4_,auVar30._0_4_);
  local_60 = CONCAT44(fVar22,fVar18);
  uStack_38 = auVar33._0_8_;
  auVar34._4_12_ = auVar33._4_12_;
  auVar34._0_4_ = fVar27;
  uStack_48 = auVar34._0_8_;
  uStack_50 = CONCAT44(fVar23,fVar19);
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[4];
  fVar11 = param_2[5];
  fVar12 = param_2[6];
  fVar13 = param_2[7];
  fVar14 = param_2[8];
  fVar15 = param_2[9];
  fVar16 = param_2[10];
  fVar17 = param_2[0xb];
  auVar31._0_8_ =
       CONCAT44(fVar15 * fVar27 + fVar7 * fVar19 + fVar11 * fVar23,
                fVar14 * fVar27 + fVar6 * fVar19 + fVar10 * fVar23);
  auVar31._8_4_ = fVar16 * fVar27 + fVar8 * fVar19 + fVar12 * fVar23;
  auVar31._12_4_ = fVar17 * fVar27 + fVar9 * fVar19 + fVar13 * fVar23;
  param_1[3] = auVar31._8_8_;
  param_1[2] = auVar31._0_8_;
  param_1[5] = CONCAT44(fVar17 * fVar28 + fVar9 * fVar20 + fVar13 * fVar24,
                        fVar16 * fVar28 + fVar8 * fVar20 + fVar12 * fVar24);
  param_1[4] = CONCAT44(fVar15 * fVar28 + fVar7 * fVar20 + fVar11 * fVar24,
                        fVar14 * fVar28 + fVar6 * fVar20 + fVar10 * fVar24);
  param_1[1] = CONCAT44(fVar17 * fVar26 + fVar9 * fVar18 + fVar13 * fVar22,
                        fVar16 * fVar26 + fVar8 * fVar18 + fVar12 * fVar22);
  *param_1 = CONCAT44(fVar15 * fVar26 + fVar7 * fVar18 + fVar11 * fVar22,
                      fVar14 * fVar26 + fVar6 * fVar18 + fVar10 * fVar22);
  FUN_004385e0(&local_60);
  return;
}

