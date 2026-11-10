
int FUN_002926a0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == param_1 + 8) {
    return 0;
  }
  iVar2 = 0;
  do {
    piVar1 = (int *)(lVar3 + 0x28);
    lVar3 = *(long *)(lVar3 + 8);
    if (*piVar1 == param_2) {
      iVar2 = iVar2 + 1;
    }
  } while (lVar3 != param_1 + 8);
  return iVar2;
}

