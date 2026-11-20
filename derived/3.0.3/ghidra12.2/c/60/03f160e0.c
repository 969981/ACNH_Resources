
int * FUN_03f160e0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  
  if ((param_2 == 0) || (uVar1 = *(uint *)(param_1 + 0x1e4), uVar1 == 0)) {
    return (int *)0x0;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_2 / uVar1;
  }
  uVar3 = param_2 - uVar3 * uVar1;
  uVar4 = uVar3;
  while( true ) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x1d8) +
                     (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3));
    if (uVar2 == param_2) break;
    if (uVar2 == 0) {
      return (int *)0x0;
    }
    uVar2 = 0;
    if ((int)(uVar4 + 1) < (int)uVar1) {
      uVar2 = uVar4 + 1;
    }
    uVar4 = uVar2;
    if (uVar2 == uVar3) {
      return (int *)0x0;
    }
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x1d8) + (long)(int)uVar4 * 8 + 4);
  if (*(uint *)(param_1 + 0x1b8) <= uVar1) {
    return (int *)0x0;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x1c0) + (long)(int)uVar1 * 8);
  if (lVar7 == 0) {
    return (int *)0x0;
  }
  if (*(int **)(lVar7 + 0x18) != (int *)0x0) {
    return *(int **)(lVar7 + 0x18);
  }
  if (*(long *)(lVar7 + 8) == lVar7) {
    return (int *)0x0;
  }
  lVar8 = (long)*(int *)(lVar7 + 0x14);
  piVar9 = (int *)(*(long *)(lVar7 + 8) - lVar8);
  do {
    if (*piVar9 == 1) {
      lVar6 = *(long *)(piVar9 + 6);
      if ((((lVar6 != 0) && (piVar9[8] == *(int *)(lVar6 + 0x10))) && (*(int *)(lVar6 + 0xc) != 0))
         && ((*(int *)(lVar6 + 0xc) != 7 && (iVar5 = FUN_03b46270(), -1 < iVar5)))) {
        return piVar9;
      }
    }
    else if (*piVar9 != 0) {
      return piVar9;
    }
    piVar9 = (int *)(*(long *)((long)piVar9 + lVar8 + 8) - lVar8);
    if (piVar9 == (int *)(lVar7 - lVar8)) {
      return (int *)0x0;
    }
  } while( true );
}

