
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00669dc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  char *pcVar3;
  short *psVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  float *pfVar8;
  undefined8 *puVar9;
  bool bVar10;
  ulong uVar11;
  char cVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  double dVar24;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  int iVar36;
  float fVar41;
  int iVar42;
  double dVar37;
  float fVar40;
  float fVar43;
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar59;
  float local_c0;
  float fStack_bc;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1ab) = 0;
  piVar2 = (int *)(param_1 + 0x9bd);
  *piVar2 = 8;
  fVar23 = (float)DAT_0413f500;
  fVar26 = (float)((ulong)DAT_0413f500 >> 0x20);
  auVar31._0_8_ = CONCAT44(-fVar26,-fVar23);
  fVar28 = (float)_DAT_0413f508;
  auVar31._8_4_ = -fVar28;
  fVar29 = (float)((ulong)_DAT_0413f508 >> 0x20);
  auVar31._12_4_ = -fVar29;
  uStack_88 = _DAT_0413f508;
  local_90 = DAT_0413f500;
  uStack_80 = auVar31._0_8_;
  uStack_78 = auVar31._8_8_;
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1[1],&local_90);
  uVar50 = DAT_0413f410;
  fVar34 = (float)uStack_80 - (float)local_90;
  fVar25 = (float)((ulong)uStack_80 >> 0x20);
  fVar40 = fVar25 - local_90._4_4_;
  fVar43 = (float)uStack_78 - (float)uStack_88;
  fVar22 = (float)uStack_80 + (float)local_90;
  fVar25 = fVar25 + local_90._4_4_;
  fVar27 = (float)uStack_78 + (float)uStack_88;
  auVar38._8_8_ = _UNK_0413f418;
  auVar38._0_8_ = DAT_0413f410;
  auVar32 = NEON_ext(auVar38,auVar38,8,1);
  auVar39 = NEON_ext(auVar32,auVar38,8,1);
  local_b0 = fVar23;
  fStack_ac = fVar26;
  fStack_a8 = fVar28;
  fStack_a4 = fVar29;
  local_a0 = auVar31._0_8_;
  uStack_98 = auVar31._8_8_;
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1[2],&local_b0);
  fVar35 = (float)local_a0 - local_b0;
  fVar26 = (float)((ulong)local_a0 >> 0x20);
  fVar41 = fVar26 - fStack_ac;
  fVar44 = (float)uStack_98 - fStack_a8;
  auVar31 = *(undefined1 (*) [16])(param_1 + 4);
  auVar38 = *(undefined1 (*) [16])(param_1 + 8);
  auVar53 = NEON_ext(auVar31,auVar31,8,1);
  fVar23 = auVar39._0_4_ * ((float)local_a0 + local_b0) - (float)param_1[10];
  fVar26 = auVar39._4_4_ * (fVar26 + fStack_ac) - (float)((ulong)param_1[10] >> 0x20);
  fVar28 = auVar39._8_4_ * ((float)uStack_98 + fStack_a8) - (float)param_1[0xb];
  pauVar1 = (undefined1 (*) [12])(param_1 + 6);
  uVar48 = (undefined4)((ulong)param_1[7] >> 0x20);
  auVar32._12_4_ = uVar48;
  auVar32._0_12_ = *pauVar1;
  auVar57._12_4_ = uVar48;
  auVar57._0_12_ = *pauVar1;
  auVar32 = NEON_ext(auVar32,auVar57,8,1);
  fVar35 = fVar35 * fVar35;
  fVar41 = fVar41 * fVar41;
  fVar44 = fVar44 * fVar44;
  auVar57 = NEON_ext(auVar38,auVar38,8,1);
  fVar34 = fVar34 * fVar34;
  fVar40 = fVar40 * fVar40;
  fVar43 = fVar43 * fVar43;
  fVar29 = fVar43 + fVar34 + fVar40;
  fVar43 = fVar43 + fVar34 + fVar40;
  uVar49 = NEON_frsqrte(CONCAT44(fVar43,fVar29),4);
  fVar34 = (float)uVar49;
  fVar40 = (float)((ulong)uVar49 >> 0x20);
  uVar49 = NEON_frsqrts(CONCAT44(fVar43,fVar29),CONCAT44(fVar40 * fVar40,fVar34 * fVar34),4);
  iVar36 = -(uint)(fVar29 <= 0.0);
  iVar19 = -(uint)(fVar43 <= 0.0);
  fVar29 = fVar29 * fVar34 * (float)uVar49;
  fVar43 = fVar43 * fVar40 * (float)((ulong)uVar49 >> 0x20);
  fVar29 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                           CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                    CONCAT11((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                             SUB41(fVar29,0) & ~(byte)iVar36)));
  fVar34 = fVar44 + fVar35 + fVar41;
  fVar44 = fVar44 + fVar35 + fVar41;
  uVar49 = NEON_frsqrte(CONCAT44(fVar44,fVar34),4);
  fVar40 = (float)uVar49;
  fVar35 = (float)((ulong)uVar49 >> 0x20);
  uVar49 = NEON_frsqrts(CONCAT44(fVar44,fVar34),CONCAT44(fVar35 * fVar35,fVar40 * fVar40),4);
  iVar36 = -(uint)(fVar34 <= 0.0);
  iVar59 = -(uint)(fVar44 <= 0.0);
  fVar34 = fVar34 * fVar40 * (float)uVar49;
  fVar44 = fVar44 * fVar35 * (float)((ulong)uVar49 >> 0x20);
  fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                           CONCAT12((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                    CONCAT11((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                             SUB41(fVar34,0) & ~(byte)iVar36)));
  fVar22 = fVar22 * auVar39._0_4_ -
           (auVar53._0_4_ * fVar28 + auVar31._0_4_ * fVar23 + auVar31._4_4_ * fVar26);
  fVar25 = fVar25 * auVar39._4_4_ -
           (auVar32._0_4_ * fVar28 +
           (float)*(undefined8 *)*pauVar1 * fVar23 +
           (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar26);
  fVar28 = fVar27 * auVar39._8_4_ -
           (auVar57._0_4_ * fVar28 + auVar38._0_4_ * fVar23 + auVar38._4_4_ * fVar26);
  local_c0 = (float)uVar50;
  fStack_bc = (float)((ulong)uVar50 >> 0x20);
  fVar22 = fVar22 * fVar22;
  fVar25 = fVar25 * fVar25;
  fVar28 = fVar28 * fVar28;
  fVar26 = fVar22 + fVar25 + fVar28;
  fVar28 = fVar22 + fVar25 + fVar28;
  uVar50 = NEON_frsqrte(CONCAT44(fVar28,fVar26),4);
  fVar23 = (float)uVar50;
  fVar22 = (float)((ulong)uVar50 >> 0x20);
  uVar50 = NEON_frsqrts(CONCAT44(fVar28,fVar26),CONCAT44(fVar22 * fVar22,fVar23 * fVar23),4);
  iVar36 = -(uint)(fVar26 <= 0.0);
  iVar42 = -(uint)(fVar28 <= 0.0);
  fVar26 = fVar26 * fVar23 * (float)uVar50;
  fVar28 = fVar28 * fVar22 * (float)((ulong)uVar50 >> 0x20);
  fVar23 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                           CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                    CONCAT11((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                             SUB41(fVar26,0) & ~(byte)iVar36)));
  fVar22 = (local_c0 * (fVar29 + fVar34) + fVar23) * 1.01;
  fVar26 = (fStack_bc *
            ((float)(CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                              CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                       CONCAT15((byte)((uint)fVar43 >> 8) &
                                                ~(byte)((uint)iVar19 >> 8),
                                                CONCAT14(SUB41(fVar43,0) & ~(byte)iVar19,fVar29))))
                    >> 0x20) +
            (float)(CONCAT17((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                             CONCAT16((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                                      CONCAT15((byte)((uint)fVar44 >> 8) &
                                               ~(byte)((uint)iVar59 >> 8),
                                               CONCAT14(SUB41(fVar44,0) & ~(byte)iVar59,fVar34))))
                   >> 0x20)) +
           (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                            CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                                     CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar42 >> 8)
                                              ,CONCAT14(SUB41(fVar28,0) & ~(byte)iVar42,fVar23))))
                  >> 0x20)) * 1.01;
  fVar25 = DAT_04102ee4 * (float)param_1[0xc] * DAT_04102ee4;
  fVar23 = fVar22;
  if (fVar22 <= fVar25) {
    fVar23 = fVar25;
  }
  fVar25 = (float)((uint)fVar23 & 0x7f800000) * 4.0 * DAT_04102e88;
  fVar23 = (float)((uint)fVar23 & 0x7f800000) * 6.0;
  *(float *)(param_1 + 0x16) = fVar25;
  auVar39._0_8_ = CONCAT44(fVar23,fVar23);
  auVar39._8_4_ = fVar23;
  auVar39._12_4_ = fVar23;
  fVar23 = fVar23 * fVar23;
  param_1[0x13] = auVar39._8_8_;
  param_1[0x12] = auVar39._0_8_;
  *(float *)(param_1 + 0x15) = fVar23;
  *(float *)((long)param_1 + 0xac) = fVar23;
  *(float *)(param_1 + 0x14) = fVar23;
  *(float *)((long)param_1 + 0xa4) = fVar23;
  uVar50 = NEON_fmov(0x41800000,4);
  param_1[0x17] =
       CONCAT44(fVar26 * fVar26 * fVar26 * (float)((ulong)uVar50 >> 0x20) *
                (float)((ulong)DAT_041016b8 >> 0x20),
                fVar22 * fVar22 * fVar22 * (float)uVar50 * (float)DAT_041016b8);
  uVar50 = NEON_fmax(param_1[0xc],CONCAT44(fVar25 + fVar25,fVar25 + fVar25),4);
  param_1[0xc] = uVar50;
  fVar23 = (float)((ulong)uVar50 >> 0x20);
  param_1[0xd] = CONCAT44(fVar23 * fVar23,(float)uVar50 * (float)uVar50);
  uVar11 = FUN_00667e30(param_1);
  if ((uVar11 & 1) != 0) {
LAB_0066a084:
    do {
      fVar23 = *(float *)(param_1 + 0x4ec);
      iVar36 = *(int *)(param_1 + 0x1ab);
      if (iVar36 < 2) {
        iVar19 = 0;
      }
      else {
        uVar11 = (ulong)(iVar36 - 1U) & 3;
        if ((long)iVar36 - 2U < 3) {
          iVar19 = 0;
          lVar13 = 1;
        }
        else {
          iVar19 = 0;
          lVar18 = 0;
          pfVar16 = (float *)(param_1 + 0x4ee);
          do {
            lVar13 = lVar18;
            iVar59 = (int)lVar13;
            if (fVar23 < pfVar16[-3]) {
              iVar19 = iVar59 + 1;
              fVar23 = pfVar16[-3];
            }
            fVar26 = pfVar16[-1];
            iVar42 = iVar59 + 2;
            fVar22 = pfVar16[-2];
            if (pfVar16[-2] <= fVar23) {
              iVar42 = iVar19;
              fVar22 = fVar23;
            }
            fVar25 = fVar26;
            if (fVar26 <= fVar22) {
              fVar25 = fVar22;
            }
            iVar5 = iVar59 + 3;
            if (fVar26 <= fVar22) {
              iVar5 = iVar42;
            }
            iVar19 = iVar59 + 4;
            fVar23 = *pfVar16;
            if (*pfVar16 <= fVar25) {
              iVar19 = iVar5;
              fVar23 = fVar25;
            }
            lVar18 = lVar13 + 4;
            pfVar16 = pfVar16 + 4;
          } while (((long)iVar36 + -1) - uVar11 != lVar13 + 4);
          lVar13 = lVar13 + 5;
        }
        if ((iVar36 - 1U & 3) != 0) {
          lVar18 = -uVar11;
          iVar36 = iVar19;
          do {
            fVar22 = *(float *)((long)param_1 + lVar13 * 4 + 0x2760);
            iVar19 = (int)lVar13;
            if (fVar22 <= fVar23) {
              iVar19 = iVar36;
              fVar22 = fVar23;
            }
            fVar23 = fVar22;
            lVar13 = lVar13 + 1;
            lVar18 = lVar18 + 1;
            iVar36 = iVar19;
          } while (lVar18 != 0);
        }
      }
      if (fVar23 < 0.0) {
        *piVar2 = 1;
      }
      auVar32 = *(undefined1 (*) [16])(param_1 + (long)iVar19 * 2 + 0x3ac);
      uVar49 = param_1[(long)iVar19 * 2 + 0x2ad];
      uVar50 = param_1[(long)iVar19 * 2 + 0x2ac];
      auVar57 = *(undefined1 (*) [16])(param_1 + 0x12);
      fStack_a8 = auVar32._8_4_;
      fStack_a4 = auVar32._12_4_;
      local_b0 = auVar32._0_4_;
      fStack_ac = auVar32._4_4_;
      pcVar3 = (char *)((long)param_1 + (long)iVar19 + 0x2b60);
      cVar6 = *pcVar3;
      if (*(int *)(param_1 + 0x18) < 0x40) {
        (*(code *)**(undefined8 **)*param_1)
                  ((undefined8 *)*param_1,param_1[1],&local_b0,param_1[2],
                   (undefined1 (*) [16])(param_1 + 4),&local_90);
        auVar32 = *(undefined1 (*) [16])(param_1 + 4);
        auVar31 = *(undefined1 (*) [16])(param_1 + 6);
        auVar38 = *(undefined1 (*) [16])(param_1 + 8);
        auVar53 = NEON_ext(auVar32,auVar32,8,1);
        auVar54 = NEON_ext(auVar31,auVar31,8,1);
        auVar39 = NEON_ext(auVar38,auVar38,8,1);
        fVar23 = (float)uStack_80 - (float)param_1[10];
        fVar22 = uStack_80._4_4_ - (float)((ulong)param_1[10] >> 0x20);
        fVar26 = (float)uStack_78 - (float)param_1[0xb];
        fVar28 = auVar53._0_4_ * fVar26 + auVar32._0_4_ * fVar23 + auVar32._4_4_ * fVar22;
        fVar27 = auVar54._0_4_ * fVar26 + auVar31._0_4_ * fVar23 + auVar31._4_4_ * fVar22;
        auVar33._0_8_ = CONCAT44(fVar27,fVar28);
        auVar33._8_4_ = auVar39._0_4_ * fVar26 + auVar38._0_4_ * fVar23 + auVar38._4_4_ * fVar22;
        fVar35 = local_b0 * local_b0 + fStack_ac * fStack_ac + fStack_a8 * fStack_a8;
        fVar41 = local_b0 * local_b0 + fStack_ac * fStack_ac + fStack_a8 * fStack_a8;
        uVar56 = CONCAT44(fVar41,fVar35);
        uVar51 = NEON_frsqrte(uVar56,4);
        auVar33._12_4_ = uStack_78._4_4_;
        fVar23 = (float)uVar51;
        fVar22 = (float)((ulong)uVar51 >> 0x20);
        fVar28 = (float)local_90 - fVar28;
        fVar27 = (float)((ulong)local_90 >> 0x20) - fVar27;
        fVar29 = (float)uStack_88 - auVar33._8_4_;
        fVar34 = (float)((ulong)uStack_88 >> 0x20) - uStack_78._4_4_;
        uVar51 = NEON_frsqrts(uVar56,CONCAT44(fVar22 * fVar22,fVar23 * fVar23),4);
        fVar23 = fVar23 * (float)uVar51;
        fVar22 = fVar22 * (float)((ulong)uVar51 >> 0x20);
        fVar26 = local_b0 * (fVar28 - ((float)uVar50 - auVar57._0_4_));
        fVar25 = fStack_ac * (fVar27 - ((float)((ulong)uVar50 >> 0x20) - auVar57._4_4_));
        uVar45 = (undefined1)((uint)fVar25 >> 8);
        uVar46 = (undefined1)((uint)fVar25 >> 0x10);
        uVar47 = (undefined1)((uint)fVar25 >> 0x18);
        fVar40 = fStack_a8 * (fVar29 - ((float)uVar49 - auVar57._8_4_));
        fVar43 = fStack_a4 * (fVar34 - ((float)((ulong)uVar49 >> 0x20) - auVar57._12_4_));
        auVar53[4] = SUB41(fVar25,0);
        auVar53._0_4_ = fVar26;
        auVar53[5] = uVar45;
        auVar53[6] = uVar46;
        auVar53[7] = uVar47;
        auVar53._8_4_ = fVar40;
        auVar53._12_4_ = fVar43;
        auVar54[4] = SUB41(fVar25,0);
        auVar54._0_4_ = fVar26;
        auVar54[5] = uVar45;
        auVar54[6] = uVar46;
        auVar54[7] = uVar47;
        auVar54._8_4_ = fVar40;
        auVar54._12_4_ = fVar43;
        auVar32 = NEON_ext(auVar53,auVar54,8,1);
        if (*piVar2 == 8) {
          auVar52._0_4_ = local_b0 * fVar28;
          auVar52._4_4_ = fStack_ac * fVar27;
          auVar52._8_4_ = fStack_a8 * fVar29;
          auVar52._12_4_ = fStack_a4 * fVar34;
          auVar57 = NEON_ext(auVar52,auVar52,8,1);
          fVar40 = (float)param_1[0xc];
          if (fVar40 < -(fVar23 * (auVar57._0_4_ + auVar52._0_4_ + auVar52._4_4_))) {
            iVar36 = -(uint)(fVar35 <= 0.0);
            iVar59 = -(uint)(fVar41 <= 0.0);
            uVar50 = NEON_frsqrts(uVar56,CONCAT44(fVar22 * fVar22,fVar23 * fVar23),4);
            fVar43 = fVar23 * (float)uVar50;
            fVar22 = fVar22 * (float)((ulong)uVar50 >> 0x20);
            fVar43 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                                     CONCAT12((byte)((uint)fVar43 >> 0x10) &
                                              ~(byte)((uint)iVar36 >> 0x10),
                                              CONCAT11((byte)((uint)fVar43 >> 8) &
                                                       ~(byte)((uint)iVar36 >> 8),
                                                       SUB41(fVar43,0) & ~(byte)iVar36)));
            fVar35 = (float)(CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                                      CONCAT16((byte)((uint)fVar22 >> 0x10) &
                                               ~(byte)((uint)iVar59 >> 0x10),
                                               CONCAT15((byte)((uint)fVar22 >> 8) &
                                                        ~(byte)((uint)iVar59 >> 8),
                                                        CONCAT14(SUB41(fVar22,0) & ~(byte)iVar59,
                                                                 fVar43)))) >> 0x20);
            fVar22 = fStack_ac * fVar35;
            auVar55._0_8_ = CONCAT44(fVar22,local_b0 * fVar43);
            auVar55._8_4_ = fStack_a8 * fVar43;
            auVar55._12_4_ = fStack_a4 * fVar35;
            auVar58._0_4_ = fVar28 * local_b0 * fVar43;
            auVar58._4_4_ = fVar27 * fVar22;
            auVar58._8_4_ = fVar29 * auVar55._8_4_;
            auVar58._12_4_ = fVar34 * auVar55._12_4_;
            auVar57 = NEON_ext(auVar58,auVar58,8,1);
            fVar22 = -(auVar58._0_4_ + auVar58._4_4_ + auVar57._0_4_);
            if (fVar40 < fVar22) {
              *piVar2 = 0;
              param_1[0x9c1] = auVar55._8_8_;
              param_1[0x9c0] = auVar55._0_8_;
              *(float *)(param_1 + 0x9c2) = fVar22;
            }
          }
        }
        else {
          fVar40 = (float)param_1[0xc];
        }
        if (fVar23 * (fVar26 + fVar25 + auVar32._0_4_) < fVar40) goto LAB_0066a2d8;
        iVar36 = *(int *)(param_1 + 0x18);
        param_1[(long)iVar36 * 2 + 0x1b] = uStack_88;
        param_1[(long)iVar36 * 2 + 0x1a] = local_90;
        iVar36 = *(int *)(param_1 + 0x18);
        param_1[(long)iVar36 * 2 + 0x9b] = auVar33._8_8_;
        param_1[(long)iVar36 * 2 + 0x9a] = auVar33._0_8_;
        uVar50 = param_1[0x12];
        iVar36 = *(int *)(param_1 + 0x18);
        param_1[(long)iVar36 * 2 + 0x11b] =
             CONCAT44(fVar34 + (float)((ulong)param_1[0x13] >> 0x20),fVar29 + (float)param_1[0x13]);
        param_1[(long)iVar36 * 2 + 0x11a] =
             CONCAT44(fVar27 + (float)((ulong)uVar50 >> 0x20),fVar28 + (float)uVar50);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        bVar10 = true;
        iVar36 = *piVar2;
      }
      else {
LAB_0066a2d8:
        bVar10 = false;
        iVar36 = *piVar2;
      }
      if (iVar36 == 0) {
        if (bVar10) {
          *(undefined4 *)((long)param_1 + 0x4dec) = 1;
          *(int *)(param_1 + 0x9be) = *(int *)(param_1 + 0x18) + -1;
        }
        else {
          *(undefined4 *)((long)param_1 + 0x4dec) = 3;
          *(int *)(param_1 + 0x9be) = iVar19;
          FUN_00669ad0(param_1,iVar19);
        }
        uVar50 = param_1[0x9c0];
        param_2[3] = CONCAT44(0.0 - (float)((ulong)param_1[0x9c1] >> 0x20),
                              0.0 - (float)param_1[0x9c1]);
        param_2[2] = CONCAT44(0.0 - (float)((ulong)uVar50 >> 0x20),0.0 - (float)uVar50);
        *param_2 = CONCAT44(*(undefined4 *)(param_1 + 0x9c2),*(undefined4 *)(param_1 + 0x9c2));
        iVar36 = *(int *)((long)param_1 + 0x4dec);
        if (iVar36 == 1) goto LAB_0066a7e8;
        if (iVar36 == 2) goto LAB_0066a804;
        if (iVar36 != 3) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        goto LAB_0066a778;
      }
      if (bVar10) {
        uVar20 = *(uint *)(param_1 + 0x1ab);
        if ((int)uVar20 < 1) {
          *(undefined4 *)((long)param_1 + 0x4de4) = 0;
          *(uint *)(param_1 + 0x97c) = uVar20;
        }
        else {
          iVar59 = *(int *)(param_1 + 0x18);
          iVar36 = 0;
          uVar11 = (long)(int)uVar20;
          do {
            while( true ) {
              uVar21 = uVar11 - 1;
              fVar23 = (float)param_1[(long)iVar59 * 2 + 0x118] -
                       *(float *)(param_1 + uVar21 * 2 + 0x2ac);
              fVar22 = (float)((ulong)param_1[(long)iVar59 * 2 + 0x118] >> 0x20) -
                       *(float *)((long)param_1 + uVar21 * 0x10 + 0x1564);
              fVar25 = (float)param_1[(long)iVar59 * 2 + 0x119] -
                       *(float *)(param_1 + uVar21 * 2 + 0x2ad);
              fVar26 = (float)param_1[uVar21 * 2 + 0x3ac] * fVar23 +
                       (float)((ulong)param_1[uVar21 * 2 + 0x3ac] >> 0x20) * fVar22 +
                       (float)param_1[uVar21 * 2 + 0x3ad] * fVar25;
              if ((float)param_1[0x17] < ABS(fVar26)) break;
              if (DAT_04102e78 < *(float *)((long)param_1 + uVar21 * 4 + 0x2760)) {
                if (*(char *)((long)param_1 + uVar11 + 0x2b5f) == '\0') {
                  FUN_00669520(param_1,uVar21 & 0xffffffff);
                }
                dVar30 = (double)fVar23;
                dVar24 = (double)fVar22;
                dVar37 = (double)fVar25;
                if (0.0 < (double)param_1[uVar21 * 4 + 0x57c] * dVar30 +
                          (double)param_1[uVar21 * 4 + 0x57d] * dVar24 +
                          (double)param_1[uVar21 * 4 + 0x57e] * dVar37 +
                          (double)param_1[uVar21 * 4 + 0x77c] * dVar30 +
                          (double)param_1[uVar21 * 4 + 0x77d] * dVar24 +
                          (double)param_1[uVar21 * 4 + 0x77e] * dVar37) goto LAB_0066a404;
              }
LAB_0066a3e8:
              *(undefined4 *)((long)param_1 + uVar21 * 4 + 0x4be4) = 0;
              uVar11 = uVar21;
              if ((long)uVar21 < 1) goto LAB_0066a41c;
            }
            if (fVar26 <= 0.0) goto LAB_0066a3e8;
LAB_0066a404:
            iVar36 = iVar36 + 1;
            *(uint *)((long)param_1 + uVar21 * 4 + 0x4be4) = uVar20;
            uVar20 = (uint)uVar21;
            uVar11 = uVar21;
          } while (0 < (long)uVar21);
LAB_0066a41c:
          *(int *)((long)param_1 + 0x4de4) = iVar36;
          *(uint *)(param_1 + 0x97c) = uVar20;
          if (iVar36 != 0) {
            if (iVar36 < 1) goto LAB_0066a520;
            if (iVar36 == 1) {
              *(undefined4 *)((long)param_1 + 0xd54) = 3;
              psVar4 = (short *)((long)param_1 +
                                (-(ulong)((uVar20 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                                (ulong)(uVar20 << 2) << 2) + 0xd60);
              sVar7 = *psVar4;
              *(short *)((long)param_1 + (ulong)*(byte *)(psVar4 + 1) * 2 + 0xcd4) = sVar7;
              uVar11 = (ulong)(long)(int)(uVar20 << 2) >> 2;
              *(int *)(param_1 + 0x19a) = (int)sVar7;
              psVar4 = (short *)((long)param_1 + (uVar11 << 4 | 4) + 0xd60);
              sVar7 = *psVar4;
              *(short *)((long)param_1 + (ulong)*(byte *)(psVar4 + 1) * 2 + 0xcd4) = sVar7;
              *(int *)(param_1 + 0x19a) = (int)sVar7;
              psVar4 = (short *)((long)param_1 + (uVar11 << 4 | 8) + 0xd60);
              sVar7 = *psVar4;
              *(short *)((long)param_1 + (ulong)*(byte *)(psVar4 + 1) * 2 + 0xcd4) = sVar7;
              *(int *)(param_1 + 0x19a) = (int)sVar7;
            }
            else {
              FUN_00669750(param_1);
            }
            FUN_00669110(param_1);
            goto LAB_0066a084;
          }
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      }
LAB_0066a520:
      if (*pcVar3 == '\0') {
        if (*(float *)((long)param_1 + (long)iVar19 * 4 + 0x2960) <= (float)param_1[0xc])
        goto LAB_0066a62c;
        FUN_00669520(param_1,iVar19);
        cVar12 = *pcVar3;
      }
      else {
        cVar12 = '\x01';
      }
      if ((cVar6 != '\0') || (cVar12 == '\0')) goto LAB_0066a62c;
    } while( true );
  }
  uVar50 = param_1[0x9c0];
  param_2[3] = CONCAT44(0.0 - (float)((ulong)param_1[0x9c1] >> 0x20),0.0 - (float)param_1[0x9c1]);
  param_2[2] = CONCAT44(0.0 - (float)((ulong)uVar50 >> 0x20),0.0 - (float)uVar50);
  *param_2 = CONCAT44(*(undefined4 *)(param_1 + 0x9c2),*(undefined4 *)(param_1 + 0x9c2));
  iVar36 = *(int *)((long)param_1 + 0x4dec);
  if (iVar36 == 1) {
    uVar20 = *(uint *)(param_1 + 0x9be);
    uVar14 = (ulong)(int)uVar20;
    uVar49 = param_1[uVar14 * 2 + 0x1b];
    uVar50 = param_1[uVar14 * 2 + 0x1a];
    uVar11 = (ulong)uVar20;
    uVar21 = (ulong)uVar20;
  }
  else {
    if (iVar36 == 2) {
      uVar20 = *(uint *)(param_1 + 0x9be);
      uVar21 = (ulong)*(byte *)((long)param_1 + (long)(int)uVar20 * 4 + 0xd62);
      uVar14 = (ulong)*(byte *)((long)param_1 +
                               (long)(int)(0x2dU >> (((ulong)uVar20 & 3) << 1) & 3 ^ uVar20) * 4 +
                               0xd62);
      uVar49 = (param_1 + uVar21 * 2 + 0x1a)[1];
      uVar50 = param_1[uVar21 * 2 + 0x1a];
      pfVar16 = (float *)(param_1 + uVar14 * 2 + 0x1a);
      fVar25 = *(float *)(param_1 + 0x9c6);
      fVar23 = (*pfVar16 - (float)uVar50) * fVar25;
      fVar22 = (pfVar16[1] - (float)((ulong)uVar50 >> 0x20)) * fVar25;
      fVar26 = (pfVar16[2] - (float)uVar49) * fVar25;
      fVar25 = (pfVar16[3] - (float)((ulong)uVar49 >> 0x20)) * fVar25;
      uVar11 = uVar14;
    }
    else {
      if (iVar36 != 3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar20 = *(uint *)(param_1 + 0x9be) << 2;
      uVar14 = (ulong)(long)(int)uVar20 >> 2;
      uVar21 = (ulong)*(byte *)((long)param_1 +
                               (-(ulong)((*(uint *)(param_1 + 0x9be) & 0x3fffffff) >> 0x1d) &
                                0xfffffffc00000000 | (ulong)uVar20 << 2) + 0xd62);
      uVar11 = (ulong)*(byte *)((long)param_1 + (uVar14 << 4 | 4) + 0xd62);
      uVar49 = (param_1 + uVar21 * 2 + 0x1a)[1];
      uVar50 = param_1[uVar21 * 2 + 0x1a];
      uVar14 = (ulong)*(byte *)((long)param_1 + (uVar14 << 4 | 8) + 0xd62);
      pfVar16 = (float *)(param_1 + uVar11 * 2 + 0x1a);
      fVar25 = (float)param_1[0x9c5];
      pfVar8 = (float *)(param_1 + uVar14 * 2 + 0x1a);
      fVar23 = (float)param_1[0x9c4];
      fVar22 = (float)((ulong)param_1[0x9c4] >> 0x20);
      uVar50 = CONCAT44((float)((ulong)uVar50 >> 0x20) * fVar23 + pfVar16[1] * fVar22,
                        (float)uVar50 * fVar23 + *pfVar16 * fVar22);
      uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) * fVar23 + pfVar16[3] * fVar22,
                        (float)uVar49 * fVar23 + pfVar16[2] * fVar22);
      fVar23 = *pfVar8 * fVar25;
      fVar22 = pfVar8[1] * fVar25;
      fVar26 = pfVar8[2] * fVar25;
      fVar25 = pfVar8[3] * fVar25;
    }
    uVar50 = CONCAT44((float)((ulong)uVar50 >> 0x20) + fVar22,(float)uVar50 + fVar23);
    uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) + fVar25,(float)uVar49 + fVar26);
  }
  param_2[5] = uVar49;
  param_2[4] = uVar50;
