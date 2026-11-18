
void FUN_03352440(long param_1,uint *param_2,uint *param_3,float *param_4)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  short sVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar13 = *(float *)(param_1 + 0x134c);
  fVar14 = param_4[1];
  fVar15 = fVar13;
  if (*(int *)(param_1 + 0x1368) != 1) {
    fVar15 = 0.0;
  }
  fVar15 = *(float *)(param_1 + 0x131c) - fVar15;
  fVar16 = fVar13 * 0.5 + fVar15;
  if ((fVar14 <= fVar16) &&
     (fVar17 = fVar15 - fVar13 * ((float)*(int *)(param_1 + 0x12fc) + 0.5), fVar16 = fVar14,
     fVar14 < fVar17)) {
    fVar16 = fVar17;
  }
  uVar6 = (int)((fVar15 - fVar16) / fVar13) - (uint)(fVar15 - fVar16 < 0.0);
  *param_2 = uVar6;
  if (*(float *)(param_1 + 0x134c) <= *(float *)(param_1 + 0x1334)) {
    uVar6 = uVar6 + 1;
    *param_2 = uVar6;
  }
  piVar1 = (int *)(param_1 + 0xa98);
  uVar6 = *(int *)(param_1 + 0x12f8) + uVar6;
  uVar2 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  *param_2 = uVar2;
  if (*(int *)(param_1 + 0x1270) <= (int)uVar2) {
    FUN_03361cd0(piVar1,param_2,param_3,*(undefined4 *)(*(long *)(param_1 + 0x430) + 0xc));
    return;
  }
  if ((int)uVar6 < 1) {
    lVar9 = 0;
    piVar7 = piVar1 + uVar2;
    iVar10 = 1;
  }
  else {
    uVar8 = (ulong)(uVar2 - 1);
    piVar7 = piVar1 + uVar2;
    if (0x1f5 < uVar2) {
      piVar7 = piVar1;
    }
    if (0x1f6 < uVar2) {
      uVar8 = 0;
    }
    lVar9 = (long)piVar1[uVar8] + 1;
    iVar10 = -piVar1[uVar8];
  }
  iVar4 = *piVar7;
  uVar6 = iVar10 + iVar4;
  if (0 < (int)uVar6) {
    fVar15 = 0.0;
    uVar8 = 0;
    lVar12 = *(long *)PTR_DAT_04bc1118;
    sVar5 = 0;
    do {
      sVar3 = *(short *)(*(long *)(lVar12 + 0x468) + lVar9 * 2 + uVar8 * 2);
      sVar11 = sVar3;
      if ((sVar3 != 0) &&
         ((sVar3 == 10 ||
          ((sVar11 = 0x25cf, *(int *)(*(long *)(lVar12 + 0x20) + 0x156c) != 1 &&
           (sVar11 = sVar3, sVar3 == 10)))))) break;
      fVar13 = (float)FUN_03361770(piVar1,sVar5,sVar11);
      if (*param_4 < fVar15 + *(float *)(param_1 + 0x1318) + fVar13 * 0.5) {
        *param_3 = (uint)uVar8;
        return;
      }
      uVar8 = uVar8 + 1;
      fVar15 = fVar15 + fVar13 + *(float *)(param_1 + 0x12b8);
      sVar5 = sVar11;
    } while (uVar6 != uVar8);
  }
  if (*(short *)(**(long **)(param_1 + 0x430) + (long)iVar4 * 2) == 10) {
    *param_3 = uVar6 - 1;
  }
  else {
    *param_3 = uVar6;
  }
  return;
}

