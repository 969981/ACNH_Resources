
undefined8 FUN_00558390(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
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
  undefined8 uVar34;
  undefined8 uVar35;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
    fVar22 = (float)*(undefined8 *)(param_3 + 0xe0);
    fVar24 = (float)((ulong)*(undefined8 *)(param_3 + 0xe0) >> 0x20);
    fVar25 = (float)*(undefined8 *)(param_3 + 0xe8);
    bVar1 = *(byte *)(param_3 + 0x4c);
    fVar12 = (float)*(undefined8 *)(param_2 + 0x90);
    fVar19 = (float)*(undefined8 *)(param_3 + 0xd0);
    fVar20 = (float)((ulong)*(undefined8 *)(param_3 + 0xd0) >> 0x20);
    fVar21 = (float)*(undefined8 *)(param_3 + 0xd8);
    fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
    uVar5 = 0;
    fVar15 = (float)*(undefined8 *)(param_2 + 0xa0);
    bVar2 = *(byte *)(param_3 + 0x24);
    fVar18 = (float)*(undefined8 *)(param_2 + 0xb0);
    bVar3 = *(byte *)(param_2 + 0x4c);
    fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 0xb0) >> 0x20);
    fVar31 = (float)*(undefined8 *)(param_2 + 0xc0);
    fVar32 = (float)((ulong)*(undefined8 *)(param_2 + 0xc0) >> 0x20);
    uVar35 = *(undefined8 *)(param_3 + 0x108);
    uVar34 = *(undefined8 *)(param_3 + 0x100);
    fVar14 = (float)*(undefined8 *)(param_2 + 0x98);
    fVar27 = (float)*(undefined8 *)(param_3 + 0xf0);
    fVar28 = (float)((ulong)*(undefined8 *)(param_3 + 0xf0) >> 0x20);
    fVar29 = (float)*(undefined8 *)(param_3 + 0xf8);
    fVar17 = (float)*(undefined8 *)(param_2 + 0xa8);
    bVar4 = *(byte *)(param_2 + 0x24);
    fVar10 = fVar19 * fVar12 + fVar22 * fVar13 + fVar27 * fVar14;
    fVar11 = fVar20 * fVar12 + fVar24 * fVar13 + fVar28 * fVar14;
    fVar12 = fVar21 * fVar12 + fVar25 * fVar13 + fVar29 * fVar14;
    fVar23 = (float)*(undefined8 *)(param_2 + 0xb8);
    fVar33 = (float)*(undefined8 *)(param_2 + 200);
    pfVar6 = (float *)(*(long *)(param_3 + 0x40) + (ulong)(*(int *)(param_1 + 0x58) * (uint)bVar1) +
                      8);
    fVar13 = fVar27 * fVar17 + fVar19 * fVar15 + fVar22 * fVar16;
    fVar14 = fVar28 * fVar17 + fVar20 * fVar15 + fVar24 * fVar16;
    fVar15 = fVar29 * fVar17 + fVar21 * fVar15 + fVar25 * fVar16;
    pfVar7 = (float *)(*(long *)(param_2 + 0x18) + (ulong)(*(int *)(param_1 + 0x54) * (uint)bVar4) +
                      8);
    pfVar8 = (float *)(*(long *)(param_3 + 0x18) + (ulong)(*(int *)(param_1 + 0x58) * (uint)bVar2) +
                      8);
    fVar16 = fVar27 * fVar23 + fVar19 * fVar18 + fVar22 * fVar30;
    fVar17 = fVar28 * fVar23 + fVar20 * fVar18 + fVar24 * fVar30;
    fVar18 = fVar29 * fVar23 + fVar21 * fVar18 + fVar25 * fVar30;
    pfVar9 = (float *)(*(long *)(param_2 + 0x40) + (ulong)(*(int *)(param_1 + 0x54) * (uint)bVar3) +
                      8);
    do {
      fVar23 = pfVar7[-2];
      fVar26 = pfVar7[-1];
      uVar5 = uVar5 + 1;
      fVar30 = *pfVar7;
      pfVar7 = (float *)((long)pfVar7 + (ulong)bVar4);
      *(ulong *)(pfVar8 + -2) =
           CONCAT44(fVar17 * fVar30 +
                    fVar14 * fVar26 +
                    fVar28 * fVar33 +
                    fVar24 * fVar32 + (float)((ulong)uVar34 >> 0x20) + fVar20 * fVar31 +
                    fVar11 * fVar23,
                    fVar16 * fVar30 +
                    fVar13 * fVar26 +
                    fVar27 * fVar33 + fVar22 * fVar32 + (float)uVar34 + fVar19 * fVar31 +
                    fVar10 * fVar23);
      *pfVar8 = fVar18 * fVar30 +
                fVar15 * fVar26 +
                fVar29 * fVar33 + fVar25 * fVar32 + (float)uVar35 + fVar21 * fVar31 +
                fVar12 * fVar23;
      fVar23 = pfVar9[-2];
      fVar26 = pfVar9[-1];
      fVar30 = *pfVar9;
      pfVar9 = (float *)((long)pfVar9 + (ulong)bVar3);
      pfVar8 = (float *)((long)pfVar8 + (ulong)bVar2);
      *(ulong *)(pfVar6 + -2) =
           CONCAT44(fVar11 * fVar23 + fVar14 * fVar26 + fVar17 * fVar30,
                    fVar10 * fVar23 + fVar13 * fVar26 + fVar16 * fVar30);
      *pfVar6 = fVar12 * fVar23 + fVar15 * fVar26 + fVar18 * fVar30;
      pfVar6 = (float *)((long)pfVar6 + (ulong)bVar1);
    } while (uVar5 < *(uint *)(param_1 + 0x50));
  }
  return 0;
}

