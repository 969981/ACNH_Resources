
void FUN_038b78e0(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    pcVar5 = *(char **)(param_1 + 8);
    if (pcVar5 == param_3) {
      return;
    }
    lVar4 = 0;
    do {
      if (param_3[lVar4] == '\0') goto LAB_038b79fc;
      if (param_3[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038b79fc;
      }
      if (param_3[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038b79fc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038b79fc:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x10) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    goto LAB_038b7a84;
  }
  if ((param_3 == (char *)0x0) || (cVar1 = *param_3, cVar1 == '\0')) {
    pcVar5 = *(char **)(param_1 + 8);
    if (pcVar5 == param_2) {
      return;
    }
    lVar4 = 0;
    do {
      if (param_2[lVar4] == '\0') goto LAB_038b7a68;
      if (param_2[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038b7a68;
      }
      if (param_2[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038b7a68;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038b7a68:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x10) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
LAB_038b7a78:
    param_3 = param_2;
LAB_038b7a84:
    memcpy(pcVar5,param_3,(long)iVar2);
    pcVar5[iVar2] = '\0';
    return;
  }
  if ((cVar1 == '\\') || (cVar1 == '/')) {
    lVar4 = 0;
    uVar3 = 0xffffffff;
    do {
      if (param_2[lVar4] == '\0') {
LAB_038b7aa8:
        uVar3 = (int)lVar4 - 1;
        break;
      }
      if (param_2[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038b7aa8;
      }
      if (param_2[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038b7aa8;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
    do {
      if (param_2[lVar4] == '\0') goto LAB_038b7aec;
      if (param_2[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038b7aec;
      }
      if (param_2[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038b7aec;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038b7aec:
    pcVar5 = "";
    if ((int)uVar3 <= (int)lVar4 && -1 < (int)uVar3) {
      pcVar5 = param_2 + uVar3;
    }
    if (((*pcVar5 == '\\') || (*pcVar5 == '/')) && (param_3[1] == '\0')) {
      pcVar5 = *(char **)(param_1 + 8);
      if (pcVar5 == param_2) {
        return;
      }
      lVar4 = 0;
      do {
        if (param_2[lVar4] == '\0') goto LAB_038b7c08;
        if (param_2[lVar4 + 1] == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_038b7c08;
        }
        if (param_2[lVar4 + 2] == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_038b7c08;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_038b7c08:
      iVar2 = (int)lVar4;
      if (*(int *)(param_1 + 0x10) <= (int)lVar4) {
        iVar2 = *(int *)(param_1 + 0x10) + -1;
      }
      goto LAB_038b7a78;
    }
  }
  else {
    lVar4 = 0;
    uVar3 = 0xffffffff;
    do {
      if (param_2[lVar4] == '\0') {
LAB_038b7b6c:
        uVar3 = (int)lVar4 - 1;
        break;
      }
      if (param_2[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038b7b6c;
      }
      if (param_2[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038b7b6c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
    do {
      if (param_2[lVar4] == '\0') goto LAB_038b7bb0;
      if (param_2[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038b7bb0;
      }
      if (param_2[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038b7bb0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038b7bb0:
    pcVar5 = PTR_DAT_04bb2120;
    if ((int)uVar3 <= (int)lVar4 && -1 < (int)uVar3) {
      pcVar5 = param_2 + uVar3;
    }
    if ((*pcVar5 != '\\') && (*pcVar5 != '/')) {
      pcVar5 = "%s/%s";
      goto LAB_038b7be4;
    }
  }
  pcVar5 = "%s%s";
LAB_038b7be4:
  FUN_038d1270(param_1,pcVar5);
  return;
}

