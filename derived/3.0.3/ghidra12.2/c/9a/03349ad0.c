
void FUN_03349ad0(long param_1,uint *param_2,uint *param_3,float *param_4)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  float *pfVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  short sVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar16 = *(float *)(param_1 + 0x20b8);
  pfVar1 = (float *)(param_1 + 0x206c);
  fVar15 = param_4[1];
  pfVar4 = pfVar1 + (ulong)*(uint *)(param_1 + 0x20f4) * 3;
  if (2 < *(uint *)(param_1 + 0x20f4)) {
    pfVar4 = pfVar1;
  }
  fVar17 = fVar16;
  if (*(int *)(param_1 + 0x20d8) != 1) {
    fVar17 = 0.0;
  }
  fVar17 = pfVar4[1] - fVar17;
  fVar18 = fVar16 * 0.5 + fVar17;
  if ((fVar15 <= fVar18) &&
     (fVar19 = fVar17 - fVar16 * ((float)*(int *)(param_1 + 0x205c) + 0.5), fVar18 = fVar15,
     fVar15 < fVar19)) {
    fVar18 = fVar19;
  }
  uVar8 = (int)((fVar17 - fVar18) / fVar16) - (uint)(fVar17 - fVar18 < 0.0);
  *param_2 = uVar8;
  if (*(float *)(param_1 + 0x20b8) <= *(float *)(param_1 + 0x20a0)) {
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
  }
  uVar8 = *(int *)(param_1 + 0x2058) + uVar8;
  uVar3 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  piVar2 = (int *)(param_1 + 0x17f8);
  *param_2 = uVar3;
  if (*(int *)(param_1 + 0x1fd0) <= (int)uVar3) {
    FUN_03361cd0(piVar2,param_2,param_3,*(undefined4 *)(*(long *)(param_1 + 0x4e0) + 0xc));
    return;
  }
  if ((int)uVar8 < 1) {
    lVar11 = 0;
    piVar9 = piVar2 + uVar3;
    iVar12 = 1;
  }
  else {
    uVar10 = (ulong)(uVar3 - 1);
    piVar9 = piVar2 + uVar3;
    if (0x1f5 < uVar3) {
      piVar9 = piVar2;
    }
    if (0x1f6 < uVar3) {
      uVar10 = 0;
    }
    lVar11 = (long)piVar2[uVar10] + 1;
    iVar12 = -piVar2[uVar10];
  }
  iVar6 = *piVar9;
  uVar8 = iVar12 + iVar6;
  if (0 < (int)uVar8) {
    fVar15 = 0.0;
    uVar10 = 0;
    lVar13 = *(long *)PTR_DAT_04bc1118;
    sVar7 = 0;
    do {
      sVar5 = *(short *)(*(long *)(lVar13 + 0x468) + lVar11 * 2 + uVar10 * 2);
      sVar14 = sVar5;
      if ((sVar5 != 0) &&
         ((sVar5 == 10 ||
          ((sVar14 = 0x25cf, *(int *)(*(long *)(lVar13 + 0x20) + 0x156c) != 1 &&
           (sVar14 = sVar5, sVar5 == 10)))))) break;
      fVar16 = (float)FUN_03361770(piVar2,sVar7,sVar14);
      pfVar4 = pfVar1 + (ulong)*(uint *)(param_1 + 0x20f4) * 3;
      if (2 < *(uint *)(param_1 + 0x20f4)) {
        pfVar4 = pfVar1;
      }
      if (*param_4 < fVar15 + *pfVar4 + fVar16 * 0.5) {
        *param_3 = (uint)uVar10;
        return;
      }
      uVar10 = uVar10 + 1;
      fVar15 = fVar15 + fVar16 + *(float *)(param_1 + 0x2018);
      sVar7 = sVar14;
    } while (uVar8 != uVar10);
  }
  if (*(short *)(**(long **)(param_1 + 0x4e0) + (long)iVar6 * 2) == 10) {
    *param_3 = uVar8 - 1;
  }
  else {
    *param_3 = uVar8;
  }
  return;
}

