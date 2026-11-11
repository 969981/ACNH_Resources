
void FUN_003b3d00(long *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [12];
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  long lVar13;
  uint uVar14;
  long lVar15;
  float *pfVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  short *psVar19;
  short *psVar20;
  ulong uVar21;
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  if (param_1[9] == 0) {
    return;
  }
  psVar20 = *(short **)(*param_1 + 0x18);
  lVar15 = *(long *)(*param_1 + 0x20);
  lVar13 = FUN_00347cc4(param_1[8] + (long)param_2 * 0x48);
  uVar3 = *(ushort *)(*param_1 + 0x3a);
  uVar14 = (uint)uVar3;
  if (uVar3 == 0) {
    uVar21 = 0;
    uVar5 = *(ushort *)(*param_1 + 0x3c);
    if (uVar5 == 0) goto LAB_003b3e74;
  }
  else {
    pfVar16 = (float *)(lVar13 + 0x20);
    puVar17 = (undefined8 *)(lVar15 + 0x10);
    psVar19 = psVar20;
    uVar21 = (ulong)uVar3;
    do {
      uVar21 = uVar21 - 1;
      puVar1 = (undefined8 *)(param_1[4] + (long)*psVar19 * 0x40);
      fVar38 = (float)puVar17[3];
      fVar39 = (float)((ulong)puVar17[3] >> 0x20);
      fVar36 = (float)puVar17[2];
      fVar37 = (float)((ulong)puVar17[2] >> 0x20);
      fVar24 = (float)puVar17[-1];
      fVar25 = (float)((ulong)puVar17[-1] >> 0x20);
      fVar22 = (float)puVar17[-2];
      fVar23 = (float)((ulong)puVar17[-2] >> 0x20);
      fVar34 = (float)puVar17[1];
      fVar35 = (float)((ulong)puVar17[1] >> 0x20);
      fVar32 = (float)*puVar17;
      fVar33 = (float)((ulong)*puVar17 >> 0x20);
      puVar17 = puVar17 + 6;
      fVar28 = (float)puVar1[1];
      fVar26 = (float)*puVar1;
      fVar27 = (float)((ulong)*puVar1 >> 0x20);
      fVar31 = (float)puVar1[3];
      fVar29 = (float)puVar1[2];
      fVar30 = (float)((ulong)puVar1[2] >> 0x20);
      uVar44 = puVar1[7];
      uVar43 = puVar1[6];
      fVar40 = (float)puVar1[4];
      fVar41 = (float)((ulong)puVar1[4] >> 0x20);
      fVar42 = (float)puVar1[5];
      *pfVar16 = fVar28 * fVar22 + fVar31 * fVar32 + fVar42 * fVar36;
      pfVar16[1] = fVar28 * fVar23 + fVar31 * fVar33 + fVar42 * fVar37;
      pfVar16[2] = fVar28 * fVar24 + fVar31 * fVar34 + fVar42 * fVar38;
      pfVar16[3] = (float)uVar44 + fVar28 * fVar25 + fVar31 * fVar35 + fVar42 * fVar39;
      pfVar16[-8] = fVar26 * fVar22 + fVar29 * fVar32 + fVar40 * fVar36;
      pfVar16[-7] = fVar26 * fVar23 + fVar29 * fVar33 + fVar40 * fVar37;
      pfVar16[-6] = fVar26 * fVar24 + fVar29 * fVar34 + fVar40 * fVar38;
      pfVar16[-5] = (float)uVar43 + fVar26 * fVar25 + fVar29 * fVar35 + fVar40 * fVar39;
      *(ulong *)(pfVar16 + -2) =
           CONCAT44((float)((ulong)uVar43 >> 0x20) +
                    fVar27 * fVar25 + fVar30 * fVar35 + fVar41 * fVar39,
                    fVar27 * fVar24 + fVar30 * fVar34 + fVar41 * fVar38);
      *(ulong *)(pfVar16 + -4) =
           CONCAT44(fVar27 * fVar23 + fVar30 * fVar33 + fVar41 * fVar37,
                    fVar27 * fVar22 + fVar30 * fVar32 + fVar41 * fVar36);
      pfVar16 = pfVar16 + 0xc;
      psVar19 = psVar19 + 1;
    } while (uVar21 != 0);
    uVar4 = *(ushort *)(*param_1 + 0x3a);
    uVar21 = (ulong)uVar4;
    uVar5 = *(ushort *)(*param_1 + 0x3c);
    if ((uint)uVar4 + (uint)uVar5 <= uVar14) goto LAB_003b3e74;
  }
  lVar15 = (uVar5 + uVar21) - (ulong)uVar3;
  puVar18 = (undefined4 *)(lVar13 + (ulong)uVar14 * 0x30 + 0x20);
  psVar20 = psVar20 + uVar14;
  do {
    lVar15 = lVar15 + -1;
    pauVar2 = (undefined1 (*) [12])(param_1[4] + (long)*psVar20 * 0x40);
    auVar6 = *pauVar2;
    auVar11 = *(undefined1 (*) [12])(pauVar2[1] + 4);
    auVar8 = *(undefined1 (*) [12])(pauVar2[1] + 4);
    auVar10 = *(undefined1 (*) [12])(pauVar2[2] + 8);
    auVar7 = *(undefined1 (*) [12])(pauVar2[2] + 8);
    auVar12 = pauVar2[4];
    auVar9 = pauVar2[4];
    *puVar18 = SUB124(*pauVar2,8);
    puVar18[1] = auVar11._8_4_;
    puVar18[2] = auVar10._8_4_;
    puVar18[3] = auVar12._8_4_;
    puVar18[-8] = auVar6._0_4_;
    puVar18[-7] = auVar8._0_4_;
    puVar18[-6] = auVar7._0_4_;
    puVar18[-5] = auVar9._0_4_;
    *(ulong *)(puVar18 + -2) = CONCAT44(auVar9._4_4_,auVar7._4_4_);
    *(ulong *)(puVar18 + -4) = CONCAT44(auVar8._4_4_,auVar6._4_4_);
    puVar18 = puVar18 + 0xc;
    psVar20 = psVar20 + 1;
  } while (lVar15 != 0);
LAB_003b3e74:
  FUN_00347cdc(param_1[8] + (long)param_2 * 0x48,0,param_1[9]);
  FUN_00347cd8(param_1[8] + (long)param_2 * 0x48);
  return;
}

