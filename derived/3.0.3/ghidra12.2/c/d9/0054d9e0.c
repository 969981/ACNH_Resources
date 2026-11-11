
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054d9e0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar27 [12];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar31;
  undefined8 uVar26;
  float fVar32;
  undefined1 auVar28 [16];
  float fVar33;
  undefined1 auVar29 [16];
  float fVar34;
  undefined1 auVar30 [16];
  int iVar35;
  int iVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  float fVar53;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  lVar1 = param_1 + 0x60;
  FUN_00482150(local_70,lVar1,param_2);
  local_80._0_4_ = local_70._0_4_;
  local_80._4_4_ = local_70._4_4_;
  uStack_78._0_4_ = local_70._8_4_;
  uStack_78._4_4_ = local_70._12_4_;
  fVar21 = (float)local_80 * (float)local_80 + local_80._4_4_ * local_80._4_4_ +
           (float)uStack_78 * (float)uStack_78;
  fVar31 = (float)local_80 * (float)local_80 + local_80._4_4_ * local_80._4_4_ +
           (float)uStack_78 * (float)uStack_78;
  uVar26 = CONCAT44(fVar31,fVar21);
  uVar44 = NEON_frsqrte(uVar26,4);
  fVar22 = (float)uVar44;
  fVar32 = (float)((ulong)uVar44 >> 0x20);
  iVar35 = -(uint)(fVar21 <= 0.0);
  iVar38 = -(uint)(fVar31 <= 0.0);
  uVar26 = NEON_frsqrts(uVar26,CONCAT44(fVar32 * fVar32,fVar22 * fVar22),4);
  fVar22 = fVar22 * (float)uVar26;
  fVar32 = fVar32 * (float)((ulong)uVar26 >> 0x20);
  fVar21 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                           CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                    CONCAT11((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                             SUB41(fVar22,0) & ~(byte)iVar35)));
  fVar31 = (float)local_80 * fVar21;
  fVar22 = (float)(CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                            CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                     CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar38 >> 8)
                                              ,CONCAT14(SUB41(fVar32,0) & ~(byte)iVar38,fVar21))))
                  >> 0x20);
  fVar32 = local_80._4_4_ * fVar22;
  auVar45._0_8_ = CONCAT44(fVar32,fVar31);
  auVar45._8_4_ = (float)uStack_78 * fVar21;
  auVar45._12_4_ = uStack_78._4_4_ * fVar22;
  uStack_78 = auVar45._8_8_;
  local_80 = auVar45._0_8_;
  auVar16 = *(undefined1 (*) [16])(param_1 + 0xa0);
  auVar28 = NEON_frecpe(auVar16,4);
  auVar36 = NEON_frecps(auVar16,auVar28,4);
  auVar52._0_4_ = auVar28._0_4_ * auVar36._0_4_;
  auVar52._4_4_ = auVar28._4_4_ * auVar36._4_4_;
  auVar52._8_4_ = auVar28._8_4_ * auVar36._8_4_;
  auVar52._12_4_ = auVar28._12_4_ * auVar36._12_4_;
  auVar16 = NEON_frecps(auVar16,auVar52,4);
  fVar22 = auVar52._12_4_ * auVar16._12_4_;
  uVar26 = CONCAT44(ABS(fVar32),ABS(fVar31));
  fVar21 = ABS(auVar45._8_4_);
  uVar26 = NEON_fmaxp(uVar26,uVar26,4);
  uVar26 = NEON_fmax(CONCAT44(fVar21,fVar21),uVar26,4);
  cVar4 = (&DAT_0413f6c0)
          [-(uint)((float)((ulong)uVar26 >> 0x20) <= ABS(fVar32)) & 2 |
           -(uint)((float)uVar26 <= ABS(fVar31)) & 1 | -(uint)((float)uVar26 <= fVar21) & 4];
  iVar35 = cVar4 + 3;
  if (0.0 <= *(float *)(local_70 + (long)cVar4 * 4 + -0x10)) {
    iVar35 = (int)cVar4;
  }
  iVar35 = *(int *)(&DAT_04145794 + (long)iVar35 * 4);
  fVar21 = (float)FUN_00437310();
  auVar16._8_8_ = auVar45._8_8_;
  auVar16._0_8_ = auVar45._0_8_;
  auVar27 = auVar16._0_12_;
  if (fVar21 != 0.0) {
    fVar21 = 1.0 / fVar21;
    auVar27._0_4_ = fVar31 * fVar21;
    auVar27._4_4_ = fVar32 * fVar21;
    auVar27._8_4_ = auVar45._8_4_ * fVar21;
  }
  fVar23 = *(float *)(param_1 + 0xa0) * (auVar27._0_4_ + (float)_DAT_041029f0) * 0.5;
  fVar21 = *(float *)(param_1 + 0xa4) *
           (auVar27._4_4_ + (float)((ulong)_DAT_041029f0 >> 0x20)) * 0.5;
  fVar33 = *(float *)(param_1 + 0xa8) * (auVar27._8_4_ + (float)_UNK_041029f8) * 0.5;
  uVar14 = (uint)(fVar23 + 196608.0) >> 6 & 0xffff;
  uVar13 = (uint)(fVar21 + 196608.0) >> 6 & 0xffff;
  uVar6 = (uint)(fVar33 + 196608.0) >> 6 & 0xffff;
  iVar38 = -1;
  fVar23 = fVar23 - (float)uVar14;
  fVar21 = fVar21 - (float)uVar13;
  fVar33 = fVar33 - (float)uVar6;
  if (cVar4 == '\x02') {
LAB_0054dba8:
    fVar33 = fVar23;
    fVar53 = -1.0;
    if (0.5 <= fVar23) {
      fVar33 = 1.0 - fVar23;
      fVar53 = 1.0;
    }
    iVar38 = -1;
    if (0.5 <= fVar23) {
      iVar38 = 1;
    }
    if (fVar21 < 0.5) goto LAB_0054dc00;
    fVar21 = 1.0 - fVar21;
    iVar12 = 1;
  }
  else {
    if (cVar4 == '\x01') {
      uVar13 = uVar6;
      fVar21 = fVar33;
      goto LAB_0054dba8;
    }
    if (cVar4 == '\0') {
      uVar14 = uVar6;
      fVar23 = fVar33;
      goto LAB_0054dba8;
    }
    fVar33 = -1.0;
    uVar13 = 0;
    uVar14 = 0;
    fVar53 = -1.0;
    fVar21 = -1.0;
LAB_0054dc00:
    fVar53 = -fVar53;
    iVar12 = -1;
  }
  lVar11 = *(long *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + (long)iVar35 * 4 + 0x40);
  iVar5 = (uVar14 + 1) * (uint)*(ushort *)(param_1 + 0x1e);
  iVar2 = uVar13 + 1 + iVar3;
  fVar23 = (float)NEON_ucvtf((uint)*(byte *)(lVar11 + (iVar5 + iVar2)));
  fVar23 = fVar22 * fVar23;
  fVar24 = (float)NEON_ucvtf((uint)*(byte *)(lVar11 + (int)(uVar13 + 1 + iVar12 + iVar3 + iVar5)));
  fVar24 = fVar22 * fVar24;
  fVar25 = (float)NEON_ucvtf((uint)*(byte *)(lVar11 + (int)(iVar2 + (uVar14 + 1 + iVar38) *
                                                                    (uint)*(ushort *)
                                                                           (param_1 + 0x1e))));
  fVar22 = fVar22 * fVar25;
  fVar21 = ((fVar21 + fVar21) * fVar23 + (1.0 - (fVar21 + fVar21)) * fVar24 +
           (fVar33 + fVar33) * fVar23 + (1.0 - (fVar33 + fVar33)) * fVar22) * 0.5;
  auVar28._0_8_ = CONCAT44(fVar32 * fVar21,fVar31 * fVar21);
  auVar28._8_4_ = auVar45._8_4_ * fVar21;
  auVar28._12_4_ = auVar45._12_4_ * fVar21;
  param_3[1] = auVar28._8_8_;
  *param_3 = auVar28._0_8_;
  FUN_00482180(param_3,lVar1,param_3);
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x1c));
  fVar31 = 2.0 / fVar21;
  auVar36._0_4_ = 1.0 / fVar21 + fVar31 * (float)uVar14 + -1.0;
  fVar21 = 1.0 / fVar21 + fVar31 * (float)uVar13 + -1.0;
  switch(iVar35) {
  case 0:
    uVar44 = NEON_fmov(0x3f800000,4);
    uVar26 = CONCAT44(fVar21,(int)uVar44);
    auVar7._8_4_ = auVar36._0_4_;
    auVar7._0_8_ = uVar26;
    auVar8._8_4_ = fVar31 * (float)iVar38 + auVar36._0_4_;
    auVar8._0_8_ = uVar26;
    auVar9._4_4_ = fVar31 * (float)iVar12 + fVar21;
    auVar9._0_4_ = (int)uVar44;
    auVar9._8_4_ = auVar36._0_4_;
    break;
  case 1:
    uVar26 = NEON_fmov(0xbf800000,4);
    auVar17._0_8_ = CONCAT44(fVar21,(int)uVar26);
    auVar29._8_4_ = auVar36._0_4_;
    auVar29._0_8_ = auVar17._0_8_;
    auVar29._12_4_ = 0;
    auVar17._8_4_ = fVar31 * (float)iVar38 + auVar36._0_4_;
    auVar17._12_4_ = 0;
    auVar37._4_4_ = fVar31 * (float)iVar12 + fVar21;
    auVar37._0_4_ = (int)uVar26;
    auVar37._8_4_ = auVar36._0_4_;
    auVar37._12_4_ = 0;
    goto LAB_0054df04;
  case 2:
    uVar26 = NEON_fmov(0x3f800000,4);
    uVar10 = (undefined4)((ulong)uVar26 >> 0x20);
    uVar26 = CONCAT44(uVar10,auVar36._0_4_);
    auVar7._8_4_ = fVar21;
    auVar7._0_8_ = uVar26;
    auVar8._4_4_ = uVar10;
    auVar8._0_4_ = fVar31 * (float)iVar38 + auVar36._0_4_;
    auVar8._8_4_ = fVar21;
    auVar9._8_4_ = fVar31 * (float)iVar12 + fVar21;
    auVar9._0_8_ = uVar26;
    break;
  case 3:
    uVar26 = NEON_fmov(0xbf800000,4);
    uVar10 = (undefined4)((ulong)uVar26 >> 0x20);
    uVar26 = CONCAT44(uVar10,auVar36._0_4_);
    auVar29._8_4_ = fVar21;
    auVar29._0_8_ = uVar26;
    auVar29._12_4_ = 0;
    auVar17._4_4_ = uVar10;
    auVar17._0_4_ = fVar31 * (float)iVar38 + auVar36._0_4_;
    auVar17._8_4_ = fVar21;
    auVar17._12_4_ = 0;
    auVar37._8_4_ = fVar31 * (float)iVar12 + fVar21;
    auVar37._0_8_ = uVar26;
    auVar37._12_4_ = 0;
    goto LAB_0054df04;
  case 4:
    auVar15._0_4_ = fVar31 * (float)iVar38 + auVar36._0_4_;
    auVar15._4_4_ = fVar21;
    auVar15._8_4_ = 0x3f800000;
    auVar29._4_4_ = fVar21;
    auVar29._0_4_ = auVar36._0_4_;
    auVar37._4_4_ = fVar31 * (float)iVar12 + fVar21;
    auVar37._0_4_ = auVar36._0_4_;
    auVar29._8_8_ = DAT_041015a8;
    auVar37._8_8_ = DAT_041015a8;
    goto LAB_0054df00;
  default:
    auVar15._0_4_ = fVar31 * (float)iVar38 + auVar36._0_4_;
    auVar15._4_4_ = fVar21;
    auVar15._8_4_ = 0xbf800000;
    auVar29._4_4_ = fVar21;
    auVar29._0_4_ = auVar36._0_4_;
    auVar36._4_4_ = fVar31 * (float)iVar12 + fVar21;
    fVar53 = -fVar53;
    auVar29._8_8_ = DAT_04101610;
    auVar36._8_8_ = DAT_04101610;
    auVar37 = auVar36;
LAB_0054df00:
    auVar17._12_4_ = 0;
    auVar17._0_12_ = auVar15;
    goto LAB_0054df04;
  }
  auVar37._12_4_ = 0;
  auVar37._0_12_ = auVar9;
  auVar29._12_4_ = 0;
  auVar29._0_12_ = auVar7;
  auVar17._12_4_ = 0;
  auVar17._0_12_ = auVar8;
  fVar53 = -fVar53;
