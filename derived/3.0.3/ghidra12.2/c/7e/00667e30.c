
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00667e30(undefined8 *param_1)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  long lVar14;
  bool bVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  float fVar36;
  undefined1 auVar31 [16];
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  double dVar38;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar65;
  undefined8 uVar66;
  float fVar73;
  undefined1 auVar67 [16];
  float fVar72;
  undefined1 auVar68 [16];
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  byte bVar85;
  undefined1 uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar94;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  int iVar95;
  float fVar96;
  int iVar98;
  int iVar99;
  float fVar100;
  undefined1 auVar97 [16];
  float fVar101;
  undefined1 in_b17;
  undefined1 extraout_b17;
  undefined1 in_register_00005221;
  undefined1 extraout_var;
  undefined1 in_register_00005222;
  undefined1 extraout_var_00;
  undefined1 in_register_00005223;
  undefined1 extraout_var_01;
  undefined1 in_register_00005224;
  undefined1 extraout_var_02;
  undefined1 in_register_00005225;
  undefined1 extraout_var_03;
  undefined1 in_register_00005226;
  undefined1 extraout_var_04;
  undefined1 in_register_00005227;
  undefined1 extraout_var_05;
  float in_register_00005228;
  float fVar102;
  float in_register_0000522c;
  float fVar103;
  undefined1 in_q18 [16];
  float fVar104;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  uVar16 = in_q18._0_8_;
  if (*(int *)(param_1 + 0x10) < 1) {
    uVar18 = 0;
    if (0 < *(int *)(param_1 + 0x18)) goto LAB_00668074;
LAB_00667ed4:
    fStack_88 = (float)_UNK_04102558;
    fStack_84 = (float)((ulong)_UNK_04102558 >> 0x20);
    local_90 = (float)_DAT_04102550;
    fStack_8c = (float)((ulong)_DAT_04102550 >> 0x20);
    fVar104 = *(float *)(param_1 + 0x12);
    fVar65 = *(float *)((long)param_1 + 0x94);
    fVar54 = *(float *)(param_1 + 0x13);
    fVar55 = *(float *)((long)param_1 + 0x9c);
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
    uVar16 = in_q18._0_8_;
    auVar58 = *(undefined1 (*) [16])(param_1 + 4);
    auVar97 = *(undefined1 (*) [16])(param_1 + 6);
    auVar6 = *(undefined1 (*) [16])(param_1 + 8);
    auVar57 = NEON_ext(auVar58,auVar58,8,1);
    auVar67 = NEON_ext(auVar97,auVar97,8,1);
    auVar31 = NEON_ext(auVar6,auVar6,8,1);
    fVar89 = fStack_70 - (float)param_1[10];
    fVar94 = fStack_6c - (float)((ulong)param_1[10] >> 0x20);
    fVar53 = fStack_68 - (float)param_1[0xb];
    iVar95 = *(int *)(param_1 + 0x9bd);
    fVar29 = auVar57._0_4_ * fVar53 + auVar58._0_4_ * fVar89 + auVar58._4_4_ * fVar94;
    fVar35 = auVar67._0_4_ * fVar53 + auVar97._0_4_ * fVar89 + auVar97._4_4_ * fVar94;
    fVar36 = auVar31._0_4_ * fVar53 + auVar6._0_4_ * fVar89 + auVar6._4_4_ * fVar94;
    fVar53 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    fVar72 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    uVar48 = SUB41(fVar72,0);
    uVar49 = (undefined1)((uint)fVar72 >> 8);
    uVar50 = (undefined1)((uint)fVar72 >> 0x10);
    uVar51 = (undefined1)((uint)fVar72 >> 0x18);
    uVar56 = NEON_frsqrte(CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar53))))
                          ,4);
    fVar89 = (float)uVar56;
    fVar94 = (float)((ulong)uVar56 >> 0x20);
    fVar37 = local_80 - fVar29;
    fVar42 = fStack_7c - fVar35;
    fVar43 = fStack_78 - fVar36;
    fVar44 = fStack_74 - fStack_64;
    uVar56 = NEON_frsqrts(CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar53))))
                          ,CONCAT44(fVar94 * fVar94,fVar89 * fVar89),4);
    fVar89 = fVar89 * (float)uVar56;
    fVar94 = fVar94 * (float)((ulong)uVar56 >> 0x20);
    fVar104 = local_90 * (fVar37 - (0.0 - fVar104));
    fVar65 = fStack_8c * (fVar42 - (0.0 - fVar65));
    uVar45 = (undefined1)((uint)fVar65 >> 8);
    uVar46 = (undefined1)((uint)fVar65 >> 0x10);
    uVar47 = (undefined1)((uint)fVar65 >> 0x18);
    fVar54 = fStack_88 * (fVar43 - (0.0 - fVar54));
    fVar55 = fStack_84 * (fVar44 - (0.0 - fVar55));
    auVar97[4] = SUB41(fVar65,0);
    auVar97._0_4_ = fVar104;
    auVar97[5] = uVar45;
    auVar97[6] = uVar46;
    auVar97[7] = uVar47;
    auVar97._8_4_ = fVar54;
    auVar97._12_4_ = fVar55;
    auVar6[4] = SUB41(fVar65,0);
    auVar6._0_4_ = fVar104;
    auVar6[5] = uVar45;
    auVar6[6] = uVar46;
    auVar6[7] = uVar47;
    auVar6._8_4_ = fVar54;
    auVar6._12_4_ = fVar55;
    auVar58 = NEON_ext(auVar97,auVar6,8,1);
    in_b17 = extraout_b17;
    in_register_00005221 = extraout_var;
    in_register_00005222 = extraout_var_00;
    in_register_00005223 = extraout_var_01;
    in_register_00005224 = extraout_var_02;
    in_register_00005225 = extraout_var_03;
    in_register_00005226 = extraout_var_04;
    in_register_00005227 = extraout_var_05;
    if (iVar95 == 8) {
      auVar31._0_4_ = local_90 * fVar37;
      auVar31._4_4_ = fStack_8c * fVar42;
      auVar31._8_4_ = fStack_88 * fVar43;
      auVar31._12_4_ = fStack_84 * fVar44;
      auVar97 = NEON_ext(auVar31,auVar31,8,1);
      fVar54 = (float)param_1[0xc];
      if (fVar54 < -(fVar89 * (auVar97._0_4_ + auVar31._0_4_ + auVar31._4_4_))) {
        fVar55 = fVar89 * fVar89;
        in_b17 = SUB41(fVar55,0);
        in_register_00005221 = (undefined1)((uint)fVar55 >> 8);
        in_register_00005222 = (undefined1)((uint)fVar55 >> 0x10);
        in_register_00005223 = (undefined1)((uint)fVar55 >> 0x18);
        fVar64 = fVar94 * fVar94;
        in_register_00005224 = SUB41(fVar64,0);
        in_register_00005225 = (undefined1)((uint)fVar64 >> 8);
        in_register_00005226 = (undefined1)((uint)fVar64 >> 0x10);
        in_register_00005227 = (undefined1)((uint)fVar64 >> 0x18);
        in_register_00005228 = 0.0;
        in_register_0000522c = 0.0;
        iVar95 = -(uint)(fVar53 <= 0.0);
        iVar98 = -(uint)(fVar72 <= 0.0);
        uVar56 = NEON_frsqrts(CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar53
                                                                                      )))),
                              CONCAT17(in_register_00005227,
                                       CONCAT16(in_register_00005226,
                                                CONCAT15(in_register_00005225,
                                                         CONCAT14(in_register_00005224,fVar55)))),4)
        ;
        fVar53 = fVar89 * (float)uVar56;
        fVar94 = fVar94 * (float)((ulong)uVar56 >> 0x20);
        bVar75 = SUB41(fVar53,0) & ~(byte)iVar95;
        bVar76 = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar95 >> 8);
        bVar77 = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
        bVar78 = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
        bVar79 = SUB41(fVar94,0) & ~(byte)iVar98;
        bVar81 = (byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar98 >> 8);
        bVar83 = (byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
        bVar85 = (byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
        fVar94 = (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75)));
        fVar53 = local_90 * (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75)));
        fVar72 = fStack_8c * (float)CONCAT13(bVar85,CONCAT12(bVar83,CONCAT11(bVar81,bVar79)));
        auVar68._0_8_ = CONCAT44(fVar72,fVar53);
        auVar68._8_4_ = fStack_88 * fVar94;
        auVar68._12_4_ =
             fStack_84 *
             (float)(CONCAT17(bVar85,CONCAT16(bVar83,CONCAT15(bVar81,CONCAT14(bVar79,fVar94)))) >>
                    0x20);
        fVar53 = fVar37 * fVar53;
        fVar72 = fVar42 * fVar72;
        uVar45 = (undefined1)((uint)fVar72 >> 8);
        uVar46 = (undefined1)((uint)fVar72 >> 0x10);
        uVar47 = (undefined1)((uint)fVar72 >> 0x18);
        auVar57[4] = SUB41(fVar72,0);
        auVar57._0_4_ = fVar53;
        auVar57[5] = uVar45;
        auVar57[6] = uVar46;
        auVar57[7] = uVar47;
        auVar57._8_4_ = fVar43 * auVar68._8_4_;
        auVar57._12_4_ = fVar44 * auVar68._12_4_;
        auVar67[4] = SUB41(fVar72,0);
        auVar67._0_4_ = fVar53;
        auVar67[5] = uVar45;
        auVar67[6] = uVar46;
        auVar67[7] = uVar47;
        auVar67._8_4_ = fVar43 * auVar68._8_4_;
        auVar67._12_4_ = fVar44 * auVar68._12_4_;
        auVar97 = NEON_ext(auVar57,auVar67,8,1);
        fVar94 = -(fVar53 + fVar72 + auVar97._0_4_);
        if (fVar54 < fVar94) {
          iVar95 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          param_1[0x9c1] = auVar68._8_8_;
          param_1[0x9c0] = auVar68._0_8_;
          *(float *)(param_1 + 0x9c2) = fVar94;
          goto joined_r0x00668030;
        }
      }
      iVar95 = 8;
    }
    else {
      fVar54 = (float)param_1[0xc];
    }
