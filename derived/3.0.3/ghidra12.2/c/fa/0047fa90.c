
undefined8
FUN_0047fa90(float param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [12],undefined8 *param_4
            ,int param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar28;
  undefined8 uVar29;
  int iVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  float fVar45;
  float fVar46;
  float fVar48;
  float fVar49;
  undefined1 auVar47 [16];
  int iVar50;
  int iVar52;
  undefined1 auVar51 [16];
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar58;
  undefined8 uVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar64;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_e8;
  undefined4 uStack_e4;
  float local_e0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  
  fVar70 = (float)*(undefined8 *)(*param_3 + 8);
  uVar24 = (undefined4)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  fVar20 = (float)*(undefined8 *)*param_3;
  fVar15 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  auVar30 = *(undefined1 (*) [16])(param_3[1] + 4);
  auVar5 = *(undefined1 (*) [16])(param_3[2] + 8);
  auVar47._12_4_ = uVar24;
  auVar47._0_12_ = *param_3;
  auVar51._12_4_ = uVar24;
  auVar51._0_12_ = *param_3;
  auVar47 = NEON_ext(auVar47,auVar51,8,1);
  auVar51 = NEON_ext(auVar30,auVar30,8,1);
  fVar25 = auVar47._0_4_;
  fVar54 = auVar51._0_4_;
  auVar51 = NEON_ext(auVar5,auVar5,8,1);
  fVar49 = auVar30._0_4_;
  fVar14 = auVar30._4_4_;
  fVar16 = auVar5._4_4_;
  fVar17 = auVar5._0_4_;
  auVar47 = *param_2;
  fVar19 = (float)*(undefined8 *)(param_2[1] + 8);
  fVar23 = (float)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20);
  fVar45 = auVar51._0_4_;
  fVar46 = auVar51._4_4_;
  fVar21 = auVar47._0_4_;
  fVar22 = auVar47._4_4_;
  fVar18 = auVar47._8_4_;
  fVar55 = (float)*(undefined8 *)param_2[1];
  fVar56 = fVar25 * fVar18 + fVar20 * fVar21 + fVar15 * fVar22;
  fVar58 = fVar54 * fVar18 + fVar49 * fVar21 + fVar14 * fVar22;
  fVar59 = fVar45 * fVar18 + fVar17 * fVar21 + fVar16 * fVar22;
  fVar60 = fVar46 * fVar18 + fVar16 * fVar21 + fVar46 * fVar22;
  fVar48 = (float)((ulong)*(undefined8 *)param_2[1] >> 0x20);
  fVar67 = (float)*(undefined8 *)param_2[2];
  fVar68 = (float)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  fVar61 = fVar25 * fVar19 + fVar20 * fVar55 + fVar15 * fVar48;
  fVar64 = fVar54 * fVar19 + fVar49 * fVar55 + fVar14 * fVar48;
  fVar65 = fVar45 * fVar19 + fVar17 * fVar55 + fVar16 * fVar48;
  fVar66 = fVar46 * fVar19 + fVar16 * fVar55 + fVar46 * fVar48;
  fVar69 = (float)*(undefined8 *)(param_2[2] + 8);
  fVar25 = fVar25 * fVar69 + fVar20 * fVar67 + fVar15 * fVar68;
  fVar54 = fVar54 * fVar69 + fVar49 * fVar67 + fVar14 * fVar68;
  fVar45 = fVar45 * fVar69 + fVar17 * fVar67 + fVar16 * fVar68;
  fVar46 = fVar46 * fVar69 + fVar16 * fVar67 + fVar46 * fVar68;
  local_e0[0] = fVar25 * fVar70 + fVar61 * fVar15 + fVar56 * fVar20;
  local_e0[1] = fVar54 * fVar70 + fVar64 * fVar15 + fVar58 * fVar20;
  local_e0[2] = fVar45 * fVar70 + fVar65 * fVar15 + fVar59 * fVar20;
  local_e0[3] = fVar46 * fVar70 + fVar66 * fVar15 + fVar60 * fVar20;
  fVar20 = auVar30._8_4_;
  fVar70 = fVar25 * fVar20 + fVar61 * fVar14 + fVar56 * fVar49;
  fVar71 = fVar54 * fVar20 + fVar64 * fVar14 + fVar58 * fVar49;
  fVar72 = fVar45 * fVar20 + fVar65 * fVar14 + fVar59 * fVar49;
  fVar15 = auVar5._8_4_;
  uStack_c8 = CONCAT44(fVar46 * fVar20 + fVar66 * fVar14 + fVar60 * fVar49,fVar72);
  uStack_d0 = CONCAT44(fVar71,fVar70);
  local_c0 = fVar25 * fVar15 + fVar61 * fVar16 + fVar56 * fVar17;
  fStack_bc = fVar54 * fVar15 + fVar64 * fVar16 + fVar58 * fVar17;
  uStack_b8 = CONCAT44(fVar46 * fVar15 + fVar66 * fVar16 + fVar60 * fVar17,
                       fVar45 * fVar15 + fVar65 * fVar16 + fVar59 * fVar17);
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar22 * fVar22;
  fVar25 = auVar47._12_4_ * auVar47._12_4_;
  auVar30._4_4_ = fVar22;
  auVar30._0_4_ = fVar21;
  auVar30._8_4_ = fVar18 * fVar18;
  auVar30._12_4_ = fVar25;
  auVar5._4_4_ = fVar22;
  auVar5._0_4_ = fVar21;
  auVar5._8_4_ = fVar18 * fVar18;
  auVar5._12_4_ = fVar25;
  auVar47 = NEON_ext(auVar30,auVar5,8,1);
  auVar26._0_4_ = fVar55 * fVar55;
  auVar26._4_4_ = fVar48 * fVar48;
  auVar26._8_4_ = fVar19 * fVar19;
  auVar26._12_4_ = fVar23 * fVar23;
  auVar51 = NEON_ext(auVar26,auVar26,8,1);
  auVar27._0_4_ = fVar67 * fVar67;
  auVar27._4_4_ = fVar68 * fVar68;
  auVar27._8_4_ = fVar69 * fVar69;
  fVar25 = (float)((ulong)*(undefined8 *)(param_2[2] + 8) >> 0x20);
  auVar27._12_4_ = fVar25 * fVar25;
  auVar30 = NEON_ext(auVar27,auVar27,8,1);
  fVar54 = param_1 * param_1 *
           (auVar47._0_4_ + fVar21 + fVar22 + auVar26._0_4_ + auVar26._4_4_ + auVar51._0_4_ +
           auVar27._0_4_ + auVar27._4_4_ + auVar30._0_4_);
  fVar55 = *(float *)(PTR_DAT_04bd4c80 + 0x70);
  fVar25 = fVar55 * (fStack_bc * fStack_bc + fVar70 * fVar70 + local_c0 * local_c0);
  if ((0 < param_5) && (fVar54 <= fVar25)) {
    uVar57 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x208);
    uVar63 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x200);
    uVar62 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x218);
    uVar29 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x210);
    uVar4 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x228);
    uVar53 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x220);
    iVar12 = 1;
    do {
      uVar11 = uStack_b8;
      fVar20 = fStack_bc;
      fVar14 = local_c0;
      fVar49 = local_e0[2];
      fVar48 = local_e0[1];
      fVar25 = local_e0[0];
      fVar15 = (float)FUN_00437310(fVar70);
      fVar22 = (float)FUN_00437310(fVar14);
      fVar16 = (float)FUN_00437310(fVar20);
      fVar21 = fVar22;
      if (fVar22 <= fVar15) {
        fVar21 = fVar15;
      }
      fVar17 = 1.0;
      fVar45 = 0.0;
      uVar13 = (ulong)(fVar21 < fVar16);
      lVar1 = 1;
      if (fVar15 < fVar22 || fVar21 < fVar16) {
        lVar1 = 2;
      }
      fVar21 = *(float *)((ulong)(local_e0 + lVar1 * 4) | uVar13 << 2);
      if (fVar21 != 0.0) {
        fVar22 = ((local_e0 + lVar1 * 4)[lVar1] -
                 *(float *)((ulong)(local_e0 + uVar13 * 4) | uVar13 << 2)) / (fVar21 + fVar21);
        fVar15 = (float)FUN_004372f0(fVar22 * fVar22 + 1.0);
        fVar21 = -fVar15;
        if (0.0 <= fVar22) {
          fVar21 = fVar15;
        }
        fVar45 = 1.0 / (fVar22 + fVar21);
        fVar17 = (float)FUN_004372f0(fVar45 * fVar45 + 1.0);
        fVar17 = 1.0 / fVar17;
        fVar45 = fVar17 * fVar45;
      }
      fStack_108 = (float)uVar57;
      uStack_104 = (undefined4)((ulong)uVar57 >> 0x20);
      fStack_e8 = (float)uVar4;
      uStack_e4 = (undefined4)((ulong)uVar4 >> 0x20);
      fStack_f8 = (float)uVar62;
      uStack_f4 = (undefined4)((ulong)uVar62 >> 0x20);
      *(float *)((ulong)(local_e0 + uVar13 * 4 + -0xc) | uVar13 << 2) = fVar17;
      *(float *)((ulong)(local_e0 + lVar1 * 4 + -0xc) | uVar13 << 2) = fVar45;
      (local_e0 + uVar13 * 4 + -0xc)[lVar1] = -fVar45;
      (local_e0 + lVar1 * 4 + -0xc)[lVar1] = fVar17;
      auVar3._8_4_ = fStack_108;
      auVar3._0_8_ = uVar63;
      auVar2._8_4_ = fStack_108;
      auVar2._0_8_ = uVar63;
      fVar18 = (float)uVar63;
      fVar19 = (float)((ulong)uVar63 >> 0x20);
      auVar7._8_4_ = fStack_f8;
      auVar7._0_8_ = uVar29;
      auVar6._8_4_ = fStack_f8;
      auVar6._0_8_ = uVar29;
      auVar10._8_4_ = fStack_e8;
      auVar10._0_8_ = uVar53;
      auVar9._8_4_ = fStack_e8;
      auVar9._0_8_ = uVar53;
      auVar2._12_4_ = uStack_104;
      auVar3._12_4_ = uStack_104;
      auVar47 = NEON_ext(auVar2,auVar3,8,1);
      fVar15 = (float)((ulong)uVar29 >> 0x20);
      fVar21 = (float)uVar29;
      auVar6._12_4_ = uStack_f4;
      auVar7._12_4_ = uStack_f4;
      auVar51 = NEON_ext(auVar6,auVar7,8,1);
      fVar17 = auVar47._0_4_;
      fVar45 = auVar51._0_4_;
      fVar16 = (float)((ulong)uVar53 >> 0x20);
      fVar22 = (float)uVar53;
      auVar9._12_4_ = uStack_e4;
      auVar10._12_4_ = uStack_e4;
      auVar47 = NEON_ext(auVar9,auVar10,8,1);
      fVar61 = (float)uVar11;
      fVar46 = fVar14 * fStack_108 + fVar25 * fVar18 + fVar70 * fVar19;
      fVar23 = fVar20 * fStack_108 + fVar48 * fVar18 + fVar71 * fVar19;
      fVar56 = fVar61 * fStack_108 + fVar49 * fVar18 + fVar72 * fVar19;
      fVar58 = fVar14 * fStack_f8 + fVar25 * fVar21 + fVar70 * fVar15;
      fVar59 = fVar20 * fStack_f8 + fVar48 * fVar21 + fVar71 * fVar15;
      fVar60 = fVar61 * fStack_f8 + fVar49 * fVar21 + fVar72 * fVar15;
      fVar25 = fVar14 * fStack_e8 + fVar25 * fVar22 + fVar70 * fVar16;
      fVar48 = fVar20 * fStack_e8 + fVar48 * fVar22 + fVar71 * fVar16;
      fVar49 = fVar61 * fStack_e8 + fVar49 * fVar22 + fVar72 * fVar16;
      fVar14 = auVar47._0_4_;
      fVar20 = auVar47._4_4_;
      local_e0[0] = fVar17 * fVar56 + fVar18 * fVar46 + fVar19 * fVar23;
      local_e0[1] = fVar45 * fVar56 + fVar21 * fVar46 + fVar15 * fVar23;
      local_e0[2] = fVar14 * fVar56 + fVar22 * fVar46 + fVar16 * fVar23;
      local_e0[3] = fVar20 * fVar56 + fVar16 * fVar46 + fVar20 * fVar23;
      fVar70 = fVar17 * fVar60 + fVar18 * fVar58 + fVar19 * fVar59;
      fVar71 = fVar45 * fVar60 + fVar21 * fVar58 + fVar15 * fVar59;
      fVar72 = fVar14 * fVar60 + fVar22 * fVar58 + fVar16 * fVar59;
      local_c0 = fVar17 * fVar49 + fVar18 * fVar25 + fVar19 * fVar48;
      fStack_bc = fVar45 * fVar49 + fVar21 * fVar25 + fVar15 * fVar48;
      uStack_b8 = CONCAT44(fVar20 * fVar49 + fVar16 * fVar25 + fVar20 * fVar48,
                           fVar14 * fVar49 + fVar22 * fVar25 + fVar16 * fVar48);
      uStack_c8 = CONCAT44(fVar20 * fVar60 + fVar16 * fVar58 + fVar20 * fVar59,fVar72);
      uStack_d0 = CONCAT44(fVar71,fVar70);
      fVar58 = (float)*(undefined8 *)(*param_3 + 8);
      fVar59 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
      fVar23 = (float)*(undefined8 *)*param_3;
      fVar56 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
      fVar25 = *(float *)(param_3[1] + 4);
      fVar48 = *(float *)(param_3[1] + 8);
      fVar49 = *(float *)param_3[2];
      fVar14 = *(float *)(param_3[2] + 4);
      fVar20 = *(float *)(param_3[2] + 8);
      fVar17 = *(float *)param_3[3];
      fVar45 = *(float *)(param_3[3] + 4);
      fVar46 = *(float *)(param_3[3] + 8);
      auVar31._0_8_ =
           CONCAT44(fVar17 * fStack_f8 + fVar56 * fVar21 + fVar48 * fVar15,
                    fVar20 * fStack_f8 + fVar23 * fVar21 + fVar25 * fVar15);
      auVar31._8_4_ = fVar45 * fStack_f8 + fVar58 * fVar21 + fVar49 * fVar15;
      auVar31._12_4_ = fVar46 * fStack_f8 + fVar59 * fVar21 + fVar14 * fVar15;
      *(ulong *)(*param_3 + 8) =
           CONCAT44(fVar46 * fStack_108 + fVar59 * fVar18 + fVar14 * fVar19,
                    fVar45 * fStack_108 + fVar58 * fVar18 + fVar49 * fVar19);
      *(ulong *)*param_3 =
           CONCAT44(fVar17 * fStack_108 + fVar56 * fVar18 + fVar48 * fVar19,
                    fVar20 * fStack_108 + fVar23 * fVar18 + fVar25 * fVar19);
      *(long *)param_3[2] = auVar31._8_8_;
      *(undefined8 *)(param_3[1] + 4) = auVar31._0_8_;
      *(ulong *)(param_3[3] + 4) =
           CONCAT44(fVar46 * fStack_e8 + fVar59 * fVar22 + fVar14 * fVar16,
                    fVar45 * fStack_e8 + fVar58 * fVar22 + fVar49 * fVar16);
      *(ulong *)(param_3[2] + 8) =
           CONCAT44(fVar17 * fStack_e8 + fVar56 * fVar22 + fVar48 * fVar16,
                    fVar20 * fStack_e8 + fVar23 * fVar22 + fVar25 * fVar16);
      fVar25 = fVar55 * (fStack_bc * fStack_bc + fVar70 * fVar70 + local_c0 * local_c0);
    } while ((iVar12 < param_5) && (iVar12 = iVar12 + 1, fVar54 <= fVar25));
  }
  fVar19 = (float)*(undefined8 *)(*param_3 + 8);
  fVar46 = (float)*(undefined8 *)*param_3;
  fVar18 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  fVar20 = *(float *)(param_3[1] + 4);
  fVar21 = *(float *)(param_3[1] + 8);
  fVar15 = *(float *)param_3[2];
  fVar22 = *(float *)(param_3[2] + 4);
  fVar23 = fVar46 * fVar46 + fVar18 * fVar18 + fVar19 * fVar19;
  fVar56 = fVar46 * fVar46 + fVar18 * fVar18 + fVar19 * fVar19;
  uVar29 = CONCAT44(fVar56,fVar23);
  uVar53 = NEON_frsqrte(uVar29,4);
  fVar55 = fVar20 * fVar20 + fVar21 * fVar21 + fVar15 * fVar15;
  fVar48 = fVar20 * fVar20 + fVar21 * fVar21 + fVar15 * fVar15;
  uVar37 = SUB41(fVar48,0);
  uVar39 = (undefined1)((uint)fVar48 >> 8);
  uVar41 = (undefined1)((uint)fVar48 >> 0x10);
  uVar43 = (undefined1)((uint)fVar48 >> 0x18);
  uVar63 = NEON_frsqrte(CONCAT17(uVar43,CONCAT16(uVar41,CONCAT15(uVar39,CONCAT14(uVar37,fVar55)))),4
                       );
  fVar60 = (float)uVar53;
  fVar61 = (float)((ulong)uVar53 >> 0x20);
  fVar70 = *(float *)(param_3[2] + 8);
  fVar16 = *(float *)param_3[3];
  fVar17 = *(float *)(param_3[3] + 4);
  fVar45 = *(float *)(param_3[3] + 8);
  fVar58 = fVar70 * fVar70 + fVar16 * fVar16 + fVar17 * fVar17;
  fVar59 = fVar70 * fVar70 + fVar16 * fVar16 + fVar17 * fVar17;
  uVar53 = CONCAT44(fVar59,fVar58);
  uVar57 = NEON_frsqrte(uVar53,4);
  uVar62 = NEON_frsqrts(uVar29,CONCAT44(fVar61 * fVar61,fVar60 * fVar60),4);
  fVar60 = fVar60 * (float)uVar62;
  fVar61 = fVar61 * (float)((ulong)uVar62 >> 0x20);
  fVar49 = (float)uVar63;
  fVar14 = (float)((ulong)uVar63 >> 0x20);
  uVar63 = NEON_frsqrts(CONCAT17(uVar43,CONCAT16(uVar41,CONCAT15(uVar39,CONCAT14(uVar37,fVar55)))),
                        CONCAT44(fVar14 * fVar14,fVar49 * fVar49),4);
  fVar49 = fVar49 * (float)uVar63;
  fVar14 = fVar14 * (float)((ulong)uVar63 >> 0x20);
  fVar64 = (float)uVar57;
  fVar65 = (float)((ulong)uVar57 >> 0x20);
  uVar63 = NEON_frsqrts(uVar53,CONCAT44(fVar65 * fVar65,fVar64 * fVar64),4);
  fVar64 = fVar64 * (float)uVar63;
  fVar65 = fVar65 * (float)((ulong)uVar63 >> 0x20);
  uVar63 = NEON_frsqrts(uVar29,CONCAT44(fVar61 * fVar61,fVar60 * fVar60),4);
  iVar28 = -(uint)(fVar23 <= 0.0);
  iVar32 = -(uint)(fVar56 <= 0.0);
  fVar60 = (float)uVar63 * fVar60;
  fVar61 = (float)((ulong)uVar63 >> 0x20) * fVar61;
  uVar63 = NEON_frsqrts(CONCAT17(uVar43,CONCAT16(uVar41,CONCAT15(uVar39,CONCAT14(uVar37,fVar55)))),
                        CONCAT44(fVar14 * fVar14,fVar49 * fVar49),4);
  iVar12 = -(uint)(fVar55 <= 0.0);
  iVar8 = -(uint)(fVar48 <= 0.0);
  fVar49 = (float)uVar63 * fVar49;
  fVar14 = (float)((ulong)uVar63 >> 0x20) * fVar14;
  uVar63 = NEON_frsqrts(uVar53,CONCAT44(fVar65 * fVar65,fVar64 * fVar64),4);
  iVar50 = -(uint)(fVar58 <= 0.0);
  iVar52 = -(uint)(fVar59 <= 0.0);
  fVar64 = (float)uVar63 * fVar64;
  fVar65 = (float)((ulong)uVar63 >> 0x20) * fVar65;
  fVar48 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                           CONCAT12((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                    CONCAT11((byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                             SUB41(fVar60,0) & ~(byte)iVar28)));
  bVar33 = SUB41(fVar49,0) & ~(byte)iVar12;
  bVar34 = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar12 >> 8);
  bVar35 = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
  bVar36 = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
  bVar38 = SUB41(fVar14,0) & ~(byte)iVar8;
  bVar40 = (byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar8 >> 8);
  bVar42 = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
  bVar44 = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
  fVar55 = (float)CONCAT13(bVar36,CONCAT12(bVar35,CONCAT11(bVar34,bVar33)));
  fVar14 = (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                           CONCAT12((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10),
                                    CONCAT11((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar50 >> 8),
                                             SUB41(fVar64,0) & ~(byte)iVar50)));
  fVar49 = (float)(CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                            CONCAT16((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                     CONCAT15((byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar32 >> 8)
                                              ,CONCAT14(SUB41(fVar61,0) & ~(byte)iVar32,fVar48))))
                  >> 0x20);
  uVar63 = 0x80040200;
  if (fVar25 <= fVar54) {
    uVar63 = 0;
  }
  fVar25 = (float)(CONCAT17((byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                            CONCAT16((byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10),
                                     CONCAT15((byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar52 >> 8)
                                              ,CONCAT14(SUB41(fVar65,0) & ~(byte)iVar52,fVar14))))
                  >> 0x20);
  *(ulong *)(*param_3 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20) * fVar49,fVar19 * fVar48);
  *(ulong *)*param_3 = CONCAT44(fVar18 * fVar49,fVar46 * fVar48);
  *(float *)param_3[2] = fVar15 * fVar55;
  *(float *)(param_3[2] + 4) =
       fVar22 * (float)(CONCAT17(bVar44,CONCAT16(bVar42,CONCAT15(bVar40,CONCAT14(bVar38,fVar55))))
                       >> 0x20);
  *(float *)(param_3[1] + 4) =
       fVar20 * (float)CONCAT13(bVar36,CONCAT12(bVar35,CONCAT11(bVar34,bVar33)));
  *(float *)(param_3[1] + 8) =
       fVar21 * (float)CONCAT13(bVar44,CONCAT12(bVar42,CONCAT11(bVar40,bVar38)));
  *(ulong *)(param_3[3] + 4) = CONCAT44(fVar45 * fVar25,fVar17 * fVar14);
  *(ulong *)(param_3[2] + 8) = CONCAT44(fVar16 * fVar25,fVar70 * fVar14);
  param_4[1] = CONCAT44((int)uStack_b8,(int)uStack_b8);
  *param_4 = CONCAT44(fVar71,local_e0[0]);
  return uVar63;
}

