
void FUN_0032e328(undefined4 param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,int param_8,undefined8 *param_9,
                 undefined8 *param_10)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  long lVar13;
  long lVar14;
  float fVar15;
  float __y;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
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
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  
  __y = *(float *)(param_7 + 0x48);
  uVar17 = *param_10;
  fVar15 = __y * *(float *)(*(long *)(param_7 + 0x1e8) + (long)param_8 * 0x10 + 0xc);
  uVar19 = *param_9;
  param_3[1] = CONCAT44((float)((ulong)param_9[1] >> 0x20) +
                        (float)((ulong)param_10[1] >> 0x20) * fVar15,
                        (float)param_9[1] + (float)param_10[1] * fVar15);
  *param_3 = CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar17 >> 0x20) * fVar15,
                      (float)uVar19 + (float)uVar17 * fVar15);
  fVar15 = *(float *)(*(long *)(*(long *)(param_7 + 0x240) + 0x18) + 0x70);
  if (fVar15 == 1.0) {
    *(undefined8 *)(param_4 + 2) = param_10[1];
    *(undefined8 *)param_4 = *param_10;
    fVar15 = *(float *)(param_7 + 0x72c);
    if (fVar15 <= 0.0) goto LAB_0032e3d0;
LAB_0032e400:
    lVar14 = *(long *)(param_7 + 0xa0);
    fVar18 = fVar15 * *(float *)(lVar14 + 0x860);
    fVar16 = fVar15 * *(float *)(lVar14 + 0x864);
    fVar15 = fVar15 * *(float *)(lVar14 + 0x868);
    if (*(char *)(lVar14 + 0x839) == '\0') {
      uVar17 = *(undefined8 *)param_4;
      *param_4 = (float)uVar17 + fVar18 * __y;
      param_4[1] = (float)((ulong)uVar17 >> 0x20) + fVar16 * __y;
      fVar26 = (float)*(undefined8 *)(param_4 + 2) + fVar15 * __y;
    }
    else {
      if (*(char *)(lVar14 + 0x793) == '\x01') {
        lVar14 = (long)param_8 * 0x10;
        pfVar2 = (float *)(*(long *)(param_7 + 0x210) + lVar14);
        pfVar3 = (float *)(*(long *)(param_7 + 0x218) + lVar14);
        pfVar4 = (float *)(*(long *)(param_7 + 0x220) + lVar14);
        fVar26 = *pfVar2;
        fVar27 = *pfVar3;
        fVar28 = *pfVar4;
        fVar20 = pfVar2[2];
        fVar23 = pfVar2[1];
        fVar29 = fVar26 * fVar26;
        fVar31 = fVar27 * fVar27;
        auVar35._4_4_ = fVar31;
        auVar35._0_4_ = fVar29;
        auVar35._8_4_ = fVar28 * fVar28;
        auVar35._12_4_ = 0;
        auVar6._4_4_ = fVar31;
        auVar6._0_4_ = fVar29;
        auVar6._8_4_ = fVar28 * fVar28;
        auVar6._12_4_ = 0;
        auVar35 = NEON_ext(auVar35,auVar6,8,1);
        fVar21 = pfVar3[2];
        fVar24 = pfVar3[1];
        fVar22 = pfVar4[2];
        fVar25 = pfVar4[1];
        fVar36 = SQRT(auVar35._0_4_ + fVar29 + auVar35._4_4_ + fVar31);
        fVar29 = fVar23 * fVar23;
        fVar31 = fVar24 * fVar24;
        auVar7._4_4_ = fVar31;
        auVar7._0_4_ = fVar29;
        auVar7._8_4_ = fVar25 * fVar25;
        auVar7._12_4_ = 0;
        auVar8._4_4_ = fVar31;
        auVar8._0_4_ = fVar29;
        auVar8._8_4_ = fVar25 * fVar25;
        auVar8._12_4_ = 0;
        auVar35 = NEON_ext(auVar7,auVar8,8,1);
        fVar29 = SQRT(auVar35._0_4_ + fVar29 + auVar35._4_4_ + fVar31);
        fVar30 = fVar20 * fVar20;
        fVar32 = fVar21 * fVar21;
        auVar9._4_4_ = fVar32;
        auVar9._0_4_ = fVar30;
        auVar9._8_4_ = fVar22 * fVar22;
        auVar9._12_4_ = 0;
        auVar10._4_4_ = fVar32;
        auVar10._0_4_ = fVar30;
        auVar10._8_4_ = fVar22 * fVar22;
        auVar10._12_4_ = 0;
        auVar35 = NEON_ext(auVar9,auVar10,8,1);
        fVar34 = 0.0;
        fVar31 = 0.0;
        fVar33 = 0.0;
        fVar30 = SQRT(auVar35._0_4_ + fVar30 + auVar35._4_4_ + fVar32);
        if (0.0 < fVar36) {
          fVar36 = 1.0 / fVar36;
          fVar31 = fVar26 * fVar36;
          fVar33 = fVar27 * fVar36;
          fVar34 = fVar28 * fVar36;
          if (fVar29 <= 0.0) goto LAB_0032e4ec;
LAB_0032e7e0:
          fVar29 = 1.0 / fVar29;
          fVar23 = fVar23 * fVar29;
          fVar24 = fVar24 * fVar29;
          fVar25 = fVar25 * fVar29;
        }
        else {
          if (0.0 < fVar29) goto LAB_0032e7e0;
LAB_0032e4ec:
          fVar25 = 0.0;
          fVar24 = 0.0;
          fVar23 = 0.0;
        }
        fVar27 = 0.0;
        fVar29 = 0.0;
        fVar26 = 0.0;
        if (0.0 < fVar30) {
          fVar30 = 1.0 / fVar30;
          fVar26 = fVar20 * fVar30;
          fVar29 = fVar21 * fVar30;
          fVar27 = fVar22 * fVar30;
        }
      }
      else {
        auVar11 = *(undefined1 (*) [12])(param_7 + 0x410);
        auVar12 = *(undefined1 (*) [12])(param_7 + 0x430);
        fVar31 = auVar11._0_4_;
        fVar33 = auVar11._4_4_;
        fVar26 = auVar12._0_4_;
        fVar29 = auVar12._4_4_;
        fVar34 = SUB124(*(undefined1 (*) [12])(param_7 + 0x410),8);
        fVar27 = SUB124(*(undefined1 (*) [12])(param_7 + 0x430),8);
        auVar11 = *(undefined1 (*) [12])(param_7 + 0x420);
        fVar23 = auVar11._0_4_;
        fVar24 = auVar11._4_4_;
        fVar25 = SUB124(*(undefined1 (*) [12])(param_7 + 0x420),8);
      }
      fVar26 = (fVar26 * fVar18 + fVar29 * fVar16 + fVar27 * fVar15) * __y +
               (float)*(undefined8 *)(param_4 + 2);
      *(ulong *)param_4 =
           CONCAT44((fVar23 * fVar18 + fVar24 * fVar16 + fVar25 * fVar15) * __y +
                    (float)((ulong)*(undefined8 *)param_4 >> 0x20),
                    (float)*(undefined8 *)param_4 +
                    (fVar31 * fVar18 + fVar33 * fVar16 + fVar34 * fVar15) * __y);
    }
    *(ulong *)(param_4 + 2) = (ulong)(uint)fVar26;
    *(undefined8 *)param_4 = *(undefined8 *)param_4;
    lVar14 = *(long *)(param_7 + 0x240);
    cVar5 = *(char *)(lVar14 + 3);
  }
  else {
    fVar15 = powf(fVar15,__y);
    uVar17 = *param_10;
    *(ulong *)(param_4 + 2) =
         CONCAT44((float)((ulong)param_10[1] >> 0x20) * fVar15,(float)param_10[1] * fVar15);
    *(ulong *)param_4 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar15,(float)uVar17 * fVar15);
    fVar15 = *(float *)(param_7 + 0x72c);
    if (0.0 < fVar15) goto LAB_0032e400;
