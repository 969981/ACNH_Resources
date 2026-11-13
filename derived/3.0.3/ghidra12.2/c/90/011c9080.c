
bool FUN_011c9080(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x46788);
  if (iVar6 == 0) {
    return false;
  }
  iVar5 = *(int *)(param_1 + 0x46784);
  do {
    iVar6 = iVar6 + -1;
    iVar2 = 0;
    if (*(int *)(param_1 + 0x46780) <= iVar5) {
      iVar2 = *(int *)(param_1 + 0x46780);
    }
    lVar1 = *(long *)(param_1 + 0x46778) + (long)(iVar5 - iVar2) * 0x10;
    bVar3 = *(int *)(lVar1 + 8) == *(int *)(param_2 + 8);
    bVar4 = *(int *)(lVar1 + 0xc) == *(int *)(param_2 + 0xc);
  } while ((!bVar3 || !bVar4) && (iVar5 = iVar5 + 1, iVar6 != 0));
  return bVar3 && bVar4;
}