joined_r0x00668030:
    if (fVar54 <= fVar89 * (fVar104 + fVar65 + auVar58._0_4_)) {
      iVar95 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar95 * 2 + 0x1b) = fStack_78;
      *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0xdc) = fStack_74;
      *(float *)(param_1 + (long)iVar95 * 2 + 0x1a) = local_80;
      *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0xd4) = fStack_7c;
      iVar95 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar95 * 2 + 0x9b) = fVar36;
      *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0x4dc) = fStack_64;
      *(float *)(param_1 + (long)iVar95 * 2 + 0x9a) = fVar29;
      *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0x4d4) = fVar35;
      fVar89 = *(float *)(param_1 + 0x12);
      fVar94 = *(float *)((long)param_1 + 0x94);
      fVar104 = *(float *)((long)param_1 + 0x9c);
      iVar95 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar95 * 2 + 0x11b) = fVar43 + *(float *)(param_1 + 0x13);
      *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0x8dc) = fVar44 + fVar104;
      *(float *)(param_1 + (long)iVar95 * 2 + 0x11a) = fVar37 + fVar89;
      *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0x8d4) = fVar42 + fVar94;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar95 = *(int *)(param_1 + 0x9bd);
    }
    if (iVar95 != 0) goto LAB_00668074;
    goto LAB_00668e00;
  }
  pfVar2 = (float *)param_1[0xe];
  pfVar3 = (float *)param_1[0xf];
  fVar89 = *pfVar2;
  fVar94 = pfVar2[1];
  fVar104 = pfVar2[2];
  fVar65 = pfVar2[3];
  fVar53 = *pfVar3;
  fVar72 = pfVar3[1];
  fVar54 = pfVar3[2];
  fVar55 = pfVar3[3];
  iVar95 = *(int *)(param_1 + 0x18);
  auVar58._0_8_ =
       CONCAT44((fVar94 - fVar72) + (float)((ulong)param_1[0x12] >> 0x20),
                (fVar89 - fVar53) + (float)param_1[0x12]);
  auVar58._8_4_ = (fVar104 - fVar54) + (float)param_1[0x13];
  auVar58._12_4_ = (fVar65 - fVar55) + (float)((ulong)param_1[0x13] >> 0x20);
  uVar18 = 1;
  param_1[(long)iVar95 * 2 + 0x11b] = auVar58._8_8_;
  param_1[(long)iVar95 * 2 + 0x11a] = auVar58._0_8_;
  iVar95 = *(int *)(param_1 + 0x18);
  *(float *)(param_1 + (long)iVar95 * 2 + 0x1b) = fVar104;
  *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0xdc) = fVar65;
  *(float *)(param_1 + (long)iVar95 * 2 + 0x1a) = fVar89;
  *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0xd4) = fVar94;
  iVar95 = *(int *)(param_1 + 0x18);
  *(float *)(param_1 + (long)iVar95 * 2 + 0x9b) = fVar54;
  *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0x4dc) = fVar55;
  *(float *)(param_1 + (long)iVar95 * 2 + 0x9a) = fVar53;
  *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0x4d4) = fVar72;
  iVar95 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar95 + 1;
  if (iVar95 + 1 < 1) goto LAB_00667ed4;
