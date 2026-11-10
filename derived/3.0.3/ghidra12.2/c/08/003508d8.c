
void FUN_003508d8(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  if (0 < *(int *)(param_1 + 0x98)) {
    puVar1 = *(undefined8 **)(param_4 + 0x18);
    fVar2 = (float)DAT_04102210;
    fVar6 = (float)((ulong)DAT_04102210 >> 0x20);
    fVar9 = (float)DAT_04102218;
    fVar12 = (float)((ulong)DAT_04102218 >> 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      uVar4 = param_3[1];
      uVar3 = *param_3;
      uVar8 = param_3[3];
      uVar7 = param_3[2];
      uVar11 = param_3[5];
      uVar10 = param_3[4];
      uVar15 = param_3[7];
      uVar13 = param_3[6];
      puVar1 = *(undefined8 **)(param_4 + 0x20);
    }
    else {
      fVar17 = (float)*param_3;
      fVar32 = (float)*puVar1;
      fVar33 = (float)((ulong)*puVar1 >> 0x20);
      fVar34 = (float)puVar1[1];
      fVar35 = (float)((ulong)puVar1[1] >> 0x20);
      fVar23 = (float)((ulong)*param_3 >> 0x20);
      fVar36 = (float)puVar1[2];
      fVar37 = (float)((ulong)puVar1[2] >> 0x20);
      fVar38 = (float)puVar1[3];
      fVar39 = (float)((ulong)puVar1[3] >> 0x20);
      fVar20 = (float)param_3[4];
      fVar21 = (float)((ulong)param_3[4] >> 0x20);
      fVar30 = (float)param_3[1];
      fVar14 = (float)puVar1[4];
      fVar16 = (float)((ulong)puVar1[4] >> 0x20);
      fVar18 = (float)puVar1[5];
      fVar19 = (float)((ulong)puVar1[5] >> 0x20);
      fVar22 = (float)param_3[5];
      fVar31 = (float)((ulong)param_3[1] >> 0x20);
      uVar3 = CONCAT44(fVar33 * fVar17 + fVar37 * fVar23 + fVar16 * fVar30 + fVar6 * fVar31,
                       fVar32 * fVar17 + fVar36 * fVar23 + fVar14 * fVar30 + fVar2 * fVar31);
      uVar4 = CONCAT44(fVar35 * fVar17 + fVar39 * fVar23 + fVar19 * fVar30 + fVar12 * fVar31,
                       fVar34 * fVar17 + fVar38 * fVar23 + fVar18 * fVar30 + fVar9 * fVar31);
      fVar17 = (float)param_3[2];
      fVar23 = (float)((ulong)param_3[2] >> 0x20);
      fVar24 = (float)param_3[6];
      fVar25 = (float)((ulong)param_3[6] >> 0x20);
      fVar30 = (float)((ulong)param_3[5] >> 0x20);
      uVar10 = CONCAT44(fVar33 * fVar20 + fVar37 * fVar21 + fVar16 * fVar22 + fVar6 * fVar30,
                        fVar32 * fVar20 + fVar36 * fVar21 + fVar14 * fVar22 + fVar2 * fVar30);
      uVar11 = CONCAT44(fVar35 * fVar20 + fVar39 * fVar21 + fVar19 * fVar22 + fVar12 * fVar30,
                        fVar34 * fVar20 + fVar38 * fVar21 + fVar18 * fVar22 + fVar9 * fVar30);
      fVar30 = (float)param_3[3];
      fVar20 = (float)param_3[7];
      fVar31 = (float)((ulong)param_3[3] >> 0x20);
      uVar7 = CONCAT44(fVar33 * fVar17 + fVar37 * fVar23 + fVar16 * fVar30 + fVar6 * fVar31,
                       fVar32 * fVar17 + fVar36 * fVar23 + fVar14 * fVar30 + fVar2 * fVar31);
      uVar8 = CONCAT44(fVar35 * fVar17 + fVar39 * fVar23 + fVar19 * fVar30 + fVar12 * fVar31,
                       fVar34 * fVar17 + fVar38 * fVar23 + fVar18 * fVar30 + fVar9 * fVar31);
      fVar17 = (float)((ulong)param_3[7] >> 0x20);
      uVar13 = CONCAT44(fVar33 * fVar24 + fVar37 * fVar25 + fVar16 * fVar20 + fVar6 * fVar17,
                        fVar32 * fVar24 + fVar36 * fVar25 + fVar14 * fVar20 + fVar2 * fVar17);
      uVar15 = CONCAT44(fVar35 * fVar24 + fVar39 * fVar25 + fVar19 * fVar20 + fVar12 * fVar17,
                        fVar34 * fVar24 + fVar38 * fVar25 + fVar18 * fVar20 + fVar9 * fVar17);
      puVar1 = *(undefined8 **)(param_4 + 0x20);
    }
    if (puVar1 != (undefined8 *)0x0) {
      fVar17 = (float)uVar3;
      fVar16 = (float)*puVar1;
      fVar18 = (float)((ulong)*puVar1 >> 0x20);
      fVar19 = (float)puVar1[1];
      fVar20 = (float)((ulong)puVar1[1] >> 0x20);
      fVar23 = (float)((ulong)uVar3 >> 0x20);
      fVar21 = (float)puVar1[2];
      fVar24 = (float)((ulong)puVar1[2] >> 0x20);
      fVar26 = (float)puVar1[3];
      fVar28 = (float)((ulong)puVar1[3] >> 0x20);
      fVar32 = (float)uVar7;
      fVar33 = (float)((ulong)uVar7 >> 0x20);
      fVar35 = (float)uVar10;
      fVar36 = (float)((ulong)uVar10 >> 0x20);
      fVar38 = (float)uVar13;
      fVar39 = (float)((ulong)uVar13 >> 0x20);
      fVar30 = (float)uVar4;
      fVar22 = (float)puVar1[4];
      fVar25 = (float)((ulong)puVar1[4] >> 0x20);
      fVar27 = (float)puVar1[5];
      fVar29 = (float)((ulong)puVar1[5] >> 0x20);
      fVar34 = (float)uVar8;
      fVar37 = (float)uVar11;
      fVar14 = (float)uVar15;
      fVar31 = (float)((ulong)uVar4 >> 0x20);
      uVar3 = CONCAT44(fVar18 * fVar17 + fVar24 * fVar23 + fVar25 * fVar30 + fVar6 * fVar31,
                       fVar16 * fVar17 + fVar21 * fVar23 + fVar22 * fVar30 + fVar2 * fVar31);
      uVar4 = CONCAT44(fVar20 * fVar17 + fVar28 * fVar23 + fVar29 * fVar30 + fVar12 * fVar31,
                       fVar19 * fVar17 + fVar26 * fVar23 + fVar27 * fVar30 + fVar9 * fVar31);
      fVar17 = (float)((ulong)uVar8 >> 0x20);
      uVar7 = CONCAT44(fVar18 * fVar32 + fVar24 * fVar33 + fVar25 * fVar34 + fVar6 * fVar17,
                       fVar16 * fVar32 + fVar21 * fVar33 + fVar22 * fVar34 + fVar2 * fVar17);
      uVar8 = CONCAT44(fVar20 * fVar32 + fVar28 * fVar33 + fVar29 * fVar34 + fVar12 * fVar17,
                       fVar19 * fVar32 + fVar26 * fVar33 + fVar27 * fVar34 + fVar9 * fVar17);
      fVar17 = (float)((ulong)uVar11 >> 0x20);
      uVar10 = CONCAT44(fVar18 * fVar35 + fVar24 * fVar36 + fVar25 * fVar37 + fVar6 * fVar17,
                        fVar16 * fVar35 + fVar21 * fVar36 + fVar22 * fVar37 + fVar2 * fVar17);
      uVar11 = CONCAT44(fVar20 * fVar35 + fVar28 * fVar36 + fVar29 * fVar37 + fVar12 * fVar17,
                        fVar19 * fVar35 + fVar26 * fVar36 + fVar27 * fVar37 + fVar9 * fVar17);
      fVar17 = (float)((ulong)uVar15 >> 0x20);
      uVar13 = CONCAT44(fVar18 * fVar38 + fVar24 * fVar39 + fVar25 * fVar14 + fVar6 * fVar17,
                        fVar16 * fVar38 + fVar21 * fVar39 + fVar22 * fVar14 + fVar2 * fVar17);
      uVar15 = CONCAT44(fVar20 * fVar38 + fVar28 * fVar39 + fVar29 * fVar14 + fVar12 * fVar17,
                        fVar19 * fVar38 + fVar26 * fVar39 + fVar27 * fVar14 + fVar9 * fVar17);
    }
    param_2[1] = uVar4;
    *param_2 = uVar3;
    param_2[3] = uVar8;
    param_2[2] = uVar7;
    param_2[5] = uVar11;
    param_2[4] = uVar10;
    param_2[7] = uVar15;
    param_2[6] = uVar13;
    bVar5 = *(byte *)(param_4 + 0x6c);
    fVar9 = *(float *)(param_4 + 0x28);
    fVar12 = *(float *)(param_4 + 0x2c);
    fVar23 = *(float *)(param_4 + 0x38);
    fVar30 = *(float *)(param_4 + 0x3c);
    fVar17 = *(float *)(param_4 + 0x30);
    fVar2 = (float)NEON_ucvtf((uint)*(byte *)(param_4 + 0x48));
    fVar35 = *(float *)(param_4 + 0x54);
    fVar31 = *(float *)(param_4 + 0x40);
    fVar32 = *(float *)(param_4 + 0x44);
    fVar33 = *(float *)(param_4 + 0x4c);
    fVar34 = *(float *)(param_4 + 0x50);
    fVar36 = *(float *)(param_4 + 0x5c);
    fVar37 = *(float *)(param_4 + 0x60);
    fVar38 = *(float *)(param_4 + 100);
    fVar39 = *(float *)(param_4 + 0x68);
    *(float *)(param_2 + 10) = fVar9;
    *(float *)((long)param_2 + 0x54) = fVar12;
    fVar6 = (float)NEON_ucvtf((uint)bVar5);
    *(float *)(param_2 + 8) = fVar23 - fVar9;
    *(float *)((long)param_2 + 0x44) = fVar30 - fVar12;
    *(float *)(param_2 + 0xb) = fVar17;
    *(undefined4 *)((long)param_2 + 0x5c) = 0;
    *(undefined4 *)((long)param_2 + 0x7c) = 0;
    *(float *)(param_2 + 0xe) = fVar33;
    *(float *)((long)param_2 + 0x74) = fVar34;
    *(float *)(param_2 + 0xf) = fVar35;
    *(float *)(param_2 + 0xc) = fVar36 - fVar33;
    *(float *)((long)param_2 + 100) = fVar37 - fVar34;
    *(float *)(param_2 + 9) = fVar31 - fVar17;
    *(float *)((long)param_2 + 0x4c) = fVar32 * fVar2 * 0.003921569;
    *(float *)(param_2 + 0xd) = fVar38 - fVar35;
    *(float *)((long)param_2 + 0x6c) = fVar39 * fVar6 * 0.003921569;
  }
  return;
}

