
int FUN_001f4030(char *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  sVar2 = strlen(param_1);
  iVar1 = (int)sVar2;
  if (param_2 < iVar1) {
    pcVar3 = param_1 + param_2;
    do {
      if (*pcVar3 != ' ') {
        return param_2;
      }
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (iVar1 != param_2);
    param_2 = iVar1;
  }
  return param_2;
}