LAB_0066a85c:
  uVar21 = -(uVar21 >> 0x1f) & 0xfffffff000000000 | uVar21 << 4;
  puVar17 = (undefined8 *)param_1[0xe];
  puVar9 = (undefined8 *)((long)param_1 + uVar21 + 0xd0);
  uVar50 = *puVar9;
  uVar15 = -(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4;
  puVar17[1] = puVar9[1];
  *puVar17 = uVar50;
  puVar9 = (undefined8 *)((long)param_1 + uVar15 + 0xd0);
  uVar50 = *puVar9;
  lVar18 = param_1[0xe];
  *(undefined8 *)(lVar18 + 0x18) = puVar9[1];
  *(undefined8 *)(lVar18 + 0x10) = uVar50;
  uVar11 = -(uVar14 >> 0x1f & 1) & 0xfffffff000000000 | (uVar14 & 0xffffffff) << 4;
  puVar9 = (undefined8 *)((long)param_1 + uVar11 + 0xd0);
  uVar50 = *puVar9;
  lVar18 = param_1[0xe];
  *(undefined8 *)(lVar18 + 0x28) = puVar9[1];
  *(undefined8 *)(lVar18 + 0x20) = uVar50;
  puVar9 = (undefined8 *)((long)param_1 + uVar21 + 0x4d0);
  uVar50 = *puVar9;
  puVar17 = (undefined8 *)param_1[0xf];
  puVar17[1] = puVar9[1];
  *puVar17 = uVar50;
  puVar9 = (undefined8 *)((long)param_1 + uVar15 + 0x4d0);
  uVar50 = *puVar9;
  lVar18 = param_1[0xf];
  *(undefined8 *)(lVar18 + 0x18) = puVar9[1];
  *(undefined8 *)(lVar18 + 0x10) = uVar50;
  puVar9 = (undefined8 *)((long)param_1 + uVar11 + 0x4d0);
  uVar50 = *puVar9;
  lVar18 = param_1[0xf];
  *(undefined8 *)(lVar18 + 0x28) = puVar9[1];
  *(undefined8 *)(lVar18 + 0x20) = uVar50;
  if (*(int *)(param_1 + 0x18) < 0x40) {
    iVar36 = *piVar2;
  }
  else {
    iVar36 = 3;
  }
  return iVar36;
LAB_0066a62c:
  FUN_00669ad0(param_1,iVar19);
  uVar50 = param_1[0x9c0];
  param_2[3] = CONCAT44(0.0 - (float)((ulong)param_1[0x9c1] >> 0x20),0.0 - (float)param_1[0x9c1]);
  param_2[2] = CONCAT44(0.0 - (float)((ulong)uVar50 >> 0x20),0.0 - (float)uVar50);
  *param_2 = CONCAT44(*(undefined4 *)(param_1 + 0x9c2),*(undefined4 *)(param_1 + 0x9c2));
  iVar36 = *(int *)((long)param_1 + 0x4dec);
  if (iVar36 == 1) {
LAB_0066a7e8:
    uVar20 = *(uint *)(param_1 + 0x9be);
    uVar14 = (ulong)(int)uVar20;
    uVar49 = param_1[uVar14 * 2 + 0x1b];
    uVar50 = param_1[uVar14 * 2 + 0x1a];
    uVar11 = (ulong)uVar20;
    uVar21 = (ulong)uVar20;
  }
  else {
    if (iVar36 == 2) {
LAB_0066a804:
      uVar20 = *(uint *)(param_1 + 0x9be);
      uVar21 = (ulong)*(byte *)((long)param_1 + (long)(int)uVar20 * 4 + 0xd62);
      uVar14 = (ulong)*(byte *)((long)param_1 +
                               (long)(int)(0x2dU >> (((ulong)uVar20 & 3) << 1) & 3 ^ uVar20) * 4 +
                               0xd62);
      uVar49 = (param_1 + uVar21 * 2 + 0x1a)[1];
      uVar50 = param_1[uVar21 * 2 + 0x1a];
      pfVar16 = (float *)(param_1 + uVar14 * 2 + 0x1a);
      fVar25 = *(float *)(param_1 + 0x9c6);
      fVar23 = (*pfVar16 - (float)uVar50) * fVar25;
      fVar22 = (pfVar16[1] - (float)((ulong)uVar50 >> 0x20)) * fVar25;
      fVar26 = (pfVar16[2] - (float)uVar49) * fVar25;
      fVar25 = (pfVar16[3] - (float)((ulong)uVar49 >> 0x20)) * fVar25;
      uVar11 = uVar14;
    }
    else {
      if (iVar36 != 3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_0066a778:
      uVar20 = *(uint *)(param_1 + 0x9be) << 2;
      uVar14 = (ulong)(long)(int)uVar20 >> 2;
      uVar21 = (ulong)*(byte *)((long)param_1 +
                               (-(ulong)((*(uint *)(param_1 + 0x9be) & 0x3fffffff) >> 0x1d) &
                                0xfffffffc00000000 | (ulong)uVar20 << 2) + 0xd62);
      uVar11 = (ulong)*(byte *)((long)param_1 + (uVar14 << 4 | 4) + 0xd62);
      uVar49 = (param_1 + uVar21 * 2 + 0x1a)[1];
      uVar50 = param_1[uVar21 * 2 + 0x1a];
      uVar14 = (ulong)*(byte *)((long)param_1 + (uVar14 << 4 | 8) + 0xd62);
      pfVar16 = (float *)(param_1 + uVar11 * 2 + 0x1a);
      fVar25 = (float)param_1[0x9c5];
      pfVar8 = (float *)(param_1 + uVar14 * 2 + 0x1a);
      fVar23 = (float)param_1[0x9c4];
      fVar22 = (float)((ulong)param_1[0x9c4] >> 0x20);
      uVar50 = CONCAT44((float)((ulong)uVar50 >> 0x20) * fVar23 + pfVar16[1] * fVar22,
                        (float)uVar50 * fVar23 + *pfVar16 * fVar22);
      uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) * fVar23 + pfVar16[3] * fVar22,
                        (float)uVar49 * fVar23 + pfVar16[2] * fVar22);
      fVar23 = *pfVar8 * fVar25;
      fVar22 = pfVar8[1] * fVar25;
      fVar26 = pfVar8[2] * fVar25;
      fVar25 = pfVar8[3] * fVar25;
    }
    uVar50 = CONCAT44((float)((ulong)uVar50 >> 0x20) + fVar22,(float)uVar50 + fVar23);
    uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) + fVar25,(float)uVar49 + fVar26);
  }
  param_2[5] = uVar49;
  param_2[4] = uVar50;
  goto LAB_0066a85c;
}

