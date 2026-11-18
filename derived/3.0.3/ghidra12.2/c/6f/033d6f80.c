
undefined8 FUN_033d6f80(long param_1)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  
  cVar4 = *DAT_056f58b0;
  if (cVar4 == '\0') {
    return 1;
  }
  pcVar1 = *(char **)(param_1 + 8);
  lVar2 = 0;
  while (pcVar1[lVar2] == cVar4) {
    cVar4 = DAT_056f58b0[lVar2 + 1];
    lVar2 = lVar2 + 1;
    if (cVar4 == '\0') {
      return 1;
    }
  }
  cVar4 = *DAT_056f6cb0;
  if (cVar4 == '\0') {
    return 2;
  }
  lVar2 = 0;
  while (pcVar1[lVar2] == cVar4) {
    cVar4 = DAT_056f6cb0[lVar2 + 1];
    lVar2 = lVar2 + 1;
    if (cVar4 == '\0') {
      return 2;
    }
  }
  if (*pcVar1 == 'O') {
    if ((pcVar1[1] != 'u') || (pcVar1[2] != 't')) goto LAB_033d705c;
  }
  else if ((*pcVar1 != 'I') || (pcVar1[1] != 'n')) {
LAB_033d705c:
    cVar4 = *DAT_056d4330;
    if (cVar4 == '\0') {
      return 4;
    }
    pcVar3 = DAT_056d4330;
    do {
      pcVar3 = pcVar3 + 1;
      if (*pcVar1 != cVar4) {
        lVar2 = FUN_03126c08(4);
        pcVar1 = *(char **)(lVar2 + 8);
        cVar4 = *pcVar1;
        if (cVar4 == '\0') {
          return 5;
        }
        pcVar3 = *(char **)(param_1 + 8);
        do {
          pcVar1 = pcVar1 + 1;
          if (*pcVar3 != cVar4) {
            return 0;
          }
          cVar4 = *pcVar1;
          pcVar3 = pcVar3 + 1;
        } while (cVar4 != '\0');
        return 5;
      }
      cVar4 = *pcVar3;
      pcVar1 = pcVar1 + 1;
    } while (cVar4 != '\0');
    return 4;
  }
  return 3;
}

