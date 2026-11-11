
int FUN_003b6a90(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x898);
  if (lVar2 == param_1 + 0x890) {
    return 0;
  }
  iVar1 = 0;
  do {
    lVar2 = *(long *)(lVar2 + 8);
    iVar1 = iVar1 + 1;
  } while (lVar2 != param_1 + 0x890);
  return iVar1;
}

