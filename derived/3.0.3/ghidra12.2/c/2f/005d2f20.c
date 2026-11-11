
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [32] FUN_005d2f20(long param_1,float *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_260;
  undefined8 uStack_258;
  ulong local_250;
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  float local_210;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 local_30;
  float fStack_28;
  float fStack_24;
  
  uVar11 = _DAT_0413f508;
  uVar10 = DAT_0413f500;
  local_60 = (float)DAT_0413f500;
  fStack_50 = -local_60;
  fStack_5c = (float)((ulong)DAT_0413f500 >> 0x20);
  fStack_4c = -fStack_5c;
  auVar15._4_4_ = fStack_4c;
  auVar15._0_4_ = fStack_50;
  fStack_58 = (float)_DAT_0413f508;
  fVar21 = -fStack_58;
  fStack_54 = (float)((ulong)_DAT_0413f508 >> 0x20);
  fVar22 = -fStack_54;
  fStack_48 = fVar21;
  fStack_44 = fVar22;
  if (param_1 == 0) goto switchD_005d2f70_caseD_1;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    fVar21 = *(float *)(param_1 + 0x20);
    fVar22 = *(float *)(param_1 + 0x24);
    fVar1 = *(float *)(param_1 + 0x28);
    auVar15 = *(undefined1 (*) [16])(param_2 + 8);
    local_30 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20) +
                        auVar15._4_4_ * fVar1 + param_2[1] * fVar21 + param_2[5] * fVar22,
                        (float)*(undefined8 *)(param_2 + 0xc) +
                        auVar15._0_4_ * fVar1 + *param_2 * fVar21 + param_2[4] * fVar22);
    _fStack_28 = CONCAT44(*(undefined4 *)(param_1 + 0x2c),
                          (float)*(undefined8 *)(param_2 + 0xe) +
                          auVar15._8_4_ * fVar1 + param_2[2] * fVar21 + param_2[6] * fVar22);
    FUN_0053da70(&local_260,&local_30);
    auVar3._4_4_ = fStack_5c;
    auVar3._0_4_ = local_60;
    auVar3._8_4_ = fStack_58;
    auVar3._12_4_ = fStack_54;
    auVar7._4_4_ = fStack_4c;
    auVar7._0_4_ = fStack_50;
    auVar7._8_4_ = fStack_48;
    auVar7._12_4_ = fStack_44;
    auVar20 = NEON_fmax(auVar7,local_240,4);
    auVar15 = NEON_fmin(auVar3,local_240,4);
    local_210 = local_240._12_4_;
    fStack_50 = local_210 + auVar20._0_4_;
    fStack_4c = local_210 + auVar20._4_4_;
    fStack_48 = local_210 + auVar20._8_4_;
    fStack_44 = local_210 + auVar20._12_4_;
    break;
  default:
    goto switchD_005d2f70_caseD_1;
  case 2:
    fVar21 = *(float *)(param_1 + 0x20);
    fVar22 = *(float *)(param_1 + 0x24);
    fVar1 = *(float *)(param_1 + 0x28);
    fVar28 = (float)*(undefined8 *)(param_2 + 10);
    fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
    fVar26 = (float)*(undefined8 *)(param_2 + 8);
    fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    local_40 = (float)*(undefined8 *)(param_2 + 0xc);
    fStack_3c = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    fStack_38 = (float)*(undefined8 *)(param_2 + 0xe);
    fStack_34 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
    _fStack_28 = CONCAT44(fStack_34 + fVar29 * fVar1 + param_2[3] * fVar21 + param_2[7] * fVar22,
                          fStack_38 + fVar28 * fVar1 + param_2[2] * fVar21 + param_2[6] * fVar22);
    local_30 = CONCAT44(fStack_3c + fVar27 * fVar1 + param_2[1] * fVar21 + param_2[5] * fVar22,
                        local_40 + fVar26 * fVar1 + *param_2 * fVar21 + param_2[4] * fVar22);
    fVar21 = *(float *)(param_1 + 0x30);
    fVar22 = *(float *)(param_1 + 0x34);
    fVar1 = *(float *)(param_1 + 0x38);
    local_40 = local_40 + fVar26 * fVar1 + *param_2 * fVar21 + param_2[4] * fVar22;
    fStack_3c = fStack_3c + fVar27 * fVar1 + param_2[1] * fVar21 + param_2[5] * fVar22;
    fStack_38 = fStack_38 + fVar28 * fVar1 + param_2[2] * fVar21 + param_2[6] * fVar22;
    fStack_34 = fStack_34 + fVar29 * fVar1 + param_2[3] * fVar21 + param_2[7] * fVar22;
    FUN_0053dad0(&local_260,&local_30,&local_40);
    auVar4._4_4_ = fStack_5c;
    auVar4._0_4_ = local_60;
    auVar4._8_4_ = fStack_58;
    auVar4._12_4_ = fStack_54;
    auVar8._4_4_ = fStack_4c;
    auVar8._0_4_ = fStack_50;
    auVar8._8_4_ = fStack_48;
    auVar8._12_4_ = fStack_44;
    auVar15 = NEON_fmin(auVar4,local_240,4);
    auVar20 = NEON_fmax(auVar8,local_240,4);
    auVar20 = NEON_fmax(auVar20,local_230,4);
    auVar15 = NEON_fmin(auVar15,local_230,4);
    fStack_50 = auVar20._0_4_ + local_210;
    fStack_4c = auVar20._4_4_ + local_210;
    fStack_48 = auVar20._8_4_ + local_210;
    fStack_44 = auVar20._12_4_ + local_210;
    break;
  case 3:
    lVar12 = FUN_0054cc80(param_1,param_2,&local_260);
    auVar5._4_4_ = fStack_5c;
    auVar5._0_4_ = local_60;
    auVar5._8_4_ = fStack_58;
    auVar5._12_4_ = fStack_54;
    auVar9._4_4_ = fStack_4c;
    auVar9._0_4_ = fStack_50;
    auVar9._8_4_ = fStack_48;
    auVar9._12_4_ = fStack_44;
    auVar20 = NEON_fmin(auVar5,*(undefined1 (*) [16])(lVar12 + 0x20),4);
    auVar17 = NEON_fmax(auVar9,*(undefined1 (*) [16])(lVar12 + 0x20),4);
    auVar15._8_4_ = fVar21;
    auVar2._8_8_ = uVar11;
    auVar2._0_8_ = uVar10;
    auVar24 = NEON_fmin(auVar2,*(undefined1 (*) [16])(lVar12 + 0x30),4);
    auVar15._12_4_ = fVar22;
    auVar15 = NEON_fmax(auVar15,*(undefined1 (*) [16])(lVar12 + 0x30),4);
    fVar21 = *(float *)(lVar12 + 0x90);
    auVar18._0_4_ = auVar17._0_4_ + fVar21;
    auVar18._4_4_ = auVar17._4_4_ + fVar21;
    auVar18._8_4_ = auVar17._8_4_ + fVar21;
    auVar18._12_4_ = auVar17._12_4_ + fVar21;
    auVar13._0_4_ = auVar20._0_4_ - fVar21;
    auVar13._4_4_ = auVar20._4_4_ - fVar21;
    auVar13._8_4_ = auVar20._8_4_ - fVar21;
    auVar13._12_4_ = auVar20._12_4_ - fVar21;
    fVar21 = *(float *)(lVar12 + 0x94);
    auVar23._0_4_ = auVar15._0_4_ + fVar21;
    auVar23._4_4_ = auVar15._4_4_ + fVar21;
    auVar23._8_4_ = auVar15._8_4_ + fVar21;
    auVar23._12_4_ = auVar15._12_4_ + fVar21;
    auVar25._0_4_ = auVar24._0_4_ - fVar21;
    auVar25._4_4_ = auVar24._4_4_ - fVar21;
    auVar25._8_4_ = auVar24._8_4_ - fVar21;
    auVar25._12_4_ = auVar24._12_4_ - fVar21;
    auVar14 = NEON_fmin(auVar13,auVar25,4);
    auVar19 = NEON_fmax(auVar18,auVar23,4);
    goto LAB_005d30fc;
  case 5:
    local_30 = 0;
    FUN_0054d8f0(&local_260,param_1,&local_30,param_2);
    auVar17._4_4_ = fStack_5c;
    auVar17._0_4_ = local_60;
    auVar17._8_4_ = fStack_58;
    auVar17._12_4_ = fStack_54;
    auVar24._4_4_ = fStack_4c;
    auVar24._0_4_ = fStack_50;
    auVar24._8_4_ = fStack_48;
    auVar24._12_4_ = fStack_44;
    auVar20._8_8_ = uStack_258;
    auVar20._0_8_ = local_260;
    auVar15 = NEON_fmin(auVar17,auVar20,4);
    auVar20 = NEON_fmax(auVar24,auVar20,4);
    fStack_58 = auVar15._8_4_;
    fStack_54 = auVar15._12_4_;
    local_60 = auVar15._0_4_;
    fStack_5c = auVar15._4_4_;
    fStack_48 = auVar20._8_4_;
    fStack_44 = auVar20._12_4_;
    fStack_50 = auVar20._0_4_;
    fStack_4c = auVar20._4_4_;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_250;
    fVar21 = (float)FUN_004372f0(auVar16);
    auVar19._0_4_ = fStack_50 + fVar21;
    auVar19._4_4_ = fStack_4c + fVar21;
    auVar19._8_4_ = fStack_48 + fVar21;
    auVar19._12_4_ = fStack_44 + fVar21;
    auVar14._0_4_ = local_60 - fVar21;
    auVar14._4_4_ = fStack_5c - fVar21;
    auVar14._8_4_ = fStack_58 - fVar21;
    auVar14._12_4_ = fStack_54 - fVar21;
