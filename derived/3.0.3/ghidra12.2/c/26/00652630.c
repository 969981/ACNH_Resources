
void FUN_00652630(long param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar11 = (ulong)uVar3;
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) < (int)uVar3) {
    lVar5 = FUN_00426720(PTR_DAT_048607b8,uVar3,0x40,*param_3,(int)param_3[1]);
    *param_3 = lVar5;
  }
  if (*(uint *)(param_3 + 1) != uVar3) {
    *(uint *)(param_3 + 1) = uVar3;
  }
  uVar47 = param_2[1];
  uVar42 = *param_2;
  uVar28 = param_2[3];
  uVar25 = param_2[2];
  auVar55._0_4_ = ABS((float)uVar25 - (float)DAT_0413f4d0);
  auVar55._4_4_ = ABS((float)((ulong)uVar25 >> 0x20) - (float)((ulong)DAT_0413f4d0 >> 0x20));
  auVar55._8_4_ = ABS((float)uVar28 - (float)DAT_0413f4d8);
  auVar55._12_4_ = ABS((float)((ulong)uVar28 >> 0x20) - (float)((ulong)DAT_0413f4d8 >> 0x20));
  auVar51._0_4_ = ABS((float)uVar42 - (float)DAT_0413f4c0);
  auVar51._4_4_ = ABS((float)((ulong)uVar42 >> 0x20) - (float)((ulong)DAT_0413f4c0 >> 0x20));
  auVar51._8_4_ = ABS((float)uVar47 - (float)DAT_0413f4c8);
  auVar51._12_4_ = ABS((float)((ulong)uVar47 >> 0x20) - (float)((ulong)DAT_0413f4c8 >> 0x20));
  uVar37 = param_2[5];
  uVar32 = param_2[4];
  uVar21 = param_2[7];
  uVar15 = param_2[6];
  auVar51 = NEON_fmax(auVar51,auVar55,4);
  auVar56._4_4_ = ABS((float)((ulong)uVar32 >> 0x20) - (float)((ulong)DAT_0413f4e0 >> 0x20));
  auVar56._0_4_ = ABS((float)uVar32 - (float)DAT_0413f4e0);
  auVar56._8_4_ = ABS((float)uVar37 - (float)DAT_0413f4e8);
  auVar56._12_4_ = ABS((float)((ulong)uVar37 >> 0x20) - (float)((ulong)DAT_0413f4e8 >> 0x20));
  auVar4._4_4_ = ABS((float)((ulong)uVar15 >> 0x20) - (float)((ulong)DAT_0413f4f0 >> 0x20));
  auVar4._0_4_ = ABS((float)uVar15 - (float)DAT_0413f4f0);
  auVar4._8_4_ = ABS((float)uVar21 - (float)DAT_0413f4f8);
  auVar4._12_4_ = ABS((float)((ulong)uVar21 >> 0x20) - (float)((ulong)DAT_0413f4f8 >> 0x20));
  auVar56 = NEON_fmax(auVar56,auVar4,4);
  auVar56 = NEON_fmax(auVar51,auVar56,4);
  puVar7 = (undefined8 *)*param_3;
  puVar10 = *(undefined8 **)(param_1 + 0x18);
  if (1e-05 < auVar56._12_4_ ||
      (1e-05 < auVar56._8_4_ || (1e-05 < auVar56._0_4_ || 1e-05 < auVar56._4_4_))) {
    if (*(int *)(param_1 + 0x30) < 1) {
      if (0 < (int)uVar3) {
        pfVar9 = (float *)(puVar7 + 4);
        puVar10 = puVar10 + 4;
        while( true ) {
          uVar11 = uVar11 - 1;
          fVar12 = *(float *)(puVar10 + -4);
          fVar16 = *(float *)((long)puVar10 + -0x1c);
          fVar19 = *(float *)(puVar10 + -3);
          fVar22 = *(float *)((long)puVar10 + -0x14);
          fVar14 = *(float *)(puVar10 + -2);
          fVar18 = *(float *)((long)puVar10 + -0xc);
          fVar20 = *(float *)(puVar10 + -1);
          fVar23 = *(float *)((long)puVar10 + -4);
          fVar33 = (float)uVar42;
          fVar34 = (float)((ulong)uVar42 >> 0x20);
          fVar35 = (float)uVar47;
          fVar36 = (float)((ulong)uVar47 >> 0x20);
          fVar50 = (float)uVar25;
          fVar24 = (float)((ulong)uVar25 >> 0x20);
          fVar52 = (float)uVar28;
          fVar26 = (float)((ulong)uVar28 >> 0x20);
          fVar38 = (float)*puVar10;
          fVar43 = (float)puVar10[2];
          fVar39 = (float)((ulong)*puVar10 >> 0x20);
          fVar44 = (float)((ulong)puVar10[2] >> 0x20);
          fVar27 = (float)uVar32;
          fVar29 = (float)((ulong)uVar32 >> 0x20);
          fVar30 = (float)uVar37;
          fVar31 = (float)((ulong)uVar37 >> 0x20);
          fVar40 = (float)puVar10[1];
          fVar45 = (float)puVar10[3];
          fVar13 = (float)uVar15;
          fVar17 = (float)((ulong)uVar15 >> 0x20);
          fVar53 = (float)uVar21;
          fVar54 = (float)((ulong)uVar21 >> 0x20);
          fVar41 = (float)((ulong)puVar10[1] >> 0x20);
          fVar46 = (float)((ulong)puVar10[3] >> 0x20);
          *(ulong *)(pfVar9 + -6) =
               CONCAT44(fVar36 * fVar12 + fVar26 * fVar16 + fVar31 * fVar19 + fVar54 * fVar22,
                        fVar35 * fVar12 + fVar52 * fVar16 + fVar30 * fVar19 + fVar53 * fVar22);
          *(ulong *)(pfVar9 + -8) =
               CONCAT44(fVar34 * fVar12 + fVar24 * fVar16 + fVar29 * fVar19 + fVar17 * fVar22,
                        fVar33 * fVar12 + fVar50 * fVar16 + fVar27 * fVar19 + fVar13 * fVar22);
          *(ulong *)(pfVar9 + -2) =
               CONCAT44(fVar36 * fVar14 + fVar26 * fVar18 + fVar31 * fVar20 + fVar54 * fVar23,
                        fVar35 * fVar14 + fVar52 * fVar18 + fVar30 * fVar20 + fVar53 * fVar23);
          *(ulong *)(pfVar9 + -4) =
               CONCAT44(fVar34 * fVar14 + fVar24 * fVar18 + fVar29 * fVar20 + fVar17 * fVar23,
                        fVar33 * fVar14 + fVar50 * fVar18 + fVar27 * fVar20 + fVar13 * fVar23);
          pfVar9[2] = fVar35 * fVar38 + fVar52 * fVar39 + fVar30 * fVar40 + fVar53 * fVar41;
          pfVar9[3] = fVar36 * fVar38 + fVar26 * fVar39 + fVar31 * fVar40 + fVar54 * fVar41;
          *pfVar9 = fVar33 * fVar38 + fVar50 * fVar39 + fVar27 * fVar40 + fVar13 * fVar41;
          pfVar9[1] = fVar34 * fVar38 + fVar24 * fVar39 + fVar29 * fVar40 + fVar17 * fVar41;
          *(ulong *)(pfVar9 + 6) =
               CONCAT44(fVar36 * fVar43 + fVar26 * fVar44 + fVar31 * fVar45 + fVar54 * fVar46,
                        fVar35 * fVar43 + fVar52 * fVar44 + fVar30 * fVar45 + fVar53 * fVar46);
          *(ulong *)(pfVar9 + 4) =
               CONCAT44(fVar34 * fVar43 + fVar24 * fVar44 + fVar29 * fVar45 + fVar17 * fVar46,
                        fVar33 * fVar43 + fVar50 * fVar44 + fVar27 * fVar45 + fVar13 * fVar46);
          if (uVar11 == 0) break;
          uVar47 = param_2[1];
          uVar42 = *param_2;
          uVar28 = param_2[3];
          uVar25 = param_2[2];
          uVar37 = param_2[5];
          uVar32 = param_2[4];
          uVar21 = param_2[7];
          uVar15 = param_2[6];
          pfVar9 = pfVar9 + 0x10;
          puVar10 = puVar10 + 8;
        }
      }
    }
    else if (0 < (int)uVar3) {
      puVar7 = puVar7 + 4;
      puVar10 = puVar10 + 4;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
      while( true ) {
        uVar11 = uVar11 - 1;
        fVar12 = *(float *)(puVar10 + -4);
        fVar16 = *(float *)((long)puVar10 + -0x1c);
        fVar19 = *(float *)(puVar10 + -3);
        fVar22 = *(float *)((long)puVar10 + -0x14);
        fVar14 = *(float *)(puVar10 + -2);
        fVar18 = *(float *)((long)puVar10 + -0xc);
        fVar20 = *(float *)(puVar10 + -1);
        fVar23 = *(float *)((long)puVar10 + -4);
        fVar40 = (float)uVar42;
        fVar43 = (float)((ulong)uVar42 >> 0x20);
        fVar45 = (float)uVar47;
        fVar48 = (float)((ulong)uVar47 >> 0x20);
        fVar50 = (float)uVar25;
        fVar52 = (float)((ulong)uVar25 >> 0x20);
        fVar27 = (float)uVar28;
        fVar29 = (float)((ulong)uVar28 >> 0x20);
        fVar57 = (float)*puVar10;
        fVar24 = (float)puVar10[2];
        fVar58 = (float)((ulong)*puVar10 >> 0x20);
        fVar26 = (float)((ulong)puVar10[2] >> 0x20);
        fVar30 = (float)uVar32;
        fVar33 = (float)((ulong)uVar32 >> 0x20);
        fVar35 = (float)uVar37;
        fVar38 = (float)((ulong)uVar37 >> 0x20);
        fVar59 = (float)puVar10[1];
        fVar61 = (float)puVar10[3];
        fVar13 = (float)uVar15;
        fVar17 = (float)((ulong)uVar15 >> 0x20);
        fVar53 = (float)uVar21;
        fVar54 = (float)((ulong)uVar21 >> 0x20);
        fVar31 = fVar40 * fVar12 + fVar50 * fVar16 + fVar30 * fVar19 + fVar13 * fVar22;
        fVar34 = fVar43 * fVar12 + fVar52 * fVar16 + fVar33 * fVar19 + fVar17 * fVar22;
        fVar36 = fVar45 * fVar12 + fVar27 * fVar16 + fVar35 * fVar19 + fVar53 * fVar22;
        fVar39 = fVar48 * fVar12 + fVar29 * fVar16 + fVar38 * fVar19 + fVar54 * fVar22;
        fVar41 = fVar40 * fVar14 + fVar50 * fVar18 + fVar30 * fVar20 + fVar13 * fVar23;
        fVar44 = fVar43 * fVar14 + fVar52 * fVar18 + fVar33 * fVar20 + fVar17 * fVar23;
        fVar46 = fVar45 * fVar14 + fVar27 * fVar18 + fVar35 * fVar20 + fVar53 * fVar23;
        fVar49 = fVar48 * fVar14 + fVar29 * fVar18 + fVar38 * fVar20 + fVar54 * fVar23;
        fVar60 = (float)((ulong)puVar10[1] >> 0x20);
        fVar12 = (float)((ulong)puVar10[3] >> 0x20);
        fVar14 = fVar40 * fVar24 + fVar50 * fVar26 + fVar30 * fVar61 + fVar13 * fVar12;
        fVar18 = fVar43 * fVar24 + fVar52 * fVar26 + fVar33 * fVar61 + fVar17 * fVar12;
        fVar20 = fVar45 * fVar24 + fVar27 * fVar26 + fVar35 * fVar61 + fVar53 * fVar12;
        fVar23 = fVar48 * fVar24 + fVar29 * fVar26 + fVar38 * fVar61 + fVar54 * fVar12;
        fVar12 = *(float *)(puVar8 + -2);
        fVar16 = *(float *)((long)puVar8 + -0xc);
        fVar19 = *(float *)(puVar8 + -1);
        fVar22 = *(float *)((long)puVar8 + -4);
        fVar24 = (float)puVar8[-4];
        fVar26 = (float)((ulong)puVar8[-4] >> 0x20);
        uVar15 = puVar8[1];
        uVar21 = puVar8[3];
        fVar50 = fVar40 * fVar57 + fVar50 * fVar58 + fVar30 * fVar59 + fVar13 * fVar60;
        fVar52 = fVar43 * fVar57 + fVar52 * fVar58 + fVar33 * fVar59 + fVar17 * fVar60;
        fVar53 = fVar45 * fVar57 + fVar27 * fVar58 + fVar35 * fVar59 + fVar53 * fVar60;
        fVar54 = fVar48 * fVar57 + fVar29 * fVar58 + fVar38 * fVar59 + fVar54 * fVar60;
        fVar27 = (float)*puVar8;
        fVar33 = (float)puVar8[2];
        fVar29 = (float)((ulong)*puVar8 >> 0x20);
        fVar35 = (float)((ulong)puVar8[2] >> 0x20);
        fVar13 = (float)puVar8[-3];
        fVar17 = (float)((ulong)puVar8[-3] >> 0x20);
        fVar30 = (float)uVar15;
        puVar7[-3] = CONCAT44(fVar23 * fVar17 + fVar54 * fVar13 + fVar39 * fVar24 + fVar49 * fVar26,
                              fVar20 * fVar17 + fVar53 * fVar13 + fVar36 * fVar24 + fVar46 * fVar26)
        ;
        puVar7[-4] = CONCAT44(fVar18 * fVar17 + fVar52 * fVar13 + fVar34 * fVar24 + fVar44 * fVar26,
                              fVar14 * fVar17 + fVar50 * fVar13 + fVar31 * fVar24 + fVar41 * fVar26)
        ;
        puVar7[-1] = CONCAT44(fVar23 * fVar22 + fVar54 * fVar19 + fVar39 * fVar12 + fVar49 * fVar16,
                              fVar20 * fVar22 + fVar53 * fVar19 + fVar36 * fVar12 + fVar46 * fVar16)
        ;
        puVar7[-2] = CONCAT44(fVar18 * fVar22 + fVar52 * fVar19 + fVar34 * fVar12 + fVar44 * fVar16,
                              fVar14 * fVar22 + fVar50 * fVar19 + fVar31 * fVar12 + fVar41 * fVar16)
        ;
        fVar16 = (float)uVar21;
        fVar12 = (float)((ulong)uVar15 >> 0x20);
        fVar19 = (float)((ulong)uVar21 >> 0x20);
        puVar7[1] = CONCAT44(fVar23 * fVar12 + fVar54 * fVar30 + fVar39 * fVar27 + fVar49 * fVar29,
                             fVar20 * fVar12 + fVar53 * fVar30 + fVar36 * fVar27 + fVar46 * fVar29);
        *puVar7 = CONCAT44(fVar18 * fVar12 + fVar52 * fVar30 + fVar34 * fVar27 + fVar44 * fVar29,
                           fVar14 * fVar12 + fVar50 * fVar30 + fVar31 * fVar27 + fVar41 * fVar29);
        puVar7[3] = CONCAT44(fVar23 * fVar19 + fVar54 * fVar16 + fVar39 * fVar33 + fVar49 * fVar35,
                             fVar20 * fVar19 + fVar53 * fVar16 + fVar36 * fVar33 + fVar46 * fVar35);
        puVar7[2] = CONCAT44(fVar18 * fVar19 + fVar52 * fVar16 + fVar34 * fVar33 + fVar44 * fVar35,
                             fVar14 * fVar19 + fVar50 * fVar16 + fVar31 * fVar33 + fVar41 * fVar35);
        if (uVar11 == 0) break;
        uVar47 = param_2[1];
        uVar42 = *param_2;
        uVar28 = param_2[3];
        uVar25 = param_2[2];
        uVar37 = param_2[5];
        uVar32 = param_2[4];
        uVar21 = param_2[7];
        uVar15 = param_2[6];
        puVar7 = puVar7 + 8;
        puVar10 = puVar10 + 8;
        puVar8 = puVar8 + 8;
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) < 1) {
    iVar6 = uVar3 * 4;
    if (0 < iVar6) {
      do {
        uVar1 = *(undefined4 *)(puVar10 + 1);
        uVar2 = *(undefined4 *)((long)puVar10 + 0xc);
        *puVar7 = *puVar10;
        *(undefined4 *)(puVar7 + 1) = uVar1;
        *(undefined4 *)((long)puVar7 + 0xc) = uVar2;
        iVar6 = iVar6 + -1;
        puVar10 = puVar10 + 2;
        puVar7 = puVar7 + 2;
      } while (iVar6 != 0);
    }
  }
  else if (0 < (int)uVar3) {
    puVar7 = puVar7 + 4;
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
    puVar10 = puVar10 + 4;
    do {
      fVar18 = (float)((ulong)puVar8[-2] >> 0x20);
      fVar50 = (float)puVar10[-2];
      fVar52 = (float)((ulong)puVar10[-2] >> 0x20);
      fVar27 = (float)puVar10[-1];
      fVar30 = (float)((ulong)puVar10[-1] >> 0x20);
      uVar11 = uVar11 - 1;
      fVar12 = (float)puVar8[-4];
      fVar13 = (float)puVar10[-4];
      fVar17 = (float)((ulong)puVar10[-4] >> 0x20);
      fVar53 = (float)puVar10[-3];
      fVar54 = (float)((ulong)puVar10[-3] >> 0x20);
      fVar16 = (float)((ulong)puVar8[-4] >> 0x20);
      fVar35 = (float)puVar8[1];
      fVar36 = (float)((ulong)puVar8[1] >> 0x20);
      fVar33 = (float)*puVar8;
      fVar34 = (float)((ulong)*puVar8 >> 0x20);
      fVar40 = (float)puVar8[3];
      fVar41 = (float)((ulong)puVar8[3] >> 0x20);
      fVar38 = (float)puVar8[2];
      fVar39 = (float)((ulong)puVar8[2] >> 0x20);
      fVar14 = (float)puVar8[-2];
      fVar19 = (float)puVar8[-3];
      fVar24 = (float)*puVar10;
      fVar26 = (float)((ulong)*puVar10 >> 0x20);
      fVar29 = (float)puVar10[1];
      fVar31 = (float)((ulong)puVar10[1] >> 0x20);
      fVar22 = (float)((ulong)puVar8[-3] >> 0x20);
      fVar43 = (float)puVar10[2];
      fVar44 = (float)((ulong)puVar10[2] >> 0x20);
      fVar45 = (float)puVar10[3];
      fVar46 = (float)((ulong)puVar10[3] >> 0x20);
      fVar20 = (float)puVar8[-1];
      fVar23 = (float)((ulong)puVar8[-1] >> 0x20);
      puVar7[1] = CONCAT44(fVar54 * fVar33 + fVar30 * fVar34 + fVar31 * fVar35 + fVar46 * fVar36,
                           fVar53 * fVar33 + fVar27 * fVar34 + fVar29 * fVar35 + fVar45 * fVar36);
      *puVar7 = CONCAT44(fVar17 * fVar33 + fVar52 * fVar34 + fVar26 * fVar35 + fVar44 * fVar36,
                         fVar13 * fVar33 + fVar50 * fVar34 + fVar24 * fVar35 + fVar43 * fVar36);
      puVar7[3] = CONCAT44(fVar54 * fVar38 + fVar30 * fVar39 + fVar31 * fVar40 + fVar46 * fVar41,
                           fVar53 * fVar38 + fVar27 * fVar39 + fVar29 * fVar40 + fVar45 * fVar41);
      puVar7[2] = CONCAT44(fVar17 * fVar38 + fVar52 * fVar39 + fVar26 * fVar40 + fVar44 * fVar41,
                           fVar13 * fVar38 + fVar50 * fVar39 + fVar24 * fVar40 + fVar43 * fVar41);
      puVar7[-3] = CONCAT44(fVar54 * fVar12 + fVar30 * fVar16 + fVar31 * fVar19 + fVar46 * fVar22,
                            fVar53 * fVar12 + fVar27 * fVar16 + fVar29 * fVar19 + fVar45 * fVar22);
      puVar7[-4] = CONCAT44(fVar17 * fVar12 + fVar52 * fVar16 + fVar26 * fVar19 + fVar44 * fVar22,
                            fVar13 * fVar12 + fVar50 * fVar16 + fVar24 * fVar19 + fVar43 * fVar22);
      puVar7[-1] = CONCAT44(fVar54 * fVar14 + fVar30 * fVar18 + fVar31 * fVar20 + fVar46 * fVar23,
                            fVar53 * fVar14 + fVar27 * fVar18 + fVar29 * fVar20 + fVar45 * fVar23);
      puVar7[-2] = CONCAT44(fVar17 * fVar14 + fVar52 * fVar18 + fVar26 * fVar20 + fVar44 * fVar23,
                            fVar13 * fVar14 + fVar50 * fVar18 + fVar24 * fVar20 + fVar43 * fVar23);
      puVar7 = puVar7 + 8;
      puVar8 = puVar8 + 8;
      puVar10 = puVar10 + 8;
    } while (uVar11 != 0);
  }
  return;
}

