
char * FUN_00161cc8(void)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char *__dest;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  lVar5 = 0;
  ppuVar7 = &PTR_s_identity_04836798;
  ppuVar6 = &PTR_PTR_04836720;
  do {
    iVar1 = FUN_00144a90(*ppuVar7,"identity");
    if (iVar1 == 0) {
      sVar2 = strlen(*ppuVar7);
      lVar5 = lVar5 + sVar2 + 2;
    }
    ppuVar7 = (undefined **)*ppuVar6;
    ppuVar6 = ppuVar6 + 1;
  } while (ppuVar7 != (undefined **)0x0);
  if (lVar5 == 0) {
    pcVar3 = (char *)FUN_00143320("identity");
    return pcVar3;
  }
  pcVar3 = (char *)FUN_001432f0(lVar5);
  if (pcVar3 != (char *)0x0) {
    ppuVar7 = &PTR_s_identity_04836798;
    __dest = pcVar3;
    ppuVar6 = &PTR_PTR_04836720;
    do {
      iVar1 = FUN_00144a90(*ppuVar7,"identity");
      if (iVar1 == 0) {
        pcVar4 = strcpy(__dest,*ppuVar7);
        sVar2 = strlen(pcVar4);
        pcVar4 = __dest + sVar2;
        __dest = pcVar4 + 2;
        pcVar4[0] = ',';
        pcVar4[1] = ' ';
      }
      ppuVar7 = (undefined **)*ppuVar6;
      ppuVar6 = ppuVar6 + 1;
    } while (ppuVar7 != (undefined **)0x0);
    __dest[-2] = '\0';
  }
  return pcVar3;
}

