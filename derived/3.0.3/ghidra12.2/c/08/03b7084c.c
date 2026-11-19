
void FUN_03b7084c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar18;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  float fVar24;
  float fVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  ulong uVar35;
  undefined1 auVar36 [16];
  
  if (*(char *)(param_1 + 9) != '\0') {
    return;
  }
  uVar35 = NEON_fmov(0x3f800000,4);
  fVar8 = (float)*(undefined8 *)(param_1 + 0xb0) * (float)*param_3;
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) * (float)((ulong)*param_3 >> 0x20)
  ;
  fVar10 = (float)*(undefined8 *)(param_1 + 0xb8) * (float)param_3[1];
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) *
           (float)((ulong)param_3[1] >> 0x20);
  fVar32 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  fVar30 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  fVar12 = (float)*(undefined8 *)(param_1 + 0x88) * (float)*param_2;
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) *
           (float)((ulong)*param_2 >> 0x20);
  fVar19 = ABS(fVar8);
  fVar21 = ABS(fVar9);
  fVar22 = ABS(fVar10);
  fVar23 = ABS(fVar11);
  uVar28 = *(ulong *)(param_1 + 0x98);
  uVar29 = *(ulong *)(param_1 + 0xa0);
  puVar4 = (uint *)(param_1 + 0xe0);
  lVar6 = *(long *)(param_1 + 0x70);
  lVar7 = (long)*(int *)(param_1 + 0x80) * 8;
  fVar15 = ABS(fVar12);
  fVar18 = ABS(fVar13);
  fVar24 = (float)*(undefined8 *)(param_1 + 0x30);
  fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  fVar30 = fVar30 + (fVar19 - fVar30) *
                    (float)(*puVar4 ^
                           (*puVar4 ^ *(uint *)(param_1 + 0xd0)) & -(uint)(fVar30 < fVar19));
  fVar31 = fVar31 + (fVar21 - fVar31) *
                    (float)(*(uint *)(param_1 + 0xe4) ^
                           (*(uint *)(param_1 + 0xe4) ^ *(uint *)(param_1 + 0xd4)) &
                           -(uint)(fVar31 < fVar21));
  fVar32 = fVar32 + (fVar22 - fVar32) *
                    (float)(*(uint *)(param_1 + 0xe8) ^
                           (*(uint *)(param_1 + 0xe8) ^ *(uint *)(param_1 + 0xd8)) &
                           -(uint)(fVar32 < fVar22));
  fVar33 = fVar33 + (fVar23 - fVar33) *
                    (float)(*(uint *)(param_1 + 0xec) ^
                           (*(uint *)(param_1 + 0xec) ^ *(uint *)(param_1 + 0xdc)) &
                           -(uint)(fVar33 < fVar23));
  uVar26 = uVar29 ^ (uVar29 ^ uVar28) & CONCAT44(-(uint)(fVar25 < fVar18),-(uint)(fVar24 < fVar15));
  fVar24 = fVar24 + (fVar15 - fVar24) * (float)uVar26;
  fVar25 = fVar25 + (fVar18 - fVar25) * (float)(uVar26 >> 0x20);
  uVar16 = CONCAT44(fVar25,fVar24);
  auVar36._4_4_ = fVar31;
  auVar36._0_4_ = fVar30;
  auVar36._8_4_ = fVar32;
  auVar36._12_4_ = fVar33;
  auVar36 = NEON_frecpe(auVar36,4);
  uVar27 = NEON_frecpe(uVar16,4);
  fVar15 = (float)*(undefined8 *)(param_1 + 0xa8);
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  *(undefined8 *)(param_1 + 0x30) = uVar16;
  uVar26 = CONCAT44(fVar18 * (float)((ulong)uVar27 >> 0x20),fVar15 * (float)uVar27);
  auVar34._0_4_ = -(uint)(*(float *)(param_1 + 0xf0) < fVar30);
  auVar34._4_4_ = -(uint)(*(float *)(param_1 + 0xf4) < fVar31);
  auVar34._8_4_ = -(uint)(*(float *)(param_1 + 0xf8) < fVar32);
  auVar34._12_4_ = -(uint)(*(float *)(param_1 + 0xfc) < fVar33);
  uVar26 = uVar26 ^ (uVar26 ^ uVar35) & ~CONCAT44(-(uint)(fVar18 < fVar25),-(uint)(fVar15 < fVar24))
  ;
  auVar20._0_4_ = *(float *)(param_1 + 0xf0) * auVar36._0_4_;
  auVar20._4_4_ = *(float *)(param_1 + 0xf4) * auVar36._4_4_;
  auVar20._8_4_ = *(float *)(param_1 + 0xf8) * auVar36._8_4_;
  auVar20._12_4_ = *(float *)(param_1 + 0xfc) * auVar36._12_4_;
  auVar36 = NEON_fmov(0x3f800000,4);
  auVar20 = auVar20 ^ (auVar20 ^ auVar36) & ~auVar34;
  fVar15 = (float)uVar26;
  fVar22 = (float)*(undefined8 *)(param_1 + 0x50);
  fVar18 = (float)(uVar26 >> 0x20);
  fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar33,fVar32);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar31,fVar30);
  uVar28 = uVar28 ^ (uVar28 ^ uVar29) & ~CONCAT44(-(uint)(fVar18 < fVar23),-(uint)(fVar15 < fVar22))
  ;
  fVar22 = fVar22 + (fVar15 - fVar22) * (float)uVar28;
  fVar23 = fVar23 + (fVar18 - fVar23) * (float)(uVar28 >> 0x20);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  fVar19 = (float)*(undefined8 *)(param_1 + 0x68);
  fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  *(ulong *)(param_1 + 0x50) = CONCAT44(fVar23,fVar22);
  *(ulong *)(param_1 + 0x68) =
       CONCAT44(fVar21 + (auVar20._12_4_ - fVar21) *
                         (float)(*(uint *)(param_1 + 0xec) ^
                                (*(uint *)(param_1 + 0xec) ^ *(uint *)(param_1 + 0xdc)) &
                                -(uint)(auVar20._12_4_ < fVar21)),
                fVar19 + (auVar20._8_4_ - fVar19) *
                         (float)(*(uint *)(param_1 + 0xe8) ^
                                (*(uint *)(param_1 + 0xe8) ^ *(uint *)(param_1 + 0xd8)) &
                                -(uint)(auVar20._8_4_ < fVar19)));
  *(ulong *)(param_1 + 0x60) =
       CONCAT44(fVar18 + (auVar20._4_4_ - fVar18) *
                         (float)(*(uint *)(param_1 + 0xe4) ^
                                (*(uint *)(param_1 + 0xe4) ^ *(uint *)(param_1 + 0xd4)) &
                                -(uint)(auVar20._4_4_ < fVar18)),
                fVar15 + (auVar20._0_4_ - fVar15) *
                         (float)(*puVar4 ^
                                (*puVar4 ^ *(uint *)(param_1 + 0xd0)) &
                                -(uint)(auVar20._0_4_ < fVar15)));
  uVar16 = *(undefined8 *)(lVar6 + lVar7);
  *param_2 = CONCAT44(fVar23 * (float)((ulong)uVar16 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20),
                      fVar22 * (float)uVar16 * (float)*(undefined8 *)(param_1 + 0x90));
  *(ulong *)(lVar6 + lVar7) = CONCAT44(fVar13,fVar12);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  lVar6 = (long)*(int *)(param_1 + 0x84) * 0x10;
  iVar1 = *(int *)(param_1 + 0x80) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  *(int *)(param_1 + 0x80) = iVar1 - iVar3 * iVar2;
  lVar7 = *(long *)(param_1 + 0x78);
  puVar5 = (undefined8 *)(lVar7 + lVar6);
  uVar14 = puVar5[1];
  uVar27 = *puVar5;
  uVar17 = *(undefined8 *)(param_1 + 0xc0);
  param_3[1] = CONCAT44((float)((ulong)uVar14 >> 0x20) *
                        (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) *
                        (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20),
                        (float)uVar14 * (float)*(undefined8 *)(param_1 + 0x68) *
                        (float)*(undefined8 *)(param_1 + 200));
  *param_3 = CONCAT44((float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar16 >> 0x20) *
                      (float)((ulong)uVar17 >> 0x20),(float)uVar27 * (float)uVar16 * (float)uVar17);
  puVar5 = (undefined8 *)(lVar7 + lVar6);
  puVar5[1] = CONCAT44(fVar11,fVar10);
  *puVar5 = CONCAT44(fVar9,fVar8);
  iVar2 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x84) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  *(int *)(param_1 + 0x84) = iVar1 - iVar3 * iVar2;
  return;
}

