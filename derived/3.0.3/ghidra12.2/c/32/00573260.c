
void FUN_00573260(long param_1,long param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
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
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    fVar20 = (float)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
    fVar26 = (float)*(undefined8 *)(param_3 + 0xe0);
    fVar27 = (float)((ulong)*(undefined8 *)(param_3 + 0xe0) >> 0x20);
    fVar28 = (float)*(undefined8 *)(param_3 + 0xe8);
    fVar16 = (float)*(undefined8 *)(param_2 + 0x90);
    fVar23 = (float)*(undefined8 *)(param_3 + 0xd0);
    fVar24 = (float)((ulong)*(undefined8 *)(param_3 + 0xd0) >> 0x20);
    fVar25 = (float)*(undefined8 *)(param_3 + 0xd8);
    fVar17 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
    iVar7 = 0;
    fVar19 = (float)*(undefined8 *)(param_2 + 0xa0);
    pfVar10 = (float *)(*(long *)(param_3 + 0x18) + 8);
    fVar22 = (float)*(undefined8 *)(param_2 + 0xb0);
    lVar8 = *(long *)(param_2 + 0x18);
    lVar9 = *(long *)(param_2 + 0x40);
    fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0xb0) >> 0x20);
    bVar2 = *(byte *)(param_3 + 0x4c);
    bVar3 = *(byte *)(param_3 + 0x24);
    fVar35 = (float)*(undefined8 *)(param_2 + 0xc0);
    bVar4 = *(byte *)(param_2 + 0x4c);
    fVar36 = (float)((ulong)*(undefined8 *)(param_2 + 0xc0) >> 0x20);
    bVar5 = *(byte *)(param_2 + 0x24);
    pfVar11 = (float *)(*(long *)(param_3 + 0x40) + 8);
    uVar39 = *(undefined8 *)(param_3 + 0x108);
    uVar38 = *(undefined8 *)(param_3 + 0x100);
    fVar18 = (float)*(undefined8 *)(param_2 + 0x98);
    fVar31 = (float)*(undefined8 *)(param_3 + 0xf0);
    fVar32 = (float)((ulong)*(undefined8 *)(param_3 + 0xf0) >> 0x20);
    fVar33 = (float)*(undefined8 *)(param_3 + 0xf8);
    fVar21 = (float)*(undefined8 *)(param_2 + 0xa8);
    fVar14 = fVar23 * fVar16 + fVar26 * fVar17 + fVar31 * fVar18;
    fVar15 = fVar24 * fVar16 + fVar27 * fVar17 + fVar32 * fVar18;
    fVar16 = fVar25 * fVar16 + fVar28 * fVar17 + fVar33 * fVar18;
    fVar29 = (float)*(undefined8 *)(param_2 + 0xb8);
    fVar37 = (float)*(undefined8 *)(param_2 + 200);
    fVar17 = fVar31 * fVar21 + fVar23 * fVar19 + fVar26 * fVar20;
    fVar18 = fVar32 * fVar21 + fVar24 * fVar19 + fVar27 * fVar20;
    fVar19 = fVar33 * fVar21 + fVar25 * fVar19 + fVar28 * fVar20;
    fVar20 = fVar31 * fVar29 + fVar23 * fVar22 + fVar26 * fVar34;
    fVar21 = fVar32 * fVar29 + fVar24 * fVar22 + fVar27 * fVar34;
    fVar22 = fVar33 * fVar29 + fVar25 * fVar22 + fVar28 * fVar34;
    do {
      lVar12 = (long)*(short *)(*(long *)(param_1 + 0x48) + (long)iVar7 * 2);
      if (-1 < lVar12) {
        pfVar6 = (float *)(lVar8 + lVar12 * (ulong)bVar5);
        pfVar13 = (float *)(lVar9 + lVar12 * (ulong)bVar4);
        fVar34 = *pfVar6;
        fVar29 = pfVar6[1];
        fVar30 = pfVar6[2];
        *(ulong *)(pfVar10 + -2) =
             CONCAT44(fVar21 * fVar30 +
                      fVar18 * fVar29 +
                      fVar32 * fVar37 +
                      fVar27 * fVar36 + (float)((ulong)uVar38 >> 0x20) + fVar24 * fVar35 +
                      fVar15 * fVar34,
                      fVar20 * fVar30 +
                      fVar17 * fVar29 +
                      fVar31 * fVar37 + fVar26 * fVar36 + (float)uVar38 + fVar23 * fVar35 +
                      fVar14 * fVar34);
        *pfVar10 = fVar22 * fVar30 +
                   fVar19 * fVar29 +
                   fVar33 * fVar37 + fVar28 * fVar36 + (float)uVar39 + fVar25 * fVar35 +
                   fVar16 * fVar34;
        fVar34 = *pfVar13;
        fVar29 = pfVar13[1];
        fVar30 = pfVar13[2];
        *(ulong *)(pfVar11 + -2) =
             CONCAT44(fVar15 * fVar34 + fVar18 * fVar29 + fVar21 * fVar30,
                      fVar14 * fVar34 + fVar17 * fVar29 + fVar20 * fVar30);
        *pfVar11 = fVar16 * fVar34 + fVar19 * fVar29 + fVar22 * fVar30;
      }
      iVar7 = iVar7 + 1;
      pfVar10 = (float *)((long)pfVar10 + (ulong)bVar3);
      pfVar11 = (float *)((long)pfVar11 + (ulong)bVar2);
    } while (iVar1 != iVar7);
  }
  return;
}

