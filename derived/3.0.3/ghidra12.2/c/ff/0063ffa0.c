
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0063ffa0(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  long lVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  lVar9 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar9 != 0) {
    FUN_00443a00(lVar9,"TtBuild Triangle Transforms");
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  puVar10 = *(ushort **)(param_2 + 0x30);
  lVar9 = *(long *)(param_2 + 0x18);
  fVar14 = (float)_DAT_0413f420;
  fVar15 = (float)((ulong)_DAT_0413f420 >> 0x20);
  fVar16 = (float)_UNK_0413f428;
  fVar17 = (float)((ulong)_UNK_0413f428 >> 0x20);
  uVar18 = (undefined4)_DAT_0413f320;
  if (uVar1 == 0) {
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 != 0) {
      iVar11 = 0;
      do {
        puVar3 = (undefined8 *)(lVar9 + (ulong)*puVar10 * 0x10);
        uVar35 = puVar3[1];
        fVar21 = (float)uVar35;
        fVar22 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = *puVar3;
        fVar19 = (float)uVar35;
        fVar20 = (float)((ulong)uVar35 >> 0x20);
        puVar3 = (undefined8 *)(lVar9 + (ulong)puVar10[1] * 0x10);
        uVar35 = puVar3[1];
        fVar25 = (float)uVar35;
        fVar26 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = *puVar3;
        fVar23 = (float)uVar35;
        fVar24 = (float)((ulong)uVar35 >> 0x20);
        puVar13 = puVar10 + 2;
        puVar10 = puVar10 + 3;
        puVar3 = (undefined8 *)(lVar9 + (ulong)*puVar13 * 0x10);
        uVar36 = puVar3[1];
        uVar35 = *puVar3;
        puVar3 = (undefined8 *)(*param_3 + (long)iVar11 * 0x40);
        iVar11 = iVar11 + 1;
        fVar27 = (fVar19 + fVar23 + (float)uVar35) * fVar14;
        fVar28 = (fVar20 + fVar24 + (float)((ulong)uVar35 >> 0x20)) * fVar15;
        fVar29 = (fVar21 + fVar25 + (float)uVar36) * fVar16;
        fVar30 = (fVar22 + fVar26 + (float)((ulong)uVar36 >> 0x20)) * fVar17;
        fVar19 = fVar19 - fVar27;
        fVar20 = fVar20 - fVar28;
        fVar21 = fVar21 - fVar29;
        fVar22 = fVar22 - fVar30;
        auVar31._4_4_ = fVar20;
        auVar31._0_4_ = fVar19;
        auVar31._8_4_ = fVar21;
        auVar31._12_4_ = fVar22;
        auVar34._4_4_ = fVar20;
        auVar34._0_4_ = fVar19;
        auVar34._8_4_ = fVar21;
        auVar34._12_4_ = fVar22;
        auVar31 = NEON_ext(auVar31,auVar34,4,1);
        fVar23 = fVar23 - fVar27;
        fVar24 = fVar24 - fVar28;
        fVar25 = fVar25 - fVar29;
        fVar26 = fVar26 - fVar30;
        auVar37._4_4_ = fVar24;
        auVar37._0_4_ = fVar23;
        auVar37._8_4_ = fVar25;
        auVar37._12_4_ = fVar26;
        auVar38._4_4_ = fVar24;
        auVar38._0_4_ = fVar23;
        auVar38._8_4_ = fVar25;
        auVar38._12_4_ = fVar26;
        auVar34 = NEON_ext(auVar37,auVar38,4,1);
        auVar37 = NEON_ext(auVar31,auVar31,8,1);
        auVar38 = NEON_ext(auVar34,auVar34,8,1);
        uVar35 = NEON_rev64(auVar37._0_8_,4);
        uVar36 = NEON_rev64(auVar38._0_8_,4);
        auVar33._0_4_ = fVar19 * auVar34._0_4_ - fVar23 * auVar31._0_4_;
        auVar33._4_4_ = fVar20 * auVar34._4_4_ - fVar24 * auVar31._4_4_;
        auVar33._8_4_ = fVar21 * (float)uVar36 - fVar25 * (float)uVar35;
        auVar33._12_4_ =
             fVar22 * (float)((ulong)uVar36 >> 0x20) - fVar26 * (float)((ulong)uVar35 >> 0x20);
        auVar31 = NEON_ext(auVar33,auVar33,4,1);
        puVar3[1] = (ulong)(uint)fVar21;
        *puVar3 = CONCAT44(fVar20,fVar19);
        puVar3[3] = (ulong)(uint)fVar25;
        puVar3[2] = CONCAT44(fVar24,fVar23);
        puVar3[5] = (ulong)(uint)auVar33._0_4_;
        puVar3[4] = auVar31._0_8_;
        puVar3[7] = CONCAT44(uVar18,fVar29);
        puVar3[6] = CONCAT44(fVar28,fVar27);
      } while (iVar2 != iVar11);
    }
  }
  else {
    puVar13 = puVar10 + (ulong)**(ushort **)(param_1 + 0x48) * 3;
    uVar12 = 0;
    do {
      while( true ) {
        puVar3 = (undefined8 *)(lVar9 + (ulong)*puVar13 * 0x10);
        uVar35 = puVar3[1];
        fVar21 = (float)uVar35;
        fVar22 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = *puVar3;
        fVar19 = (float)uVar35;
        fVar20 = (float)((ulong)uVar35 >> 0x20);
        bVar8 = uVar1 - 1 <= uVar12;
        puVar3 = (undefined8 *)(lVar9 + (ulong)puVar13[1] * 0x10);
        uVar35 = puVar3[1];
        fVar25 = (float)uVar35;
        fVar26 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = *puVar3;
        fVar23 = (float)uVar35;
        fVar24 = (float)((ulong)uVar35 >> 0x20);
        puVar3 = (undefined8 *)(lVar9 + (ulong)puVar13[2] * 0x10);
        uVar36 = puVar3[1];
        uVar35 = *puVar3;
        puVar3 = (undefined8 *)(*param_3 + (long)(int)uVar12 * 0x40);
        uVar12 = uVar12 + 1;
        fVar27 = (fVar19 + fVar23 + (float)uVar35) * fVar14;
        fVar28 = (fVar20 + fVar24 + (float)((ulong)uVar35 >> 0x20)) * fVar15;
        fVar29 = (fVar21 + fVar25 + (float)uVar36) * fVar16;
        fVar30 = (fVar22 + fVar26 + (float)((ulong)uVar36 >> 0x20)) * fVar17;
        fVar19 = fVar19 - fVar27;
        fVar20 = fVar20 - fVar28;
        fVar21 = fVar21 - fVar29;
        fVar22 = fVar22 - fVar30;
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = fVar19;
        auVar4._8_4_ = fVar21;
        auVar4._12_4_ = fVar22;
        auVar5._4_4_ = fVar20;
        auVar5._0_4_ = fVar19;
        auVar5._8_4_ = fVar21;
        auVar5._12_4_ = fVar22;
        auVar31 = NEON_ext(auVar4,auVar5,4,1);
        fVar23 = fVar23 - fVar27;
        fVar24 = fVar24 - fVar28;
        fVar25 = fVar25 - fVar29;
        fVar26 = fVar26 - fVar30;
        auVar6._4_4_ = fVar24;
        auVar6._0_4_ = fVar23;
        auVar6._8_4_ = fVar25;
        auVar6._12_4_ = fVar26;
        auVar7._4_4_ = fVar24;
        auVar7._0_4_ = fVar23;
        auVar7._8_4_ = fVar25;
        auVar7._12_4_ = fVar26;
        auVar34 = NEON_ext(auVar6,auVar7,4,1);
        auVar37 = NEON_ext(auVar31,auVar31,8,1);
        auVar38 = NEON_ext(auVar34,auVar34,8,1);
        uVar35 = NEON_rev64(auVar37._0_8_,4);
        uVar36 = NEON_rev64(auVar38._0_8_,4);
        auVar32._0_4_ = fVar19 * auVar34._0_4_ - fVar23 * auVar31._0_4_;
        auVar32._4_4_ = fVar20 * auVar34._4_4_ - fVar24 * auVar31._4_4_;
        auVar32._8_4_ = fVar21 * (float)uVar36 - fVar25 * (float)uVar35;
        auVar32._12_4_ =
             fVar22 * (float)((ulong)uVar36 >> 0x20) - fVar26 * (float)((ulong)uVar35 >> 0x20);
        auVar31 = NEON_ext(auVar32,auVar32,4,1);
        puVar3[1] = (ulong)(uint)fVar21;
        *puVar3 = CONCAT44(fVar20,fVar19);
        puVar3[3] = (ulong)(uint)fVar25;
        puVar3[2] = CONCAT44(fVar24,fVar23);
        puVar3[5] = (ulong)(uint)auVar32._0_4_;
        puVar3[4] = auVar31._0_8_;
        puVar3[7] = CONCAT44(uVar18,fVar29);
        puVar3[6] = CONCAT44(fVar28,fVar27);
        if (bVar8) break;
        puVar13 = puVar10 + (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + (long)(int)uVar12 * 2) *
                            3;
        if (uVar1 == uVar12) goto LAB_0064018c;
      }
      puVar13 = (ushort *)0x0;
    } while (uVar1 != uVar12);
  }
LAB_0064018c:
  lVar9 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar9 == 0) {
    return;
  }
  FUN_00443a70(lVar9,&DAT_04085310);
  return;
}

