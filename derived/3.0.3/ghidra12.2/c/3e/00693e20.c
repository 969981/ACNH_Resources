
bool FUN_00693e20(long param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    cVar2 = *(char *)(param_1 + 0x102 + lVar4);
    pcVar1 = (char *)(param_2 + lVar4);
    if (cVar2 == '\0' || cVar2 != *pcVar1) break;
    iVar3 = (int)lVar4;
    lVar4 = lVar4 + 1;
  } while (iVar3 != 0xff);
  return cVar2 == *pcVar1;
}

