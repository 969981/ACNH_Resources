
int FUN_0038cfa0(char *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  
  sVar3 = strlen(param_1);
  if ((int)sVar3 < 1) {
    iVar2 = 0;
  }
  else {
    if ((sVar3 & 0xffffffff) == 1) {
      lVar4 = 0;
      iVar2 = 0;
    }
    else {
      lVar4 = 0;
      iVar2 = 0;
      do {
        pcVar1 = param_1 + lVar4;
        lVar4 = lVar4 + 2;
        if (*pcVar1 == '%') {
          iVar2 = iVar2 + 1;
        }
        if (pcVar1[1] == '%') {
          iVar2 = iVar2 + 1;
        }
      } while ((sVar3 & 0xffffffff) - (sVar3 & 1) != lVar4);
    }
    if ((sVar3 & 1) != 0) {
      if (param_1[lVar4] == '%') {
        iVar2 = iVar2 + 1;
      }
      return iVar2;
    }
  }
  return iVar2;
}

