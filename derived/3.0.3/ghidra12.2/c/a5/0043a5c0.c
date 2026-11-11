
undefined8 FUN_0043a5c0(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  long lVar4;
  
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  iVar1 = (int)sVar3;
  if (iVar1 <= (int)sVar2) {
    if (iVar1 < 1) {
      return 1;
    }
    lVar4 = 0;
    while (param_1[lVar4 + ((int)sVar2 - iVar1)] == param_2[lVar4]) {
      lVar4 = lVar4 + 1;
      if (iVar1 <= lVar4) {
        return 1;
      }
    }
  }
  return 0;
}

