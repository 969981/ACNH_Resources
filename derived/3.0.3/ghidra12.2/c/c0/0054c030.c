
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054c030(long param_1,float *param_2,undefined8 *param_3,undefined8 param_4,float *param_5,
                 float *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 (*pauVar7) [12];
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar25;
  float fVar26;
  float fVar27;
  int iVar32;
  int iVar34;
  undefined1 auVar28 [16];
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  float fVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  *param_7 = DAT_0413f3d0;
  fVar11 = *param_2;
  fVar18 = param_2[1];
  fVar19 = param_2[2];
  fVar9 = *(float *)(param_1 + 0x60) +
          *(float *)(param_1 + 0x50) * fVar19 +
          (float)*(undefined8 *)(param_1 + 0x30) * fVar11 +
          (float)*(undefined8 *)(param_1 + 0x40) * fVar18;
  fVar10 = *(float *)(param_1 + 100) +
           *(float *)(param_1 + 0x54) * fVar19 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * fVar11 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar18;
  fVar11 = *(float *)(param_1 + 0x68) +
           *(float *)(param_1 + 0x58) * fVar19 +
           (float)*(undefined8 *)(param_1 + 0x38) * fVar11 +
           (float)*(undefined8 *)(param_1 + 0x48) * fVar18;
  fVar18 = (float)*param_3;
  fVar19 = (float)((ulong)*param_3 >> 0x20);
  iVar12 = -(uint)((float)*(undefined8 *)(param_1 + 0xb0) - fVar18 <= fVar9);
  iVar15 = -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) - fVar19 <= fVar10);
  iVar16 = -(uint)((float)*(undefined8 *)(param_1 + 0xb8) - fVar18 <= fVar11);
  iVar25 = -(uint)(fVar9 <= fVar18 + *(float *)(param_1 + 0xc0));
  iVar32 = -(uint)(fVar10 <= fVar19 + *(float *)(param_1 + 0xc4));
  iVar34 = -(uint)(fVar11 <= fVar18 + *(float *)(param_1 + 200));
  uVar13 = CONCAT13((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar12 >> 0x18),
                    CONCAT12((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar12 >> 0x10),
                             CONCAT11((byte)((uint)iVar25 >> 8) & (byte)((uint)iVar12 >> 8),
                                      (byte)iVar25 & (byte)iVar12)));
  if ((uVar13 & (uint)(CONCAT17((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
                                CONCAT16((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar15 >> 0x10)
                                         ,CONCAT15((byte)((uint)iVar32 >> 8) &
                                                   (byte)((uint)iVar15 >> 8),
                                                   CONCAT14((byte)iVar32 & (byte)iVar15,uVar13))))
                      >> 0x20) &
      CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
               CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar16 >> 0x10),
                        CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar16 >> 8),
                                 (byte)iVar34 & (byte)iVar16)))) != 0) {
    uVar13 = *(uint *)(param_1 + 0x28);
    fVar14 = (float)_DAT_0413f320;
    pauVar7 = *(undefined1 (**) [12])(param_1 + 0x20);
    fVar26 = -(float)DAT_0413f500;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    if ((int)uVar13 < 4) {
      auVar28 = ZEXT416((uint)fVar26) << 0x60;
    }
    else {
      uVar8 = uVar13 >> 2;
      do {
        auVar49._0_4_ = fVar9 * *(float *)(pauVar7[1] + 4);
        auVar49._4_4_ = fVar10 * *(float *)(pauVar7[1] + 8);
        auVar49._8_4_ = fVar11 * *(float *)pauVar7[2];
        auVar49._12_4_ = fVar14 * *(float *)(pauVar7[2] + 4);
        auVar48._0_4_ = fVar9 * *(float *)*pauVar7;
        auVar48._4_4_ = fVar10 * *(float *)(*pauVar7 + 4);
        auVar48._8_4_ = fVar11 * *(float *)(*pauVar7 + 8);
        auVar48._12_4_ = fVar14 * *(float *)pauVar7[1];
        auVar52._0_4_ = fVar9 * *(float *)(pauVar7[2] + 8);
        auVar52._4_4_ = fVar10 * *(float *)pauVar7[3];
        auVar52._8_4_ = fVar11 * *(float *)(pauVar7[3] + 4);
        auVar52._12_4_ = fVar14 * *(float *)(pauVar7[3] + 8);
        auVar56._0_4_ = fVar9 * *(float *)pauVar7[4];
        auVar56._4_4_ = fVar10 * *(float *)(pauVar7[4] + 4);
        auVar56._8_4_ = fVar11 * *(float *)(pauVar7[4] + 8);
        auVar56._12_4_ = fVar14 * *(float *)pauVar7[5];
        auVar28 = NEON_ext(auVar48,auVar48,8,1);
        auVar47 = NEON_ext(auVar49,auVar49,8,1);
        auVar53 = NEON_ext(auVar52,auVar52,8,1);
        auVar57 = NEON_ext(auVar56,auVar56,8,1);
        fVar27 = auVar48._0_4_ + auVar48._4_4_ + auVar28._0_4_ + auVar28._4_4_;
        fVar33 = auVar49._0_4_ + auVar49._4_4_ + auVar47._0_4_ + auVar47._4_4_;
        auVar47._4_4_ = fVar33;
        auVar47._0_4_ = fVar27;
        fVar45 = auVar52._0_4_ + auVar52._4_4_ + auVar53._0_4_ + auVar53._4_4_;
        fVar50 = auVar56._0_4_ + auVar56._4_4_ + auVar57._0_4_ + auVar57._4_4_;
        auVar47._12_4_ = fVar50;
        auVar47._8_4_ = fVar45;
        if (((fVar18 < fVar27 || fVar19 < fVar33) || fVar18 < fVar45) || fVar19 < fVar50) {
          return;
        }
        fVar55 = (float)NEON_fmaxnmv(auVar47,4);
        uVar8 = uVar8 - 1;
        cVar1 = (&DAT_0413f6c0)
                [-(uint)(fVar55 <= fVar33) & 2 | -(uint)(fVar55 <= fVar27) & 1 |
                 -(uint)(fVar55 <= fVar50) & 8 | -(uint)(fVar55 <= fVar45) & 4];
        if (cVar1 == '\x01') {
          fVar27 = fVar33;
        }
        if (cVar1 != '\x02') {
          fVar45 = fVar27;
        }
        if (cVar1 != 3) {
          fVar50 = fVar45;
        }
        pauVar2 = (undefined1 (*) [16])((long)pauVar7 + (long)(int)cVar1 * 0x10);
        pauVar7 = (undefined1 (*) [12])(pauVar7[5] + 4);
        auVar54._0_12_ = SUB1612(*pauVar2,0);
        auVar54._12_4_ = fVar50;
        auVar57._0_8_ = CONCAT44(-(uint)(fVar26 < fVar50),-(uint)(fVar26 < fVar50));
        auVar57._8_8_ = auVar57._0_8_;
        auVar53[1] = uVar37;
        auVar53[0] = uVar36;
        auVar53[2] = uVar38;
        auVar53[3] = uVar39;
        auVar53[4] = uVar40;
        auVar53[5] = uVar41;
        auVar53[6] = uVar42;
        auVar53[7] = uVar43;
        auVar53._8_4_ = uVar44;
        auVar53._12_4_ = fVar26;
        auVar28[1] = uVar37;
        auVar28[0] = uVar36;
        auVar28[2] = uVar38;
        auVar28[3] = uVar39;
        auVar28[4] = uVar40;
        auVar28[5] = uVar41;
        auVar28[6] = uVar42;
        auVar28[7] = uVar43;
        auVar28._8_4_ = uVar44;
        auVar28._12_4_ = fVar26;
        auVar28 = auVar28 ^ (auVar53 ^ auVar54) & auVar57;
        uVar44 = auVar28._8_4_;
        fVar26 = auVar28._12_4_;
        uVar36 = auVar28[0];
        uVar37 = auVar28[1];
        uVar38 = auVar28[2];
        uVar39 = auVar28[3];
        uVar40 = auVar28[4];
        uVar41 = auVar28[5];
        uVar42 = auVar28[6];
        uVar43 = auVar28[7];
      } while (0 < (int)uVar8);
    }
    if ((uVar13 & 3) != 0) {
      auVar21._0_4_ = fVar9 * (float)*(undefined8 *)*pauVar7;
      auVar21._4_4_ = fVar10 * (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
      auVar21._8_4_ = fVar11 * (float)*(undefined8 *)(*pauVar7 + 8);
      auVar21._12_4_ = fVar14 * (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
      auVar48 = NEON_ext(auVar21,auVar21,8,1);
      fVar26 = auVar48._0_4_ + auVar48._4_4_;
      fVar19 = auVar21._0_4_ + auVar21._4_4_ + fVar26;
      if (fVar18 < fVar19) {
        return;
      }
      auVar22._0_8_ =
           CONCAT44(-(uint)(auVar28._12_4_ < auVar21._0_4_ + auVar21._4_4_ + fVar26),
                    -(uint)(auVar28._12_4_ < fVar19));
      auVar22._8_8_ = auVar22._0_8_;
      auVar3._12_4_ = fVar19;
      auVar3._0_12_ = *pauVar7;
      auVar28 = auVar28 ^ (auVar28 ^ auVar3) & auVar22;
      if (1 < (uVar13 & 3)) {
        uVar20 = *(undefined8 *)*(undefined1 (*) [12])(pauVar7[1] + 4);
        auVar29._0_4_ = fVar9 * (float)uVar20;
        auVar29._4_4_ = fVar10 * (float)((ulong)uVar20 >> 0x20);
        auVar29._8_4_ = fVar11 * (float)*(undefined8 *)pauVar7[2];
        auVar29._12_4_ = fVar14 * (float)((ulong)*(undefined8 *)pauVar7[2] >> 0x20);
        auVar48 = NEON_ext(auVar29,auVar29,8,1);
        fVar26 = auVar48._0_4_ + auVar48._4_4_;
        fVar19 = auVar29._0_4_ + auVar29._4_4_ + fVar26;
        if (fVar18 < fVar19) {
          return;
        }
        auVar30._0_8_ =
             CONCAT44(-(uint)(auVar28._12_4_ < auVar29._0_4_ + auVar29._4_4_ + fVar26),
                      -(uint)(auVar28._12_4_ < fVar19));
        auVar30._8_8_ = auVar30._0_8_;
        auVar4._12_4_ = fVar19;
        auVar4._0_12_ = *(undefined1 (*) [12])(pauVar7[1] + 4);
        auVar28 = auVar28 ^ (auVar28 ^ auVar4) & auVar30;
        if ((uVar13 & 3) == 3) {
          auVar48 = *(undefined1 (*) [16])(pauVar7[2] + 8);
          fVar19 = fVar9 * auVar48._0_4_;
          fVar26 = fVar10 * auVar48._4_4_;
          uVar36 = (undefined1)((uint)fVar26 >> 8);
          uVar37 = (undefined1)((uint)fVar26 >> 0x10);
          uVar38 = (undefined1)((uint)fVar26 >> 0x18);
          fVar50 = fVar11 * auVar48._8_4_;
          fVar45 = fVar14 * auVar48._12_4_;
          auVar5[4] = SUB41(fVar26,0);
          auVar5._0_4_ = fVar19;
          auVar5[5] = uVar36;
          auVar5[6] = uVar37;
          auVar5[7] = uVar38;
          auVar5._8_4_ = fVar50;
          auVar5._12_4_ = fVar45;
          auVar6[4] = SUB41(fVar26,0);
          auVar6._0_4_ = fVar19;
          auVar6[5] = uVar36;
          auVar6[6] = uVar37;
          auVar6[7] = uVar38;
          auVar6._8_4_ = fVar50;
          auVar6._12_4_ = fVar45;
          auVar49 = NEON_ext(auVar5,auVar6,8,1);
          fVar45 = auVar49._0_4_ + auVar49._4_4_;
          fVar50 = fVar19 + fVar26 + fVar45;
          if (fVar18 < fVar50) {
            return;
          }
          auVar17._0_8_ =
               CONCAT44(-(uint)(auVar28._12_4_ < fVar19 + fVar26 + fVar45),
                        -(uint)(auVar28._12_4_ < fVar50));
          auVar23._0_12_ = auVar48._0_12_;
          auVar23._12_4_ = fVar50;
          auVar17._8_8_ = auVar17._0_8_;
          auVar28 = auVar28 ^ (auVar28 ^ auVar23) & auVar17;
        }
      }
    }
    fVar18 = *(float *)(param_1 + 0xdc);
    fVar50 = fVar9 - *(float *)(param_1 + 0xd0);
    fVar45 = fVar10 - *(float *)(param_1 + 0xd4);
    fVar27 = fVar11 - *(float *)(param_1 + 0xd8);
    fVar19 = fVar50 * fVar50 + fVar45 * fVar45 + fVar27 * fVar27;
    fVar33 = fVar50 * fVar50 + fVar45 * fVar45 + fVar27 * fVar27;
    uVar20 = CONCAT44(fVar33,fVar19);
    uVar46 = NEON_frsqrte(uVar20,4);
    fVar26 = (float)uVar46;
    fVar55 = (float)((ulong)uVar46 >> 0x20);
    uVar46 = NEON_frsqrts(uVar20,CONCAT44(fVar55 * fVar55,fVar26 * fVar26),4);
    fVar26 = fVar26 * (float)uVar46;
    fVar55 = fVar55 * (float)((ulong)uVar46 >> 0x20);
    iVar12 = -(uint)(fVar19 <= 0.0);
    iVar15 = -(uint)(fVar33 <= 0.0);
    uVar20 = NEON_frsqrts(uVar20,CONCAT44(fVar55 * fVar55,fVar26 * fVar26),4);
    fVar26 = (float)uVar20 * fVar26;
    fVar55 = (float)((ulong)uVar20 >> 0x20) * fVar55;
    fVar33 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                             CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                      CONCAT11((byte)((uint)fVar26 >> 8) &
                                               ~(byte)((uint)iVar12 >> 8),
                                               SUB41(fVar26,0) & ~(byte)iVar12)));
    fVar55 = (float)(CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                              CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                       CONCAT15((byte)((uint)fVar55 >> 8) &
                                                ~(byte)((uint)iVar15 >> 8),
                                                CONCAT14(SUB41(fVar55,0) & ~(byte)iVar15,fVar33))))
                    >> 0x20);
    fVar45 = fVar45 * fVar55;
    fVar19 = fVar50 * fVar33 * auVar28._0_4_;
    fVar26 = fVar45 * auVar28._4_4_;
    fVar24 = fVar27 * fVar33 * auVar28._8_4_;
    fVar35 = auVar28._12_4_;
    uVar20 = CONCAT44(fVar19 + fVar26 + fVar24,fVar19 + fVar26 + fVar24);
    uVar46 = NEON_frecpe(uVar20,4);
    uVar51 = NEON_frecps(uVar20,uVar46,4);
    fVar19 = (float)uVar46 * (float)uVar51;
    fVar26 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar51 >> 0x20);
    uVar20 = NEON_frecps(uVar20,CONCAT44(fVar26,fVar19),4);
    auVar31._0_12_ = auVar28._0_12_;
    auVar31._12_4_ = fVar14;
    fVar19 = -(fVar19 * (float)uVar20 * fVar35);
    fVar26 = -(fVar26 * (float)((ulong)uVar20 >> 0x20) * fVar35);
    *(long *)(param_6 + 2) = auVar31._8_8_;
    *(long *)param_6 = auVar28._0_8_;
    *(ulong *)(param_5 + 2) =
         CONCAT44(fVar14 + (fVar14 - fVar18) * fVar55 * fVar26,fVar11 + fVar27 * fVar33 * fVar19);
    *(ulong *)param_5 = CONCAT44(fVar10 + fVar45 * fVar26,fVar9 + fVar50 * fVar33 * fVar19);
    *param_7 = CONCAT17(auVar28[0xf],
                        CONCAT16(auVar28[0xe],CONCAT15(auVar28[0xd],CONCAT14(auVar28[0xc],fVar35))))
    ;
    fVar11 = *param_6;
    fVar18 = param_6[1];
    fVar19 = param_6[2];
    fVar9 = *(float *)(param_1 + 0x90);
    fVar10 = *(float *)(param_1 + 0x94);
    uVar20 = *(undefined8 *)(param_1 + 0x70);
    uVar46 = *(undefined8 *)(param_1 + 0x80);
    *(ulong *)(param_6 + 2) =
         CONCAT44(*(float *)(param_1 + 0x9c) * fVar19 +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar11 +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar18,
                  *(float *)(param_1 + 0x98) * fVar19 +
                  (float)*(undefined8 *)(param_1 + 0x78) * fVar11 +
                  (float)*(undefined8 *)(param_1 + 0x88) * fVar18);
    *(ulong *)param_6 =
         CONCAT44(fVar10 * fVar19 +
                  (float)((ulong)uVar20 >> 0x20) * fVar11 + (float)((ulong)uVar46 >> 0x20) * fVar18,
                  fVar9 * fVar19 + (float)uVar20 * fVar11 + (float)uVar46 * fVar18);
    uVar20 = *(undefined8 *)(param_1 + 0x70);
    uVar46 = *(undefined8 *)(param_1 + 0x80);
    fVar11 = *param_5;
    fVar18 = param_5[1];
    fVar19 = param_5[2];
    fVar9 = *(float *)(param_1 + 0x90);
    fVar10 = *(float *)(param_1 + 0x94);
    fVar14 = *(float *)(param_1 + 0xa0);
    fVar26 = *(float *)(param_1 + 0xa4);
    *(ulong *)(param_5 + 2) =
         CONCAT44(*(float *)(param_1 + 0xac) +
                  *(float *)(param_1 + 0x9c) * fVar19 +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar11 +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar18,
                  *(float *)(param_1 + 0xa8) +
                  *(float *)(param_1 + 0x98) * fVar19 +
                  (float)*(undefined8 *)(param_1 + 0x78) * fVar11 +
                  (float)*(undefined8 *)(param_1 + 0x88) * fVar18);
    *(ulong *)param_5 =
         CONCAT44(fVar26 + fVar10 * fVar19 +
                           (float)((ulong)uVar20 >> 0x20) * fVar11 +
                           (float)((ulong)uVar46 >> 0x20) * fVar18,
                  fVar14 + fVar9 * fVar19 + (float)uVar20 * fVar11 + (float)uVar46 * fVar18);
  }
  return;
}

