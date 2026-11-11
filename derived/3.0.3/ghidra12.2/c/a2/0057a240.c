
void FUN_0057a240(long param_1,long param_2,long param_3)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
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
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    fVar25 = (float)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
    fVar31 = (float)*(undefined8 *)(param_3 + 0xe0);
    fVar32 = (float)((ulong)*(undefined8 *)(param_3 + 0xe0) >> 0x20);
    fVar33 = (float)*(undefined8 *)(param_3 + 0xe8);
    lVar12 = *(long *)(param_2 + 0x18);
    uVar40 = *(undefined8 *)(param_3 + 0x108);
    uVar39 = *(undefined8 *)(param_3 + 0x100);
    fVar20 = (float)*(undefined8 *)(param_2 + 0x90);
    fVar28 = (float)*(undefined8 *)(param_3 + 0xd0);
    fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 0xd0) >> 0x20);
    fVar30 = (float)*(undefined8 *)(param_3 + 0xd8);
    lVar13 = *(long *)(param_2 + 0x40);
    fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
    iVar11 = 0;
    fVar22 = (float)*(undefined8 *)(param_2 + 0x98);
    fVar35 = (float)*(undefined8 *)(param_3 + 0xf0);
    fVar37 = (float)((ulong)*(undefined8 *)(param_3 + 0xf0) >> 0x20);
    fVar38 = (float)*(undefined8 *)(param_3 + 0xf8);
    lVar14 = *(long *)(param_3 + 0x18);
    fVar23 = (float)*(undefined8 *)(param_2 + 0xa0);
    lVar15 = *(long *)(param_3 + 0x40);
    bVar3 = *(byte *)(param_3 + 0x4c);
    bVar4 = *(byte *)(param_3 + 0x24);
    fVar27 = (float)*(undefined8 *)(param_2 + 0xa8);
    bVar5 = *(byte *)(param_2 + 0x4c);
    fVar18 = fVar28 * fVar20 + fVar31 * fVar21 + fVar35 * fVar22;
    fVar19 = fVar29 * fVar20 + fVar32 * fVar21 + fVar37 * fVar22;
    fVar20 = fVar30 * fVar20 + fVar33 * fVar21 + fVar38 * fVar22;
    bVar6 = *(byte *)(param_2 + 0x24);
    fVar24 = (float)*(undefined8 *)(param_2 + 0xb0);
    fVar41 = (float)*(undefined8 *)(param_2 + 0xc0);
    fVar21 = fVar35 * fVar27 + fVar28 * fVar23 + fVar31 * fVar25;
    fVar22 = fVar37 * fVar27 + fVar29 * fVar23 + fVar32 * fVar25;
    fVar23 = fVar38 * fVar27 + fVar30 * fVar23 + fVar33 * fVar25;
    fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0xb0) >> 0x20);
    fVar42 = (float)((ulong)*(undefined8 *)(param_2 + 0xc0) >> 0x20);
    fVar34 = (float)*(undefined8 *)(param_2 + 0xb8);
    fVar43 = (float)*(undefined8 *)(param_2 + 200);
    fVar25 = fVar35 * fVar34 + fVar28 * fVar24 + fVar31 * fVar27;
    fVar26 = fVar37 * fVar34 + fVar29 * fVar24 + fVar32 * fVar27;
    fVar27 = fVar38 * fVar34 + fVar30 * fVar24 + fVar33 * fVar27;
    do {
      puVar1 = (ushort *)(*(long *)(param_1 + 0x48) + (long)iVar11 * 4);
      iVar11 = iVar11 + 1;
      uVar7 = (ulong)*puVar1;
      uVar16 = (ulong)puVar1[1];
      pfVar9 = (float *)(lVar12 + uVar7 * bVar6);
      pfVar8 = (float *)(lVar13 + uVar7 * bVar5);
      fVar24 = *pfVar9;
      fVar34 = pfVar9[1];
      fVar36 = pfVar9[2];
      puVar10 = (undefined8 *)(lVar14 + uVar16 * bVar4);
      puVar17 = (undefined8 *)(lVar15 + uVar16 * bVar3);
      *puVar10 = CONCAT44(fVar26 * fVar36 +
                          fVar22 * fVar34 +
                          fVar37 * fVar43 +
                          fVar32 * fVar42 + (float)((ulong)uVar39 >> 0x20) + fVar29 * fVar41 +
                          fVar19 * fVar24,
                          fVar25 * fVar36 +
                          fVar21 * fVar34 +
                          fVar35 * fVar43 + fVar31 * fVar42 + (float)uVar39 + fVar28 * fVar41 +
                          fVar18 * fVar24);
      *(float *)(puVar10 + 1) =
           fVar27 * fVar36 +
           fVar23 * fVar34 +
           fVar38 * fVar43 + fVar33 * fVar42 + (float)uVar40 + fVar30 * fVar41 + fVar20 * fVar24;
      fVar24 = *pfVar8;
      fVar34 = pfVar8[1];
      fVar36 = pfVar8[2];
      *puVar17 = CONCAT44(fVar19 * fVar24 + fVar22 * fVar34 + fVar26 * fVar36,
                          fVar18 * fVar24 + fVar21 * fVar34 + fVar25 * fVar36);
      *(float *)(puVar17 + 1) = fVar20 * fVar24 + fVar23 * fVar34 + fVar27 * fVar36;
    } while (iVar2 != iVar11);
  }
  return;
}

