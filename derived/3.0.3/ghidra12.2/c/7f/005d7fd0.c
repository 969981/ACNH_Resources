
int FUN_005d7fd0(undefined1 (*param_1) [12],undefined8 param_2,long param_3,long param_4,
                undefined8 param_5,undefined8 *param_6,long param_7,long *param_8)

{
  long lVar1;
  undefined2 *puVar2;
  long lVar3;
  char cVar4;
  undefined1 (*pauVar5) [12];
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  long lVar13;
  ushort uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  int iVar33;
  uint uVar34;
  int iVar37;
  int iVar38;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  int iVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  int iVar43;
  int iVar44;
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  lVar13 = param_8[8];
  if ((int)lVar13 < 1) {
    iVar19 = 0;
  }
  else {
    fVar22 = (float)*(undefined8 *)(*param_1 + 8);
    fVar23 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
    auVar10 = *param_1;
    auVar9 = *param_1;
    fVar20 = (float)*(undefined8 *)*param_1;
    fVar21 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
    pauVar5 = (undefined1 (*) [12])(param_1[1] + 4);
    fVar24 = (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
    auVar12 = *pauVar5;
    auVar11 = *pauVar5;
    auVar26 = *(undefined1 (*) [16])(PTR_DAT_04bd4c80 + 0x150);
    auVar30 = NEON_ext(auVar26,auVar26,8,1);
    auVar46._0_4_ = (float)*(undefined8 *)*pauVar5 - fVar20;
    auVar46._4_4_ = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20) - fVar21;
    auVar46._8_4_ = (float)*(undefined8 *)param_1[2] - fVar22;
    auVar46._12_4_ = fVar24 - fVar23;
    auVar26 = NEON_ext(auVar30,auVar26,8,1);
    auVar30 = NEON_frecpe(auVar46,4);
    fVar25 = ABS(auVar46._0_4_ * auVar26._0_4_);
    fVar27 = ABS(auVar46._4_4_ * auVar26._4_4_);
    uVar40 = CONCAT44(fVar27,fVar25);
    fVar28 = ABS(auVar46._8_4_ * auVar26._8_4_);
    auVar45 = NEON_frecps(auVar46,auVar30,4);
    uVar40 = NEON_fmaxp(uVar40,uVar40,4);
    auVar26._0_4_ = auVar30._0_4_ * auVar45._0_4_;
    auVar26._4_4_ = auVar30._4_4_ * auVar45._4_4_;
    auVar26._8_4_ = auVar30._8_4_ * auVar45._8_4_;
    auVar26._12_4_ = auVar30._12_4_ * auVar45._12_4_;
    uVar41 = NEON_fmax(CONCAT44(fVar28,fVar28),uVar40,4);
    auVar30 = NEON_frecps(auVar46,auVar26,4);
    iVar19 = 0;
    uVar14 = 0;
    fVar29 = auVar26._0_4_ * auVar30._0_4_ * 32766.0;
    fVar31 = auVar26._4_4_ * auVar30._4_4_ * 32766.0;
    fVar32 = auVar26._8_4_ * auVar30._8_4_ * 32766.0;
    uVar40 = *param_6;
    cVar4 = (&DAT_0413f6c0)
            [-(uint)((float)((ulong)uVar41 >> 0x20) <= fVar27) & 2 |
             -(uint)((float)uVar41 <= fVar25) & 1 | -(uint)((float)uVar41 <= fVar28) & 4];
    lVar15 = param_8[1];
    lVar16 = (long)((cVar4 + 1) % 3) * 2;
    lVar17 = (long)((cVar4 + 2) % 3) * 2;
    do {
      if ((*(float *)(lVar15 + (ulong)uVar14 * 0x10 + 4) != 0.0) &&
         (uVar18 = (ulong)uVar14, *(int *)(param_8[2] + uVar18 * 4) < 0)) {
        pfVar6 = (float *)(*param_8 + uVar18 * 0x10);
        auVar26 = *(undefined1 (*) [16])(param_8 + 6);
        iVar39 = -(uint)(*(float *)(param_8 + 4) <= *pfVar6);
        iVar43 = -(uint)(*(float *)((long)param_8 + 0x24) <= pfVar6[1]);
        iVar44 = -(uint)(*(float *)(param_8 + 5) <= pfVar6[2]);
        iVar33 = -(uint)(*pfVar6 <= auVar26._0_4_);
        iVar37 = -(uint)(pfVar6[1] <= auVar26._4_4_);
        iVar38 = -(uint)(pfVar6[2] <= auVar26._8_4_);
        uVar34 = CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                          CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                                   CONCAT11((byte)((uint)iVar33 >> 8) & (byte)((uint)iVar39 >> 8),
                                            (byte)iVar33 & (byte)iVar39)));
        auVar35._0_8_ =
             CONCAT17((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar43 >> 0x18),
                      CONCAT16((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar43 >> 0x10),
                               CONCAT15((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar43 >> 8),
                                        CONCAT14((byte)iVar37 & (byte)iVar43,uVar34))));
        auVar35[8] = (byte)iVar38 & (byte)iVar44;
        auVar35[9] = (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar44 >> 8);
        auVar35[10] = (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar44 >> 0x10);
        auVar35[0xb] = (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar44 >> 0x18);
        if ((uVar34 & (uint)((ulong)auVar35._0_8_ >> 0x20) & auVar35._8_4_) != 0) {
          auVar26 = *(undefined1 (*) [16])(param_3 + uVar18 * 0x10);
          auVar30 = *(undefined1 (*) [16])(param_4 + uVar18 * 0x10);
          lVar1 = param_7 + (long)iVar19 * 0x10;
          auVar46 = NEON_fmax(auVar26,auVar30,4);
          iVar19 = iVar19 + 1;
          auVar26 = NEON_fmin(auVar26,auVar30,4);
          fVar25 = (float)uVar40;
          auVar36._0_4_ = auVar26._0_4_ - fVar25;
          fVar27 = (float)((ulong)uVar40 >> 0x20);
          auVar36._4_4_ = auVar26._4_4_ - fVar27;
          auVar36._8_4_ = auVar26._8_4_ - fVar25;
          auVar36._12_4_ = auVar26._12_4_ - fVar27;
          auVar42._0_4_ = fVar25 + auVar46._0_4_;
          auVar42._4_4_ = fVar27 + auVar46._4_4_;
          auVar42._8_4_ = fVar25 + auVar46._8_4_;
          auVar42._12_4_ = fVar27 + auVar46._12_4_;
          auVar30._12_4_ = fVar23;
          auVar30._0_12_ = auVar9;
          auVar26 = NEON_fmax(auVar36,auVar30,4);
          auVar45._12_4_ = fVar23;
          auVar45._0_12_ = auVar10;
          auVar30 = NEON_fmax(auVar42,auVar45,4);
          auVar7._12_4_ = fVar24;
          auVar7._0_12_ = auVar11;
          auVar26 = NEON_fmin(auVar26,auVar7,4);
          auVar8._12_4_ = fVar24;
          auVar8._0_12_ = auVar12;
          auVar30 = NEON_fmin(auVar30,auVar8,4);
          *(short *)(lVar1 + (long)(int)cVar4 * 2) = (short)(int)(fVar29 * (auVar26._0_4_ - fVar20))
          ;
          *(short *)(lVar1 + lVar16) = (short)(int)(fVar31 * (auVar26._4_4_ - fVar21));
          *(short *)(lVar1 + lVar17) = (short)(int)(fVar32 * (auVar26._8_4_ - fVar22));
          lVar3 = lVar1 + 8;
          *(short *)(lVar3 + (long)(int)cVar4 * 2) =
               (short)(int)(fVar29 * (auVar30._0_4_ - fVar20)) + 1;
          *(short *)(lVar3 + lVar16) = (short)(int)(fVar31 * (auVar30._4_4_ - fVar21)) + 1;
          *(short *)(lVar3 + lVar17) = (short)(int)(fVar32 * (auVar30._8_4_ - fVar22)) + 1;
          *(ushort *)(lVar1 + 6) = uVar14;
        }
      }
      uVar14 = uVar14 + 1;
    } while ((int)(uint)uVar14 < (int)lVar13);
  }
  puVar2 = (undefined2 *)(param_7 + (long)iVar19 * 0x10);
  *puVar2 = 0xffff;
  puVar2[8] = 0xffff;
  puVar2[0x10] = 0xffff;
  puVar2[0x18] = 0xffff;
  FUN_005d7240(iVar19);
  return iVar19;
}

