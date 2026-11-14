
bool FUN_01d4e5d0(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x380) == 0x2d) {
    return false;
  }
  if (((*(int *)(param_1 + 0x380) != 0x2b) || (*(long *)(param_1 + 0x3c8) == 0)) ||
     (uVar3 = (ulong)*(uint *)(param_1 + 0x3d8), (int)*(uint *)(param_1 + 0x3d8) < 0)) {
    return true;
  }
  plVar4 = (long *)(*(long *)(param_1 + 0x3c8) + 8);
  do {
    bVar2 = (undefined *)plVar4[-1] != PTR_LAB_04bc12b8 || *plVar4 != 0;
    bVar1 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    if ((undefined *)plVar4[-1] == PTR_LAB_04bc12b8 && *plVar4 == 0) {
      return bVar2;
    }
    plVar4 = plVar4 + 4;
  } while (bVar1);
  return bVar2;
}

