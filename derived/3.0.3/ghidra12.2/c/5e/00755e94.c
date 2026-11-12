
void FUN_00755e94(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_80 [48];
  undefined1 local_50 [48];
  
  puVar2 = PTR_DAT_04bb2f80;
  plVar3 = *(long **)(param_2 + 0x2e8);
  uVar1 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  param_1[2] = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  param_1[3] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x28);
  param_1[4] = *(undefined8 *)(puVar2 + 0x20);
  param_1[5] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 8);
  *param_1 = *(undefined8 *)puVar2;
  param_1[1] = uVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 400))(local_50);
    FUN_007021a4(local_80,param_2);
    fVar4 = local_50._0_4_;
    fVar13 = local_80._0_4_;
    fVar14 = local_80._4_4_;
    fVar15 = local_80._8_4_;
    fVar16 = local_80._12_4_;
    fVar7 = local_50._16_4_;
    fVar5 = local_50._4_4_;
    fVar17 = local_80._16_4_;
    fVar19 = local_80._20_4_;
    fVar21 = local_80._24_4_;
    fVar23 = local_80._28_4_;
    fVar10 = local_50._32_4_;
    fVar8 = local_50._20_4_;
    fVar11 = local_50._36_4_;
    fVar6 = local_50._8_4_;
    fVar18 = local_80._32_4_;
    fVar20 = local_80._36_4_;
    fVar22 = local_80._40_4_;
    fVar24 = local_80._44_4_;
    fVar9 = local_50._24_4_;
    fVar12 = local_50._40_4_;
    param_1[1] = CONCAT44(local_50._12_4_ + fVar16 * fVar4 + fVar23 * fVar5 + fVar24 * fVar6,
                          fVar15 * fVar4 + fVar21 * fVar5 + fVar22 * fVar6 + 0.0);
    *param_1 = CONCAT44(fVar14 * fVar4 + fVar19 * fVar5 + fVar20 * fVar6 + 0.0,
                        fVar13 * fVar4 + fVar17 * fVar5 + fVar18 * fVar6 + 0.0);
    param_1[3] = CONCAT44(local_50._28_4_ + fVar16 * fVar7 + fVar23 * fVar8 + fVar24 * fVar9,
                          fVar15 * fVar7 + fVar21 * fVar8 + fVar22 * fVar9 + 0.0);
    param_1[2] = CONCAT44(fVar14 * fVar7 + fVar19 * fVar8 + fVar20 * fVar9 + 0.0,
                          fVar13 * fVar7 + fVar17 * fVar8 + fVar18 * fVar9 + 0.0);
    param_1[5] = CONCAT44(local_50._44_4_ + fVar16 * fVar10 + fVar23 * fVar11 + fVar24 * fVar12,
                          fVar15 * fVar10 + fVar21 * fVar11 + fVar22 * fVar12 + 0.0);
    param_1[4] = CONCAT44(fVar14 * fVar10 + fVar19 * fVar11 + fVar20 * fVar12 + 0.0,
                          fVar13 * fVar10 + fVar17 * fVar11 + fVar18 * fVar12 + 0.0);
  }
  return;
}

