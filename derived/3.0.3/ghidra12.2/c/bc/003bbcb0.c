
bool FUN_003bbcb0(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  uVar3 = 0;
  while (*(char *)(param_2 + uVar3) != '\0') {
    if (((char *)(param_2 + uVar3))[1] == '\0') {
      uVar3 = (ulong)((int)uVar3 + 1);
      break;
    }
    uVar3 = uVar3 + 2;
    if ((int)uVar3 == 0x40) {
      return false;
    }
  }
  if ((int)uVar3 == 0x40) {
    return false;
  }
  lVar5 = 0;
  do {
    cVar1 = *(char *)(param_2 + lVar5);
    cVar2 = *(char *)(param_1 + 0x28 + lVar5);
    if (cVar1 == '\0' || cVar1 != cVar2) break;
    iVar4 = (int)lVar5;
    lVar5 = lVar5 + 1;
  } while (iVar4 != 0x3f);
  return cVar1 == cVar2;
}

