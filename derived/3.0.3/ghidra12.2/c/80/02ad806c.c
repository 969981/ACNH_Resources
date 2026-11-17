
bool FUN_02ad806c(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (*(long *)(param_1 + 8) == 0) {
    return false;
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + 0x70);
  plVar3 = plVar1 + param_2;
  if (10 < param_2) {
    plVar3 = plVar1;
  }
  if ((*plVar3 != 0) && (*(char *)(*plVar3 + 0x48) != '\0')) {
    lVar8 = param_1 + 0x40;
    iVar5 = *(int *)(param_3 + 8);
    lVar2 = lVar8 + (ulong)param_2 * 0x70;
    if (10 < param_2) {
      lVar2 = lVar8;
    }
    if (((*(int *)(lVar2 + 0x10) <= iVar5 && iVar5 <= *(int *)(lVar2 + 0x20)) &&
        (iVar6 = *(int *)(param_3 + 0xc), *(int *)(lVar2 + 0x14) <= iVar6)) &&
       (iVar6 <= *(int *)(lVar2 + 0x24))) {
      lVar2 = lVar8 + (ulong)param_2 * 0x70;
      if (10 < param_2) {
        lVar2 = lVar8;
      }
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x10));
      fVar15 = (float)(iVar6 - *(int *)(lVar2 + 0x5c));
      fVar14 = (float)(iVar5 - *(int *)(lVar2 + 0x58));
      fVar12 = sinf(fVar11 * 1.4629181e-09);
      fVar11 = cosf(fVar11 * 1.4629181e-09);
      fVar13 = -(fVar12 * fVar15) + fVar14 * fVar11;
      fVar11 = fVar11 * fVar15 + fVar14 * fVar12;
      plVar1 = (long *)(*(long *)(param_1 + 8) + 0x70);
      fVar12 = 0.5;
      if (fVar13 < 0.0) {
        fVar12 = -0.5;
      }
      fVar14 = 0.5;
      if (fVar11 < 0.0) {
        fVar14 = -0.5;
      }
      plVar3 = plVar1 + param_2;
      if (10 < param_2) {
        plVar3 = plVar1;
      }
      lVar8 = *plVar3;
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x48) != '\0')) {
        uVar4 = *(uint *)(lVar8 + 0x30);
        uVar9 = (uint)(fVar13 + fVar12);
        uVar10 = (uint)(fVar11 + fVar14);
        if ((uVar9 < uVar4 && uVar10 <= *(uint *)(lVar8 + 0x34)) &&
            (uVar4 <= uVar9 || *(uint *)(lVar8 + 0x34) != uVar10)) {
          pcVar7 = (char *)(**(code **)(**(long **)(*(long *)(lVar8 + 0x90) +
                                                   (long)(int)(uVar9 + uVar4 * uVar10) * 8) + 0xf0))
                                     ();
          return *pcVar7 != '\0';
        }
      }
    }
  }
  return false;
}

