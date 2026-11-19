
void FUN_03b98cb0(uint param_1,float *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((int)param_1 < 9) {
    uVar3 = 2;
  }
  else {
    FUN_03b98ea0(param_1,param_2);
    if (param_1 < 0x21) {
      uVar3 = 8;
      uVar12 = 8;
      if (param_1 != 0x20) goto LAB_03b98e24;
      goto LAB_03b98d24;
    }
    uVar7 = 8;
    uVar1 = 0x20;
    do {
      uVar3 = uVar1;
      FUN_03b99150(param_1,uVar7,param_2,param_3);
      uVar12 = (int)uVar3 * 4;
      uVar7 = uVar3;
      uVar1 = (ulong)uVar12;
    } while ((int)uVar12 < (int)param_1);
  }
  uVar12 = (uint)uVar3;
  if (param_1 != uVar12 * 4) {
LAB_03b98e24:
    if ((int)uVar3 < 1) {
      return;
    }
    lVar6 = uVar3 << 0x20;
    uVar7 = 0;
    do {
      fVar13 = param_2[uVar3 + uVar7];
      pfVar9 = param_2 + uVar7;
      uVar2 = lVar6 >> 0x1e | 4;
      fVar17 = *(float *)((long)param_2 + uVar2);
      fVar14 = *pfVar9;
      fVar19 = pfVar9[1];
      uVar1 = uVar7 + 2;
      lVar6 = lVar6 + 0x200000000;
      *pfVar9 = fVar14 + fVar13;
      pfVar9[1] = fVar19 + fVar17;
      param_2[uVar3 + uVar7] = fVar14 - fVar13;
      *(float *)((long)param_2 + uVar2) = fVar19 - fVar17;
      uVar7 = uVar1;
    } while (uVar1 < uVar3);
    return;
  }
LAB_03b98d24:
  if (0 < (int)uVar12) {
    uVar3 = (ulong)uVar12;
    uVar7 = (ulong)uVar12;
    lVar6 = uVar3 + (ulong)uVar12 * 2;
    lVar10 = 1;
    lVar4 = uVar7 << 0x20;
    lVar5 = uVar7 << 0x21;
    lVar8 = lVar6 << 0x20;
    pfVar9 = param_2;
    do {
      uVar11 = lVar4 >> 0x1e | 4;
      uVar1 = lVar5 >> 0x1e | 4;
      uVar2 = lVar8 >> 0x1e | 4;
      lVar4 = lVar4 + 0x200000000;
      fVar17 = *(float *)((long)param_2 + uVar11);
      lVar5 = lVar5 + 0x200000000;
      lVar8 = lVar8 + 0x200000000;
      fVar19 = *(float *)((long)param_2 + uVar1);
      fVar21 = *pfVar9 + pfVar9[uVar3];
      fVar13 = *pfVar9 - pfVar9[uVar3];
      fVar20 = *(float *)((long)param_2 + uVar2);
      fVar14 = pfVar9[uVar7 * 2] + pfVar9[lVar6];
      fVar15 = pfVar9[uVar7 * 2] - pfVar9[lVar6];
      fVar16 = pfVar9[1] + fVar17;
      fVar17 = pfVar9[1] - fVar17;
      fVar18 = fVar19 + fVar20;
      *pfVar9 = fVar21 + fVar14;
      pfVar9[uVar7 * 2] = fVar21 - fVar14;
      fVar19 = fVar19 - fVar20;
      pfVar9[1] = fVar16 + fVar18;
      *(float *)((long)param_2 + uVar1) = fVar16 - fVar18;
      uVar1 = lVar10 + 1;
      lVar10 = lVar10 + 2;
      pfVar9[uVar3] = fVar13 - fVar19;
      *(float *)((long)param_2 + uVar11) = fVar17 + fVar15;
      pfVar9[lVar6] = fVar13 + fVar19;
      pfVar9 = pfVar9 + 2;
      *(float *)((long)param_2 + uVar2) = fVar17 - fVar15;
    } while (uVar1 < uVar3);
  }
  return;
}

