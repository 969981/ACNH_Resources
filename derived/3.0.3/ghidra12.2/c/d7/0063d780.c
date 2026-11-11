
void FUN_0063d780(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined8 *puVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *__s;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float *pfVar14;
  undefined8 *puVar15;
  int iVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  
  nn::util::ReferSymbol("SDK MW+Microsoft+Havok_Cloth-2019_1");
  lVar6 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar6 != 0) {
    FUN_00443a00(lVar6,"TtIntegrate");
  }
  lVar6 = *(long *)(param_3 + 0x18);
  puVar7 = (undefined8 *)FUN_0053b360(param_3);
  fVar3 = *(float *)(param_3 + 0x54);
  uVar2 = *(uint *)(param_3 + 0x28);
  if (uVar2 == 0) {
    __s = (undefined8 *)0x0;
    lVar9 = FUN_0043c4e0(DAT_04c6f410);
    goto joined_r0x0063db7c;
  }
  lVar8 = FUN_0043c4e0(DAT_04c6f050);
  lVar9 = DAT_04c6f058;
  if (lVar8 != 0) {
    lVar9 = lVar8;
  }
  uVar11 = (ulong)(int)(uVar2 * 0x10 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar9 + 0x10) < uVar11) {
LAB_0063d848:
    __s = (undefined8 *)FUN_00439510();
  }
  else {
    __s = *(undefined8 **)(lVar9 + 0x18);
    uVar11 = (long)__s + uVar11;
    if (*(ulong *)(lVar9 + 0x20) < uVar11) goto LAB_0063d848;
    *(ulong *)(lVar9 + 0x18) = uVar11;
  }
  if (0 < (int)uVar2) {
    memset(__s,0,(ulong)uVar2 << 4);
  }
  lVar9 = FUN_0043c4e0(DAT_04c6f410);
