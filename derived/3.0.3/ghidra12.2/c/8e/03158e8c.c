
bool FUN_03158e8c(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = FUN_0277d7b4(lVar3);
  if (((uVar2 & 1) == 0) || (*(char *)(lVar3 + 3) != *(char *)(param_2 + 3))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(lVar3 + 4) == *(int *)(param_2 + 4);
  }
  return bVar1;
}

