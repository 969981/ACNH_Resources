
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562440(long param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                 undefined8 *param_6)

{
  float *pfVar1;
  float *pfVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  ushort *puVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  undefined8 uVar14;
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
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int iVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  
  uVar14 = DAT_0413f310;
  fVar13 = *(float *)(param_1 + 0x4c) * (float)*param_6;
  fVar16 = (float)_DAT_0413f520;
  fVar17 = (float)((ulong)_DAT_0413f520 >> 0x20);
  fVar19 = (float)_DAT_0413f528;
  fVar20 = (float)((ulong)_DAT_0413f528 >> 0x20);
  if (param_5 == 1) {
    if (*(int *)(param_1 + 0x30) == 0) {
      if (*(int *)(param_1 + 0x40) != 0) {
        lVar10 = (long)*(int *)(param_1 + 0x40) * 0x14;
        pfVar11 = (float *)(*(long *)(param_1 + 0x38) + 8);
        do {
          fVar18 = fVar13 * pfVar11[2];
          lVar10 = lVar10 + -0x14;
          puVar5 = (undefined8 *)
                   (*(long *)(param_4 + 0x18) +
                   (ulong)*(byte *)(param_4 + 0x24) * (ulong)*(ushort *)((long)pfVar11 + -6));
          uVar46 = *puVar5;
          puVar6 = (undefined8 *)
                   (*(long *)(param_4 + 0x40) +
                   (ulong)*(byte *)(param_4 + 0x4c) * (ulong)*(ushort *)((long)pfVar11 + -6));
          uVar31 = *puVar6;
          puVar7 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar11 + -2) * 0x10);
          uVar15 = puVar7[1];
          uVar52 = *puVar7;
          fVar26 = (float)uVar46;
          fVar25 = (float)*(undefined8 *)(param_4 + 0x90);
          fVar44 = (float)((ulong)*(undefined8 *)(param_4 + 0x90) >> 0x20);
          fVar30 = (float)*(undefined8 *)(param_4 + 0x98);
          fVar39 = (float)((ulong)*(undefined8 *)(param_4 + 0x98) >> 0x20);
          fVar34 = (float)((ulong)uVar46 >> 0x20);
          fVar28 = (float)*(undefined8 *)(param_4 + 0xa0);
          fVar29 = (float)((ulong)*(undefined8 *)(param_4 + 0xa0) >> 0x20);
          fVar36 = (float)*(undefined8 *)(param_4 + 0xa8);
          fVar40 = (float)((ulong)*(undefined8 *)(param_4 + 0xa8) >> 0x20);
          fVar22 = (float)uVar31;
          fVar23 = (float)((ulong)uVar31 >> 0x20);
          fVar35 = (float)puVar5[1];
          fVar37 = (float)*(undefined8 *)(param_4 + 0xb0);
          fVar38 = (float)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20);
          fVar33 = (float)*(undefined8 *)(param_4 + 0xb8);
          fVar43 = (float)((ulong)*(undefined8 *)(param_4 + 0xb8) >> 0x20);
          fVar24 = (float)puVar6[1];
          fVar21 = (float)*(undefined8 *)(param_4 + 0xc0) + fVar25 * fVar26 + fVar28 * fVar34 +
                   fVar37 * fVar35;
          fVar47 = (float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) + fVar44 * fVar26 +
                   fVar29 * fVar34 + fVar38 * fVar35;
          fVar27 = (float)*(undefined8 *)(param_4 + 200) + fVar30 * fVar26 + fVar36 * fVar34 +
                   fVar33 * fVar35;
          fVar28 = fVar25 * fVar22 + fVar28 * fVar23 + fVar37 * fVar24;
          fVar29 = fVar44 * fVar22 + fVar29 * fVar23 + fVar38 * fVar24;
          fVar30 = fVar30 * fVar22 + fVar36 * fVar23 + fVar33 * fVar24;
          fVar36 = fVar39 * fVar22 + fVar40 * fVar23 + fVar43 * fVar24;
          fVar22 = (float)uVar52;
          fVar23 = (float)((ulong)uVar52 >> 0x20);
          fVar24 = (float)uVar15;
          fVar25 = fVar28 * (fVar22 - fVar21);
          fVar44 = fVar29 * (fVar23 - fVar47);
          fVar38 = fVar30 * (fVar24 - fVar27);
          fVar37 = fVar25 + fVar44 + fVar38;
          fVar38 = fVar25 + fVar44 + fVar38;
          fVar25 = (float)((ulong)uVar15 >> 0x20);
          uVar46 = NEON_fmin(CONCAT44((fVar38 - pfVar11[1]) * fVar18,(fVar37 - pfVar11[1]) * fVar18)
                             ,uVar14,4);
          fVar44 = fVar16 + (fVar22 - (fVar21 + fVar28 * fVar37));
          fVar47 = fVar17 + (fVar23 - (fVar47 + fVar29 * fVar38));
          fVar27 = fVar19 + (fVar24 - (fVar27 + fVar30 * fVar37));
          fVar21 = fVar44 * fVar44 + fVar47 * fVar47 + fVar27 * fVar27;
          fVar33 = fVar44 * fVar44 + fVar47 * fVar47 + fVar27 * fVar27;
          uVar52 = NEON_frsqrte(CONCAT44(fVar33,fVar21),4);
          fVar45 = (float)uVar52;
          fVar50 = (float)((ulong)uVar52 >> 0x20);
          uVar52 = NEON_frsqrts(CONCAT44(fVar33,fVar21),CONCAT44(fVar50 * fVar50,fVar45 * fVar45),4)
          ;
          iVar41 = -(uint)(fVar21 <= 0.0);
          iVar42 = -(uint)(fVar33 <= 0.0);
          fVar45 = fVar45 * (float)uVar52;
          fVar50 = fVar50 * (float)((ulong)uVar52 >> 0x20);
          fVar45 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                                   CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                            ~(byte)((uint)iVar41 >> 0x10),
                                            CONCAT11((byte)((uint)fVar45 >> 8) &
                                                     ~(byte)((uint)iVar41 >> 8),
                                                     SUB41(fVar45,0) & ~(byte)iVar41)));
          fVar50 = (float)(CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                                    CONCAT16((byte)((uint)fVar50 >> 0x10) &
                                             ~(byte)((uint)iVar42 >> 0x10),
                                             CONCAT15((byte)((uint)fVar50 >> 8) &
                                                      ~(byte)((uint)iVar42 >> 8),
                                                      CONCAT14(SUB41(fVar50,0) & ~(byte)iVar42,
                                                               fVar45)))) >> 0x20);
          uVar15 = NEON_fmin(CONCAT44((pfVar11[-1] - fVar33 * fVar50) * fVar18,
                                      (pfVar11[-1] - fVar21 * fVar45) * fVar18),uVar14,4);
          uVar52 = NEON_fmin(CONCAT44((*pfVar11 - fVar38) * fVar18,(*pfVar11 - fVar37) * fVar18),
                             uVar14,4);
          fVar21 = (float)((ulong)uVar15 >> 0x20);
          fVar37 = (float)((ulong)uVar46 >> 0x20);
          fVar18 = (float)((ulong)uVar52 >> 0x20);
          puVar5 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar11 + -2) * 0x10);
          puVar5[1] = CONCAT44(fVar36 * fVar18 +
                               ((fVar25 + fVar21 * (fVar20 + (fVar25 - ((float)((ulong)*(undefined8
                                                                                         *)(param_4 
                                                  + 200) >> 0x20) + fVar39 * fVar26 +
                                                  fVar40 * fVar34 + fVar43 * fVar35 +
                                                  fVar36 * fVar38))) * fVar50) - fVar36 * fVar37),
                               fVar30 * (float)uVar52 +
                               ((fVar24 + (float)uVar15 * fVar27 * fVar45) - fVar30 * (float)uVar46)
                              );
          *puVar5 = CONCAT44(fVar29 * fVar18 +
                             ((fVar23 + fVar21 * fVar47 * fVar50) - fVar29 * fVar37),
                             fVar28 * (float)uVar52 +
                             ((fVar22 + (float)uVar15 * fVar44 * fVar45) - fVar28 * (float)uVar46));
          pfVar11 = pfVar11 + 5;
        } while (lVar10 != 0);
      }
    }
    else {
      puVar9 = *(ushort **)(param_1 + 0x28);
      puVar3 = puVar9 + (long)*(int *)(param_1 + 0x30) * 8;
      uVar52 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x268);
      uVar14 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x260);
      uVar15 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x50);
      do {
        puVar5 = (undefined8 *)
                 (*(long *)(param_4 + 0x18) + (ulong)*(byte *)(param_4 + 0x24) * (ulong)puVar9[1]);
        uVar46 = *puVar5;
        fVar18 = (float)uVar46;
        fVar16 = (float)*(undefined8 *)(param_4 + 0x90);
        fVar17 = (float)((ulong)*(undefined8 *)(param_4 + 0x90) >> 0x20);
        fVar19 = (float)*(undefined8 *)(param_4 + 0x98);
        fVar47 = (float)((ulong)*(undefined8 *)(param_4 + 0x98) >> 0x20);
        uVar4 = *puVar9;
        puVar6 = (undefined8 *)
                 (*(long *)(param_4 + 0x40) + (ulong)*(byte *)(param_4 + 0x4c) * (ulong)puVar9[1]);
        uVar32 = *puVar6;
        fVar22 = (float)((ulong)uVar46 >> 0x20);
        fVar26 = (float)*(undefined8 *)(param_4 + 0xa0);
        fVar44 = (float)((ulong)*(undefined8 *)(param_4 + 0xa0) >> 0x20);
        fVar34 = (float)*(undefined8 *)(param_4 + 0xa8);
        fVar30 = (float)((ulong)*(undefined8 *)(param_4 + 0xa8) >> 0x20);
        pfVar11 = (float *)(puVar9 + 4);
        fVar24 = (float)puVar5[1];
        fVar28 = (float)*(undefined8 *)(param_4 + 0xb0);
        fVar29 = (float)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20);
        fVar36 = (float)*(undefined8 *)(param_4 + 0xb8);
        fVar33 = (float)((ulong)*(undefined8 *)(param_4 + 0xb8) >> 0x20);
        puVar5 = (undefined8 *)(param_2 + (ulong)uVar4 * 0x10);
        uVar31 = puVar5[1];
        uVar46 = *puVar5;
        fVar20 = (float)uVar32;
        fVar35 = (float)((ulong)uVar32 >> 0x20);
        fVar27 = (float)puVar6[1];
        pfVar1 = (float *)(puVar9 + 6);
        fVar21 = (float)*(undefined8 *)(param_4 + 0xc0) + fVar16 * fVar18 + fVar26 * fVar22 +
                 fVar28 * fVar24;
        fVar23 = (float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) + fVar17 * fVar18 +
                 fVar44 * fVar22 + fVar29 * fVar24;
        fVar25 = (float)*(undefined8 *)(param_4 + 200) + fVar19 * fVar18 + fVar34 * fVar22 +
                 fVar36 * fVar24;
        fVar26 = fVar16 * fVar20 + fVar26 * fVar35 + fVar28 * fVar27;
        fVar44 = fVar17 * fVar20 + fVar44 * fVar35 + fVar29 * fVar27;
        fVar34 = fVar19 * fVar20 + fVar34 * fVar35 + fVar36 * fVar27;
        fVar35 = fVar47 * fVar20 + fVar30 * fVar35 + fVar33 * fVar27;
        pfVar2 = (float *)(puVar9 + 2);
        fVar16 = (float)uVar46;
        fVar17 = (float)((ulong)uVar46 >> 0x20);
        fVar19 = (float)uVar31;
        puVar9 = puVar9 + 8;
        fVar20 = fVar26 * (fVar16 - fVar21);
        fVar28 = fVar44 * (fVar17 - fVar23);
        fVar29 = fVar34 * (fVar19 - fVar25);
        fVar27 = fVar20 + fVar28 + fVar29;
        fVar29 = fVar20 + fVar28 + fVar29;
        fVar20 = (float)((ulong)uVar31 >> 0x20);
        uVar32 = NEON_fmin(CONCAT44(fVar13 * (fVar29 - *pfVar1),fVar13 * (fVar27 - *pfVar1)),uVar15,
                           4);
        fVar21 = (float)uVar14 + (fVar16 - (fVar21 + fVar26 * fVar27));
        fVar23 = (float)((ulong)uVar14 >> 0x20) + (fVar17 - (fVar23 + fVar44 * fVar29));
        fVar25 = (float)uVar52 + (fVar19 - (fVar25 + fVar34 * fVar27));
        uVar46 = NEON_fmin(CONCAT44(fVar13 * (*pfVar11 - fVar29),fVar13 * (*pfVar11 - fVar27)),
                           uVar15,4);
        fVar27 = fVar21 * fVar21 + fVar23 * fVar23 + fVar25 * fVar25;
        fVar28 = fVar21 * fVar21 + fVar23 * fVar23 + fVar25 * fVar25;
        uVar31 = NEON_frsqrte(CONCAT44(fVar28,fVar27),4);
        fVar36 = (float)uVar31;
        fVar38 = (float)((ulong)uVar31 >> 0x20);
        uVar31 = NEON_frsqrts(CONCAT44(fVar28,fVar27),CONCAT44(fVar38 * fVar38,fVar36 * fVar36),4);
        iVar41 = -(uint)(fVar27 <= 0.0);
        iVar42 = -(uint)(fVar28 <= 0.0);
        fVar36 = fVar36 * (float)uVar31;
        fVar38 = fVar38 * (float)((ulong)uVar31 >> 0x20);
        fVar37 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                                 CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                          ~(byte)((uint)iVar41 >> 0x10),
                                          CONCAT11((byte)((uint)fVar36 >> 8) &
                                                   ~(byte)((uint)iVar41 >> 8),
                                                   SUB41(fVar36,0) & ~(byte)iVar41)));
        fVar38 = (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                                  CONCAT16((byte)((uint)fVar38 >> 0x10) &
                                           ~(byte)((uint)iVar42 >> 0x10),
                                           CONCAT15((byte)((uint)fVar38 >> 8) &
                                                    ~(byte)((uint)iVar42 >> 8),
                                                    CONCAT14(SUB41(fVar38,0) & ~(byte)iVar42,fVar37)
                                                   ))) >> 0x20);
        uVar31 = NEON_fmin(CONCAT44(fVar13 * (*pfVar2 - fVar28 * fVar38),
                                    fVar13 * (*pfVar2 - fVar27 * fVar37)),uVar15,4);
        fVar28 = (float)((ulong)uVar31 >> 0x20);
        fVar36 = (float)((ulong)uVar32 >> 0x20);
        fVar27 = (float)((ulong)uVar46 >> 0x20);
        puVar5 = (undefined8 *)(param_2 + (ulong)uVar4 * 0x10);
        puVar5[1] = CONCAT44(fVar35 * fVar27 +
                             ((fVar20 + fVar28 * ((float)((ulong)uVar52 >> 0x20) +
                                                 (fVar20 - ((float)((ulong)*(undefined8 *)
                                                                            (param_4 + 200) >> 0x20)
                                                            + fVar47 * fVar18 + fVar30 * fVar22 +
                                                            fVar33 * fVar24 + fVar35 * fVar29))) *
                                                 fVar38) - fVar35 * fVar36),
                             fVar34 * (float)uVar46 +
                             ((fVar19 + (float)uVar31 * fVar25 * fVar37) - fVar34 * (float)uVar32));
        *puVar5 = CONCAT44(fVar44 * fVar27 + ((fVar17 + fVar28 * fVar23 * fVar38) - fVar44 * fVar36)
                           ,fVar26 * (float)uVar46 +
                            ((fVar16 + (float)uVar31 * fVar21 * fVar37) - fVar26 * (float)uVar32));
      } while (puVar9 != puVar3);
    }
  }
  else if (param_5 == 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      if (*(int *)(param_1 + 0x40) != 0) {
        lVar10 = (long)*(int *)(param_1 + 0x40) * 0x14;
        pfVar11 = (float *)(*(long *)(param_1 + 0x38) + 8);
        do {
          pfVar12 = pfVar11 + -1;
          puVar5 = (undefined8 *)
                   (*(long *)(param_4 + 0x18) +
                   (ulong)*(byte *)(param_4 + 0x24) * (ulong)*(ushort *)((long)pfVar11 + -6));
          uVar52 = *puVar5;
          pfVar1 = pfVar11 + 2;
          pfVar2 = pfVar11 + -2;
          puVar6 = (undefined8 *)
                   (*(long *)(param_4 + 0x40) +
                   (ulong)*(byte *)(param_4 + 0x4c) * (ulong)*(ushort *)((long)pfVar11 + -6));
          uVar15 = *puVar6;
          fVar18 = *pfVar11;
          pfVar8 = pfVar11 + 1;
          fVar44 = (float)((ulong)uVar52 >> 0x20);
          fVar26 = (float)*(undefined8 *)(param_4 + 0xa0);
          fVar37 = (float)((ulong)*(undefined8 *)(param_4 + 0xa0) >> 0x20);
          fVar38 = (float)*(undefined8 *)(param_4 + 0xa8);
          fVar33 = (float)((ulong)*(undefined8 *)(param_4 + 0xa8) >> 0x20);
          fVar25 = (float)uVar52;
          fVar24 = (float)*(undefined8 *)(param_4 + 0x90);
          fVar34 = (float)((ulong)*(undefined8 *)(param_4 + 0x90) >> 0x20);
          fVar35 = (float)*(undefined8 *)(param_4 + 0x98);
          fVar36 = (float)((ulong)*(undefined8 *)(param_4 + 0x98) >> 0x20);
          fVar21 = (float)uVar15;
          lVar10 = lVar10 + -0x14;
          fVar22 = (float)((ulong)uVar15 >> 0x20);
          pfVar11 = pfVar11 + 5;
          fVar47 = (float)puVar5[1];
          fVar39 = (float)*(undefined8 *)(param_4 + 0xb0);
          fVar48 = (float)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20);
          fVar49 = (float)*(undefined8 *)(param_4 + 0xb8);
          fVar51 = (float)((ulong)*(undefined8 *)(param_4 + 0xb8) >> 0x20);
          puVar5 = (undefined8 *)(param_2 + (ulong)*(ushort *)pfVar2 * 0x10);
          uVar15 = puVar5[1];
          uVar52 = *puVar5;
          fVar23 = (float)puVar6[1];
          fVar27 = fVar24 * fVar21 + fVar26 * fVar22 + fVar39 * fVar23;
          fVar28 = fVar34 * fVar21 + fVar37 * fVar22 + fVar48 * fVar23;
          fVar29 = fVar35 * fVar21 + fVar38 * fVar22 + fVar49 * fVar23;
          fVar30 = fVar36 * fVar21 + fVar33 * fVar22 + fVar51 * fVar23;
          fVar40 = (float)uVar52;
          fVar45 = (float)((ulong)uVar52 >> 0x20);
          fVar50 = (float)uVar15;
          fVar43 = (float)((ulong)uVar15 >> 0x20);
          fVar26 = fVar16 + (fVar40 - ((float)*(undefined8 *)(param_4 + 0xc0) + fVar24 * fVar25 +
                                       fVar26 * fVar44 + fVar39 * fVar47));
          fVar34 = fVar17 + (fVar45 - ((float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) +
                                       fVar34 * fVar25 + fVar37 * fVar44 + fVar48 * fVar47));
          fVar35 = fVar19 + (fVar50 - ((float)*(undefined8 *)(param_4 + 200) + fVar35 * fVar25 +
                                       fVar38 * fVar44 + fVar49 * fVar47));
          fVar23 = fVar26 * fVar26 + fVar34 * fVar34 + fVar35 * fVar35;
          fVar39 = fVar26 * fVar26 + fVar34 * fVar34 + fVar35 * fVar35;
          uVar52 = NEON_frsqrte(CONCAT44(fVar39,fVar23),4);
          fVar21 = (float)uVar52;
          fVar22 = (float)((ulong)uVar52 >> 0x20);
          uVar52 = NEON_frsqrts(CONCAT44(fVar39,fVar23),CONCAT44(fVar22 * fVar22,fVar21 * fVar21),4)
          ;
          iVar41 = -(uint)(fVar23 <= 0.0);
          iVar42 = -(uint)(fVar39 <= 0.0);
          fVar21 = fVar21 * (float)uVar52;
          fVar22 = fVar22 * (float)((ulong)uVar52 >> 0x20);
          fVar48 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                                   CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                            ~(byte)((uint)iVar41 >> 0x10),
                                            CONCAT11((byte)((uint)fVar21 >> 8) &
                                                     ~(byte)((uint)iVar41 >> 8),
                                                     SUB41(fVar21,0) & ~(byte)iVar41)));
          fVar49 = (float)(CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                                    CONCAT16((byte)((uint)fVar22 >> 0x10) &
                                             ~(byte)((uint)iVar42 >> 0x10),
                                             CONCAT15((byte)((uint)fVar22 >> 8) &
                                                      ~(byte)((uint)iVar42 >> 8),
                                                      CONCAT14(SUB41(fVar22,0) & ~(byte)iVar42,
                                                               fVar48)))) >> 0x20);
          uVar52 = NEON_fmin(CONCAT44((*pfVar12 - fVar39 * fVar49) * fVar13 * *pfVar1,
                                      (*pfVar12 - fVar23 * fVar48) * fVar13 * *pfVar1),uVar14,4);
          fVar21 = (float)uVar52;
          fVar22 = (float)((ulong)uVar52 >> 0x20);
          fVar24 = fVar27 * fVar26 * fVar48;
          fVar37 = fVar28 * fVar34 * fVar49;
          fVar38 = fVar29 * fVar35 * fVar48;
          fVar23 = (fVar21 + fVar23 * fVar48) * (fVar24 + fVar37 + fVar38);
          fVar24 = (fVar22 + fVar39 * fVar49) * (fVar24 + fVar37 + fVar38);
          uVar15 = NEON_fmin(CONCAT44(fVar24 - *pfVar8,fVar23 - *pfVar8),uVar14,4);
          uVar52 = NEON_fmin(CONCAT44(fVar18 - fVar24,fVar18 - fVar23),uVar14,4);
          fVar23 = (float)((ulong)uVar15 >> 0x20);
          fVar18 = (float)((ulong)uVar52 >> 0x20);
          puVar5 = (undefined8 *)(param_2 + (ulong)*(ushort *)pfVar2 * 0x10);
          puVar5[1] = CONCAT44(fVar30 * fVar18 +
                               ((fVar43 + fVar22 * (fVar20 + (fVar43 - ((float)((ulong)*(undefined8
                                                                                         *)(param_4 
                                                  + 200) >> 0x20) + fVar36 * fVar25 +
                                                  fVar33 * fVar44 + fVar51 * fVar47))) * fVar49) -
                               fVar30 * fVar23),
                               fVar29 * (float)uVar52 +
                               ((fVar50 + fVar21 * fVar35 * fVar48) - fVar29 * (float)uVar15));
          *puVar5 = CONCAT44(fVar28 * fVar18 +
                             ((fVar45 + fVar22 * fVar34 * fVar49) - fVar28 * fVar23),
                             fVar27 * (float)uVar52 +
                             ((fVar40 + fVar21 * fVar26 * fVar48) - fVar27 * (float)uVar15));
        } while (lVar10 != 0);
      }
    }
    else {
      puVar9 = *(ushort **)(param_1 + 0x28);
      puVar3 = puVar9 + (long)*(int *)(param_1 + 0x30) * 8;
      uVar52 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x268);
      uVar14 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x260);
      uVar15 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x50);
      do {
        puVar5 = (undefined8 *)
                 (*(long *)(param_4 + 0x18) + (ulong)*(byte *)(param_4 + 0x24) * (ulong)puVar9[1]);
        uVar46 = *puVar5;
        uVar4 = *puVar9;
        fVar16 = (float)uVar46;
        fVar17 = (float)*(undefined8 *)(param_4 + 0x90);
        fVar20 = (float)((ulong)*(undefined8 *)(param_4 + 0x90) >> 0x20);
        fVar21 = (float)*(undefined8 *)(param_4 + 0x98);
        fVar25 = (float)((ulong)*(undefined8 *)(param_4 + 0x98) >> 0x20);
        fVar19 = (float)((ulong)uVar46 >> 0x20);
        fVar44 = (float)*(undefined8 *)(param_4 + 0xa0);
        fVar34 = (float)((ulong)*(undefined8 *)(param_4 + 0xa0) >> 0x20);
        fVar47 = (float)*(undefined8 *)(param_4 + 0xa8);
        fVar27 = (float)((ulong)*(undefined8 *)(param_4 + 0xa8) >> 0x20);
        fVar18 = (float)puVar5[1];
        fVar35 = (float)*(undefined8 *)(param_4 + 0xb0);
        fVar37 = (float)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20);
        fVar38 = (float)*(undefined8 *)(param_4 + 0xb8);
        fVar33 = (float)((ulong)*(undefined8 *)(param_4 + 0xb8) >> 0x20);
        pfVar11 = (float *)(puVar9 + 2);
        puVar5 = (undefined8 *)(param_2 + (ulong)uVar4 * 0x10);
        uVar31 = puVar5[1];
        uVar46 = *puVar5;
        puVar5 = (undefined8 *)
                 (*(long *)(param_4 + 0x40) + (ulong)*(byte *)(param_4 + 0x4c) * (ulong)puVar9[1]);
        uVar32 = *puVar5;
        pfVar1 = (float *)(puVar9 + 4);
        fVar26 = (float)uVar32;
        fVar39 = (float)((ulong)uVar32 >> 0x20);
        fVar40 = (float)puVar5[1];
        fVar28 = (float)uVar46;
        fVar29 = (float)((ulong)uVar46 >> 0x20);
        fVar30 = (float)uVar31;
        fVar36 = (float)((ulong)uVar31 >> 0x20);
        pfVar2 = (float *)(puVar9 + 6);
        fVar22 = fVar17 * fVar26 + fVar44 * fVar39 + fVar35 * fVar40;
        fVar23 = fVar20 * fVar26 + fVar34 * fVar39 + fVar37 * fVar40;
        fVar24 = fVar21 * fVar26 + fVar47 * fVar39 + fVar38 * fVar40;
        fVar26 = fVar25 * fVar26 + fVar27 * fVar39 + fVar33 * fVar40;
        puVar9 = puVar9 + 8;
        fVar17 = (float)uVar14 +
                 (fVar28 - ((float)*(undefined8 *)(param_4 + 0xc0) + fVar17 * fVar16 +
                            fVar44 * fVar19 + fVar35 * fVar18));
        fVar20 = (float)((ulong)uVar14 >> 0x20) +
                 (fVar29 - ((float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) +
                            fVar20 * fVar16 + fVar34 * fVar19 + fVar37 * fVar18));
        fVar21 = (float)uVar52 +
                 (fVar30 - ((float)*(undefined8 *)(param_4 + 200) + fVar21 * fVar16 +
                            fVar47 * fVar19 + fVar38 * fVar18));
        fVar34 = fVar17 * fVar17 + fVar20 * fVar20 + fVar21 * fVar21;
        fVar37 = fVar17 * fVar17 + fVar20 * fVar20 + fVar21 * fVar21;
        uVar46 = NEON_frsqrte(CONCAT44(fVar37,fVar34),4);
        fVar44 = (float)uVar46;
        fVar47 = (float)((ulong)uVar46 >> 0x20);
        uVar46 = NEON_frsqrts(CONCAT44(fVar37,fVar34),CONCAT44(fVar47 * fVar47,fVar44 * fVar44),4);
        iVar41 = -(uint)(fVar34 <= 0.0);
        iVar42 = -(uint)(fVar37 <= 0.0);
        fVar44 = fVar44 * (float)uVar46;
        fVar47 = fVar47 * (float)((ulong)uVar46 >> 0x20);
        fVar40 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                                 CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                          ~(byte)((uint)iVar41 >> 0x10),
                                          CONCAT11((byte)((uint)fVar44 >> 8) &
                                                   ~(byte)((uint)iVar41 >> 8),
                                                   SUB41(fVar44,0) & ~(byte)iVar41)));
        fVar45 = (float)(CONCAT17((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                                  CONCAT16((byte)((uint)fVar47 >> 0x10) &
                                           ~(byte)((uint)iVar42 >> 0x10),
                                           CONCAT15((byte)((uint)fVar47 >> 8) &
                                                    ~(byte)((uint)iVar42 >> 8),
                                                    CONCAT14(SUB41(fVar47,0) & ~(byte)iVar42,fVar40)
                                                   ))) >> 0x20);
        uVar46 = NEON_fmin(CONCAT44(fVar13 * (*pfVar11 - fVar37 * fVar45),
                                    fVar13 * (*pfVar11 - fVar34 * fVar40)),uVar15,4);
        fVar44 = (float)uVar46;
        fVar47 = (float)((ulong)uVar46 >> 0x20);
        fVar35 = fVar22 * fVar17 * fVar40;
        fVar38 = fVar23 * fVar20 * fVar45;
        fVar39 = fVar24 * fVar21 * fVar40;
        fVar34 = (fVar44 + fVar34 * fVar40) * (fVar35 + fVar38 + fVar39);
        fVar35 = (fVar47 + fVar37 * fVar45) * (fVar35 + fVar38 + fVar39);
        uVar31 = NEON_fmin(CONCAT44(fVar35 - *pfVar2,fVar34 - *pfVar2),uVar15,4);
        uVar46 = NEON_fmin(CONCAT44(*pfVar1 - fVar35,*pfVar1 - fVar34),uVar15,4);
        fVar35 = (float)((ulong)uVar31 >> 0x20);
        fVar34 = (float)((ulong)uVar46 >> 0x20);
        puVar5 = (undefined8 *)(param_2 + (ulong)uVar4 * 0x10);
        puVar5[1] = CONCAT44(fVar26 * fVar34 +
                             ((fVar36 + fVar47 * ((float)((ulong)uVar52 >> 0x20) +
                                                 (fVar36 - ((float)((ulong)*(undefined8 *)
                                                                            (param_4 + 200) >> 0x20)
                                                            + fVar25 * fVar16 + fVar27 * fVar19 +
                                                           fVar33 * fVar18))) * fVar45) -
                             fVar26 * fVar35),
                             fVar24 * (float)uVar46 +
                             ((fVar30 + fVar44 * fVar21 * fVar40) - fVar24 * (float)uVar31));
        *puVar5 = CONCAT44(fVar23 * fVar34 + ((fVar29 + fVar47 * fVar20 * fVar45) - fVar23 * fVar35)
                           ,fVar22 * (float)uVar46 +
                            ((fVar28 + fVar44 * fVar17 * fVar40) - fVar22 * (float)uVar31));
      } while (puVar9 != puVar3);
    }
  }
  return;
}

