
void FUN_0038940c(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  float fVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((*(ushort *)(param_1 + 0x114) >> 4 & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) | 1;
  }
  lVar5 = *(long *)(param_1 + 0x140);
  if ((*(byte *)(lVar5 + 0x49) >> 4 & 1) == 0) {
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xc));
    fVar9 = fVar9 * 0.003921569;
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xd));
    fVar12 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xe));
    fVar10 = fVar10 * 0.003921569;
    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xf));
    fVar12 = fVar12 * 0.003921569;
    fVar14 = fVar14 * 0.003921569;
  }
  else {
    lVar7 = *(long *)(lVar5 + 8);
    fVar9 = *(float *)(lVar7 + 0x10);
    fVar10 = *(float *)(lVar7 + 0x14);
    fVar12 = *(float *)(lVar7 + 0x18);
    fVar14 = *(float *)(lVar7 + 0x1c);
  }
  if ((*(byte *)(lVar5 + 0x49) >> 3 & 1) == 0) {
    fVar15 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 8));
    fVar15 = fVar15 * 0.003921569;
    fVar16 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 9));
    fVar16 = fVar16 * 0.003921569;
    fVar17 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 10));
    fVar17 = fVar17 * 0.003921569;
  }
  else {
    pfVar6 = *(float **)(lVar5 + 8);
    fVar15 = *pfVar6;
    fVar16 = pfVar6[1];
    fVar17 = pfVar6[2];
  }
  *(float *)(param_2 + 0x28) = fVar15;
  *(float *)(param_2 + 0x2c) = fVar16;
  *(float *)(param_2 + 0x30) = fVar17;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(float *)(param_2 + 0x38) = fVar9;
  *(float *)(param_2 + 0x3c) = fVar10;
  *(float *)(param_2 + 0x40) = fVar12;
  *(float *)(param_2 + 0x44) = fVar14;
  *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x5a);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x140) + 0x10);
  if ((uVar2 >> 0xf & 1) == 0) {
    uVar3 = *(undefined1 *)(param_1 + 0x5a);
    *(undefined8 *)(param_2 + 0x54) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
    *(undefined1 **)(param_2 + 0x5c) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_2 + 100) = &DAT_3f8000003f800000;
    *(undefined1 *)(param_2 + 0x6c) = uVar3;
    cVar4 = *(char *)(param_1 + 0x114);
  }
  else {
    pbVar1 = (byte *)(*(long *)(*(long *)(param_1 + 0x140) + 0x18) +
                     (((ulong)uVar2 & 3) * 0x10 + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8) +
                     ((ulong)(uVar2 >> 8) & 0xc) + ((ulong)(uVar2 >> 4) & 0x1c) +
                     (ulong)(-(uVar2 >> 0xc & 1) & 0xc) +
                     (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14);
    bVar8 = *pbVar1;
    bVar11 = pbVar1[1];
    bVar13 = pbVar1[2];
    *(undefined4 *)(param_2 + 0x58) = 0;
    fVar9 = (float)NEON_ucvtf((uint)bVar8);
    fVar10 = (float)NEON_ucvtf((uint)bVar11);
    *(float *)(param_2 + 0x4c) = fVar9 * 0.003921569;
    *(float *)(param_2 + 0x50) = fVar10 * 0.003921569;
    fVar9 = (float)NEON_ucvtf((uint)bVar13);
    *(float *)(param_2 + 0x54) = fVar9 * 0.003921569;
    bVar8 = pbVar1[6];
    fVar9 = (float)NEON_ucvtf((uint)pbVar1[3]);
    fVar12 = (float)NEON_ucvtf((uint)pbVar1[4]);
    fVar10 = (float)NEON_ucvtf((uint)pbVar1[5]);
    *(float *)(param_2 + 0x5c) = fVar9 * 0.003921569;
    *(float *)(param_2 + 0x60) = fVar12 * 0.003921569;
    fVar9 = (float)NEON_ucvtf((uint)bVar8);
    *(float *)(param_2 + 100) = fVar10 * 0.003921569;
    *(float *)(param_2 + 0x68) = fVar9 * 0.003921569;
    *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_1 + 0x5a);
    cVar4 = *(char *)(param_1 + 0x114);
  }
  if (cVar4 < '\0') {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x150) + 8);
    *(uint *)(param_2 + 0x10) = (uint)*(byte *)(*(long *)(param_1 + 0x150) + 0x11);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(long *)(param_1 + 0x150) + 0x14);
  }
  return;
}

