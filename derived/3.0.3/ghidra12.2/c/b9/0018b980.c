
int FUN_0018b980(long param_1,char *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  char cVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == (char *)0x0) {
    return -1;
  }
  pcVar3 = *(char **)(param_1 + 0x18);
  if (pcVar3 == (char *)0x0) {
    return -1;
  }
  if (*pcVar3 == '\0') {
    return -1;
  }
  if (*param_2 == '\0') {
    return -1;
  }
  uVar4 = 0;
  do {
    lVar6 = uVar4 + 1;
    uVar4 = uVar4 + 1;
  } while (param_2[lVar6] != '\0');
  pcVar5 = pcVar3 + param_3;
  cVar7 = *pcVar5;
  if (cVar7 == '\0' || uVar4 == 0) {
    if (cVar7 != '\0') goto LAB_0018ba3c;
  }
  else {
    lVar6 = 0;
    do {
      lVar9 = 1;
      uVar10 = uVar4;
      cVar8 = *param_2;
      do {
        if ((cVar7 != cVar8) || (uVar10 < 2)) break;
        cVar8 = param_2[lVar9];
        uVar10 = uVar10 - 1;
        cVar7 = pcVar5[lVar9];
        lVar9 = lVar9 + 1;
      } while (cVar7 != '\0');
      if (cVar7 == cVar8) goto LAB_0018ba3c;
      pcVar5 = pcVar5 + 1;
      cVar7 = *pcVar5;
    } while ((cVar7 != '\0') && (bVar2 = lVar6 != -2, lVar6 = lVar6 + 1, bVar2));
  }
  pcVar5 = (char *)0x0;
LAB_0018ba3c:
  iVar1 = (int)pcVar5 - (int)pcVar3;
  if (pcVar5 == (char *)0x0) {
    iVar1 = -1;
  }
  return iVar1;
}

