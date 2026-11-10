
void FUN_0033a030(float param_1,undefined8 param_2,long param_3,long param_4,int *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  long lVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int iVar15;
  long lVar16;
  float *pfVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fStack_ec;
  float fStack_e4;
  undefined1 local_e0 [16];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_b8 [4];
  float local_a8;
  float fStack_a4;
  
  iVar12 = *(int *)(param_4 + 0x70);
  if (iVar12 < 3) {
    *(undefined4 *)(param_4 + 0x78) = 0;
  }
  else {
    fVar42 = 0.0;
    pfVar17 = *(float **)(*(long *)(param_4 + 0x58) + 0x58);
    if (param_5[0x16] == 1) {
      fVar42 = 0.0;
      iVar15 = iVar12 + -1;
      pfVar10 = pfVar17;
      do {
        pfVar10 = *(float **)(pfVar10 + 0x16);
        iVar15 = iVar15 + -1;
        pfVar13 = *(float **)(pfVar10 + 0x18);
        auVar45._0_4_ = (*pfVar10 - *pfVar13) * (*pfVar10 - *pfVar13);
        auVar45._4_4_ = (pfVar10[1] - pfVar13[1]) * (pfVar10[1] - pfVar13[1]);
        auVar45._8_4_ = (pfVar10[2] - pfVar13[2]) * (pfVar10[2] - pfVar13[2]);
        auVar45._12_4_ = (pfVar10[3] - pfVar13[3]) * (pfVar10[3] - pfVar13[3]);
        auVar51 = NEON_ext(auVar45,auVar45,8,1);
        fVar42 = fVar42 + SQRT(auVar51._0_4_ + auVar45._0_4_ + auVar51._4_4_ + auVar45._4_4_);
      } while (iVar15 != 0);
      fVar42 = 1.0 / fVar42;
    }
    iVar15 = param_5[10] + 1;
    uVar1 = iVar12 + param_5[10] * (iVar12 + -1);
    fVar54 = 1.0 / (float)iVar15;
    if ((int)uVar1 < 1) {
      *(undefined4 *)(param_4 + 0x78) = 0;
      iVar12 = *param_5;
    }
    else {
      fVar43 = *(float *)(param_4 + 0x80);
      uVar19 = 0;
      iVar20 = 0;
      uVar22 = 0;
      uVar24 = 0;
      uVar26 = 0;
      uVar28 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar39 = 0;
      uVar40 = 0;
      uVar41 = 0;
      puVar21 = (undefined8 *)(param_3 + 0x20);
      do {
        iVar18 = (int)uVar19;
        fVar55 = (float)iVar18;
        fVar50 = (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)));
        uVar6 = CONCAT17(uVar41,CONCAT16(uVar40,CONCAT15(uVar39,CONCAT14(uVar38,fVar50))));
        fVar47 = (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar24,uVar22)));
        uVar2 = CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,fVar47))));
        fVar48 = fVar54 * fVar55;
        iVar9 = (int)fVar48;
        if (iVar20 < iVar9) {
          pfVar17 = *(float **)(pfVar17 + 0x16);
          iVar20 = iVar9;
        }
        FUN_0033a6c0(SUB41(fVar48 - (float)iVar9,0),&local_d0,local_e0,pfVar17,iVar9,iVar12);
        if (param_5[0x16] == 1) {
          uVar34 = SUB41(fStack_c8,0);
          uVar35 = (undefined1)((uint)fStack_c8 >> 8);
          uVar36 = (undefined1)((uint)fStack_c8 >> 0x10);
          uVar37 = (undefined1)((uint)fStack_c8 >> 0x18);
          uVar38 = SUB41(fStack_c4,0);
          uVar39 = (undefined1)((uint)fStack_c4 >> 8);
          uVar40 = (undefined1)((uint)fStack_c4 >> 0x10);
          uVar41 = (undefined1)((uint)fStack_c4 >> 0x18);
          uVar22 = SUB41(local_d0,0);
          uVar24 = (undefined1)((uint)local_d0 >> 8);
          uVar26 = (undefined1)((uint)local_d0 >> 0x10);
          uVar28 = (undefined1)((uint)local_d0 >> 0x18);
          uVar30 = SUB41(fStack_cc,0);
          uVar31 = (undefined1)((uint)fStack_cc >> 8);
          uVar32 = (undefined1)((uint)fStack_cc >> 0x10);
          uVar33 = (undefined1)((uint)fStack_cc >> 0x18);
          if (uVar19 == 0) {
            fVar47 = 0.0;
          }
          else {
            fStack_ec = (float)((ulong)uVar2 >> 0x20);
            fStack_e4 = (float)((ulong)uVar6 >> 0x20);
            fVar47 = local_d0 - fVar47;
            fVar50 = fStack_c8 - fVar50;
            auVar51._0_4_ = fVar47 * fVar47;
            auVar51._4_4_ = (fStack_cc - fStack_ec) * (fStack_cc - fStack_ec);
            auVar51._8_4_ = fVar50 * fVar50;
            auVar51._12_4_ = (fStack_c4 - fStack_e4) * (fStack_c4 - fStack_e4);
            auVar45 = NEON_ext(auVar51,auVar51,8,1);
            fVar47 = SQRT(auVar45._0_4_ + auVar51._0_4_ + auVar45._4_4_ + auVar51._4_4_);
          }
          if (iVar18 < 2) {
            iVar18 = 1;
          }
          bVar8 = uVar19 != 0;
          lVar11 = param_3 + (ulong)(iVar18 - 1) * 0x50;
          local_b8[1] = 0.0;
          if (bVar8) {
            local_b8[1] = *(float *)(lVar11 + 0x34) + fVar42 * fVar47;
          }
          local_b8[0] = 0.0;
          if (bVar8) {
            local_b8[0] = *(float *)(lVar11 + 0x30) + fVar42 * fVar47;
          }
          fStack_a4 = *(float *)(param_4 + 0x8c) * 0.1;
          local_b8[3] = fStack_a4;
          local_b8[2] = 0.0;
          if (bVar8) {
            local_b8[3] = *(float *)(lVar11 + 0x30) - fVar47 * 0.1;
            local_b8[2] = *(float *)(lVar11 + 0x38) + fVar42 * fVar47;
          }
          local_a8 = fStack_a4;
          if (bVar8) {
            fStack_a4 = *(float *)(lVar11 + 0x38) - fVar47 * 0.1;
            local_a8 = *(float *)(lVar11 + 0x34) - fVar47 * 0.1;
          }
          auVar44._4_4_ = local_b8[(long)param_5[4] * 3 + 1];
          auVar44._0_4_ = local_b8[(long)param_5[3] * 3];
          auVar44._8_4_ = local_b8[(long)param_5[5] * 3 + 2];
        }
        else if (param_5[0x16] == 0) {
          fVar47 = ((fVar43 - (float)(int)fVar43) + param_1 + fVar55) /
                   (float)(((int)(float)param_5[6] + -1) * iVar15);
          local_b8[0] = fVar55 / (float)(int)(uVar1 - 1);
          local_b8[1] = local_b8[0];
          uVar23 = 0;
          uVar25 = 0;
          uVar27 = 0x80;
          uVar29 = 0x3f;
          if (fVar47 <= 1.0) {
            uVar23 = SUB41(fVar47,0);
            uVar25 = (char)((uint)fVar47 >> 8);
            uVar27 = (char)((uint)fVar47 >> 0x10);
            uVar29 = (char)((uint)fVar47 >> 0x18);
          }
          local_b8[2] = local_b8[0];
          local_b8[3] = (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar23)));
          local_a8 = (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar23)));
          fStack_a4 = (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar23)));
          auVar44._4_4_ = local_b8[(long)param_5[4] * 3 + 1];
          auVar44._0_4_ = local_b8[(long)param_5[3] * 3];
          auVar44._8_4_ = local_b8[(long)param_5[5] * 3 + 2];
        }
        else {
          auVar44 = SUB1612(ZEXT816(0),0);
        }
        uVar19 = uVar19 + 1;
        fVar47 = pfVar17[0x14];
        *(float *)(puVar21 + -4) = local_d0;
        *(float *)((long)puVar21 + -0x1c) = fStack_cc;
        *(float *)(puVar21 + -3) = fStack_c8;
        *(float *)((long)puVar21 + -0x14) = fVar47;
        puVar21[-2] = local_e0._0_8_;
        *(int *)(puVar21 + -1) = local_e0._8_4_;
        auVar45 = *(undefined1 (*) [16])(pfVar17 + 0xc);
        *(int *)(puVar21 + 3) = auVar44._8_4_;
        puVar21[2] = auVar44._0_8_;
        *(int *)(puVar21 + 1) = auVar45._8_4_;
        *puVar21 = auVar45._0_8_;
        puVar21 = puVar21 + 10;
      } while (uVar1 != uVar19);
      *(uint *)(param_4 + 0x78) = uVar1 * 2;
      iVar12 = *param_5;
    }
    if (((iVar12 != 0) && (iVar12 != 3)) && (0 < (int)uVar1)) {
      uVar19 = 0;
      iVar12 = 0;
      puVar14 = (undefined4 *)(param_3 + 0x48);
      lVar11 = *(long *)(*(long *)(param_4 + 0x58) + 0x58);
      do {
        fVar42 = fVar54 * (float)(int)uVar19;
        iVar15 = (int)fVar42;
        if (iVar12 < iVar15) {
          lVar11 = *(long *)(lVar11 + 0x58);
          iVar12 = iVar15;
        }
        uVar19 = uVar19 + 1;
        lVar16 = *(long *)(lVar11 + 0x58);
        fVar42 = fVar42 - (float)iVar15;
        fVar48 = *(float *)(lVar11 + 0x40) +
                 (*(float *)(lVar16 + 0x40) - *(float *)(lVar11 + 0x40)) * fVar42;
        fVar55 = *(float *)(lVar11 + 0x44) +
                 (*(float *)(lVar16 + 0x44) - *(float *)(lVar11 + 0x44)) * fVar42;
        fVar49 = *(float *)(lVar11 + 0x48) +
                 (*(float *)(lVar16 + 0x48) - *(float *)(lVar11 + 0x48)) * fVar42;
        fVar50 = *(float *)(lVar11 + 0x4c) +
                 (*(float *)(lVar16 + 0x4c) - *(float *)(lVar11 + 0x4c)) * fVar42;
        fVar42 = fVar48 * fVar48;
        fVar43 = fVar55 * fVar55;
        uVar22 = (undefined1)((uint)fVar43 >> 8);
        uVar24 = (undefined1)((uint)fVar43 >> 0x10);
        uVar26 = (undefined1)((uint)fVar43 >> 0x18);
        fVar47 = fVar49 * fVar49;
        uVar28 = (undefined1)((uint)fVar47 >> 8);
        uVar30 = (undefined1)((uint)fVar47 >> 0x10);
        uVar31 = (undefined1)((uint)fVar47 >> 0x18);
        fVar50 = fVar50 * fVar50;
        uVar32 = (undefined1)((uint)fVar50 >> 8);
        uVar33 = (undefined1)((uint)fVar50 >> 0x10);
        uVar34 = (undefined1)((uint)fVar50 >> 0x18);
        auVar3[4] = SUB41(fVar43,0);
        auVar3._0_4_ = fVar42;
        auVar3[5] = uVar22;
        auVar3[6] = uVar24;
        auVar3[7] = uVar26;
        auVar3[8] = SUB41(fVar47,0);
        auVar3[9] = uVar28;
        auVar3[10] = uVar30;
        auVar3[0xb] = uVar31;
        auVar3[0xc] = SUB41(fVar50,0);
        auVar3[0xd] = uVar32;
        auVar3[0xe] = uVar33;
        auVar3[0xf] = uVar34;
        auVar4[4] = SUB41(fVar43,0);
        auVar4._0_4_ = fVar42;
        auVar4[5] = uVar22;
        auVar4[6] = uVar24;
        auVar4[7] = uVar26;
        auVar4[8] = SUB41(fVar47,0);
        auVar4[9] = uVar28;
        auVar4[10] = uVar30;
        auVar4[0xb] = uVar31;
        auVar4[0xc] = SUB41(fVar50,0);
        auVar4[0xd] = uVar32;
        auVar4[0xe] = uVar33;
        auVar4[0xf] = uVar34;
        auVar45 = NEON_ext(auVar3,auVar4,8,1);
        fVar42 = auVar45._0_4_ + fVar42;
        fVar43 = auVar45._4_4_ + fVar43;
        fVar47 = fVar42 + fVar43;
        fVar42 = fVar42 + fVar43;
        uVar22 = SUB41(fVar42,0);
        uVar24 = (undefined1)((uint)fVar42 >> 8);
        uVar26 = (undefined1)((uint)fVar42 >> 0x10);
        uVar28 = (undefined1)((uint)fVar42 >> 0x18);
        auVar5[4] = uVar22;
        auVar5._0_4_ = fVar47;
        auVar5[5] = uVar24;
        auVar5[6] = uVar26;
        auVar5[7] = uVar28;
        auVar5[8] = SUB41(fVar47,0);
        auVar5[9] = (char)((uint)fVar47 >> 8);
        auVar5[10] = (char)((uint)fVar47 >> 0x10);
        auVar5[0xb] = (char)((uint)fVar47 >> 0x18);
        auVar5[0xc] = uVar22;
        auVar5[0xd] = uVar24;
        auVar5[0xe] = uVar26;
        auVar5[0xf] = uVar28;
        auVar45 = NEON_frsqrte(auVar5,4);
        auVar52._0_4_ = auVar45._0_4_ * fVar47;
        auVar52._4_4_ = auVar45._4_4_ * fVar42;
        auVar52._8_4_ = auVar45._8_4_ * fVar47;
        uVar7 = (undefined2)(CONCAT15(uVar24,CONCAT14(uVar22,fVar47)) >> 0x20);
        auVar52._12_4_ = auVar45._12_4_ * (float)CONCAT13(uVar28,CONCAT12(uVar26,uVar7));
        auVar51 = NEON_frsqrts(auVar45,auVar52,4);
        auVar46._0_4_ = auVar45._0_4_ * auVar51._0_4_;
        auVar46._4_4_ = auVar45._4_4_ * auVar51._4_4_;
        auVar46._8_4_ = auVar45._8_4_ * auVar51._8_4_;
        auVar46._12_4_ = auVar45._12_4_ * auVar51._12_4_;
        auVar53._0_4_ = fVar47 * auVar46._0_4_;
        auVar53._4_4_ = fVar42 * auVar46._4_4_;
        auVar53._8_4_ = fVar47 * auVar46._8_4_;
        auVar53._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar26,uVar7)) * auVar46._12_4_;
        iVar15 = -(uint)(fVar47 == 0.0);
        iVar20 = -(uint)(fVar42 == 0.0);
        iVar18 = -(uint)(fVar47 == 0.0);
        auVar45 = NEON_frsqrts(auVar46,auVar53,4);
        fVar48 = fVar48 * auVar46._0_4_ * auVar45._0_4_;
        fVar55 = fVar55 * auVar46._4_4_ * auVar45._4_4_;
        fVar49 = fVar49 * auVar46._8_4_ * auVar45._8_4_;
        *(ulong *)(puVar14 + -2) =
             CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                      CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                               CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                        CONCAT14(SUB41(fVar55,0) & ~(byte)iVar20,
                                                 CONCAT13((byte)((uint)fVar48 >> 0x18) &
                                                          ~(byte)((uint)iVar15 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                                                   ~(byte)((uint)iVar15 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar48 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar15 >> 8),SUB41(fVar48,0) & ~(byte)iVar15))))))
                     );
        *puVar14 = CONCAT13((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                            CONCAT12((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                     CONCAT11((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar18 >> 8)
                                              ,SUB41(fVar49,0) & ~(byte)iVar18)));
        puVar14 = puVar14 + 0x14;
      } while (uVar1 != uVar19);
    }
  }
  return;
}

