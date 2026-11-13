
void FUN_014a2864(long param_1,float *param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  byte *pbVar14;
  long lVar15;
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
  float fVar27;
  float fVar28;
  float fVar29;
  
  fVar20 = *param_2;
  puVar1 = (uint *)(param_1 + 0x16f50);
  fVar21 = param_2[2];
  if (*(uint *)(param_1 + 0x17dc0) < *puVar1) {
    lVar15 = *(long *)(*(long *)(param_1 + 0x16f58) + (long)(int)*(uint *)(param_1 + 0x17dc0) * 8);
  }
  else {
    lVar15 = 0;
  }
  fVar24 = fVar20 + (fVar20 - *(float *)(param_1 + 0x16dfc)) * (float)*(int *)(param_1 + 0x16df8);
  fVar25 = fVar21 + (fVar21 - *(float *)(param_1 + 0x16e04)) * (float)*(int *)(param_1 + 0x16df8);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0x60) + 0xf0))();
  fVar23 = *pfVar13;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0x90) + 0xf0))();
  fVar27 = *pfVar13;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0xf0) + 0xf0))();
  fVar22 = *pfVar13;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0xc0) + 0xf0))((long *)(lVar15 + 0xc0));
  fVar26 = *pfVar13;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0x120) + 0xf0))(lVar15 + 0x120);
  fVar16 = *pfVar13;
  if (*(char *)(param_1 + 0x17dcc) != '\0') {
    pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0x300) + 0xf0))(lVar15 + 0x300);
    fVar27 = fVar27 + *pfVar13;
    pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0x330) + 0xf0))(lVar15 + 0x330);
    fVar22 = fVar22 + *pfVar13;
  }
  fVar17 = fVar24 - fVar23;
  fVar28 = fVar25 - fVar22;
  fVar29 = fVar25 + fVar26;
  iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar5 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
  iVar6 = (int)((float)(int)(fVar24 + fVar27) / 5.0) - (uint)(fVar24 + fVar27 < 0.0);
  iVar12 = iVar4;
  if (iVar6 <= iVar4) {
    iVar12 = iVar6;
  }
  if (iVar4 <= iVar6) {
    iVar4 = iVar6;
  }
  fVar17 = 0.0;
  iVar7 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
  iVar6 = iVar5;
  if (iVar7 <= iVar5) {
    iVar6 = iVar7;
  }
  if (iVar5 <= iVar7) {
    iVar5 = iVar7;
  }
  *(int *)(param_1 + 0x16d78) = iVar12;
  *(int *)(param_1 + 0x16d7c) = iVar6;
  *(int *)(param_1 + 0x16d88) = iVar4;
  *(int *)(param_1 + 0x16d8c) = iVar5;
  if (fVar28 != fVar29) {
    fVar17 = fVar16 / (fVar29 - fVar28);
  }
  *(float *)(param_1 + 0x16d90) = fVar17;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0x3c0) + 0xf0))(lVar15 + 0x3c0);
  fVar17 = *pfVar13;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0x3c0) + 0xf0))(lVar15 + 0x3c0);
  fVar18 = *pfVar13;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0x420) + 0xf0))(lVar15 + 0x420);
  fVar19 = *pfVar13;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar15 + 0x3f0) + 0xf0))(lVar15 + 0x3f0);
  fVar17 = fVar24 - (fVar23 + fVar17);
  fVar27 = fVar24 + fVar27 + fVar18;
  fVar22 = fVar25 - (fVar22 + fVar19);
  fVar23 = fVar25 + fVar26 + *pfVar13;
  iVar8 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar9 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  fVar26 = 0.0;
  iVar10 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  iVar11 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  iVar7 = iVar8;
  if (iVar10 <= iVar8) {
    iVar7 = iVar10;
  }
  if (iVar8 <= iVar10) {
    iVar8 = iVar10;
  }
  iVar10 = iVar9;
  if (iVar11 <= iVar9) {
    iVar10 = iVar11;
  }
  if (iVar9 <= iVar11) {
    iVar9 = iVar11;
  }
  *(int *)(param_1 + 0x16da8) = iVar7;
  *(int *)(param_1 + 0x16dac) = iVar10;
  *(int *)(param_1 + 0x16db8) = iVar8;
  *(int *)(param_1 + 0x16dbc) = iVar9;
  if (fVar22 != fVar23) {
    fVar26 = fVar16 / (fVar23 - fVar22);
  }
  fVar22 = 0.0;
  *(float *)(param_1 + 0x16dc0) = fVar26;
  *(int *)(param_1 + 0x16dd8) = iVar12;
  *(int *)(param_1 + 0x16ddc) = iVar6;
  *(int *)(param_1 + 0x16de8) = iVar4;
  *(int *)(param_1 + 0x16dec) = iVar5;
  if (fVar28 != fVar29) {
    fVar22 = fVar16 / (fVar29 - fVar28);
  }
  *(float *)(param_1 + 0x16df0) = fVar22;
  if (*(uint *)(param_1 + 0x17dc0) < *puVar1) {
    lVar15 = *(long *)(*(long *)(param_1 + 0x16f58) + (long)(int)*(uint *)(param_1 + 0x17dc0) * 8);
  }
  else {
    lVar15 = 0;
  }
  pbVar14 = (byte *)(**(code **)(*(long *)(lVar15 + 0x600) + 0xf0))(lVar15 + 0x600);
  bVar2 = *pbVar14;
  if (*(uint *)(param_1 + 0x17dc0) < *puVar1) {
    lVar15 = *(long *)(*(long *)(param_1 + 0x16f58) + (long)(int)*(uint *)(param_1 + 0x17dc0) * 8);
  }
  else {
    lVar15 = 0;
  }
  pbVar14 = (byte *)(**(code **)(*(long *)(lVar15 + 0x630) + 0xf0))(lVar15 + 0x630);
  bVar3 = *pbVar14;
  fVar16 = ((float)(int)((int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0)) * 5.0 + 2.5) -
           ((float)bVar2 * 0.5 * 5.0 + -2.5);
  fVar22 = ((float)(int)((int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0)) * 5.0 + 2.5) -
           ((float)bVar3 * 0.5 * 5.0 + -2.5);
  iVar12 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar4 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  *(int *)(param_1 + 0x16e38) = iVar12;
  *(int *)(param_1 + 0x16e3c) = iVar4;
  *(uint *)(param_1 + 0x16e48) = (uint)bVar2 + iVar12 + -1;
  *(uint *)(param_1 + 0x16e4c) = (uint)bVar3 + iVar4 + -1;
  *(float *)(param_1 + 0x16dfc) = *param_2;
  *(float *)(param_1 + 0x16e00) = param_2[1];
  fVar16 = param_2[2];
  *(uint *)(param_1 + 0x16e10) = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  *(uint *)(param_1 + 0x16e14) = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  *(float *)(param_1 + 0x16e04) = fVar16;
  return;
}

