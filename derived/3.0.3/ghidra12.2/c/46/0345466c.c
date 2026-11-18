
undefined8 FUN_0345466c(float *param_1,float *param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_50 [4];
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  fVar16 = *(float *)(param_3 + 0x98);
  fVar18 = *(float *)(param_3 + 0x9c);
  fVar19 = *(float *)(param_4 + 0x98);
  fVar23 = *(float *)(param_4 + 0x9c);
  fVar17 = *(float *)(param_3 + 0xa0);
  fVar15 = *(float *)(param_3 + 0xa4);
  fVar22 = fVar16;
  if (fVar16 <= fVar19) {
    fVar22 = fVar19;
  }
  fVar20 = *(float *)(param_4 + 0xa0);
  fVar24 = *(float *)(param_4 + 0xa4);
  fVar21 = fVar18;
  if (fVar18 <= fVar23) {
    fVar21 = fVar23;
  }
  fVar25 = fVar17;
  if (fVar20 <= fVar17) {
    fVar25 = fVar20;
  }
  fVar26 = fVar15;
  if (fVar24 <= fVar15) {
    fVar26 = fVar24;
  }
  bVar7 = false;
  bVar9 = false;
  if (fVar22 < fVar25) {
    bVar7 = false;
    bVar9 = true;
    if (!NAN(fVar26) && !NAN(fVar21)) {
      bVar7 = fVar26 == fVar21;
      bVar9 = fVar21 <= fVar26;
    }
  }
  bVar6 = false;
  bVar8 = false;
  bVar10 = false;
  if (bVar9 && !bVar7) {
    bVar6 = false;
    bVar8 = false;
    bVar10 = true;
    if (!NAN(fVar22) && !NAN(fVar25)) {
      bVar6 = fVar22 < fVar25;
      bVar8 = fVar22 == fVar25;
      bVar10 = false;
    }
  }
  bVar7 = false;
  bVar9 = false;
  bVar11 = false;
  if (bVar8 || bVar6 != bVar10) {
    bVar7 = false;
    bVar9 = false;
    bVar11 = true;
    if (!NAN(fVar21) && !NAN(fVar26)) {
      bVar7 = fVar21 < fVar26;
      bVar9 = fVar21 == fVar26;
      bVar11 = false;
    }
  }
  if (!bVar9 && bVar7 == bVar11) {
    *(undefined8 *)(param_3 + 100) = 0;
    return 1;
  }
  uVar1 = *(uint *)(param_3 + 0x30);
  if (*(float *)(param_4 + 0x60) <= *(float *)(param_3 + 0x60)) {
    if ((uVar1 >> 3 & 1) != 0) goto LAB_03454728;
LAB_03454714:
    piVar12 = (int *)(param_3 + 0x54);
    fVar22 = (fVar24 - fVar18) + 2.0;
  }
  else {
    if ((uVar1 >> 2 & 1) != 0) goto LAB_03454714;
LAB_03454728:
    piVar12 = (int *)(param_3 + 0x4c);
    fVar22 = (fVar23 - fVar15) + -2.0;
  }
  if (*(float *)(param_4 + 0x5c) <= *(float *)(param_3 + 0x5c)) {
    if ((uVar1 >> 5 & 1) != 0) goto LAB_0345475c;
LAB_03454748:
    piVar13 = (int *)(param_3 + 0x50);
    fVar19 = (fVar20 - fVar16) + 2.0;
  }
  else {
    if ((uVar1 >> 4 & 1) != 0) goto LAB_03454748;
LAB_0345475c:
    piVar13 = (int *)(param_3 + 0x48);
    fVar19 = (fVar19 - fVar17) + -2.0;
  }
  if ((fVar16 + 0.0 < *param_1) || (param_1[2] < fVar17 + 0.0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  fVar15 = fVar15 + fVar22;
  iVar2 = *piVar12;
  iVar3 = *piVar13;
  if (param_1[1] <= fVar18 + fVar22) {
    fVar16 = fVar15;
    if (param_1[3] < fVar15) {
      bVar7 = true;
      fVar16 = param_1[3];
    }
    if (bVar7) goto LAB_034547d8;
    bVar5 = 1;
  }
  else {
    fVar16 = (fVar15 - (fVar18 + fVar22)) + param_1[1];
LAB_034547d8:
    bVar5 = 0;
    param_2[1] = fVar16 - fVar15;
    fVar22 = fVar22 + (fVar16 - fVar15);
  }
  local_50[2] = 0.0;
  if (fVar22 <= 0.0) {
    if ((0.0 <= fVar22) || ((*(byte *)(param_3 + 0x30) >> 2 & 1) == 0)) goto LAB_03454818;
LAB_03454820:
    bVar4 = 0;
  }
  else {
    if ((*(byte *)(param_3 + 0x30) >> 3 & 1) != 0) goto LAB_03454820;
LAB_03454818:
    bVar4 = 1;
  }
  fVar16 = fVar19 + *(float *)(param_3 + 0x98);
  fVar15 = fVar19 + *(float *)(param_3 + 0xa0);
  if (*param_1 <= fVar16) {
    fVar16 = param_1[2];
    if (fVar16 < fVar15) goto LAB_03454860;
    bVar14 = 0;
    fVar16 = fVar15;
  }
  else {
    fVar16 = *param_1 + (fVar15 - fVar16);
LAB_03454860:
    bVar14 = 1;
  }
  if ((*(float *)(param_3 + 0x9c) + 0.0 < param_1[1]) ||
     (!(bool)(*(float *)(param_3 + 0xa4) + 0.0 <= param_1[3] & (bVar14 ^ 1)))) {
    bVar7 = false;
    fVar19 = fVar19 + (fVar16 - fVar15);
    *param_2 = fVar16 - fVar15;
  }
  else {
    bVar7 = true;
  }
  local_50[1] = 0.0;
  if (fVar19 <= 0.0) {
    if ((0.0 <= fVar19) || ((*(byte *)(param_3 + 0x30) >> 4 & 1) == 0)) goto LAB_034548d8;
LAB_0345492c:
    bVar7 = false;
LAB_03454934:
    if ((!bVar7) && (!(bool)(bVar5 & bVar4))) {
      return 0;
    }
    fVar15 = 0.0;
    if ((bool)(bVar5 & bVar4)) goto LAB_03454954;
  }
  else {
    if ((*(byte *)(param_3 + 0x30) >> 5 & 1) != 0) goto LAB_0345492c;
LAB_034548d8:
    if (!(bool)(bVar5 & bVar4 & bVar7)) goto LAB_03454934;
    fVar15 = 0.0;
    if (iVar2 < iVar3) goto LAB_03454954;
    if (iVar2 <= iVar3) {
      if (iVar2 != iVar3) goto LAB_03454954;
      local_50[0] = fVar19;
      local_50[3] = fVar22;
      fVar16 = (float)FUN_034427c4(param_3,local_50 + 2);
      fVar17 = (float)FUN_034427c4(param_3,local_50);
      if (fVar16 < fVar17) goto LAB_03454954;
    }
  }
  fVar22 = 0.0;
  fVar15 = fVar19;
LAB_03454954:
  *(float *)(param_3 + 100) = fVar15;
  *(float *)(param_3 + 0x68) = fVar22;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  return 1;
}

