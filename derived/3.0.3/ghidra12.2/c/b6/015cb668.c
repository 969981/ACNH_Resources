
float FUN_015cb668(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  
  fVar16 = *param_2;
  uVar7 = *(uint *)(param_1 + 0xb08);
  fVar17 = param_2[2];
  iVar9 = (int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0);
  lVar14 = *(long *)(param_1 + 0xb40);
  iVar10 = (int)((float)(int)fVar17 / 10.0) - (uint)(fVar17 < 0.0);
  iVar3 = *(int *)(lVar14 + 0x10);
  iVar5 = *(int *)(lVar14 + 0x14);
  iVar4 = *(int *)(lVar14 + 0x20);
  iVar6 = *(int *)(lVar14 + 0x24);
  iVar2 = iVar9;
  if (iVar4 <= iVar9) {
    iVar2 = iVar4;
  }
  iVar1 = iVar3;
  if (iVar3 <= iVar9) {
    iVar1 = iVar2;
  }
  iVar2 = iVar10;
  if (iVar6 <= iVar10) {
    iVar2 = iVar6;
  }
  uVar11 = iVar1 + iVar3 * -2;
  iVar9 = iVar5;
  if (iVar5 <= iVar10) {
    iVar9 = iVar2;
  }
  uVar12 = iVar9 + iVar5 * -2;
  lVar15 = *(long *)(param_1 + 0xb10);
  lVar14 = (long)(int)(uVar11 + uVar12 * uVar7);
  if (*(uint *)(param_1 + 0xb0c) <= uVar12 || uVar7 <= uVar11) {
    lVar14 = 0;
  }
  if ((*(byte *)(lVar15 + lVar14 * 0x1c + 0xc) & 0xfe) != 2) {
    return 0.0;
  }
  lVar14 = lVar15 + lVar14 * 0x1c;
  iVar9 = *(int *)(lVar14 + 0x10);
  iVar10 = *(int *)(lVar14 + 0x14);
  iVar2 = iVar9;
  if (iVar4 <= iVar9) {
    iVar2 = iVar4;
  }
  iVar4 = iVar3;
  if (iVar3 <= iVar9) {
    iVar4 = iVar2;
  }
  iVar2 = iVar10;
  if (iVar6 <= iVar10) {
    iVar2 = iVar6;
  }
  uVar11 = iVar4 + iVar3 * -2;
  iVar3 = iVar5;
  if (iVar5 <= iVar10) {
    iVar3 = iVar2;
  }
  uVar12 = iVar3 + iVar5 * -2;
  lVar14 = (long)(int)(uVar11 + uVar12 * uVar7);
  if (*(uint *)(param_1 + 0xb0c) <= uVar12 || uVar7 <= uVar11) {
    lVar14 = 0;
  }
  bVar8 = *(byte *)(lVar15 + lVar14 * 0x1c + 0xd);
  uVar7 = (uint)bVar8;
  if (*(uint *)(param_1 + 0xdd0) <= (uint)bVar8) {
    uVar7 = 0;
  }
  if (3 < bVar8) {
    return 0.0;
  }
  lVar14 = *(long *)(param_1 + 0xdd8);
  switch(bVar8) {
  case 0:
    fVar17 = fVar17 + (float)iVar10 * -10.0;
    break;
  case 1:
    lVar14 = lVar14 + (ulong)uVar7 * 0x28;
    fVar16 = ((float)iVar9 * 10.0 + 10.0) - fVar16;
    fVar17 = (float)((*(int *)(lVar14 + 0x20) - *(int *)(lVar14 + 0x10)) + 1) * -5.0;
    fVar17 = fVar17 + fVar17;
    goto LAB_015cb880;
  case 2:
    fVar17 = ((float)iVar10 * 10.0 + 10.0) - fVar17;
    break;
  case 3:
    lVar14 = lVar14 + (ulong)uVar7 * 0x28;
    fVar16 = fVar16 + (float)iVar9 * -10.0;
    fVar17 = (float)((*(int *)(lVar14 + 0x20) - *(int *)(lVar14 + 0x10)) + 1) * -5.0;
    fVar17 = fVar17 + fVar17;
LAB_015cb880:
    fVar17 = fVar16 / fVar17 + 1.0;
    goto LAB_015cb88c;
  }
  lVar14 = lVar14 + (ulong)uVar7 * 0x28;
  fVar16 = (float)((*(int *)(lVar14 + 0x24) - *(int *)(lVar14 + 0x14)) + 1) * 5.0;
  fVar17 = fVar17 / (fVar16 + fVar16);
LAB_015cb88c:
  lVar14 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar14 + 0x4b8) + 0xf0))(lVar14 + 0x4b8);
  fVar16 = *pfVar13;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar14 + 0x488) + 0xf0))(lVar14 + 0x488);
  return fVar16 + fVar17 * (*pfVar13 - fVar16);
}

