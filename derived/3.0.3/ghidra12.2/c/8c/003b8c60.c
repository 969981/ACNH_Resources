
char * FUN_003b8c60(long param_1,char *param_2,char *param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  int iVar8;
  
  if (*param_2 == '/') {
    return param_2;
  }
  sVar4 = strlen(param_2);
  pcVar7 = (char *)(param_1 + 0x18);
  sVar5 = strlen(pcVar7);
  if (param_4 <= sVar5 + sVar4) {
    return (char *)0x0;
  }
  uVar1 = param_4;
  if (sVar5 + 1 < param_4) {
    uVar1 = sVar5 + 1;
  }
  iVar8 = (int)uVar1;
  pcVar3 = param_3;
  if (0 < iVar8) {
    for (; (iVar8 = iVar8 + -1, iVar8 != 0 && (*pcVar7 != '\0')); pcVar7 = pcVar7 + 1) {
      *pcVar3 = *pcVar7;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar3 = '\0';
  }
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  sVar6 = strlen(param_3);
  sVar5 = ~sVar6 + param_4;
  if (sVar6 + sVar4 + 1 < param_4) {
    sVar5 = sVar4 + 1;
  }
  pcVar7 = strncat(param_3,param_2,sVar5);
  param_3[param_4 - 1] = '\0';
  return pcVar7;
}

