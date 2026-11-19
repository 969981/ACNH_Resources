
float FUN_03acfde0(long param_1,float *param_2)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar2 = (uint *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x48) * 6;
  if (1 < *(uint *)(param_1 + 0x48)) {
    puVar2 = (uint *)(param_1 + 0x18);
  }
  if ((int)puVar2[4] < 1) {
    fVar9 = -3.4028235e+38;
  }
  else {
    fVar11 = *(float *)(param_1 + 0xb0);
    fVar12 = 0.0;
    fVar10 = -3.4028235e+38;
    uVar5 = 0;
    fVar9 = -3.4028235e+38;
    do {
      uVar6 = uVar5;
      if (*puVar2 <= uVar5) {
        uVar6 = 0;
      }
      puVar7 = *(uint **)(*(long *)(puVar2 + 2) + (ulong)uVar6 * 8);
      if (0 < (int)puVar7[4]) {
        uVar6 = 0;
        do {
          uVar1 = uVar6;
          if (*puVar7 <= uVar6) {
            uVar1 = 0;
          }
          pfVar8 = (float *)(*(long *)(puVar7 + 2) + (ulong)uVar1 * 0xc);
          fVar14 = param_2[0xb] +
                   param_2[9] * pfVar8[1] + *pfVar8 * param_2[8] + pfVar8[2] * param_2[10];
          fVar13 = param_2[3] + param_2[1] * pfVar8[1] + *pfVar8 * *param_2 + pfVar8[2] * param_2[2]
          ;
          fVar15 = fVar10 - fVar14;
          bVar3 = false;
          bVar4 = true;
          if (-fVar11 <= fVar15) {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar15) && !NAN(fVar11)) {
              bVar3 = fVar15 == fVar11;
              bVar4 = fVar11 <= fVar15;
            }
          }
          if (!bVar4 || bVar3) {
            fVar9 = fVar12 * fVar9;
            fVar10 = fVar12 * fVar10;
            fVar12 = fVar12 + 1.0;
            fVar9 = (1.0 / fVar12) * (fVar9 + fVar13);
            fVar10 = (1.0 / fVar12) * (fVar10 + fVar14);
          }
          else if (fVar10 < fVar14) {
            fVar12 = 1.0;
            fVar9 = fVar13;
            fVar10 = fVar14;
          }
          uVar6 = uVar6 + 1;
        } while (puVar7[4] != uVar6);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != puVar2[4]);
  }
  return fVar9;
}

