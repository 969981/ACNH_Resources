
void FUN_00438690(undefined8 *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  
  auVar3 = *param_2;
  fVar1 = auVar3._0_4_;
  auVar6._0_4_ = fVar1 + fVar1;
  fVar4 = auVar3._4_4_;
  auVar6._4_4_ = fVar4 + fVar4;
  auVar6._8_4_ = auVar3._8_4_ + auVar3._8_4_;
  fVar5 = auVar3._12_4_;
  auVar6._12_4_ = fVar5 + fVar5;
  auVar3 = NEON_ext(auVar3,auVar3,8,1);
  auVar7 = NEON_ext(auVar6,auVar6,8,1);
  fVar2 = auVar3._0_4_ * auVar7._0_4_;
  fVar8 = (float)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x60);
  param_1[1] = (ulong)(uint)(auVar6._8_4_ * fVar1 - auVar6._4_4_ * fVar5);
  *param_1 = CONCAT44(auVar6._4_4_ * fVar1 + auVar6._8_4_ * fVar5,
                      fVar8 - (auVar6._4_4_ * fVar4 + fVar2));
  param_1[3] = (ulong)(uint)(auVar6._8_4_ * fVar4 + auVar6._0_4_ * fVar5);
  param_1[2] = CONCAT44(fVar8 - (auVar6._0_4_ * fVar1 + fVar2),
                        auVar6._4_4_ * fVar1 - auVar6._8_4_ * fVar5);
  param_1[5] = (ulong)(uint)(fVar8 - (auVar6._0_4_ * fVar1 + auVar6._4_4_ * fVar4));
  param_1[4] = CONCAT44(auVar6._8_4_ * fVar4 - auVar6._0_4_ * fVar5,
                        auVar6._8_4_ * fVar1 + auVar6._4_4_ * fVar5);
  return;
}

