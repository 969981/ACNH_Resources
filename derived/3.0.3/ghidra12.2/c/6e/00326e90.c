
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00326e90(undefined8 param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [12];
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  undefined1 auVar21 [16];
  ulong uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  code *pcVar34;
  code *pcVar35;
  code *pcVar36;
  code *pcVar37;
  code *pcVar38;
  code *pcVar39;
  code *pcVar40;
  code *pcVar41;
  int iVar42;
  undefined4 uVar43;
  ulong uVar44;
  undefined8 *puVar45;
  char *pcVar46;
  float *pfVar47;
  long lVar48;
  float *pfVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined1 auVar63 [12];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar103;
  float fVar104;
  undefined1 auVar102 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined1 auVar122 [16];
  undefined8 uVar123;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 local_140;
  ulong uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  long local_a0;
  float local_98;
  float fStack_94;
  undefined4 local_90;
  float local_78;
  float local_74;
  
  if (*(long *)(*(long *)(param_2 + 0x240) + 0x290) == 0) {
    pcVar34 = (code *)0x0;
    pcVar35 = (code *)0x0;
    lVar29 = *(long *)(param_2 + 0x480);
    if (lVar29 == 0) goto LAB_00326f14;
LAB_00326ee4:
    pcVar36 = *(code **)(lVar29 + 0x40);
    pcVar37 = *(code **)(lVar29 + 0x48);
    lVar29 = *(long *)(param_2 + 0x470);
    if (lVar29 != 0) goto LAB_00326ef0;
LAB_00326f24:
    pcVar39 = (code *)0x0;
    pcVar38 = (code *)0x0;
    lVar29 = *(long *)(param_2 + 0x478);
    if (lVar29 == 0) goto LAB_00326f34;
LAB_00326efc:
    pcVar40 = *(code **)(lVar29 + 0x40);
    pcVar41 = *(code **)(lVar29 + 0x48);
  }
  else {
    lVar29 = *(long *)(**(long **)(param_2 + 0x4d0) + 0x28);
    pcVar35 = *(code **)(lVar29 + 0x40);
    pcVar34 = *(code **)(lVar29 + 0x48);
    lVar29 = *(long *)(param_2 + 0x480);
    if (lVar29 != 0) goto LAB_00326ee4;
LAB_00326f14:
    pcVar37 = (code *)0x0;
    pcVar36 = (code *)0x0;
    lVar29 = *(long *)(param_2 + 0x470);
    if (lVar29 == 0) goto LAB_00326f24;
LAB_00326ef0:
    pcVar38 = *(code **)(lVar29 + 0x40);
    pcVar39 = *(code **)(lVar29 + 0x48);
    lVar29 = *(long *)(param_2 + 0x478);
    if (lVar29 != 0) goto LAB_00326efc;
LAB_00326f34:
    pcVar41 = (code *)0x0;
    pcVar40 = (code *)0x0;
  }
  if (0 < *(int *)(param_2 + 0x28)) {
    lVar29 = 0;
    uVar44 = 0;
    iVar42 = 0;
    fVar11 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
    fVar58 = *(float *)PTR_FloatPiDivided2_04bcedc0;
    uVar19 = *(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc);
    uVar78 = (undefined1)((ulong)uVar19 >> 8);
    uVar80 = (undefined1)((ulong)uVar19 >> 0x10);
    uVar82 = (undefined1)((ulong)uVar19 >> 0x18);
    fVar53 = *(float *)PTR_FloatPi_04bcedc8;
    fVar59 = -fVar58;
    fVar115 = *(float *)PTR_Float2Pi_04bcede0;
    fVar87 = -*(float *)PTR_SinCoefficients_04bcede8;
    fVar12 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4);
    fVar120 = fVar53 / *(float *)PTR_FloatDegree180_04bcedf8;
    fVar88 = -*(float *)PTR_CosCoefficients_04bcedf0;
    fVar14 = (float)uVar19;
    fVar105 = (float)*(undefined8 *)(PTR_CosCoefficients_04bcedf0 + 4);
    fVar69 = -(float)((ulong)uVar19 >> 0x20);
    fVar110 = (float)*(undefined8 *)(PTR_CosCoefficients_04bcedf0 + 0xc);
    fVar60 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4) >> 0x20);
    fVar15 = -(float)((ulong)*(undefined8 *)(PTR_CosCoefficients_04bcedf0 + 4) >> 0x20);
    fVar61 = -(float)((ulong)*(undefined8 *)(PTR_CosCoefficients_04bcedf0 + 0xc) >> 0x20);
    fVar54 = -fVar53;
    do {
      piVar1 = (int *)(*(long *)(param_2 + 0xb0) + uVar44 * 0x20);
      if (*piVar1 != 0) {
        lVar31 = *(long *)(param_2 + 0xb8);
        pfVar47 = (float *)(piVar1 + 2);
        fVar119 = *(float *)(param_2 + 0x44) - *pfVar47;
        pfVar49 = (float *)(piVar1 + 3);
        fVar121 = *pfVar49;
        uVar43 = (undefined4)uVar44;
        if (fVar121 <= fVar119) {
          if ((pcVar35 != (code *)0x0 || pcVar36 != (code *)0x0) ||
              (pcVar38 != (code *)0x0 || pcVar40 != (code *)0x0)) {
            local_b0 = *(undefined8 *)(piVar1 + 4);
            uStack_a8 = *(ulong *)(piVar1 + 6);
            local_a0 = param_2;
            local_98 = fVar119;
            fStack_94 = fVar121;
            local_90 = uVar43;
            if (pcVar35 != (code *)0x0) {
              (*pcVar35)(&local_b0);
            }
            if (pcVar36 != (code *)0x0) {
              (*pcVar36)(&local_b0);
            }
            if (pcVar38 != (code *)0x0) {
              (*pcVar38)(&local_b0);
            }
            if (pcVar40 != (code *)0x0) {
              (*pcVar40)(&local_b0);
            }
            *(undefined8 *)(*(long *)(param_2 + 0xb0) + uVar44 * 0x20 + 0x18) = 0;
            *(undefined8 *)(*(long *)(param_2 + 0xb0) + uVar44 * 0x20 + 0x10) = 0;
          }
          *piVar1 = 0;
          lVar51 = *(long *)(param_2 + 0x248);
        }
        else {
          lVar51 = uVar44 * 0x10;
          puVar45 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar51);
          fVar57 = *(float *)(puVar45 + 1);
          uVar62 = *puVar45;
          local_78 = *pfVar49;
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + lVar51);
          uStack_b8 = (ulong)*(uint *)(puVar45 + 1);
          local_d0 = *puVar2;
          uStack_c8 = (ulong)*(uint *)(puVar2 + 1);
          local_c0 = uVar62;
          local_74 = *pfVar47;
          FUN_0032e328(fVar119,param_1,&local_c0,&local_d0,&local_74,&local_78,param_2,
                       uVar44 & 0xffffffff,&local_c0,&local_d0);
          puVar45 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar51);
          *puVar45 = local_c0;
          *(int *)(puVar45 + 1) = (int)uStack_b8;
          puVar45 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + lVar51);
          *puVar45 = local_d0;
          *(int *)(puVar45 + 1) = (int)uStack_c8;
          *pfVar47 = local_74;
          *pfVar49 = local_78;
          fVar55 = local_78;
          if ((pcVar34 != (code *)0x0 || pcVar37 != (code *)0x0) ||
              (pcVar39 != (code *)0x0 || pcVar41 != (code *)0x0)) {
            lVar33 = *(long *)(param_2 + 0xb0) + uVar44 * 0x20;
            local_b0 = *(undefined8 *)(lVar33 + 0x10);
            uStack_a8 = *(ulong *)(lVar33 + 0x18);
            local_a0 = param_2;
            local_98 = fVar119;
            fStack_94 = fVar121;
            local_90 = uVar43;
            if (pcVar34 != (code *)0x0) {
              (*pcVar34)(&local_b0);
            }
            if (pcVar37 != (code *)0x0) {
              (*pcVar37)(&local_b0);
            }
            if (pcVar39 != (code *)0x0) {
              (*pcVar39)(&local_b0);
            }
            if (pcVar41 != (code *)0x0) {
              (*pcVar41)(&local_b0);
            }
            *(undefined8 *)(*(long *)(param_2 + 0xb0) + uVar44 * 0x20 + 0x10) = local_b0;
            fVar55 = *pfVar49;
          }
          *(float *)(*(long *)(param_2 + 0x1d0) + lVar51 + 0xc) = fVar55;
          *(float *)(*(long *)(param_2 + 0x1d8) + lVar51 + 0xc) = *pfVar47;
          fVar119 = (float)local_c0 - (float)uVar62;
          fVar121 = (float)((ulong)local_c0 >> 0x20) - (float)((ulong)uVar62 >> 0x20);
          fVar57 = (float)uStack_b8 - fVar57;
          fVar55 = ABS(fVar121);
          fVar89 = ABS(fVar57);
          bVar23 = false;
          bVar25 = false;
          bVar27 = false;
          if (ABS(fVar119) <= 0.01) {
            bVar23 = false;
            bVar25 = false;
            bVar27 = true;
            if (!NAN(fVar55)) {
              bVar23 = fVar55 < 0.01;
              bVar25 = fVar55 == 0.01;
              bVar27 = false;
            }
          }
          bVar24 = false;
          bVar26 = false;
          bVar28 = false;
          if (bVar25 || bVar23 != bVar27) {
            bVar24 = false;
            bVar26 = false;
            bVar28 = true;
            if (!NAN(fVar89)) {
              bVar24 = fVar89 < 0.01;
              bVar26 = fVar89 == 0.01;
              bVar28 = false;
            }
          }
          if (!bVar26 && bVar24 == bVar28) {
            puVar45 = (undefined8 *)(*(long *)(param_2 + 0x1e0) + uVar44 * 0x10);
            *puVar45 = CONCAT44(fVar121,fVar119);
            *(float *)(puVar45 + 1) = fVar57;
          }
          if (0 < *(int *)(*(long *)(param_2 + 0x240) + 0x88)) {
            lVar50 = 0;
            lVar33 = lVar31 + 0x148;
            lVar48 = lVar31;
            lVar52 = lVar31;
            do {
              pcVar46 = *(char **)(lVar48 + lVar29);
              if (pcVar46 == (char *)0x0) break;
              if (((*(long *)(pcVar46 + 0x98) != 0) &&
                  (lVar32 = *(long *)(pcVar46 + 0xa0), *(char *)(lVar32 + 0x82c) == '\0')) &&
                 (*piVar1 != 0)) {
                fVar119 = *(float *)(lVar31 + uVar44 * 0x158 + 0x80);
                if (*(float *)(pcVar46 + 0x44) == 0.0) {
                  if (*(char *)(*(long *)(pcVar46 + 0x240) + 2) == '\0') {
                    *(undefined8 *)(pcVar46 + 0x3f0) = *(undefined8 *)(pcVar46 + 0x2f0);
                    *(undefined8 *)(pcVar46 + 0x3f8) = *(undefined8 *)(pcVar46 + 0x2f8);
                    *(undefined8 *)(pcVar46 + 0x400) = *(undefined8 *)(pcVar46 + 0x300);
                    *(undefined8 *)(pcVar46 + 0x408) = *(undefined8 *)(pcVar46 + 0x308);
                    *(undefined8 *)(pcVar46 + 0x3d0) = *(undefined8 *)(pcVar46 + 0x2d0);
                    *(undefined8 *)(pcVar46 + 0x3d8) = *(undefined8 *)(pcVar46 + 0x2d8);
                    *(undefined8 *)(pcVar46 + 0x3e0) = *(undefined8 *)(pcVar46 + 0x2e0);
                    *(undefined8 *)(pcVar46 + 1000) = *(undefined8 *)(pcVar46 + 0x2e8);
                    *(undefined8 *)(pcVar46 + 0x428) = *(undefined8 *)(pcVar46 + 0x328);
                    *(undefined8 *)(pcVar46 + 0x420) = *(undefined8 *)(pcVar46 + 800);
                    *(undefined8 *)(pcVar46 + 0x418) = *(undefined8 *)(pcVar46 + 0x318);
                    *(undefined8 *)(pcVar46 + 0x410) = *(undefined8 *)(pcVar46 + 0x310);
                    *(undefined8 *)(pcVar46 + 0x448) = *(undefined8 *)(pcVar46 + 0x348);
                    *(undefined8 *)(pcVar46 + 0x440) = *(undefined8 *)(pcVar46 + 0x340);
                    *(undefined8 *)(pcVar46 + 0x438) = *(undefined8 *)(pcVar46 + 0x338);
                    *(undefined8 *)(pcVar46 + 0x430) = *(undefined8 *)(pcVar46 + 0x330);
                  }
                  else {
                    if (*(long *)(*(long *)(pcVar46 + 0x240) + 0x2a0) == 0) {
                      auVar63 = *(undefined1 (*) [12])(pcVar46 + 0x69c);
                    }
                    else {
                      auVar63._4_4_ = fVar120 * *(float *)(pcVar46 + 0x6a0);
                      auVar63._0_4_ = *(float *)(pcVar46 + 0x69c) * fVar120;
                      auVar63._8_4_ = fVar120 * *(float *)(pcVar46 + 0x6a4);
                    }
                    auVar64._0_4_ = auVar63._0_4_ - (float)(int)(auVar63._0_4_ * fVar11) * fVar115;
                    auVar64._4_4_ = auVar63._4_4_ - (float)(int)(auVar63._4_4_ * fVar11) * fVar115;
                    auVar64._8_4_ = auVar63._8_4_ - (float)(int)(auVar63._8_4_ * fVar11) * fVar115;
                    auVar64._12_4_ = 0.0 - (float)(int)(fVar11 * 0.0) * fVar115;
                    auVar70._0_4_ = -(uint)(fVar58 < auVar64._0_4_);
                    auVar70._4_4_ = -(uint)(fVar58 < auVar64._4_4_);
                    auVar70._8_4_ = -(uint)(fVar58 < auVar64._8_4_);
                    auVar70._12_4_ = -(uint)(fVar58 < auVar64._12_4_);
                    fVar121 = fVar53 - auVar64._4_4_;
                    fVar57 = fVar53 - auVar64._8_4_;
                    fVar55 = fVar53 - auVar64._12_4_;
                    auVar102[4] = SUB41(fVar121,0);
                    auVar102._0_4_ = fVar53 - auVar64._0_4_;
                    auVar102[5] = (char)((uint)fVar121 >> 8);
                    auVar102[6] = (char)((uint)fVar121 >> 0x10);
                    auVar102[7] = (char)((uint)fVar121 >> 0x18);
                    auVar102[8] = SUB41(fVar57,0);
                    auVar102[9] = (char)((uint)fVar57 >> 8);
                    auVar102[10] = (char)((uint)fVar57 >> 0x10);
                    auVar102[0xb] = (char)((uint)fVar57 >> 0x18);
                    auVar102[0xc] = SUB41(fVar55,0);
                    auVar102[0xd] = (char)((uint)fVar55 >> 8);
                    auVar102[0xe] = (char)((uint)fVar55 >> 0x10);
                    auVar102[0xf] = (char)((uint)fVar55 >> 0x18);
                    auVar64 = auVar64 ^ (auVar64 ^ auVar102) & auVar70;
                    iVar16 = -(uint)(auVar64._0_4_ < fVar59);
                    iVar17 = -(uint)(auVar64._4_4_ < fVar59);
                    bVar75 = (byte)((uint)iVar17 >> 8);
                    bVar76 = (byte)((uint)iVar17 >> 0x10);
                    bVar77 = (byte)((uint)iVar17 >> 0x18);
                    iVar18 = -(uint)(auVar64._8_4_ < fVar59);
                    bVar79 = (byte)((uint)iVar18 >> 8);
                    bVar81 = (byte)((uint)iVar18 >> 0x10);
                    bVar83 = (byte)((uint)iVar18 >> 0x18);
                    iVar20 = -(uint)(auVar64._12_4_ < fVar59);
                    bVar84 = (byte)((uint)iVar20 >> 8);
                    bVar85 = (byte)((uint)iVar20 >> 0x10);
                    bVar86 = (byte)((uint)iVar20 >> 0x18);
                    auVar71[0] = (byte)iVar16 | (byte)auVar70._0_4_;
                    auVar71[1] = (byte)((uint)iVar16 >> 8) | (byte)((uint)auVar70._0_4_ >> 8);
                    auVar71[2] = (byte)((uint)iVar16 >> 0x10) | (byte)((uint)auVar70._0_4_ >> 0x10);
                    auVar71[3] = (byte)((uint)iVar16 >> 0x18) | (byte)((uint)auVar70._0_4_ >> 0x18);
                    auVar71[4] = (byte)iVar17 | (byte)auVar70._4_4_;
                    auVar71[5] = bVar75 | (byte)((uint)auVar70._4_4_ >> 8);
                    auVar71[6] = bVar76 | (byte)((uint)auVar70._4_4_ >> 0x10);
                    auVar71[7] = bVar77 | (byte)((uint)auVar70._4_4_ >> 0x18);
                    auVar71[8] = (byte)iVar18 | (byte)auVar70._8_4_;
                    auVar71[9] = bVar79 | (byte)((uint)auVar70._8_4_ >> 8);
                    auVar71[10] = bVar81 | (byte)((uint)auVar70._8_4_ >> 0x10);
                    auVar71[0xb] = bVar83 | (byte)((uint)auVar70._8_4_ >> 0x18);
                    auVar71[0xc] = (byte)iVar20 | (byte)auVar70._12_4_;
                    auVar71[0xd] = bVar84 | (byte)((uint)auVar70._12_4_ >> 8);
                    auVar71[0xe] = bVar85 | (byte)((uint)auVar70._12_4_ >> 0x10);
                    auVar71[0xf] = bVar86 | (byte)((uint)auVar70._12_4_ >> 0x18);
                    auVar21._4_4_ = fVar54 - auVar64._4_4_;
                    auVar21._0_4_ = fVar54 - auVar64._0_4_;
                    auVar21._8_4_ = fVar54 - auVar64._8_4_;
                    auVar21._12_4_ = fVar54 - auVar64._12_4_;
                    auVar122[4] = (byte)iVar17;
                    auVar122._0_4_ = iVar16;
                    auVar122[5] = bVar75;
                    auVar122[6] = bVar76;
                    auVar122[7] = bVar77;
                    auVar122[8] = (byte)iVar18;
                    auVar122[9] = bVar79;
                    auVar122[10] = bVar81;
                    auVar122[0xb] = bVar83;
                    auVar122[0xc] = (byte)iVar20;
                    auVar122[0xd] = bVar84;
                    auVar122[0xe] = bVar85;
                    auVar122[0xf] = bVar86;
                    auVar64 = auVar64 ^ (auVar64 ^ auVar21) & auVar122;
                    fVar89 = auVar64._0_4_;
                    fVar90 = fVar89 * fVar89;
                    fVar116 = auVar64._4_4_;
                    fVar93 = fVar116 * fVar116;
                    fVar117 = auVar64._8_4_;
                    fVar97 = fVar117 * fVar117;
                    fVar118 = auVar64._12_4_;
                    fVar100 = fVar118 * fVar118;
                    auVar102 = NEON_fmov(0x3f800000,4);
                    auVar72._0_4_ =
                         auVar102._0_4_ +
                         fVar90 * (fVar61 + fVar90 * (fVar110 +
                                                     fVar90 * (fVar15 + fVar90 * (fVar105 +
                                                                                 fVar90 * fVar88))))
                    ;
                    auVar72._4_4_ =
                         auVar102._4_4_ +
                         fVar93 * (fVar61 + fVar93 * (fVar110 +
                                                     fVar93 * (fVar15 + fVar93 * (fVar105 +
                                                                                 fVar93 * fVar88))))
                    ;
                    auVar72._8_4_ =
                         auVar102._8_4_ +
                         fVar97 * (fVar61 + fVar97 * (fVar110 +
                                                     fVar97 * (fVar15 + fVar97 * (fVar105 +
                                                                                 fVar97 * fVar88))))
                    ;
                    auVar72._12_4_ =
                         auVar102._12_4_ +
                         fVar100 * (fVar61 + fVar100 * (fVar110 +
                                                       fVar100 * (fVar15 + fVar100 * (fVar105 +
                                                                                     fVar100 * 
                                                  fVar88))));
                    fVar121 = -auVar72._4_4_;
                    fVar57 = -auVar72._8_4_;
                    fVar55 = -auVar72._12_4_;
                    auVar13[4] = SUB41(fVar121,0);
                    auVar13._0_4_ = -auVar72._0_4_;
                    auVar13[5] = (char)((uint)fVar121 >> 8);
                    auVar13[6] = (char)((uint)fVar121 >> 0x10);
                    auVar13[7] = (char)((uint)fVar121 >> 0x18);
                    auVar13[8] = SUB41(fVar57,0);
                    auVar13[9] = (char)((uint)fVar57 >> 8);
                    auVar13[10] = (char)((uint)fVar57 >> 0x10);
                    auVar13[0xb] = (char)((uint)fVar57 >> 0x18);
                    auVar13[0xc] = SUB41(fVar55,0);
                    auVar13[0xd] = (char)((uint)fVar55 >> 8);
                    auVar13[0xe] = (char)((uint)fVar55 >> 0x10);
                    auVar13[0xf] = (char)((uint)fVar55 >> 0x18);
                    auVar72 = auVar72 ^ (auVar72 ^ auVar13) & auVar71;
                    fVar74 = auVar72._4_4_;
                    auVar65._0_4_ =
                         fVar89 * (auVar102._0_4_ +
                                  fVar90 * (fVar69 + fVar90 * (fVar14 + fVar90 * (fVar60 + fVar90 * 
                                                  (fVar12 + fVar90 * fVar87)))));
                    auVar65._4_4_ =
                         fVar116 * (auVar102._4_4_ +
                                   fVar93 * (fVar69 + fVar93 * ((float)(CONCAT17(uVar82,CONCAT16(
                                                  uVar80,CONCAT15(uVar78,CONCAT14((char)uVar19,
                                                                                  fVar14)))) >> 0x20
                                                  ) + fVar93 * (fVar60 + fVar93 * (fVar12 + fVar93 *
                                                                                            fVar87))
                                                  )));
                    auVar65._8_4_ =
                         fVar117 * (auVar102._8_4_ +
                                   fVar97 * (fVar69 + fVar97 * (fVar14 + fVar97 * (fVar60 + fVar97 *
                                                                                            (fVar12 
                                                  + fVar97 * fVar87)))));
                    auVar65._12_4_ =
                         fVar118 * (auVar102._12_4_ +
                                   fVar100 * (fVar69 + fVar100 * ((float)(CONCAT17(uVar82,CONCAT16(
                                                  uVar80,CONCAT15(uVar78,CONCAT14((char)uVar19,
                                                                                  fVar14)))) >> 0x20
                                                  ) + fVar100 * (fVar60 + fVar100 * (fVar12 + 
                                                  fVar100 * fVar87)))));
                    auVar122 = NEON_ext(auVar72,auVar72,8,1);
                    auVar102 = NEON_ext(auVar65,auVar65,8,1);
                    fVar57 = auVar122._0_4_;
                    fVar55 = auVar102._0_4_;
                    fVar100 = fVar74 * (float)DAT_041015a8;
                    fVar94 = (float)((ulong)DAT_041015a8 >> 0x20) * 0.0;
                    fVar101 = auVar65._4_4_ * (float)DAT_04101610;
                    fVar103 = (float)((ulong)DAT_04101610 >> 0x20) * 0.0;
                    fVar90 = auVar72._0_4_;
                    fVar121 = *(float *)(pcVar46 + 0x698);
                    fVar89 = fVar55 * fVar90 * _DAT_04101d60;
                    fVar116 = fVar57 * fVar90 * _UNK_04101d64;
                    fVar117 = fVar90 * 0.0 * _UNK_04101d68;
                    fVar118 = fVar90 * 0.0 * _UNK_04101d6c;
                    fVar93 = (float)_DAT_04102790;
                    uVar30 = (ulong)_DAT_04102790 >> 0x20;
                    fVar104 = (float)_UNK_04102798;
                    uVar22 = (ulong)_UNK_04102798 >> 0x20;
                    *(ulong *)(pcVar46 + 0x418) = CONCAT44(fVar103,fVar101);
                    *(ulong *)(pcVar46 + 0x410) = CONCAT44(fVar55 * fVar74,fVar57 * fVar74);
                    fVar89 = fVar89 + fVar57 * auVar65._4_4_ * auVar65._0_4_;
                    fVar116 = fVar116 + fVar55 * auVar65._4_4_ * auVar65._0_4_;
                    fVar117 = fVar117 + fVar100 * auVar65._0_4_;
                    fVar118 = fVar118 + fVar94 * auVar65._0_4_;
                    fVar93 = fVar55 * auVar65._0_4_ * fVar93 + fVar57 * auVar65._4_4_ * fVar90;
                    fVar97 = fVar57 * auVar65._0_4_ * (float)uVar30 +
                             fVar55 * auVar65._4_4_ * fVar90;
                    fVar100 = auVar65._0_4_ * 0.0 * fVar104 + fVar100 * fVar90;
                    fVar90 = auVar65._0_4_ * 0.0 * (float)uVar22 + fVar94 * fVar90;
                    *(float *)(pcVar46 + 0x428) = fVar117;
                    *(float *)(pcVar46 + 0x42c) = fVar118;
                    *(float *)(pcVar46 + 0x420) = fVar89;
                    *(float *)(pcVar46 + 0x424) = fVar116;
                    fVar94 = (float)*(undefined8 *)(pcVar46 + 0x690);
                    fVar104 = (float)((ulong)*(undefined8 *)(pcVar46 + 0x690) >> 0x20);
                    *(float *)(pcVar46 + 0x438) = fVar100;
                    *(float *)(pcVar46 + 0x43c) = fVar90;
                    *(float *)(pcVar46 + 0x430) = fVar93;
                    *(float *)(pcVar46 + 0x434) = fVar97;
                    *(ulong *)(pcVar46 + 0x448) = (ulong)*(uint *)(pcVar46 + 0x6b0);
                    *(undefined8 *)(pcVar46 + 0x440) = *(undefined8 *)(pcVar46 + 0x6a8);
                    *(ulong *)(pcVar46 + 0x3d8) = CONCAT44(fVar103 * fVar94,fVar101 * fVar94);
                    *(ulong *)(pcVar46 + 0x3d0) =
                         CONCAT44(fVar55 * fVar74 * fVar94,fVar57 * fVar74 * fVar94);
                    *(float *)(pcVar46 + 1000) = fVar117 * fVar104;
                    *(float *)(pcVar46 + 0x3ec) = fVar118 * fVar104;
                    *(float *)(pcVar46 + 0x3e0) = fVar89 * fVar104;
                    *(float *)(pcVar46 + 0x3e4) = fVar116 * fVar104;
                    *(float *)(pcVar46 + 0x3f8) = fVar100 * fVar121;
                    *(float *)(pcVar46 + 0x3fc) = fVar90 * fVar121;
                    *(float *)(pcVar46 + 0x3f0) = fVar93 * fVar121;
                    *(float *)(pcVar46 + 0x3f4) = fVar97 * fVar121;
                    *(ulong *)(pcVar46 + 0x408) = (ulong)*(uint *)(pcVar46 + 0x6b0);
                    *(undefined8 *)(pcVar46 + 0x400) = *(undefined8 *)(pcVar46 + 0x6a8);
                  }
                }
                fVar121 = *pfVar49;
                fVar57 = (float)NEON_ucvtf(*(undefined4 *)(lVar32 + 0x840));
                fVar57 = fVar121 * (fVar57 / 100.0);
                if (fVar57 <= fVar119) {
                  if (*(char *)(lVar32 + 0x838) == '\0') {
                    if (*pcVar46 != '\0') goto LAB_0032765c;
                  }
                  else {
                    fVar121 = (float)NEON_ucvtf(*(undefined4 *)(lVar32 + 0x844));
                    fVar121 = fVar57 + fVar121;
LAB_0032765c:
                    if ((fVar121 <= fVar119) && (*(char *)(lVar33 + lVar29) != '\0'))
                    goto LAB_00327384;
                  }
                  puVar45 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar51);
                  local_b0 = *puVar45;
                  fVar55 = (float)local_b0;
                  fVar89 = (float)((ulong)local_b0 >> 0x20);
                  fVar121 = *(float *)(puVar45 + 1);
                  pauVar3 = (undefined1 (*) [12])(*(long *)(param_2 + 0x1d8) + lVar51);
                  uStack_a8 = (ulong)(uint)fVar121;
                  fVar57 = *(float *)(*pauVar3 + 8);
                  uStack_d8 = (ulong)SUB124(*pauVar3,8);
                  local_e0 = SUB128(*pauVar3,0);
                  if (*(char *)(*(long *)(param_2 + 0xa0) + 0x793) == '\x01') {
                    pfVar4 = (float *)(*(long *)(param_2 + 0x210) + lVar51);
                    pfVar5 = (float *)(*(long *)(param_2 + 0x218) + lVar51);
                    pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar51);
                    fVar116 = *pfVar5 * fVar55 + pfVar5[1] * fVar89 + pfVar5[2] * fVar121 +
                              pfVar5[3];
                    fVar117 = fVar55 * 0.0 + fVar89 * 0.0 + fVar121 * 0.0 + 0.0;
                    uStack_a8 = CONCAT17((char)((uint)fVar117 >> 0x18),
                                         CONCAT16((char)((uint)fVar117 >> 0x10),
                                                  CONCAT15((char)((uint)fVar117 >> 8),
                                                           CONCAT14(SUB41(fVar117,0),
                                                                    *pfVar6 * fVar55 +
                                                                    pfVar6[1] * fVar89 +
                                                                    pfVar6[2] * fVar121 + pfVar6[3])
                                                          )));
                    local_b0 = CONCAT17((char)((uint)fVar116 >> 0x18),
                                        CONCAT16((char)((uint)fVar116 >> 0x10),
                                                 CONCAT15((char)((uint)fVar116 >> 8),
                                                          CONCAT14(SUB41(fVar116,0),
                                                                   *pfVar4 * fVar55 +
                                                                   pfVar4[1] * fVar89 +
                                                                   pfVar4[2] * fVar121 + pfVar4[3]))
                                                ));
                    fVar121 = (float)*(undefined8 *)*pauVar3;
                    fVar55 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
                    auVar66._0_8_ =
                         CONCAT44(*pfVar5 * fVar121 + pfVar5[1] * fVar55 + pfVar5[2] * fVar57 + 0.0,
                                  *pfVar4 * fVar121 + pfVar4[1] * fVar55 + pfVar4[2] * fVar57 + 0.0)
                    ;
                    auVar66._8_4_ =
                         *pfVar6 * fVar121 + pfVar6[1] * fVar55 + pfVar6[2] * fVar57 + 0.0;
                    auVar66._12_4_ = fVar121 * 0.0 + fVar55 * 0.0 + fVar57 * 0.0 + 0.0;
                    uStack_d8 = auVar66._8_8_;
                    local_e0 = auVar66._0_8_;
                  }
                  *(undefined4 *)(pcVar46 + 0x688) = uVar43;
                  *(undefined8 **)(pcVar46 + 0x678) = &local_b0;
                  *(undefined8 **)(pcVar46 + 0x680) = &local_e0;
                  if ((*(char *)(lVar32 + 0x83a) != '\0') && (fVar119 != 0.0)) {
                    puVar45 = (undefined8 *)(*(long *)(param_2 + 0x1e0) + uVar44 * 0x10);
                    uVar62 = *puVar45;
                    *(ulong *)(pcVar46 + 0x468) = (ulong)*(uint *)(puVar45 + 1);
                    *(undefined8 *)(pcVar46 + 0x460) = uVar62;
                  }
                  uVar56 = *(undefined4 *)(param_2 + 0x48);
                  if ((*(char *)(lVar32 + 0x793) == '\x01') &&
                     (*(char *)(*(long *)(param_2 + 0xa0) + 0x793) != '\x01')) {
                    *(undefined8 *)(pcVar46 + 0x3f0) = *(undefined8 *)(pcVar46 + 0x2f0);
                    *(undefined8 *)(pcVar46 + 0x428) = *(undefined8 *)(pcVar46 + 0x328);
                    *(undefined8 *)(pcVar46 + 0x420) = *(undefined8 *)(pcVar46 + 800);
                    *(undefined8 *)(pcVar46 + 0x418) = *(undefined8 *)(pcVar46 + 0x318);
                    *(undefined8 *)(pcVar46 + 0x3f8) = *(undefined8 *)(pcVar46 + 0x2f8);
                    *(undefined8 *)(pcVar46 + 0x448) = *(undefined8 *)(pcVar46 + 0x348);
                    *(undefined8 *)(pcVar46 + 0x440) = *(undefined8 *)(pcVar46 + 0x340);
                    *(undefined8 *)(pcVar46 + 0x438) = *(undefined8 *)(pcVar46 + 0x338);
                    *(undefined8 *)(pcVar46 + 0x400) = *(undefined8 *)(pcVar46 + 0x300);
                    *(undefined8 *)(pcVar46 + 0x408) = *(undefined8 *)(pcVar46 + 0x308);
                    fVar98 = (float)*(undefined8 *)(pcVar46 + 0x408);
                    fVar91 = (float)*(undefined8 *)(pcVar46 + 0x400);
                    fVar95 = (float)((ulong)*(undefined8 *)(pcVar46 + 0x400) >> 0x20);
                    *(undefined8 *)(pcVar46 + 0x3d0) = *(undefined8 *)(pcVar46 + 0x2d0);
                    *(undefined8 *)(pcVar46 + 0x3d8) = *(undefined8 *)(pcVar46 + 0x2d8);
                    *(undefined8 *)(pcVar46 + 0x3e0) = *(undefined8 *)(pcVar46 + 0x2e0);
                    *(undefined8 *)(pcVar46 + 1000) = *(undefined8 *)(pcVar46 + 0x2e8);
                    *(undefined8 *)(pcVar46 + 0x410) = *(undefined8 *)(pcVar46 + 0x310);
                    *(undefined8 *)(pcVar46 + 0x430) = *(undefined8 *)(pcVar46 + 0x330);
                    fVar55 = *(float *)(pcVar46 + 0x3d0);
                    fVar89 = *(float *)(pcVar46 + 0x3d4);
                    fVar116 = *(float *)(pcVar46 + 0x3d8);
                    fVar117 = *(float *)(pcVar46 + 0x3e0);
                    fVar118 = *(float *)(pcVar46 + 0x3e4);
                    fVar90 = *(float *)(pcVar46 + 1000);
                    fVar93 = *(float *)(param_2 + 0x3d0);
                    fVar74 = *(float *)(param_2 + 0x3d4);
                    fVar97 = *(float *)(param_2 + 0x3d8);
                    fVar100 = *(float *)(param_2 + 0x3dc);
                    fVar94 = *(float *)(param_2 + 0x3f0);
                    fVar101 = *(float *)(param_2 + 0x3f4);
                    fVar103 = *(float *)(param_2 + 0x3f8);
                    fVar104 = *(float *)(param_2 + 0x3fc);
                    fVar107 = *(float *)(param_2 + 0x400);
                    fVar109 = *(float *)(param_2 + 0x404);
                    fVar112 = *(float *)(param_2 + 0x408);
                    fVar114 = *(float *)(param_2 + 0x40c);
                    fVar106 = (float)*(undefined8 *)(param_2 + 0x3e0);
                    fVar108 = (float)((ulong)*(undefined8 *)(param_2 + 0x3e0) >> 0x20);
                    fVar111 = (float)*(undefined8 *)(param_2 + 1000);
                    fVar113 = (float)((ulong)*(undefined8 *)(param_2 + 1000) >> 0x20);
                    fVar119 = (float)*(undefined8 *)(pcVar46 + 0x3f0);
                    fVar121 = (float)((ulong)*(undefined8 *)(pcVar46 + 0x3f0) >> 0x20);
                    fVar57 = (float)*(undefined8 *)(pcVar46 + 0x3f8);
                    fVar99 = (float)*(undefined8 *)(pcVar46 + 0x448);
                    fVar92 = (float)*(undefined8 *)(pcVar46 + 0x440);
                    fVar96 = (float)((ulong)*(undefined8 *)(pcVar46 + 0x440) >> 0x20);
                    *(ulong *)(pcVar46 + 0x3d8) =
                         CONCAT44(fVar100 * fVar55 + fVar113 * fVar89 + fVar104 * fVar116,
                                  fVar97 * fVar55 + fVar111 * fVar89 + fVar103 * fVar116);
                    *(ulong *)(pcVar46 + 0x3d0) =
                         CONCAT44(fVar74 * fVar55 + fVar108 * fVar89 + fVar101 * fVar116,
                                  fVar93 * fVar55 + fVar106 * fVar89 + fVar94 * fVar116);
                    *(float *)(pcVar46 + 1000) =
                         fVar97 * fVar117 + fVar111 * fVar118 + fVar103 * fVar90;
                    *(float *)(pcVar46 + 0x3ec) =
                         fVar100 * fVar117 + fVar113 * fVar118 + fVar104 * fVar90;
                    *(float *)(pcVar46 + 0x3e0) =
                         fVar93 * fVar117 + fVar106 * fVar118 + fVar94 * fVar90;
                    *(float *)(pcVar46 + 0x3e4) =
                         fVar74 * fVar117 + fVar108 * fVar118 + fVar101 * fVar90;
                    fVar55 = *(float *)(pcVar46 + 0x410);
                    fVar89 = *(float *)(pcVar46 + 0x414);
                    fVar116 = *(float *)(pcVar46 + 0x418);
                    *(ulong *)(pcVar46 + 0x3f8) =
                         CONCAT44(fVar100 * fVar119 + fVar113 * fVar121 + fVar104 * fVar57,
                                  fVar97 * fVar119 + fVar111 * fVar121 + fVar103 * fVar57);
                    *(ulong *)(pcVar46 + 0x3f0) =
                         CONCAT44(fVar74 * fVar119 + fVar108 * fVar121 + fVar101 * fVar57,
                                  fVar93 * fVar119 + fVar106 * fVar121 + fVar94 * fVar57);
                    *(float *)(pcVar46 + 0x408) =
                         fVar112 + fVar97 * fVar91 + fVar111 * fVar95 + fVar103 * fVar98;
                    *(float *)(pcVar46 + 0x40c) =
                         fVar114 + fVar100 * fVar91 + fVar113 * fVar95 + fVar104 * fVar98;
                    *(float *)(pcVar46 + 0x400) =
                         fVar107 + fVar93 * fVar91 + fVar106 * fVar95 + fVar94 * fVar98;
                    *(float *)(pcVar46 + 0x404) =
                         fVar109 + fVar74 * fVar91 + fVar108 * fVar95 + fVar101 * fVar98;
                    fVar117 = *(float *)(pcVar46 + 0x420);
                    fVar118 = *(float *)(pcVar46 + 0x424);
                    fVar90 = *(float *)(pcVar46 + 0x428);
                    auVar102 = *(undefined1 (*) [16])(param_2 + 0x410);
                    fVar93 = *(float *)(param_2 + 0x430);
                    fVar74 = *(float *)(param_2 + 0x434);
                    fVar97 = *(float *)(param_2 + 0x438);
                    fVar100 = *(float *)(param_2 + 0x43c);
                    uVar123 = *(undefined8 *)(param_2 + 0x448);
                    uVar62 = *(undefined8 *)(param_2 + 0x440);
                    fVar94 = auVar102._0_4_;
                    fVar101 = auVar102._4_4_;
                    fVar103 = auVar102._8_4_;
                    fVar104 = auVar102._12_4_;
                    fVar107 = (float)*(undefined8 *)(param_2 + 0x420);
                    fVar109 = (float)((ulong)*(undefined8 *)(param_2 + 0x420) >> 0x20);
                    fVar112 = (float)*(undefined8 *)(param_2 + 0x428);
                    fVar114 = (float)((ulong)*(undefined8 *)(param_2 + 0x428) >> 0x20);
                    fVar119 = (float)*(undefined8 *)(pcVar46 + 0x430);
                    fVar121 = (float)((ulong)*(undefined8 *)(pcVar46 + 0x430) >> 0x20);
                    fVar57 = (float)*(undefined8 *)(pcVar46 + 0x438);
                    auVar73._0_8_ =
                         CONCAT44(fVar101 * fVar119 + fVar109 * fVar121 + fVar74 * fVar57,
                                  fVar94 * fVar119 + fVar107 * fVar121 + fVar93 * fVar57);
                    auVar73._8_4_ = fVar103 * fVar119 + fVar112 * fVar121 + fVar97 * fVar57;
                    auVar73._12_4_ = fVar104 * fVar119 + fVar114 * fVar121 + fVar100 * fVar57;
                    *(float *)(pcVar46 + 0x418) =
                         fVar103 * fVar55 + fVar112 * fVar89 + fVar97 * fVar116;
                    *(float *)(pcVar46 + 0x41c) =
                         fVar104 * fVar55 + fVar114 * fVar89 + fVar100 * fVar116;
                    *(float *)(pcVar46 + 0x410) =
                         fVar94 * fVar55 + fVar107 * fVar89 + fVar93 * fVar116;
                    *(float *)(pcVar46 + 0x414) =
                         fVar101 * fVar55 + fVar109 * fVar89 + fVar74 * fVar116;
                    *(float *)(pcVar46 + 0x428) =
                         fVar103 * fVar117 + fVar112 * fVar118 + fVar97 * fVar90;
                    *(float *)(pcVar46 + 0x42c) =
                         fVar104 * fVar117 + fVar114 * fVar118 + fVar100 * fVar90;
                    *(float *)(pcVar46 + 0x420) =
                         fVar94 * fVar117 + fVar107 * fVar118 + fVar93 * fVar90;
                    *(float *)(pcVar46 + 0x424) =
                         fVar101 * fVar117 + fVar109 * fVar118 + fVar74 * fVar90;
                    *(long *)(pcVar46 + 0x438) = auVar73._8_8_;
                    *(undefined8 *)(pcVar46 + 0x430) = auVar73._0_8_;
                    auVar67._0_8_ =
                         CONCAT44((float)((ulong)uVar62 >> 0x20) +
                                  fVar101 * fVar92 + fVar109 * fVar96 + fVar74 * fVar99,
                                  (float)uVar62 +
                                  fVar94 * fVar92 + fVar107 * fVar96 + fVar93 * fVar99);
                    auVar67._8_4_ =
                         (float)uVar123 + fVar103 * fVar92 + fVar112 * fVar96 + fVar97 * fVar99;
                    auVar67._12_4_ =
                         (float)((ulong)uVar123 >> 0x20) +
                         fVar104 * fVar92 + fVar114 * fVar96 + fVar100 * fVar99;
                    *(long *)(pcVar46 + 0x448) = auVar67._8_8_;
                    *(undefined8 *)(pcVar46 + 0x440) = auVar67._0_8_;
                  }
                  lVar32 = lVar52 + lVar29;
                  FUN_00325c10(uVar56,*(long *)(pcVar46 + 0x98),lVar32 + 0x88,lVar32 + 200,
                               lVar32 + 0x108,(char *)(lVar33 + lVar29),pcVar46);
                  pcVar46[0x678] = '\0';
                  pcVar46[0x679] = '\0';
                  pcVar46[0x67a] = '\0';
                  pcVar46[0x67b] = '\0';
                  pcVar46[0x67c] = '\0';
                  pcVar46[0x67d] = '\0';
                  pcVar46[0x67e] = '\0';
                  pcVar46[0x67f] = '\0';
                  pcVar46[0x680] = '\0';
                  pcVar46[0x681] = '\0';
                  pcVar46[0x682] = '\0';
                  pcVar46[0x683] = '\0';
                  pcVar46[0x684] = '\0';
                  pcVar46[0x685] = '\0';
                  pcVar46[0x686] = '\0';
                  pcVar46[0x687] = '\0';
                  pcVar46[0x688] = -1;
                  pcVar46[0x689] = -1;
                  pcVar46[0x68a] = -1;
                  pcVar46[0x68b] = -1;
                }
              }
