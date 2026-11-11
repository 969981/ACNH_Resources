
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00641270(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  ushort *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar33;
  int iVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  int iVar38;
  int iVar39;
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  
  lVar8 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar8 != 0) {
    FUN_00443a00(lVar8,"TtBuild Triangle Transforms");
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  puVar9 = *(ushort **)(param_2 + 0x30);
  lVar8 = *(long *)(param_2 + 0x18);
  fVar12 = (float)_DAT_0413f420;
  fVar13 = (float)((ulong)_DAT_0413f420 >> 0x20);
  fVar14 = (float)_UNK_0413f428;
  fVar15 = (float)((ulong)_UNK_0413f428 >> 0x20);
  uVar16 = (undefined4)_DAT_0413f320;
  if (uVar1 == 0) {
    iVar33 = *(int *)(param_2 + 0x38);
    if (iVar33 != 0) {
      iVar38 = 0;
      do {
        puVar2 = (undefined8 *)(lVar8 + (ulong)*puVar9 * 0x10);
        uVar35 = puVar2[1];
        fVar23 = (float)uVar35;
        fVar24 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = *puVar2;
        fVar21 = (float)uVar35;
        fVar22 = (float)((ulong)uVar35 >> 0x20);
        puVar2 = (undefined8 *)(lVar8 + (ulong)puVar9[1] * 0x10);
        uVar35 = puVar2[1];
        fVar27 = (float)uVar35;
        fVar28 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = *puVar2;
        fVar25 = (float)uVar35;
        fVar26 = (float)((ulong)uVar35 >> 0x20);
        puVar11 = puVar9 + 2;
        puVar9 = puVar9 + 3;
        puVar2 = (undefined8 *)(lVar8 + (ulong)*puVar11 * 0x10);
        uVar36 = puVar2[1];
        uVar35 = *puVar2;
        puVar2 = (undefined8 *)(*param_3 + (long)iVar38 * 0x40);
        iVar38 = iVar38 + 1;
        fVar17 = (fVar21 + fVar25 + (float)uVar35) * fVar12;
        fVar18 = (fVar22 + fVar26 + (float)((ulong)uVar35 >> 0x20)) * fVar13;
        fVar19 = (fVar23 + fVar27 + (float)uVar36) * fVar14;
        fVar20 = (fVar24 + fVar28 + (float)((ulong)uVar36 >> 0x20)) * fVar15;
        fVar21 = fVar21 - fVar17;
        fVar22 = fVar22 - fVar18;
        fVar23 = fVar23 - fVar19;
        fVar24 = fVar24 - fVar20;
        auVar29._4_4_ = fVar22;
        auVar29._0_4_ = fVar21;
        auVar29._8_4_ = fVar23;
        auVar29._12_4_ = fVar24;
        auVar32._4_4_ = fVar22;
        auVar32._0_4_ = fVar21;
        auVar32._8_4_ = fVar23;
        auVar32._12_4_ = fVar24;
        auVar29 = NEON_ext(auVar29,auVar32,4,1);
        fVar25 = fVar25 - fVar17;
        fVar26 = fVar26 - fVar18;
        fVar27 = fVar27 - fVar19;
        fVar28 = fVar28 - fVar20;
        auVar37._4_4_ = fVar26;
        auVar37._0_4_ = fVar25;
        auVar37._8_4_ = fVar27;
        auVar37._12_4_ = fVar28;
        auVar40._4_4_ = fVar26;
        auVar40._0_4_ = fVar25;
        auVar40._8_4_ = fVar27;
        auVar40._12_4_ = fVar28;
        auVar32 = NEON_ext(auVar37,auVar40,4,1);
        auVar37 = NEON_ext(auVar29,auVar29,8,1);
        auVar40 = NEON_ext(auVar32,auVar32,8,1);
        uVar35 = NEON_rev64(auVar37._0_8_,4);
        uVar36 = NEON_rev64(auVar40._0_8_,4);
        auVar31._0_4_ = fVar21 * auVar32._0_4_ - fVar25 * auVar29._0_4_;
        auVar31._4_4_ = fVar22 * auVar32._4_4_ - fVar26 * auVar29._4_4_;
        auVar31._8_4_ = fVar23 * (float)uVar36 - fVar27 * (float)uVar35;
        auVar31._12_4_ =
             fVar24 * (float)((ulong)uVar36 >> 0x20) - fVar28 * (float)((ulong)uVar35 >> 0x20);
        auVar29 = NEON_ext(auVar31,auVar31,4,1);
        puVar2[1] = (ulong)(uint)fVar23;
        *puVar2 = CONCAT44(fVar22,fVar21);
        puVar2[3] = (ulong)(uint)fVar27;
        puVar2[2] = CONCAT44(fVar26,fVar25);
        fVar24 = auVar29._0_4_;
        fVar25 = auVar29._4_4_;
        fVar20 = fVar24 * fVar24 + fVar25 * fVar25 + auVar31._0_4_ * auVar31._0_4_;
        fVar22 = fVar24 * fVar24 + fVar25 * fVar25 + auVar31._0_4_ * auVar31._0_4_;
        uVar35 = CONCAT44(fVar22,fVar20);
        uVar36 = NEON_frsqrte(uVar35,4);
        fVar21 = (float)uVar36;
        fVar23 = (float)((ulong)uVar36 >> 0x20);
        iVar34 = -(uint)(fVar20 <= 0.0);
        iVar39 = -(uint)(fVar22 <= 0.0);
        uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar23 * fVar23,fVar21 * fVar21),4);
        fVar21 = fVar21 * (float)uVar35;
        fVar23 = fVar23 * (float)((ulong)uVar35 >> 0x20);
        fVar20 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                 CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                          ~(byte)((uint)iVar34 >> 0x10),
                                          CONCAT11((byte)((uint)fVar21 >> 8) &
                                                   ~(byte)((uint)iVar34 >> 8),
                                                   SUB41(fVar21,0) & ~(byte)iVar34)));
        puVar2[5] = (ulong)(uint)(auVar31._0_4_ * fVar20);
        puVar2[4] = CONCAT44(fVar25 * (float)(CONCAT17((byte)((uint)fVar23 >> 0x18) &
                                                       ~(byte)((uint)iVar39 >> 0x18),
                                                       CONCAT16((byte)((uint)fVar23 >> 0x10) &
                                                                ~(byte)((uint)iVar39 >> 0x10),
                                                                CONCAT15((byte)((uint)fVar23 >> 8) &
                                                                         ~(byte)((uint)iVar39 >> 8),
                                                                         CONCAT14(SUB41(fVar23,0) &
                                                                                  ~(byte)iVar39,
                                                                                  fVar20)))) >> 0x20
                                             ),fVar24 * fVar20);
        puVar2[7] = CONCAT44(uVar16,fVar19);
        puVar2[6] = CONCAT44(fVar18,fVar17);
      } while (iVar33 != iVar38);
    }
  }
  else {
    puVar11 = puVar9 + (ulong)**(ushort **)(param_1 + 0x58) * 3;
    uVar10 = 0;
    do {
      while( true ) {
        puVar2 = (undefined8 *)(lVar8 + (ulong)*puVar11 * 0x10);
        uVar35 = puVar2[1];
        fVar19 = (float)uVar35;
        fVar20 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = *puVar2;
        fVar17 = (float)uVar35;
        fVar18 = (float)((ulong)uVar35 >> 0x20);
        bVar7 = uVar1 - 1 <= uVar10;
        puVar2 = (undefined8 *)(lVar8 + (ulong)puVar11[1] * 0x10);
        uVar35 = puVar2[1];
        fVar23 = (float)uVar35;
        fVar24 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = *puVar2;
        fVar21 = (float)uVar35;
        fVar22 = (float)((ulong)uVar35 >> 0x20);
        puVar2 = (undefined8 *)(lVar8 + (ulong)puVar11[2] * 0x10);
        uVar36 = puVar2[1];
        uVar35 = *puVar2;
        puVar2 = (undefined8 *)(*param_3 + (long)(int)uVar10 * 0x40);
        uVar10 = uVar10 + 1;
        fVar25 = (fVar17 + fVar21 + (float)uVar35) * fVar12;
        fVar26 = (fVar18 + fVar22 + (float)((ulong)uVar35 >> 0x20)) * fVar13;
        fVar27 = (fVar19 + fVar23 + (float)uVar36) * fVar14;
        fVar28 = (fVar20 + fVar24 + (float)((ulong)uVar36 >> 0x20)) * fVar15;
        fVar17 = fVar17 - fVar25;
        fVar18 = fVar18 - fVar26;
        fVar19 = fVar19 - fVar27;
        fVar20 = fVar20 - fVar28;
        auVar3._4_4_ = fVar18;
        auVar3._0_4_ = fVar17;
        auVar3._8_4_ = fVar19;
        auVar3._12_4_ = fVar20;
        auVar4._4_4_ = fVar18;
        auVar4._0_4_ = fVar17;
        auVar4._8_4_ = fVar19;
        auVar4._12_4_ = fVar20;
        auVar29 = NEON_ext(auVar3,auVar4,4,1);
        fVar21 = fVar21 - fVar25;
        fVar22 = fVar22 - fVar26;
        fVar23 = fVar23 - fVar27;
        fVar24 = fVar24 - fVar28;
        auVar5._4_4_ = fVar22;
        auVar5._0_4_ = fVar21;
        auVar5._8_4_ = fVar23;
        auVar5._12_4_ = fVar24;
        auVar6._4_4_ = fVar22;
        auVar6._0_4_ = fVar21;
        auVar6._8_4_ = fVar23;
        auVar6._12_4_ = fVar24;
        auVar32 = NEON_ext(auVar5,auVar6,4,1);
        auVar37 = NEON_ext(auVar29,auVar29,8,1);
        auVar40 = NEON_ext(auVar32,auVar32,8,1);
        uVar35 = NEON_rev64(auVar37._0_8_,4);
        uVar36 = NEON_rev64(auVar40._0_8_,4);
        auVar30._0_4_ = fVar17 * auVar32._0_4_ - fVar21 * auVar29._0_4_;
        auVar30._4_4_ = fVar18 * auVar32._4_4_ - fVar22 * auVar29._4_4_;
        auVar30._8_4_ = fVar19 * (float)uVar36 - fVar23 * (float)uVar35;
        auVar30._12_4_ =
             fVar20 * (float)((ulong)uVar36 >> 0x20) - fVar24 * (float)((ulong)uVar35 >> 0x20);
        auVar29 = NEON_ext(auVar30,auVar30,4,1);
        puVar2[1] = (ulong)(uint)fVar19;
        *puVar2 = CONCAT44(fVar18,fVar17);
        puVar2[3] = (ulong)(uint)fVar23;
        puVar2[2] = CONCAT44(fVar22,fVar21);
        fVar21 = auVar29._0_4_;
        fVar22 = auVar29._4_4_;
        fVar17 = fVar21 * fVar21 + fVar22 * fVar22 + auVar30._0_4_ * auVar30._0_4_;
        fVar19 = fVar21 * fVar21 + fVar22 * fVar22 + auVar30._0_4_ * auVar30._0_4_;
        uVar35 = CONCAT44(fVar19,fVar17);
        uVar36 = NEON_frsqrte(uVar35,4);
        fVar18 = (float)uVar36;
        fVar20 = (float)((ulong)uVar36 >> 0x20);
        iVar33 = -(uint)(fVar17 <= 0.0);
        iVar38 = -(uint)(fVar19 <= 0.0);
        uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar20 * fVar20,fVar18 * fVar18),4);
        fVar18 = fVar18 * (float)uVar35;
        fVar20 = fVar20 * (float)((ulong)uVar35 >> 0x20);
        fVar17 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                                 CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                          ~(byte)((uint)iVar33 >> 0x10),
                                          CONCAT11((byte)((uint)fVar18 >> 8) &
                                                   ~(byte)((uint)iVar33 >> 8),
                                                   SUB41(fVar18,0) & ~(byte)iVar33)));
        puVar2[5] = (ulong)(uint)(auVar30._0_4_ * fVar17);
        puVar2[4] = CONCAT44(fVar22 * (float)(CONCAT17((byte)((uint)fVar20 >> 0x18) &
                                                       ~(byte)((uint)iVar38 >> 0x18),
                                                       CONCAT16((byte)((uint)fVar20 >> 0x10) &
                                                                ~(byte)((uint)iVar38 >> 0x10),
                                                                CONCAT15((byte)((uint)fVar20 >> 8) &
                                                                         ~(byte)((uint)iVar38 >> 8),
                                                                         CONCAT14(SUB41(fVar20,0) &
                                                                                  ~(byte)iVar38,
                                                                                  fVar17)))) >> 0x20
                                             ),fVar21 * fVar17);
        puVar2[7] = CONCAT44(uVar16,fVar27);
        puVar2[6] = CONCAT44(fVar26,fVar25);
        if (bVar7) break;
        puVar11 = puVar9 + (ulong)*(ushort *)(*(long *)(param_1 + 0x58) + (long)(int)uVar10 * 2) * 3
        ;
        if (uVar1 == uVar10) goto LAB_006414bc;
      }
      puVar11 = (ushort *)0x0;
    } while (uVar1 != uVar10);
  }
LAB_006414bc:
  lVar8 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar8 == 0) {
    return;
  }
  FUN_00443a70(lVar8,&DAT_04085310);
  return;
}