joined_r0x0063db7c:
  if (lVar9 != 0) {
    FUN_00443a00(lVar9,"TtActions");
  }
  fVar17 = (float)param_1 * (float)param_1;
  iVar16 = *(int *)(param_3 + 0xf0);
  if (0 < iVar16) {
    lVar9 = 0;
    do {
      plVar10 = *(long **)(*(long *)(param_3 + 0xe8) + lVar9 * 8);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(param_1,plVar10,param_3,__s);
        iVar16 = *(int *)(param_3 + 0xf0);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar16);
  }
  lVar9 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar9 != 0) {
    FUN_00443a70(lVar9,&DAT_04085310);
  }
  pfVar14 = *(float **)(lVar6 + 0x40);
  puVar12 = *(undefined8 **)(param_3 + 0x20);
  uVar1 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  puVar13 = *(undefined8 **)(param_3 + 0x30);
  puVar15 = __s;
  if (3 < (int)uVar2) {
    iVar16 = (int)uVar1 >> 2;
    do {
      iVar16 = iVar16 + -1;
      fVar19 = *pfVar14;
      pfVar5 = pfVar14 + 1;
      fVar21 = pfVar14[4];
      fVar23 = pfVar14[5];
      fVar26 = pfVar14[8];
      fVar29 = pfVar14[9];
      fVar34 = pfVar14[0xc];
      fVar39 = pfVar14[0xd];
      pfVar14 = pfVar14 + 0x10;
      fVar30 = (float)*puVar7;
      fVar31 = (float)((ulong)*puVar7 >> 0x20);
      fVar32 = (float)puVar7[1];
      fVar33 = (float)((ulong)puVar7[1] >> 0x20);
      puVar4 = puVar15 + 1;
      uVar22 = *puVar15;
      uVar45 = puVar15[3];
      uVar41 = puVar15[2];
      uVar53 = *puVar13;
      uVar55 = puVar13[3];
      uVar54 = puVar13[2];
      uVar36 = puVar15[5];
      uVar24 = puVar15[4];
      uVar46 = puVar15[7];
      uVar42 = puVar15[6];
      puVar15 = puVar15 + 8;
      fVar40 = *pfVar5;
      uVar37 = puVar12[1];
      uVar28 = *puVar12;
      uVar51 = puVar12[3];
      uVar49 = puVar12[2];
      fVar50 = (float)((ulong)uVar49 >> 0x20);
      fVar52 = (float)((ulong)uVar51 >> 0x20);
      fVar35 = (float)((ulong)uVar28 >> 0x20);
      fVar38 = (float)((ulong)uVar37 >> 0x20);
      uVar20 = puVar12[5];
      uVar18 = puVar12[4];
      uVar47 = puVar12[7];
      uVar43 = puVar12[6];
      uVar57 = puVar13[5];
      uVar56 = puVar13[4];
      uVar59 = puVar13[7];
      uVar58 = puVar13[6];
      fVar44 = (float)((ulong)uVar43 >> 0x20);
      fVar48 = (float)((ulong)uVar47 >> 0x20);
      fVar27 = (float)((ulong)uVar18 >> 0x20);
      fVar25 = (float)((ulong)uVar20 >> 0x20);
      puVar12[1] = CONCAT44(fVar38 + fVar3 * (fVar38 - (float)((ulong)puVar13[1] >> 0x20)) +
                            fVar17 * ((float)((ulong)*puVar4 >> 0x20) + fVar19 * fVar33) * fVar40,
                            (float)uVar37 + fVar3 * ((float)uVar37 - (float)puVar13[1]) +
                            fVar17 * ((float)*puVar4 + fVar19 * fVar32) * fVar40);
      *puVar12 = CONCAT44(fVar35 + fVar3 * (fVar35 - (float)((ulong)uVar53 >> 0x20)) +
                          fVar17 * ((float)((ulong)uVar22 >> 0x20) + fVar19 * fVar31) * fVar40,
                          (float)uVar28 + fVar3 * ((float)uVar28 - (float)uVar53) +
                          fVar17 * ((float)uVar22 + fVar19 * fVar30) * fVar40);
      puVar12[3] = CONCAT44(fVar52 + fVar3 * (fVar52 - (float)((ulong)uVar55 >> 0x20)) +
                            fVar17 * ((float)((ulong)uVar45 >> 0x20) + fVar33 * fVar21) * fVar23,
                            (float)uVar51 + fVar3 * ((float)uVar51 - (float)uVar55) +
                            fVar17 * ((float)uVar45 + fVar32 * fVar21) * fVar23);
      puVar12[2] = CONCAT44(fVar50 + fVar3 * (fVar50 - (float)((ulong)uVar54 >> 0x20)) +
                            fVar17 * ((float)((ulong)uVar41 >> 0x20) + fVar31 * fVar21) * fVar23,
                            (float)uVar49 + fVar3 * ((float)uVar49 - (float)uVar54) +
                            fVar17 * ((float)uVar41 + fVar30 * fVar21) * fVar23);
      puVar12[5] = CONCAT44(fVar25 + fVar3 * (fVar25 - (float)((ulong)uVar57 >> 0x20)) +
                            fVar17 * ((float)((ulong)uVar36 >> 0x20) + fVar33 * fVar26) * fVar29,
                            (float)uVar20 + fVar3 * ((float)uVar20 - (float)uVar57) +
                            fVar17 * ((float)uVar36 + fVar32 * fVar26) * fVar29);
      puVar12[4] = CONCAT44(fVar27 + fVar3 * (fVar27 - (float)((ulong)uVar56 >> 0x20)) +
                            fVar17 * ((float)((ulong)uVar24 >> 0x20) + fVar31 * fVar26) * fVar29,
                            (float)uVar18 + fVar3 * ((float)uVar18 - (float)uVar56) +
                            fVar17 * ((float)uVar24 + fVar30 * fVar26) * fVar29);
      puVar12[7] = CONCAT44(fVar48 + fVar3 * (fVar48 - (float)((ulong)uVar59 >> 0x20)) +
                            fVar17 * ((float)((ulong)uVar46 >> 0x20) + fVar33 * fVar34) * fVar39,
                            (float)uVar47 + fVar3 * ((float)uVar47 - (float)uVar59) +
                            fVar17 * ((float)uVar46 + fVar32 * fVar34) * fVar39);
      puVar12[6] = CONCAT44(fVar44 + fVar3 * (fVar44 - (float)((ulong)uVar58 >> 0x20)) +
                            fVar17 * ((float)((ulong)uVar42 >> 0x20) + fVar31 * fVar34) * fVar39,
                            (float)uVar43 + fVar3 * ((float)uVar43 - (float)uVar58) +
                            fVar17 * ((float)uVar42 + fVar30 * fVar34) * fVar39);
      puVar12 = puVar12 + 8;
      puVar13[1] = uVar37;
      *puVar13 = uVar28;
      puVar13[3] = uVar51;
      puVar13[2] = uVar49;
      puVar13[5] = uVar20;
      puVar13[4] = uVar18;
      puVar13[7] = uVar47;
      puVar13[6] = uVar43;
      puVar13 = puVar13 + 8;
    } while (iVar16 != 0);
  }
  if ((uVar2 & 3) != 0) {
    fVar19 = *pfVar14;
    uVar22 = *puVar7;
    uVar20 = puVar12[1];
    uVar18 = *puVar12;
    uVar28 = *puVar15;
    uVar24 = *puVar13;
    fVar21 = (float)((ulong)uVar18 >> 0x20);
    fVar23 = (float)((ulong)uVar20 >> 0x20);
    fVar27 = pfVar14[1];
    puVar12[1] = CONCAT44(fVar23 + fVar3 * (fVar23 - (float)((ulong)puVar13[1] >> 0x20)) +
                          fVar17 * ((float)((ulong)puVar15[1] >> 0x20) +
                                   fVar19 * (float)((ulong)puVar7[1] >> 0x20)) * fVar27,
                          (float)uVar20 + fVar3 * ((float)uVar20 - (float)puVar13[1]) +
                          fVar17 * ((float)puVar15[1] + fVar19 * (float)puVar7[1]) * fVar27);
    *puVar12 = CONCAT44(fVar21 + fVar3 * (fVar21 - (float)((ulong)uVar24 >> 0x20)) +
                        fVar17 * ((float)((ulong)uVar28 >> 0x20) +
                                 fVar19 * (float)((ulong)uVar22 >> 0x20)) * fVar27,
                        (float)uVar18 + fVar3 * ((float)uVar18 - (float)uVar24) +
                        fVar17 * ((float)uVar28 + fVar19 * (float)uVar22) * fVar27);
    puVar13[1] = uVar20;
    *puVar13 = uVar18;
    if ((uVar2 & 3) != 1) {
      uVar22 = *puVar7;
      fVar23 = pfVar14[4];
      fVar27 = pfVar14[5];
      uVar20 = puVar12[3];
      uVar18 = puVar12[2];
      uVar28 = puVar15[2];
      uVar24 = puVar13[2];
      fVar19 = (float)((ulong)uVar18 >> 0x20);
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      puVar12[3] = CONCAT44(fVar21 + fVar3 * (fVar21 - (float)((ulong)puVar13[3] >> 0x20)) +
                            fVar17 * ((float)((ulong)puVar15[3] >> 0x20) +
                                     (float)((ulong)puVar7[1] >> 0x20) * fVar23) * fVar27,
                            (float)uVar20 + fVar3 * ((float)uVar20 - (float)puVar13[3]) +
                            fVar17 * ((float)puVar15[3] + (float)puVar7[1] * fVar23) * fVar27);
      puVar12[2] = CONCAT44(fVar19 + fVar3 * (fVar19 - (float)((ulong)uVar24 >> 0x20)) +
                            fVar17 * ((float)((ulong)uVar28 >> 0x20) +
                                     (float)((ulong)uVar22 >> 0x20) * fVar23) * fVar27,
                            (float)uVar18 + fVar3 * ((float)uVar18 - (float)uVar24) +
                            fVar17 * ((float)uVar28 + (float)uVar22 * fVar23) * fVar27);
      puVar13[3] = uVar20;
      puVar13[2] = uVar18;
      if ((uVar2 & 3) != 2) {
        uVar22 = *puVar7;
        fVar23 = pfVar14[8];
        fVar27 = pfVar14[9];
        uVar20 = puVar12[5];
        uVar18 = puVar12[4];
        uVar24 = puVar13[4];
        uVar28 = puVar15[4];
        fVar19 = (float)((ulong)uVar18 >> 0x20);
        fVar21 = (float)((ulong)uVar20 >> 0x20);
        puVar12[5] = CONCAT44(fVar21 + fVar3 * (fVar21 - (float)((ulong)puVar13[5] >> 0x20)) +
                              fVar17 * ((float)((ulong)puVar15[5] >> 0x20) +
                                       (float)((ulong)puVar7[1] >> 0x20) * fVar23) * fVar27,
                              (float)uVar20 + fVar3 * ((float)uVar20 - (float)puVar13[5]) +
                              fVar17 * ((float)puVar15[5] + (float)puVar7[1] * fVar23) * fVar27);
        puVar12[4] = CONCAT44(fVar19 + fVar3 * (fVar19 - (float)((ulong)uVar24 >> 0x20)) +
                              fVar17 * ((float)((ulong)uVar28 >> 0x20) +
                                       (float)((ulong)uVar22 >> 0x20) * fVar23) * fVar27,
                              (float)uVar18 + fVar3 * ((float)uVar18 - (float)uVar24) +
                              fVar17 * ((float)uVar28 + (float)uVar22 * fVar23) * fVar27);
        puVar13[5] = uVar20;
        puVar13[4] = uVar18;
      }
    }
  }
  lVar6 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar6 != 0) {
    FUN_00443a70(lVar6,&DAT_04085310);
  }
  lVar9 = FUN_0043c4e0(DAT_04c6f050);
  lVar6 = DAT_04c6f058;
  if (lVar9 != 0) {
    lVar6 = lVar9;
  }
  uVar11 = (ulong)(int)(uVar2 * 0x10 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar6 + 0x10) < uVar11) || (*(long *)(lVar6 + 0x18) != (long)__s + uVar11)) ||
     (*(undefined8 **)(lVar6 + 0x28) == __s)) {
    FUN_00439980(lVar6,__s);
    return;
  }
  *(undefined8 **)(lVar6 + 0x18) = __s;
  return;
}

