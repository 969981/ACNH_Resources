
int FUN_0026bc60(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) == 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa4);
    if ((iVar2 != 1) && (iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 0x158), iVar1 != 0)) {
      if (iVar1 == 2) {
        return 4;
      }
      iVar2 = 10;
      if (iVar1 != 3) {
        iVar2 = 5;
      }
      return iVar2;
    }
  }
  return iVar2;
}

