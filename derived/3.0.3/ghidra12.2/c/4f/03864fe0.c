
void FUN_03864fe0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x298) != 3) {
    return;
  }
  if (*(char *)(param_2 + 8) != '\0') {
    iVar6 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x438);
    if ((*(byte *)(param_1 + 1000) >> 1 & 1) != 0) {
      uVar3 = *(uint *)(param_1 + 0x434);
      uVar2 = 0;
      if ((int)uVar3 < iVar6) {
        uVar2 = ~uVar3;
      }
      if (iVar6 < 0) {
        uVar2 = uVar3 + 1;
      }
      iVar6 = uVar2 + iVar6;
    }
    iVar6 = *(int *)(param_1 + 0x440) - iVar6;
    uVar2 = *(int *)(param_1 + 0x444) +
            ((*(uint *)(param_1 + 0x3d0) & iVar6 >> 0x1f) + iVar6) * *(int *)(param_1 + 0x2e8);
    if (((-1 < (int)uVar2) &&
        ((int)uVar2 < (int)*(uint *)(param_1 + 0x208) && uVar2 < *(uint *)(param_1 + 0x208))) &&
       (plVar5 = *(long **)(*(long *)(param_1 + 0x210) + (ulong)uVar2 * 8), plVar5 != (long *)0x0))
    {
      (**(code **)(*plVar5 + 0x140))
                (plVar5,*(undefined1 *)(param_2 + 9),*(undefined1 *)(param_2 + 10));
    }
  }
  *(undefined1 *)(param_1 + 0x470) = *(undefined1 *)(param_2 + 0xb);
  iVar6 = *(int *)(param_2 + 0xc);
  if (iVar6 != -1) {
    iVar4 = *(int *)(param_1 + 0x2e8);
    iVar7 = iVar4 * *(int *)(param_1 + 0x430);
    if (*(uint *)(param_1 + 0x298) < 2) {
      iVar7 = 0;
    }
    if (iVar7 <= iVar6) {
      iVar1 = *(int *)(param_1 + 0x2f4) + iVar7;
      if (*(int *)(param_1 + 0x3d4) <= iVar1) {
        iVar1 = *(int *)(param_1 + 0x3d4);
      }
      iVar7 = iVar6;
      if (iVar1 <= iVar6) {
        iVar7 = iVar1 + -1;
      }
    }
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = iVar7 / iVar4;
    }
    *(int *)(param_1 + 0x440) = iVar6;
    *(int *)(param_1 + 0x444) = iVar7 - iVar6 * iVar4;
  }
  FUN_03ebb160(param_1 + 0x290,2);
  return;
}

