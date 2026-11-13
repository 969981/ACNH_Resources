
void FUN_0136cd30(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  
  piVar16 = (int *)(param_1 + 0xa0);
  piVar16[0] = -1;
  piVar16[1] = -1;
  *(undefined8 *)(param_1 + 0xd0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 200) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc0) = 0xffffffffffffffff;
  pfVar10 = (float *)FUN_0252d9bc(0);
  iVar8 = DAT_0519f18c;
  iVar7 = DAT_0519f188;
  if (pfVar10 != (float *)0x0) {
    fVar17 = *pfVar10;
    fVar18 = pfVar10[2];
    uVar12 = 0;
    iVar13 = -3;
    iVar15 = -1;
    iVar1 = DAT_0519f188 + 0xdf;
    iVar2 = DAT_0519f18c + 0xbf;
    piVar14 = piVar16;
    do {
      iVar3 = ((int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0)) + iVar15 * 0x10;
      iVar5 = iVar3 - iVar7;
      if ((iVar3 < iVar7) || (iVar1 < iVar3)) {
LAB_0136ce30:
        iVar11 = -1;
      }
      else {
        iVar3 = ((int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0)) + iVar13 * 0x10;
        iVar6 = iVar3 - iVar8;
        if (iVar3 < iVar8) goto LAB_0136ce30;
        iVar11 = -1;
        if (iVar3 <= iVar2) {
          iVar3 = iVar5 + 0xf;
          if (-1 < iVar5) {
            iVar3 = iVar5;
          }
          iVar5 = iVar6 + 0xf;
          if (-1 < iVar6) {
            iVar5 = iVar6;
          }
          iVar11 = (iVar5 >> 4) * 0xe + (iVar3 >> 4);
        }
      }
      bVar9 = 0xe < uVar12;
      uVar12 = uVar12 + 1;
      piVar4 = piVar14;
      if (bVar9) {
        piVar4 = piVar16;
      }
      *piVar4 = iVar11;
      if (iVar15 < 1) {
        iVar15 = iVar15 + 1;
      }
      else {
        iVar13 = iVar13 + 1;
        iVar15 = -1;
      }
      piVar14 = piVar14 + 1;
    } while ((iVar15 != -1) || (iVar13 != 2));
  }
  return;
}

