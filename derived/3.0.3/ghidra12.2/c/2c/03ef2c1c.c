
void FUN_03ef2c1c(float *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  short *psVar6;
  long lVar7;
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
  
  uVar2 = *(uint *)(param_2 + 0x28);
  lVar7 = *(long *)(param_2 + 0x98);
  if (*(uint *)(param_2 + 0x90) <= uVar2) {
    uVar2 = 0;
  }
  psVar6 = (short *)(lVar7 + (long)(int)uVar2 * 0x88);
  fVar19 = *(float *)(psVar6 + 4);
  fVar21 = *(float *)(psVar6 + 6);
  fVar20 = *(float *)(psVar6 + 8);
  if (*psVar6 != -1 && psVar6[1] != -1) {
    lVar4 = *(long *)(param_2 + 0x18);
    uVar3 = (uint)psVar6[1];
    uVar1 = uVar3;
    if (*(uint *)(lVar4 + 0x30) <= uVar3) {
      uVar1 = 0;
    }
    if ((*(byte *)(*(long *)(lVar4 + 0x38) + (long)(int)uVar1) >> 1 & 1) == 0) {
      if (*(uint *)(lVar4 + 0x20) <= uVar3) {
        uVar3 = 0;
      }
      pfVar5 = (float *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar3 * 0x1c);
    }
    else {
      pfVar5 = (float *)FUN_03ef9df0();
    }
    fVar8 = pfVar5[2];
    fVar10 = pfVar5[3];
    fVar16 = *pfVar5;
    fVar14 = pfVar5[1];
    fVar12 = -(fVar8 * fVar21) + fVar20 * fVar14 + fVar19 * fVar10;
    fVar17 = (fVar19 * fVar8 - fVar20 * fVar16) + fVar21 * fVar10;
    fVar18 = -(fVar14 * fVar19) + fVar21 * fVar16 + fVar20 * fVar10;
    fVar20 = (-(fVar14 * fVar21) - fVar19 * fVar16) - fVar20 * fVar8;
    fVar19 = pfVar5[4] + ((-(fVar8 * fVar17) + fVar10 * fVar12 + fVar14 * fVar18) - fVar16 * fVar20)
    ;
    fVar21 = pfVar5[5] + (((fVar10 * fVar17 + fVar8 * fVar12) - fVar16 * fVar18) - fVar14 * fVar20);
    fVar20 = pfVar5[6] + (((fVar16 * fVar17 - fVar14 * fVar12) + fVar10 * fVar18) - fVar8 * fVar20);
  }
  lVar7 = lVar7 + (long)(int)uVar2 * 0x88;
  fVar16 = *(float *)(lVar7 + 0x14);
  fVar17 = *(float *)(lVar7 + 0x18);
  fVar14 = *(float *)(lVar7 + 0x1c);
  fVar12 = *(float *)(lVar7 + 0x20);
  fVar8 = fVar12;
  fVar10 = fVar16;
  if (*(short *)(lVar7 + 4) != -1 && *(short *)(lVar7 + 6) != -1) {
    lVar4 = *(long *)(param_2 + 0x18);
    uVar1 = (uint)*(short *)(lVar7 + 6);
    uVar2 = uVar1;
    if (*(uint *)(lVar4 + 0x30) <= uVar1) {
      uVar2 = 0;
    }
    if ((*(byte *)(*(long *)(lVar4 + 0x38) + (long)(int)uVar2) >> 1 & 1) == 0) {
      if (*(uint *)(lVar4 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      pfVar5 = (float *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x1c);
    }
    else {
      pfVar5 = (float *)FUN_03ef9df0();
    }
    fVar9 = *pfVar5;
    fVar11 = pfVar5[1];
    fVar15 = pfVar5[2];
    fVar13 = pfVar5[3];
    fVar18 = fVar9 * fVar14;
    fVar8 = ((-(fVar9 * fVar16) + fVar12 * fVar13) - fVar17 * fVar11) - fVar14 * fVar15;
    fVar10 = (fVar12 * fVar9 + fVar16 * fVar13 + fVar14 * fVar11) - fVar17 * fVar15;
    fVar14 = ((fVar17 * fVar9 + fVar14 * fVar13) - fVar16 * fVar11) + fVar12 * fVar15;
    fVar17 = -fVar18 + fVar17 * fVar13 + fVar12 * fVar11 + fVar16 * fVar15;
  }
  param_1[4] = fVar19;
  param_1[5] = fVar21;
  param_1[6] = fVar20;
  *param_1 = fVar10;
  param_1[1] = fVar17;
  param_1[2] = fVar14;
  param_1[3] = fVar8;
  return;
}

