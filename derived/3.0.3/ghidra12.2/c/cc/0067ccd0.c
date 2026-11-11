
void FUN_0067ccd0(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 (*param_6) [16],uint param_7)

{
  ulong uVar1;
  ushort *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  ushort *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  nn::util::ReferSymbol("SDK MW+Microsoft+Havok_Animation-2019_1");
  if ((int)(param_7 & 0xfffffffc) < 1) {
    uVar1 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    uVar1 = 0;
    puVar2 = (ushort *)(param_3 + 4);
    pauVar5 = param_6;
    puVar7 = param_5;
    puVar9 = param_4;
    do {
      auVar16 = *pauVar5;
      uVar1 = uVar1 + 4;
      auVar10._6_10_ = auVar16._6_10_;
      auVar10._0_4_ = auVar16._0_4_;
      auVar10._4_2_ = auVar16._2_2_;
      auVar12._10_6_ = auVar16._10_6_;
      auVar12._0_8_ = auVar10._0_8_;
      auVar12._8_2_ = auVar16._4_2_;
      auVar14._14_2_ = auVar16._14_2_;
      auVar14._0_12_ = auVar12._0_12_;
      auVar14._12_2_ = auVar16._6_2_;
      auVar16._4_12_ = auVar14._4_12_;
      auVar16._0_4_ = auVar10._0_4_ & 0xffff;
      auVar11._8_8_ = auVar14._8_8_;
      auVar11._0_6_ = auVar16._0_6_;
      auVar11._6_2_ = 0;
      auVar13._12_4_ = auVar14._12_4_;
      auVar13._0_10_ = auVar11._0_10_;
      auVar13._10_2_ = 0;
      auVar15._0_14_ = auVar13._0_14_;
      auVar15._14_2_ = 0;
      auVar16 = NEON_scvtf(auVar15,4);
      uVar19 = puVar7[1];
      uVar17 = *puVar7;
      uVar20 = puVar9[1];
      uVar18 = *puVar9;
      *(float *)(param_1 + (ulong)puVar2[-2] * 4) = (float)uVar18 + (float)uVar17 * auVar16._0_4_;
      *(float *)(param_1 + (ulong)puVar2[-1] * 4) =
           (float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar17 >> 0x20) * auVar16._4_4_;
      *(float *)(param_1 + (ulong)*puVar2 * 4) = (float)uVar20 + (float)uVar19 * auVar16._8_4_;
      puVar6 = puVar2 + 1;
      puVar2 = puVar2 + 4;
      *(float *)(param_1 + (ulong)*puVar6 * 4) =
           (float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar19 >> 0x20) * auVar16._12_4_;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 8);
      puVar7 = puVar7 + 2;
      puVar9 = puVar9 + 2;
    } while ((long)uVar1 < (long)(int)(param_7 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar1) {
      return;
    }
  }
  uVar1 = uVar1 & 0xffffffff;
  lVar8 = param_7 - uVar1;
  puVar2 = (ushort *)(param_3 + uVar1 * 2);
  pfVar3 = (float *)((long)param_4 + uVar1 * 4);
  pfVar4 = (float *)((long)param_5 + uVar1 * 4);
  puVar6 = (ushort *)(*param_6 + uVar1 * 2);
  do {
    lVar8 = lVar8 + -1;
    *(float *)(param_1 + (ulong)*puVar2 * 4) = *pfVar4 * (float)*puVar6 + *pfVar3;
    puVar2 = puVar2 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (lVar8 != 0);
  return;
}