LAB_005d30fc:
    fStack_58 = auVar14._8_4_;
    fStack_54 = auVar14._12_4_;
    local_60 = auVar14._0_4_;
    fStack_5c = auVar14._4_4_;
    fStack_48 = auVar19._8_4_;
    fStack_44 = auVar19._12_4_;
    fStack_50 = auVar19._0_4_;
    fStack_4c = auVar19._4_4_;
    goto switchD_005d2f70_caseD_1;
  case 9:
    param_1 = param_1 + 0xd0;
    goto LAB_005d3110;
  case 0xb:
    param_1 = param_1 + 0xb0;
LAB_005d3110:
    local_260 = 0;
    FUN_004d1b30(param_2,param_1,&local_260,&local_60);
    goto switchD_005d2f70_caseD_1;
  }
  local_60 = auVar15._0_4_ - local_210;
  fStack_5c = auVar15._4_4_ - local_210;
  fStack_58 = auVar15._8_4_ - local_210;
  fStack_54 = auVar15._12_4_ - local_210;
switchD_005d2f70_caseD_1:
  auVar6._4_4_ = fStack_5c;
  auVar6._0_4_ = local_60;
  auVar6._8_4_ = fStack_58;
  auVar6._12_4_ = fStack_54;
  auVar6._16_4_ = fStack_50;
  auVar6._20_4_ = fStack_4c;
  auVar6._24_4_ = fStack_48;
  auVar6._28_4_ = fStack_44;
  return auVar6;
}

