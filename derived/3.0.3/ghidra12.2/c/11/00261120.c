
int FUN_00261120(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = -1;
  lVar2 = param_1;
  do {
    lVar2 = *(long *)(lVar2 + 8);
    iVar1 = iVar1 + 1;
  } while (lVar2 != param_1);
  return iVar1;
}

