
void FUN_0037aaf0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(byte *)(param_1 + 0x49) >> 3 & 1) == 0) {
    fVar4 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 8));
    fVar4 = fVar4 * 0.003921569;
    fVar5 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 9));
    fVar6 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 10));
    fVar5 = fVar5 * 0.003921569;
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xb));
    fVar6 = fVar6 * 0.003921569;
    fVar7 = fVar7 * 0.003921569;
  }
  else {
    pfVar3 = *(float **)(param_1 + 8);
    fVar4 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar6 = pfVar3[2];
    fVar7 = pfVar3[3];
  }
  if ((*(byte *)(param_1 + 0x49) >> 4 & 1) == 0) {
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
    fVar9 = fVar9 * 0.003921569;
    fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
    fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
    fVar11 = fVar11 * 0.003921569;
    fVar8 = fVar8 * 0.003921569;
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
    fVar10 = fVar10 * 0.003921569;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    fVar9 = *(float *)(lVar2 + 0x10);
    fVar11 = *(float *)(lVar2 + 0x14);
    fVar8 = *(float *)(lVar2 + 0x18);
    fVar10 = *(float *)(lVar2 + 0x1c);
  }
  pfVar3 = (float *)(param_2 + 0x3c);
  lVar2 = 0x60;
  *(float *)(param_2 + 0x10) = fVar4;
  *(float *)(param_2 + 0x14) = fVar5;
  *(float *)(param_2 + 0x18) = fVar6;
  *(float *)(param_2 + 0x1c) = fVar7;
  *(float *)(param_2 + 0x20) = fVar9;
  *(float *)(param_2 + 0x24) = fVar11;
  *(float *)(param_2 + 0x28) = fVar8;
  *(float *)(param_2 + 0x2c) = fVar10;
  do {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) +
                      (((ulong)uVar1 & 3) * 0x10 + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8)
                      + ((ulong)(uVar1 >> 8) & 0xc) + ((ulong)(uVar1 >> 4) & 0x1c) +
                      ((ulong)(uVar1 >> 0xc) & 8) + (ulong)(-(uVar1 >> 0xc & 1) & 0xc) +
                      (ulong)(-(uVar1 >> 0x10 & 1) & 0x1c) +
                      ((ulong)(uVar1 >> 0xc) & 0x10) * ((ulong)(uVar1 >> 6) & 7) +
                      (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14 + lVar2);
    lVar2 = lVar2 + 4;
    pfVar3[-3] = (float)(uVar1 & 0xff) / 255.0;
    pfVar3[-2] = (float)(uVar1 >> 8 & 0xff) / 255.0;
    pfVar3[-1] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    *pfVar3 = (float)(uVar1 >> 0x18) / 255.0;
    pfVar3 = pfVar3 + 4;
  } while (lVar2 != 0x74);
  return;
}