LAB_00668074:
  auVar58 = *(undefined1 (*) [16])(param_1 + 0x11a);
  auVar97 = *(undefined1 (*) [16])(param_1 + 0x12);
  fVar89 = auVar97._0_4_;
  fVar94 = auVar97._4_4_;
  fVar104 = auVar97._8_4_;
  fVar65 = auVar97._12_4_;
  if ((int)uVar18 < *(int *)(param_1 + 0x10)) {
    iVar95 = *(int *)(param_1 + 0x18);
    while( true ) {
      puVar5 = (undefined8 *)(param_1[0xe] + uVar18 * 0x10);
      uVar56 = puVar5[1];
      uVar16 = *puVar5;
      auVar6 = *(undefined1 (*) [16])(param_1[0xf] + uVar18 * 0x10);
      pfVar2 = (float *)(param_1 + (long)iVar95 * 2 + 0x11a);
      pfVar2[2] = ((float)uVar56 - auVar6._8_4_) + auVar97._8_4_;
      pfVar2[3] = ((float)((ulong)uVar56 >> 0x20) - auVar6._12_4_) + auVar97._12_4_;
      *pfVar2 = ((float)uVar16 - auVar6._0_4_) + auVar97._0_4_;
      pfVar2[1] = ((float)((ulong)uVar16 >> 0x20) - auVar6._4_4_) + auVar97._4_4_;
      iVar95 = *(int *)(param_1 + 0x18);
      param_1[(long)iVar95 * 2 + 0x1b] = uVar56;
      param_1[(long)iVar95 * 2 + 0x1a] = uVar16;
      iVar95 = *(int *)(param_1 + 0x18);
      param_1[(long)iVar95 * 2 + 0x9b] = auVar6._8_8_;
      param_1[(long)iVar95 * 2 + 0x9a] = auVar6._0_8_;
      iVar95 = *(int *)(param_1 + 0x18);
      fVar53 = *(float *)(param_1 + 0x11c) - (float)param_1[0x11a];
      in_b17 = SUB41(fVar53,0);
      in_register_00005221 = (undefined1)((uint)fVar53 >> 8);
      in_register_00005222 = (undefined1)((uint)fVar53 >> 0x10);
      in_register_00005223 = (undefined1)((uint)fVar53 >> 0x18);
      fVar72 = *(float *)((long)param_1 + 0x8e4) - (float)((ulong)param_1[0x11a] >> 0x20);
      in_register_00005224 = SUB41(fVar72,0);
      in_register_00005225 = (undefined1)((uint)fVar72 >> 8);
      in_register_00005226 = (undefined1)((uint)fVar72 >> 0x10);
      in_register_00005227 = (undefined1)((uint)fVar72 >> 0x18);
      in_register_00005228 = *(float *)(param_1 + 0x11d) - (float)param_1[0x11b];
      in_register_0000522c =
           *(float *)((long)param_1 + 0x8ec) - (float)((ulong)param_1[0x11b] >> 0x20);
      fVar54 = fVar53 * fVar53 + fVar72 * fVar72 + in_register_00005228 * in_register_00005228;
      uVar16 = CONCAT44(fVar53 * fVar53 + fVar72 * fVar72 +
                        in_register_00005228 * in_register_00005228,fVar54);
      *(int *)(param_1 + 0x18) = iVar95 + 1;
      iVar98 = iVar95 + 1;
      if (((float)param_1[0xd] < fVar54) ||
         (*(int *)(param_1 + 0x18) = iVar95, iVar98 = iVar95,
         *(int *)(param_1 + 0x10) <= (int)uVar18 + 1)) break;
      auVar97 = *(undefined1 (*) [16])(param_1 + 0x12);
      uVar18 = uVar18 + 1;
    }
    uVar18 = (ulong)((int)uVar18 + 1);
    if (1 < iVar98) goto LAB_006682a8;
LAB_0066812c:
    fVar55 = auVar58._12_4_ - fVar65;
    fVar54 = auVar58._8_4_ - fVar104;
    fVar72 = auVar58._4_4_ - fVar94;
    fVar53 = auVar58._0_4_ - fVar89;
    iVar95 = (int)uVar18;
    local_90 = 0.0 - fVar53;
    fStack_8c = 0.0 - fVar72;
    fStack_88 = 0.0 - fVar54;
    fStack_84 = 0.0 - fVar55;
    auVar23._0_4_ = fVar53 * fVar53;
    auVar23._4_4_ = fVar72 * fVar72;
    auVar23._8_4_ = fVar54 * fVar54;
    auVar23._12_4_ = fVar55 * fVar55;
    auVar97 = NEON_ext(auVar23,auVar23,8,1);
    if (auVar97._0_4_ + auVar23._0_4_ + auVar23._4_4_ < (float)param_1[0xd]) {
      fStack_88 = (float)_UNK_04102638;
      fStack_84 = (float)((ulong)_UNK_04102638 >> 0x20);
      local_90 = (float)_DAT_04102630;
      fStack_8c = (float)((ulong)_DAT_04102630 >> 0x20);
    }
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
    auVar97 = *(undefined1 (*) [16])(param_1 + 4);
    auVar6 = *(undefined1 (*) [16])(param_1 + 6);
    auVar31 = *(undefined1 (*) [16])(param_1 + 8);
    auVar67 = NEON_ext(auVar97,auVar97,8,1);
    auVar68 = NEON_ext(auVar6,auVar6,8,1);
    auVar57 = NEON_ext(auVar31,auVar31,8,1);
    fVar29 = fStack_70 - (float)param_1[10];
    fVar35 = fStack_6c - (float)((ulong)param_1[10] >> 0x20);
    fVar36 = fStack_68 - (float)param_1[0xb];
    iVar98 = *(int *)(param_1 + 0x9bd);
    fVar44 = auVar67._0_4_ * fVar36 + auVar97._0_4_ * fVar29 + auVar97._4_4_ * fVar35;
    fVar64 = auVar68._0_4_ * fVar36 + auVar6._0_4_ * fVar29 + auVar6._4_4_ * fVar35;
    auVar59._0_8_ = CONCAT44(fVar64,fVar44);
    auVar59._8_4_ = auVar57._0_4_ * fVar36 + auVar31._0_4_ * fVar29 + auVar31._4_4_ * fVar35;
    auVar59._12_4_ = fStack_64;
    fVar42 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    fVar43 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    uVar56 = CONCAT44(fVar43,fVar42);
    uVar16 = NEON_frsqrte(uVar56,4);
    fVar44 = local_80 - fVar44;
    fVar64 = fStack_7c - fVar64;
    fVar73 = fStack_78 - auVar59._8_4_;
    fVar74 = fStack_74 - fStack_64;
    fVar29 = (float)uVar16;
    fVar35 = (float)((ulong)uVar16 >> 0x20);
    fVar36 = fVar35 * fVar35;
    uVar16 = NEON_frsqrts(uVar56,CONCAT17((char)((uint)fVar36 >> 0x18),
                                          CONCAT16((char)((uint)fVar36 >> 0x10),
                                                   CONCAT15((char)((uint)fVar36 >> 8),
                                                            CONCAT14(SUB41(fVar36,0),fVar29 * fVar29
                                                                    )))),4);
    fVar29 = fVar29 * (float)uVar16;
    fVar35 = fVar35 * (float)((ulong)uVar16 >> 0x20);
    fVar36 = local_90 * (fVar44 - fVar53);
    fVar37 = fStack_8c * (fVar64 - fVar72);
    uVar45 = (undefined1)((uint)fVar37 >> 8);
    uVar46 = (undefined1)((uint)fVar37 >> 0x10);
    uVar47 = (undefined1)((uint)fVar37 >> 0x18);
    fVar87 = fStack_88 * (fVar73 - fVar54);
    fVar88 = fStack_84 * (fVar74 - fVar55);
    auVar8[4] = SUB41(fVar37,0);
    auVar8._0_4_ = fVar36;
    auVar8[5] = uVar45;
    auVar8[6] = uVar46;
    auVar8[7] = uVar47;
    auVar8._8_4_ = fVar87;
    auVar8._12_4_ = fVar88;
    auVar9[4] = SUB41(fVar37,0);
    auVar9._0_4_ = fVar36;
    auVar9[5] = uVar45;
    auVar9[6] = uVar46;
    auVar9[7] = uVar47;
    auVar9._8_4_ = fVar87;
    auVar9._12_4_ = fVar88;
    auVar97 = NEON_ext(auVar8,auVar9,8,1);
    fVar36 = fVar29 * (fVar36 + fVar37 + auVar97._0_4_);
    if (iVar98 == 8) {
      auVar90._0_4_ = local_90 * fVar44;
      auVar90._4_4_ = fStack_8c * fVar64;
      auVar90._8_4_ = fStack_88 * fVar73;
      auVar90._12_4_ = fStack_84 * fVar74;
      auVar97 = NEON_ext(auVar90,auVar90,8,1);
      fVar37 = (float)param_1[0xc];
      if (fVar37 < -(fVar29 * (auVar97._0_4_ + auVar90._0_4_ + auVar90._4_4_))) {
        fVar87 = fVar35 * fVar35;
        uVar16 = NEON_frsqrts(uVar56,CONCAT17((char)((uint)fVar87 >> 0x18),
                                              CONCAT16((char)((uint)fVar87 >> 0x10),
                                                       CONCAT15((char)((uint)fVar87 >> 8),
                                                                CONCAT14(SUB41(fVar87,0),
                                                                         fVar29 * fVar29)))),4);
        iVar98 = -(uint)(fVar42 <= 0.0);
        iVar99 = -(uint)(fVar43 <= 0.0);
        fVar87 = fVar29 * (float)uVar16;
        fVar88 = fVar35 * (float)((ulong)uVar16 >> 0x20);
        fVar96 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                                 CONCAT12((byte)((uint)fVar87 >> 0x10) &
                                          ~(byte)((uint)iVar98 >> 0x10),
                                          CONCAT11((byte)((uint)fVar87 >> 8) &
                                                   ~(byte)((uint)iVar98 >> 8),
                                                   SUB41(fVar87,0) & ~(byte)iVar98)));
        fVar101 = (float)(CONCAT17((byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18),
                                   CONCAT16((byte)((uint)fVar88 >> 0x10) &
                                            ~(byte)((uint)iVar99 >> 0x10),
                                            CONCAT15((byte)((uint)fVar88 >> 8) &
                                                     ~(byte)((uint)iVar99 >> 8),
                                                     CONCAT14(SUB41(fVar88,0) & ~(byte)iVar99,fVar96
                                                             )))) >> 0x20);
        fVar100 = fStack_8c * fVar101;
        fVar101 = fStack_84 * fVar101;
        fVar87 = fVar44 * local_90 * fVar96;
        fVar88 = fVar64 * fVar100;
        uVar45 = (undefined1)((uint)fVar88 >> 8);
        uVar46 = (undefined1)((uint)fVar88 >> 0x10);
        uVar47 = (undefined1)((uint)fVar88 >> 0x18);
        fVar102 = fVar73 * fStack_88 * fVar96;
        fVar103 = fVar74 * fVar101;
        auVar10[4] = SUB41(fVar88,0);
        auVar10._0_4_ = fVar87;
        auVar10[5] = uVar45;
        auVar10[6] = uVar46;
        auVar10[7] = uVar47;
        auVar10._8_4_ = fVar102;
        auVar10._12_4_ = fVar103;
        auVar11[4] = SUB41(fVar88,0);
        auVar11._0_4_ = fVar87;
        auVar11[5] = uVar45;
        auVar11[6] = uVar46;
        auVar11[7] = uVar47;
        auVar11._8_4_ = fVar102;
        auVar11._12_4_ = fVar103;
        auVar97 = NEON_ext(auVar10,auVar11,8,1);
        fVar87 = -(fVar87 + fVar88 + auVar97._0_4_);
        if (fVar37 < fVar87) {
          iVar98 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          *(float *)(param_1 + 0x9c1) = fStack_88 * fVar96;
          *(float *)((long)param_1 + 0x4e0c) = fVar101;
          *(float *)(param_1 + 0x9c0) = local_90 * fVar96;
          *(float *)((long)param_1 + 0x4e04) = fVar100;
          *(float *)(param_1 + 0x9c2) = fVar87;
          goto joined_r0x006685d4;
        }
      }
      iVar98 = 8;
      if (fVar36 < fVar37) goto LAB_006685d8;
LAB_00668720:
      iVar98 = *(int *)(param_1 + 0x18);
      bVar15 = true;
      *(float *)(param_1 + (long)iVar98 * 2 + 0x1b) = fStack_78;
      *(float *)((long)param_1 + (long)iVar98 * 0x10 + 0xdc) = fStack_74;
      *(float *)(param_1 + (long)iVar98 * 2 + 0x1a) = local_80;
      *(float *)((long)param_1 + (long)iVar98 * 0x10 + 0xd4) = fStack_7c;
      iVar98 = *(int *)(param_1 + 0x18);
      param_1[(long)iVar98 * 2 + 0x9b] = auVar59._8_8_;
      param_1[(long)iVar98 * 2 + 0x9a] = auVar59._0_8_;
      fVar36 = *(float *)(param_1 + 0x12);
      fVar37 = *(float *)((long)param_1 + 0x94);
      fVar87 = *(float *)((long)param_1 + 0x9c);
      iVar98 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar98 * 2 + 0x11b) = fVar73 + *(float *)(param_1 + 0x13);
      *(float *)((long)param_1 + (long)iVar98 * 0x10 + 0x8dc) = fVar74 + fVar87;
      *(float *)(param_1 + (long)iVar98 * 2 + 0x11a) = fVar44 + fVar36;
      *(float *)((long)param_1 + (long)iVar98 * 0x10 + 0x8d4) = fVar64 + fVar37;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar98 = *(int *)(param_1 + 0x9bd);
    }
    else {
      fVar37 = (float)param_1[0xc];
joined_r0x006685d4:
      if (fVar37 <= fVar36) goto LAB_00668720;
LAB_006685d8:
      bVar15 = false;
    }
    if (iVar98 == 0) goto LAB_00668e00;
    if (!bVar15) {
      iVar95 = -(uint)(fVar42 <= 0.0);
      iVar98 = -(uint)(fVar43 <= 0.0);
      uVar16 = NEON_frsqrts(uVar56,CONCAT44(fVar35 * fVar35,fVar29 * fVar29),4);
      fVar29 = (float)uVar16 * fVar29;
      fVar35 = (float)((ulong)uVar16 >> 0x20) * fVar35;
      fVar89 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                               CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar29 >> 8) &
                                                  ~(byte)((uint)iVar95 >> 8),
                                                  SUB41(fVar29,0) & ~(byte)iVar95)));
      fVar94 = (float)(CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                                CONCAT16((byte)((uint)fVar35 >> 0x10) &
                                         ~(byte)((uint)iVar98 >> 0x10),
                                         CONCAT15((byte)((uint)fVar35 >> 8) &
                                                  ~(byte)((uint)iVar98 >> 8),
                                                  CONCAT14(SUB41(fVar35,0) & ~(byte)iVar98,fVar89)))
                               ) >> 0x20);
      fStack_8c = fStack_8c * fVar94;
      fStack_84 = fStack_84 * fVar94;
      *(undefined4 *)(param_1 + 0x9bd) = 1;
      *(undefined8 *)((long)param_1 + 0x4dec) = 1;
      *(float *)(param_1 + 0x9c1) = fStack_88 * fVar89;
      *(float *)((long)param_1 + 0x4e0c) = fStack_84;
      *(float *)(param_1 + 0x9c0) = local_90 * fVar89;
      *(float *)((long)param_1 + 0x4e04) = fStack_8c;
      auVar27._0_4_ = fVar53 * local_90 * fVar89;
      auVar27._4_4_ = fVar72 * fStack_8c;
      auVar27._8_4_ = fVar54 * fStack_88 * fVar89;
      auVar27._12_4_ = fVar55 * fStack_84;
      auVar58 = NEON_ext(auVar27,auVar27,8,1);
      *(float *)(param_1 + 0x9c2) = -(auVar27._0_4_ + auVar27._4_4_ + auVar58._0_4_);
      return 0;
    }
    fVar53 = *(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x11a);
    in_b17 = SUB41(fVar53,0);
    in_register_00005221 = (undefined1)((uint)fVar53 >> 8);
    in_register_00005222 = (undefined1)((uint)fVar53 >> 0x10);
    in_register_00005223 = (undefined1)((uint)fVar53 >> 0x18);
    fVar72 = *(float *)((long)param_1 + 0x8e4) - *(float *)((long)param_1 + 0x8d4);
    in_register_00005224 = SUB41(fVar72,0);
    in_register_00005225 = (undefined1)((uint)fVar72 >> 8);
    in_register_00005226 = (undefined1)((uint)fVar72 >> 0x10);
    in_register_00005227 = (undefined1)((uint)fVar72 >> 0x18);
    in_register_00005228 = *(float *)(param_1 + 0x11d) - *(float *)(param_1 + 0x11b);
    in_register_0000522c = *(float *)((long)param_1 + 0x8ec) - *(float *)((long)param_1 + 0x8dc);
    uVar16 = CONCAT44(fVar53 * fVar53 + fVar72 * fVar72 +
                      in_register_00005228 * in_register_00005228,
                      fVar53 * fVar53 + fVar72 * fVar72 +
                      in_register_00005228 * in_register_00005228);
    if (*(int *)(param_1 + 0x10) <= iVar95) goto LAB_0066860c;
