
void FUN_00669110(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  ushort *puVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  undefined1 auVar35 [16];
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  float fVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  
  piVar4 = (int *)(param_1 + 0x4de4);
  uVar10 = *(undefined4 *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0xd54) == *piVar4 + 2) {
    *(int *)(param_1 + 0x4be4 + (long)*(int *)(param_1 + 0xd58) * 4) = *(int *)(param_1 + 0xd58) + 1
    ;
    iVar11 = *(int *)(param_1 + 0xd58);
    iVar22 = iVar11 + 1;
    *(int *)(param_1 + 0xd58) = iVar22;
    *piVar4 = *piVar4 + 1;
    *(int *)(param_1 + 0x4be4 + (long)iVar22 * 4) = iVar11 + 2;
    *(int *)(param_1 + 0xd58) = *(int *)(param_1 + 0xd58) + 1;
    *piVar4 = *piVar4 + 1;
  }
  else if (*(int *)(param_1 + 0xd54) < *piVar4) {
    piVar5 = (int *)(param_1 + 0x4be0);
    iVar22 = *piVar5;
    do {
      lVar2 = param_1 + (long)iVar22 * 0x10;
      *(undefined8 *)(lVar2 + 0x1d68) = 0;
      *(undefined8 *)(lVar2 + 0x1d60) = 0;
      *(undefined4 *)(param_1 + (long)*piVar5 * 4 + 0x2760) = 0xff7fffee;
      iVar22 = *(int *)(param_1 + (long)*piVar5 * 4 + 0x4be4);
      *piVar5 = iVar22;
      iVar11 = *piVar4;
      *piVar4 = iVar11 + -1;
    } while (*(int *)(param_1 + 0xd54) < iVar11 + -1);
  }
  puVar6 = (uint *)(param_1 + (long)(int)(*(uint *)(param_1 + 0xd58) - 1) * 4 + 0x4be4);
  puVar7 = (uint *)(param_1 + 0x4be0);
  if (*puVar6 == *(uint *)(param_1 + 0xd58)) {
    *puVar6 = *puVar7;
    iVar22 = *(int *)(param_1 + 0xd54);
    fVar18 = DAT_04102e88;
  }
  else {
    uVar23 = *puVar7;
    iVar22 = *(int *)(param_1 + 0xd54);
    uVar21 = uVar23;
    if (1 < iVar22) {
      uVar12 = iVar22 - 1U & 3;
      if (2 < iVar22 - 2U) {
        iVar22 = (uVar12 + 1) - iVar22;
        lVar2 = param_1 + 0x4be4;
        do {
          iVar22 = iVar22 + 4;
          uVar21 = *(uint *)(lVar2 + (long)*(int *)(lVar2 + (long)*(int *)(lVar2 + (long)*(int *)(
                                                  lVar2 + (long)(int)uVar21 * 4) * 4) * 4) * 4);
        } while (iVar22 != 0);
      }
      if (uVar12 != 0) {
        iVar22 = -uVar12;
        do {
          uVar21 = *(uint *)(param_1 + (long)(int)uVar21 * 4 + 0x4be4);
          iVar22 = iVar22 + 1;
        } while (iVar22 != 0);
      }
    }
    *(uint *)(param_1 + (long)(int)uVar21 * 4 + 0x4be4) = uVar23;
    iVar22 = *(int *)(param_1 + 0xd54);
    fVar18 = DAT_04102e88;
  }
  DAT_04102e88 = fVar18;
  if (0 < iVar22) {
    bVar1 = (char)uVar10 - 1;
    lVar2 = param_1 + (ulong)bVar1 * 0x10;
    uVar19 = (ulong)*(uint *)(param_1 + 0xcd0);
    iVar22 = 0;
    fVar48 = *(float *)(PTR_DAT_04bd4c80 + 0xd0);
    uVar23 = *puVar7;
    uVar21 = *(uint *)(param_1 + (long)(int)*puVar7 * 4 + 0x4be4);
    do {
      lVar3 = param_1 + 0xd60;
      uVar12 = *(uint *)(param_1 + (long)(int)uVar21 * 4 + 0x4be4);
      uVar15 = uVar21 << 2;
      puVar8 = (ushort *)
               (lVar3 + (-(ulong)((uVar21 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                        (ulong)uVar15 << 2));
      bVar14 = *(byte *)(lVar3 + (long)(int)(0x2dU >> (ulong)(((uint)uVar19 & 3) << 1) & 3 ^
                                            (uint)uVar19) * 4 + 2);
      *puVar8 = (ushort)(uVar23 << 2) | 2;
      uVar20 = (long)(int)uVar15 | 1;
      *(byte *)(puVar8 + 1) = bVar1;
      puVar9 = (undefined2 *)(lVar3 + uVar20 * 4);
      *puVar9 = (short)uVar19;
      uVar19 = -(uVar19 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar19 & 0xffffffff) << 2;
      *(byte *)(puVar9 + 1) = bVar14;
      pbVar24 = (byte *)(lVar3 + uVar19 + 2);
      bVar13 = *pbVar24;
      puVar9 = (undefined2 *)(lVar3 + (((ulong)(long)(int)uVar15 >> 2) << 4 | 8));
      *(byte *)(puVar9 + 1) = bVar13;
      *puVar9 = (short)(uVar12 << 2);
      *(short *)(lVar3 + uVar19) = (short)uVar20;
      pfVar16 = (float *)(param_1 + 0x8d0 + (ulong)bVar14 * 0x10);
      fVar27 = *pfVar16;
      fVar26 = pfVar16[1];
      fVar34 = pfVar16[2];
      fVar37 = pfVar16[3];
      uVar40 = *(undefined8 *)(lVar2 + 0x8d8);
      uVar39 = *(undefined8 *)(lVar2 + 0x8d0);
      pfVar16 = (float *)(param_1 + 0x8d0 + (ulong)bVar13 * 0x10);
      fVar38 = *pfVar16;
      fVar43 = pfVar16[1];
      fVar36 = pfVar16[2];
      fVar17 = pfVar16[3];
      lVar3 = param_1 + (long)(int)uVar21 * 0x10;
      *(undefined8 *)(lVar3 + 0x1568) = uVar40;
      *(undefined8 *)(lVar3 + 0x1560) = uVar39;
      fVar31 = (float)uVar39;
      auVar46._0_4_ = fVar27 - fVar31;
      fVar32 = (float)((ulong)uVar39 >> 0x20);
      auVar46._4_4_ = fVar26 - fVar32;
      fVar33 = (float)uVar40;
      auVar46._8_4_ = fVar34 - fVar33;
      fVar34 = (float)((ulong)uVar40 >> 0x20);
      auVar46._12_4_ = fVar37 - fVar34;
      auVar25 = NEON_ext(auVar46,auVar46,4,1);
      auVar30._0_4_ = fVar38 - fVar31;
      auVar30._4_4_ = fVar43 - fVar32;
      auVar30._8_4_ = fVar36 - fVar33;
      auVar30._12_4_ = fVar17 - fVar34;
      auVar35 = NEON_ext(auVar30,auVar30,4,1);
      auVar41 = NEON_ext(auVar25,auVar25,8,1);
      auVar44 = NEON_ext(auVar35,auVar35,8,1);
      uVar39 = NEON_rev64(auVar41._0_8_,4);
      uVar40 = NEON_rev64(auVar44._0_8_,4);
      auVar41 = *(undefined1 (*) [16])(param_1 + 0x90);
      fVar37 = auVar46._0_4_ * auVar35._0_4_ - auVar30._0_4_ * auVar25._0_4_;
      fVar43 = auVar46._4_4_ * auVar35._4_4_ - auVar30._4_4_ * auVar25._4_4_;
      auVar35._0_8_ = CONCAT44(fVar43,fVar37);
      auVar35._8_4_ = auVar46._8_4_ * (float)uVar40 - auVar30._8_4_ * (float)uVar39;
      auVar35._12_4_ =
           auVar46._12_4_ * (float)((ulong)uVar40 >> 0x20) -
           auVar30._12_4_ * (float)((ulong)uVar39 >> 0x20);
      auVar25 = NEON_ext(auVar35,auVar35,4,1);
      fVar27 = auVar25._0_4_;
      fVar26 = auVar25._4_4_;
      fVar38 = fVar27 * fVar27 + fVar26 * fVar26 + fVar37 * fVar37;
      uVar39 = CONCAT44(fVar27 * fVar27 + fVar26 * fVar26 + fVar37 * fVar37,fVar38);
      *(undefined8 *)(lVar3 + 0x1d68) = auVar35._0_8_;
      *(long *)(lVar3 + 0x1d60) = auVar25._0_8_;
      if (fVar38 <= (float)*(undefined8 *)(param_1 + 0x68)) {
        FUN_00669520(param_1);
      }
      else {
        fVar31 = auVar41._0_4_ - fVar31;
        fVar32 = auVar41._4_4_ - fVar32;
        fVar33 = auVar41._8_4_ - fVar33;
        fVar34 = auVar41._12_4_ - fVar34;
        uVar40 = NEON_frsqrte(uVar39,4);
        fVar38 = (float)uVar40;
        fVar36 = (float)((ulong)uVar40 >> 0x20);
        uVar40 = NEON_frsqrts(uVar39,CONCAT44(fVar36 * fVar36,fVar38 * fVar38),4);
        fVar38 = fVar38 * (float)uVar40;
        fVar36 = fVar36 * (float)((ulong)uVar40 >> 0x20);
        auVar25._0_4_ = fVar31 * fVar27;
        auVar25._4_4_ = fVar32 * fVar26;
        auVar25._8_4_ = fVar33 * fVar37;
        auVar25._12_4_ = fVar34 * fVar43;
        uVar39 = NEON_frsqrts(uVar39,CONCAT44(fVar36 * fVar36,fVar38 * fVar38),4);
        auVar44._0_4_ = ABS(auVar46._0_4_);
        auVar44._4_4_ = ABS(auVar46._4_4_);
        auVar44._8_4_ = ABS(auVar46._8_4_);
        auVar44._12_4_ = ABS(auVar46._12_4_);
        auVar29._0_4_ = ABS(auVar30._0_4_);
        auVar29._4_4_ = ABS(auVar30._4_4_);
        auVar29._8_4_ = ABS(auVar30._8_4_);
        auVar29._12_4_ = ABS(auVar30._12_4_);
        auVar46 = NEON_ext(auVar29,auVar29,8,1);
        fVar38 = (float)uVar39 * fVar38;
        fVar32 = ABS(fVar32);
        auVar42._0_8_ = CONCAT44(fVar32,ABS(fVar31));
        auVar42._8_4_ = ABS(fVar33);
        auVar42._12_4_ = ABS(fVar34);
        auVar41 = NEON_ext(auVar44,auVar44,8,1);
        auVar45._4_4_ = auVar46._0_4_;
        auVar45._0_4_ = auVar41._0_4_;
        auVar41 = NEON_ext(auVar42,auVar42,8,1);
        auVar45._8_8_ = auVar41._0_8_;
        auVar47._4_12_ = auVar41._4_12_;
        auVar47._0_4_ = fVar32;
        auVar28._4_4_ = auVar29._4_4_;
        auVar28._0_4_ = auVar44._4_4_;
        auVar28._8_8_ = auVar47._0_8_;
        *(undefined1 *)(param_1 + (int)uVar21 + 0x2b60) = 0;
        lVar3 = param_1 + (long)(int)uVar21 * 4;
        auVar41._4_4_ = auVar29._0_4_;
        auVar41._0_4_ = auVar44._0_4_;
        auVar41._8_8_ = auVar42._0_8_;
        auVar41 = NEON_fmax(auVar41,auVar28,4);
        *(float *)(lVar3 + 0x2560) = fVar38;
        auVar41 = NEON_fmax(auVar41,auVar45,4);
        auVar46 = NEON_ext(auVar41,auVar41,8,1);
        auVar30 = NEON_ext(auVar25,auVar25,8,1);
        fVar27 = fVar18 * fVar38 * fVar48 * auVar46._0_4_ * auVar41._0_4_ * auVar41._4_4_;
        *(float *)(lVar3 + 0x2960) = fVar27;
        *(float *)(lVar3 + 0x2760) =
             fVar38 * (auVar30._0_4_ + auVar25._0_4_ + auVar25._4_4_) + fVar27;
      }
      uVar19 = (ulong)*(short *)(param_1 + (ulong)*pbVar24 * 2 + 0xcd4);
      iVar22 = iVar22 + 1;
      uVar23 = uVar21;
      uVar21 = uVar12;
    } while (iVar22 < *(int *)(param_1 + 0xd54));
  }
  return;
}