LAB_0032e3d0:
    lVar14 = *(long *)(param_7 + 0x240);
    cVar5 = *(char *)(lVar14 + 3);
  }
  if (cVar5 == '\0') {
    return;
  }
  lVar1 = param_7 + 0x1d0;
  if (*(long *)(lVar14 + 0x268) != 0) {
    FUN_0032d588(param_1);
    lVar14 = *(long *)(param_7 + 0x240);
  }
  if (*(long *)(lVar14 + 0x248) != 0) {
    FUN_0032c8e4(param_1);
    lVar14 = *(long *)(param_7 + 0x240);
  }
  if (*(long *)(lVar14 + 0x250) != 0) {
    FUN_0032ca1c(param_1);
    lVar14 = *(long *)(param_7 + 0x240);
  }
  if (*(long *)(lVar14 + 600) != 0) {
    FUN_0032cbc4(param_1);
    lVar14 = *(long *)(param_7 + 0x240);
  }
  if (*(long *)(lVar14 + 0x260) != 0) {
    FUN_0032d16c(param_1);
    lVar14 = *(long *)(param_7 + 0x240);
  }
  if (*(long *)(lVar14 + 0x270) != 0) {
    FUN_0032d86c(param_1);
    lVar14 = *(long *)(param_7 + 0x240);
  }
  if (*(long *)(lVar14 + 0x280) != 0) {
    FUN_003205f0(param_3,param_4,param_7,lVar1,param_8);
    lVar14 = *(long *)(param_7 + 0x240);
  }
  if (*(long *)(lVar14 + 0x278) != 0) {
    FUN_0032de00(param_1);
    lVar14 = *(long *)(param_7 + 0x240);
  }
  lVar14 = *(long *)(lVar14 + 0x288);
  if (lVar14 != 0) {
    lVar13 = FUN_0031e3e8(param_7);
    if (*(code **)(lVar13 + 0x15e0) == (code *)0x0) {
      FUN_0032e0f4(param_1,param_3);
      lVar14 = *(long *)(*(long *)(param_7 + 0x240) + 0x290);
      goto joined_r0x0032e7a8;
    }
    (**(code **)(lVar13 + 0x15e0))
              (param_1,param_3,param_4,param_6,param_5,param_7,lVar1,lVar14,param_8);
  }
  lVar14 = *(long *)(*(long *)(param_7 + 0x240) + 0x290);
joined_r0x0032e7a8:
  if (lVar14 != 0) {
    lVar14 = FUN_0031e3e8(param_7);
    if (*(code **)(lVar14 + 0x15e8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0032e780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar14 + 0x15e8))
                (param_3,param_4,param_6,param_5,param_7,lVar1,
                 *(undefined8 *)(*(long *)(param_7 + 0x240) + 0x290),param_8);
      return;
    }
  }
  return;
}

