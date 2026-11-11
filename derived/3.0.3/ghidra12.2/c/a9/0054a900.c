
void FUN_0054a900(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + lVar2 * 8) + 0x18) + 0xa8))
      {
        FUN_0054a960();
        iVar1 = *(int *)(param_1 + 0x48);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}

