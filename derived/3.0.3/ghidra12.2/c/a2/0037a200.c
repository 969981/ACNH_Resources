
void FUN_0037a200(long param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar4 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  piVar2 = (int *)0x0;
  if (lVar4 != 0) {
    piVar2 = (int *)(lVar4 + (ulong)*(uint *)(param_1 + 0x34));
  }
  uVar6 = (ulong)(*(uint *)(param_1 + 0x14) >> 6) & 7;
  iVar5 = (int)uVar6;
  *piVar2 = iVar5;
  if (iVar5 != 0) {
    lVar4 = 0;
    do {
      uVar3 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)((long)piVar2 + lVar4 + 0x80) =
           *(undefined4 *)
            (*(long *)(param_1 + 0x18) +
             (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
             ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
             ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
             (ulong)(-(uVar3 >> 0x10 & 1) & 0x1c) +
             (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14 + lVar4);
      uVar3 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)((long)piVar2 + lVar4 + 0x84) =
           *(undefined4 *)
            (*(long *)(param_1 + 0x18) + lVar4 +
             (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
             ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
             ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
             (ulong)(-(uVar3 >> 0x10 & 1) & 0x1c) +
             (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14 + 4);
      uVar3 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)((long)piVar2 + lVar4 + 0x88) =
           *(undefined4 *)
            (*(long *)(param_1 + 0x18) + lVar4 +
             (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
             ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
             ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
             (ulong)(-(uVar3 >> 0x10 & 1) & 0x1c) +
             (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14 + 8);
      uVar3 = *(uint *)(param_1 + 0x10);
      lVar1 = lVar4 + 0x10;
      *(undefined4 *)((long)piVar2 + lVar4 + 0x8c) =
           *(undefined4 *)
            (*(long *)(param_1 + 0x18) + lVar4 +
             (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
             ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
             ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
             (ulong)(-(uVar3 >> 0x10 & 1) & 0x1c) +
             (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14 + 0xc);
      lVar4 = lVar1;
    } while (uVar6 * 0x10 != lVar1);
  }
  piVar2[1] = 0;
  if ((*(byte *)(param_1 + 0x49) >> 3 & 1) == 0) {
    fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 8));
    fVar8 = fVar8 * 0.003921569;
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 9));
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 10));
    fVar9 = fVar9 * 0.003921569;
    fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xb));
    fVar10 = fVar10 * 0.003921569;
    fVar11 = fVar11 * 0.003921569;
  }
  else {
    pfVar7 = *(float **)(param_1 + 8);
    fVar8 = *pfVar7;
    fVar9 = pfVar7[1];
    fVar10 = pfVar7[2];
    fVar11 = pfVar7[3];
  }
  if ((*(byte *)(param_1 + 0x49) >> 4 & 1) == 0) {
    fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
    fVar12 = fVar12 * 0.003921569;
    fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
    fVar13 = fVar13 * 0.003921569;
    fVar15 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
    fVar14 = fVar14 * 0.003921569;
    fVar15 = fVar15 * 0.003921569;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    fVar12 = *(float *)(lVar4 + 0x10);
    fVar13 = *(float *)(lVar4 + 0x14);
    fVar14 = *(float *)(lVar4 + 0x18);
    fVar15 = *(float *)(lVar4 + 0x1c);
  }
  piVar2[4] = (int)fVar8;
  piVar2[5] = (int)fVar9;
  piVar2[6] = (int)fVar10;
  piVar2[7] = (int)fVar11;
  piVar2[8] = (int)fVar12;
  piVar2[9] = (int)fVar13;
  piVar2[10] = (int)fVar14;
  piVar2[0xb] = (int)fVar15;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) +
                    (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
                    ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                    ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                    (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14 + 4);
  piVar2[0xc] = (int)((float)(uVar3 & 0xff) / 255.0);
  piVar2[0xd] = (int)((float)(uVar3 >> 8 & 0xff) / 255.0);
  piVar2[0xe] = (int)((float)(uVar3 >> 0x10 & 0xff) / 255.0);
  piVar2[0xf] = (int)((float)(uVar3 >> 0x18) / 255.0);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) +
                    (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
                    ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                    ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                    (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14 + 8);
  piVar2[0x10] = (int)((float)(uVar3 & 0xff) / 255.0);
  piVar2[0x11] = (int)((float)(uVar3 >> 8 & 0xff) / 255.0);
  piVar2[0x12] = (int)((float)(uVar3 >> 0x10 & 0xff) / 255.0);
  piVar2[0x13] = (int)((float)(uVar3 >> 0x18) / 255.0);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) +
                    (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
                    ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                    ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                    (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14 + 0xc);
  piVar2[0x14] = (int)((float)(uVar3 & 0xff) / 255.0);
  piVar2[0x15] = (int)((float)(uVar3 >> 8 & 0xff) / 255.0);
  piVar2[0x16] = (int)((float)(uVar3 >> 0x10 & 0xff) / 255.0);
  piVar2[0x17] = (int)((float)(uVar3 >> 0x18) / 255.0);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) +
                    (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
                    ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                    ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                    (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14 + 0x10);
  piVar2[0x18] = (int)((float)(uVar3 & 0xff) / 255.0);
  piVar2[0x19] = (int)((float)(uVar3 >> 8 & 0xff) / 255.0);
  piVar2[0x1a] = (int)((float)(uVar3 >> 0x10 & 0xff) / 255.0);
  piVar2[0x1b] = (int)((float)(uVar3 >> 0x18) / 255.0);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) +
                    (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
                    ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                    ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                    (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14 + 0x14);
  piVar2[0x1c] = (int)((float)(uVar3 & 0xff) / 255.0);
  piVar2[0x1d] = (int)((float)(uVar3 >> 8 & 0xff) / 255.0);
  piVar2[0x1e] = (int)((float)(uVar3 >> 0x10 & 0xff) / 255.0);
  piVar2[0x1f] = (int)((float)(uVar3 >> 0x18) / 255.0);
  return;
}

