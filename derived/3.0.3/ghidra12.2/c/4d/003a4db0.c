
uint FUN_003a4db0(long param_1,long param_2,long param_3)

{
  bool bVar1;
  float *pfVar2;
  char *__s;
  uint uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  size_t __n;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar42;
  undefined8 uVar38;
  int iVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  
  uVar17 = DAT_04102218;
  uVar16 = DAT_04102210;
  uVar4 = *(ushort *)(param_1 + 100);
  if ((ulong)uVar4 == 0) {
    uVar22 = 0;
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    fVar29 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
    uVar19 = (ulong)(*(float *)PTR_FloatPi_04bcee68 * 0.5 *
                    (fVar29 / *(float *)PTR_FloatPi_04bcedc8));
    pfVar2 = (float *)(PTR_SinCosSampleTable_04bcef98 + (uVar19 >> 0x18 & 0xff) * 0x10);
    fVar29 = (float)((uint)uVar19 & 0xffffff) * 5.9604645e-08;
    do {
      lVar21 = *(long *)(param_1 + 0x80);
      puVar5 = (undefined8 *)(lVar21 + uVar24 * 0x10);
      puVar5[1] = uVar17;
      *puVar5 = uVar16;
      lVar25 = *(long *)(param_3 + 8);
      if (lVar25 == 0) {
LAB_003a4ef8:
        uVar22 = uVar22 | 0x10000;
      }
      else {
        __s = (char *)(*(long *)(*(long *)(param_1 + 0x70) + uVar24 * 0x38) + 2);
        uVar23 = *(uint *)(*(long *)(param_1 + 0x58) + uVar24 * 4);
        __n = strlen(__s);
        uVar19 = (ulong)*(ushort *)(lVar25 + 0xc);
        puVar26 = (uint *)((int *)(lVar25 + 8) + uVar19 * 4);
        uVar3 = *puVar26;
        if (*(int *)(lVar25 + 8) < (int)*puVar26) {
          do {
            uVar20 = (long)((ulong)uVar3 << 0x20) >> 0x23;
            if (uVar20 < __n) {
              uVar20 = (ulong)((byte)__s[__n + ~uVar20] >> ((ulong)uVar3 & 7)) & 1;
            }
            else {
              uVar20 = 0;
            }
            uVar19 = (ulong)*(ushort *)(lVar25 + 8 + uVar19 * 0x10 + uVar20 * 2 + 4);
            puVar26 = (uint *)(lVar25 + 8 + uVar19 * 0x10);
            bVar1 = (int)uVar3 < (int)*puVar26;
            uVar3 = *puVar26;
          } while (bVar1);
        }
        if ((((__n != **(ushort **)(puVar26 + 2)) ||
             (iVar18 = memcmp(*(ushort **)(puVar26 + 2) + 1,__s,__n), iVar18 != 0)) ||
            (uVar23 = uVar23 & 0x7fff, uVar23 == 0x7fff)) ||
           (uVar19 = (long)puVar26 + (-0x18 - lVar25), (uVar19 >> 0x23 & 1) != 0))
        goto LAB_003a4ef8;
        uVar22 = uVar22 | 1;
        lVar25 = *(long *)(param_3 + 0x10) + (uVar19 >> 4 & 0xffffffff) * 0x60;
        uVar45 = *(undefined8 *)(lVar25 + 0x54);
        fVar53 = *(float *)(lVar25 + 0x5c);
        fVar51 = (float)uVar45;
        fVar52 = (float)((ulong)uVar45 >> 0x20);
        fVar27 = fVar53 * fVar53 + fVar51 * fVar51 + fVar52 * fVar52 + 0.0;
        if (fVar27 != 0.0) {
          fVar30 = SQRT(fVar27);
          lVar25 = *(long *)(param_2 + 0x10);
          if (NAN(fVar30)) {
            fVar30 = sqrtf(fVar27);
          }
          lVar25 = lVar25 + (ulong)uVar23 * 0x60;
          uVar45 = *(undefined8 *)(lVar25 + 0x54);
          fVar27 = *(float *)(lVar25 + 0x5c);
          fVar33 = (float)uVar45;
          fVar37 = (float)((ulong)uVar45 >> 0x20);
          fVar32 = fVar27 * fVar27 + fVar33 * fVar33;
          fVar36 = fVar37 * fVar37 + 0.0;
          fVar28 = fVar32 + fVar36;
          fVar32 = fVar32 + fVar36;
          if (fVar28 != 0.0) {
            if (NAN(SQRT(fVar28))) {
              fVar36 = sqrtf(fVar28);
              fVar36 = (1.0 / fVar30) * (fVar28 / fVar36);
            }
            else {
              fVar36 = (1.0 / fVar30) * (fVar28 / SQRT(fVar28));
            }
            fVar31 = SQRT(fVar36);
            if (NAN(fVar31)) {
              fVar31 = sqrtf(fVar36);
            }
            fVar30 = 1.0 / fVar30;
            auVar34._4_4_ = fVar32;
            auVar34._0_4_ = fVar28;
            auVar34._8_4_ = fVar28;
            auVar34._12_4_ = fVar32;
            auVar34 = NEON_frsqrte(auVar34,4);
            fVar51 = fVar51 * fVar30;
            fVar52 = fVar52 * fVar30;
            fVar53 = fVar53 * fVar30;
            fVar30 = fVar30 * 0.0;
            auVar39._0_4_ = fVar28 * auVar34._0_4_;
            auVar39._4_4_ = fVar32 * auVar34._4_4_;
            auVar39._8_4_ = fVar28 * auVar34._8_4_;
            auVar39._12_4_ = fVar32 * auVar34._12_4_;
            auVar40 = NEON_frsqrts(auVar34,auVar39,4);
            auVar35._0_4_ = auVar34._0_4_ * auVar40._0_4_;
            auVar35._4_4_ = auVar34._4_4_ * auVar40._4_4_;
            auVar35._8_4_ = auVar34._8_4_ * auVar40._8_4_;
            auVar35._12_4_ = auVar34._12_4_ * auVar40._12_4_;
            auVar41._0_4_ = fVar28 * auVar35._0_4_;
            auVar41._4_4_ = fVar32 * auVar35._4_4_;
            auVar41._8_4_ = fVar28 * auVar35._8_4_;
            auVar41._12_4_ = fVar32 * auVar35._12_4_;
            auVar34 = NEON_frsqrts(auVar35,auVar41,4);
            iVar18 = -(uint)(fVar28 == 0.0);
            iVar42 = -(uint)(fVar32 == 0.0);
            iVar43 = -(uint)(fVar28 == 0.0);
            iVar44 = -(uint)(fVar32 == 0.0);
            fVar33 = fVar33 * auVar35._0_4_ * auVar34._0_4_;
            fVar37 = fVar37 * auVar35._4_4_ * auVar34._4_4_;
            fVar27 = fVar27 * auVar35._8_4_ * auVar34._8_4_;
            fVar28 = auVar35._12_4_ * auVar34._12_4_ * 0.0;
            bVar54 = SUB41(fVar33,0) & ~(byte)iVar18;
            bVar55 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar18 >> 8);
            bVar56 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
            bVar57 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
            bVar58 = SUB41(fVar37,0) & ~(byte)iVar42;
            bVar59 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar42 >> 8);
            bVar60 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
            bVar61 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
            bVar62 = SUB41(fVar27,0) & ~(byte)iVar43;
            bVar63 = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar43 >> 8);
            bVar64 = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
            bVar65 = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
            bVar66 = SUB41(fVar28,0) & ~(byte)iVar44;
            bVar67 = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar44 >> 8);
            bVar68 = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
            bVar69 = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
            auVar40._0_4_ =
                 fVar51 * (float)CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
            auVar40._4_4_ =
                 fVar52 * (float)CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58)));
            auVar40._8_4_ =
                 fVar53 * (float)CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,bVar62)));
            auVar40._12_4_ =
                 fVar30 * (float)CONCAT13(bVar69,CONCAT12(bVar68,CONCAT11(bVar67,bVar66)));
            auVar34 = NEON_ext(auVar40,auVar40,8,1);
            fVar27 = auVar34._0_4_ + auVar40._0_4_ + auVar34._4_4_ + auVar40._4_4_ + 1.0;
            fVar27 = fVar27 + fVar27;
            if (1.1920929e-07 <= fVar27) {
              fVar28 = SQRT(fVar27);
              if (NAN(fVar28)) {
                fVar28 = sqrtf(fVar27);
              }
              auVar8._4_4_ = fVar52;
              auVar8._0_4_ = fVar51;
              auVar8._8_4_ = fVar53;
              auVar8._12_4_ = fVar30;
              uVar46 = a64_TBL(ZEXT816(0),auVar8,DAT_04101580);
              auVar12[1] = bVar55;
              auVar12[0] = bVar54;
              auVar12[2] = bVar56;
              auVar12[3] = bVar57;
              auVar12[4] = bVar58;
              auVar12[5] = bVar59;
              auVar12[6] = bVar60;
              auVar12[7] = bVar61;
              auVar12[8] = bVar62;
              auVar12[9] = bVar63;
              auVar12[10] = bVar64;
              auVar12[0xb] = bVar65;
              auVar12[0xc] = bVar66;
              auVar12[0xd] = bVar67;
              auVar12[0xe] = bVar68;
              auVar12[0xf] = bVar69;
              uVar38 = a64_TBL(ZEXT816(0),auVar12,DAT_04101580);
              auVar9._4_4_ = fVar52;
              auVar9._0_4_ = fVar51;
              auVar9._8_4_ = fVar53;
              auVar9._12_4_ = fVar30;
              uVar45 = a64_TBL(ZEXT816(0),auVar9,DAT_041015c8);
              auVar13[1] = bVar55;
              auVar13[0] = bVar54;
              auVar13[2] = bVar56;
              auVar13[3] = bVar57;
              auVar13[4] = bVar58;
              auVar13[5] = bVar59;
              auVar13[6] = bVar60;
              auVar13[7] = bVar61;
              auVar13[8] = bVar62;
              auVar13[9] = bVar63;
              auVar13[10] = bVar64;
              auVar13[0xb] = bVar65;
              auVar13[0xc] = bVar66;
              auVar13[0xd] = bVar67;
              auVar13[0xe] = bVar68;
              auVar13[0xf] = bVar69;
              uVar47 = a64_TBL(ZEXT816(0),auVar13,DAT_041015c8);
              auVar14[1] = bVar55;
              auVar14[0] = bVar54;
              auVar14[2] = bVar56;
              auVar14[3] = bVar57;
              auVar14[4] = bVar58;
              auVar14[5] = bVar59;
              auVar14[6] = bVar60;
              auVar14[7] = bVar61;
              auVar14[8] = bVar62;
              auVar14[9] = bVar63;
              auVar14[10] = bVar64;
              auVar14[0xb] = bVar65;
              auVar14[0xc] = bVar66;
              auVar14[0xd] = bVar67;
              auVar14[0xe] = bVar68;
              auVar14[0xf] = bVar69;
              uVar49 = a64_TBL(ZEXT816(0),auVar14,DAT_04101598);
              auVar15[1] = bVar55;
              auVar15[0] = bVar54;
              auVar15[2] = bVar56;
              auVar15[3] = bVar57;
              auVar15[4] = bVar58;
              auVar15[5] = bVar59;
              auVar15[6] = bVar60;
              auVar15[7] = bVar61;
              auVar15[8] = bVar62;
              auVar15[9] = bVar63;
              auVar15[10] = bVar64;
              auVar15[0xb] = bVar65;
              auVar15[0xc] = bVar66;
              auVar15[0xd] = bVar67;
              auVar15[0xe] = bVar68;
              auVar15[0xf] = bVar69;
              uVar50 = a64_TBL(ZEXT816(0),auVar15,DAT_041016a0);
              auVar10._4_4_ = fVar52;
              auVar10._0_4_ = fVar51;
              auVar10._8_4_ = fVar53;
              auVar10._12_4_ = fVar30;
              uVar7 = a64_TBL(ZEXT816(0),auVar10,DAT_04101598);
              auVar11._4_4_ = fVar52;
              auVar11._0_4_ = fVar51;
              auVar11._8_4_ = fVar53;
              auVar11._12_4_ = fVar30;
              uVar48 = a64_TBL(ZEXT816(0),auVar11,DAT_041016a0);
              fVar30 = fVar31 * (1.0 / fVar28);
              fVar32 = fVar30 * ((float)uVar46 * (float)uVar49 - (float)uVar38 * (float)uVar7);
              fVar53 = fVar30 * ((float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar49 >> 0x20) -
                                (float)((ulong)uVar38 >> 0x20) * (float)((ulong)uVar7 >> 0x20));
              fVar30 = fVar30 * ((float)uVar45 * (float)uVar50 - (float)uVar47 * (float)uVar48);
              fVar31 = fVar31 * 0.5 * fVar27 * (1.0 / fVar28);
            }
            else {
              fVar30 = -fVar52;
              if (fVar52 < fVar51) {
                fVar30 = fVar51;
              }
              fVar32 = 0.0;
              if (fVar52 < fVar51) {
                fVar32 = -fVar53;
              }
              fVar27 = (fVar31 * (pfVar2[1] + fVar29 * pfVar2[3])) /
                       (fVar30 * fVar30 + fVar32 * fVar32 + 0.0);
              fVar32 = fVar27 * fVar32;
              fVar53 = fVar27 * 0.0;
              fVar30 = fVar30 * fVar27;
              fVar31 = fVar31 * (*pfVar2 + fVar29 * pfVar2[2]);
            }
            pfVar6 = (float *)(lVar21 + uVar24 * 0x10);
            pfVar6[2] = fVar30;
            pfVar6[3] = fVar31;
            *pfVar6 = fVar32;
            pfVar6[1] = fVar53;
          }
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar4);
  }
  return uVar22;
}

