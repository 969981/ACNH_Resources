
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005d7cd0(undefined1 (*param_1) [12],undefined8 param_2,long param_3,long param_4,
                undefined8 param_5,undefined8 *param_6,long param_7,long *param_8)

{
  undefined1 (*pauVar1) [12];
  ushort uVar2;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined *puVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  byte bVar22;
  ulong uVar23;
  byte *pbVar24;
  long lVar25;
  int iVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  int iVar37;
  uint uVar38;
  undefined8 uVar39;
  int iVar43;
  int iVar44;
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar45;
  int iVar48;
  int iVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  float fVar51;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  
  puVar15 = PTR_DAT_04bd4d90;
  uVar39 = *(undefined8 *)*param_1;
  auVar14 = *param_1;
  auVar13 = *param_1;
  fStack_48 = (float)*(undefined8 *)(*param_1 + 8);
  fStack_44 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_1[1] + 4);
  uVar10 = *(undefined8 *)*pauVar1;
  auVar12 = *pauVar1;
  auVar11 = *pauVar1;
  fStack_58 = (float)*(undefined8 *)param_1[2];
  fStack_54 = (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
  uVar28 = *param_6;
  lVar17 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
  if (lVar17 != 0) {
    FUN_00443a00(lVar17,"TtVP LANDSCAPE NATIVE ITERATION");
  }
  lVar17 = param_8[1];
  iVar37 = *(int *)(lVar17 + 0x1d0);
  if (iVar37 < 1) {
    iVar26 = 0;
    lVar17 = FUN_0043c4e0(*(undefined2 *)puVar15);
  }
  else {
    auVar33._8_8_ = _UNK_0413f418;
    auVar33._0_8_ = DAT_0413f410;
    fVar50 = (float)uVar39;
    fVar51 = (float)((ulong)uVar39 >> 0x20);
    auVar29._0_4_ = (float)uVar10 - fVar50;
    auVar29._4_4_ = (float)((ulong)uVar10 >> 0x20) - fVar51;
    auVar29._8_4_ = fStack_58 - fStack_48;
    auVar29._12_4_ = fStack_54 - fStack_44;
    auVar41 = NEON_ext(auVar33,auVar33,8,1);
    auVar36 = NEON_frecpe(auVar29,4);
    auVar33 = NEON_ext(auVar41,auVar33,8,1);
    auVar46 = NEON_frecps(auVar29,auVar36,4);
    fVar32 = ABS(auVar29._0_4_ * auVar33._0_4_);
    fVar34 = ABS(auVar29._4_4_ * auVar33._4_4_);
    uVar39 = CONCAT44(fVar34,fVar32);
    fVar35 = ABS(auVar29._8_4_ * auVar33._8_4_);
    uVar39 = NEON_fmaxp(uVar39,uVar39,4);
    auVar41._0_4_ = auVar36._0_4_ * auVar46._0_4_;
    auVar41._4_4_ = auVar36._4_4_ * auVar46._4_4_;
    auVar41._8_4_ = auVar36._8_4_ * auVar46._8_4_;
    auVar41._12_4_ = auVar36._12_4_ * auVar46._12_4_;
    uVar39 = NEON_fmax(CONCAT44(fVar35,fVar35),uVar39,4);
    auVar29 = NEON_frecps(auVar29,auVar41,4);
    iVar26 = 0;
    lVar19 = 0;
    fVar27 = auVar41._0_4_ * auVar29._0_4_ * 32766.0;
    fVar30 = auVar41._4_4_ * auVar29._4_4_ * 32766.0;
    fVar31 = auVar41._8_4_ * auVar29._8_4_ * 32766.0;
    cVar6 = (&DAT_0413f6c0)
            [-(uint)((float)((ulong)uVar39 >> 0x20) <= fVar34) & 2 |
             -(uint)((float)uVar39 <= fVar32) & 1 | -(uint)((float)uVar39 <= fVar35) & 4];
    lVar20 = (long)((cVar6 + 1) % 3) * 2;
    lVar21 = (long)((cVar6 + 2) % 3) * 2;
    do {
      uVar23 = (ulong)*(ushort *)(*(long *)(lVar17 + 0x1c8) + lVar19 * 2);
      if (uVar23 != 0xffff) {
        lVar5 = *(long *)(lVar17 + 0x1b0) + uVar23 * 8;
        pbVar24 = (byte *)(lVar5 + 6);
        bVar16 = *pbVar24;
        if (bVar16 != 0) {
          auVar29 = *(undefined1 (*) [16])(param_8 + 2);
          auVar33 = *(undefined1 (*) [16])(param_8 + 4);
          lVar25 = *param_8;
          bVar22 = 0;
          do {
            uVar2 = *(short *)(lVar5 + 4) + (ushort)bVar22;
            pfVar7 = (float *)(lVar25 + (ulong)uVar2 * 0x10);
            iVar45 = -(uint)(auVar29._0_4_ <= *pfVar7);
            iVar48 = -(uint)(auVar29._4_4_ <= pfVar7[1]);
            iVar49 = -(uint)(auVar29._8_4_ <= pfVar7[2]);
            iVar37 = -(uint)(*pfVar7 <= auVar33._0_4_);
            iVar43 = -(uint)(pfVar7[1] <= auVar33._4_4_);
            iVar44 = -(uint)(pfVar7[2] <= auVar33._8_4_);
            uVar38 = CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar45 >> 0x18),
                              CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar45 >> 0x10),
                                       CONCAT11((byte)((uint)iVar37 >> 8) &
                                                (byte)((uint)iVar45 >> 8),
                                                (byte)iVar37 & (byte)iVar45)));
            auVar40._0_8_ =
                 CONCAT17((byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                          CONCAT16((byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar48 >> 0x10),
                                   CONCAT15((byte)((uint)iVar43 >> 8) & (byte)((uint)iVar48 >> 8),
                                            CONCAT14((byte)iVar43 & (byte)iVar48,uVar38))));
            auVar40[8] = (byte)iVar44 & (byte)iVar49;
            auVar40[9] = (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar49 >> 8);
            auVar40[10] = (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar49 >> 0x10);
            auVar40[0xb] = (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar49 >> 0x18);
            if ((uVar38 & (uint)((ulong)auVar40._0_8_ >> 0x20) & auVar40._8_4_) != 0) {
              lVar18 = (ulong)uVar2 * 0x10;
              auVar36 = *(undefined1 (*) [16])(param_3 + lVar18);
              auVar41 = *(undefined1 (*) [16])(param_4 + lVar18);
              lVar18 = param_7 + (long)iVar26 * 0x10;
              auVar46 = NEON_fmax(auVar36,auVar41,4);
              iVar26 = iVar26 + 1;
              auVar36 = NEON_fmin(auVar36,auVar41,4);
              fVar32 = (float)uVar28;
              auVar42._0_4_ = auVar36._0_4_ - fVar32;
              fVar34 = (float)((ulong)uVar28 >> 0x20);
              auVar42._4_4_ = auVar36._4_4_ - fVar34;
              auVar42._8_4_ = auVar36._8_4_ - fVar32;
              auVar42._12_4_ = auVar36._12_4_ - fVar34;
              auVar47._0_4_ = fVar32 + auVar46._0_4_;
              auVar47._4_4_ = fVar34 + auVar46._4_4_;
              auVar47._8_4_ = fVar32 + auVar46._8_4_;
              auVar47._12_4_ = fVar34 + auVar46._12_4_;
              auVar36._12_4_ = fStack_44;
              auVar36._0_12_ = auVar13;
              auVar36 = NEON_fmax(auVar42,auVar36,4);
              auVar46._12_4_ = fStack_44;
              auVar46._0_12_ = auVar14;
              auVar41 = NEON_fmax(auVar47,auVar46,4);
              auVar8._12_4_ = fStack_54;
              auVar8._0_12_ = auVar11;
              auVar36 = NEON_fmin(auVar36,auVar8,4);
              auVar9._12_4_ = fStack_54;
              auVar9._0_12_ = auVar12;
              auVar41 = NEON_fmin(auVar41,auVar9,4);
              *(short *)(lVar18 + (long)(int)cVar6 * 2) =
                   (short)(int)(fVar27 * (auVar36._0_4_ - fVar50));
              *(short *)(lVar18 + lVar20) = (short)(int)(fVar30 * (auVar36._4_4_ - fVar51));
              *(short *)(lVar18 + lVar21) = (short)(int)(fVar31 * (auVar36._8_4_ - fStack_48));
              lVar4 = lVar18 + 8;
              *(short *)(lVar4 + (long)(int)cVar6 * 2) =
                   (short)(int)(fVar27 * (auVar41._0_4_ - fVar50)) + 1;
              *(short *)(lVar4 + lVar20) = (short)(int)(fVar30 * (auVar41._4_4_ - fVar51)) + 1;
              *(short *)(lVar4 + lVar21) = (short)(int)(fVar31 * (auVar41._8_4_ - fStack_48)) + 1;
              *(ushort *)(lVar18 + 6) = uVar2;
              bVar16 = *pbVar24;
            }
            bVar22 = bVar22 + 1;
          } while (bVar22 < bVar16);
          iVar37 = *(int *)(lVar17 + 0x1d0);
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar37);
    lVar17 = FUN_0043c4e0(*(undefined2 *)puVar15);
  }
  if (lVar17 != 0) {
    FUN_00443a70(lVar17,&DAT_04085310);
  }
  puVar3 = (undefined2 *)(param_7 + (long)iVar26 * 0x10);
  *puVar3 = 0xffff;
  puVar3[8] = 0xffff;
  puVar3[0x10] = 0xffff;
  puVar3[0x18] = 0xffff;
  FUN_005d7240(iVar26,param_7);
  return iVar26;
}

