
bool FUN_001a2260(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  char *pcVar8;
  char cVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  cVar6 = *param_2;
  if (cVar6 != '\0') {
    lVar5 = 0;
    do {
      pcVar1 = param_2 + lVar5;
      cVar9 = ':';
      if (cVar6 == ':') {
        cVar6 = pcVar1[1];
        if (cVar6 == '/') {
          cVar6 = '\0';
          if (pcVar1[2] != '\0') {
            cVar6 = pcVar1[2];
          }
        }
        cVar9 = '/';
      }
      if (cVar6 == cVar9) {
        *param_1 = param_2;
        param_1[1] = pcVar1;
        param_2 = pcVar1 + 3;
        cVar6 = *param_2;
        goto joined_r0x001a22f4;
      }
      cVar6 = pcVar1[1];
    } while ((cVar6 != '\0') && (bVar4 = lVar5 != -2, lVar5 = lVar5 + 1, bVar4));
  }
  *param_1 = 0;
  cVar6 = *param_2;
joined_r0x001a22f4:
  if (cVar6 != '\0') {
    lVar5 = 0;
    do {
      if (cVar6 == '/') {
        pcVar1 = param_2 + lVar5;
        param_1[10] = pcVar1;
        cVar6 = *param_2;
        if (cVar6 == '\0') goto LAB_001a2360;
        lVar7 = 0;
        goto LAB_001a2340;
      }
      cVar6 = param_2[lVar5 + 1];
    } while ((cVar6 != '\0') && (bVar4 = lVar5 != -2, lVar5 = lVar5 + 1, bVar4));
  }
  param_1[10] = 0;
  return false;
LAB_001a2390:
  pcVar8 = param_2 + lVar7;
  if (cVar6 == ':') goto LAB_001a23c0;
  cVar6 = pcVar8[1];
  pcVar8 = (char *)0x0;
  if ((cVar6 == '\0') || (bVar4 = lVar7 == -2, lVar7 = lVar7 + 1, bVar4)) goto LAB_001a23c0;
  goto LAB_001a2390;
LAB_001a23c0:
  pcVar3 = (char *)0x0;
  if (pcVar8 <= pcVar2) {
    pcVar3 = pcVar8;
  }
  param_1[3] = pcVar3;
  if (pcVar3 == (char *)0x0) {
    param_1[3] = pcVar2;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  }
  else {
    param_1[4] = pcVar3 + 1;
    param_1[5] = pcVar2;
    param_1[6] = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  }
  goto joined_r0x001a23e8;
  while ((cVar6 = pcVar2[1], cVar6 != '\0' && (bVar4 = lVar7 != -2, lVar7 = lVar7 + 1, bVar4))) {
LAB_001a2340:
    pcVar2 = param_2 + lVar7;
    if (cVar6 == '@') {
      param_1[2] = param_2;
      cVar6 = *param_2;
      if (cVar6 != '\0') {
        lVar7 = 0;
        goto LAB_001a2390;
      }
      pcVar8 = (char *)0x0;
      goto LAB_001a23c0;
    }
  }
LAB_001a2360:
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  pcVar2 = param_2;
joined_r0x001a23e8:
  if ((pcVar1 != pcVar2) && (cVar6 = *pcVar2, cVar6 != '\0')) {
    pcVar8 = (char *)0x1;
    do {
      if (cVar6 == ':') {
        pcVar8 = pcVar2 + (long)pcVar8;
        param_1[7] = pcVar8 + -1;
        param_1[8] = pcVar8;
        param_1[9] = pcVar1;
        return pcVar2 != pcVar8 + -1;
      }
      cVar6 = pcVar2[(long)pcVar8];
    } while ((cVar6 != '\0') &&
            (bVar4 = pcVar8 < param_2 + (lVar5 - (long)pcVar2), pcVar8 = pcVar8 + 1, bVar4));
  }
  param_1[7] = pcVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  return pcVar2 != pcVar1;
}

