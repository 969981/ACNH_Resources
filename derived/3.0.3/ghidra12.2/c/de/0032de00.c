
void FUN_0032de00(float param_1,undefined8 param_2,float *param_3,long param_4,long param_5,
                 int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  long lVar13;
  char *pcVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  undefined8 local_60;
  float local_58;
  undefined1 local_24 [4];
  
  fVar32 = *(float *)(param_4 + 0x48);
  lVar13 = (long)param_6;
  pcVar14 = *(char **)(*(long *)(param_4 + 0x240) + 0x278);
  fVar33 = *(float *)(*(long *)(param_5 + 0x18) + (long)param_6 * 0x10 + 0xc);
  if (*(int *)(pcVar14 + 0x10) == 0) {
    local_60 = *(undefined8 *)(pcVar14 + 4);
    local_58 = *(float *)(pcVar14 + 0xc);
    cVar5 = *pcVar14;
  }
  else {
    iVar4 = *(int *)(pcVar14 + 0x1c);
    if (iVar4 == 0) {
      local_58 = 0.0;
      local_60 = 0;
      cVar5 = *pcVar14;
    }
    else {
      if (*(int *)(pcVar14 + 0x14) == 0) {
        fVar16 = *(float *)(*(long *)(param_4 + 0xb0) + lVar13 * 0x20 + 0xc);
      }
      else {
        fVar16 = (float)NEON_ucvtf(*(undefined4 *)(pcVar14 + 0x18));
        param_1 = fmodf(param_1 + (float)*(int *)(pcVar14 + 0x20) *
                                  *(float *)(*(long *)(param_4 + 0x1f0) + lVar13 * 0x10) * fVar16,
                        (float)*(int *)(pcVar14 + 0x20));
        iVar4 = *(int *)(pcVar14 + 0x1c);
        fVar16 = (float)*(int *)(pcVar14 + 0x20);
      }
      local_24[0] = 0;
      local_58 = 0.0;
      local_60 = 0;
      FUN_0032c0c0(param_1 / fVar16,&local_60,local_24,pcVar14 + 0x28,iVar4,
                   *(undefined4 *)(pcVar14 + 0x24));
      cVar5 = *pcVar14;
    }
  }
  local_60._4_4_ = (float)((ulong)local_60 >> 0x20);
  if (cVar5 == '\0') {
    uVar15 = *(undefined8 *)param_3;
    *param_3 = (float)uVar15 + fVar32 * fVar33 * (float)local_60;
    param_3[1] = (float)((ulong)uVar15 >> 0x20) + fVar32 * fVar33 * local_60._4_4_;
    fVar33 = (float)*(undefined8 *)(param_3 + 2) + fVar32 * fVar33 * local_58;
    goto LAB_0032e094;
  }
  fVar17 = fVar32 * fVar33 * (float)local_60;
  fVar16 = fVar32 * fVar33 * local_60._4_4_;
  fVar32 = fVar32 * fVar33 * local_58;
  if (*(char *)(*(long *)(param_4 + 0xa0) + 0x793) == '\x01') {
    lVar13 = lVar13 * 0x10;
    pfVar1 = (float *)(*(long *)(param_5 + 0x40) + lVar13);
    pfVar2 = (float *)(*(long *)(param_5 + 0x48) + lVar13);
    pfVar3 = (float *)(*(long *)(param_5 + 0x50) + lVar13);
    fVar33 = *pfVar1;
    fVar24 = *pfVar2;
    fVar25 = *pfVar3;
    fVar18 = pfVar1[2];
    fVar26 = fVar33 * fVar33;
    fVar28 = fVar24 * fVar24;
    fVar19 = pfVar2[2];
    fVar21 = pfVar1[1];
    auVar34._4_4_ = fVar28;
    auVar34._0_4_ = fVar26;
    auVar34._8_4_ = fVar25 * fVar25;
    auVar34._12_4_ = 0;
    auVar6._4_4_ = fVar28;
    auVar6._0_4_ = fVar26;
    auVar6._8_4_ = fVar25 * fVar25;
    auVar6._12_4_ = 0;
    auVar34 = NEON_ext(auVar34,auVar6,8,1);
    fVar22 = pfVar2[1];
    fVar20 = pfVar3[2];
    fVar23 = pfVar3[1];
    fVar35 = SQRT(auVar34._0_4_ + fVar26 + auVar34._4_4_ + fVar28);
    fVar26 = fVar21 * fVar21;
    fVar28 = fVar22 * fVar22;
    auVar7._4_4_ = fVar28;
    auVar7._0_4_ = fVar26;
    auVar7._8_4_ = fVar23 * fVar23;
    auVar7._12_4_ = 0;
    auVar8._4_4_ = fVar28;
    auVar8._0_4_ = fVar26;
    auVar8._8_4_ = fVar23 * fVar23;
    auVar8._12_4_ = 0;
    auVar34 = NEON_ext(auVar7,auVar8,8,1);
    fVar26 = SQRT(auVar34._0_4_ + fVar26 + auVar34._4_4_ + fVar28);
    fVar27 = fVar18 * fVar18;
    fVar29 = fVar19 * fVar19;
    auVar9._4_4_ = fVar29;
    auVar9._0_4_ = fVar27;
    auVar9._8_4_ = fVar20 * fVar20;
    auVar9._12_4_ = 0;
    auVar10._4_4_ = fVar29;
    auVar10._0_4_ = fVar27;
    auVar10._8_4_ = fVar20 * fVar20;
    auVar10._12_4_ = 0;
    auVar34 = NEON_ext(auVar9,auVar10,8,1);
    fVar31 = 0.0;
    fVar28 = 0.0;
    fVar30 = 0.0;
    fVar27 = SQRT(auVar34._0_4_ + fVar27 + auVar34._4_4_ + fVar29);
    if (0.0 < fVar35) {
      fVar35 = 1.0 / fVar35;
      fVar28 = fVar33 * fVar35;
      fVar30 = fVar24 * fVar35;
      fVar31 = fVar25 * fVar35;
      if (fVar26 <= 0.0) goto LAB_0032e014;
LAB_0032e0d8:
      fVar26 = 1.0 / fVar26;
      fVar21 = fVar21 * fVar26;
      fVar22 = fVar22 * fVar26;
      fVar23 = fVar23 * fVar26;
    }
    else {
      if (0.0 < fVar26) goto LAB_0032e0d8;
LAB_0032e014:
      fVar23 = 0.0;
      fVar22 = 0.0;
      fVar21 = 0.0;
    }
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar33 = 0.0;
    if (0.0 < fVar27) {
      fVar27 = 1.0 / fVar27;
      fVar33 = fVar18 * fVar27;
      fVar26 = fVar19 * fVar27;
      fVar24 = fVar20 * fVar27;
    }
  }
  else {
    auVar11 = *(undefined1 (*) [12])(param_4 + 0x410);
    auVar12 = *(undefined1 (*) [12])(param_4 + 0x430);
    fVar28 = auVar11._0_4_;
    fVar30 = auVar11._4_4_;
    fVar33 = auVar12._0_4_;
    fVar26 = auVar12._4_4_;
    fVar31 = SUB124(*(undefined1 (*) [12])(param_4 + 0x410),8);
    fVar24 = SUB124(*(undefined1 (*) [12])(param_4 + 0x430),8);
    auVar11 = *(undefined1 (*) [12])(param_4 + 0x420);
    fVar21 = auVar11._0_4_;
    fVar22 = auVar11._4_4_;
    fVar23 = SUB124(*(undefined1 (*) [12])(param_4 + 0x420),8);
  }
  fVar33 = fVar33 * fVar17 + fVar26 * fVar16 + fVar24 * fVar32 + (float)*(undefined8 *)(param_3 + 2)
  ;
  *(ulong *)param_3 =
       CONCAT44(fVar21 * fVar17 + fVar22 * fVar16 + fVar23 * fVar32 +
                (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                fVar28 * fVar17 + fVar30 * fVar16 + fVar31 * fVar32 + (float)*(undefined8 *)param_3)
  ;
LAB_0032e094:
  *(ulong *)(param_3 + 2) = (ulong)(uint)fVar33;
  *(undefined8 *)param_3 = *(undefined8 *)param_3;
  return;
}