LAB_00327384:
              lVar50 = lVar50 + 1;
              lVar48 = lVar48 + 8;
              lVar33 = lVar33 + 1;
              lVar52 = lVar52 + 4;
            } while (lVar50 < *(int *)(*(long *)(param_2 + 0x240) + 0x88));
          }
          iVar42 = iVar42 + 1;
          lVar51 = *(long *)(param_2 + 0x248);
        }
        if (((lVar51 != 0) && (*piVar1 != 0)) &&
           (lVar51 = *(long *)(param_2 + 0x240), 0 < *(int *)(lVar51 + 0x88))) {
          lVar33 = 0;
          do {
            lVar50 = *(long *)(lVar31 + lVar29 + lVar33 * 8);
            if (((lVar50 != 0) &&
                (*(char *)(*(long *)(*(long *)(param_2 + 0x248 + lVar33 * 8) + 0x10) + 0x82c) !=
                 '\0')) &&
               ((*(long *)(lVar50 + 0x98) != 0 &&
                (*(int *)(lVar50 + 0x5e8) == *(int *)(param_2 + 0x14))))) {
              *(float *)(lVar50 + 0x5fc) = *(float *)(param_2 + 0x44) - *pfVar47;
              *(float *)(lVar50 + 0x5f4) = *pfVar49;
              cVar10 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
              if (cVar10 == '\0') {
                puVar45 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + uVar44 * 0x10);
                uVar62 = *puVar45;
                fVar119 = *(float *)(puVar45 + 1);
LAB_00327ac4:
                uVar30 = (ulong)(uint)fVar119;
              }
              else {
                if ((*(long *)(param_2 + 0x210) != 0) &&
                   ((long)uVar44 <= (long)*(int *)(param_2 + 0x28))) {
                  lVar51 = uVar44 * 0x10;
                  puVar7 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar51);
                  puVar8 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar51);
                  puVar9 = (uint *)(*(long *)(param_2 + 0x220) + lVar51);
                  local_120 = CONCAT44(*puVar8,*puVar7);
                  uStack_118 = (ulong)*puVar9;
                  local_130 = CONCAT44(puVar8[1],puVar7[1]);
                  uStack_128 = (ulong)puVar9[1];
                  local_150 = CONCAT44(puVar8[3],puVar7[3]);
                  local_140 = CONCAT44(puVar8[2],puVar7[2]);
                  uStack_138 = (ulong)puVar9[2];
                  uStack_148 = (ulong)puVar9[3];
                }
                puVar45 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + uVar44 * 0x10);
                uVar62 = *puVar45;
                fVar119 = *(float *)(puVar45 + 1);
                if (cVar10 != '\x01') goto LAB_00327ac4;
                fVar121 = (float)uVar62;
                fVar57 = (float)((ulong)uVar62 >> 0x20);
                uVar62 = CONCAT44((float)((ulong)local_150 >> 0x20) +
                                  local_120._4_4_ * fVar121 +
                                  (float)((ulong)local_130 >> 0x20) * fVar57 +
                                  (float)((ulong)local_140 >> 0x20) * fVar119,
                                  (float)local_150 +
                                  (float)local_120 * fVar121 + (float)local_130 * fVar57 +
                                  (float)local_140 * fVar119);
                uVar30 = CONCAT44((float)(uStack_148 >> 0x20) +
                                  uStack_118._4_4_ * fVar121 + (float)(uStack_128 >> 0x20) * fVar57
                                  + (float)(uStack_138 >> 0x20) * fVar119,
                                  (float)uStack_148 +
                                  (float)uStack_118 * fVar121 + (float)uStack_128 * fVar57 +
                                  (float)uStack_138 * fVar119);
              }
              *(ulong *)(lVar50 + 0x658) = uVar30;
              *(undefined8 *)(lVar50 + 0x650) = uVar62;
              auVar102 = *(undefined1 (*) [16])(param_2 + 0x420);
              puVar45 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + uVar44 * 0x10);
              uVar62 = *puVar45;
              fVar119 = *(float *)(puVar45 + 1);
              fVar121 = (float)uVar62;
              fVar57 = (float)((ulong)uVar62 >> 0x20);
              auVar68._0_8_ =
                   CONCAT44(*(float *)(param_2 + 0x414) * fVar121 + auVar102._4_4_ * fVar57 +
                            (float)((ulong)*(undefined8 *)(param_2 + 0x430) >> 0x20) * fVar119,
                            *(float *)(param_2 + 0x410) * fVar121 + auVar102._0_4_ * fVar57 +
                            (float)*(undefined8 *)(param_2 + 0x430) * fVar119);
              auVar68._8_4_ =
                   *(float *)(param_2 + 0x418) * fVar121 + auVar102._8_4_ * fVar57 +
                   (float)*(undefined8 *)(param_2 + 0x438) * fVar119;
              auVar68._12_4_ =
                   *(float *)(param_2 + 0x41c) * fVar121 + auVar102._12_4_ * fVar57 +
                   (float)((ulong)*(undefined8 *)(param_2 + 0x438) >> 0x20) * fVar119;
              *(long *)(lVar50 + 0x668) = auVar68._8_8_;
              *(undefined8 *)(lVar50 + 0x660) = auVar68._0_8_;
              lVar51 = *(long *)(param_2 + 0x240);
            }
            lVar33 = lVar33 + 1;
          } while (lVar33 < *(int *)(lVar51 + 0x88));
        }
      }
      uVar30 = (ulong)*(int *)(param_2 + 0x28);
      uVar44 = uVar44 + 1;
      lVar29 = lVar29 + 0x158;
    } while ((long)uVar44 < (long)uVar30);
    if (iVar42 != 0) {
      *(int *)(param_2 + 0x2c) = iVar42;
      cVar10 = *(char *)(*(long *)(param_2 + 0xa0) + 0x792);
      goto joined_r0x00327afc;
    }
  }
  uVar30 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x234) = 0;
  cVar10 = *(char *)(*(long *)(param_2 + 0xa0) + 0x792);
