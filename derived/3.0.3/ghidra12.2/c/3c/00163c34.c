
void * FUN_00163c34(undefined8 param_1,char *param_2)

{
  long lVar1;
  bool bVar2;
  char *__haystack;
  char *pcVar3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  
  __haystack = (char *)FUN_00143320();
  if (__haystack == (char *)0x0) {
    return (void *)0x0;
  }
  pcVar3 = strstr(__haystack,"//");
  cVar6 = *param_2;
  pcVar5 = __haystack;
  if (pcVar3 != (char *)0x0) {
    pcVar5 = pcVar3 + 2;
  }
  if (cVar6 == '/') {
    if (param_2[1] != '/') {
      pcVar10 = strchr(pcVar5,0x2f);
      pcVar3 = strchr(pcVar5,0x3f);
      if (pcVar10 == (char *)0x0) {
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
      }
      else {
        if (pcVar10 <= pcVar3 || pcVar3 == (char *)0x0) {
          pcVar3 = pcVar10;
        }
        *pcVar3 = '\0';
      }
      goto LAB_00163de0;
    }
    param_2 = param_2 + 2;
    *pcVar5 = '\0';
    pcVar3 = (char *)FUN_00163fdc(param_2);
    bVar7 = false;
  }
  else {
    pcVar3 = strchr(pcVar5,0x3f);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      cVar6 = *param_2;
    }
    if ((cVar6 != '?') && (pcVar3 = strrchr(pcVar5,0x2f), pcVar3 != (char *)0x0)) {
      *pcVar3 = '\0';
      cVar6 = *param_2;
    }
    pcVar5 = strchr(pcVar5,0x2f);
    pcVar3 = (char *)0x0;
    if (pcVar5 != (char *)0x0) {
      pcVar3 = pcVar5 + 1;
    }
    if ((cVar6 == '.') && (param_2 = param_2 + (ulong)(param_2[1] == '/') * 2, *param_2 == '.')) {
      iVar8 = 0;
      do {
        if ((param_2[1] != '.') || (param_2[2] != '/')) break;
        param_2 = param_2 + 3;
        iVar8 = iVar8 + 1;
      } while (*param_2 == '.');
    }
    else {
      iVar8 = 0;
    }
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = pcVar5 + 1;
      if (iVar8 != 0) {
        do {
          pcVar10 = strrchr(pcVar3,0x2f);
          if (pcVar10 == (char *)0x0) {
            *pcVar3 = '\0';
            goto LAB_00163de0;
          }
          iVar8 = iVar8 + -1;
          *pcVar10 = '\0';
        } while (iVar8 != 0);
        pcVar5 = pcVar3;
      }
    }
LAB_00163de0:
    bVar7 = true;
    pcVar3 = param_2;
  }
  cVar6 = *param_2;
  if (cVar6 == '\0') {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    bVar2 = true;
    pcVar10 = param_2;
    do {
      if (pcVar10 < pcVar3) {
LAB_00163e00:
        lVar9 = lVar9 + 1;
      }
      else if (cVar6 == ' ') {
        if (!bVar2) {
          bVar2 = false;
          goto LAB_00163e00;
        }
        lVar9 = lVar9 + 3;
        bVar2 = true;
      }
      else {
        if (cVar6 == '?') {
          bVar2 = false;
        }
        uVar4 = FUN_00164068();
        lVar1 = lVar9 + 2;
        if ((uVar4 & 1) == 0) {
          lVar1 = lVar9;
        }
        lVar9 = lVar1 + 1;
      }
      pcVar10 = pcVar10 + 1;
      cVar6 = *pcVar10;
    } while (cVar6 != '\0');
  }
  __n = strlen(__haystack);
  __dest = (void *)FUN_001432f0(lVar9 + __n + 1 + 1);
  if (__dest == (void *)0x0) goto LAB_00163f60;
  memcpy(__dest,__haystack,__n);
  cVar6 = *param_2;
  if (cVar6 != '/') {
    if (pcVar5 == (char *)0x0) {
      if (cVar6 != '?') goto LAB_00163ea8;
    }
    else if ((cVar6 != '?') && (*pcVar5 != '\0')) {
LAB_00163ea8:
      *(undefined1 *)((long)__dest + __n) = 0x2f;
      __n = __n + 1;
    }
  }
  pcVar5 = (char *)((long)__dest + __n);
  pcVar3 = param_2;
  if (!bVar7) {
    pcVar3 = (char *)FUN_00163fdc(param_2);
  }
  cVar6 = *param_2;
  if (cVar6 != '\0') {
    bVar7 = true;
    pcVar10 = pcVar5;
    do {
      if (param_2 < pcVar3) {
        pcVar5 = pcVar10 + 1;
        *pcVar10 = cVar6;
      }
      else if (cVar6 == ' ') {
        if (bVar7) {
          pcVar10[0] = '%';
          pcVar10[1] = '2';
          bVar7 = true;
          pcVar10[2] = '0';
          goto LAB_00163f3c;
        }
        bVar7 = false;
        pcVar5 = pcVar10 + 1;
        *pcVar10 = '+';
      }
      else {
        if (cVar6 == '?') {
          bVar7 = false;
        }
        uVar4 = FUN_00164068();
        if ((uVar4 & 1) == 0) {
          pcVar5 = pcVar10 + 1;
          *pcVar10 = *param_2;
        }
        else {
          FUN_001460b8(pcVar10,4,"%%%02x");
LAB_00163f3c:
          pcVar5 = pcVar10 + 3;
        }
      }
      param_2 = param_2 + 1;
      cVar6 = *param_2;
      pcVar10 = pcVar5;
    } while (cVar6 != '\0');
  }
  *pcVar5 = '\0';
LAB_00163f60:
  FUN_00143300(__haystack);
  return __dest;
}

