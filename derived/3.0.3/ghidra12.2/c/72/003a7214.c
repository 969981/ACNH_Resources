
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a7214(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0x3f80000000000000;
  FUN_003a902c(&local_30,param_3);
  auVar11._8_8_ = uStack_28;
  auVar11._0_8_ = local_30;
  auVar10._8_8_ = uStack_28;
  auVar10._0_8_ = local_30;
  auVar9._8_8_ = uStack_28;
  auVar9._0_8_ = local_30;
  fVar14 = (float)((ulong)local_30 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_4 + 0x20);
  fVar18 = (float)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20);
  uVar8 = *(undefined8 *)*pauVar1;
  fVar17 = (float)((ulong)uVar8 >> 0x20);
  uVar15 = a64_TBL(ZEXT816(0),auVar9,DAT_04101618);
  auVar3._12_4_ = fVar18;
  auVar3._0_12_ = *pauVar1;
  uVar12 = a64_TBL(ZEXT816(0),auVar3,DAT_04101618);
  uVar20 = a64_TBL(ZEXT816(0),auVar10,DAT_04101598);
  auVar4._12_4_ = fVar18;
  auVar4._0_12_ = *pauVar1;
  uVar19 = a64_TBL(ZEXT816(0),auVar4,DAT_04101598);
  auVar5._12_4_ = fVar18;
  auVar5._0_12_ = *pauVar1;
  uVar23 = a64_TBL(ZEXT816(0),auVar5,DAT_04101578);
  fVar21 = (float)((ulong)uVar20 >> 0x20);
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  fVar22 = (float)_DAT_04102a00;
  fVar24 = (float)((ulong)_DAT_04102a00 >> 0x20);
  fVar25 = (float)((ulong)_UNK_04102a08 >> 0x20);
  uVar26 = a64_TBL(ZEXT816(0),auVar11,DAT_04101580);
  auVar6._12_4_ = fVar18;
  auVar6._0_12_ = *pauVar1;
  uVar13 = a64_TBL(ZEXT816(0),auVar6,DAT_04101580);
  fVar27 = (float)((ulong)uVar26 >> 0x20);
  auVar7._12_4_ = fVar18;
  auVar7._0_12_ = *pauVar1;
  uVar2 = a64_TBL(ZEXT816(0),auVar7,DAT_041015b8);
  *(ulong *)(param_2 + 0x28) =
       CONCAT44((fVar18 * fVar16 + fVar25 * fVar21 * (float)((ulong)uVar23 >> 0x20) +
                fVar25 * fVar14 * fVar17) - (float)((ulong)uVar2 >> 0x20) * fVar27,
                ((float)*(undefined8 *)(param_4 + 0x28) * (float)uVar15 +
                 (float)_UNK_04102a08 * (float)uVar20 * (float)uVar23 +
                (float)_UNK_04102a08 * (float)local_30 * fVar17) - (float)uVar2 * (float)uVar26);
  *(ulong *)(param_2 + 0x20) =
       CONCAT44((fVar17 * fVar16 + fVar24 * fVar14 * (float)((ulong)uVar12 >> 0x20) +
                fVar24 * fVar27 * (float)((ulong)uVar19 >> 0x20)) -
                (float)((ulong)uVar13 >> 0x20) * fVar21,
                ((float)uVar8 * (float)uVar15 + fVar22 * (float)local_30 * (float)uVar12 +
                fVar22 * (float)uVar26 * (float)uVar19) - (float)uVar13 * (float)uVar20);
  return;
}

