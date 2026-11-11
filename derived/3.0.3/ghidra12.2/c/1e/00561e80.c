
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561e80(long param_1,long param_2,long param_3,long param_4,int param_5,
                 undefined8 *param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
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
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  
  uVar13 = DAT_0413f310;
  fVar12 = *(float *)(param_1 + 0x4c) * (float)*param_6;
  fVar20 = (float)_DAT_0413f520;
  fVar15 = (float)((ulong)_DAT_0413f520 >> 0x20);
  fVar17 = (float)_DAT_0413f528;
  fVar18 = (float)((ulong)_DAT_0413f528 >> 0x20);
  if (param_5 == 1) {
    if (*(int *)(param_1 + 0x30) == 0) {
      if (*(int *)(param_1 + 0x40) != 0) {
        lVar10 = (long)*(int *)(param_1 + 0x40) * 0x14;
        pfVar8 = (float *)(*(long *)(param_1 + 0x38) + 8);
        do {
          fVar16 = fVar12 * pfVar8[2];
          lVar10 = lVar10 + -0x14;
          lVar9 = (ulong)*(ushort *)(pfVar8 + -2) * 0x10;
          puVar2 = (undefined8 *)
                   (*(long *)(param_4 + 0x18) +
                   (ulong)*(byte *)(param_4 + 0x24) * (ulong)*(ushort *)((long)pfVar8 + -6));
          uVar53 = *puVar2;
          puVar3 = (undefined8 *)
                   (*(long *)(param_4 + 0x40) +
                   (ulong)*(byte *)(param_4 + 0x4c) * (ulong)*(ushort *)((long)pfVar8 + -6));
          uVar32 = *puVar3;
          uVar14 = ((undefined8 *)(param_2 + lVar9))[1];
          uVar54 = *(undefined8 *)(param_2 + lVar9);
          fVar21 = (float)uVar53;
          fVar26 = (float)*(undefined8 *)(param_4 + 0x90);
          fVar28 = (float)((ulong)*(undefined8 *)(param_4 + 0x90) >> 0x20);
          fVar22 = (float)*(undefined8 *)(param_4 + 0x98);
          fVar41 = (float)((ulong)*(undefined8 *)(param_4 + 0x98) >> 0x20);
          fVar30 = (float)((ulong)uVar53 >> 0x20);
          fVar25 = (float)*(undefined8 *)(param_4 + 0xa0);
          fVar27 = (float)((ulong)*(undefined8 *)(param_4 + 0xa0) >> 0x20);
          fVar29 = (float)*(undefined8 *)(param_4 + 0xa8);
          fVar34 = (float)((ulong)*(undefined8 *)(param_4 + 0xa8) >> 0x20);
          fVar45 = (float)uVar32;
          fVar38 = (float)((ulong)uVar32 >> 0x20);
          fVar24 = (float)puVar2[1];
          fVar31 = (float)*(undefined8 *)(param_4 + 0xb0);
          fVar36 = (float)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20);
          fVar39 = (float)*(undefined8 *)(param_4 + 0xb8);
          fVar40 = (float)((ulong)*(undefined8 *)(param_4 + 0xb8) >> 0x20);
          fVar23 = (float)puVar3[1];
          fVar19 = (float)*(undefined8 *)(param_4 + 0xc0) + fVar26 * fVar21 + fVar25 * fVar30 +
                   fVar31 * fVar24;
          fVar46 = (float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) + fVar28 * fVar21 +
                   fVar27 * fVar30 + fVar36 * fVar24;
          fVar35 = (float)*(undefined8 *)(param_4 + 200) + fVar22 * fVar21 + fVar29 * fVar30 +
                   fVar39 * fVar24;
          fVar25 = fVar26 * fVar45 + fVar25 * fVar38 + fVar31 * fVar23;
          fVar27 = fVar28 * fVar45 + fVar27 * fVar38 + fVar36 * fVar23;
          fVar29 = fVar22 * fVar45 + fVar29 * fVar38 + fVar39 * fVar23;
          fVar31 = fVar41 * fVar45 + fVar34 * fVar38 + fVar40 * fVar23;
          fVar38 = (float)uVar54;
          fVar23 = (float)((ulong)uVar54 >> 0x20);
          fVar26 = (float)uVar14;
          fVar45 = fVar25 * (fVar38 - fVar19);
          fVar28 = fVar27 * (fVar23 - fVar46);
          fVar39 = fVar29 * (fVar26 - fVar35);
          fVar36 = fVar45 + fVar28 + fVar39;
          fVar39 = fVar45 + fVar28 + fVar39;
          fVar28 = (float)((ulong)uVar14 >> 0x20);
          uVar53 = NEON_fmin(CONCAT44((fVar39 - pfVar8[1]) * fVar16,(fVar36 - pfVar8[1]) * fVar16),
                             uVar13,4);
          fVar45 = fVar20 + (fVar38 - (fVar19 + fVar25 * fVar36));
          fVar46 = fVar15 + (fVar23 - (fVar46 + fVar27 * fVar39));
          fVar22 = fVar17 + (fVar26 - (fVar35 + fVar29 * fVar36));
          fVar19 = fVar45 * fVar45 + fVar46 * fVar46 + fVar22 * fVar22;
          fVar35 = fVar45 * fVar45 + fVar46 * fVar46 + fVar22 * fVar22;
          uVar54 = NEON_frsqrte(CONCAT44(fVar35,fVar19),4);
          fVar48 = (float)uVar54;
          fVar49 = (float)((ulong)uVar54 >> 0x20);
          uVar54 = NEON_frsqrts(CONCAT44(fVar35,fVar19),CONCAT44(fVar49 * fVar49,fVar48 * fVar48),4)
          ;
          iVar51 = -(uint)(fVar19 <= 0.0);
          iVar50 = -(uint)(fVar35 <= 0.0);
          fVar48 = fVar48 * (float)uVar54;
          fVar49 = fVar49 * (float)((ulong)uVar54 >> 0x20);
          uVar33 = ((undefined8 *)(param_3 + lVar9))[1];
          uVar32 = *(undefined8 *)(param_3 + lVar9);
          fVar48 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                                   CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                            ~(byte)((uint)iVar51 >> 0x10),
                                            CONCAT11((byte)((uint)fVar48 >> 8) &
                                                     ~(byte)((uint)iVar51 >> 8),
                                                     SUB41(fVar48,0) & ~(byte)iVar51)));
          fVar49 = (float)(CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                    CONCAT16((byte)((uint)fVar49 >> 0x10) &
                                             ~(byte)((uint)iVar50 >> 0x10),
                                             CONCAT15((byte)((uint)fVar49 >> 8) &
                                                      ~(byte)((uint)iVar50 >> 8),
                                                      CONCAT14(SUB41(fVar49,0) & ~(byte)iVar50,
                                                               fVar48)))) >> 0x20);
          uVar14 = NEON_fmin(CONCAT44((pfVar8[-1] - fVar35 * fVar49) * fVar16,
                                      (pfVar8[-1] - fVar19 * fVar48) * fVar16),uVar13,4);
          uVar54 = NEON_fmin(CONCAT44((*pfVar8 - fVar39) * fVar16,(*pfVar8 - fVar36) * fVar16),
                             uVar13,4);
          fVar35 = (float)((ulong)uVar14 >> 0x20);
          fVar36 = (float)((ulong)uVar53 >> 0x20);
          fVar19 = (float)((ulong)uVar54 >> 0x20);
          fVar16 = fVar25 * (float)uVar54 +
                   ((fVar38 + (float)uVar14 * fVar45 * fVar48) - fVar25 * (float)uVar53);
          fVar45 = fVar27 * fVar19 + ((fVar23 + fVar35 * fVar46 * fVar49) - fVar27 * fVar36);
          fVar46 = fVar29 * (float)uVar54 +
                   ((fVar26 + (float)uVar14 * fVar22 * fVar48) - fVar29 * (float)uVar53);
          fVar19 = fVar31 * fVar19 +
                   ((fVar28 + fVar35 * (fVar18 + (fVar28 - ((float)((ulong)*(undefined8 *)
                                                                            (param_4 + 200) >> 0x20)
                                                            + fVar41 * fVar21 + fVar34 * fVar30 +
                                                            fVar40 * fVar24 + fVar31 * fVar39))) *
                                       fVar49) - fVar31 * fVar36);
          ((undefined8 *)(param_2 + lVar9))[1] = CONCAT44(fVar19,fVar46);
          *(undefined8 *)(param_2 + lVar9) = CONCAT44(fVar45,fVar16);
          ((undefined8 *)(param_3 + lVar9))[1] =
               CONCAT44(fVar19 - (fVar28 - (float)((ulong)uVar33 >> 0x20)),
                        fVar46 - (fVar26 - (float)uVar33));
          *(undefined8 *)(param_3 + lVar9) =
               CONCAT44(fVar45 - (fVar23 - (float)((ulong)uVar32 >> 0x20)),
                        fVar16 - (fVar38 - (float)uVar32));
          pfVar8 = pfVar8 + 5;
        } while (lVar10 != 0);
      }
    }
    else {
      puVar7 = *(ushort **)(param_1 + 0x28);
      puVar5 = puVar7 + (long)*(int *)(param_1 + 0x30) * 8;
      uVar54 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x268);
      uVar13 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x260);
      uVar14 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x50);
      do {
        puVar2 = (undefined8 *)
                 (*(long *)(param_4 + 0x18) + (ulong)*(byte *)(param_4 + 0x24) * (ulong)puVar7[1]);
        uVar53 = *puVar2;
        fVar46 = (float)uVar53;
        fVar20 = (float)*(undefined8 *)(param_4 + 0x90);
        fVar17 = (float)((ulong)*(undefined8 *)(param_4 + 0x90) >> 0x20);
        fVar16 = (float)*(undefined8 *)(param_4 + 0x98);
        fVar21 = (float)((ulong)*(undefined8 *)(param_4 + 0x98) >> 0x20);
        puVar3 = (undefined8 *)
                 (*(long *)(param_4 + 0x40) + (ulong)*(byte *)(param_4 + 0x4c) * (ulong)puVar7[1]);
        uVar33 = *puVar3;
        lVar10 = (ulong)*puVar7 * 0x10;
        fVar35 = (float)((ulong)uVar53 >> 0x20);
        fVar23 = (float)*(undefined8 *)(param_4 + 0xa0);
        fVar26 = (float)((ulong)*(undefined8 *)(param_4 + 0xa0) >> 0x20);
        fVar28 = (float)*(undefined8 *)(param_4 + 0xa8);
        fVar27 = (float)((ulong)*(undefined8 *)(param_4 + 0xa8) >> 0x20);
        pfVar8 = (float *)(puVar7 + 4);
        fVar38 = (float)puVar2[1];
        fVar22 = (float)*(undefined8 *)(param_4 + 0xb0);
        fVar25 = (float)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20);
        fVar29 = (float)*(undefined8 *)(param_4 + 0xb8);
        fVar39 = (float)((ulong)*(undefined8 *)(param_4 + 0xb8) >> 0x20);
        uVar32 = ((undefined8 *)(param_2 + lVar10))[1];
        uVar53 = *(undefined8 *)(param_2 + lVar10);
        fVar45 = (float)uVar33;
        fVar30 = (float)((ulong)uVar33 >> 0x20);
        fVar24 = (float)puVar3[1];
        pfVar1 = (float *)(puVar7 + 6);
        fVar15 = (float)*(undefined8 *)(param_4 + 0xc0) + fVar20 * fVar46 + fVar23 * fVar35 +
                 fVar22 * fVar38;
        fVar18 = (float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) + fVar17 * fVar46 +
                 fVar26 * fVar35 + fVar25 * fVar38;
        fVar19 = (float)*(undefined8 *)(param_4 + 200) + fVar16 * fVar46 + fVar28 * fVar35 +
                 fVar29 * fVar38;
        fVar23 = fVar20 * fVar45 + fVar23 * fVar30 + fVar22 * fVar24;
        fVar26 = fVar17 * fVar45 + fVar26 * fVar30 + fVar25 * fVar24;
        fVar28 = fVar16 * fVar45 + fVar28 * fVar30 + fVar29 * fVar24;
        fVar30 = fVar21 * fVar45 + fVar27 * fVar30 + fVar39 * fVar24;
        pfVar4 = (float *)(puVar7 + 2);
        fVar20 = (float)uVar53;
        fVar17 = (float)((ulong)uVar53 >> 0x20);
        fVar16 = (float)uVar32;
        puVar7 = puVar7 + 8;
        fVar45 = fVar23 * (fVar20 - fVar15);
        fVar22 = fVar26 * (fVar17 - fVar18);
        fVar25 = fVar28 * (fVar16 - fVar19);
        fVar24 = fVar45 + fVar22 + fVar25;
        fVar25 = fVar45 + fVar22 + fVar25;
        fVar45 = (float)((ulong)uVar32 >> 0x20);
        uVar33 = NEON_fmin(CONCAT44(fVar12 * (fVar25 - *pfVar1),fVar12 * (fVar24 - *pfVar1)),uVar14,
                           4);
        fVar15 = (float)uVar13 + (fVar20 - (fVar15 + fVar23 * fVar24));
        fVar18 = (float)((ulong)uVar13 >> 0x20) + (fVar17 - (fVar18 + fVar26 * fVar25));
        fVar19 = (float)uVar54 + (fVar16 - (fVar19 + fVar28 * fVar24));
        uVar53 = NEON_fmin(CONCAT44(fVar12 * (*pfVar8 - fVar25),fVar12 * (*pfVar8 - fVar24)),uVar14,
                           4);
        fVar24 = fVar15 * fVar15 + fVar18 * fVar18 + fVar19 * fVar19;
        fVar22 = fVar15 * fVar15 + fVar18 * fVar18 + fVar19 * fVar19;
        uVar32 = NEON_frsqrte(CONCAT44(fVar22,fVar24),4);
        fVar29 = (float)uVar32;
        fVar36 = (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frsqrts(CONCAT44(fVar22,fVar24),CONCAT44(fVar36 * fVar36,fVar29 * fVar29),4);
        iVar51 = -(uint)(fVar24 <= 0.0);
        iVar50 = -(uint)(fVar22 <= 0.0);
        fVar29 = fVar29 * (float)uVar32;
        fVar36 = fVar36 * (float)((ulong)uVar32 >> 0x20);
        uVar43 = ((undefined8 *)(param_3 + lVar10))[1];
        uVar37 = *(undefined8 *)(param_3 + lVar10);
        fVar31 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                                 CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                          ~(byte)((uint)iVar51 >> 0x10),
                                          CONCAT11((byte)((uint)fVar29 >> 8) &
                                                   ~(byte)((uint)iVar51 >> 8),
                                                   SUB41(fVar29,0) & ~(byte)iVar51)));
        fVar36 = (float)(CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                  CONCAT16((byte)((uint)fVar36 >> 0x10) &
                                           ~(byte)((uint)iVar50 >> 0x10),
                                           CONCAT15((byte)((uint)fVar36 >> 8) &
                                                    ~(byte)((uint)iVar50 >> 8),
                                                    CONCAT14(SUB41(fVar36,0) & ~(byte)iVar50,fVar31)
                                                   ))) >> 0x20);
        uVar32 = NEON_fmin(CONCAT44(fVar12 * (*pfVar4 - fVar22 * fVar36),
                                    fVar12 * (*pfVar4 - fVar24 * fVar31)),uVar14,4);
        fVar22 = (float)((ulong)uVar32 >> 0x20);
        fVar29 = (float)((ulong)uVar33 >> 0x20);
        fVar24 = (float)((ulong)uVar53 >> 0x20);
        fVar15 = fVar23 * (float)uVar53 +
                 ((fVar20 + (float)uVar32 * fVar15 * fVar31) - fVar23 * (float)uVar33);
        fVar18 = fVar26 * fVar24 + ((fVar17 + fVar22 * fVar18 * fVar36) - fVar26 * fVar29);
        fVar19 = fVar28 * (float)uVar53 +
                 ((fVar16 + (float)uVar32 * fVar19 * fVar31) - fVar28 * (float)uVar33);
        fVar46 = fVar30 * fVar24 +
                 ((fVar45 + fVar22 * ((float)((ulong)uVar54 >> 0x20) +
                                     (fVar45 - ((float)((ulong)*(undefined8 *)(param_4 + 200) >>
                                                       0x20) + fVar21 * fVar46 + fVar27 * fVar35 +
                                                fVar39 * fVar38 + fVar30 * fVar25))) * fVar36) -
                 fVar30 * fVar29);
        ((undefined8 *)(param_2 + lVar10))[1] = CONCAT44(fVar46,fVar19);
        *(undefined8 *)(param_2 + lVar10) = CONCAT44(fVar18,fVar15);
        ((undefined8 *)(param_3 + lVar10))[1] =
             CONCAT44(fVar46 - (fVar45 - (float)((ulong)uVar43 >> 0x20)),
                      fVar19 - (fVar16 - (float)uVar43));
        *(undefined8 *)(param_3 + lVar10) =
             CONCAT44(fVar18 - (fVar17 - (float)((ulong)uVar37 >> 0x20)),
                      fVar15 - (fVar20 - (float)uVar37));
      } while (puVar7 != puVar5);
    }
  }
  else if (param_5 == 0) {
    iVar51 = *(int *)(param_1 + 0x30);
    if (iVar51 == 0) {
      if (*(int *)(param_1 + 0x40) != 0) {
        lVar10 = (long)*(int *)(param_1 + 0x40) * 0x14;
        pfVar8 = (float *)(*(long *)(param_1 + 0x38) + 8);
        do {
          pfVar11 = pfVar8 + -1;
          puVar2 = (undefined8 *)
                   (*(long *)(param_4 + 0x18) +
                   (ulong)*(byte *)(param_4 + 0x24) * (ulong)*(ushort *)((long)pfVar8 + -6));
          uVar54 = *puVar2;
          pfVar1 = pfVar8 + 2;
          puVar3 = (undefined8 *)
                   (*(long *)(param_4 + 0x40) +
                   (ulong)*(byte *)(param_4 + 0x4c) * (ulong)*(ushort *)((long)pfVar8 + -6));
          uVar14 = *puVar3;
          lVar9 = (ulong)*(ushort *)(pfVar8 + -2) * 0x10;
          fVar16 = *pfVar8;
          pfVar4 = pfVar8 + 1;
          fVar21 = (float)((ulong)uVar54 >> 0x20);
          fVar28 = (float)*(undefined8 *)(param_4 + 0xa0);
          fVar30 = (float)((ulong)*(undefined8 *)(param_4 + 0xa0) >> 0x20);
          fVar22 = (float)*(undefined8 *)(param_4 + 0xa8);
          fVar34 = (float)((ulong)*(undefined8 *)(param_4 + 0xa8) >> 0x20);
          uVar32 = ((undefined8 *)(param_3 + lVar9))[1];
          uVar53 = *(undefined8 *)(param_3 + lVar9);
          fVar26 = (float)uVar54;
          fVar35 = (float)*(undefined8 *)(param_4 + 0x90);
          fVar38 = (float)((ulong)*(undefined8 *)(param_4 + 0x90) >> 0x20);
          fVar23 = (float)*(undefined8 *)(param_4 + 0x98);
          fVar36 = (float)((ulong)*(undefined8 *)(param_4 + 0x98) >> 0x20);
          lVar10 = lVar10 + -0x14;
          fVar19 = (float)uVar14;
          pfVar8 = pfVar8 + 5;
          fVar45 = (float)((ulong)uVar14 >> 0x20);
          fVar24 = (float)puVar2[1];
          fVar39 = (float)*(undefined8 *)(param_4 + 0xb0);
          fVar41 = (float)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20);
          fVar48 = (float)*(undefined8 *)(param_4 + 0xb8);
          fVar47 = (float)((ulong)*(undefined8 *)(param_4 + 0xb8) >> 0x20);
          uVar14 = ((undefined8 *)(param_2 + lVar9))[1];
          uVar54 = *(undefined8 *)(param_2 + lVar9);
          fVar46 = (float)puVar3[1];
          fVar25 = fVar35 * fVar19 + fVar28 * fVar45 + fVar39 * fVar46;
          fVar27 = fVar38 * fVar19 + fVar30 * fVar45 + fVar41 * fVar46;
          fVar29 = fVar23 * fVar19 + fVar22 * fVar45 + fVar48 * fVar46;
          fVar31 = fVar36 * fVar19 + fVar34 * fVar45 + fVar47 * fVar46;
          fVar49 = (float)uVar54;
          fVar40 = (float)((ulong)uVar54 >> 0x20);
          fVar42 = (float)uVar14;
          fVar44 = (float)((ulong)uVar14 >> 0x20);
          fVar28 = (fVar49 - ((float)*(undefined8 *)(param_4 + 0xc0) + fVar35 * fVar26 +
                              fVar28 * fVar21 + fVar39 * fVar24)) + fVar20;
          fVar30 = (fVar40 - ((float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) +
                              fVar38 * fVar26 + fVar30 * fVar21 + fVar41 * fVar24)) + fVar15;
          fVar22 = (fVar42 - ((float)*(undefined8 *)(param_4 + 200) + fVar23 * fVar26 +
                              fVar22 * fVar21 + fVar48 * fVar24)) + fVar17;
          fVar35 = fVar28 * fVar28 + fVar30 * fVar30 + fVar22 * fVar22;
          fVar48 = fVar28 * fVar28 + fVar30 * fVar30 + fVar22 * fVar22;
          uVar54 = NEON_frsqrte(CONCAT44(fVar48,fVar35),4);
          iVar51 = -(uint)(fVar35 <= 0.0);
          iVar50 = -(uint)(fVar48 <= 0.0);
          fVar19 = (float)uVar54;
          fVar45 = (float)((ulong)uVar54 >> 0x20);
          uVar54 = NEON_frsqrts(CONCAT44(fVar48,fVar35),CONCAT44(fVar45 * fVar45,fVar19 * fVar19),4)
          ;
          fVar19 = fVar19 * (float)uVar54;
          fVar45 = fVar45 * (float)((ulong)uVar54 >> 0x20);
          fVar39 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                                   CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                            ~(byte)((uint)iVar51 >> 0x10),
                                            CONCAT11((byte)((uint)fVar19 >> 8) &
                                                     ~(byte)((uint)iVar51 >> 8),
                                                     SUB41(fVar19,0) & ~(byte)iVar51)));
          fVar41 = (float)(CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                    CONCAT16((byte)((uint)fVar45 >> 0x10) &
                                             ~(byte)((uint)iVar50 >> 0x10),
                                             CONCAT15((byte)((uint)fVar45 >> 8) &
                                                      ~(byte)((uint)iVar50 >> 8),
                                                      CONCAT14(SUB41(fVar45,0) & ~(byte)iVar50,
                                                               fVar39)))) >> 0x20);
          uVar54 = NEON_fmin(CONCAT44((*pfVar11 - fVar48 * fVar41) * fVar12 * *pfVar1,
                                      (*pfVar11 - fVar35 * fVar39) * fVar12 * *pfVar1),uVar13,4);
          fVar46 = fVar25 * fVar28 * fVar39;
          fVar38 = fVar27 * fVar30 * fVar41;
          fVar23 = fVar29 * fVar22 * fVar39;
          fVar19 = (float)uVar54;
          fVar45 = (float)((ulong)uVar54 >> 0x20);
          fVar35 = (fVar19 + fVar35 * fVar39) * (fVar46 + fVar38 + fVar23);
          fVar46 = (fVar45 + fVar48 * fVar41) * (fVar46 + fVar38 + fVar23);
          uVar54 = NEON_fmin(CONCAT44(fVar16 - fVar46,fVar16 - fVar35),uVar13,4);
          uVar14 = NEON_fmin(CONCAT44(fVar46 - *pfVar4,fVar35 - *pfVar4),uVar13,4);
          fVar38 = (float)((ulong)uVar14 >> 0x20);
          fVar35 = (float)((ulong)uVar54 >> 0x20);
          fVar16 = fVar25 * (float)uVar54 +
                   ((fVar49 + fVar19 * fVar28 * fVar39) - fVar25 * (float)uVar14);
          fVar46 = fVar27 * fVar35 + ((fVar40 + fVar45 * fVar30 * fVar41) - fVar27 * fVar38);
          fVar19 = fVar29 * (float)uVar54 +
                   ((fVar42 + fVar19 * fVar22 * fVar39) - fVar29 * (float)uVar14);
          fVar45 = fVar31 * fVar35 +
                   ((fVar44 + fVar45 * ((fVar44 - ((float)((ulong)*(undefined8 *)(param_4 + 200) >>
                                                          0x20) + fVar36 * fVar26 + fVar34 * fVar21
                                                  + fVar47 * fVar24)) + fVar18) * fVar41) -
                   fVar31 * fVar38);
          ((undefined8 *)(param_2 + lVar9))[1] = CONCAT44(fVar45,fVar19);
          *(undefined8 *)(param_2 + lVar9) = CONCAT44(fVar46,fVar16);
          ((undefined8 *)(param_3 + lVar9))[1] =
               CONCAT44(fVar45 - (fVar44 - (float)((ulong)uVar32 >> 0x20)),
                        fVar19 - (fVar42 - (float)uVar32));
          *(undefined8 *)(param_3 + lVar9) =
               CONCAT44(fVar46 - (fVar40 - (float)((ulong)uVar53 >> 0x20)),
                        fVar16 - (fVar49 - (float)uVar53));
        } while (lVar10 != 0);
      }
    }
    else {
      puVar5 = *(ushort **)(param_1 + 0x28);
      uVar54 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x268);
      uVar13 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x260);
      uVar14 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x50);
      puVar7 = puVar5;
      do {
        puVar2 = (undefined8 *)
                 (*(long *)(param_4 + 0x18) + (ulong)*(byte *)(param_4 + 0x24) * (ulong)puVar7[1]);
        uVar53 = *puVar2;
        fVar20 = (float)uVar53;
        fVar45 = (float)*(undefined8 *)(param_4 + 0x90);
        fVar46 = (float)((ulong)*(undefined8 *)(param_4 + 0x90) >> 0x20);
        fVar35 = (float)*(undefined8 *)(param_4 + 0x98);
        fVar21 = (float)((ulong)*(undefined8 *)(param_4 + 0x98) >> 0x20);
        fVar17 = (float)((ulong)uVar53 >> 0x20);
        fVar38 = (float)*(undefined8 *)(param_4 + 0xa0);
        fVar26 = (float)((ulong)*(undefined8 *)(param_4 + 0xa0) >> 0x20);
        fVar28 = (float)*(undefined8 *)(param_4 + 0xa8);
        fVar25 = (float)((ulong)*(undefined8 *)(param_4 + 0xa8) >> 0x20);
        fVar16 = (float)puVar2[1];
        fVar23 = (float)*(undefined8 *)(param_4 + 0xb0);
        fVar30 = (float)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20);
        fVar24 = (float)*(undefined8 *)(param_4 + 0xb8);
        fVar34 = (float)((ulong)*(undefined8 *)(param_4 + 0xb8) >> 0x20);
        puVar6 = puVar7 + 8;
        lVar10 = (ulong)*puVar7 * 0x10;
        uVar32 = ((undefined8 *)(param_2 + lVar10))[1];
        uVar53 = *(undefined8 *)(param_2 + lVar10);
        uVar37 = ((undefined8 *)(param_3 + lVar10))[1];
        uVar33 = *(undefined8 *)(param_3 + lVar10);
        puVar2 = (undefined8 *)
                 (*(long *)(param_4 + 0x40) + (ulong)*(byte *)(param_4 + 0x4c) * (ulong)puVar7[1]);
        uVar43 = *puVar2;
        fVar22 = (float)uVar43;
        fVar39 = (float)((ulong)uVar43 >> 0x20);
        fVar41 = (float)puVar2[1];
        fVar27 = (float)uVar53;
        fVar29 = (float)((ulong)uVar53 >> 0x20);
        fVar31 = (float)uVar32;
        fVar36 = (float)((ulong)uVar32 >> 0x20);
        fVar15 = (fVar27 - ((float)*(undefined8 *)(param_4 + 0xc0) + fVar45 * fVar20 +
                            fVar38 * fVar17 + fVar23 * fVar16)) + (float)uVar13;
        fVar18 = (fVar29 - ((float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) +
                            fVar46 * fVar20 + fVar26 * fVar17 + fVar30 * fVar16)) +
                 (float)((ulong)uVar13 >> 0x20);
        fVar19 = (fVar31 - ((float)*(undefined8 *)(param_4 + 200) + fVar35 * fVar20 +
                            fVar28 * fVar17 + fVar24 * fVar16)) + (float)uVar54;
        fVar23 = fVar45 * fVar22 + fVar38 * fVar39 + fVar23 * fVar41;
        fVar26 = fVar46 * fVar22 + fVar26 * fVar39 + fVar30 * fVar41;
        fVar28 = fVar35 * fVar22 + fVar28 * fVar39 + fVar24 * fVar41;
        fVar30 = fVar21 * fVar22 + fVar25 * fVar39 + fVar34 * fVar41;
        fVar48 = fVar15 * fVar15 + fVar18 * fVar18 + fVar19 * fVar19;
        fVar49 = fVar15 * fVar15 + fVar18 * fVar18 + fVar19 * fVar19;
        uVar53 = NEON_frsqrte(CONCAT44(fVar49,fVar48),4);
        fVar45 = (float)uVar53;
        fVar46 = (float)((ulong)uVar53 >> 0x20);
        uVar53 = NEON_frsqrts(CONCAT44(fVar49,fVar48),CONCAT44(fVar46 * fVar46,fVar45 * fVar45),4);
        iVar50 = -(uint)(fVar48 <= 0.0);
        iVar52 = -(uint)(fVar49 <= 0.0);
        fVar45 = fVar45 * (float)uVar53;
        fVar46 = fVar46 * (float)((ulong)uVar53 >> 0x20);
        fVar24 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                 CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                          ~(byte)((uint)iVar50 >> 0x10),
                                          CONCAT11((byte)((uint)fVar45 >> 8) &
                                                   ~(byte)((uint)iVar50 >> 8),
                                                   SUB41(fVar45,0) & ~(byte)iVar50)));
        fVar22 = (float)(CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                                  CONCAT16((byte)((uint)fVar46 >> 0x10) &
                                           ~(byte)((uint)iVar52 >> 0x10),
                                           CONCAT15((byte)((uint)fVar46 >> 8) &
                                                    ~(byte)((uint)iVar52 >> 8),
                                                    CONCAT14(SUB41(fVar46,0) & ~(byte)iVar52,fVar24)
                                                   ))) >> 0x20);
        fVar38 = fVar23 * fVar15 * fVar24;
        fVar39 = fVar26 * fVar18 * fVar22;
        fVar41 = fVar28 * fVar19 * fVar24;
        uVar53 = NEON_fmin(CONCAT44(fVar12 * (*(float *)(puVar7 + 2) - fVar49 * fVar22),
                                    fVar12 * (*(float *)(puVar7 + 2) - fVar48 * fVar24)),uVar14,4);
        fVar45 = (float)uVar53;
        fVar35 = (float)((ulong)uVar53 >> 0x20);
        fVar46 = (fVar45 + fVar48 * fVar24) * (fVar38 + fVar39 + fVar41);
        fVar38 = (fVar35 + fVar49 * fVar22) * (fVar38 + fVar39 + fVar41);
        uVar32 = NEON_fmin(CONCAT44(fVar38 - *(float *)(puVar7 + 6),fVar46 - *(float *)(puVar7 + 6))
                           ,uVar14,4);
        uVar53 = NEON_fmin(CONCAT44(*(float *)(puVar7 + 4) - fVar38,*(float *)(puVar7 + 4) - fVar46)
                           ,uVar14,4);
        fVar38 = (float)((ulong)uVar32 >> 0x20);
        fVar46 = (float)((ulong)uVar53 >> 0x20);
        fVar15 = fVar23 * (float)uVar53 +
                 ((fVar27 + fVar45 * fVar15 * fVar24) - fVar23 * (float)uVar32);
        fVar18 = fVar26 * fVar46 + ((fVar29 + fVar35 * fVar18 * fVar22) - fVar26 * fVar38);
        fVar19 = fVar28 * (float)uVar53 +
                 ((fVar31 + fVar45 * fVar19 * fVar24) - fVar28 * (float)uVar32);
        fVar20 = fVar30 * fVar46 +
                 ((fVar36 + fVar35 * ((fVar36 - ((float)((ulong)*(undefined8 *)(param_4 + 200) >>
                                                        0x20) + fVar21 * fVar20 + fVar25 * fVar17 +
                                                fVar34 * fVar16)) + (float)((ulong)uVar54 >> 0x20))
                                     * fVar22) - fVar30 * fVar38);
        ((undefined8 *)(param_2 + lVar10))[1] = CONCAT44(fVar20,fVar19);
        *(undefined8 *)(param_2 + lVar10) = CONCAT44(fVar18,fVar15);
        ((undefined8 *)(param_3 + lVar10))[1] =
             CONCAT44(fVar20 - (fVar36 - (float)((ulong)uVar37 >> 0x20)),
                      fVar19 - (fVar31 - (float)uVar37));
        *(undefined8 *)(param_3 + lVar10) =
             CONCAT44(fVar18 - (fVar29 - (float)((ulong)uVar33 >> 0x20)),
                      fVar15 - (fVar27 - (float)uVar33));
        puVar7 = puVar6;
      } while (puVar6 != puVar5 + (long)iVar51 * 8);
    }
  }
  return;
}