LAB_006682b4:
    iVar99 = *(int *)(param_1 + 0x18);
    lVar21 = (long)iVar95;
    do {
      iVar95 = iVar95 + 1;
      pfVar2 = (float *)(param_1[0xe] + lVar21 * 0x10);
      fVar53 = *pfVar2;
      fVar72 = pfVar2[1];
      fVar54 = pfVar2[2];
      fVar55 = pfVar2[3];
      uVar66 = param_1[0x13];
      uVar56 = param_1[0x12];
      pfVar2 = (float *)(param_1[0xf] + lVar21 * 0x10);
      fVar29 = *pfVar2;
      fVar35 = pfVar2[1];
      fVar36 = pfVar2[2];
      fVar37 = pfVar2[3];
      pfVar2 = (float *)(param_1 + (long)iVar99 * 2 + 0x11a);
      pfVar2[2] = (fVar54 - fVar36) + (float)uVar66;
      pfVar2[3] = (fVar55 - fVar37) + (float)((ulong)uVar66 >> 0x20);
      *pfVar2 = (fVar53 - fVar29) + (float)uVar56;
      pfVar2[1] = (fVar72 - fVar35) + (float)((ulong)uVar56 >> 0x20);
      iVar98 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar98 * 2 + 0x1b) = fVar54;
      *(float *)((long)param_1 + (long)iVar98 * 0x10 + 0xdc) = fVar55;
      *(float *)(param_1 + (long)iVar98 * 2 + 0x1a) = fVar53;
      *(float *)((long)param_1 + (long)iVar98 * 0x10 + 0xd4) = fVar72;
      iVar98 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar98 * 2 + 0x9b) = fVar36;
      *(float *)((long)param_1 + (long)iVar98 * 0x10 + 0x4dc) = fVar37;
      *(float *)(param_1 + (long)iVar98 * 2 + 0x9a) = fVar29;
      *(float *)((long)param_1 + (long)iVar98 * 0x10 + 0x4d4) = fVar35;
      iVar99 = *(int *)(param_1 + 0x18);
      fVar53 = *(float *)(param_1 + 0x11e) - *(float *)(param_1 + 0x11a);
      fVar72 = *(float *)((long)param_1 + 0x8f4) - *(float *)((long)param_1 + 0x8d4);
      fVar54 = *(float *)(param_1 + 0x11f) - *(float *)(param_1 + 0x11b);
      fVar55 = *(float *)((long)param_1 + 0x8fc) - *(float *)((long)param_1 + 0x8dc);
      auVar32._0_4_ = fVar53 * fVar53;
      auVar32._4_4_ = fVar72 * fVar72;
      auVar32._8_4_ = fVar54 * fVar54;
      auVar32._12_4_ = fVar55 * fVar55;
      auVar97 = NEON_ext(auVar32,auVar32,8,1);
      fVar53 = (float)CONCAT13(in_register_00005223,
                               CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17)))
               * fVar53 +
               (float)CONCAT13(in_register_00005227,
                               CONCAT12(in_register_00005226,
                                        CONCAT11(in_register_00005225,in_register_00005224))) *
               fVar72 + in_register_00005228 * fVar54;
      *(int *)(param_1 + 0x18) = iVar99 + 1;
      iVar98 = iVar99 + 1;
      if (fVar53 * fVar53 < (float)uVar16 * (auVar32._0_4_ + auVar32._4_4_ + auVar97._0_4_)) break;
      lVar21 = lVar21 + 1;
      *(int *)(param_1 + 0x18) = iVar99;
      iVar98 = iVar99;
    } while (lVar21 < *(int *)(param_1 + 0x10));
  }
  else {
    if (*(int *)(param_1 + 0x18) < 2) goto LAB_0066812c;
LAB_006682a8:
    iVar95 = (int)uVar18;
    if (iVar95 < *(int *)(param_1 + 0x10)) goto LAB_006682b4;
LAB_0066860c:
    iVar98 = *(int *)(param_1 + 0x18);
  }
  if (iVar98 == 3) {
    FUN_00668ee0(param_1);
    fVar89 = DAT_04102e78;
    lVar21 = (long)iVar95;
    do {
      while( true ) {
        if (*(int *)(param_1 + 0x10) <= lVar21) {
          return 1;
        }
        lVar14 = lVar21 * 0x10;
        lVar21 = lVar21 + 1;
        auVar58 = *(undefined1 (*) [16])(param_1[0xe] + lVar14);
        auVar97 = *(undefined1 (*) [16])(param_1[0xf] + lVar14);
        iVar95 = *(int *)(param_1 + 0x18);
        auVar39._0_8_ =
             CONCAT44((auVar58._4_4_ - auVar97._4_4_) + (float)((ulong)param_1[0x12] >> 0x20),
                      (auVar58._0_4_ - auVar97._0_4_) + (float)param_1[0x12]);
        auVar39._8_4_ = (auVar58._8_4_ - auVar97._8_4_) + (float)param_1[0x13];
        auVar39._12_4_ = (auVar58._12_4_ - auVar97._12_4_) + (float)((ulong)param_1[0x13] >> 0x20);
        param_1[(long)iVar95 * 2 + 0x11b] = auVar39._8_8_;
        param_1[(long)iVar95 * 2 + 0x11a] = auVar39._0_8_;
        iVar95 = *(int *)(param_1 + 0x18);
        param_1[(long)iVar95 * 2 + 0x1b] = auVar58._8_8_;
        param_1[(long)iVar95 * 2 + 0x1a] = auVar58._0_8_;
        iVar95 = *(int *)(param_1 + 0x18);
        param_1[(long)iVar95 * 2 + 0x9b] = auVar97._8_8_;
        param_1[(long)iVar95 * 2 + 0x9a] = auVar97._0_8_;
        iVar98 = *(int *)(param_1 + 0x18);
        uVar17 = *(uint *)(param_1 + 0x1ab);
        iVar95 = iVar98 + 1;
        *(int *)(param_1 + 0x18) = iVar95;
        if (0 < (int)uVar17) break;
        *(undefined4 *)((long)param_1 + 0x4de4) = 0;
        *(uint *)(param_1 + 0x97c) = uVar17;
LAB_00668524:
        *(int *)(param_1 + 0x18) = iVar95 + -1;
      }
      iVar95 = 0;
      uVar18 = (long)(int)uVar17;
      do {
        while( true ) {
          uVar19 = uVar18 - 1;
          fVar104 = *(float *)(param_1 + (long)iVar98 * 2 + 0x11a);
          fVar65 = *(float *)(param_1 + (long)iVar98 * 2 + 0x11b);
          fVar53 = *(float *)(param_1 + uVar19 * 2 + 0x2ac);
          fVar72 = *(float *)(param_1 + uVar19 * 2 + 0x2ad);
          fVar94 = *(float *)((long)param_1 + (long)iVar98 * 0x10 + 0x8d4) -
                   *(float *)((long)param_1 + uVar19 * 0x10 + 0x1564);
          fVar54 = *(float *)(param_1 + uVar19 * 2 + 0x3ac) * (fVar104 - fVar53) +
                   *(float *)((long)param_1 + uVar19 * 0x10 + 0x1d64) * fVar94 +
                   *(float *)(param_1 + uVar19 * 2 + 0x3ad) * (fVar65 - fVar72);
          if ((float)param_1[0x17] < ABS(fVar54)) break;
          if (fVar89 < *(float *)((long)param_1 + uVar19 * 4 + 0x2760)) {
            if (*(char *)((long)param_1 + uVar18 + 0x2b5f) == '\0') {
              FUN_00669520(param_1,uVar19 & 0xffffffff);
            }
            dVar30 = (double)(fVar104 - fVar53);
            dVar22 = (double)fVar94;
            dVar38 = (double)(fVar65 - fVar72);
            if (0.0 < (double)param_1[uVar19 * 4 + 0x57c] * dVar30 +
                      (double)param_1[uVar19 * 4 + 0x57d] * dVar22 +
                      (double)param_1[uVar19 * 4 + 0x57e] * dVar38 +
                      (double)param_1[uVar19 * 4 + 0x77c] * dVar30 +
                      (double)param_1[uVar19 * 4 + 0x77d] * dVar22 +
                      (double)param_1[uVar19 * 4 + 0x77e] * dVar38) goto LAB_006684e4;
          }
LAB_006684c8:
          *(undefined4 *)((long)param_1 + uVar19 * 4 + 0x4be4) = 0;
          uVar18 = uVar19;
          if ((long)uVar19 < 1) goto LAB_006684fc;
        }
        if (fVar54 <= 0.0) goto LAB_006684c8;
LAB_006684e4:
        iVar95 = iVar95 + 1;
        *(uint *)((long)param_1 + uVar19 * 4 + 0x4be4) = uVar17;
        uVar17 = (uint)uVar19;
        uVar18 = uVar19;
      } while (0 < (long)uVar19);
LAB_006684fc:
      *(int *)((long)param_1 + 0x4de4) = iVar95;
      *(uint *)(param_1 + 0x97c) = uVar17;
      if (iVar95 == 0) {
        iVar95 = *(int *)(param_1 + 0x18);
        goto LAB_00668524;
      }
      if (0 < iVar95) {
        *(undefined4 *)((long)param_1 + 0xd54) = 3;
        psVar1 = (short *)((long)param_1 +
                          (-(ulong)((uVar17 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                          (ulong)(uVar17 << 2) << 2) + 0xd60);
        sVar4 = *psVar1;
        *(short *)((long)param_1 + (ulong)*(byte *)(psVar1 + 1) * 2 + 0xcd4) = sVar4;
        uVar18 = (ulong)(long)(int)(uVar17 << 2) >> 2;
        *(int *)(param_1 + 0x19a) = (int)sVar4;
        psVar1 = (short *)((long)param_1 + (uVar18 << 4 | 4) + 0xd60);
        sVar4 = *psVar1;
        *(short *)((long)param_1 + (ulong)*(byte *)(psVar1 + 1) * 2 + 0xcd4) = sVar4;
        *(int *)(param_1 + 0x19a) = (int)sVar4;
        psVar1 = (short *)((long)param_1 + (uVar18 << 4 | 8) + 0xd60);
        sVar4 = *psVar1;
        *(short *)((long)param_1 + (ulong)*(byte *)(psVar1 + 1) * 2 + 0xcd4) = sVar4;
        *(int *)(param_1 + 0x19a) = (int)sVar4;
        FUN_00669110(param_1);
        return 1;
      }
    } while( true );
  }
  fVar65 = auVar58._12_4_ - fVar65;
  fVar104 = auVar58._8_4_ - fVar104;
  fVar94 = auVar58._4_4_ - fVar94;
  fVar89 = auVar58._0_4_ - fVar89;
  fVar53 = (float)CONCAT13(in_register_00005223,
                           CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17)));
  auVar13._4_8_ = 0;
  auVar13._0_4_ = fVar53;
  auVar60._0_4_ = in_register_00005228 * in_register_00005228;
  auVar60._4_4_ = 0;
  auVar60._8_4_ = fVar53 * fVar53;
  auVar60._12_4_ = 0;
  fVar72 = -(float)CONCAT13(in_register_00005227,
                            CONCAT12(in_register_00005226,
                                     CONCAT11(in_register_00005225,in_register_00005224)));
  auVar58 = NEON_ext(auVar60,auVar60,8,1);
  fVar53 = auVar58._0_4_ + auVar58._4_4_;
  fVar54 = (float)CONCAT13(in_register_00005223,
                           CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17))) *
           (float)CONCAT13(in_register_00005223,
                           CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17)));
  fVar55 = (float)CONCAT13(in_register_00005227,
                           CONCAT12(in_register_00005226,
                                    CONCAT11(in_register_00005225,in_register_00005224))) *
           (float)CONCAT13(in_register_00005227,
                           CONCAT12(in_register_00005226,
                                    CONCAT11(in_register_00005225,in_register_00005224)));
  auVar24._0_8_ =
       CONCAT44(-(uint)(fVar54 + fVar55 < auVar60._0_4_ + 0.0 + fVar53),
                -(uint)(fVar54 + fVar55 < auVar60._0_4_ + 0.0 + fVar53));
  auVar40._4_8_ = SUB128(auVar13 << 0x40,4);
  auVar40._0_4_ = -in_register_00005228;
  auVar40._12_4_ = 0;
  auVar24._8_8_ = auVar24._0_8_;
  auVar7[4] = in_b17;
  auVar7._0_4_ = fVar72;
  auVar7[5] = in_register_00005221;
  auVar7[6] = in_register_00005222;
  auVar7[7] = in_register_00005223;
  auVar7._8_8_ = 0;
  auVar25[4] = in_b17;
  auVar25._0_4_ = fVar72;
  auVar25[5] = in_register_00005221;
  auVar25[6] = in_register_00005222;
  auVar25[7] = in_register_00005223;
  auVar25._8_8_ = 0;
  auVar25 = auVar25 ^ (auVar7 ^ auVar40) & auVar24;
  fStack_88 = auVar25._8_4_;
  fStack_84 = auVar25._12_4_;
  local_90 = auVar25._0_4_;
  fStack_8c = auVar25._4_4_;
  if (0x3f < iVar98) {
    iVar95 = *(int *)(param_1 + 0x9bd);
    if (iVar95 == 0) goto LAB_00668e00;
    auVar26._0_4_ = 0.0 - local_90;
    auVar26._4_4_ = 0.0 - fStack_8c;
    auVar26._8_4_ = 0.0 - fStack_88;
    auVar26._12_4_ = 0.0 - fStack_84;
    goto LAB_006686a0;
  }
  (*(code *)**(undefined8 **)*param_1)
            ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
  auVar58 = *(undefined1 (*) [16])(param_1 + 4);
  auVar97 = *(undefined1 (*) [16])(param_1 + 6);
  auVar6 = *(undefined1 (*) [16])(param_1 + 8);
  auVar57 = NEON_ext(auVar58,auVar58,8,1);
  auVar67 = NEON_ext(auVar97,auVar97,8,1);
  auVar31 = NEON_ext(auVar6,auVar6,8,1);
  fVar53 = fStack_70 - (float)param_1[10];
  fVar72 = fStack_6c - (float)((ulong)param_1[10] >> 0x20);
  fVar54 = fStack_68 - (float)param_1[0xb];
  iVar95 = *(int *)(param_1 + 0x9bd);
  piVar20 = (int *)(param_1 + 0x9bd);
  fVar29 = auVar57._0_4_ * fVar54 + auVar58._0_4_ * fVar53 + auVar58._4_4_ * fVar72;
  fVar35 = auVar67._0_4_ * fVar54 + auVar97._0_4_ * fVar53 + auVar97._4_4_ * fVar72;
  auVar33._0_8_ = CONCAT44(fVar35,fVar29);
  auVar33._8_4_ = auVar31._0_4_ * fVar54 + auVar6._0_4_ * fVar53 + auVar6._4_4_ * fVar72;
  fVar53 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
  fVar54 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
  uVar45 = SUB41(fVar54,0);
  uVar46 = (undefined1)((uint)fVar54 >> 8);
  uVar47 = (undefined1)((uint)fVar54 >> 0x10);
  uVar48 = (undefined1)((uint)fVar54 >> 0x18);
  uVar56 = NEON_frsqrte(CONCAT17(uVar48,CONCAT16(uVar47,CONCAT15(uVar46,CONCAT14(uVar45,fVar53)))),4
                       );
  auVar33._12_4_ = fStack_64;
  fVar72 = (float)uVar56;
  fVar55 = (float)((ulong)uVar56 >> 0x20);
  fVar29 = local_80 - fVar29;
  fVar35 = fStack_7c - fVar35;
  fVar36 = fStack_78 - auVar33._8_4_;
  fVar37 = fStack_74 - fStack_64;
  uVar56 = NEON_frsqrts(CONCAT17(uVar48,CONCAT16(uVar47,CONCAT15(uVar46,CONCAT14(uVar45,fVar53)))),
                        CONCAT44(fVar55 * fVar55,fVar72 * fVar72),4);
  fVar72 = fVar72 * (float)uVar56;
  fVar55 = fVar55 * (float)((ulong)uVar56 >> 0x20);
  auVar61._0_4_ = local_90 * (fVar29 - fVar89);
  auVar61._4_4_ = fStack_8c * (fVar35 - fVar94);
  auVar61._8_4_ = fStack_88 * (fVar36 - fVar104);
  auVar61._12_4_ = fStack_84 * (fVar37 - fVar65);
  auVar58 = NEON_ext(auVar61,auVar61,8,1);
  fVar42 = fVar72 * (auVar61._0_4_ + auVar61._4_4_ + auVar58._0_4_);
  if (iVar95 == 8) {
    auVar69._0_4_ = local_90 * fVar29;
    auVar69._4_4_ = fStack_8c * fVar35;
    auVar69._8_4_ = fStack_88 * fVar36;
    auVar69._12_4_ = fStack_84 * fVar37;
    auVar58 = NEON_ext(auVar69,auVar69,8,1);
    fVar43 = (float)param_1[0xc];
    if (-(fVar72 * (auVar58._0_4_ + auVar69._0_4_ + auVar69._4_4_)) <= fVar43) {
      iVar95 = 8;
      goto joined_r0x00668944;
    }
    fVar44 = fVar55 * fVar55;
    iVar95 = -(uint)(fVar53 <= 0.0);
    iVar98 = -(uint)(fVar54 <= 0.0);
    uVar56 = NEON_frsqrts(CONCAT17(uVar48,CONCAT16(uVar47,CONCAT15(uVar46,CONCAT14(uVar45,fVar53))))
                          ,CONCAT17((char)((uint)fVar44 >> 0x18),
                                    CONCAT16((char)((uint)fVar44 >> 0x10),
                                             CONCAT15((char)((uint)fVar44 >> 8),
                                                      CONCAT14(SUB41(fVar44,0),fVar72 * fVar72)))),4
                         );
    fVar72 = fVar72 * (float)uVar56;
    fVar55 = fVar55 * (float)((ulong)uVar56 >> 0x20);
    bVar75 = SUB41(fVar72,0) & ~(byte)iVar95;
    bVar76 = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar95 >> 8);
    bVar77 = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
    bVar78 = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
    bVar79 = SUB41(fVar55,0) & ~(byte)iVar98;
    bVar81 = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar98 >> 8);
    bVar83 = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
    bVar85 = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
    fVar53 = (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75)));
    fVar72 = local_90 * (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75)));
    fVar54 = fStack_8c * (float)CONCAT13(bVar85,CONCAT12(bVar83,CONCAT11(bVar81,bVar79)));
    fVar55 = fStack_88 * fVar53;
    fVar53 = fStack_84 *
             (float)(CONCAT17(bVar85,CONCAT16(bVar83,CONCAT15(bVar81,CONCAT14(bVar79,fVar53)))) >>
                    0x20);
    auVar91._0_4_ = fVar29 * fVar72;
    auVar91._4_4_ = fVar35 * fVar54;
    auVar91._8_4_ = fVar36 * fVar55;
    auVar91._12_4_ = fVar37 * fVar53;
    auVar58 = NEON_ext(auVar91,auVar91,8,1);
    fVar44 = -(auVar91._0_4_ + auVar91._4_4_ + auVar58._0_4_);
    if (fVar44 <= fVar43) {
      iVar95 = 8;
      goto joined_r0x00668944;
    }
    iVar95 = 0;
    *piVar20 = 0;
    param_1[0x9c1] = CONCAT44(fVar53,fVar55);
    param_1[0x9c0] =
         CONCAT17((char)((uint)fVar54 >> 0x18),
                  CONCAT16((char)((uint)fVar54 >> 0x10),
                           CONCAT15((char)((uint)fVar54 >> 8),CONCAT14(SUB41(fVar54,0),fVar72))));
    *(float *)(param_1 + 0x9c2) = fVar44;
    if (fVar42 < fVar43) goto LAB_00668948;
