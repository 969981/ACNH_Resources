
void FUN_00325c10(float param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5,
                 undefined8 param_6,long param_7)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_34;
  
  lVar12 = *(long *)(param_7 + 0xa0);
  lVar15 = *(long *)(param_7 + 0x78);
  if (*(char *)(lVar12 + 0x83a) == '\0') {
    fVar27 = *param_5;
    fVar16 = *param_3;
    fVar18 = *param_4;
    if (fVar27 <= fVar16) {
      local_34 = fVar27;
      fVar19 = fmodf(fVar16,fVar27);
      uVar10 = FUN_0031e3f4(param_7);
      fVar20 = *(float *)(param_7 + 0x5c);
      fVar28 = *(float *)(lVar15 + 0x5c);
      iVar14 = *(int *)(*(long *)(param_7 + 0xa0) + 0x84c);
      pfVar1 = (float *)(*(long *)(param_7 + 0xa0) + 0x848);
      if ((uVar10 & 1) == 0) {
        pfVar1 = (float *)(param_7 + 0x6cc);
      }
      fVar24 = *pfVar1;
      uVar10 = FUN_0031e3f4(param_7);
      fVar23 = 0.0;
      iVar11 = (int)(fVar16 / fVar27);
      if (0 < iVar11) {
        uVar13 = *(uint *)(param_7 + 0xac);
        fVar23 = 0.0;
        fVar16 = 0.0;
        if ((uVar10 & 1) == 0) {
          fVar16 = (float)iVar14;
        }
        do {
          uVar10 = (ulong)uVar13;
          uVar13 = uVar13 * 0x41c64e6d + 0x3039;
          iVar11 = iVar11 + -1;
          fVar23 = fVar23 + fVar24 * fVar20 * fVar28 *
                            (((float)uVar10 * 2.3283064e-10 * -fVar16 + 100.0) / 100.0);
        } while (iVar11 != 0);
        *(uint *)(param_7 + 0xac) = uVar13;
      }
      fVar16 = *(float *)(param_7 + 0x44);
      bVar7 = false;
      bVar8 = false;
      bVar9 = false;
      if (fVar23 <= 1.0) {
        bVar7 = false;
        bVar8 = false;
        bVar9 = true;
        if (!NAN(fVar16)) {
          bVar7 = fVar16 < 0.0;
          bVar8 = fVar16 == 0.0;
          bVar9 = false;
        }
      }
      if (bVar8 || bVar7 != bVar9) {
        fVar23 = 1.0;
      }
      fVar18 = fVar18 + fVar23;
      iVar14 = (int)fVar18;
      if (0 < iVar14) {
        thunk_FUN_00328260(param_2,param_6,param_7,iVar14,0);
        FUN_0031e020(param_7,&local_34);
        fVar18 = fVar18 - (float)iVar14;
        *(undefined4 *)(param_7 + 100) = *(undefined4 *)(param_7 + 0x44);
        fVar27 = local_34;
      }
    }
    else {
      fVar19 = fVar16;
    }
    *param_3 = fVar19 + param_1;
    *param_5 = fVar27;
    *param_4 = fVar18;
  }
  else if (*(char *)(lVar15 + 0x275) != '\0') {
    fVar19 = (float)*(undefined8 *)(param_7 + 0x468);
    fVar20 = (float)((ulong)*(undefined8 *)(param_7 + 0x468) >> 0x20);
    fVar16 = (float)*(undefined8 *)(param_7 + 0x460);
    fVar18 = (float)((ulong)*(undefined8 *)(param_7 + 0x460) >> 0x20);
    fVar16 = fVar16 * fVar16;
    fVar18 = fVar18 * fVar18;
    fVar19 = fVar19 * fVar19;
    fVar20 = fVar20 * fVar20;
    fVar27 = *(float *)(lVar12 + 0x870) * param_1;
    auVar21._4_4_ = fVar18;
    auVar21._0_4_ = fVar16;
    auVar21._8_4_ = fVar19;
    auVar21._12_4_ = fVar20;
    auVar2._4_4_ = fVar18;
    auVar2._0_4_ = fVar16;
    auVar2._8_4_ = fVar19;
    auVar2._12_4_ = fVar20;
    auVar21 = NEON_ext(auVar21,auVar2,8,1);
    fVar18 = SQRT(auVar21._0_4_ + fVar16 + auVar21._4_4_ + fVar18);
    fVar16 = 0.0;
    if (*(float *)(lVar12 + 0x878) * param_1 <= fVar18) {
      fVar16 = fVar18;
    }
    if (fVar27 <= fVar16) {
      param_1 = *(float *)(lVar12 + 0x874) * param_1;
      fVar27 = fVar16;
      if (param_1 < fVar16) {
        fVar27 = param_1;
      }
    }
    fVar16 = *param_4 + fVar27;
    if ((*(float *)(lVar12 + 0x86c) != 0.0) &&
       (iVar14 = (int)(fVar16 / *(float *)(lVar12 + 0x86c)), 0 < iVar14)) {
      pfVar1 = (float *)(param_7 + 0x440);
      fVar18 = *pfVar1;
      fVar19 = *(float *)(param_7 + 0x444);
      uVar5 = *(undefined8 *)pfVar1;
      uVar3 = *(undefined8 *)pfVar1;
      pfVar1 = (float *)(param_7 + 0x448);
      fVar20 = *pfVar1;
      fVar28 = *(float *)(param_7 + 0x44c);
      uVar6 = *(undefined8 *)pfVar1;
      uVar4 = *(undefined8 *)pfVar1;
      fVar23 = (float)*(undefined8 *)(param_7 + 0x450) - fVar18;
      fVar24 = (float)((ulong)*(undefined8 *)(param_7 + 0x450) >> 0x20) - fVar19;
      fVar25 = (float)*(undefined8 *)(param_7 + 0x458) - fVar20;
      fVar26 = (float)((ulong)*(undefined8 *)(param_7 + 0x458) >> 0x20) - fVar28;
      if (fVar27 == 0.0) {
        uStack_a8 = CONCAT44(fVar28 + fVar26 * 0.0,fVar20 + fVar25 * 0.0);
        local_b0 = CONCAT44(fVar19 + fVar24 * 0.0,fVar18 + fVar23 * 0.0);
        do {
          fVar16 = fVar16 - *(float *)(*(long *)(param_7 + 0xa0) + 0x86c);
          *(undefined8 *)(param_7 + 0x448) = uStack_a8;
          *(undefined8 *)(param_7 + 0x440) = local_b0;
          *(undefined8 *)(param_7 + 0x408) = uStack_a8;
          *(undefined8 *)(param_7 + 0x400) = local_b0;
          thunk_FUN_00328260(param_2,param_6,param_7,1,0);
          iVar14 = iVar14 + -1;
          *(undefined8 *)(param_7 + 0x448) = uVar6;
          *(undefined8 *)(param_7 + 0x440) = uVar5;
          *(undefined8 *)(param_7 + 0x408) = uVar6;
          *(undefined8 *)(param_7 + 0x400) = uVar5;
        } while (iVar14 != 0);
      }
      else {
        do {
          fVar16 = fVar16 - *(float *)(*(long *)(param_7 + 0xa0) + 0x86c);
          fVar17 = fVar16 / fVar27;
          auVar22._0_8_ = CONCAT44(fVar19 + fVar24 * fVar17,fVar18 + fVar23 * fVar17);
          auVar22._8_4_ = fVar20 + fVar25 * fVar17;
          auVar22._12_4_ = fVar28 + fVar26 * fVar17;
          *(long *)(param_7 + 0x448) = auVar22._8_8_;
          *(undefined8 *)(param_7 + 0x440) = auVar22._0_8_;
          *(long *)(param_7 + 0x408) = auVar22._8_8_;
          *(undefined8 *)(param_7 + 0x400) = auVar22._0_8_;
          thunk_FUN_00328260(param_2,param_6,param_7,1,0);
          iVar14 = iVar14 + -1;
          *(undefined8 *)(param_7 + 0x448) = uVar4;
          *(undefined8 *)(param_7 + 0x440) = uVar3;
          *(undefined8 *)(param_7 + 0x408) = uVar4;
          *(undefined8 *)(param_7 + 0x400) = uVar3;
        } while (iVar14 != 0);
      }
      *(undefined4 *)(param_7 + 100) = *(undefined4 *)(param_7 + 0x44);
    }
    *param_4 = fVar16;
  }
  return;
}