LAB_0054df04:
  fVar33 = auVar29._0_4_;
  fVar25 = auVar29._4_4_;
  fVar34 = auVar29._8_4_;
  fVar21 = fVar33 * fVar33 + fVar25 * fVar25 + fVar34 * fVar34;
  fVar32 = fVar33 * fVar33 + fVar25 * fVar25 + fVar34 * fVar34;
  uVar26 = CONCAT44(fVar32,fVar21);
  uVar44 = NEON_frsqrte(uVar26,4);
  fVar31 = (float)uVar44;
  fVar46 = (float)((ulong)uVar44 >> 0x20);
  iVar35 = -(uint)(fVar21 <= 0.0);
  iVar38 = -(uint)(fVar32 <= 0.0);
  uVar26 = NEON_frsqrts(uVar26,CONCAT44(fVar46 * fVar46,fVar31 * fVar31),4);
  fVar31 = fVar31 * (float)uVar26;
  fVar46 = fVar46 * (float)((ulong)uVar26 >> 0x20);
  fVar41 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                           CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                    CONCAT11((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                             SUB41(fVar31,0) & ~(byte)iVar35)));
  fVar47 = (float)(CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                            CONCAT16((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                     CONCAT15((byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar38 >> 8)
                                              ,CONCAT14(SUB41(fVar46,0) & ~(byte)iVar38,fVar41))))
                  >> 0x20);
  fVar46 = auVar37._0_4_;
  fVar39 = auVar37._4_4_;
  fVar40 = auVar37._8_4_;
  fVar21 = fVar40 * fVar40 + fVar46 * fVar46 + fVar39 * fVar39;
  fVar32 = fVar40 * fVar40 + fVar46 * fVar46 + fVar39 * fVar39;
  uVar26 = CONCAT44(fVar32,fVar21);
  uVar44 = NEON_frsqrte(uVar26,4);
  fVar31 = (float)uVar44;
  fVar48 = (float)((ulong)uVar44 >> 0x20);
  iVar35 = -(uint)(fVar21 <= 0.0);
  iVar38 = -(uint)(fVar32 <= 0.0);
  uVar26 = NEON_frsqrts(uVar26,CONCAT44(fVar48 * fVar48,fVar31 * fVar31),4);
  fVar31 = fVar31 * (float)uVar26;
  fVar48 = fVar48 * (float)((ulong)uVar26 >> 0x20);
  fVar42 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                           CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                    CONCAT11((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                             SUB41(fVar31,0) & ~(byte)iVar35)));
  fVar49 = (float)(CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                            CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                     CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar38 >> 8)
                                              ,CONCAT14(SUB41(fVar48,0) & ~(byte)iVar38,fVar42))))
                  >> 0x20);
  fVar21 = auVar17._0_4_;
  fVar31 = auVar17._4_4_;
  fVar32 = auVar17._8_4_;
  fVar48 = fVar32 * fVar32 + fVar21 * fVar21 + fVar31 * fVar31;
  fVar50 = fVar32 * fVar32 + fVar21 * fVar21 + fVar31 * fVar31;
  uVar26 = CONCAT44(fVar50,fVar48);
  uVar44 = NEON_frsqrte(uVar26,4);
  fVar43 = (float)uVar44;
  fVar51 = (float)((ulong)uVar44 >> 0x20);
  iVar35 = -(uint)(fVar48 <= 0.0);
  iVar38 = -(uint)(fVar50 <= 0.0);
  uVar26 = NEON_frsqrts(uVar26,CONCAT44(fVar51 * fVar51,fVar43 * fVar43),4);
  fVar43 = fVar43 * (float)uVar26;
  fVar51 = fVar51 * (float)((ulong)uVar26 >> 0x20);
  fVar48 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                           CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                    CONCAT11((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                             SUB41(fVar43,0) & ~(byte)iVar35)));
  fVar43 = (float)(CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                            CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                     CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar38 >> 8)
                                              ,CONCAT14(SUB41(fVar51,0) & ~(byte)iVar38,fVar48))))
                  >> 0x20);
  fVar33 = fVar33 * fVar41 * fVar23;
  fVar25 = fVar25 * fVar47 * fVar23;
  fVar34 = fVar34 * fVar41 * fVar23;
  fVar23 = auVar29._12_4_ * fVar47 * fVar23;
  auVar18._0_4_ = fVar21 * fVar48 * fVar22 - fVar33;
  auVar18._4_4_ = fVar31 * fVar43 * fVar22 - fVar25;
  auVar18._8_4_ = fVar32 * fVar48 * fVar22 - fVar34;
  auVar18._12_4_ = auVar17._12_4_ * fVar43 * fVar22 - fVar23;
  auVar30._0_4_ = fVar46 * fVar42 * fVar24 - fVar33;
  auVar30._4_4_ = fVar39 * fVar49 * fVar24 - fVar25;
  auVar30._8_4_ = fVar40 * fVar42 * fVar24 - fVar34;
  auVar30._12_4_ = auVar37._12_4_ * fVar49 * fVar24 - fVar23;
  auVar16 = NEON_ext(auVar18,auVar18,4,1);
  auVar28 = NEON_ext(auVar30,auVar30,4,1);
  auVar52 = NEON_ext(auVar16,auVar16,8,1);
  auVar36 = NEON_ext(auVar28,auVar28,8,1);
  uVar26 = NEON_rev64(auVar52._0_8_,4);
  uVar44 = NEON_rev64(auVar36._0_8_,4);
  auVar19._0_4_ = auVar18._0_4_ * auVar28._0_4_ - auVar30._0_4_ * auVar16._0_4_;
  auVar19._4_4_ = auVar18._4_4_ * auVar28._4_4_ - auVar30._4_4_ * auVar16._4_4_;
  auVar19._8_4_ = auVar18._8_4_ * (float)uVar44 - auVar30._8_4_ * (float)uVar26;
  auVar19._12_4_ =
       auVar18._12_4_ * (float)((ulong)uVar44 >> 0x20) -
       auVar30._12_4_ * (float)((ulong)uVar26 >> 0x20);
  auVar16 = NEON_ext(auVar19,auVar19,4,1);
  fVar21 = auVar16._0_4_ * fVar53;
  fVar22 = auVar16._4_4_ * fVar53;
  fVar31 = auVar19._0_4_ * fVar53;
  fVar32 = fVar21 * fVar21 + fVar22 * fVar22 + fVar31 * fVar31;
  fVar33 = fVar21 * fVar21 + fVar22 * fVar22 + fVar31 * fVar31;
  uVar26 = CONCAT44(fVar33,fVar32);
  uVar44 = NEON_frsqrte(uVar26,4);
  fVar23 = (float)uVar44;
  fVar24 = (float)((ulong)uVar44 >> 0x20);
  iVar35 = -(uint)(fVar32 <= 0.0);
  iVar38 = -(uint)(fVar33 <= 0.0);
  uVar26 = NEON_frsqrts(uVar26,CONCAT44(fVar24 * fVar24,fVar23 * fVar23),4);
  fVar23 = fVar23 * (float)uVar26;
  fVar24 = fVar24 * (float)((ulong)uVar26 >> 0x20);
  fVar32 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                           CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                    CONCAT11((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                             SUB41(fVar23,0) & ~(byte)iVar35)));
  fVar23 = (float)(CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                            CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                     CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar38 >> 8)
                                              ,CONCAT14(SUB41(fVar24,0) & ~(byte)iVar38,fVar32))))
                  >> 0x20);
  auVar20._0_8_ = CONCAT44(fVar22 * fVar23,fVar21 * fVar32);
  auVar20._8_4_ = fVar31 * fVar32;
  auVar20._12_4_ = auVar19._4_4_ * fVar53 * fVar23;
  uStack_88 = auVar20._8_8_;
  local_90 = auVar20._0_8_;
  FUN_00482100(param_4,lVar1,&local_90);
  return;
}

