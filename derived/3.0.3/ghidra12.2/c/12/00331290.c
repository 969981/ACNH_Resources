
void thunk_FUN_003312a0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined2 uVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  void *__s;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  uVar15 = (**(code **)(*param_1 + 0x10))(param_1,0x2000,0x80);
  puVar14 = PTR_DAT_04bcee78;
  *(undefined8 *)PTR_DAT_04bcee78 = uVar15;
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,0x2000,0x80);
  puVar13 = PTR_DAT_04bcee58;
  *(void **)PTR_DAT_04bcee58 = __s;
  memset(*(void **)puVar14,0,0x2000);
  memset(__s,0,0x2000);
  lVar16 = 0;
  uVar17 = 0x720a056d;
  uVar19 = 0x45f0cdb4;
  uVar21 = 0xe318145e;
  uVar20 = 0x178eab2c;
  do {
    uVar20 = uVar20 ^ uVar20 << 0xb;
    uVar19 = uVar19 ^ uVar19 << 0xb;
    uVar1 = uVar17 ^ uVar20;
    uVar2 = uVar17 >> 0x13 ^ uVar20 >> 8 ^ uVar1;
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar21 = uVar21 ^ uVar21 << 0xb;
    uVar3 = uVar21 >> 8 ^ uVar2 >> 0x13 ^ uVar21 ^ uVar2;
    uVar4 = uVar19 ^ uVar3;
    uVar20 = uVar19 >> 8 ^ uVar3 >> 0x13 ^ uVar4;
    *(float *)(*(long *)puVar14 + lVar16) =
         ((float)CONCAT13(0x3f,CONCAT12((byte)(uVar1 >> 0x19),(short)(uVar2 >> 9)) | 0x800000) +
         -1.0) * 2.0 + -1.0;
    *(float *)(*(long *)puVar14 + lVar16 + 4) =
         ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) * 2.0 + -1.0;
    uVar1 = uVar17 ^ uVar20;
    uVar21 = uVar17 >> 8 ^ uVar20 >> 0x13 ^ uVar1;
    uVar2 = uVar2 ^ uVar2 << 0xb;
    uVar15 = *(undefined8 *)(*(long *)puVar14 + lVar16);
    uVar19 = uVar2 >> 8 ^ uVar21 >> 0x13 ^ uVar2 ^ uVar21;
    lVar18 = *(long *)puVar13;
    puVar5 = (undefined8 *)(*(long *)puVar14 + lVar16);
    puVar5[1] = (ulong)(uint)(((float)CONCAT13(0x3f,CONCAT12((byte)(uVar4 >> 0x19),
                                                             (short)(uVar20 >> 9)) | 0x800000) +
                              -1.0) * 2.0 + -1.0);
    *puVar5 = uVar15;
    *(float *)(lVar18 + lVar16) =
         ((float)CONCAT13(0x3f,CONCAT12((byte)(uVar1 >> 0x19),(short)(uVar21 >> 9)) | 0x800000) +
         -1.0) * 2.0 + -1.0;
    uVar3 = uVar3 ^ uVar3 << 0xb;
    uVar1 = uVar3 ^ uVar19;
    uVar17 = uVar3 >> 8 ^ uVar19 >> 0x13 ^ uVar1;
    *(float *)(*(long *)puVar13 + lVar16 + 4) =
         ((float)(uVar19 >> 9 | 0x3f800000) + -1.0) * 2.0 + -1.0;
    uVar15 = *(undefined8 *)(*(long *)puVar13 + lVar16);
    fVar32 = ((float)CONCAT13(0x3f,CONCAT12((byte)(uVar1 >> 0x19),(short)(uVar17 >> 9)) | 0x800000)
             + -1.0) * 2.0 + -1.0;
    fVar30 = (float)uVar15;
    fVar23 = fVar30 * fVar30;
    fVar31 = (float)((ulong)uVar15 >> 0x20);
    fVar9 = fVar31 * fVar31;
    uVar24 = (undefined1)((uint)fVar9 >> 8);
    uVar25 = (undefined1)((uint)fVar9 >> 0x10);
    uVar26 = (undefined1)((uint)fVar9 >> 0x18);
    fVar22 = fVar32 * fVar32;
    uVar27 = (undefined1)((uint)fVar22 >> 8);
    uVar28 = (undefined1)((uint)fVar22 >> 0x10);
    uVar29 = (undefined1)((uint)fVar22 >> 0x18);
    auVar33[4] = SUB41(fVar9,0);
    auVar33._0_4_ = fVar23;
    auVar33[5] = uVar24;
    auVar33[6] = uVar25;
    auVar33[7] = uVar26;
    auVar33[8] = SUB41(fVar22,0);
    auVar33[9] = uVar27;
    auVar33[10] = uVar28;
    auVar33[0xb] = uVar29;
    auVar33._12_4_ = 0;
    auVar36[4] = SUB41(fVar9,0);
    auVar36._0_4_ = fVar23;
    auVar36[5] = uVar24;
    auVar36[6] = uVar25;
    auVar36[7] = uVar26;
    auVar36[8] = SUB41(fVar22,0);
    auVar36[9] = uVar27;
    auVar36[10] = uVar28;
    auVar36[0xb] = uVar29;
    auVar36._12_4_ = 0;
    auVar33 = NEON_ext(auVar33,auVar36,8,1);
    fVar23 = auVar33._0_4_ + fVar23;
    fVar9 = auVar33._4_4_ + fVar9;
    fVar22 = fVar23 + fVar9;
    fVar23 = fVar23 + fVar9;
    uVar24 = SUB41(fVar23,0);
    uVar25 = (undefined1)((uint)fVar23 >> 8);
    uVar26 = (undefined1)((uint)fVar23 >> 0x10);
    uVar27 = (undefined1)((uint)fVar23 >> 0x18);
    auVar6[4] = uVar24;
    auVar6._0_4_ = fVar22;
    auVar6[5] = uVar25;
    auVar6[6] = uVar26;
    auVar6[7] = uVar27;
    auVar6[8] = SUB41(fVar22,0);
    auVar6[9] = (char)((uint)fVar22 >> 8);
    auVar6[10] = (char)((uint)fVar22 >> 0x10);
    auVar6[0xb] = (char)((uint)fVar22 >> 0x18);
    auVar6[0xc] = uVar24;
    auVar6[0xd] = uVar25;
    auVar6[0xe] = uVar26;
    auVar6[0xf] = uVar27;
    auVar33 = NEON_frsqrte(auVar6,4);
    auVar35._0_4_ = auVar33._0_4_ * fVar22;
    auVar35._4_4_ = auVar33._4_4_ * fVar23;
    auVar35._8_4_ = auVar33._8_4_ * fVar22;
    uVar7 = (undefined2)(CONCAT15(uVar25,CONCAT14(uVar24,fVar22)) >> 0x20);
    auVar35._12_4_ = auVar33._12_4_ * (float)CONCAT13(uVar27,CONCAT12(uVar26,uVar7));
    auVar36 = NEON_frsqrts(auVar33,auVar35,4);
    auVar34._0_4_ = auVar33._0_4_ * auVar36._0_4_;
    auVar34._4_4_ = auVar33._4_4_ * auVar36._4_4_;
    auVar34._8_4_ = auVar33._8_4_ * auVar36._8_4_;
    auVar34._12_4_ = auVar33._12_4_ * auVar36._12_4_;
    auVar37._0_4_ = fVar22 * auVar34._0_4_;
    auVar37._4_4_ = fVar23 * auVar34._4_4_;
    auVar37._8_4_ = fVar22 * auVar34._8_4_;
    auVar37._12_4_ = (float)CONCAT13(uVar27,CONCAT12(uVar26,uVar7)) * auVar34._12_4_;
    iVar8 = -(uint)(fVar22 == 0.0);
    iVar10 = -(uint)(fVar23 == 0.0);
    iVar11 = -(uint)(fVar22 == 0.0);
    iVar12 = -(uint)((float)CONCAT13(uVar27,CONCAT12(uVar26,uVar7)) == 0.0);
    auVar33 = NEON_frsqrts(auVar34,auVar37,4);
    fVar30 = fVar30 * auVar34._0_4_ * auVar33._0_4_;
    fVar31 = fVar31 * auVar34._4_4_ * auVar33._4_4_;
    fVar32 = fVar32 * auVar34._8_4_ * auVar33._8_4_;
    fVar23 = auVar34._12_4_ * auVar33._12_4_ * 0.0;
    puVar5 = (undefined8 *)(*(long *)puVar13 + lVar16);
    puVar5[1] = CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                         CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                  CONCAT15((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                           CONCAT14(SUB41(fVar23,0) & ~(byte)iVar12,
                                                    CONCAT13((byte)((uint)fVar32 >> 0x18) &
                                                             ~(byte)((uint)iVar11 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                                                      ~(byte)((uint)iVar11 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar32
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar11
                                                                                      >> 8),
                                                                               SUB41(fVar32,0) &
                                                                               ~(byte)iVar11)))))));
    *puVar5 = CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                       CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                                CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                         CONCAT14(SUB41(fVar31,0) & ~(byte)iVar10,
                                                  CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                           ~(byte)((uint)iVar8 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                                    ~(byte)((uint)iVar8 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar30 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar8 >>
                                                                                    8),
                                                                             SUB41(fVar30,0) &
                                                                             ~(byte)iVar8)))))));
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x2000);
  return;
}

