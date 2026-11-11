
bool FUN_0038c130(long param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  
  fVar11 = (float)*(undefined8 *)(param_1 + 0x78);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  fVar15 = 0.0;
  fVar7 = (float)*(undefined8 *)(param_1 + 0x98);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  fVar9 = (float)*(undefined8 *)(param_1 + 0x80);
  fVar17 = (float)*(undefined8 *)(param_1 + 0x88);
  fVar13 = fVar18 * fVar17 * fVar5 + fVar10 * fVar14 * fVar7 + fVar9 * fVar11 * fVar6 +
           -fVar5 * fVar14 * fVar11 + -fVar9 * fVar18 * fVar7 + -fVar10 * fVar6 * fVar17;
  if (fVar13 != 0.0) {
    fVar15 = 1.0 / fVar13;
  }
  fVar19 = -(fVar18 * fVar7) + fVar11 * fVar6;
  fVar16 = fVar11 * -fVar5 + fVar7 * fVar10;
  fVar13 = (-(fVar6 * fVar17) + fVar7 * fVar14) * fVar15;
  fVar14 = (-(fVar14 * fVar11) + fVar17 * fVar18) * fVar15;
  fVar18 = (fVar7 * -fVar9 + fVar17 * fVar5) * fVar15;
  fVar17 = (fVar17 * -fVar10 + fVar11 * fVar9) * fVar15;
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  fVar7 = (float)*param_2;
  fVar9 = (float)((ulong)*param_2 >> 0x20);
  fVar5 = ((-(fVar19 * fVar15) * fVar6 - fVar13 * fVar12) - fVar14 * fVar8) +
          fVar13 * fVar7 + fVar19 * fVar15 * fVar9 + fVar14 * 0.0;
  fVar6 = ((-(fVar16 * fVar15) * fVar6 - fVar18 * fVar12) - fVar17 * fVar8) +
          fVar18 * fVar7 + fVar16 * fVar15 * fVar9 + fVar17 * 0.0;
  FUN_0037d078(&local_30);
  bVar1 = true;
  bVar4 = false;
  if (local_30 <= fVar5) {
    bVar1 = false;
    bVar4 = true;
    if (!NAN(local_28) && !NAN(fVar5)) {
      bVar1 = local_28 < fVar5;
      bVar4 = false;
    }
  }
  bVar2 = false;
  bVar3 = true;
  if (bVar1 == bVar4) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fStack_24) && !NAN(fVar6)) {
      bVar2 = fStack_24 == fVar6;
      bVar3 = fVar6 <= fStack_24;
    }
  }
  if (bVar3 && !bVar2) {
    return false;
  }
  return fVar6 <= local_2c;
}

