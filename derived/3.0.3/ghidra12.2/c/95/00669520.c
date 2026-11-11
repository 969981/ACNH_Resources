
void FUN_00669520(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  
  uVar5 = (ulong)(long)(int)(param_2 << 2) >> 2;
  lVar1 = param_1 + 0xd60;
  lVar2 = param_1 + 0x8d0;
  puVar3 = (undefined8 *)
           (lVar2 + (ulong)*(byte *)(lVar1 + (-(ulong)((param_2 & 0x3fffffff) >> 0x1d) &
                                              0xfffffffc00000000 | (ulong)(param_2 << 2) << 2) + 2)
                    * 0x10);
  uVar16 = *puVar3;
  puVar4 = (undefined8 *)(lVar2 + (ulong)*(byte *)(lVar1 + (uVar5 << 4 | 4) + 2) * 0x10);
  uVar23 = *puVar4;
  fVar17 = (float)uVar16;
  fVar7 = (float)((ulong)uVar16 >> 0x20);
  fVar6 = (float)puVar3[1];
  puVar3 = (undefined8 *)(lVar2 + (ulong)*(byte *)(lVar1 + (uVar5 << 4 | 8) + 2) * 0x10);
  uVar16 = *puVar3;
  lVar2 = param_1 + (long)(int)param_2 * 0x20;
  lVar1 = param_1 + (long)(int)param_2 * 4;
  dVar15 = (double)((float)((ulong)uVar23 >> 0x20) - fVar7);
  dVar19 = (double)((float)puVar4[1] - fVar6);
  dVar20 = (double)((float)((ulong)uVar16 >> 0x20) - fVar7);
  dVar22 = (double)((float)puVar3[1] - fVar6);
  dVar8 = (double)((float)uVar23 - fVar17);
  dVar10 = (double)((float)uVar16 - fVar17);
  dVar21 = dVar15 * dVar22 - dVar19 * dVar20;
  dVar19 = dVar19 * dVar10 - dVar8 * dVar22;
  fVar24 = (float)dVar21;
  fVar14 = (float)dVar19;
  dVar10 = dVar8 * dVar20 - dVar15 * dVar10;
  fVar9 = (float)dVar10;
  fVar18 = (float)*(undefined8 *)(param_1 + 0xa0);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
  fVar12 = (float)*(undefined8 *)(param_1 + 0xa8);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  uVar16 = CONCAT44(fVar24 * fVar24 + fVar14 * fVar14 + fVar9 * fVar9,
                    fVar24 * fVar24 + fVar14 * fVar14 + fVar9 * fVar9);
  dVar8 = (double)((fVar13 + 0.0) - fVar13);
  dVar25 = (double)((fVar11 + fVar14) - fVar11);
  dVar15 = (double)((fVar18 + fVar24) - fVar18);
  dVar26 = (double)((fVar12 + fVar9) - fVar12);
  dVar21 = dVar21 - dVar15;
  *(double *)(lVar2 + 0x3be0) = dVar21;
  dVar10 = dVar10 - dVar26;
  *(double *)(lVar2 + 0x2bf8) = dVar8;
  uVar23 = NEON_frsqrte(uVar16,4);
  *(double *)(lVar2 + 0x3bf8) = 0.0 - dVar8;
  fVar9 = (float)uVar23;
  fVar18 = (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(uVar16,CONCAT44(fVar18 * fVar18,fVar9 * fVar9),4);
  dVar19 = dVar19 - dVar25;
  *(double *)(lVar2 + 0x2be0) = dVar15;
  *(double *)(lVar2 + 0x2be8) = dVar25;
  *(double *)(lVar2 + 0x2bf0) = dVar26;
  *(double *)(lVar2 + 0x3be8) = dVar19;
  *(double *)(lVar2 + 0x3bf0) = dVar10;
  fVar9 = fVar9 * (float)uVar23;
  fVar18 = fVar18 * (float)((ulong)uVar23 >> 0x20);
  uVar16 = NEON_frsqrts(uVar16,CONCAT44(fVar18 * fVar18,fVar9 * fVar9),4);
  dVar20 = (double)((float)*(undefined8 *)(param_1 + 0x90) - fVar17);
  fVar9 = (float)uVar16 * fVar9;
  dVar22 = (double)((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) - fVar7);
  dVar8 = (double)((float)*(undefined8 *)(param_1 + 0x98) - fVar6);
  *(float *)(lVar1 + 0x2560) = fVar9;
  fVar17 = *(float *)(param_1 + 0xb0);
  fVar7 = fVar17 * fVar17 * fVar17 * fVar9;
  if (fVar17 <= fVar7) {
    fVar17 = fVar7;
  }
  *(float *)(lVar1 + 0x2960) = fVar17;
  *(float *)(lVar1 + 0x2760) =
       fVar17 + (float)(dVar26 * dVar8 + dVar15 * dVar20 + dVar25 * dVar22 +
                       dVar10 * dVar8 + dVar21 * dVar20 + dVar19 * dVar22) * fVar9;
  dVar8 = *(double *)(lVar2 + 0x2be0);
  dVar10 = *(double *)(lVar2 + 0x3be0);
  dVar15 = *(double *)(lVar2 + 0x2be8);
  dVar19 = *(double *)(lVar2 + 0x3be8);
  lVar1 = param_1 + (long)(int)param_2 * 0x10;
  *(ulong *)(lVar1 + 0x1d68) =
       CONCAT44((float)(*(double *)(lVar2 + 0x2bf8) + *(double *)(lVar2 + 0x3bf8)),
                (float)(*(double *)(lVar2 + 0x2bf0) + *(double *)(lVar2 + 0x3bf0)));
  *(ulong *)(lVar1 + 0x1d60) = CONCAT44((float)(dVar15 + dVar19),(float)(dVar8 + dVar10));
  *(undefined1 *)(param_1 + (int)param_2 + 0x2b60) = 1;
  return;
}