LAB_00668d20:
    iVar95 = *(int *)(param_1 + 0x18);
    *(float *)(param_1 + (long)iVar95 * 2 + 0x1b) = fStack_78;
    *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0xdc) = fStack_74;
    *(float *)(param_1 + (long)iVar95 * 2 + 0x1a) = local_80;
    *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0xd4) = fStack_7c;
    iVar95 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar95 * 2 + 0x9b] = auVar33._8_8_;
    param_1[(long)iVar95 * 2 + 0x9a] = auVar33._0_8_;
    auVar28._0_4_ = fVar29 + *(float *)(param_1 + 0x12);
    auVar28._4_4_ = fVar35 + *(float *)((long)param_1 + 0x94);
    auVar28._8_4_ = fVar36 + *(float *)(param_1 + 0x13);
    auVar28._12_4_ = fVar37 + *(float *)((long)param_1 + 0x9c);
  }
  else {
    fVar43 = (float)param_1[0xc];
joined_r0x00668944:
    if (fVar43 <= fVar42) goto LAB_00668d20;
LAB_00668948:
    if (iVar95 == 0) {
LAB_00668e00:
      uVar16 = 1;
      goto LAB_00668e08;
    }
    auVar26._0_4_ = 0.0 - local_90;
    auVar26._4_4_ = 0.0 - fStack_8c;
    auVar26._8_4_ = 0.0 - fStack_88;
    auVar26._12_4_ = 0.0 - fStack_84;
    if (0x3f < *(int *)(param_1 + 0x18)) {
LAB_006686a0:
      fVar72 = 0.0;
      fVar54 = 0.0;
      fVar55 = 0.0;
      fVar29 = 0.0;
      piVar20 = (int *)(param_1 + 0x9bd);
      fVar89 = (float)CONCAT13(in_register_00005223,
                               CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17)))
      ;
      fVar42 = *(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x12);
      fVar43 = *(float *)((long)param_1 + 0x8e4) - *(float *)((long)param_1 + 0x94);
      fVar44 = *(float *)(param_1 + 0x11d) - *(float *)(param_1 + 0x13);
      fVar64 = *(float *)((long)param_1 + 0x8ec) - *(float *)((long)param_1 + 0x9c);
      fVar94 = (float)CONCAT13(in_register_00005227,
                               CONCAT12(in_register_00005226,
                                        CONCAT11(in_register_00005225,in_register_00005224)));
      fVar104 = in_register_00005228 * fVar44 + fVar89 * fVar42 + fVar94 * fVar43;
      uVar66 = NEON_frecpe(uVar16,4);
      uVar56 = NEON_frecps(uVar16,uVar66,4);
      fVar65 = (float)uVar66 * (float)uVar56;
      fVar53 = (float)((ulong)uVar66 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
      uVar56 = NEON_frecps(uVar16,CONCAT44(fVar53,fVar65),4);
      fVar65 = fVar65 * (float)uVar56;
      fVar53 = fVar53 * (float)((ulong)uVar56 >> 0x20);
      fVar37 = fVar65 * fVar104;
      fVar104 = fVar53 * fVar104;
      if (fVar37 < 0.0) {
        uVar56 = param_1[0xd];
        uVar45 = (undefined1)uVar56;
        uVar46 = (undefined1)((ulong)uVar56 >> 8);
        uVar47 = (undefined1)((ulong)uVar56 >> 0x10);
        uVar48 = (undefined1)((ulong)uVar56 >> 0x18);
        if ((float)uVar16 * fVar37 * fVar37 <= (float)uVar56) goto LAB_00668ab4;
      }
      else {
        uVar56 = param_1[0xd];
        uVar45 = (undefined1)uVar56;
        uVar46 = (undefined1)((ulong)uVar56 >> 8);
        uVar47 = (undefined1)((ulong)uVar56 >> 0x10);
        uVar48 = (undefined1)((ulong)uVar56 >> 0x18);
LAB_00668ab4:
        fVar72 = (float)CONCAT13(in_register_00005223,
                                 CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17)
                                         )) * fVar37;
        fVar54 = (float)CONCAT13(in_register_00005227,
                                 CONCAT12(in_register_00005226,
                                          CONCAT11(in_register_00005225,in_register_00005224))) *
                 fVar104;
        fVar55 = in_register_00005228 * fVar37;
        fVar29 = in_register_0000522c * fVar104;
      }
      auVar34._0_4_ = fVar72 - fVar42;
      auVar34._4_4_ = fVar54 - fVar43;
      auVar34._8_4_ = fVar55 - fVar44;
      auVar34._12_4_ = fVar29 - fVar64;
      fVar104 = auVar34._0_4_ * auVar34._0_4_ + auVar34._4_4_ * auVar34._4_4_ +
                auVar34._8_4_ * auVar34._8_4_;
      if (fVar104 < (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)))) {
        fVar104 = auVar26._0_4_;
        fVar65 = auVar26._4_4_;
        fVar53 = auVar26._8_4_;
        fVar72 = fVar53 * fVar53 + fVar104 * fVar104 + fVar65 * fVar65;
        fVar54 = fVar53 * fVar53 + fVar104 * fVar104 + fVar65 * fVar65;
        uVar56 = CONCAT44(fVar54,fVar72);
        uVar16 = NEON_frsqrte(uVar56,4);
        fVar89 = (float)uVar16;
        fVar94 = (float)((ulong)uVar16 >> 0x20);
        uVar16 = NEON_frsqrts(uVar56,CONCAT44(fVar94 * fVar94,fVar89 * fVar89),4);
        fVar89 = fVar89 * (float)uVar16;
        fVar94 = fVar94 * (float)((ulong)uVar16 >> 0x20);
        iVar95 = -(uint)(fVar72 <= 0.0);
        iVar98 = -(uint)(fVar54 <= 0.0);
        uVar16 = NEON_frsqrts(uVar56,CONCAT44(fVar94 * fVar94,fVar89 * fVar89),4);
        fVar89 = (float)uVar16 * fVar89;
        fVar94 = (float)((ulong)uVar16 >> 0x20) * fVar94;
        fVar72 = (float)CONCAT13((byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                                 CONCAT12((byte)((uint)fVar89 >> 0x10) &
                                          ~(byte)((uint)iVar95 >> 0x10),
                                          CONCAT11((byte)((uint)fVar89 >> 8) &
                                                   ~(byte)((uint)iVar95 >> 8),
                                                   SUB41(fVar89,0) & ~(byte)iVar95)));
        *piVar20 = 1;
        *(undefined8 *)((long)param_1 + 0x4dec) = 2;
        fVar89 = DAT_04102ef0;
        *(undefined1 *)((long)param_1 + 0xd62) = 1;
        fVar94 = (float)(CONCAT17((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                                  CONCAT16((byte)((uint)fVar94 >> 0x10) &
                                           ~(byte)((uint)iVar98 >> 0x10),
                                           CONCAT15((byte)((uint)fVar94 >> 8) &
                                                    ~(byte)((uint)iVar98 >> 8),
                                                    CONCAT14(SUB41(fVar94,0) & ~(byte)iVar98,fVar72)
                                                   ))) >> 0x20);
        *(undefined1 *)((long)param_1 + 0xd66) = 0;
        *(float *)(param_1 + 0x9c1) = fVar53 * fVar72;
        *(float *)((long)param_1 + 0x4e0c) = auVar26._12_4_ * fVar94;
        *(float *)(param_1 + 0x9c0) = fVar104 * fVar72;
        *(float *)((long)param_1 + 0x4e04) = fVar65 * fVar94;
        *(float *)(param_1 + 0x9c2) = *(float *)(param_1 + 0xc) * fVar89;
        goto LAB_00668ddc;
      }
      local_90 = auVar34._0_4_;
      fStack_8c = auVar34._4_4_;
      fStack_88 = auVar34._8_4_;
      fStack_84 = auVar34._12_4_;
      if ((float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) * fVar104 <
          *(float *)(param_1 + 0x16) * *(float *)(param_1 + 0x16) * 4.0 * (float)uVar16) {
        fVar89 = fVar89 * auVar34._0_4_ + fVar94 * auVar34._4_4_ +
                 in_register_00005228 * auVar34._8_4_;
        auVar34._0_4_ =
             auVar34._0_4_ -
             fVar65 * (float)CONCAT13(in_register_00005223,
                                      CONCAT12(in_register_00005222,
                                               CONCAT11(in_register_00005221,in_b17))) * fVar89;
        auVar34._4_4_ =
             auVar34._4_4_ -
             fVar53 * (float)CONCAT13(in_register_00005227,
                                      CONCAT12(in_register_00005226,
                                               CONCAT11(in_register_00005225,in_register_00005224)))
                      * fVar89;
        auVar34._8_4_ = auVar34._8_4_ - fVar65 * in_register_00005228 * fVar89;
        auVar34._12_4_ = auVar34._12_4_ - fVar53 * in_register_0000522c * fVar89;
        local_90 = auVar34._0_4_;
        fStack_8c = auVar34._4_4_;
        fStack_88 = auVar34._8_4_;
        fStack_84 = auVar34._12_4_;
      }
      if (*(int *)(param_1 + 0x18) < 0x40) {
        (*(code *)**(undefined8 **)*param_1)
                  ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
        auVar58 = *(undefined1 (*) [16])(param_1 + 4);
        auVar97 = *(undefined1 (*) [16])(param_1 + 6);
        auVar6 = *(undefined1 (*) [16])(param_1 + 8);
        auVar57 = NEON_ext(auVar58,auVar58,8,1);
        auVar67 = NEON_ext(auVar97,auVar97,8,1);
        auVar31 = NEON_ext(auVar6,auVar6,8,1);
        fStack_70 = fStack_70 - (float)param_1[10];
        fStack_6c = fStack_6c - (float)((ulong)param_1[10] >> 0x20);
        fStack_68 = fStack_68 - (float)param_1[0xb];
        iVar95 = *piVar20;
        auVar41._0_4_ =
             auVar57._0_4_ * fStack_68 + auVar58._0_4_ * fStack_70 + auVar58._4_4_ * fStack_6c;
        auVar41._4_4_ =
             auVar67._0_4_ * fStack_68 + auVar97._0_4_ * fStack_70 + auVar97._4_4_ * fStack_6c;
        auVar41._8_4_ =
             auVar31._0_4_ * fStack_68 + auVar6._0_4_ * fStack_70 + auVar6._4_4_ * fStack_6c;
        auVar41._12_4_ = fStack_64;
        auVar34._4_4_ = fStack_8c;
        auVar34._0_4_ = local_90;
        auVar34._8_4_ = fStack_88;
        auVar34._12_4_ = fStack_84;
        fVar104 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
        fVar65 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
        uVar80 = SUB41(fVar65,0);
        uVar82 = (undefined1)((uint)fVar65 >> 8);
        uVar84 = (undefined1)((uint)fVar65 >> 0x10);
        uVar86 = (undefined1)((uint)fVar65 >> 0x18);
        uVar16 = NEON_frsqrte(CONCAT17(uVar86,CONCAT16(uVar84,CONCAT15(uVar82,CONCAT14(uVar80,
                                                  fVar104)))),4);
        fVar89 = local_80 - auVar41._0_4_;
        uVar45 = SUB41(fVar89,0);
        uVar46 = (undefined1)((uint)fVar89 >> 8);
        uVar47 = (undefined1)((uint)fVar89 >> 0x10);
        uVar48 = (undefined1)((uint)fVar89 >> 0x18);
        fVar94 = fStack_7c - auVar41._4_4_;
        uVar49 = SUB41(fVar94,0);
        uVar50 = (undefined1)((uint)fVar94 >> 8);
        uVar51 = (undefined1)((uint)fVar94 >> 0x10);
        uVar52 = (undefined1)((uint)fVar94 >> 0x18);
        fVar35 = fStack_78 - auVar41._8_4_;
        fVar36 = fStack_74 - fStack_64;
        fVar72 = (float)uVar16;
        fVar53 = (float)((ulong)uVar16 >> 0x20);
        uVar16 = NEON_frsqrts(CONCAT17(uVar86,CONCAT16(uVar84,CONCAT15(uVar82,CONCAT14(uVar80,
                                                  fVar104)))),
                              CONCAT44(fVar53 * fVar53,fVar72 * fVar72),4);
        fVar72 = fVar72 * (float)uVar16;
        fVar53 = fVar53 * (float)((ulong)uVar16 >> 0x20);
        auVar63._0_4_ = local_90 * (fVar89 - fVar42);
        auVar63._4_4_ = fStack_8c * (fVar94 - fVar43);
        auVar63._8_4_ = fStack_88 * (fVar35 - fVar44);
        auVar63._12_4_ = fStack_84 * (fVar36 - fVar64);
        auVar58 = NEON_ext(auVar63,auVar63,8,1);
        if (iVar95 == 8) {
          auVar71._0_4_ = local_90 * fVar89;
          auVar71._4_4_ = fStack_8c * fVar94;
          auVar71._8_4_ = fStack_88 * fVar35;
          auVar71._12_4_ = fStack_84 * fVar36;
          auVar97 = NEON_ext(auVar71,auVar71,8,1);
          fVar54 = (float)param_1[0xc];
          if (fVar54 < -(fVar72 * (auVar97._0_4_ + auVar71._0_4_ + auVar71._4_4_))) {
            fVar55 = fVar53 * fVar53;
            iVar95 = -(uint)(fVar104 <= 0.0);
            iVar98 = -(uint)(fVar65 <= 0.0);
            uVar16 = NEON_frsqrts(CONCAT17(uVar86,CONCAT16(uVar84,CONCAT15(uVar82,CONCAT14(uVar80,
                                                  fVar104)))),
                                  CONCAT17((char)((uint)fVar55 >> 0x18),
                                           CONCAT16((char)((uint)fVar55 >> 0x10),
                                                    CONCAT15((char)((uint)fVar55 >> 8),
                                                             CONCAT14(SUB41(fVar55,0),
                                                                      fVar72 * fVar72)))),4);
            fVar104 = fVar72 * (float)uVar16;
            fVar53 = fVar53 * (float)((ulong)uVar16 >> 0x20);
            bVar75 = SUB41(fVar104,0) & ~(byte)iVar95;
            bVar76 = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar95 >> 8);
            bVar77 = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
            bVar78 = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
            bVar79 = SUB41(fVar53,0) & ~(byte)iVar98;
            bVar81 = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar98 >> 8);
            bVar83 = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
            bVar85 = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
            fVar104 = (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75)));
            fVar65 = local_90 * (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75)));
            fVar53 = fStack_8c * (float)CONCAT13(bVar85,CONCAT12(bVar83,CONCAT11(bVar81,bVar79)));
            fVar55 = fStack_88 * fVar104;
            fVar104 = fStack_84 *
                      (float)(CONCAT17(bVar85,CONCAT16(bVar83,CONCAT15(bVar81,CONCAT14(bVar79,
                                                  fVar104)))) >> 0x20);
            auVar93._0_4_ = fVar89 * fVar65;
            auVar93._4_4_ = fVar94 * fVar53;
            auVar93._8_4_ = fVar35 * fVar55;
            auVar93._12_4_ = fVar36 * fVar104;
            auVar97 = NEON_ext(auVar93,auVar93,8,1);
            fVar89 = -(auVar93._0_4_ + auVar93._4_4_ + auVar97._0_4_);
            if (fVar54 < fVar89) {
              iVar95 = 0;
              *piVar20 = 0;
              param_1[0x9c1] = CONCAT44(fVar104,fVar55);
              param_1[0x9c0] =
                   CONCAT17((char)((uint)fVar53 >> 0x18),
                            CONCAT16((char)((uint)fVar53 >> 0x10),
                                     CONCAT15((char)((uint)fVar53 >> 8),
                                              CONCAT14(SUB41(fVar53,0),fVar65))));
              *(float *)(param_1 + 0x9c2) = fVar89;
              goto joined_r0x00668d68;
            }
          }
          iVar95 = 8;
        }
        else {
          fVar54 = (float)param_1[0xc];
        }
