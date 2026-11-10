
void FUN_00378bdc(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  if ((uVar3 & 0x30000) != 0) {
    if ((uVar3 >> 0x10 & 1) == 0) {
      FUN_0037a818();
      return;
    }
    FUN_0037a200();
    return;
  }
  lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  pfVar2 = (float *)0x0;
  if (lVar6 != 0) {
    pfVar2 = (float *)(lVar6 + (ulong)*(uint *)(param_1 + 0x34));
  }
  bVar5 = *(byte *)(param_1 + 0x49);
  if ((uVar3 & 3) == 0) {
    if ((bVar5 >> 4 & 1) == 0) {
      fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
      fVar9 = fVar9 * 0.003921569;
      fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
      fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
      fVar12 = fVar12 * 0.003921569;
      fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
      fVar10 = fVar10 * 0.003921569;
      fVar11 = fVar11 * 0.003921569;
    }
    else {
      lVar6 = *(long *)(param_1 + 8);
      fVar9 = *(float *)(lVar6 + 0x10);
      fVar12 = *(float *)(lVar6 + 0x14);
      fVar10 = *(float *)(lVar6 + 0x18);
      fVar11 = *(float *)(lVar6 + 0x1c);
    }
    *pfVar2 = fVar9;
    pfVar2[1] = fVar12;
    pfVar2[2] = fVar10;
    pfVar2[3] = fVar11;
    pfVar2[4] = 0.0;
    pfVar2[5] = 0.0;
    pfVar2[6] = 0.0;
    pfVar2[7] = 0.0;
    uVar3 = *(uint *)(param_1 + 0x14);
    goto joined_r0x00378d90;
  }
  if ((bVar5 >> 4 & 1) == 0) {
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
    fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
    fVar10 = fVar10 * 0.003921569;
    fVar11 = fVar11 * 0.003921569;
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
    fVar9 = fVar9 * 0.003921569;
    fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
    fVar12 = fVar12 * 0.003921569;
    if ((bVar5 >> 3 & 1) != 0) goto LAB_00378c58;
LAB_00378cc0:
    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 8));
    fVar14 = fVar14 * 0.003921569;
    fVar16 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 10));
    fVar16 = fVar16 * 0.003921569;
    fVar15 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 9));
    fVar15 = fVar15 * 0.003921569;
    fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xb));
    fVar13 = fVar13 * 0.003921569;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    fVar9 = *(float *)(lVar6 + 0x10);
    fVar10 = *(float *)(lVar6 + 0x14);
    fVar11 = *(float *)(lVar6 + 0x18);
    fVar12 = *(float *)(lVar6 + 0x1c);
    if ((bVar5 >> 3 & 1) == 0) goto LAB_00378cc0;
LAB_00378c58:
    pfVar7 = *(float **)(param_1 + 8);
    fVar14 = *pfVar7;
    fVar15 = pfVar7[1];
    fVar16 = pfVar7[2];
    fVar13 = pfVar7[3];
  }
  pfVar2[4] = fVar14;
  pfVar2[5] = fVar15;
  pfVar2[6] = fVar16;
  *pfVar2 = fVar9 - fVar14;
  pfVar2[1] = fVar10 - fVar15;
  pfVar2[2] = fVar11 - fVar16;
  if ((*(byte *)(param_1 + 0x49) >> 2 & 1) == 0) {
    pfVar2[3] = fVar12 - fVar13;
    pfVar2[7] = fVar13;
    uVar3 = *(uint *)(param_1 + 0x14);
  }
  else {
    fVar9 = 1.0 / ((fVar12 - fVar13) + 0.0001);
    pfVar2[3] = fVar9;
    pfVar2[7] = -(fVar13 * fVar9);
    uVar3 = *(uint *)(param_1 + 0x14);
  }
joined_r0x00378d90:
  if ((uVar3 & 0x1c0) != 0) {
    if ((uVar3 & 3) < 2) {
      pfVar2[0x20] = (float)(uVar3 & 3);
      return;
    }
    uVar3 = uVar3 >> 6 & 7;
    if (uVar3 == 0) {
      fVar9 = 0.0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x10);
      lVar6 = *(long *)(param_1 + 0x18) + (ulong)(-(uVar4 >> 0xc & 1) & 0xc) +
              (((ulong)uVar4 & 3) * 0x10 + ((ulong)uVar4 & 0x30) | (ulong)(uVar4 >> 6) & 8) +
              ((ulong)(uVar4 >> 8) & 0xc) + ((ulong)(uVar4 >> 2) & 3) * 0x14;
      fVar9 = (float)((uint)(*(char *)(lVar6 + 1) == '\x01') << 7);
      if (((uVar3 != 1) &&
          (fVar9 = (float)((uint)fVar9 | (uint)(*(char *)(lVar6 + 5) == '\x01') << 0xf), uVar3 != 2)
          ) && (fVar9 = (float)((uint)fVar9 | (uint)(*(char *)(lVar6 + 9) == '\x01') << 0x17),
               uVar3 != 3)) {
        fVar9 = (float)((uint)fVar9 | (uint)(*(char *)(lVar6 + 0xd) == '\x01') << 0x1f);
      }
    }
    pfVar2[0x20] = fVar9;
    uVar3 = *(uint *)(param_1 + 0x10);
    if ((uVar3 >> 0xc & 1) != 0) {
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
      pfVar1 = (float *)(*(long *)(param_1 + 0x18) +
                        (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8
                        ) + ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 2) & 3) * 0x14);
      fVar11 = pfVar1[1];
      uVar8 = (ulong)(*pfVar1 * (fVar9 / *(float *)PTR_FloatDegree180_04bcedf8));
      pfVar7 = (float *)(PTR_SinCosSampleTable_04bcef98 + (uVar8 >> 0x18 & 0xff) * 0x10);
      fVar9 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
      fVar10 = pfVar7[1] + fVar9 * pfVar7[3];
      fVar9 = *pfVar7 + fVar9 * pfVar7[2];
      fVar12 = pfVar1[2];
      pfVar2[10] = 0.0;
      pfVar2[0xe] = 0.0;
      fVar14 = fVar11 * fVar9;
      fVar15 = -(fVar10 * fVar12);
      fVar11 = fVar11 * fVar10;
      fVar12 = fVar12 * fVar9;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar11 = fVar11 + fVar11;
      fVar12 = fVar12 + fVar12;
      pfVar2[0xc] = fVar11;
      pfVar2[0xd] = fVar12;
      pfVar2[8] = fVar14;
      pfVar2[9] = fVar15;
      pfVar2[0xb] = fVar15 * -0.5 + fVar14 * -0.5;
      pfVar2[0xf] = fVar12 * -0.5 + fVar11 * -0.5;
      return;
    }
  }
  return;
}

