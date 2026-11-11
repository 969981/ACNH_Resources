
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067ce00(byte *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  float fVar11;
  undefined1 auVar10 [16];
  
  auVar3._0_8_ = (ulong)CONCAT14(*param_1 >> 4,(uint)*param_1) & 0xffffffff0000000f;
  auVar3._8_4_ = param_1[1] & 0xf;
  auVar3[0xc] = param_1[1] >> 4;
  auVar3._13_3_ = 0;
  auVar3 = NEON_scvtf(auVar3,4);
  auVar8._8_8_ = _UNK_0413f468;
  auVar8._0_8_ = _DAT_0413f460;
  auVar10 = NEON_ext(auVar8,auVar8,8,1);
  auVar8 = NEON_ext(auVar10,auVar8,8,1);
  fVar2 = auVar8._0_4_ * (auVar3._0_4_ - (float)_DAT_0413f380);
  fVar4 = auVar8._4_4_ * (auVar3._4_4_ - (float)((ulong)_DAT_0413f380 >> 0x20));
  fVar5 = auVar8._8_4_ * (auVar3._8_4_ - (float)_UNK_0413f388);
  fVar6 = auVar8._12_4_ * (auVar3._12_4_ - (float)((ulong)_UNK_0413f388 >> 0x20));
  auVar10._0_4_ = fVar2 * fVar2;
  auVar10._4_4_ = fVar4 * fVar4;
  auVar10._8_4_ = fVar5 * fVar5;
  auVar10._12_4_ = fVar6 * fVar6;
  auVar3 = NEON_ext(auVar10,auVar10,8,1);
  fVar1 = auVar3._0_4_ + auVar3._4_4_;
  uVar7 = CONCAT44(auVar10._0_4_ + auVar10._4_4_ + fVar1,auVar10._0_4_ + auVar10._4_4_ + fVar1);
  uVar9 = NEON_frsqrte(uVar7,4);
  fVar1 = (float)uVar9;
  fVar11 = (float)((ulong)uVar9 >> 0x20);
  uVar9 = NEON_frsqrts(uVar7,CONCAT44(fVar11 * fVar11,fVar1 * fVar1),4);
  fVar1 = fVar1 * (float)uVar9;
  fVar11 = fVar11 * (float)((ulong)uVar9 >> 0x20);
  uVar7 = NEON_frsqrts(uVar7,CONCAT44(fVar11 * fVar11,fVar1 * fVar1),4);
  fVar1 = (float)uVar7 * fVar1;
  fVar11 = (float)((ulong)uVar7 >> 0x20) * fVar11;
  param_2[2] = fVar5 * fVar1;
  param_2[3] = fVar6 * fVar11;
  *param_2 = fVar2 * fVar1;
  param_2[1] = fVar4 * fVar11;
  return;
}

