
void FUN_00640750(long param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  if (*(int *)(param_1 + 0x50) == 2) {
    FUN_00640b50(param_1,param_2,param_4);
  }
  else if (*(int *)(param_1 + 0x50) == 0) {
    FUN_006408d0();
  }
  else {
    FUN_00640dc0();
  }
  lVar1 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar1 != 0) {
    FUN_00443a00(lVar1,"TtBuild Composite Matrices");
  }
  iVar2 = (int)param_4[1];
  if (iVar2 != 0) {
    fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
    fVar22 = (float)param_3[2];
    fVar23 = (float)((ulong)param_3[2] >> 0x20);
    fVar24 = (float)param_3[3];
    fVar26 = (float)((ulong)param_3[3] >> 0x20);
    puVar3 = (undefined8 *)*param_4;
    uVar38 = param_3[7];
    uVar35 = param_3[6];
    fVar7 = (float)*(undefined8 *)(param_2 + 0x90);
    fVar18 = (float)*param_3;
    fVar19 = (float)((ulong)*param_3 >> 0x20);
    fVar20 = (float)param_3[1];
    fVar21 = (float)((ulong)param_3[1] >> 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_2 + 0x98);
    fVar30 = (float)param_3[4];
    fVar31 = (float)((ulong)param_3[4] >> 0x20);
    fVar32 = (float)param_3[5];
    fVar33 = (float)((ulong)param_3[5] >> 0x20);
    fVar11 = (float)*(undefined8 *)(param_2 + 0xa0);
    fVar17 = (float)*(undefined8 *)(param_2 + 0xa8);
    fVar4 = fVar18 * fVar7 + fVar22 * fVar8 + fVar30 * fVar9;
    fVar5 = fVar19 * fVar7 + fVar23 * fVar8 + fVar31 * fVar9;
    fVar6 = fVar20 * fVar7 + fVar24 * fVar8 + fVar32 * fVar9;
    fVar7 = fVar21 * fVar7 + fVar26 * fVar8 + fVar33 * fVar9;
    fVar12 = (float)*(undefined8 *)(param_2 + 0xb0);
    fVar39 = (float)*(undefined8 *)(param_2 + 0xc0);
    fVar8 = fVar30 * fVar17 + fVar18 * fVar11 + fVar22 * fVar13;
    fVar9 = fVar31 * fVar17 + fVar19 * fVar11 + fVar23 * fVar13;
    fVar10 = fVar32 * fVar17 + fVar20 * fVar11 + fVar24 * fVar13;
    fVar11 = fVar33 * fVar17 + fVar21 * fVar11 + fVar26 * fVar13;
    fVar17 = (float)((ulong)*(undefined8 *)(param_2 + 0xb0) >> 0x20);
    fVar40 = (float)((ulong)*(undefined8 *)(param_2 + 0xc0) >> 0x20);
    fVar15 = (float)*(undefined8 *)(param_2 + 0xb8);
    fVar41 = (float)*(undefined8 *)(param_2 + 200);
    fVar13 = fVar30 * fVar15 + fVar18 * fVar12 + fVar22 * fVar17;
    fVar14 = fVar31 * fVar15 + fVar19 * fVar12 + fVar23 * fVar17;
    fVar16 = fVar32 * fVar15 + fVar20 * fVar12 + fVar24 * fVar17;
    fVar17 = fVar33 * fVar15 + fVar21 * fVar12 + fVar26 * fVar17;
    do {
      fVar27 = (float)puVar3[2];
      iVar2 = iVar2 + -1;
      fVar28 = (float)((ulong)puVar3[2] >> 0x20);
      fVar29 = (float)puVar3[3];
      fVar12 = (float)*puVar3;
      fVar15 = (float)((ulong)*puVar3 >> 0x20);
      fVar25 = (float)puVar3[1];
      fVar43 = (float)((ulong)puVar3[6] >> 0x20);
      fVar42 = (float)puVar3[6];
      fVar34 = (float)puVar3[4];
      fVar36 = (float)((ulong)puVar3[4] >> 0x20);
      fVar37 = (float)puVar3[5];
      fVar44 = (float)puVar3[7];
      puVar3[1] = CONCAT44(fVar17 * fVar25 + fVar7 * fVar12 + fVar11 * fVar15,
                           fVar16 * fVar25 + fVar6 * fVar12 + fVar10 * fVar15);
      *puVar3 = CONCAT44(fVar14 * fVar25 + fVar5 * fVar12 + fVar9 * fVar15,
                         fVar13 * fVar25 + fVar4 * fVar12 + fVar8 * fVar15);
      puVar3[3] = CONCAT44(fVar17 * fVar29 + fVar7 * fVar27 + fVar11 * fVar28,
                           fVar16 * fVar29 + fVar6 * fVar27 + fVar10 * fVar28);
      puVar3[2] = CONCAT44(fVar14 * fVar29 + fVar5 * fVar27 + fVar9 * fVar28,
                           fVar13 * fVar29 + fVar4 * fVar27 + fVar8 * fVar28);
      puVar3[5] = CONCAT44(fVar17 * fVar37 + fVar7 * fVar34 + fVar11 * fVar36,
                           fVar16 * fVar37 + fVar6 * fVar34 + fVar10 * fVar36);
      puVar3[4] = CONCAT44(fVar14 * fVar37 + fVar5 * fVar34 + fVar9 * fVar36,
                           fVar13 * fVar37 + fVar4 * fVar34 + fVar8 * fVar36);
      puVar3[7] = CONCAT44(fVar17 * fVar44 +
                           fVar11 * fVar43 +
                           fVar33 * fVar41 +
                           fVar26 * fVar40 + (float)((ulong)uVar38 >> 0x20) + fVar21 * fVar39 +
                           fVar7 * fVar42,
                           fVar16 * fVar44 +
                           fVar10 * fVar43 +
                           fVar32 * fVar41 + fVar24 * fVar40 + (float)uVar38 + fVar20 * fVar39 +
                           fVar6 * fVar42);
      puVar3[6] = CONCAT44(fVar14 * fVar44 +
                           fVar9 * fVar43 +
                           fVar31 * fVar41 +
                           fVar23 * fVar40 + (float)((ulong)uVar35 >> 0x20) + fVar19 * fVar39 +
                           fVar5 * fVar42,
                           fVar13 * fVar44 +
                           fVar8 * fVar43 +
                           fVar30 * fVar41 + fVar22 * fVar40 + (float)uVar35 + fVar18 * fVar39 +
                           fVar4 * fVar42);
      puVar3 = puVar3 + 8;
    } while (iVar2 != 0);
  }
  if (lVar1 != 0) {
    FUN_00443a70(lVar1,&DAT_04085310);
  }
  return;
}

