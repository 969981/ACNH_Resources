
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053b5d0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  long lVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [12];
  float *pfVar18;
  undefined8 uVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  lVar12 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar12 != 0) {
    FUN_00443a00(lVar12,"TtUpdate AABBs");
  }
  auVar21._8_8_ = _DAT_0413f508;
  auVar21._0_8_ = DAT_0413f500;
  iVar14 = *(int *)(param_1 + 0x28);
  lVar13 = *(long *)(param_1 + 0x18);
  auVar19._0_8_ = CONCAT44(-(float)((ulong)DAT_0413f500 >> 0x20),-(float)DAT_0413f500);
  auVar19._8_4_ = -(float)_DAT_0413f508;
  auVar19._12_4_ = -(float)((ulong)_DAT_0413f508 >> 0x20);
  uVar20 = auVar19._8_8_;
  if (iVar14 < 1) {
    auVar24._8_8_ = _DAT_0413f508;
    auVar24._0_8_ = DAT_0413f500;
    auVar26._8_8_ = uVar20;
    auVar26._0_8_ = auVar19._0_8_;
    auVar23._8_8_ = _DAT_0413f508;
    auVar23._0_8_ = DAT_0413f500;
    auVar27._8_8_ = uVar20;
    auVar27._0_8_ = auVar19._0_8_;
  }
  else {
    piVar15 = *(int **)(lVar13 + 0xe8);
    puVar16 = *(undefined8 **)(param_1 + 0x30);
    auVar28 = NEON_fmov(0x3fc00000,4);
    auVar27._8_8_ = uVar20;
    auVar27._0_8_ = auVar19._0_8_;
    pauVar17 = *(undefined1 (**) [12])(param_1 + 0x20);
    auVar23._8_8_ = _DAT_0413f508;
    auVar23._0_8_ = DAT_0413f500;
    auVar26._8_8_ = uVar20;
    auVar26._0_8_ = auVar19._0_8_;
    auVar24._8_8_ = _DAT_0413f508;
    auVar24._0_8_ = DAT_0413f500;
    pfVar18 = (float *)(*(long *)(lVar13 + 0x40) + 4);
    do {
      fVar29 = (float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
      auVar11 = *pauVar17;
      if ((*piVar15 != 0) || (*pfVar18 != 0.0)) {
        fVar36 = (float)puVar16[1];
        fVar37 = (float)((ulong)puVar16[1] >> 0x20);
        fVar34 = (float)*puVar16;
        fVar35 = (float)((ulong)*puVar16 >> 0x20);
        fVar38 = (float)*(undefined8 *)*pauVar17 - fVar34;
        fVar39 = (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20) - fVar35;
        fVar40 = (float)*(undefined8 *)(*pauVar17 + 8) - fVar36;
        fVar30 = fVar34 + fVar38 * 0.5;
        fVar31 = fVar35 + fVar39 * 0.5;
        fVar32 = fVar36 + fVar40 * 0.5;
        fVar33 = fVar37 + (fVar29 - fVar37) * 0.5;
        fVar34 = fVar34 + fVar38 * auVar28._0_4_;
        fVar35 = fVar35 + fVar39 * auVar28._4_4_;
        fVar36 = fVar36 + fVar40 * auVar28._8_4_;
        fVar37 = fVar37 + (fVar29 - fVar37) * auVar28._12_4_;
        auVar3._4_4_ = fVar31;
        auVar3._0_4_ = fVar30;
        auVar3._8_4_ = fVar32;
        auVar3._12_4_ = fVar33;
        auVar23 = NEON_fmin(auVar23,auVar3,4);
        auVar4._4_4_ = fVar31;
        auVar4._0_4_ = fVar30;
        auVar4._8_4_ = fVar32;
        auVar4._12_4_ = fVar33;
        auVar27 = NEON_fmax(auVar27,auVar4,4);
        auVar7._4_4_ = fVar35;
        auVar7._0_4_ = fVar34;
        auVar7._8_4_ = fVar36;
        auVar7._12_4_ = fVar37;
        auVar23 = NEON_fmin(auVar23,auVar7,4);
        auVar8._4_4_ = fVar35;
        auVar8._0_4_ = fVar34;
        auVar8._8_4_ = fVar36;
        auVar8._12_4_ = fVar37;
        auVar27 = NEON_fmax(auVar27,auVar8,4);
        if (*piVar15 < 0) {
          auVar5._4_4_ = fVar31;
          auVar5._0_4_ = fVar30;
          auVar5._8_4_ = fVar32;
          auVar5._12_4_ = fVar33;
          auVar24 = NEON_fmin(auVar24,auVar5,4);
          auVar6._4_4_ = fVar31;
          auVar6._0_4_ = fVar30;
          auVar6._8_4_ = fVar32;
          auVar6._12_4_ = fVar33;
          auVar26 = NEON_fmax(auVar26,auVar6,4);
          auVar9._4_4_ = fVar35;
          auVar9._0_4_ = fVar34;
          auVar9._8_4_ = fVar36;
          auVar9._12_4_ = fVar37;
          auVar24 = NEON_fmin(auVar24,auVar9,4);
          auVar10._4_4_ = fVar35;
          auVar10._0_4_ = fVar34;
          auVar10._8_4_ = fVar36;
          auVar10._12_4_ = fVar37;
          auVar26 = NEON_fmax(auVar26,auVar10,4);
        }
      }
      auVar1._12_4_ = fVar29;
      auVar1._0_12_ = *pauVar17;
      auVar21 = NEON_fmin(auVar21,auVar1,4);
      pauVar17 = (undefined1 (*) [12])(pauVar17[1] + 4);
      auVar2._12_4_ = fVar29;
      auVar2._0_12_ = auVar11;
      auVar19 = NEON_fmax(auVar19,auVar2,4);
      puVar16 = puVar16 + 2;
      piVar15 = piVar15 + 1;
      iVar14 = iVar14 + -1;
      pfVar18 = pfVar18 + 4;
    } while (iVar14 != 0);
  }
  lVar13 = lVar13 + 0x140;
  if (*(long *)(param_1 + 600) != 0) {
    lVar13 = *(long *)(param_1 + 600);
  }
  fVar29 = *(float *)(lVar13 + 0x14);
  *(long *)(param_1 + 0x68) = auVar21._8_8_;
  *(long *)(param_1 + 0x60) = auVar21._0_8_;
  *(long *)(param_1 + 0x78) = auVar19._8_8_;
  *(long *)(param_1 + 0x70) = auVar19._0_8_;
  auVar25._0_8_ = CONCAT44(auVar24._4_4_ - fVar29,auVar24._0_4_ - fVar29);
  auVar25._8_4_ = auVar24._8_4_ - fVar29;
  auVar25._12_4_ = auVar24._12_4_ - fVar29;
  auVar28._0_8_ = CONCAT44(auVar27._4_4_ + fVar29,auVar27._0_4_ + fVar29);
  auVar28._8_4_ = auVar27._8_4_ + fVar29;
  auVar28._12_4_ = auVar27._12_4_ + fVar29;
  *(long *)(param_1 + 0xb8) = auVar25._8_8_;
  *(undefined8 *)(param_1 + 0xb0) = auVar25._0_8_;
  *(float *)(param_1 + 200) = auVar26._8_4_ + fVar29;
  *(float *)(param_1 + 0xcc) = auVar26._12_4_ + fVar29;
  *(float *)(param_1 + 0xc0) = auVar26._0_4_ + fVar29;
  *(float *)(param_1 + 0xc4) = auVar26._4_4_ + fVar29;
  auVar22._0_8_ = CONCAT44(auVar23._4_4_ - fVar29,auVar23._0_4_ - fVar29);
  auVar22._8_4_ = auVar23._8_4_ - fVar29;
  auVar22._12_4_ = auVar23._12_4_ - fVar29;
  *(long *)(param_1 + 0x88) = auVar22._8_8_;
  *(undefined8 *)(param_1 + 0x80) = auVar22._0_8_;
  *(long *)(param_1 + 0x98) = auVar28._8_8_;
  *(undefined8 *)(param_1 + 0x90) = auVar28._0_8_;
  if (lVar12 != 0) {
    FUN_00443a70(lVar12,&DAT_04085310);
  }
  return;
}

