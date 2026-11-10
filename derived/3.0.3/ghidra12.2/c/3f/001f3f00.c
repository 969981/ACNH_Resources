
long FUN_001f3f00(char *param_1,char *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  
  if ((((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_1 == '\0')) ||
     (*param_2 == '\0')) {
    return -1;
  }
  uVar3 = 0;
  do {
    lVar2 = uVar3 + 1;
    uVar3 = uVar3 + 1;
  } while (param_2[lVar2] != '\0');
  pcVar4 = param_1 + param_3;
  cVar5 = *pcVar4;
  if (cVar5 == '\0' || uVar3 == 0) {
    if (cVar5 != '\0') {
LAB_001f3f50:
      lVar2 = (long)pcVar4 - (long)param_1;
      if (pcVar4 == (char *)0x0) {
        lVar2 = -1;
      }
      return lVar2;
    }
  }
  else {
    lVar2 = 0;
    do {
      lVar7 = 1;
      uVar8 = uVar3;
      cVar6 = *param_2;
      do {
        if ((cVar5 != cVar6) || (uVar8 < 2)) break;
        cVar6 = param_2[lVar7];
        uVar8 = uVar8 - 1;
        cVar5 = pcVar4[lVar7];
        lVar7 = lVar7 + 1;
      } while (cVar5 != '\0');
      if (cVar5 == cVar6) goto LAB_001f3f50;
      pcVar4 = pcVar4 + 1;
      cVar5 = *pcVar4;
    } while ((cVar5 != '\0') && (bVar1 = lVar2 != -2, lVar2 = lVar2 + 1, bVar1));
  }
  return -1;
}

