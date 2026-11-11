
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006434f0(float *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar18;
  float fVar19;
  float fVar26;
  float fVar28;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte bVar25;
  byte bVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar29;
  float fVar34;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar36;
  int iVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar75;
  float fVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  float fVar78;
  float fVar80;
  float fVar81;
  undefined1 auVar79 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float local_160;
  float fStack_15c;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_34;
  
  uVar5 = _DAT_0413f328;
  uVar4 = _DAT_0413f320;
  local_34 = DAT_0413f520;
  fVar15 = *param_1;
  fVar17 = param_1[1];
  uVar30 = *(undefined8 *)param_1;
  fVar18 = param_1[2];
  auVar73 = *(undefined1 (*) [16])(param_1 + 4);
  fVar19 = *(float *)*(undefined1 (*) [12])(param_1 + 8);
  fVar26 = param_1[9];
  fVar28 = param_1[10];
  auVar3 = *(undefined1 (*) [12])(param_1 + 8);
  auVar79 = *(undefined1 (*) [16])(param_1 + 0xc);
  fVar8 = (float)_DAT_0413f320;
  auVar20._0_12_ = auVar79._0_12_;
  auVar20._12_4_ = fVar8;
  fVar10 = auVar73._8_4_;
  FUN_004385d0(&local_80);
  uStack_58 = (ulong)auVar3._8_4_;
  local_60 = auVar3._0_8_;
  *(long *)(*param_2 + 8) = auVar20._8_8_;
  *(long *)*param_2 = auVar79._0_8_;
  local_80 = uVar30;
  uStack_78 = (ulong)(uint)fVar18;
  local_70 = auVar73._0_8_;
  uStack_68 = (ulong)(uint)fVar10;
  uStack_50 = auVar79._0_8_;
  uStack_48 = auVar20._8_8_;
  FUN_004385d0(&local_f0);
  FUN_004385d0(&local_130);
  FUN_004385d0(&local_b0);
  FUN_00438670(&local_130,&local_80);
  auVar11._8_8_ = _UNK_0413f418;
  auVar11._0_8_ = DAT_0413f410;
  auVar20 = NEON_ext(auVar11,auVar11,8,1);
  auVar11 = NEON_ext(auVar20,auVar11,8,1);
  uVar7 = 0;
  do {
    FUN_00438670(&local_f0,&local_130);
    FUN_0047f7d0(&local_b0,&local_f0);
    FUN_0047f980(&local_b0);
    uVar7 = uVar7 + 1;
    fVar9 = auVar11._0_4_;
    fVar14 = auVar11._4_4_;
    auVar38._0_8_ =
         CONCAT44((local_f0._4_4_ + fStack_ac) * fVar14,((float)local_f0 + local_b0) * fVar9);
    fVar16 = auVar11._8_4_;
    auVar38._8_4_ = ((float)uStack_e8 + fStack_a8) * fVar16;
    fVar51 = auVar11._12_4_;
    auVar38._12_4_ = (uStack_e8._4_4_ + fStack_a4) * fVar51;
    auVar31._0_8_ =
         CONCAT44((local_e0._4_4_ + fStack_9c) * fVar14,((float)local_e0 + local_a0) * fVar9);
    auVar31._8_4_ = ((float)uStack_d8 + fStack_98) * fVar16;
    auVar31._12_4_ = (uStack_d8._4_4_ + fStack_94) * fVar51;
    auVar44._0_8_ =
         CONCAT44((local_d0._4_4_ + fStack_8c) * fVar14,((float)local_d0 + local_90) * fVar9);
    auVar44._8_4_ = ((float)uStack_c8 + fStack_88) * fVar16;
    auVar44._12_4_ = (uStack_c8._4_4_ + fStack_84) * fVar51;
    uStack_128 = auVar38._8_8_;
    uStack_118 = auVar31._8_8_;
    uStack_108 = auVar44._8_8_;
    local_130 = auVar38._0_8_;
    local_120 = auVar31._0_8_;
    local_110 = auVar44._0_8_;
    if (0x1d < uVar7) break;
    uVar6 = FUN_0047f930(&local_130,&local_f0,&local_34);
  } while ((uVar6 & 1) == 0);
  FUN_00438670(param_2 + 0xb,&local_130);
  FUN_004385e0(&local_b0);
  FUN_004385e0(&local_130);
  FUN_004385e0(&local_f0);
  fVar9 = *(float *)param_2[0xb];
  fVar14 = *(float *)(param_2[0xb] + 4);
  fVar16 = *(float *)(param_2[0xb] + 8);
  fVar51 = *(float *)param_2[0xc];
  fVar52 = *(float *)(param_2[0xc] + 4);
  fVar54 = *(float *)(param_2[0xc] + 8);
  fVar29 = fVar9 * fVar9 + fVar14 * fVar14 + fVar16 * fVar16;
  fVar34 = fVar9 * fVar9 + fVar14 * fVar14 + fVar16 * fVar16;
  uVar30 = CONCAT44(fVar34,fVar29);
  uVar43 = NEON_frsqrte(uVar30,4);
  fVar41 = (float)uVar43;
  fVar47 = (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(uVar30,CONCAT44(fVar47 * fVar47,fVar41 * fVar41),4);
  fVar41 = fVar41 * (float)uVar43;
  fVar47 = fVar47 * (float)((ulong)uVar43 >> 0x20);
  iVar36 = -(uint)(fVar29 <= 0.0);
  iVar40 = -(uint)(fVar34 <= 0.0);
  uVar30 = NEON_frsqrts(uVar30,CONCAT44(fVar47 * fVar47,fVar41 * fVar41),4);
  fVar41 = (float)uVar30 * fVar41;
  fVar47 = (float)((ulong)uVar30 >> 0x20) * fVar47;
  fVar29 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                           CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                    CONCAT11((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                             SUB41(fVar41,0) & ~(byte)iVar36)));
  fVar9 = fVar9 * fVar29;
  fVar47 = (float)(CONCAT17((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                            CONCAT16((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                     CONCAT15((byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar40 >> 8)
                                              ,CONCAT14(SUB41(fVar47,0) & ~(byte)iVar40,fVar29))))
                  >> 0x20);
  fVar14 = fVar14 * fVar47;
  fVar16 = fVar16 * fVar29;
  fVar47 = *(float *)(param_2[0xb] + 0xc) * fVar47;
  fVar29 = fVar51 * fVar51 + fVar52 * fVar52 + fVar54 * fVar54;
  fVar34 = fVar51 * fVar51 + fVar52 * fVar52 + fVar54 * fVar54;
  uVar30 = CONCAT44(fVar34,fVar29);
  uVar43 = NEON_frsqrte(uVar30,4);
  fVar41 = (float)uVar43;
  fVar48 = (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(uVar30,CONCAT44(fVar48 * fVar48,fVar41 * fVar41),4);
  fVar41 = fVar41 * (float)uVar43;
  fVar48 = fVar48 * (float)((ulong)uVar43 >> 0x20);
  iVar36 = -(uint)(fVar29 <= 0.0);
  iVar40 = -(uint)(fVar34 <= 0.0);
  uVar30 = NEON_frsqrts(uVar30,CONCAT44(fVar48 * fVar48,fVar41 * fVar41),4);
  fVar41 = (float)uVar30 * fVar41;
  fVar48 = (float)((ulong)uVar30 >> 0x20) * fVar48;
  fVar29 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                           CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                    CONCAT11((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                             SUB41(fVar41,0) & ~(byte)iVar36)));
  fVar51 = fVar51 * fVar29;
  fVar56 = (float)(CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                            CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                     CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar40 >> 8)
                                              ,CONCAT14(SUB41(fVar48,0) & ~(byte)iVar40,fVar29))))
                  >> 0x20);
  fVar52 = fVar52 * fVar56;
  fVar54 = fVar54 * fVar29;
  fVar56 = *(float *)(param_2[0xc] + 0xc) * fVar56;
  fVar29 = *(float *)param_2[0xd];
  fVar41 = *(float *)(param_2[0xd] + 4);
  fVar34 = *(float *)(param_2[0xd] + 8);
  fVar48 = fVar29 * fVar29 + fVar41 * fVar41 + fVar34 * fVar34;
  fVar35 = fVar29 * fVar29 + fVar41 * fVar41 + fVar34 * fVar34;
  uVar30 = CONCAT44(fVar35,fVar48);
  uVar43 = NEON_frsqrte(uVar30,4);
  fVar42 = (float)uVar43;
  fVar49 = (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(uVar30,CONCAT44(fVar49 * fVar49,fVar42 * fVar42),4);
  fVar42 = fVar42 * (float)uVar43;
  fVar49 = fVar49 * (float)((ulong)uVar43 >> 0x20);
  iVar36 = -(uint)(fVar48 <= 0.0);
  iVar40 = -(uint)(fVar35 <= 0.0);
  uVar30 = NEON_frsqrts(uVar30,CONCAT44(fVar49 * fVar49,fVar42 * fVar42),4);
  fVar42 = (float)uVar30 * fVar42;
  fVar49 = (float)((ulong)uVar30 >> 0x20) * fVar49;
  fVar48 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                           CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                    CONCAT11((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                             SUB41(fVar42,0) & ~(byte)iVar36)));
  fVar42 = (float)(CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                            CONCAT16((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                     CONCAT15((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar40 >> 8)
                                              ,CONCAT14(SUB41(fVar49,0) & ~(byte)iVar40,fVar48))))
                  >> 0x20);
  fVar41 = fVar41 * fVar42;
  auVar37._0_8_ = CONCAT44(fVar41,fVar29 * fVar48);
  auVar37._8_4_ = fVar34 * fVar48;
  auVar37._12_4_ = *(float *)(param_2[0xd] + 0xc) * fVar42;
  auVar1._4_4_ = fVar52;
  auVar1._0_4_ = fVar51;
  auVar1._8_4_ = fVar54;
  auVar1._12_4_ = fVar56;
  auVar2._4_4_ = fVar52;
  auVar2._0_4_ = fVar51;
  auVar2._8_4_ = fVar54;
  auVar2._12_4_ = fVar56;
  auVar11 = NEON_ext(auVar1,auVar2,4,1);
  auVar20 = NEON_ext(auVar37,auVar37,4,1);
  auVar44 = NEON_ext(auVar20,auVar20,8,1);
  auVar38 = NEON_ext(auVar11,auVar11,8,1);
  uVar30 = NEON_rev64(auVar38._0_8_,4);
  uVar43 = NEON_rev64(auVar44._0_8_,4);
  auVar21._0_4_ = fVar51 * auVar20._0_4_ - auVar11._0_4_ * fVar29 * fVar48;
  auVar21._4_4_ = fVar52 * auVar20._4_4_ - auVar11._4_4_ * fVar41;
  auVar21._8_4_ = fVar54 * (float)uVar43 - (float)uVar30 * auVar37._8_4_;
  auVar21._12_4_ =
       fVar56 * (float)((ulong)uVar43 >> 0x20) - (float)((ulong)uVar30 >> 0x20) * auVar37._12_4_;
  auVar11 = NEON_ext(auVar21,auVar21,4,1);
  fVar29 = fVar9 * auVar11._0_4_;
  fVar41 = fVar14 * auVar11._4_4_;
  iVar36 = -(uint)(fVar29 + fVar41 + fVar16 * auVar21._0_4_ < 0.0);
  iVar40 = -(uint)(fVar29 + fVar41 + fVar16 * auVar21._0_4_ < 0.0);
  bVar25 = (byte)((uint)iVar36 >> 0x18);
  bVar27 = (byte)((uint)iVar40 >> 0x18);
  uVar6 = CONCAT17(bVar27,(uint7)(bVar25 & 0x80) << 0x18) & 0x80ffffffffffffff;
  auVar12._0_8_ =
       CONCAT17((byte)(uVar6 >> 0x38) ^ (byte)((uint)fVar14 >> 0x18),
                CONCAT16((char)((uint)fVar14 >> 0x10),
                         CONCAT15((char)((uint)fVar14 >> 8),
                                  CONCAT14(SUB41(fVar14,0),
                                           CONCAT13((byte)(uVar6 >> 0x18) ^
                                                    (byte)((uint)fVar9 >> 0x18),SUB43(fVar9,0))))));
  auVar12[8] = SUB41(fVar16,0);
  auVar12[9] = (undefined1)((uint)fVar16 >> 8);
  auVar12[10] = (undefined1)((uint)fVar16 >> 0x10);
  auVar12[0xb] = bVar25 & 0x80 ^ (byte)((uint)fVar16 >> 0x18);
  auVar12[0xc] = SUB41(fVar47,0);
  auVar12[0xd] = (undefined1)((uint)fVar47 >> 8);
  auVar12[0xe] = (undefined1)((uint)fVar47 >> 0x10);
  auVar12[0xf] = bVar27 & 0x80 ^ (byte)((uint)fVar47 >> 0x18);
  param_2[0xe][2] = iVar36 != 0 || iVar40 != 0;
  FUN_004385d0(&local_f0);
  local_f0 = auVar12._0_8_;
  uStack_e8 = auVar12._8_8_;
  local_e0 = CONCAT44(fVar52,fVar51);
  uStack_d8 = CONCAT44(fVar56,fVar54);
  local_d0 = auVar37._0_8_;
  uStack_c8 = auVar37._8_8_;
  FUN_00438440(param_2 + 1,&local_f0);
  fVar9 = *(float *)param_2[1];
  fVar14 = *(float *)(param_2[1] + 4);
  fVar16 = *(float *)(param_2[1] + 8);
  fVar51 = *(float *)(param_2[1] + 0xc);
  auVar22._0_4_ = fVar9 * fVar9;
  auVar22._4_4_ = fVar14 * fVar14;
  auVar22._8_4_ = fVar16 * fVar16;
  auVar22._12_4_ = fVar51 * fVar51;
  auVar11 = NEON_ext(auVar22,auVar22,8,1);
  fVar52 = auVar11._0_4_ + auVar11._4_4_;
  uVar30 = CONCAT44(auVar22._0_4_ + auVar22._4_4_ + fVar52,auVar22._0_4_ + auVar22._4_4_ + fVar52);
  uVar43 = NEON_frsqrte(uVar30,4);
  fVar52 = (float)uVar43;
  fVar54 = (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(uVar30,CONCAT44(fVar54 * fVar54,fVar52 * fVar52),4);
  fVar52 = fVar52 * (float)uVar43;
  fVar54 = fVar54 * (float)((ulong)uVar43 >> 0x20);
  uVar30 = NEON_frsqrts(uVar30,CONCAT44(fVar54 * fVar54,fVar52 * fVar52),4);
  fVar52 = (float)uVar30 * fVar52;
  fVar54 = (float)((ulong)uVar30 >> 0x20) * fVar54;
  auVar13._0_8_ = CONCAT44(fVar14 * fVar54,fVar9 * fVar52);
  auVar13._8_4_ = fVar16 * fVar52;
  auVar13._12_4_ = fVar51 * fVar54;
  *(long *)(param_2[1] + 8) = auVar13._8_8_;
  *(undefined8 *)param_2[1] = auVar13._0_8_;
  FUN_004385e0(&local_f0);
  FUN_004385d0(&local_f0);
  FUN_00438690(&local_f0,param_2 + 1);
  uStack_b8 = SUB168(*param_2,8);
  local_c0 = SUB168(*param_2,0);
  FUN_004385d0(&local_130);
  FUN_00482420(&local_130,&local_f0);
  local_160 = auVar73._0_4_;
  fStack_15c = auVar73._4_4_;
  fVar9 = auVar79._0_4_;
  fVar14 = auVar79._4_4_;
  fVar16 = auVar79._8_4_;
  auVar45._0_8_ =
       CONCAT44(local_130._4_4_ * fVar15 + local_120._4_4_ * fVar17 + local_110._4_4_ * fVar18 +
                fStack_fc * 0.0,
                (float)local_130 * fVar15 + (float)local_120 * fVar17 + (float)local_110 * fVar18 +
                local_100 * 0.0);
  auVar45._8_4_ =
       (float)uStack_128 * fVar15 + (float)uStack_118 * fVar17 + (float)uStack_108 * fVar18 +
       fStack_f8 * 0.0;
  auVar45._12_4_ = fVar15 * 0.0 + fVar17 * 0.0 + fVar18 * 0.0 + fVar8 * 0.0;
  auVar23._0_8_ =
       CONCAT44(local_130._4_4_ * local_160 + local_120._4_4_ * fStack_15c +
                local_110._4_4_ * fVar10 + fStack_fc * 0.0,
                (float)local_130 * local_160 + (float)local_120 * fStack_15c +
                (float)local_110 * fVar10 + local_100 * 0.0);
  auVar23._8_4_ =
       (float)uStack_128 * local_160 + (float)uStack_118 * fStack_15c + (float)uStack_108 * fVar10 +
       fStack_f8 * 0.0;
  auVar23._12_4_ = local_160 * 0.0 + fStack_15c * 0.0 + fVar10 * 0.0 + fVar8 * 0.0;
  auVar32._0_8_ =
       CONCAT44(local_130._4_4_ * fVar19 + local_120._4_4_ * fVar26 + local_110._4_4_ * fVar28 +
                fStack_fc * 0.0,
                (float)local_130 * fVar19 + (float)local_120 * fVar26 + (float)local_110 * fVar28 +
                local_100 * 0.0);
  auVar32._8_4_ =
       (float)uStack_128 * fVar19 + (float)uStack_118 * fVar26 + (float)uStack_108 * fVar28 +
       fStack_f8 * 0.0;
  auVar32._12_4_ = fVar19 * 0.0 + fVar26 * 0.0 + fVar28 * 0.0 + fVar8 * 0.0;
  auVar73._0_8_ =
       CONCAT44(local_130._4_4_ * fVar9 + local_120._4_4_ * fVar14 + local_110._4_4_ * fVar16 +
                fStack_fc * fVar8,
                (float)local_130 * fVar9 + (float)local_120 * fVar14 + (float)local_110 * fVar16 +
                local_100 * fVar8);
  auVar73._8_4_ =
       (float)uStack_128 * fVar9 + (float)uStack_118 * fVar14 + (float)uStack_108 * fVar16 +
       fStack_f8 * fVar8;
  auVar73._12_4_ = fVar9 * 0.0 + fVar14 * 0.0 + fVar16 * 0.0 + fVar8 * fVar8;
  *(long *)(param_2[3] + 8) = auVar45._8_8_;
  *(undefined8 *)param_2[3] = auVar45._0_8_;
  *(long *)(param_2[4] + 8) = auVar23._8_8_;
  *(undefined8 *)param_2[4] = auVar23._0_8_;
  *(long *)(param_2[5] + 8) = auVar32._8_8_;
  *(undefined8 *)param_2[5] = auVar32._0_8_;
  *(long *)(param_2[6] + 8) = auVar73._8_8_;
  *(undefined8 *)param_2[6] = auVar73._0_8_;
  FUN_004385e0(&local_130);
  FUN_004385e0(&local_f0);
  fVar60 = (float)*(undefined8 *)(param_2[4] + 8);
  fVar62 = (float)((ulong)*(undefined8 *)(param_2[4] + 8) >> 0x20);
  fVar57 = (float)*(undefined8 *)param_2[4];
  fVar58 = (float)((ulong)*(undefined8 *)param_2[4] >> 0x20);
  fVar19 = (float)DAT_0413f4d0;
  fVar26 = (float)((ulong)DAT_0413f4d0 >> 0x20);
  fVar28 = (float)DAT_0413f4d8;
  fVar9 = (float)((ulong)DAT_0413f4d8 >> 0x20);
  fVar10 = (float)DAT_0413f4c0;
  fVar42 = (float)*(undefined8 *)param_2[3];
  fVar15 = (float)((ulong)DAT_0413f4c0 >> 0x20);
  fVar35 = (float)((ulong)*(undefined8 *)param_2[3] >> 0x20);
  fVar17 = (float)DAT_0413f4c8;
  fVar53 = (float)*(undefined8 *)(param_2[3] + 8);
  fVar18 = (float)((ulong)DAT_0413f4c8 >> 0x20);
  fVar55 = (float)((ulong)*(undefined8 *)(param_2[3] + 8) >> 0x20);
  fVar51 = (float)DAT_0413f4e0;
  fVar64 = (float)*(undefined8 *)param_2[5];
  fVar52 = (float)((ulong)DAT_0413f4e0 >> 0x20);
  fVar59 = (float)((ulong)*(undefined8 *)param_2[5] >> 0x20);
  fVar54 = (float)DAT_0413f4e8;
  fVar61 = (float)*(undefined8 *)(param_2[5] + 8);
  fVar29 = (float)((ulong)DAT_0413f4e8 >> 0x20);
  fVar63 = (float)((ulong)*(undefined8 *)(param_2[5] + 8) >> 0x20);
  fVar41 = (float)DAT_0413f4f0;
  fVar71 = (float)*(undefined8 *)param_2[6];
  fVar34 = (float)((ulong)DAT_0413f4f0 >> 0x20);
  fVar66 = (float)((ulong)*(undefined8 *)param_2[6] >> 0x20);
  fVar47 = (float)DAT_0413f4f8;
  fVar68 = (float)*(undefined8 *)(param_2[6] + 8);
  fVar48 = (float)((ulong)DAT_0413f4f8 >> 0x20);
  fVar70 = (float)((ulong)*(undefined8 *)(param_2[6] + 8) >> 0x20);
  fVar14 = fVar10 * fVar42 + fVar57 * fVar19 + fVar64 * fVar51 + fVar71 * fVar41;
  fVar16 = fVar15 * fVar35 + fVar58 * fVar26 + fVar59 * fVar52 + fVar66 * fVar34;
  auVar33._0_8_ = CONCAT44(fVar16,fVar14);
  auVar33._8_4_ = fVar17 * fVar53 + fVar60 * fVar28 + fVar61 * fVar54 + fVar68 * fVar47;
  fVar86 = (float)((ulong)uVar5 >> 0x20);
  auVar33._12_4_ = fVar86;
  auVar73 = NEON_frecpe(auVar33,4);
  *(long *)(param_2[2] + 8) = auVar33._8_8_;
  *(undefined8 *)param_2[2] = auVar33._0_8_;
  auVar79 = NEON_frecps(auVar33,auVar73,4);
  auVar74._0_4_ = auVar73._0_4_ * auVar79._0_4_;
  auVar74._4_4_ = auVar73._4_4_ * auVar79._4_4_;
  auVar74._8_4_ = auVar73._8_4_ * auVar79._8_4_;
  auVar74._12_4_ = auVar73._12_4_ * auVar79._12_4_;
  auVar73 = NEON_frecps(auVar33,auVar74,4);
  fVar72 = auVar74._0_4_ * auVar73._0_4_;
  fVar75 = auVar74._4_4_ * auVar73._4_4_;
  fVar76 = auVar74._8_4_ * auVar73._8_4_;
  fVar78 = fVar10 * fVar72;
  fVar80 = fVar15 * fVar75;
  fVar81 = fVar17 * fVar76;
  fVar82 = fVar18 * fVar86;
  fVar83 = fVar19 * fVar72;
  fVar84 = fVar26 * fVar75;
  fVar85 = fVar28 * fVar76;
  fVar87 = fVar9 * fVar86;
  fVar88 = fVar51 * fVar72;
  fVar89 = fVar52 * fVar75;
  fVar90 = fVar54 * fVar76;
  fVar91 = fVar29 * fVar86;
  fVar72 = fVar41 * fVar72;
  fVar75 = fVar34 * fVar75;
  fVar76 = fVar47 * fVar76;
  fVar77 = fVar48 * fVar86;
  fVar56 = fVar72 * fVar55 + fVar88 * fVar53 + fVar78 * fVar42 + fVar83 * fVar35;
  fVar49 = fVar75 * fVar55 + fVar89 * fVar53 + fVar80 * fVar42 + fVar84 * fVar35;
  fVar50 = fVar76 * fVar55 + fVar90 * fVar53 + fVar81 * fVar42 + fVar85 * fVar35;
  fVar42 = fVar77 * fVar55 + fVar91 * fVar53 + fVar82 * fVar42 + fVar87 * fVar35;
  fVar35 = fVar72 * fVar62 + fVar88 * fVar60 + fVar78 * fVar57 + fVar83 * fVar58;
  fVar53 = fVar75 * fVar62 + fVar89 * fVar60 + fVar80 * fVar57 + fVar84 * fVar58;
  fVar55 = fVar76 * fVar62 + fVar90 * fVar60 + fVar81 * fVar57 + fVar85 * fVar58;
  fVar57 = fVar77 * fVar62 + fVar91 * fVar60 + fVar82 * fVar57 + fVar87 * fVar58;
  fVar65 = fVar72 * fVar70 + fVar88 * fVar68 + fVar78 * fVar71 + fVar83 * fVar66;
  fVar67 = fVar75 * fVar70 + fVar89 * fVar68 + fVar80 * fVar71 + fVar84 * fVar66;
  fVar69 = fVar76 * fVar70 + fVar90 * fVar68 + fVar81 * fVar71 + fVar85 * fVar66;
  fVar71 = fVar77 * fVar70 + fVar91 * fVar68 + fVar82 * fVar71 + fVar87 * fVar66;
  fVar58 = fVar72 * fVar63 + fVar88 * fVar61 + fVar78 * fVar64 + fVar83 * fVar59;
  fVar60 = fVar75 * fVar63 + fVar89 * fVar61 + fVar80 * fVar64 + fVar84 * fVar59;
  fVar62 = fVar76 * fVar63 + fVar90 * fVar61 + fVar81 * fVar64 + fVar85 * fVar59;
  fVar64 = fVar77 * fVar63 + fVar91 * fVar61 + fVar82 * fVar64 + fVar87 * fVar59;
  auVar79._0_4_ = ABS(fVar56 - fVar10);
  auVar79._4_4_ = ABS(fVar49 - fVar15);
  auVar79._8_4_ = ABS(fVar50 - fVar17);
  auVar79._12_4_ = ABS(fVar42 - fVar18);
  auVar24._0_4_ = ABS(fVar35 - fVar19);
  auVar24._4_4_ = ABS(fVar53 - fVar26);
  auVar24._8_4_ = ABS(fVar55 - fVar28);
  auVar24._12_4_ = ABS(fVar57 - fVar9);
  auVar39._0_4_ = ABS(fVar58 - fVar51);
  auVar39._4_4_ = ABS(fVar60 - fVar52);
  auVar39._8_4_ = ABS(fVar62 - fVar54);
  auVar39._12_4_ = ABS(fVar64 - fVar29);
  auVar46._0_4_ = ABS(fVar65 - fVar41);
  auVar46._4_4_ = ABS(fVar67 - fVar34);
  auVar46._8_4_ = ABS(fVar69 - fVar47);
  auVar46._12_4_ = ABS(fVar71 - fVar48);
  auVar73 = NEON_fmax(auVar79,auVar24,4);
  auVar79 = NEON_fmax(auVar39,auVar46,4);
  *(ulong *)(param_2[7] + 8) = CONCAT44(fVar42,fVar50);
  *(ulong *)param_2[7] = CONCAT44(fVar49,fVar56);
  *(ulong *)(param_2[8] + 8) = CONCAT44(fVar57,fVar55);
  *(ulong *)param_2[8] = CONCAT44(fVar53,fVar35);
  *(ulong *)(param_2[9] + 8) = CONCAT44(fVar64,fVar62);
  *(ulong *)param_2[9] = CONCAT44(fVar60,fVar58);
  *(ulong *)(param_2[10] + 8) = CONCAT44(fVar71,fVar69);
  *(ulong *)param_2[10] = CONCAT44(fVar67,fVar65);
  param_2[0xe][0] =
       0.001 < ABS(fVar86 - fVar86) ||
       (0.001 < ABS(auVar33._8_4_ - (float)uVar5) ||
       (0.001 < ABS(fVar14 - fVar8) || 0.001 < ABS(fVar16 - (float)((ulong)uVar4 >> 0x20))));
  auVar73 = NEON_fmax(auVar73,auVar79,4);
  param_2[0xe][1] =
       0.001 < auVar73._12_4_ ||
       (0.001 < auVar73._8_4_ || (0.001 < auVar73._0_4_ || 0.001 < auVar73._4_4_));
  FUN_004385e0(&local_80);
  return;
}

