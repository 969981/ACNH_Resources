
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054c400(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  byte *pbVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  byte bVar27;
  float fVar22;
  byte bVar25;
  byte bVar26;
  byte bVar28;
  byte bVar30;
  byte bVar31;
  undefined8 uVar23;
  byte bVar32;
  float fVar29;
  undefined8 uVar24;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  int iVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  int iVar44;
  undefined8 uVar43;
  float fVar45;
  float fVar46;
  int iVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  if (1 < *(ushort *)(param_1 + 0x110)) {
    uVar24 = *(undefined8 *)(param_1 + 0x58);
    uVar15 = *(undefined8 *)(param_1 + 0x50);
    uVar49 = *(undefined8 *)(param_1 + 0x68);
    uVar43 = *(undefined8 *)(param_1 + 0x60);
    fVar33 = (float)((ulong)*param_2 >> 0x20);
    uVar38 = *(undefined8 *)(param_1 + 0x78);
    uVar34 = *(undefined8 *)(param_1 + 0x70);
    uVar48 = *(undefined8 *)(param_1 + 0x88);
    uVar42 = *(undefined8 *)(param_1 + 0x80);
    fVar20 = (float)*param_2;
    fVar35 = (float)param_2[1];
    *param_7 = DAT_0413f3d0;
    uVar23 = *param_3;
    fVar18 = (float)uVar42 +
             (float)uVar34 * fVar35 + (float)uVar15 * fVar20 + (float)uVar43 * fVar33;
    fVar19 = (float)((ulong)uVar42 >> 0x20) +
             (float)((ulong)uVar34 >> 0x20) * fVar35 +
             (float)((ulong)uVar15 >> 0x20) * fVar20 + (float)((ulong)uVar43 >> 0x20) * fVar33;
    fVar20 = (float)uVar48 +
             (float)uVar38 * fVar35 + (float)uVar24 * fVar20 + (float)uVar49 * fVar33;
    fVar33 = (float)uVar23;
    fVar36 = (float)*(undefined8 *)(param_1 + 0xd0);
    fVar35 = (float)((ulong)uVar23 >> 0x20);
    fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20);
    fVar46 = (float)*(undefined8 *)(param_1 + 0xd8);
    iVar39 = -(uint)(fVar36 - fVar33 <= fVar18);
    iVar44 = -(uint)(fVar41 - fVar35 <= fVar19);
    iVar47 = -(uint)(fVar46 - fVar33 <= fVar20);
    iVar13 = -(uint)(fVar18 <= fVar33 + (float)*(undefined8 *)(param_1 + 0xe0));
    iVar16 = -(uint)(fVar19 <= fVar35 + (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20));
    iVar17 = -(uint)(fVar20 <= fVar33 + (float)*(undefined8 *)(param_1 + 0xe8));
    uVar14 = CONCAT13((byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                      CONCAT12((byte)((uint)iVar13 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                               CONCAT11((byte)((uint)iVar13 >> 8) & (byte)((uint)iVar39 >> 8),
                                        (byte)iVar13 & (byte)iVar39)));
    if ((uVar14 & (uint)(CONCAT17((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar44 >> 0x18),
                                  CONCAT16((byte)((uint)iVar16 >> 0x10) &
                                           (byte)((uint)iVar44 >> 0x10),
                                           CONCAT15((byte)((uint)iVar16 >> 8) &
                                                    (byte)((uint)iVar44 >> 8),
                                                    CONCAT14((byte)iVar16 & (byte)iVar44,uVar14))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar47 >> 0x18),
                 CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar47 >> 0x10),
                          CONCAT11((byte)((uint)iVar17 >> 8) & (byte)((uint)iVar47 >> 8),
                                   (byte)iVar17 & (byte)iVar47)))) != 0) {
      fVar50 = (float)_DAT_0413f320;
      uVar3 = *(ushort *)(param_1 + 0x110);
      uVar5 = uVar3 - 1;
      fVar33 = (fVar18 - fVar36) * (float)*(undefined8 *)(param_1 + 0x100);
      fVar35 = (fVar19 - fVar41) * (float)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20);
      fVar36 = (fVar20 - fVar46) * (float)*(undefined8 *)(param_1 + 0x108);
      iVar13 = -(uint)(fVar33 < 0.0);
      iVar16 = -(uint)(fVar35 < 0.0);
      iVar17 = -(uint)(fVar36 < 0.0);
      fVar33 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                               CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar13 >> 8),
                                                  SUB41(fVar33,0) & ~(byte)iVar13)));
      uVar14 = (uint)(fVar33 + 196608.0) >> 6 & 0xffff;
      uVar6 = (uint)((float)(CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                      CONCAT16((byte)((uint)fVar35 >> 0x10) &
                                               ~(byte)((uint)iVar16 >> 0x10),
                                               CONCAT15((byte)((uint)fVar35 >> 8) &
                                                        ~(byte)((uint)iVar16 >> 8),
                                                        CONCAT14(SUB41(fVar35,0) & ~(byte)iVar16,
                                                                 fVar33)))) >> 0x20) + 196608.0) >>
              6 & 0xffff;
      if (uVar3 <= uVar14) {
        uVar14 = uVar5;
      }
      uVar11 = (uint)uVar3;
      if (uVar11 <= uVar6) {
        uVar6 = uVar5;
      }
      uVar7 = (uint)((float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                                     CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                              ~(byte)((uint)iVar17 >> 0x10),
                                              CONCAT11((byte)((uint)fVar36 >> 8) &
                                                       ~(byte)((uint)iVar17 >> 8),
                                                       SUB41(fVar36,0) & ~(byte)iVar17))) + 196608.0
                    ) >> 6 & 0xffff;
      if (uVar11 <= uVar7) {
        uVar7 = uVar5;
      }
      iVar13 = uVar7 + (uVar6 + uVar14 * uVar11) * uVar11;
      uVar3 = *(ushort *)(*(long *)(param_1 + 0x20) + (long)iVar13 * 2);
      uVar8 = (ulong)uVar3;
      uVar4 = *(ushort *)(*(long *)(param_1 + 0x20) + (long)(iVar13 + 1) * 2);
      pbVar1 = (byte *)(*(long *)(param_1 + 0x30) + uVar8);
      Hint_Prefetch(pbVar1,0,0,0);
      Hint_Prefetch(pbVar1 + 0x40,0,0,0);
      if (uVar4 != uVar3) {
        uVar12 = (ulong)*pbVar1;
        bVar25 = (byte)((ulong)uVar23 >> 8);
        bVar26 = (byte)((ulong)uVar23 >> 0x10);
        bVar27 = (byte)((ulong)uVar23 >> 0x18);
        fVar33 = (float)CONCAT13((byte)((ulong)_DAT_04c32b30 >> 0x18) & bVar27,
                                 CONCAT12((byte)((ulong)_DAT_04c32b30 >> 0x10) & bVar26,
                                          CONCAT11((byte)((ulong)_DAT_04c32b30 >> 8) & bVar25,
                                                   (byte)_DAT_04c32b30 & (byte)uVar23)));
        bVar28 = (byte)((ulong)uVar23 >> 0x20);
        bVar30 = (byte)((ulong)uVar23 >> 0x28);
        bVar31 = (byte)((ulong)uVar23 >> 0x30);
        bVar32 = (byte)((ulong)uVar23 >> 0x38);
        fVar35 = (float)CONCAT13((byte)((ulong)uRam0000000004c32b38 >> 0x18) & bVar27,
                                 CONCAT12((byte)((ulong)uRam0000000004c32b38 >> 0x10) & bVar26,
                                          CONCAT11((byte)((ulong)uRam0000000004c32b38 >> 8) & bVar25
                                                   ,(byte)uRam0000000004c32b38 & (byte)uVar23)));
        uVar10 = 0;
        do {
          puVar9 = (undefined8 *)(*(long *)(param_1 + 0x40) + uVar12 * 0x40);
          uVar8 = (ulong)((int)uVar8 + 1);
          fVar46 = (float)puVar9[2];
          fVar41 = (float)*puVar9;
          uVar12 = (ulong)*(byte *)(*(long *)(param_1 + 0x30) + (uVar8 & 0xffff));
          lVar2 = *(long *)(param_1 + 0x40) + uVar12 * 0x40;
          Hint_Prefetch(lVar2,0,0,0);
          Hint_Prefetch(lVar2 + 0x40,0,0,0);
          fVar51 = (float)puVar9[4];
          Hint_Prefetch(lVar2 + 0x80,0,0,0);
          Hint_Prefetch(lVar2 + 0xc0,0,0,0);
          fVar52 = (float)puVar9[6];
          fVar36 = fVar18 * fVar41 + fVar19 * fVar46 + fVar20 * fVar51 + fVar50 * fVar52;
          if ((byte)(-(fVar18 * (float)((ulong)*puVar9 >> 0x20) +
                       fVar19 * (float)((ulong)puVar9[2] >> 0x20) +
                       fVar20 * (float)((ulong)puVar9[4] >> 0x20) +
                       fVar50 * (float)((ulong)puVar9[6] >> 0x20) <=
                      (float)(CONCAT17((byte)((ulong)_DAT_04c32b30 >> 0x38) & bVar32,
                                       CONCAT16((byte)((ulong)_DAT_04c32b30 >> 0x30) & bVar31,
                                                CONCAT15((byte)((ulong)_DAT_04c32b30 >> 0x28) &
                                                         bVar30,CONCAT14((byte)((ulong)_DAT_04c32b30
                                                                               >> 0x20) & bVar28,
                                                                         fVar33)))) >> 0x20)) & 2U |
                     fVar36 <= fVar33 |
                     -(fVar18 * (float)((ulong)puVar9[1] >> 0x20) +
                       fVar19 * (float)((ulong)puVar9[3] >> 0x20) +
                       fVar20 * (float)((ulong)puVar9[5] >> 0x20) +
                       fVar50 * (float)((ulong)puVar9[7] >> 0x20) <=
                      (float)(CONCAT17((byte)((ulong)uRam0000000004c32b38 >> 0x38) & bVar32,
                                       CONCAT16((byte)((ulong)uRam0000000004c32b38 >> 0x30) & bVar31
                                                ,CONCAT15((byte)((ulong)uRam0000000004c32b38 >> 0x28
                                                                ) & bVar30,
                                                          CONCAT14((byte)((ulong)
                                                  uRam0000000004c32b38 >> 0x20) & bVar28,fVar35))))
                             >> 0x20)) & 8U |
                    -(fVar18 * (float)puVar9[1] + fVar19 * (float)puVar9[3] +
                      fVar20 * (float)puVar9[5] + fVar50 * (float)puVar9[7] <= fVar35) & 4U) == 0xf)
          {
            uVar15 = *(undefined8 *)(param_1 + 0xf8);
            fVar33 = fVar18 - (float)*(undefined8 *)(param_1 + 0xf0);
            fVar35 = fVar19 - (float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20);
            fVar21 = fVar20 - (float)uVar15;
            fVar22 = fVar33 * fVar33 + fVar35 * fVar35 + fVar21 * fVar21;
            fVar29 = fVar33 * fVar33 + fVar35 * fVar35 + fVar21 * fVar21;
            uVar24 = CONCAT44(fVar29,fVar22);
            uVar43 = NEON_frsqrte(uVar24,4);
            fVar40 = (float)uVar43;
            fVar45 = (float)((ulong)uVar43 >> 0x20);
            uVar43 = NEON_frsqrts(uVar24,CONCAT44(fVar45 * fVar45,fVar40 * fVar40),4);
            fVar40 = fVar40 * (float)uVar43;
            fVar45 = fVar45 * (float)((ulong)uVar43 >> 0x20);
            iVar13 = -(uint)(fVar22 <= 0.0);
            iVar16 = -(uint)(fVar29 <= 0.0);
            uVar24 = NEON_frsqrts(uVar24,CONCAT44(fVar45 * fVar45,fVar40 * fVar40),4);
            fVar40 = (float)uVar24 * fVar40;
            fVar45 = (float)((ulong)uVar24 >> 0x20) * fVar45;
            fVar22 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                     CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                              ~(byte)((uint)iVar13 >> 0x10),
                                              CONCAT11((byte)((uint)fVar40 >> 8) &
                                                       ~(byte)((uint)iVar13 >> 8),
                                                       SUB41(fVar40,0) & ~(byte)iVar13)));
            fVar40 = (float)(CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                      CONCAT16((byte)((uint)fVar45 >> 0x10) &
                                               ~(byte)((uint)iVar16 >> 0x10),
                                               CONCAT15((byte)((uint)fVar45 >> 8) &
                                                        ~(byte)((uint)iVar16 >> 8),
                                                        CONCAT14(SUB41(fVar45,0) & ~(byte)iVar16,
                                                                 fVar22)))) >> 0x20);
            fVar35 = fVar35 * fVar40;
            fVar29 = fVar41 * fVar33 * fVar22;
            fVar45 = fVar46 * fVar35;
            fVar37 = fVar51 * fVar21 * fVar22;
            uVar24 = CONCAT44(fVar29 + fVar45 + fVar37,fVar29 + fVar45 + fVar37);
            uVar43 = NEON_frecpe(uVar24,4);
            param_6[1] = CONCAT44(fVar52,fVar51);
            *param_6 = CONCAT44(fVar46,fVar41);
            uVar49 = NEON_frecps(uVar24,uVar43,4);
            fVar41 = (float)uVar43 * (float)uVar49;
            fVar46 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar49 >> 0x20);
            uVar24 = NEON_frecps(uVar24,CONCAT44(fVar46,fVar41),4);
            fVar41 = -(fVar41 * (float)uVar24 * fVar36);
            fVar46 = -(fVar46 * (float)((ulong)uVar24 >> 0x20) * fVar36);
            *param_7 = CONCAT44(fVar36,fVar36);
            param_5[1] = CONCAT44(fVar50 + (fVar50 - (float)((ulong)uVar15 >> 0x20)) * fVar40 *
                                           fVar46,fVar20 + fVar21 * fVar22 * fVar41);
            *param_5 = CONCAT44(fVar19 + fVar35 * fVar46,fVar18 + fVar33 * fVar22 * fVar41);
            uVar15 = *(undefined8 *)(param_1 + 0x90);
            uVar24 = *(undefined8 *)(param_1 + 0xa0);
            fVar19 = (float)((ulong)*param_6 >> 0x20);
            fVar18 = (float)*param_6;
            uVar43 = *(undefined8 *)(param_1 + 0xb0);
            fVar20 = (float)param_6[1];
            param_6[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar20 +
                                  (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar18 +
                                  (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) * fVar19,
                                  (float)*(undefined8 *)(param_1 + 0xb8) * fVar20 +
                                  (float)*(undefined8 *)(param_1 + 0x98) * fVar18 +
                                  (float)*(undefined8 *)(param_1 + 0xa8) * fVar19);
            *param_6 = CONCAT44((float)((ulong)uVar43 >> 0x20) * fVar20 +
                                (float)((ulong)uVar15 >> 0x20) * fVar18 +
                                (float)((ulong)uVar24 >> 0x20) * fVar19,
                                (float)uVar43 * fVar20 +
                                (float)uVar15 * fVar18 + (float)uVar24 * fVar19);
            uVar15 = *(undefined8 *)(param_1 + 0x90);
            uVar24 = *(undefined8 *)(param_1 + 0xa0);
            fVar19 = (float)((ulong)*param_5 >> 0x20);
            uVar43 = *(undefined8 *)(param_1 + 0xb0);
            uVar49 = *(undefined8 *)(param_1 + 0xc0);
            fVar18 = (float)*param_5;
            fVar20 = (float)param_5[1];
            param_5[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar20 +
                                  (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar18 +
                                  (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) * fVar19,
                                  (float)*(undefined8 *)(param_1 + 200) +
                                  (float)*(undefined8 *)(param_1 + 0xb8) * fVar20 +
                                  (float)*(undefined8 *)(param_1 + 0x98) * fVar18 +
                                  (float)*(undefined8 *)(param_1 + 0xa8) * fVar19);
            *param_5 = CONCAT44((float)((ulong)uVar49 >> 0x20) +
                                (float)((ulong)uVar43 >> 0x20) * fVar20 +
                                (float)((ulong)uVar15 >> 0x20) * fVar18 +
                                (float)((ulong)uVar24 >> 0x20) * fVar19,
                                (float)uVar49 +
                                (float)uVar43 * fVar20 +
                                (float)uVar15 * fVar18 + (float)uVar24 * fVar19);
            return;
          }
        } while ((fVar36 <= fVar33) && (uVar10 = uVar10 + 1, uVar10 < (ushort)(uVar4 - uVar3)));
      }
    }
    return;
  }
  uVar24 = *(undefined8 *)(param_1 + 0x58);
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  uVar49 = *(undefined8 *)(param_1 + 0x68);
  uVar43 = *(undefined8 *)(param_1 + 0x60);
  fVar33 = (float)((ulong)*param_2 >> 0x20);
  uVar38 = *(undefined8 *)(param_1 + 0x78);
  uVar34 = *(undefined8 *)(param_1 + 0x70);
  uVar48 = *(undefined8 *)(param_1 + 0x88);
  uVar42 = *(undefined8 *)(param_1 + 0x80);
  fVar20 = (float)*param_2;
  fVar35 = (float)param_2[1];
  *param_7 = DAT_0413f3d0;
  uVar23 = *param_3;
  fVar18 = (float)uVar42 + (float)uVar34 * fVar35 + (float)uVar15 * fVar20 + (float)uVar43 * fVar33;
  fVar19 = (float)((ulong)uVar42 >> 0x20) +
           (float)((ulong)uVar34 >> 0x20) * fVar35 +
           (float)((ulong)uVar15 >> 0x20) * fVar20 + (float)((ulong)uVar43 >> 0x20) * fVar33;
  fVar20 = (float)uVar48 + (float)uVar38 * fVar35 + (float)uVar24 * fVar20 + (float)uVar49 * fVar33;
  fVar33 = (float)uVar23;
  fVar35 = (float)((ulong)uVar23 >> 0x20);
  iVar13 = -(uint)((float)*(undefined8 *)(param_1 + 0xd0) - fVar33 <= fVar18);
  iVar16 = -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20) - fVar35 <= fVar19);
  iVar17 = -(uint)((float)*(undefined8 *)(param_1 + 0xd8) - fVar33 <= fVar20);
  iVar39 = -(uint)(fVar18 <= fVar33 + (float)*(undefined8 *)(param_1 + 0xe0));
  iVar44 = -(uint)(fVar19 <= fVar35 + (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20));
  iVar47 = -(uint)(fVar20 <= fVar33 + (float)*(undefined8 *)(param_1 + 0xe8));
  uVar14 = CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                    CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                             CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar13 >> 8),
                                      (byte)iVar39 & (byte)iVar13)));
  if (((uVar14 & (uint)(CONCAT17((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
                                 CONCAT16((byte)((uint)iVar44 >> 0x10) &
                                          (byte)((uint)iVar16 >> 0x10),
                                          CONCAT15((byte)((uint)iVar44 >> 8) &
                                                   (byte)((uint)iVar16 >> 8),
                                                   CONCAT14((byte)iVar44 & (byte)iVar16,uVar14))))
                       >> 0x20) &
       CONCAT13((byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                CONCAT12((byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                         CONCAT11((byte)((uint)iVar47 >> 8) & (byte)((uint)iVar17 >> 8),
                                  (byte)iVar47 & (byte)iVar17)))) != 0) &&
     ((*(uint *)(param_1 + 0x48) & 0xffff) != 0)) {
    puVar9 = *(undefined8 **)(param_1 + 0x40);
    uVar14 = 0;
    fVar36 = (float)_DAT_0413f320;
    uVar24 = *(undefined8 *)(PTR_DAT_04bd4b78 + 0x18);
    uVar15 = *(undefined8 *)(PTR_DAT_04bd4b78 + 0x10);
    bVar25 = (byte)((ulong)uVar23 >> 8);
    bVar26 = (byte)((ulong)uVar23 >> 0x10);
    bVar27 = (byte)((ulong)uVar23 >> 0x18);
    fVar33 = (float)CONCAT13((byte)((ulong)uVar15 >> 0x18) & bVar27,
                             CONCAT12((byte)((ulong)uVar15 >> 0x10) & bVar26,
                                      CONCAT11((byte)((ulong)uVar15 >> 8) & bVar25,
                                               (byte)uVar15 & (byte)uVar23)));
    bVar28 = (byte)((ulong)uVar23 >> 0x20);
    bVar30 = (byte)((ulong)uVar23 >> 0x28);
    bVar31 = (byte)((ulong)uVar23 >> 0x30);
    bVar32 = (byte)((ulong)uVar23 >> 0x38);
    fVar35 = (float)CONCAT13((byte)((ulong)uVar24 >> 0x18) & bVar27,
                             CONCAT12((byte)((ulong)uVar24 >> 0x10) & bVar26,
                                      CONCAT11((byte)((ulong)uVar24 >> 8) & bVar25,
                                               (byte)uVar24 & (byte)uVar23)));
    do {
      fVar50 = (float)puVar9[2];
      fVar46 = (float)*puVar9;
      fVar51 = (float)puVar9[4];
      fVar52 = (float)puVar9[6];
      fVar41 = fVar18 * fVar46 + fVar19 * fVar50 + fVar20 * fVar51 + fVar36 * fVar52;
      if ((byte)(-(fVar18 * (float)((ulong)*puVar9 >> 0x20) +
                   fVar19 * (float)((ulong)puVar9[2] >> 0x20) +
                   fVar20 * (float)((ulong)puVar9[4] >> 0x20) +
                   fVar36 * (float)((ulong)puVar9[6] >> 0x20) <=
                  (float)(CONCAT17((byte)((ulong)uVar15 >> 0x38) & bVar32,
                                   CONCAT16((byte)((ulong)uVar15 >> 0x30) & bVar31,
                                            CONCAT15((byte)((ulong)uVar15 >> 0x28) & bVar30,
                                                     CONCAT14((byte)((ulong)uVar15 >> 0x20) & bVar28
                                                              ,fVar33)))) >> 0x20)) & 2U |
                 fVar41 <= fVar33 |
                 -(fVar18 * (float)((ulong)puVar9[1] >> 0x20) +
                   fVar19 * (float)((ulong)puVar9[3] >> 0x20) +
                   fVar20 * (float)((ulong)puVar9[5] >> 0x20) +
                   fVar36 * (float)((ulong)puVar9[7] >> 0x20) <=
                  (float)(CONCAT17((byte)((ulong)uVar24 >> 0x38) & bVar32,
                                   CONCAT16((byte)((ulong)uVar24 >> 0x30) & bVar31,
                                            CONCAT15((byte)((ulong)uVar24 >> 0x28) & bVar30,
                                                     CONCAT14((byte)((ulong)uVar24 >> 0x20) & bVar28
                                                              ,fVar35)))) >> 0x20)) & 8U |
                -(fVar18 * (float)puVar9[1] + fVar19 * (float)puVar9[3] + fVar20 * (float)puVar9[5]
                  + fVar36 * (float)puVar9[7] <= fVar35) & 4U) == 0xf) {
        uVar15 = *(undefined8 *)(param_1 + 0xf8);
        fVar33 = fVar18 - (float)*(undefined8 *)(param_1 + 0xf0);
        fVar35 = fVar19 - (float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20);
        fVar21 = fVar20 - (float)uVar15;
        fVar22 = fVar33 * fVar33 + fVar35 * fVar35 + fVar21 * fVar21;
        fVar29 = fVar33 * fVar33 + fVar35 * fVar35 + fVar21 * fVar21;
        uVar24 = CONCAT44(fVar29,fVar22);
        uVar43 = NEON_frsqrte(uVar24,4);
        fVar40 = (float)uVar43;
        fVar45 = (float)((ulong)uVar43 >> 0x20);
        uVar43 = NEON_frsqrts(uVar24,CONCAT44(fVar45 * fVar45,fVar40 * fVar40),4);
        fVar40 = fVar40 * (float)uVar43;
        fVar45 = fVar45 * (float)((ulong)uVar43 >> 0x20);
        iVar13 = -(uint)(fVar22 <= 0.0);
        iVar16 = -(uint)(fVar29 <= 0.0);
        uVar24 = NEON_frsqrts(uVar24,CONCAT44(fVar45 * fVar45,fVar40 * fVar40),4);
        fVar40 = (float)uVar24 * fVar40;
        fVar45 = (float)((ulong)uVar24 >> 0x20) * fVar45;
        fVar22 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                 CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                          ~(byte)((uint)iVar13 >> 0x10),
                                          CONCAT11((byte)((uint)fVar40 >> 8) &
                                                   ~(byte)((uint)iVar13 >> 8),
                                                   SUB41(fVar40,0) & ~(byte)iVar13)));
        fVar40 = (float)(CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                  CONCAT16((byte)((uint)fVar45 >> 0x10) &
                                           ~(byte)((uint)iVar16 >> 0x10),
                                           CONCAT15((byte)((uint)fVar45 >> 8) &
                                                    ~(byte)((uint)iVar16 >> 8),
                                                    CONCAT14(SUB41(fVar45,0) & ~(byte)iVar16,fVar22)
                                                   ))) >> 0x20);
        fVar35 = fVar35 * fVar40;
        fVar29 = fVar46 * fVar33 * fVar22;
        fVar45 = fVar50 * fVar35;
        fVar37 = fVar51 * fVar21 * fVar22;
        uVar24 = CONCAT44(fVar29 + fVar45 + fVar37,fVar29 + fVar45 + fVar37);
        uVar43 = NEON_frecpe(uVar24,4);
        param_6[1] = CONCAT44(fVar52,fVar51);
        *param_6 = CONCAT44(fVar50,fVar46);
        uVar49 = NEON_frecps(uVar24,uVar43,4);
        fVar46 = (float)uVar43 * (float)uVar49;
        fVar50 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar49 >> 0x20);
        uVar24 = NEON_frecps(uVar24,CONCAT44(fVar50,fVar46),4);
        *param_7 = CONCAT44(fVar41,fVar41);
        fVar46 = -(fVar46 * (float)uVar24 * fVar41);
        fVar41 = -(fVar50 * (float)((ulong)uVar24 >> 0x20) * fVar41);
        param_5[1] = CONCAT44(fVar36 + (fVar36 - (float)((ulong)uVar15 >> 0x20)) * fVar40 * fVar41,
                              fVar20 + fVar21 * fVar22 * fVar46);
        *param_5 = CONCAT44(fVar19 + fVar35 * fVar41,fVar18 + fVar33 * fVar22 * fVar46);
        uVar15 = *(undefined8 *)(param_1 + 0x90);
        uVar24 = *(undefined8 *)(param_1 + 0xa0);
        fVar19 = (float)((ulong)*param_6 >> 0x20);
        fVar18 = (float)*param_6;
        uVar43 = *(undefined8 *)(param_1 + 0xb0);
        fVar20 = (float)param_6[1];
        param_6[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar20 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar18 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) * fVar19,
                              (float)*(undefined8 *)(param_1 + 0xb8) * fVar20 +
                              (float)*(undefined8 *)(param_1 + 0x98) * fVar18 +
                              (float)*(undefined8 *)(param_1 + 0xa8) * fVar19);
        *param_6 = CONCAT44((float)((ulong)uVar43 >> 0x20) * fVar20 +
                            (float)((ulong)uVar15 >> 0x20) * fVar18 +
                            (float)((ulong)uVar24 >> 0x20) * fVar19,
                            (float)uVar43 * fVar20 + (float)uVar15 * fVar18 + (float)uVar24 * fVar19
                           );
        uVar15 = *(undefined8 *)(param_1 + 0x90);
        uVar24 = *(undefined8 *)(param_1 + 0xa0);
        fVar19 = (float)((ulong)*param_5 >> 0x20);
        uVar43 = *(undefined8 *)(param_1 + 0xb0);
        uVar49 = *(undefined8 *)(param_1 + 0xc0);
        fVar18 = (float)*param_5;
        fVar20 = (float)param_5[1];
        param_5[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar20 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar18 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) * fVar19,
                              (float)*(undefined8 *)(param_1 + 200) +
                              (float)*(undefined8 *)(param_1 + 0xb8) * fVar20 +
                              (float)*(undefined8 *)(param_1 + 0x98) * fVar18 +
                              (float)*(undefined8 *)(param_1 + 0xa8) * fVar19);
        *param_5 = CONCAT44((float)((ulong)uVar49 >> 0x20) +
                            (float)((ulong)uVar43 >> 0x20) * fVar20 +
                            (float)((ulong)uVar15 >> 0x20) * fVar18 +
                            (float)((ulong)uVar24 >> 0x20) * fVar19,
                            (float)uVar49 +
                            (float)uVar43 * fVar20 + (float)uVar15 * fVar18 + (float)uVar24 * fVar19
                           );
        return;
      }
      if (fVar41 > fVar33) {
        return;
      }
      uVar14 = uVar14 + 1;
      puVar9 = puVar9 + 8;
    } while ((uVar14 & 0xffff) < (*(uint *)(param_1 + 0x48) & 0xffff));
  }
  return;
}

