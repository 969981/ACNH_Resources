
void FUN_005d8550(long param_1,undefined8 param_2,uint param_3,long param_4,long *param_5,
                 undefined8 *param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  ushort *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [12];
  float fVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  float fVar66;
  undefined1 auVar63 [16];
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 auStack_250 [32];
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined8 local_50;
  float fStack_48;
  undefined4 uStack_44;
  
  lVar8 = *param_5;
  auVar61 = *(undefined1 (*) [16])(param_5 + 6);
  fVar17 = (float)*param_6;
  fVar19 = (float)((ulong)*param_6 >> 0x20);
  uVar15 = CONCAT44(fVar19 * fVar19 + 0.0001,fVar17 * fVar17 + 0.0001);
  uVar18 = NEON_frecpe(uVar15,4);
  uVar20 = NEON_frecps(uVar15,uVar18,4);
  fVar17 = (float)uVar18 * (float)uVar20;
  fVar19 = (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar20 >> 0x20);
  fVar36 = (float)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x20);
  uVar15 = NEON_frecps(uVar15,CONCAT44(fVar19,fVar17),4);
  fVar21 = (float)*(undefined8 *)(lVar8 + 0x20);
  fVar39 = (float)*(undefined8 *)(lVar8 + 0x28);
  local_50 = CONCAT44((float)((ulong)param_5[8] >> 0x20) +
                      auVar61._4_4_ * fVar39 +
                      (float)((ulong)param_5[2] >> 0x20) * fVar21 +
                      (float)((ulong)param_5[4] >> 0x20) * fVar36,
                      (float)param_5[8] +
                      auVar61._0_4_ * fVar39 +
                      (float)param_5[2] * fVar21 + (float)param_5[4] * fVar36);
  fVar14 = -((float)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x70) * fVar17 * (float)uVar15);
  fVar16 = -((float)((ulong)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x70) >> 0x20) *
            fVar19 * (float)((ulong)uVar15 >> 0x20));
  _fStack_48 = CONCAT44(*(undefined4 *)(lVar8 + 0x2c),
                        (float)param_5[9] +
                        auVar61._8_4_ * fVar39 +
                        (float)param_5[3] * fVar21 + (float)param_5[5] * fVar36);
  FUN_0053da70(auStack_250,&local_50);
  puVar7 = PTR_DAT_04bdc020;
  fVar21 = DAT_04102f3c;
  fVar19 = DAT_04102ed8;
  fVar17 = DAT_04102e58;
  uVar1 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  uVar1 = uVar1 & 0xfffffffc;
  if (0 < (int)uVar1) {
    lVar8 = 0;
    puVar9 = (ushort *)(param_4 + 0x26);
    do {
      lVar12 = (ulong)puVar9[-0x10] * 0x10;
      lVar13 = (ulong)puVar9[-8] * 0x10;
      uVar15 = *(undefined8 *)(lVar12 + param_1);
      lVar11 = (ulong)*puVar9 * 0x10;
      pfVar2 = (float *)(lVar13 + param_1);
      lVar10 = (ulong)puVar9[8] * 0x10;
      pfVar3 = (float *)(lVar11 + param_1);
      lVar8 = lVar8 + 4;
      puVar9 = puVar9 + 0x20;
      pfVar4 = (float *)(lVar10 + param_1);
      fVar37 = (float)uVar15;
      fVar30 = fVar37 - local_230;
      fVar23 = (float)((ulong)uVar15 >> 0x20);
      fVar31 = fVar23 - fStack_22c;
      fVar24 = (float)((undefined8 *)(lVar12 + param_1))[1];
      fVar32 = fVar24 - fStack_228;
      fVar33 = 0.0 - fStack_224;
      fVar50 = *pfVar2 - local_230;
      fVar51 = pfVar2[1] - fStack_22c;
      fVar52 = pfVar2[2] - fStack_228;
      fVar53 = 0.0 - fStack_224;
      fVar42 = *pfVar3 - local_230;
      fVar43 = pfVar3[1] - fStack_22c;
      fVar44 = pfVar3[2] - fStack_228;
      fVar45 = 0.0 - fStack_224;
      fVar46 = *pfVar4 - local_230;
      fVar47 = pfVar4[1] - fStack_22c;
      fVar48 = pfVar4[2] - fStack_228;
      fVar49 = 0.0 - fStack_224;
      auVar29._0_4_ = fVar30 * fVar30;
      auVar29._4_4_ = fVar31 * fVar31;
      auVar29._8_4_ = fVar32 * fVar32;
      auVar29._12_4_ = fVar33 * fVar33;
      auVar55._0_4_ = fVar50 * fVar50;
      auVar55._4_4_ = fVar51 * fVar51;
      auVar55._8_4_ = fVar52 * fVar52;
      auVar55._12_4_ = fVar53 * fVar53;
      auVar60._0_4_ = fVar42 * fVar42;
      auVar60._4_4_ = fVar43 * fVar43;
      auVar60._8_4_ = fVar44 * fVar44;
      auVar60._12_4_ = fVar45 * fVar45;
      fVar36 = fVar46 * fVar46;
      fVar39 = fVar47 * fVar47;
      uVar67 = (undefined1)((uint)fVar39 >> 8);
      uVar68 = (undefined1)((uint)fVar39 >> 0x10);
      uVar69 = (undefined1)((uint)fVar39 >> 0x18);
      fVar40 = fVar48 * fVar48;
      uVar70 = (undefined1)((uint)fVar40 >> 8);
      uVar71 = (undefined1)((uint)fVar40 >> 0x10);
      uVar72 = (undefined1)((uint)fVar40 >> 0x18);
      fVar41 = fVar49 * fVar49;
      uVar73 = (undefined1)((uint)fVar41 >> 8);
      uVar74 = (undefined1)((uint)fVar41 >> 0x10);
      uVar75 = (undefined1)((uint)fVar41 >> 0x18);
      auVar38 = NEON_ext(auVar29,auVar29,8,1);
      auVar56 = NEON_ext(auVar55,auVar55,8,1);
      auVar57 = NEON_ext(auVar60,auVar60,8,1);
      auVar61[4] = SUB41(fVar39,0);
      auVar61._0_4_ = fVar36;
      auVar61[5] = uVar67;
      auVar61[6] = uVar68;
      auVar61[7] = uVar69;
      auVar61[8] = SUB41(fVar40,0);
      auVar61[9] = uVar70;
      auVar61[10] = uVar71;
      auVar61[0xb] = uVar72;
      auVar61[0xc] = SUB41(fVar41,0);
      auVar61[0xd] = uVar73;
      auVar61[0xe] = uVar74;
      auVar61[0xf] = uVar75;
      auVar26[4] = SUB41(fVar39,0);
      auVar26._0_4_ = fVar36;
      auVar26[5] = uVar67;
      auVar26[6] = uVar68;
      auVar26[7] = uVar69;
      auVar26[8] = SUB41(fVar40,0);
      auVar26[9] = uVar70;
      auVar26[10] = uVar71;
      auVar26[0xb] = uVar72;
      auVar26[0xc] = SUB41(fVar41,0);
      auVar26[0xd] = uVar73;
      auVar26[0xe] = uVar74;
      auVar26[0xf] = uVar75;
      auVar61 = NEON_ext(auVar61,auVar26,8,1);
      auVar38._0_4_ = *(float *)puVar7 + auVar38._0_4_ + auVar29._0_4_ + auVar29._4_4_;
      auVar38._4_4_ = *(float *)(puVar7 + 4) + auVar56._0_4_ + auVar55._0_4_ + auVar55._4_4_;
      auVar38._8_4_ = *(float *)(puVar7 + 8) + auVar57._0_4_ + auVar60._0_4_ + auVar60._4_4_;
      auVar38._12_4_ = *(float *)(puVar7 + 0xc) + auVar61._0_4_ + fVar36 + fVar39;
      auVar61 = NEON_frsqrte(auVar38,4);
      iVar34 = -(uint)(auVar38._0_4_ <= 0.0);
      iVar35 = -(uint)(auVar38._4_4_ <= 0.0);
      iVar5 = -(uint)(auVar38._8_4_ <= 0.0);
      iVar6 = -(uint)(auVar38._12_4_ <= 0.0);
      fVar36 = auVar61._0_4_;
      auVar56._0_4_ = fVar36 * fVar36;
      fVar39 = auVar61._4_4_;
      auVar56._4_4_ = fVar39 * fVar39;
      fVar40 = auVar61._8_4_;
      auVar56._8_4_ = fVar40 * fVar40;
      fVar41 = auVar61._12_4_;
      auVar56._12_4_ = fVar41 * fVar41;
      auVar61 = NEON_frsqrts(auVar38,auVar56,4);
      fVar36 = fVar36 * auVar61._0_4_;
      fVar39 = fVar39 * auVar61._4_4_;
      fVar40 = fVar40 * auVar61._8_4_;
      fVar41 = fVar41 * auVar61._12_4_;
      auVar57._0_4_ = fVar36 * fVar36;
      auVar57._4_4_ = fVar39 * fVar39;
      auVar57._8_4_ = fVar40 * fVar40;
      auVar57._12_4_ = fVar41 * fVar41;
      auVar61 = NEON_frsqrts(auVar38,auVar57,4);
      fVar36 = auVar61._0_4_ * fVar36;
      fVar39 = auVar61._4_4_ * fVar39;
      fVar40 = auVar61._8_4_ * fVar40;
      fVar41 = auVar61._12_4_ * fVar41;
      fVar58 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                               CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar36 >> 8) &
                                                  ~(byte)((uint)iVar34 >> 8),
                                                  SUB41(fVar36,0) & ~(byte)iVar34)));
      auVar59._0_8_ =
           CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                    CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                             CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                      CONCAT14(SUB41(fVar39,0) & ~(byte)iVar35,fVar58))));
      auVar59[8] = SUB41(fVar40,0) & ~(byte)iVar5;
      auVar59[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar5 >> 8);
      auVar59[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
      auVar59[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
      auVar62[0xc] = SUB41(fVar41,0) & ~(byte)iVar6;
      auVar62._0_12_ = auVar59;
      auVar62[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar6 >> 8);
      auVar62[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
      auVar62[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
      fVar30 = fVar30 * fVar58;
      fVar31 = fVar31 * fVar58;
      fVar32 = fVar32 * fVar58;
      fVar64 = (float)((ulong)auVar59._0_8_ >> 0x20);
      fVar50 = fVar50 * fVar64;
      fVar51 = fVar51 * fVar64;
      fVar52 = fVar52 * fVar64;
      fVar65 = auVar59._8_4_;
      fVar66 = auVar62._12_4_;
      fVar42 = fVar42 * fVar65;
      fVar43 = fVar43 * fVar65;
      fVar44 = fVar44 * fVar65;
      fVar36 = auVar38._0_4_ * fVar58 - fStack_224;
      fVar39 = auVar38._4_4_ * fVar64 - fStack_224;
      fVar40 = auVar38._8_4_ * fVar65 - fStack_224;
      fVar54 = auVar38._12_4_ * fVar66 - fStack_224;
      fVar46 = fVar46 * fVar66;
      fVar47 = fVar47 * fVar66;
      fVar48 = fVar48 * fVar66;
      fVar41 = fVar14 * fVar36 * fVar36;
      fVar36 = fVar16 * fVar39 * fVar39;
      fVar39 = fVar14 * fVar40 * fVar40;
      fVar40 = fVar16 * fVar54 * fVar54;
      if (fVar41 <= fVar19) {
        fVar41 = fVar19;
      }
      auVar63._0_4_ = fVar30 * ((local_230 + fVar30 * fStack_224) - fVar37);
      auVar63._4_4_ = fVar31 * ((fStack_22c + fVar31 * fStack_224) - fVar23);
      auVar63._8_4_ = fVar32 * ((fStack_228 + fVar32 * fStack_224) - fVar24);
      auVar63._12_4_ = fVar33 * fVar58 * ((fStack_224 + fVar33 * fVar58 * fStack_224) - 0.0);
      if (fVar36 <= fVar19) {
        fVar36 = fVar19;
      }
      auVar28._0_4_ = fVar50 * ((local_230 + fVar50 * fStack_224) - *pfVar2);
      auVar28._4_4_ = fVar51 * ((fStack_22c + fVar51 * fStack_224) - pfVar2[1]);
      auVar28._8_4_ = fVar52 * ((fStack_228 + fVar52 * fStack_224) - pfVar2[2]);
      auVar28._12_4_ = fVar53 * fVar64 * ((fStack_224 + fVar53 * fVar64 * fStack_224) - 0.0);
      auVar22._0_4_ = fVar42 * ((local_230 + fVar42 * fStack_224) - *pfVar3);
      auVar22._4_4_ = fVar43 * ((fStack_22c + fVar43 * fStack_224) - pfVar3[1]);
      auVar22._8_4_ = fVar44 * ((fStack_228 + fVar44 * fStack_224) - pfVar3[2]);
      auVar22._12_4_ = fVar45 * fVar65 * ((fStack_224 + fVar45 * fVar65 * fStack_224) - 0.0);
      auVar25._0_4_ = fVar46 * ((local_230 + fVar46 * fStack_224) - *pfVar4);
      auVar25._4_4_ = fVar47 * ((fStack_22c + fVar47 * fStack_224) - pfVar4[1]);
      auVar25._8_4_ = fVar48 * ((fStack_228 + fVar48 * fStack_224) - pfVar4[2]);
      auVar25._12_4_ = fVar49 * fVar66 * ((fStack_224 + fVar49 * fVar66 * fStack_224) - 0.0);
      auVar38 = NEON_ext(auVar63,auVar63,8,1);
      auVar29 = NEON_ext(auVar28,auVar28,8,1);
      fVar41 = (float)(int)(fVar41 * fVar21 + fVar17);
      auVar61 = NEON_ext(auVar22,auVar22,8,1);
      auVar26 = NEON_ext(auVar25,auVar25,8,1);
      if (fVar39 <= fVar19) {
        fVar39 = fVar19;
      }
      fVar36 = (float)(int)(fVar36 * fVar21 + fVar17);
      uVar18 = ((undefined8 *)(param_8 + lVar12))[1];
      uVar15 = *(undefined8 *)(param_8 + lVar12);
      if (fVar40 <= fVar19) {
        fVar40 = fVar19;
      }
      fVar39 = (float)(int)(fVar39 * fVar21 + fVar17);
      ((undefined8 *)(param_8 + lVar12))[1] =
           CONCAT44((float)((ulong)uVar18 >> 0x20) +
                    (auVar38._0_4_ + auVar63._0_4_ + auVar63._4_4_) * fVar41,
                    (float)uVar18 + fVar32 * fVar41);
      *(undefined8 *)(param_8 + lVar12) =
           CONCAT44((float)((ulong)uVar15 >> 0x20) + fVar31 * fVar41,(float)uVar15 + fVar30 * fVar41
                   );
      uVar18 = ((undefined8 *)(param_8 + lVar13))[1];
      uVar15 = *(undefined8 *)(param_8 + lVar13);
      pfVar2 = (float *)(param_8 + lVar13);
      pfVar2[2] = (float)uVar18 + fVar52 * fVar36;
      pfVar2[3] = (float)((ulong)uVar18 >> 0x20) +
                  (auVar29._0_4_ + auVar28._0_4_ + auVar28._4_4_) * fVar36;
      *pfVar2 = (float)uVar15 + fVar50 * fVar36;
      pfVar2[1] = (float)((ulong)uVar15 >> 0x20) + fVar51 * fVar36;
      uVar18 = ((undefined8 *)(param_8 + lVar11))[1];
      uVar15 = *(undefined8 *)(param_8 + lVar11);
      fVar40 = (float)(int)(fVar40 * fVar21 + fVar17);
      pfVar2 = (float *)(param_8 + lVar11);
      pfVar2[2] = (float)uVar18 + fVar44 * fVar39;
      pfVar2[3] = (float)((ulong)uVar18 >> 0x20) +
                  (auVar61._0_4_ + auVar22._0_4_ + auVar22._4_4_) * fVar39;
      *pfVar2 = (float)uVar15 + fVar42 * fVar39;
      pfVar2[1] = (float)((ulong)uVar15 >> 0x20) + fVar43 * fVar39;
      pfVar2 = (float *)(param_8 + lVar10);
      fVar36 = *pfVar2;
      fVar39 = pfVar2[1];
      pfVar3 = (float *)(param_8 + lVar10);
      pfVar3[2] = pfVar2[2] + fVar48 * fVar40;
      pfVar3[3] = pfVar2[3] + (auVar26._0_4_ + auVar25._0_4_ + auVar25._4_4_) * fVar40;
      *pfVar3 = fVar36 + fVar46 * fVar40;
      pfVar3[1] = fVar39 + fVar47 * fVar40;
    } while (lVar8 < (int)uVar1);
  }
  fVar21 = DAT_04102f3c;
  fVar19 = DAT_04102ed8;
  fVar17 = DAT_04102e58;
  if (0 < (int)param_3 % 4) {
    lVar8 = (long)(int)uVar1;
    puVar9 = (ushort *)(param_4 + (long)(int)uVar1 * 0x10 + 6);
    do {
      lVar10 = (ulong)*puVar9 * 0x10;
      pfVar2 = (float *)(param_1 + lVar10);
      lVar8 = lVar8 + 1;
      fVar36 = *pfVar2 - local_230;
      fVar39 = pfVar2[1] - fStack_22c;
      fVar40 = pfVar2[2] - fStack_228;
      fVar16 = fVar36 * fVar36 + fVar39 * fVar39 + fVar40 * fVar40;
      fVar41 = fVar36 * fVar36 + fVar39 * fVar39 + fVar40 * fVar40;
      uVar15 = CONCAT44(fVar41,fVar16);
      uVar18 = NEON_frsqrte(uVar15,4);
      fVar37 = (float)uVar18;
      fVar46 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = NEON_frsqrts(uVar15,CONCAT44(fVar46 * fVar46,fVar37 * fVar37),4);
      fVar37 = fVar37 * (float)uVar18;
      fVar46 = fVar46 * (float)((ulong)uVar18 >> 0x20);
      uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar46 * fVar46,fVar37 * fVar37),4);
      iVar34 = -(uint)(fVar16 <= 0.0);
      iVar35 = -(uint)(fVar41 <= 0.0);
      fVar37 = (float)uVar15 * fVar37;
      fVar46 = (float)((ulong)uVar15 >> 0x20) * fVar46;
      fVar37 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                               CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar37 >> 8) &
                                                  ~(byte)((uint)iVar34 >> 8),
                                                  SUB41(fVar37,0) & ~(byte)iVar34)));
      fVar16 = fVar16 * fVar37 - fStack_224;
      fVar16 = fVar16 * fVar16 * fVar14;
      fVar36 = fVar36 * fVar37;
      fVar41 = (float)(CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                                CONCAT16((byte)((uint)fVar46 >> 0x10) &
                                         ~(byte)((uint)iVar35 >> 0x10),
                                         CONCAT15((byte)((uint)fVar46 >> 8) &
                                                  ~(byte)((uint)iVar35 >> 8),
                                                  CONCAT14(SUB41(fVar46,0) & ~(byte)iVar35,fVar37)))
                               ) >> 0x20);
      fVar39 = fVar39 * fVar41;
      fVar40 = fVar40 * fVar37;
      fVar41 = (0.0 - fStack_224) * fVar41;
      if (fVar16 <= fVar19) {
        fVar16 = fVar19;
      }
      auVar27._0_4_ = fVar36 * ((local_230 + fStack_224 * fVar36) - *pfVar2);
      auVar27._4_4_ = fVar39 * ((fStack_22c + fStack_224 * fVar39) - pfVar2[1]);
      auVar27._8_4_ = fVar40 * ((fStack_228 + fStack_224 * fVar40) - pfVar2[2]);
      auVar27._12_4_ = fVar41 * ((fStack_224 + fStack_224 * fVar41) - 0.0);
      auVar61 = NEON_ext(auVar27,auVar27,8,1);
      fVar37 = (float)(int)(fVar16 * fVar21 + fVar17);
      pfVar2 = (float *)(param_8 + lVar10);
      fVar16 = *pfVar2;
      fVar41 = pfVar2[1];
      pfVar3 = (float *)(param_8 + lVar10);
      pfVar3[2] = pfVar2[2] + fVar40 * fVar37;
      pfVar3[3] = pfVar2[3] + (auVar27._0_4_ + auVar27._4_4_ + auVar61._0_4_) * fVar37;
      *pfVar3 = fVar16 + fVar36 * fVar37;
      pfVar3[1] = fVar41 + fVar39 * fVar37;
      puVar9 = puVar9 + 8;
    } while (lVar8 < (int)param_3);
  }
  return;
}

