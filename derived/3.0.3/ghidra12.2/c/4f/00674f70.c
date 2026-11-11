
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00674f70(float *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined8 *param_4,uint param_5,int param_6,int param_7)

{
  uint5 uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  float fVar5;
  float fVar12;
  float fVar13;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar47 [12];
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  undefined8 uVar59;
  float fVar64;
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 uVar60;
  undefined1 auVar63 [16];
  float fVar66;
  float fVar69;
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  fVar40 = (float)DAT_0413f410;
  fVar15 = (float)((ulong)DAT_0413f410 >> 0x20);
  if (param_7 == 1) {
    switch(param_6 + 1) {
    case 0:
      if (0 < (int)param_5) {
        uVar4 = (ulong)param_5;
        param_2 = param_2 + 1;
        pauVar2 = param_3 + 1;
        do {
          FUN_00482310(&local_90,pauVar2,pauVar2 + -1);
          auVar63 = *param_2;
          fVar5 = *(float *)(*pauVar2 + 0xc);
          auVar34 = pauVar2[1];
          auVar35 = NEON_frecpe(auVar34,4);
          fVar18 = -*(float *)*pauVar2;
          fVar19 = -*(float *)(*pauVar2 + 4);
          auVar48._0_8_ = CONCAT44(fVar19,fVar18);
          auVar48._8_4_ = -*(float *)(*pauVar2 + 8);
          auVar48._12_4_ = -fVar5;
          fVar16 = auVar63._0_4_;
          fVar31 = auVar63._4_4_;
          fVar41 = auVar63._8_4_;
          fVar17 = auVar63._12_4_;
          auVar54 = NEON_ext(auVar63,auVar63,4,1);
          auVar32._0_4_ = -local_90;
          auVar32._4_4_ = -fStack_8c;
          auVar32._8_4_ = -fStack_88;
          auVar32._12_4_ = -fStack_84;
          auVar73._8_8_ = auVar48._8_8_;
          auVar73._0_8_ = auVar48._0_8_;
          auVar37 = NEON_ext(auVar48,auVar48,4,1);
          auVar28 = NEON_ext(auVar54,auVar54,8,1);
          uVar46 = NEON_rev64(auVar28._0_8_,4);
          auVar74._0_12_ = auVar73._0_12_;
          auVar74._12_4_ = fVar5;
          auVar28 = NEON_ext(auVar32,auVar32,4,1);
          auVar62 = NEON_ext(auVar28,auVar28,8,1);
          uVar59 = NEON_rev64(auVar62._0_8_,4);
          auVar62 = NEON_frecps(auVar34,auVar35,4);
          auVar67._0_4_ = auVar35._0_4_ * auVar62._0_4_;
          auVar67._4_4_ = auVar35._4_4_ * auVar62._4_4_;
          auVar67._8_4_ = auVar35._8_4_ * auVar62._8_4_;
          auVar67._12_4_ = auVar35._12_4_ * auVar62._12_4_;
          auVar35 = NEON_ext(auVar74,auVar74,4,1);
          auVar35 = NEON_ext(auVar35,auVar35,8,1);
          auVar34 = NEON_frecps(auVar34,auVar67,4);
          uVar60 = NEON_rev64(auVar35._0_8_,4);
          fVar12 = (float)((ulong)uVar46 >> 0x20);
          auVar61._0_4_ = auVar28._0_4_ * fVar16 + auVar54._0_4_ * local_90;
          auVar61._4_4_ = auVar28._4_4_ * fVar31 + auVar54._4_4_ * fStack_8c;
          auVar61._8_4_ = (float)uVar59 * fVar41 + (float)uVar46 * fStack_88;
          auVar61._12_4_ = (float)((ulong)uVar59 >> 0x20) * fVar17 + fVar12 * fStack_84;
          auVar28 = NEON_ext(auVar61,auVar61,4,1);
          auVar63 = NEON_ext(auVar63,auVar63,8,1);
          auVar49._0_4_ = fVar16 * auVar37._0_4_ - fVar18 * auVar54._0_4_;
          auVar49._4_4_ = fVar31 * auVar37._4_4_ - fVar19 * auVar54._4_4_;
          auVar49._8_4_ = fVar41 * (float)uVar60 - auVar48._8_4_ * (float)uVar46;
          auVar49._12_4_ = fVar17 * (float)((ulong)uVar60 >> 0x20) - fVar5 * fVar12;
          fVar44 = fVar16 * auVar32._0_4_ + fVar31 * auVar32._4_4_ + fVar41 * auVar32._8_4_;
          fVar39 = fVar16 * auVar32._0_4_ + fVar31 * auVar32._4_4_ + fVar41 * auVar32._8_4_;
          fVar55 = auVar63._4_4_ * auVar63._4_4_;
          fVar20 = fVar55 - fVar40;
          fVar55 = fVar55 - fVar15;
          auVar21._0_8_ =
               CONCAT44(auVar67._4_4_ * auVar34._4_4_ * *(float *)(param_2[1] + 4),
                        auVar67._0_4_ * auVar34._0_4_ * *(float *)param_2[1]);
          auVar21._8_4_ = auVar67._8_4_ * auVar34._8_4_ * *(float *)(param_2[1] + 8);
          auVar21._12_4_ = *(float *)(param_2[1] + 0xc) * 0.0;
          auVar63 = NEON_ext(auVar49,auVar49,4,1);
          auVar75._0_4_ = fVar18 * fVar16;
          auVar75._4_4_ = fVar19 * fVar31;
          auVar75._8_4_ = auVar48._8_4_ * fVar41;
          auVar75._12_4_ = fVar5 * fVar17;
          auVar34 = NEON_ext(auVar75,auVar75,8,1);
          fVar12 = (fVar16 * fVar44 - fVar20 * local_90) + auVar28._0_4_ * fVar17;
          fVar13 = (fVar31 * fVar39 - fVar55 * fStack_8c) + auVar28._4_4_ * fVar17;
          fVar44 = (fVar41 * fVar44 - fVar20 * fStack_88) + auVar61._0_4_ * fVar17;
          fVar39 = (fVar17 * fVar39 - fVar55 * fStack_84) + auVar61._4_4_ * fVar17;
          fStack_b0 = fVar16 * fVar5 + fVar18 * fVar17 + auVar63._0_4_;
          fStack_ac = fVar31 * fVar5 + fVar19 * fVar17 + auVar63._4_4_;
          fStack_a8 = fVar41 * fVar5 + auVar48._8_4_ * fVar17 + auVar49._0_4_;
          fStack_a4 = auVar75._12_4_ - (auVar34._0_4_ + auVar75._0_4_ + auVar75._4_4_);
          uStack_98 = auVar21._8_8_;
          auVar63 = param_2[-1];
          fVar5 = (float)*param_4;
          fVar16 = (float)((ulong)*param_4 >> 0x20);
          auVar6._0_8_ = CONCAT44(auVar63._4_4_ +
                                  ((*(float *)(param_2[-1] + 4) + fVar13 + fVar13) - auVar63._4_4_)
                                  * fVar16,auVar63._0_4_ +
                                           ((*(float *)param_2[-1] + fVar12 + fVar12) -
                                           auVar63._0_4_) * fVar5);
          auVar6._8_4_ = auVar63._8_4_ +
                         ((*(float *)(param_2[-1] + 8) + fVar44 + fVar44) - auVar63._8_4_) * fVar5;
          auVar6._12_4_ =
               auVar63._12_4_ +
               ((*(float *)(param_2[-1] + 0xc) + fVar39 + fVar39) - auVar63._12_4_) * fVar16;
          *(long *)(param_1 + 2) = auVar6._8_8_;
          *(undefined8 *)param_1 = auVar6._0_8_;
          local_a0 = auVar21._0_8_;
          FUN_00437eb0(param_1 + 4,param_2,&fStack_b0,param_4);
          uVar4 = uVar4 - 1;
          auVar63 = param_2[1];
          param_2 = param_2 + 3;
          fVar5 = (float)*param_4;
          fVar12 = (float)((ulong)*param_4 >> 0x20);
          auVar7._0_8_ = CONCAT44(auVar63._4_4_ + (local_a0._4_4_ - auVar63._4_4_) * fVar12,
                                  auVar63._0_4_ + ((float)local_a0 - auVar63._0_4_) * fVar5);
          auVar7._8_4_ = auVar63._8_4_ + ((float)uStack_98 - auVar63._8_4_) * fVar5;
          auVar7._12_4_ = auVar63._12_4_ + (uStack_98._4_4_ - auVar63._12_4_) * fVar12;
          *(long *)(param_1 + 10) = auVar7._8_8_;
          *(undefined8 *)(param_1 + 8) = auVar7._0_8_;
          param_1 = param_1 + 0xc;
          pauVar2 = pauVar2 + 3;
        } while (uVar4 != 0);
      }
      break;
    case 1:
      if (0 < (int)param_5) {
        do {
          auVar63 = *param_2;
          fVar40 = (float)*param_4;
          fVar15 = (float)((ulong)*param_4 >> 0x20);
          auVar9._0_8_ = CONCAT44(auVar63._4_4_ +
                                  (*(float *)(*param_3 + 4) - auVar63._4_4_) * fVar15,
                                  auVar63._0_4_ + (*(float *)*param_3 - auVar63._0_4_) * fVar40);
          auVar9._8_4_ = auVar63._8_4_ + (*(float *)(*param_3 + 8) - auVar63._8_4_) * fVar40;
          auVar9._12_4_ = auVar63._12_4_ + (*(float *)(*param_3 + 0xc) - auVar63._12_4_) * fVar15;
          *(long *)(param_1 + 2) = auVar9._8_8_;
          *(undefined8 *)param_1 = auVar9._0_8_;
          FUN_00437eb0(param_1 + 4,param_2 + 1,param_3 + 1,param_4);
          fVar40 = *(float *)param_3[2];
          fVar15 = *(float *)(param_3[2] + 4);
          pauVar2 = param_3 + 2;
          fVar5 = *(float *)(param_3[2] + 0xc);
          param_5 = param_5 - 1;
          fVar12 = *(float *)param_2[2];
          fVar13 = *(float *)(param_2[2] + 4);
          pauVar3 = param_2 + 2;
          fVar44 = *(float *)(param_2[2] + 0xc);
          param_2 = param_2 + 3;
          param_3 = param_3 + 3;
          fVar39 = (float)*param_4;
          fVar16 = (float)((ulong)*param_4 >> 0x20);
          param_1[10] = *(float *)(*pauVar3 + 8) +
                        (*(float *)(*pauVar2 + 8) - *(float *)(*pauVar3 + 8)) * fVar39;
          param_1[0xb] = fVar44 + (fVar5 - fVar44) * fVar16;
          param_1[8] = fVar12 + (fVar40 - fVar12) * fVar39;
          param_1[9] = fVar13 + (fVar15 - fVar13) * fVar16;
          param_1 = param_1 + 0xc;
        } while (param_5 != 0);
      }
      break;
    case 2:
      if (0 < (int)param_5) {
        param_3 = param_3 + 1;
        do {
          auVar63 = *param_3;
          auVar34 = *param_2;
          auVar28 = NEON_ext(auVar34,auVar34,4,1);
          auVar37 = NEON_ext(auVar63,auVar63,4,1);
          auVar35 = NEON_ext(auVar37,auVar37,8,1);
          auVar54 = NEON_ext(auVar28,auVar28,8,1);
          fVar5 = auVar34._0_4_;
          fVar39 = auVar63._0_4_;
          fVar12 = auVar34._4_4_;
          fVar16 = auVar63._4_4_;
          fVar13 = auVar34._8_4_;
          fVar31 = auVar63._8_4_;
          fVar44 = auVar34._12_4_;
          fVar41 = auVar63._12_4_;
          fVar17 = fVar39 * fVar5 + fVar16 * fVar12 + fVar31 * fVar13;
          fVar19 = fVar39 * fVar5 + fVar16 * fVar12 + fVar31 * fVar13;
          uVar46 = NEON_rev64(auVar35._0_8_,4);
          uVar59 = NEON_rev64(auVar54._0_8_,4);
          auVar63 = NEON_ext(auVar63,auVar63,8,1);
          fVar64 = auVar63._4_4_ * auVar63._4_4_;
          fVar55 = (float)((ulong)uVar46 >> 0x20);
          fVar58 = fVar64 - fVar40;
          fVar64 = fVar64 - fVar15;
          auVar27._0_4_ = fVar39 * auVar28._0_4_ - fVar5 * auVar37._0_4_;
          auVar27._4_4_ = fVar16 * auVar28._4_4_ - fVar12 * auVar37._4_4_;
          auVar27._8_4_ = fVar31 * (float)uVar59 - fVar13 * (float)uVar46;
          auVar27._12_4_ = fVar41 * (float)((ulong)uVar59 >> 0x20) - fVar44 * fVar55;
          auVar63 = NEON_ext(auVar27,auVar27,4,1);
          fVar18 = fVar5 * fVar58 + fVar39 * fVar17 + auVar63._0_4_ * fVar41;
          fVar20 = fVar12 * fVar64 + fVar16 * fVar19 + auVar63._4_4_ * fVar41;
          fVar17 = fVar13 * fVar58 + fVar31 * fVar17 + auVar27._0_4_ * fVar41;
          fVar19 = fVar44 * fVar64 + fVar41 * fVar19 + auVar27._4_4_ * fVar41;
          local_90 = *(float *)param_3[-1] + fVar18 + fVar18;
          fStack_8c = *(float *)(param_3[-1] + 4) + fVar20 + fVar20;
          fStack_88 = *(float *)(param_3[-1] + 8) + fVar17 + fVar17;
          fStack_84 = *(float *)(param_3[-1] + 0xc) + fVar19 + fVar19;
          auVar63 = param_2[1];
          auVar34 = NEON_ext(auVar63,auVar63,4,1);
          fVar17 = auVar63._0_4_;
          fVar18 = auVar63._4_4_;
          fVar19 = auVar63._8_4_;
          fVar20 = auVar63._12_4_;
          auVar63 = NEON_ext(auVar34,auVar34,8,1);
          uVar59 = NEON_rev64(auVar63._0_8_,4);
          auVar53._0_4_ = fVar39 * fVar17;
          auVar53._4_4_ = fVar16 * fVar18;
          auVar53._8_4_ = fVar31 * fVar19;
          auVar53._12_4_ = fVar41 * fVar20;
          auVar22._0_4_ = fVar39 * auVar34._0_4_ - auVar37._0_4_ * fVar17;
          auVar22._4_4_ = fVar16 * auVar34._4_4_ - auVar37._4_4_ * fVar18;
          auVar22._8_4_ = fVar31 * (float)uVar59 - (float)uVar46 * fVar19;
          auVar22._12_4_ = fVar41 * (float)((ulong)uVar59 >> 0x20) - fVar55 * fVar20;
          auVar34 = NEON_ext(auVar22,auVar22,4,1);
          auVar63 = NEON_ext(auVar53,auVar53,8,1);
          local_80 = fVar39 * fVar20 + fVar17 * fVar41 + auVar34._0_4_;
          fStack_7c = fVar16 * fVar20 + fVar18 * fVar41 + auVar34._4_4_;
          fStack_78 = fVar31 * fVar20 + fVar19 * fVar41 + auVar22._0_4_;
          fStack_74 = auVar53._12_4_ - (auVar53._0_4_ + auVar53._4_4_ + auVar63._0_4_);
          auVar63 = param_3[1];
          auVar23._0_8_ =
               CONCAT44(auVar63._4_4_ * *(float *)(param_2[2] + 4),
                        auVar63._0_4_ * *(float *)param_2[2]);
          auVar23._8_4_ = auVar63._8_4_ * *(float *)(param_2[2] + 8);
          auVar23._12_4_ = auVar63._12_4_ * *(float *)(param_2[2] + 0xc);
          uStack_68 = auVar23._8_8_;
          fVar39 = (float)*param_4;
          fVar16 = (float)((ulong)*param_4 >> 0x20);
          auVar10._0_8_ =
               CONCAT44(fVar12 + (fStack_8c - fVar12) * fVar16,fVar5 + (local_90 - fVar5) * fVar39);
          auVar10._8_4_ = fVar13 + (fStack_88 - fVar13) * fVar39;
          auVar10._12_4_ = fVar44 + (fStack_84 - fVar44) * fVar16;
          *(long *)(param_1 + 2) = auVar10._8_8_;
          *(undefined8 *)param_1 = auVar10._0_8_;
          local_70 = auVar23._0_8_;
          FUN_00437eb0(param_1 + 4,param_2 + 1,&local_80,param_4);
          param_5 = param_5 - 1;
          fVar5 = *(float *)param_2[2];
          fVar12 = *(float *)(param_2[2] + 4);
          pauVar2 = param_2 + 2;
          fVar13 = *(float *)(param_2[2] + 0xc);
          param_2 = param_2 + 3;
          param_3 = param_3 + 3;
          fVar44 = (float)*param_4;
          fVar39 = (float)((ulong)*param_4 >> 0x20);
          param_1[10] = *(float *)(*pauVar2 + 8) +
                        ((float)uStack_68 - *(float *)(*pauVar2 + 8)) * fVar44;
          param_1[0xb] = fVar13 + (uStack_68._4_4_ - fVar13) * fVar39;
          param_1[8] = fVar5 + ((float)local_70 - fVar5) * fVar44;
          param_1[9] = fVar12 + (local_70._4_4_ - fVar12) * fVar39;
          param_1 = param_1 + 0xc;
        } while (param_5 != 0);
      }
      break;
    case 3:
      if (0 < (int)param_5) {
        param_2 = param_2 + 1;
        do {
          auVar63 = *param_2;
          auVar34 = *param_3;
          auVar37 = param_3[1];
          auVar35 = NEON_ext(auVar34,auVar34,4,1);
          auVar28 = NEON_ext(auVar63,auVar63,4,1);
          auVar24._0_8_ =
               CONCAT44(*(float *)(param_2[1] + 4) * *(float *)(param_3[2] + 4),
                        *(float *)param_2[1] * *(float *)param_3[2]);
          auVar24._8_4_ = *(float *)(param_2[1] + 8) * *(float *)(param_3[2] + 8);
          auVar24._12_4_ = *(float *)(param_2[1] + 0xc) * *(float *)(param_3[2] + 0xc);
          auVar54 = NEON_ext(auVar28,auVar28,8,1);
          uVar46 = NEON_rev64(auVar54._0_8_,4);
          auVar54 = NEON_ext(auVar35,auVar35,8,1);
          uVar59 = NEON_rev64(auVar54._0_8_,4);
          auVar54 = NEON_ext(auVar37,auVar37,4,1);
          auVar62 = NEON_ext(auVar54,auVar54,8,1);
          uVar60 = NEON_rev64(auVar62._0_8_,4);
          fVar17 = auVar63._0_4_;
          fVar18 = auVar63._4_4_;
          fVar19 = auVar63._8_4_;
          fVar20 = auVar63._12_4_;
          fVar5 = auVar34._0_4_;
          fVar12 = auVar34._4_4_;
          fVar13 = auVar34._8_4_;
          fVar44 = (float)((ulong)uVar46 >> 0x20);
          fVar39 = auVar37._0_4_;
          fVar16 = auVar37._4_4_;
          fVar31 = auVar37._8_4_;
          fVar41 = auVar37._12_4_;
          auVar36._0_4_ = fVar17 * auVar35._0_4_ - fVar5 * auVar28._0_4_;
          auVar36._4_4_ = fVar18 * auVar35._4_4_ - fVar12 * auVar28._4_4_;
          auVar36._8_4_ = fVar19 * (float)uVar59 - fVar13 * (float)uVar46;
          auVar36._12_4_ = fVar20 * (float)((ulong)uVar59 >> 0x20) - auVar34._12_4_ * fVar44;
          auVar29._0_4_ = fVar17 * auVar54._0_4_ - auVar28._0_4_ * fVar39;
          auVar29._4_4_ = fVar18 * auVar54._4_4_ - auVar28._4_4_ * fVar16;
          auVar29._8_4_ = fVar19 * (float)uVar60 - (float)uVar46 * fVar31;
          auVar29._12_4_ = fVar20 * (float)((ulong)uVar60 >> 0x20) - fVar44 * fVar41;
          fVar44 = fVar17 * fVar5 + fVar18 * fVar12 + fVar19 * fVar13;
          fVar55 = fVar17 * fVar5 + fVar18 * fVar12 + fVar19 * fVar13;
          auVar63 = NEON_ext(auVar63,auVar63,8,1);
          fVar64 = auVar63._4_4_ * auVar63._4_4_;
          fVar58 = fVar64 - fVar40;
          fVar64 = fVar64 - fVar15;
          auVar63 = NEON_ext(auVar36,auVar36,4,1);
          auVar37 = NEON_ext(auVar29,auVar29,4,1);
          auVar30._0_4_ = fVar17 * fVar39;
          auVar30._4_4_ = fVar18 * fVar16;
          auVar30._8_4_ = fVar19 * fVar31;
          auVar30._12_4_ = fVar20 * fVar41;
          fVar5 = fVar5 * fVar58 + fVar17 * fVar44 + auVar63._0_4_ * fVar20;
          fVar12 = fVar12 * fVar64 + fVar18 * fVar55 + auVar63._4_4_ * fVar20;
          fVar13 = fVar13 * fVar58 + fVar19 * fVar44 + auVar36._0_4_ * fVar20;
          fVar44 = auVar34._12_4_ * fVar64 + fVar20 * fVar55 + auVar36._4_4_ * fVar20;
          auVar63 = NEON_ext(auVar30,auVar30,8,1);
          fStack_74 = auVar30._12_4_ - (auVar30._0_4_ + auVar30._4_4_ + auVar63._0_4_);
          local_80 = fVar17 * fVar41 + fVar39 * fVar20 + auVar37._0_4_;
          fStack_7c = fVar18 * fVar41 + fVar16 * fVar20 + auVar37._4_4_;
          fStack_78 = fVar19 * fVar41 + fVar31 * fVar20 + auVar29._0_4_;
          auVar63 = param_2[-1];
          fVar39 = auVar63._0_4_;
          local_90 = fVar39 + fVar5 + fVar5;
          fVar16 = auVar63._4_4_;
          fStack_8c = fVar16 + fVar12 + fVar12;
          fVar31 = auVar63._8_4_;
          fStack_88 = fVar31 + fVar13 + fVar13;
          fVar13 = auVar63._12_4_;
          fStack_84 = fVar13 + fVar44 + fVar44;
          uStack_68 = auVar24._8_8_;
          fVar5 = (float)*param_4;
          fVar12 = (float)((ulong)*param_4 >> 0x20);
          auVar11._0_8_ =
               CONCAT44(fVar16 + (fStack_8c - fVar16) * fVar12,fVar39 + (local_90 - fVar39) * fVar5)
          ;
          auVar11._8_4_ = fVar31 + (fStack_88 - fVar31) * fVar5;
          auVar11._12_4_ = fVar13 + (fStack_84 - fVar13) * fVar12;
          *(long *)(param_1 + 2) = auVar11._8_8_;
          *(undefined8 *)param_1 = auVar11._0_8_;
          local_70 = auVar24._0_8_;
          FUN_00437eb0(param_1 + 4,param_2,&local_80,param_4);
          param_5 = param_5 - 1;
          fVar5 = *(float *)param_2[1];
          fVar12 = *(float *)(param_2[1] + 4);
          pauVar2 = param_2 + 1;
          fVar13 = *(float *)(param_2[1] + 0xc);
          param_2 = param_2 + 3;
          param_3 = param_3 + 3;
          fVar44 = (float)*param_4;
          fVar39 = (float)((ulong)*param_4 >> 0x20);
          param_1[10] = *(float *)(*pauVar2 + 8) +
                        ((float)uStack_68 - *(float *)(*pauVar2 + 8)) * fVar44;
          param_1[0xb] = fVar13 + (uStack_68._4_4_ - fVar13) * fVar39;
          param_1[8] = fVar5 + ((float)local_70 - fVar5) * fVar44;
          param_1[9] = fVar12 + (local_70._4_4_ - fVar12) * fVar39;
          param_1 = param_1 + 0xc;
        } while (param_5 != 0);
      }
    }
  }
  else {
    fVar5 = (float)_DAT_0413f320;
    fVar12 = (float)((ulong)_DAT_0413f320 >> 0x20);
    switch(param_6 + 1) {
    case 0:
      if (0 < (int)param_5) {
        pauVar2 = param_3 + 1;
        pauVar3 = param_2 + 2;
        do {
          FUN_00482310(&local_90,pauVar2,pauVar2 + -1);
          auVar63 = pauVar3[-1];
          auVar33._0_4_ = -local_90;
          auVar33._4_4_ = -fStack_8c;
          auVar33._8_4_ = -fStack_88;
          auVar33._12_4_ = -fStack_84;
          fVar13 = *(float *)(*pauVar2 + 0xc);
          auVar34 = pauVar2[1];
          auVar47._0_4_ = -*(float *)*pauVar2;
          auVar47._4_4_ = -*(float *)(*pauVar2 + 4);
          auVar47._8_4_ = -*(float *)(*pauVar2 + 8);
          auVar50._12_4_ = -fVar13;
          auVar50._0_12_ = auVar47;
          auVar54 = NEON_ext(auVar63,auVar63,4,1);
          fVar20 = auVar63._0_4_;
          fVar55 = auVar63._4_4_;
          fVar58 = auVar63._8_4_;
          fVar64 = auVar63._12_4_;
          auVar35 = NEON_ext(auVar50,auVar50,4,1);
          auVar51._12_4_ = fVar13;
          auVar51._0_12_ = auVar47;
          auVar37 = NEON_ext(auVar54,auVar54,8,1);
          auVar28 = NEON_ext(auVar33,auVar33,4,1);
          uVar46 = NEON_rev64(auVar37._0_8_,4);
          auVar63 = NEON_ext(auVar63,auVar63,8,1);
          auVar37 = NEON_ext(auVar28,auVar28,8,1);
          fVar19 = auVar63._4_4_ * auVar63._4_4_;
          auVar63 = NEON_frecpe(auVar34,4);
          uVar59 = NEON_rev64(auVar37._0_8_,4);
          auVar62 = NEON_frecps(auVar34,auVar63,4);
          fVar42 = fVar20 * auVar33._0_4_ + fVar55 * auVar33._4_4_ + fVar58 * auVar33._8_4_;
          fVar43 = fVar20 * auVar33._0_4_ + fVar55 * auVar33._4_4_ + fVar58 * auVar33._8_4_;
          fVar18 = fVar19 - fVar40;
          fVar19 = fVar19 - fVar15;
          auVar76._0_4_ = auVar47._0_4_ * fVar20;
          auVar76._4_4_ = auVar47._4_4_ * fVar55;
          auVar76._8_4_ = auVar47._8_4_ * fVar58;
          auVar76._12_4_ = fVar13 * fVar64;
          param_5 = param_5 - 1;
          fVar44 = (float)((ulong)uVar46 >> 0x20);
          auVar37 = NEON_ext(auVar51,auVar51,4,1);
          auVar37 = NEON_ext(auVar37,auVar37,8,1);
          uVar60 = NEON_rev64(auVar37._0_8_,4);
          auVar14._0_4_ = auVar63._0_4_ * auVar62._0_4_;
          auVar14._4_4_ = auVar63._4_4_ * auVar62._4_4_;
          auVar14._8_4_ = auVar63._8_4_ * auVar62._8_4_;
          auVar14._12_4_ = auVar63._12_4_ * auVar62._12_4_;
          auVar34 = NEON_frecps(auVar34,auVar14,4);
          auVar25._0_4_ = auVar28._0_4_ * fVar20 + auVar54._0_4_ * local_90;
          auVar25._4_4_ = auVar28._4_4_ * fVar55 + auVar54._4_4_ * fStack_8c;
          auVar25._8_4_ = (float)uVar59 * fVar58 + (float)uVar46 * fStack_88;
          auVar25._12_4_ = (float)((ulong)uVar59 >> 0x20) * fVar64 + fVar44 * fStack_84;
          auVar63 = NEON_ext(auVar25,auVar25,4,1);
          auVar28 = NEON_ext(auVar76,auVar76,8,1);
          auVar26._0_4_ = fVar20 * auVar35._0_4_ - auVar47._0_4_ * auVar54._0_4_;
          auVar26._4_4_ = fVar55 * auVar35._4_4_ - auVar47._4_4_ * auVar54._4_4_;
          auVar26._8_4_ = fVar58 * (float)uVar60 - auVar47._8_4_ * (float)uVar46;
          auVar26._12_4_ = fVar64 * (float)((ulong)uVar60 >> 0x20) - fVar13 * fVar44;
          auVar37 = NEON_ext(auVar26,auVar26,4,1);
          fVar44 = *(float *)pauVar3[-2];
          fVar39 = *(float *)(pauVar3[-2] + 4);
          fVar16 = *(float *)(pauVar3[-2] + 8);
          fVar31 = *(float *)(pauVar3[-2] + 0xc);
          fVar41 = (fVar20 * fVar42 - fVar18 * local_90) + auVar63._0_4_ * fVar64;
          fVar17 = (fVar55 * fVar43 - fVar19 * fStack_8c) + auVar63._4_4_ * fVar64;
          fVar18 = (fVar58 * fVar42 - fVar18 * fStack_88) + auVar25._0_4_ * fVar64;
          fVar19 = (fVar64 * fVar43 - fVar19 * fStack_84) + auVar25._4_4_ * fVar64;
          fVar20 = fVar20 * fVar13 + auVar47._0_4_ * fVar64 + auVar37._0_4_;
          fVar55 = fVar55 * fVar13 + auVar47._4_4_ * fVar64 + auVar37._4_4_;
          fVar58 = fVar58 * fVar13 + auVar47._8_4_ * fVar64 + auVar26._0_4_;
          fVar64 = auVar76._12_4_ - (auVar28._0_4_ + auVar76._0_4_ + auVar76._4_4_);
          fVar13 = (float)*param_4;
          fVar42 = (float)((ulong)*param_4 >> 0x20);
          auVar63 = pauVar3[-1];
          auVar52._0_4_ = auVar63._0_4_ * fVar20;
          auVar52._4_4_ = auVar63._4_4_ * fVar55;
          auVar52._8_4_ = auVar63._8_4_ * fVar58;
          auVar52._12_4_ = auVar63._12_4_ * fVar64;
          param_1[2] = fVar16 + fVar13 * ((fVar16 + fVar18 + fVar18) - fVar16);
          param_1[3] = fVar31 + fVar42 * ((fVar31 + fVar19 + fVar19) - fVar31);
          *param_1 = fVar44 + fVar13 * ((fVar44 + fVar41 + fVar41) - fVar44);
          param_1[1] = fVar39 + fVar42 * ((fVar39 + fVar17 + fVar17) - fVar39);
          auVar37 = NEON_ext(auVar52,auVar52,8,1);
          fVar13 = auVar37._0_4_ + auVar37._4_4_;
          fVar39 = (float)*param_4;
          fVar44 = fVar12 - fVar39;
          uVar1 = (uint5)(CONCAT44(-(uint)(auVar52._0_4_ + auVar52._4_4_ + fVar13 < 0.0),
                                   -(uint)(auVar52._0_4_ + auVar52._4_4_ + fVar13 < 0.0)) >> 0x18) &
                  0x8000000080;
          fVar13 = (float)CONCAT13((byte)uVar1 ^ (byte)((uint)(fVar5 - fVar39) >> 0x18),
                                   SUB43(fVar5 - fVar39,0));
          fVar44 = (float)(CONCAT17((byte)(uVar1 >> 0x20) ^ (byte)((uint)fVar44 >> 0x18),
                                    CONCAT16((char)((uint)fVar44 >> 0x10),
                                             CONCAT15((char)((uint)fVar44 >> 8),
                                                      CONCAT14(SUB41(fVar44,0),fVar13)))) >> 0x20);
          param_1[6] = fVar58 * fVar39 + auVar63._8_4_ * fVar13;
          param_1[7] = fVar64 * fVar39 + auVar63._12_4_ * fVar44;
          param_1[4] = fVar20 * fVar39 + auVar63._0_4_ * fVar13;
          param_1[5] = fVar55 * fVar39 + auVar63._4_4_ * fVar44;
          auVar63 = *pauVar3;
          fVar13 = (float)*param_4;
          fVar44 = (float)((ulong)*param_4 >> 0x20);
          auVar8._0_8_ = CONCAT44(auVar63._4_4_ +
                                  (auVar14._4_4_ * auVar34._4_4_ * *(float *)(*pauVar3 + 4) -
                                  auVar63._4_4_) * fVar44,
                                  auVar63._0_4_ +
                                  (auVar14._0_4_ * auVar34._0_4_ * *(float *)*pauVar3 -
                                  auVar63._0_4_) * fVar13);
          auVar8._8_4_ = auVar63._8_4_ +
                         (auVar14._8_4_ * auVar34._8_4_ * *(float *)(*pauVar3 + 8) - auVar63._8_4_)
                         * fVar13;
          auVar8._12_4_ =
               auVar63._12_4_ + (*(float *)(*pauVar3 + 0xc) * 0.0 - auVar63._12_4_) * fVar44;
          *(long *)(param_1 + 10) = auVar8._8_8_;
          *(undefined8 *)(param_1 + 8) = auVar8._0_8_;
          param_1 = param_1 + 0xc;
          pauVar2 = pauVar2 + 3;
          pauVar3 = pauVar3 + 3;
        } while (param_5 != 0);
      }
      break;
    case 1:
      if (0 < (int)param_5) {
        do {
          fVar40 = *(float *)*param_2;
          fVar15 = *(float *)(*param_2 + 4);
          fVar13 = *(float *)(*param_2 + 0xc);
          fVar44 = *(float *)param_2[1];
          fVar39 = *(float *)(param_2[1] + 4);
          fVar16 = *(float *)(param_2[1] + 8);
          fVar31 = *(float *)(param_2[1] + 0xc);
          fVar41 = *(float *)*param_3;
          fVar17 = *(float *)(*param_3 + 4);
          fVar18 = *(float *)(*param_3 + 0xc);
          fVar19 = *(float *)param_3[1];
          fVar20 = *(float *)(param_3[1] + 4);
          fVar55 = *(float *)(param_3[1] + 8);
          fVar58 = *(float *)(param_3[1] + 0xc);
          param_5 = param_5 - 1;
          fVar42 = (float)*param_4;
          fVar43 = (float)((ulong)*param_4 >> 0x20);
          auVar38._0_4_ = fVar44 * fVar19;
          auVar38._4_4_ = fVar39 * fVar20;
          auVar38._8_4_ = fVar16 * fVar55;
          auVar38._12_4_ = fVar31 * fVar58;
          auVar63 = NEON_ext(auVar38,auVar38,8,1);
          fVar64 = auVar63._0_4_ + auVar63._4_4_;
          param_1[2] = *(float *)(*param_2 + 8) +
                       (*(float *)(*param_3 + 8) - *(float *)(*param_2 + 8)) * fVar42;
          param_1[3] = fVar13 + (fVar18 - fVar13) * fVar43;
          *param_1 = fVar40 + (fVar41 - fVar40) * fVar42;
          param_1[1] = fVar15 + (fVar17 - fVar15) * fVar43;
          fVar45 = (float)*param_4;
          fVar40 = fVar12 - fVar45;
          uVar1 = (uint5)(CONCAT44(-(uint)(auVar38._0_4_ + auVar38._4_4_ + fVar64 < 0.0),
                                   -(uint)(auVar38._0_4_ + auVar38._4_4_ + fVar64 < 0.0)) >> 0x18) &
                  0x8000000080;
          fVar43 = (float)CONCAT13((byte)uVar1 ^ (byte)((uint)(fVar5 - fVar45) >> 0x18),
                                   SUB43(fVar5 - fVar45,0));
          fVar66 = (float)(CONCAT17((byte)(uVar1 >> 0x20) ^ (byte)((uint)fVar40 >> 0x18),
                                    CONCAT16((char)((uint)fVar40 >> 0x10),
                                             CONCAT15((char)((uint)fVar40 >> 8),
                                                      CONCAT14(SUB41(fVar40,0),fVar43)))) >> 0x20);
          fVar40 = *(float *)param_3[2];
          fVar15 = *(float *)(param_3[2] + 4);
          fVar13 = *(float *)(param_3[2] + 8);
          fVar41 = *(float *)(param_3[2] + 0xc);
          fVar17 = *(float *)param_2[2];
          fVar18 = *(float *)(param_2[2] + 4);
          fVar64 = *(float *)(param_2[2] + 8);
          fVar42 = *(float *)(param_2[2] + 0xc);
          param_1[6] = fVar55 * fVar45 + fVar16 * fVar43;
          param_1[7] = fVar58 * fVar45 + fVar31 * fVar66;
          param_1[4] = fVar19 * fVar45 + fVar44 * fVar43;
          param_1[5] = fVar20 * fVar45 + fVar39 * fVar66;
          param_3 = param_3 + 3;
          fVar44 = (float)*param_4;
          fVar39 = (float)((ulong)*param_4 >> 0x20);
          param_2 = param_2 + 3;
          param_1[10] = fVar64 + (fVar13 - fVar64) * fVar44;
          param_1[0xb] = fVar42 + (fVar41 - fVar42) * fVar39;
          param_1[8] = fVar17 + (fVar40 - fVar17) * fVar44;
          param_1[9] = fVar18 + (fVar15 - fVar18) * fVar39;
          param_1 = param_1 + 0xc;
        } while (param_5 != 0);
      }
      break;
    case 2:
      if (0 < (int)param_5) {
        param_3 = param_3 + 1;
        do {
          auVar63 = *param_3;
          fVar13 = *(float *)param_3[1];
          fVar44 = *(float *)(param_3[1] + 4);
          fVar39 = *(float *)(param_3[1] + 8);
          fVar16 = *(float *)(param_3[1] + 0xc);
          auVar34 = *param_2;
          auVar37 = param_2[1];
          auVar28 = NEON_ext(auVar63,auVar63,4,1);
          auVar35 = NEON_ext(auVar34,auVar34,4,1);
          auVar54 = NEON_ext(auVar28,auVar28,8,1);
          auVar62 = NEON_ext(auVar35,auVar35,8,1);
          uVar59 = NEON_rev64(auVar62._0_8_,4);
          uVar46 = NEON_rev64(auVar54._0_8_,4);
          fVar31 = auVar63._0_4_;
          fVar43 = auVar34._0_4_;
          fVar41 = auVar63._4_4_;
          fVar66 = auVar34._4_4_;
          fVar17 = auVar63._8_4_;
          fVar45 = auVar34._8_4_;
          fVar55 = auVar63._12_4_;
          fVar56 = auVar34._12_4_;
          auVar63 = NEON_ext(auVar63,auVar63,8,1);
          fVar58 = auVar63._4_4_ * auVar63._4_4_;
          auVar63 = NEON_ext(auVar37,auVar37,4,1);
          fVar57 = auVar37._0_4_;
          fVar77 = fVar31 * fVar57;
          fVar81 = auVar37._4_4_;
          fVar79 = fVar41 * fVar81;
          fVar65 = auVar37._8_4_;
          fVar69 = auVar37._12_4_;
          fVar64 = fVar55 * fVar69;
          auVar34 = NEON_ext(auVar63,auVar63,8,1);
          uVar60 = NEON_rev64(auVar34._0_8_,4);
          fVar18 = (float)((ulong)uVar46 >> 0x20);
          fVar20 = fVar58 - fVar40;
          fVar58 = fVar58 - fVar15;
          fVar42 = fVar31 * fVar43 + fVar41 * fVar66 + fVar17 * fVar45;
          fVar78 = fVar31 * fVar43 + fVar41 * fVar66 + fVar17 * fVar45;
          auVar71._0_4_ = fVar31 * auVar35._0_4_ - fVar43 * auVar28._0_4_;
          auVar71._4_4_ = fVar41 * auVar35._4_4_ - fVar66 * auVar28._4_4_;
          auVar71._8_4_ = fVar17 * (float)uVar59 - fVar45 * (float)uVar46;
          auVar71._12_4_ = fVar55 * (float)((ulong)uVar59 >> 0x20) - fVar56 * fVar18;
          param_5 = param_5 - 1;
          auVar68._0_4_ = fVar31 * auVar63._0_4_ - auVar28._0_4_ * fVar57;
          auVar68._4_4_ = fVar41 * auVar63._4_4_ - auVar28._4_4_ * fVar81;
          auVar68._8_4_ = fVar17 * (float)uVar60 - (float)uVar46 * fVar65;
          auVar68._12_4_ = fVar55 * (float)((ulong)uVar60 >> 0x20) - fVar18 * fVar69;
          auVar37 = NEON_ext(auVar71,auVar71,4,1);
          auVar34 = NEON_ext(auVar68,auVar68,4,1);
          auVar28._4_4_ = fVar79;
          auVar28._0_4_ = fVar77;
          auVar28._8_4_ = fVar17 * fVar65;
          auVar28._12_4_ = fVar64;
          auVar62._4_4_ = fVar79;
          auVar62._0_4_ = fVar77;
          auVar62._8_4_ = fVar17 * fVar65;
          auVar62._12_4_ = fVar64;
          auVar63 = NEON_ext(auVar28,auVar62,8,1);
          fVar18 = fVar43 * fVar20 + fVar31 * fVar42 + auVar37._0_4_ * fVar55;
          fVar19 = fVar66 * fVar58 + fVar41 * fVar78 + auVar37._4_4_ * fVar55;
          fVar20 = fVar45 * fVar20 + fVar17 * fVar42 + auVar71._0_4_ * fVar55;
          fVar58 = fVar56 * fVar58 + fVar55 * fVar78 + auVar71._4_4_ * fVar55;
          fVar78 = fVar31 * fVar69 + fVar57 * fVar55 + auVar34._0_4_;
          fVar80 = fVar41 * fVar69 + fVar81 * fVar55 + auVar34._4_4_;
          fVar70 = fVar17 * fVar69 + fVar65 * fVar55 + auVar68._0_4_;
          fVar64 = fVar64 - (fVar77 + fVar79 + auVar63._0_4_);
          fVar31 = *(float *)param_3[-1];
          fVar41 = *(float *)(param_3[-1] + 4);
          pauVar2 = param_3 + -1;
          fVar17 = *(float *)(param_3[-1] + 0xc);
          auVar72._0_4_ = fVar57 * fVar78;
          auVar72._4_4_ = fVar81 * fVar80;
          auVar72._8_4_ = fVar65 * fVar70;
          auVar72._12_4_ = fVar69 * fVar64;
          param_3 = param_3 + 3;
          fVar55 = (float)*param_4;
          fVar42 = (float)((ulong)*param_4 >> 0x20);
          param_1[2] = fVar45 + fVar55 * ((*(float *)(*pauVar2 + 8) + fVar20 + fVar20) - fVar45);
          param_1[3] = fVar56 + fVar42 * ((fVar17 + fVar58 + fVar58) - fVar56);
          *param_1 = fVar43 + fVar55 * ((fVar31 + fVar18 + fVar18) - fVar43);
          param_1[1] = fVar66 + fVar42 * ((fVar41 + fVar19 + fVar19) - fVar66);
          auVar63 = NEON_ext(auVar72,auVar72,8,1);
          fVar31 = auVar63._0_4_ + auVar63._4_4_;
          fVar17 = (float)*param_4;
          fVar41 = fVar12 - fVar17;
          uVar1 = (uint5)(CONCAT44(-(uint)(auVar72._0_4_ + auVar72._4_4_ + fVar31 < 0.0),
                                   -(uint)(auVar72._0_4_ + auVar72._4_4_ + fVar31 < 0.0)) >> 0x18) &
                  0x8000000080;
          fVar31 = (float)CONCAT13((byte)uVar1 ^ (byte)((uint)(fVar5 - fVar17) >> 0x18),
                                   SUB43(fVar5 - fVar17,0));
          fVar41 = (float)(CONCAT17((byte)(uVar1 >> 0x20) ^ (byte)((uint)fVar41 >> 0x18),
                                    CONCAT16((char)((uint)fVar41 >> 0x10),
                                             CONCAT15((char)((uint)fVar41 >> 8),
                                                      CONCAT14(SUB41(fVar41,0),fVar31)))) >> 0x20);
          param_1[6] = fVar70 * fVar17 + fVar65 * fVar31;
          param_1[7] = fVar64 * fVar17 + fVar69 * fVar41;
          param_1[4] = fVar78 * fVar17 + fVar57 * fVar31;
          param_1[5] = fVar80 * fVar17 + fVar81 * fVar41;
          fVar31 = *(float *)param_2[2];
          fVar41 = *(float *)(param_2[2] + 4);
          fVar17 = *(float *)(param_2[2] + 8);
          fVar18 = *(float *)(param_2[2] + 0xc);
          param_2 = param_2 + 3;
          fVar19 = (float)*param_4;
          fVar20 = (float)((ulong)*param_4 >> 0x20);
          param_1[10] = fVar17 + (fVar39 * fVar17 - fVar17) * fVar19;
          param_1[0xb] = fVar18 + (fVar16 * fVar18 - fVar18) * fVar20;
          param_1[8] = fVar31 + (fVar13 * fVar31 - fVar31) * fVar19;
          param_1[9] = fVar41 + (fVar44 * fVar41 - fVar41) * fVar20;
          param_1 = param_1 + 0xc;
        } while (param_5 != 0);
      }
      break;
    case 3:
      if (0 < (int)param_5) {
        param_2 = param_2 + 1;
        do {
          auVar63 = *param_2;
          fVar13 = *(float *)param_2[1];
          fVar44 = *(float *)(param_2[1] + 4);
          fVar39 = *(float *)(param_2[1] + 8);
          fVar16 = *(float *)(param_2[1] + 0xc);
          auVar37 = *param_3;
          auVar34 = param_3[1];
          auVar28 = NEON_ext(auVar63,auVar63,4,1);
          auVar35 = NEON_ext(auVar37,auVar37,4,1);
          auVar54 = NEON_ext(auVar28,auVar28,8,1);
          auVar62 = NEON_ext(auVar35,auVar35,8,1);
          uVar59 = NEON_rev64(auVar62._0_8_,4);
          uVar46 = NEON_rev64(auVar54._0_8_,4);
          fVar19 = auVar63._0_4_;
          fVar17 = auVar37._0_4_;
          fVar20 = auVar63._4_4_;
          fVar18 = auVar37._4_4_;
          fVar55 = auVar63._8_4_;
          fVar43 = auVar37._8_4_;
          fVar58 = auVar63._12_4_;
          auVar63 = NEON_ext(auVar63,auVar63,8,1);
          fVar45 = auVar34._0_4_;
          fVar56 = auVar34._4_4_;
          fVar57 = auVar34._8_4_;
          fVar65 = auVar34._12_4_;
          fVar41 = auVar63._4_4_ * auVar63._4_4_;
          fVar78 = fVar19 * fVar45;
          fVar80 = fVar20 * fVar56;
          fVar81 = fVar58 * fVar65;
          fVar31 = fVar41 - fVar40;
          fVar41 = fVar41 - fVar15;
          auVar63 = NEON_ext(auVar34,auVar34,4,1);
          auVar34 = NEON_ext(auVar63,auVar63,8,1);
          uVar60 = NEON_rev64(auVar34._0_8_,4);
          fVar64 = (float)((ulong)uVar46 >> 0x20);
          param_5 = param_5 - 1;
          fVar66 = fVar19 * fVar17 + fVar20 * fVar18 + fVar55 * fVar43;
          fVar69 = fVar19 * fVar17 + fVar20 * fVar18 + fVar55 * fVar43;
          auVar54._0_4_ = fVar19 * auVar35._0_4_ - fVar17 * auVar28._0_4_;
          auVar54._4_4_ = fVar20 * auVar35._4_4_ - fVar18 * auVar28._4_4_;
          auVar54._8_4_ = fVar55 * (float)uVar59 - fVar43 * (float)uVar46;
          auVar54._12_4_ = fVar58 * (float)((ulong)uVar59 >> 0x20) - auVar37._12_4_ * fVar64;
          auVar62 = NEON_ext(auVar54,auVar54,4,1);
          auVar35._0_4_ = fVar19 * auVar63._0_4_ - auVar28._0_4_ * fVar45;
          auVar35._4_4_ = fVar20 * auVar63._4_4_ - auVar28._4_4_ * fVar56;
          auVar35._8_4_ = fVar55 * (float)uVar60 - (float)uVar46 * fVar57;
          auVar35._12_4_ = fVar58 * (float)((ulong)uVar60 >> 0x20) - fVar64 * fVar65;
          auVar28 = NEON_ext(auVar35,auVar35,4,1);
          auVar63._4_4_ = fVar80;
          auVar63._0_4_ = fVar78;
          auVar63._8_4_ = fVar55 * fVar57;
          auVar63._12_4_ = fVar81;
          auVar34._4_4_ = fVar80;
          auVar34._0_4_ = fVar78;
          auVar34._8_4_ = fVar55 * fVar57;
          auVar34._12_4_ = fVar81;
          auVar63 = NEON_ext(auVar63,auVar34,8,1);
          fVar64 = fVar17 * fVar31 + fVar19 * fVar66 + auVar62._0_4_ * fVar58;
          fVar42 = fVar18 * fVar41 + fVar20 * fVar69 + auVar62._4_4_ * fVar58;
          fVar43 = fVar43 * fVar31 + fVar55 * fVar66 + auVar54._0_4_ * fVar58;
          fVar66 = auVar37._12_4_ * fVar41 + fVar58 * fVar69 + auVar54._4_4_ * fVar58;
          fVar45 = fVar19 * fVar65 + fVar45 * fVar58 + auVar28._0_4_;
          fVar56 = fVar20 * fVar65 + fVar56 * fVar58 + auVar28._4_4_;
          fVar57 = fVar55 * fVar65 + fVar57 * fVar58 + auVar35._0_4_;
          fVar81 = fVar81 - (fVar78 + fVar80 + auVar63._0_4_);
          fVar31 = *(float *)param_2[-1];
          fVar41 = *(float *)(param_2[-1] + 4);
          fVar17 = *(float *)(param_2[-1] + 8);
          fVar18 = *(float *)(param_2[-1] + 0xc);
          param_2 = param_2 + 3;
          auVar37._0_4_ = fVar19 * fVar45;
          auVar37._4_4_ = fVar20 * fVar56;
          auVar37._8_4_ = fVar55 * fVar57;
          auVar37._12_4_ = fVar58 * fVar81;
          fVar65 = (float)*param_4;
          fVar69 = (float)((ulong)*param_4 >> 0x20);
          param_1[2] = fVar17 + fVar65 * ((fVar17 + fVar43 + fVar43) - fVar17);
          param_1[3] = fVar18 + fVar69 * ((fVar18 + fVar66 + fVar66) - fVar18);
          *param_1 = fVar31 + fVar65 * ((fVar31 + fVar64 + fVar64) - fVar31);
          param_1[1] = fVar41 + fVar69 * ((fVar41 + fVar42 + fVar42) - fVar41);
          auVar63 = NEON_ext(auVar37,auVar37,8,1);
          fVar31 = auVar63._0_4_ + auVar63._4_4_;
          fVar17 = (float)*param_4;
          fVar41 = fVar12 - fVar17;
          uVar1 = (uint5)(CONCAT44(-(uint)(auVar37._0_4_ + auVar37._4_4_ + fVar31 < 0.0),
                                   -(uint)(auVar37._0_4_ + auVar37._4_4_ + fVar31 < 0.0)) >> 0x18) &
                  0x8000000080;
          fVar31 = (float)CONCAT13((byte)uVar1 ^ (byte)((uint)(fVar5 - fVar17) >> 0x18),
                                   SUB43(fVar5 - fVar17,0));
          fVar41 = (float)(CONCAT17((byte)(uVar1 >> 0x20) ^ (byte)((uint)fVar41 >> 0x18),
                                    CONCAT16((char)((uint)fVar41 >> 0x10),
                                             CONCAT15((char)((uint)fVar41 >> 8),
                                                      CONCAT14(SUB41(fVar41,0),fVar31)))) >> 0x20);
          param_1[6] = fVar57 * fVar17 + fVar55 * fVar31;
          param_1[7] = fVar81 * fVar17 + fVar58 * fVar41;
          param_1[4] = fVar45 * fVar17 + fVar19 * fVar31;
          param_1[5] = fVar56 * fVar17 + fVar20 * fVar41;
          fVar31 = *(float *)param_3[2];
          fVar41 = *(float *)(param_3[2] + 4);
          pauVar2 = param_3 + 2;
          fVar17 = *(float *)(param_3[2] + 0xc);
          param_3 = param_3 + 3;
          fVar18 = (float)*param_4;
          fVar19 = (float)((ulong)*param_4 >> 0x20);
          param_1[10] = fVar39 + (fVar39 * *(float *)(*pauVar2 + 8) - fVar39) * fVar18;
          param_1[0xb] = fVar16 + (fVar16 * fVar17 - fVar16) * fVar19;
          param_1[8] = fVar13 + (fVar13 * fVar31 - fVar13) * fVar18;
          param_1[9] = fVar44 + (fVar44 * fVar41 - fVar44) * fVar19;
          param_1 = param_1 + 0xc;
        } while (param_5 != 0);
      }
    }
  }
  return;
}