joined_r0x00327afc:
  if (cVar10 == '\0') {
    puVar45 = *(undefined8 **)(param_2 + 0xc0);
    uVar44 = -(uVar30 >> 0x1f & 1) & 0xfffffff000000000 | (uVar30 & 0xffffffff) << 4;
    memcpy((void *)*puVar45,*(void **)(param_2 + 0x1d0),uVar44);
    memcpy((void *)puVar45[1],*(void **)(param_2 + 0x1d8),uVar44);
    memcpy((void *)puVar45[2],*(void **)(param_2 + 0x1e0),uVar44);
    memcpy((void *)puVar45[4],*(void **)(param_2 + 0x1f0),uVar44);
    memcpy((void *)puVar45[3],*(void **)(param_2 + 0x1e8),uVar44);
    memcpy((void *)puVar45[5],*(void **)(param_2 + 0x1f8),uVar44);
    if ((void *)puVar45[6] != (void *)0x0) {
      memcpy((void *)puVar45[6],*(void **)(param_2 + 0x200),uVar44);
      memcpy((void *)puVar45[7],*(void **)(param_2 + 0x208),uVar44);
    }
    if ((void *)puVar45[8] != (void *)0x0) {
      memcpy((void *)puVar45[8],*(void **)(param_2 + 0x210),uVar44);
      memcpy((void *)puVar45[9],*(void **)(param_2 + 0x218),uVar44);
      memcpy((void *)puVar45[10],*(void **)(param_2 + 0x220),uVar44);
    }
  }
  return;
}

