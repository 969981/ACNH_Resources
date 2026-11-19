
void FUN_03ad1050(long param_1,float *param_2,float *param_3,float *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x48);
  puVar1 = (uint *)(param_1 + 0x18);
  puVar4 = puVar1 + uVar6 * 6;
  if (1 < *(uint *)(param_1 + 0x48)) {
    puVar4 = puVar1;
  }
  if (0 < (int)puVar4[4]) {
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      if (*puVar4 <= uVar3) {
        uVar5 = 0;
      }
      puVar4 = *(uint **)(*(long *)(puVar4 + 2) + (ulong)uVar5 * 8);
      if (0 < (int)puVar4[4]) {
        fVar8 = *param_2;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          if (*puVar4 <= uVar5) {
            uVar2 = 0;
          }
          fVar20 = param_3[4];
          fVar21 = param_3[5];
          pfVar7 = (float *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0xc);
          fVar11 = *pfVar7;
          fVar12 = pfVar7[1];
          fVar13 = pfVar7[2];
          fVar9 = param_4[3] + fVar12 * param_4[1] + fVar11 * *param_4 + fVar13 * param_4[2];
          fVar10 = param_4[7] + fVar12 * param_4[5] + fVar11 * param_4[4] + fVar13 * param_4[6];
          fVar11 = param_4[0xb] + fVar12 * param_4[9] + fVar11 * param_4[8] + fVar13 * param_4[10];
          fVar12 = param_3[0xf] +
                   fVar10 * param_3[0xd] + fVar9 * param_3[0xc] + fVar11 * param_3[0xe];
          fVar17 = param_3[8];
          fVar18 = param_3[9];
          fVar13 = param_3[3] / fVar12 +
                   fVar10 * (param_3[1] / fVar12) + fVar9 * (*param_3 / fVar12) +
                   fVar11 * (param_3[2] / fVar12);
          fVar19 = param_3[6];
          fVar14 = param_3[7];
          fVar16 = param_3[10];
          fVar15 = param_3[0xb];
          if (fVar13 < fVar8) {
            *param_2 = fVar13;
            fVar8 = fVar13;
          }
          fVar14 = fVar14 / fVar12 +
                   fVar10 * (fVar21 / fVar12) + fVar9 * (fVar20 / fVar12) +
                   fVar11 * (fVar19 / fVar12);
          if (fVar14 < param_2[1]) {
            param_2[1] = fVar14;
          }
          fVar9 = fVar15 / fVar12 +
                  fVar10 * (fVar18 / fVar12) + fVar9 * (fVar17 / fVar12) +
                  fVar11 * (fVar16 / fVar12);
          if (fVar9 < param_2[2]) {
            param_2[2] = fVar9;
          }
          if (param_2[3] < fVar13) {
            param_2[3] = fVar13;
          }
          if (param_2[4] < fVar14) {
            param_2[4] = fVar14;
          }
          if (param_2[5] < fVar9) {
            param_2[5] = fVar9;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)puVar4[4]);
        uVar6 = (ulong)*(uint *)(param_1 + 0x48);
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar1 + uVar6 * 6;
      if (1 < uVar6) {
        puVar4 = puVar1;
      }
    } while ((int)uVar3 < (int)puVar4[4]);
  }
  return;
}