joined_r0x00668d68:
        if (fVar54 <= fVar72 * (auVar63._0_4_ + auVar63._4_4_ + auVar58._0_4_)) {
          iVar95 = *(int *)(param_1 + 0x18);
          *(float *)(param_1 + (long)iVar95 * 2 + 0x1b) = fStack_78;
          *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0xdc) = fStack_74;
          *(float *)(param_1 + (long)iVar95 * 2 + 0x1a) = local_80;
          *(float *)((long)param_1 + (long)iVar95 * 0x10 + 0xd4) = fStack_7c;
          goto LAB_00668e70;
        }
      }
      *(undefined8 *)((long)param_1 + 0x4dec) = 2;
      *(undefined1 *)((long)param_1 + 0xd62) = 1;
      *(undefined1 *)((long)param_1 + 0xd66) = 0;
      if (iVar95 == 0) {
        return 0;
      }
      fVar53 = auVar34._0_4_;
      fVar72 = auVar34._4_4_;
      fVar54 = auVar34._8_4_;
      fVar104 = fVar53 * fVar53 + fVar72 * fVar72 + fVar54 * fVar54;
      fVar65 = fVar53 * fVar53 + fVar72 * fVar72 + fVar54 * fVar54;
      uVar56 = CONCAT44(fVar65,fVar104);
      uVar16 = NEON_frsqrte(uVar56,4);
      fVar89 = (float)uVar16;
      fVar94 = (float)((ulong)uVar16 >> 0x20);
      uVar16 = NEON_frsqrts(uVar56,CONCAT44(fVar94 * fVar94,fVar89 * fVar89),4);
      fVar89 = fVar89 * (float)uVar16;
      fVar94 = fVar94 * (float)((ulong)uVar16 >> 0x20);
      uVar16 = NEON_frsqrts(uVar56,CONCAT44(fVar94 * fVar94,fVar89 * fVar89),4);
      iVar95 = -(uint)(fVar104 <= 0.0);
      iVar98 = -(uint)(fVar65 <= 0.0);
      fVar89 = (float)uVar16 * fVar89;
      fVar94 = (float)((ulong)uVar16 >> 0x20) * fVar94;
      fVar89 = (float)CONCAT13((byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                               CONCAT12((byte)((uint)fVar89 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar89 >> 8) &
                                                  ~(byte)((uint)iVar95 >> 8),
                                                  SUB41(fVar89,0) & ~(byte)iVar95)));
      fVar94 = (float)(CONCAT17((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                                CONCAT16((byte)((uint)fVar94 >> 0x10) &
                                         ~(byte)((uint)iVar98 >> 0x10),
                                         CONCAT15((byte)((uint)fVar94 >> 8) &
                                                  ~(byte)((uint)iVar98 >> 8),
                                                  CONCAT14(SUB41(fVar94,0) & ~(byte)iVar98,fVar89)))
                               ) >> 0x20);
      *piVar20 = 1;
      *(float *)(param_1 + 0x9c1) = fVar54 * fVar89;
      *(float *)((long)param_1 + 0x4e0c) = auVar34._12_4_ * fVar94;
      *(float *)(param_1 + 0x9c0) = fVar53 * fVar89;
      *(float *)((long)param_1 + 0x4e04) = fVar72 * fVar94;
      *(float *)(param_1 + 0x9c2) = fVar104 * fVar89;
LAB_00668ddc:
      *(float *)(param_1 + 0x9c6) = fVar37;
      return 0;
    }
    local_90 = auVar26._0_4_;
    fStack_8c = auVar26._4_4_;
    fStack_88 = auVar26._8_4_;
    fStack_84 = auVar26._12_4_;
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
    auVar58 = *(undefined1 (*) [16])(param_1 + 4);
    auVar97 = *(undefined1 (*) [16])(param_1 + 6);
    auVar6 = *(undefined1 (*) [16])(param_1 + 8);
    auVar57 = NEON_ext(auVar58,auVar58,8,1);
    auVar67 = NEON_ext(auVar97,auVar97,8,1);
    auVar12._8_4_ = fStack_78;
    auVar12._0_8_ = CONCAT44(fStack_7c,local_80);
    auVar12._12_4_ = fStack_74;
    auVar31 = NEON_ext(auVar6,auVar6,8,1);
    fVar53 = fStack_70 - (float)param_1[10];
    fVar72 = fStack_6c - (float)((ulong)param_1[10] >> 0x20);
    fVar54 = fStack_68 - (float)param_1[0xb];
    iVar95 = *piVar20;
    auVar41._0_4_ = auVar57._0_4_ * fVar54 + auVar58._0_4_ * fVar53 + auVar58._4_4_ * fVar72;
    auVar41._4_4_ = auVar67._0_4_ * fVar54 + auVar97._0_4_ * fVar53 + auVar97._4_4_ * fVar72;
    auVar41._8_4_ = auVar31._0_4_ * fVar54 + auVar6._0_4_ * fVar53 + auVar6._4_4_ * fVar72;
    auVar41._12_4_ = fStack_64;
    auVar26._4_4_ = fStack_8c;
    auVar26._0_4_ = local_90;
    auVar26._8_4_ = fStack_88;
    auVar26._12_4_ = fStack_84;
    fVar54 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    fVar55 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    uVar80 = SUB41(fVar55,0);
    uVar82 = (undefined1)((uint)fVar55 >> 8);
    uVar84 = (undefined1)((uint)fVar55 >> 0x10);
    uVar86 = (undefined1)((uint)fVar55 >> 0x18);
    uVar56 = NEON_frsqrte(CONCAT17(uVar86,CONCAT16(uVar84,CONCAT15(uVar82,CONCAT14(uVar80,fVar54))))
                          ,4);
    fVar53 = local_80 - auVar41._0_4_;
    uVar45 = SUB41(fVar53,0);
    uVar46 = (undefined1)((uint)fVar53 >> 8);
    uVar47 = (undefined1)((uint)fVar53 >> 0x10);
    uVar48 = (undefined1)((uint)fVar53 >> 0x18);
    fVar72 = fStack_7c - auVar41._4_4_;
    uVar49 = SUB41(fVar72,0);
    uVar50 = (undefined1)((uint)fVar72 >> 8);
    uVar51 = (undefined1)((uint)fVar72 >> 0x10);
    uVar52 = (undefined1)((uint)fVar72 >> 0x18);
    fVar35 = fStack_78 - auVar41._8_4_;
    fVar36 = fStack_74 - fStack_64;
    fVar37 = (float)uVar56;
    fVar29 = (float)((ulong)uVar56 >> 0x20);
    uVar56 = NEON_frsqrts(CONCAT17(uVar86,CONCAT16(uVar84,CONCAT15(uVar82,CONCAT14(uVar80,fVar54))))
                          ,CONCAT44(fVar29 * fVar29,fVar37 * fVar37),4);
    fVar37 = fVar37 * (float)uVar56;
    fVar29 = fVar29 * (float)((ulong)uVar56 >> 0x20);
    auVar62._0_4_ = local_90 * (fVar53 - fVar89);
    auVar62._4_4_ = fStack_8c * (fVar72 - fVar94);
    auVar62._8_4_ = fStack_88 * (fVar35 - fVar104);
    auVar62._12_4_ = fStack_84 * (fVar36 - fVar65);
    auVar58 = NEON_ext(auVar62,auVar62,8,1);
    if (iVar95 == 8) {
      auVar70._0_4_ = local_90 * fVar53;
      auVar70._4_4_ = fStack_8c * fVar72;
      auVar70._8_4_ = fStack_88 * fVar35;
      auVar70._12_4_ = fStack_84 * fVar36;
      auVar97 = NEON_ext(auVar70,auVar70,8,1);
      fVar89 = (float)param_1[0xc];
      if (-(fVar37 * (auVar97._0_4_ + auVar70._0_4_ + auVar70._4_4_)) <= fVar89) {
        iVar95 = 8;
      }
      else {
        fVar94 = fVar29 * fVar29;
        iVar95 = -(uint)(fVar54 <= 0.0);
        iVar98 = -(uint)(fVar55 <= 0.0);
        uVar56 = NEON_frsqrts(CONCAT17(uVar86,CONCAT16(uVar84,CONCAT15(uVar82,CONCAT14(uVar80,fVar54
                                                                                      )))),
                              CONCAT17((char)((uint)fVar94 >> 0x18),
                                       CONCAT16((char)((uint)fVar94 >> 0x10),
                                                CONCAT15((char)((uint)fVar94 >> 8),
                                                         CONCAT14(SUB41(fVar94,0),fVar37 * fVar37)))
                                      ),4);
        fVar94 = fVar37 * (float)uVar56;
        fVar29 = fVar29 * (float)((ulong)uVar56 >> 0x20);
        bVar75 = SUB41(fVar94,0) & ~(byte)iVar95;
        bVar76 = (byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar95 >> 8);
        bVar77 = (byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
        bVar78 = (byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
        bVar79 = SUB41(fVar29,0) & ~(byte)iVar98;
        bVar81 = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar98 >> 8);
        bVar83 = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
        bVar85 = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
        fVar94 = (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75)));
        fVar104 = local_90 * (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75)));
        fVar65 = fStack_8c * (float)CONCAT13(bVar85,CONCAT12(bVar83,CONCAT11(bVar81,bVar79)));
        fVar54 = fStack_88 * fVar94;
        fVar94 = fStack_84 *
                 (float)(CONCAT17(bVar85,CONCAT16(bVar83,CONCAT15(bVar81,CONCAT14(bVar79,fVar94))))
                        >> 0x20);
        auVar92._0_4_ = fVar53 * fVar104;
        auVar92._4_4_ = fVar72 * fVar65;
        auVar92._8_4_ = fVar35 * fVar54;
        auVar92._12_4_ = fVar36 * fVar94;
        auVar97 = NEON_ext(auVar92,auVar92,8,1);
        fVar53 = -(auVar92._0_4_ + auVar92._4_4_ + auVar97._0_4_);
        if (fVar89 < fVar53) {
          iVar95 = 0;
          *piVar20 = 0;
          param_1[0x9c1] = CONCAT44(fVar94,fVar54);
          param_1[0x9c0] =
               CONCAT17((char)((uint)fVar65 >> 0x18),
                        CONCAT16((char)((uint)fVar65 >> 0x10),
                                 CONCAT15((char)((uint)fVar65 >> 8),
                                          CONCAT14(SUB41(fVar65,0),fVar104))));
          *(float *)(param_1 + 0x9c2) = fVar53;
        }
        else {
          iVar95 = 8;
        }
      }
    }
    else {
      fVar89 = (float)param_1[0xc];
    }
    if (fVar37 * (auVar62._0_4_ + auVar62._4_4_ + auVar58._0_4_) < fVar89) {
      if (iVar95 == 0) goto LAB_00668e00;
      goto LAB_006686a0;
    }
    iVar95 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar95 * 2 + 0x1b] = auVar12._8_8_;
    param_1[(long)iVar95 * 2 + 0x1a] = CONCAT44(fStack_7c,local_80);
LAB_00668e70:
    iVar95 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar95 * 2 + 0x9b] = auVar41._8_8_;
    param_1[(long)iVar95 * 2 + 0x9a] = auVar41._0_8_;
    auVar28._0_4_ =
         (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) +
         *(float *)(param_1 + 0x12);
    auVar28._4_4_ =
         (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) +
         *(float *)((long)param_1 + 0x94);
    auVar28._8_4_ = fVar35 + *(float *)(param_1 + 0x13);
    auVar28._12_4_ = fVar36 + *(float *)((long)param_1 + 0x9c);
  }
  iVar95 = *(int *)(param_1 + 0x18);
  param_1[(long)iVar95 * 2 + 0x11b] = auVar28._8_8_;
  param_1[(long)iVar95 * 2 + 0x11a] = auVar28._0_8_;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (*(int *)(param_1 + 0x9bd) != 0) {
    FUN_00668ee0(param_1);
    return 1;
  }
  uVar16 = 0x200000001;
LAB_00668e08:
  *(undefined8 *)((long)param_1 + 0x4dec) = uVar16;
  return 0;
}

