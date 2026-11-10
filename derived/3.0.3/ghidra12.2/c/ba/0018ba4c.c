
int FUN_0018ba4c(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  iVar1 = -1;
  if ((param_2 != (char *)0x0) && (pcVar3 = *(char **)(param_1 + 0x18), pcVar3 != (char *)0x0)) {
    if ((*pcVar3 == '\0') || (*param_2 == '\0')) {
      iVar1 = -1;
    }
    else {
      lVar2 = FUN_00192290(pcVar3,param_2,0xffffffffffffffff);
      iVar1 = (int)lVar2 - (int)pcVar3;
      if (lVar2 == 0) {
        iVar1 = -1;
      }
    }
  }
  return iVar1;
}

