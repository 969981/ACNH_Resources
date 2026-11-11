
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d7080(undefined1 (*param_1) [12],long param_2,int param_3,long param_4)

{
  long lVar1;
  undefined2 *puVar2;
  long lVar3;
  char cVar4;
  undefined1 (*pauVar5) [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  ushort uVar13;
  long lVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  if (0 < param_3) {
    auVar23._8_8_ = _UNK_0413f418;
    auVar23._0_8_ = DAT_0413f410;
    fVar19 = (float)*(undefined8 *)(*param_1 + 8);
    fVar20 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
    auVar10 = *param_1;
    auVar9 = *param_1;
    fVar17 = (float)*(undefined8 *)*param_1;
    fVar18 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
    pauVar5 = (undefined1 (*) [12])(param_1[1] + 4);
    fVar21 = (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
    auVar12 = *pauVar5;
    auVar11 = *pauVar5;
    auVar29._0_4_ = (float)*(undefined8 *)*pauVar5 - fVar17;
    auVar29._4_4_ = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20) - fVar18;
    auVar29._8_4_ = (float)*(undefined8 *)param_1[2] - fVar19;
    auVar29._12_4_ = fVar21 - fVar20;
    auVar27 = NEON_ext(auVar23,auVar23,8,1);
    auVar23 = NEON_ext(auVar27,auVar23,8,1);
    fVar22 = ABS(auVar29._0_4_ * auVar23._0_4_);
    fVar24 = ABS(auVar29._4_4_ * auVar23._4_4_);
    uVar26 = CONCAT44(fVar24,fVar22);
    fVar25 = ABS(auVar29._8_4_ * auVar23._8_4_);
    uVar26 = NEON_fmaxp(uVar26,uVar26,4);
    uVar26 = NEON_fmax(CONCAT44(fVar25,fVar25),uVar26,4);
    auVar23 = NEON_frecpe(auVar29,4);
    auVar28 = NEON_frecps(auVar29,auVar23,4);
    cVar4 = PTR_DAT_04bd4c68
            [-(uint)((float)((ulong)uVar26 >> 0x20) <= fVar24) & 2 |
             -(uint)((float)uVar26 <= fVar22) & 1 | -(uint)((float)uVar26 <= fVar25) & 4];
    auVar27._0_4_ = auVar23._0_4_ * auVar28._0_4_;
    auVar27._4_4_ = auVar23._4_4_ * auVar28._4_4_;
    auVar27._8_4_ = auVar23._8_4_ * auVar28._8_4_;
    auVar27._12_4_ = auVar23._12_4_ * auVar28._12_4_;
    auVar23 = NEON_frecps(auVar29,auVar27,4);
    fVar22 = auVar27._0_4_ * auVar23._0_4_ * 32766.0;
    fVar24 = auVar27._4_4_ * auVar23._4_4_ * 32766.0;
    fVar25 = auVar27._8_4_ * auVar23._8_4_ * 32766.0;
    uVar13 = 0;
    lVar14 = (long)((cVar4 + 1) % 3) * 2;
    lVar15 = (long)((cVar4 + 2) % 3) * 2;
    do {
      pauVar16 = (undefined1 (*) [16])(param_2 + (ulong)uVar13 * 0x30);
      lVar1 = param_4 + (ulong)uVar13 * 0x10;
      auVar27 = NEON_fmin(*pauVar16,pauVar16[1],4);
      auVar23 = NEON_fmax(*pauVar16,pauVar16[1],4);
      auVar23 = NEON_fmax(auVar23,pauVar16[2],4);
      auVar27 = NEON_fmin(auVar27,pauVar16[2],4);
      auVar28._12_4_ = fVar20;
      auVar28._0_12_ = auVar9;
      auVar27 = NEON_fmax(auVar27,auVar28,4);
      auVar6._12_4_ = fVar20;
      auVar6._0_12_ = auVar10;
      auVar23 = NEON_fmax(auVar23,auVar6,4);
      auVar7._12_4_ = fVar21;
      auVar7._0_12_ = auVar11;
      auVar27 = NEON_fmin(auVar27,auVar7,4);
      auVar8._12_4_ = fVar21;
      auVar8._0_12_ = auVar12;
      auVar23 = NEON_fmin(auVar23,auVar8,4);
      *(short *)(lVar1 + (long)(int)cVar4 * 2) = (short)(int)(fVar22 * (auVar27._0_4_ - fVar17));
      *(short *)(lVar1 + lVar14) = (short)(int)(fVar24 * (auVar27._4_4_ - fVar18));
      *(short *)(lVar1 + lVar15) = (short)(int)(fVar25 * (auVar27._8_4_ - fVar19));
      lVar3 = lVar1 + 8;
      *(short *)(lVar3 + (long)(int)cVar4 * 2) = (short)(int)(fVar22 * (auVar23._0_4_ - fVar17)) + 1
      ;
      *(short *)(lVar3 + lVar14) = (short)(int)(fVar24 * (auVar23._4_4_ - fVar18)) + 1;
      *(short *)(lVar3 + lVar15) = (short)(int)(fVar25 * (auVar23._8_4_ - fVar19)) + 1;
      *(ushort *)(lVar1 + 6) = uVar13;
      uVar13 = uVar13 + 1;
    } while ((int)(uint)uVar13 < param_3);
  }
  puVar2 = (undefined2 *)(param_4 + (long)param_3 * 0x10);
  *puVar2 = 0xffff;
  puVar2[8] = 0xffff;
  puVar2[0x10] = 0xffff;
  puVar2[0x18] = 0xffff;
  FUN_005d7240(param_3,param_4);
  return;
}

