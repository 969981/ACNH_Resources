
ulong FUN_0015e58c(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *__s;
  
  sVar4 = strlen(param_2);
  uVar5 = FUN_00144b34(param_1,param_2,sVar4);
  if ((int)uVar5 != 0) {
    __s = (char *)(param_1 + sVar4);
    cVar1 = *__s;
    while ((cVar1 != '\0' && (iVar3 = FUN_00146528(), iVar3 != 0))) {
      __s = __s + 1;
      cVar1 = *__s;
    }
    pcVar6 = strchr(__s,0xd);
    if ((pcVar6 == (char *)0x0) && (pcVar6 = strchr(__s,10), pcVar6 == (char *)0x0)) {
      sVar4 = strlen(__s);
      pcVar6 = __s + sVar4;
    }
    pcVar7 = (char *)strlen(param_3);
    if (pcVar6 + -(long)__s < pcVar7) {
      uVar5 = 0;
    }
    else {
      pcVar6 = pcVar6 + ~(ulong)__s;
      do {
        iVar3 = FUN_00144b34(__s,param_3,pcVar7);
        if (iVar3 != 0) {
          return (ulong)(iVar3 != 0);
        }
        __s = __s + 1;
        bVar2 = pcVar7 <= pcVar6;
        pcVar6 = pcVar6 + -1;
        uVar5 = 0;
      } while (bVar2);
    }
  }
  return uVar5;
}

