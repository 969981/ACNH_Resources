
int FUN_03be1320(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x100) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x100) + 0x60) + 0x10);
  }
  lVar4 = *(long *)(param_1 + ((ulong)*(byte *)(param_1 + 0xd8) & 1) * 8 + 0x20);
  uVar1 = *(uint *)(lVar4 + 0x38);
  uVar3 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    plVar5 = (long *)(*(long *)(lVar4 + 0x40) + 8);
    do {
      if (*plVar5 != 0) {
        iVar2 = *(int *)(*(long *)(*plVar5 + 0x60) + 0x10) + iVar2;
      }
      plVar5 = plVar5 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return iVar2;
}

