
void FUN_003b8d80(long param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  sVar2 = strlen(param_2);
  iVar3 = (int)(sVar2 + 1);
  pcVar4 = param_2;
  if (0 < iVar3) {
    pcVar6 = (char *)(param_1 + 0x18);
    if (0x27e < iVar3) {
      iVar3 = 0x27f;
    }
    iVar3 = iVar3 + -1;
    if (iVar3 != 0) {
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar4;
        pcVar6 = pcVar5;
        if (cVar1 == '\0') break;
        pcVar4 = pcVar4 + 1;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar5 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar6;
      } while (iVar3 != 0);
    }
    *pcVar6 = '\0';
  }
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (param_2[sVar2 - 1] != '/') {
    *(undefined1 *)(param_1 + sVar2 + 0x18) = 0x2f;
    sVar2 = sVar2 + 1;
  }
  *(undefined1 *)(param_1 + sVar2 + 0x18) = 0;
  return;
}

