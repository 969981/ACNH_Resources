
bool FUN_0043a700(void *param_1,size_t param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  if (param_3 == (char *)0x0) {
    bVar1 = param_2 == 0;
  }
  else {
    sVar3 = strlen(param_3);
    if (sVar3 != param_2) {
      return false;
    }
    iVar2 = memcmp(param_1,param_3,param_2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

