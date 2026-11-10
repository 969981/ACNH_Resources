
void * FUN_0015d644(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  void *__dest;
  char *__s;
  ulong uVar5;
  
  while( true ) {
    cVar1 = *param_1;
    if ((cVar1 == '\0') || (cVar1 == ':')) break;
    param_1 = param_1 + 1;
  }
  __s = param_1;
  if (cVar1 != '\0') {
    __s = param_1 + 1;
  }
  uVar5 = (ulong)(cVar1 != '\0');
  if (*__s != '\0') {
    do {
      iVar2 = FUN_00146528();
      __s = param_1 + uVar5;
      if (iVar2 == 0) goto LAB_0015d6a0;
      uVar5 = uVar5 + 1;
    } while (__s[1] != '\0');
    __s = param_1 + uVar5;
  }
LAB_0015d6a0:
  pcVar3 = strchr(__s,0xd);
  if ((pcVar3 == (char *)0x0) && (pcVar3 = strchr(__s,10), pcVar3 == (char *)0x0)) {
    sVar4 = strlen(__s);
    pcVar3 = __s + sVar4;
  }
  while ((__s < pcVar3 && (iVar2 = FUN_00146528(*pcVar3), iVar2 != 0))) {
    pcVar3 = pcVar3 + -1;
  }
  __dest = (void *)FUN_001432f0(pcVar3 + (2 - (long)__s));
  if (__dest != (void *)0x0) {
    memcpy(__dest,__s,(size_t)(pcVar3 + (1 - (long)__s)));
    *(char *)((long)__dest + (long)(pcVar3 + (1 - (long)__s))) = '\0';
  }
  return __dest;
}

