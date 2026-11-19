
undefined8 FUN_038b6c10(long *param_1,long *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *__src;
  void *__dest;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((int)param_1[2] < 1) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  else {
    *(undefined1 *)param_1[1] = 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = 0;
  do {
    if (*(char *)(param_2[1] + uVar7) == '\0') goto LAB_038b6cb0;
    lVar5 = param_2[1] + uVar7;
    if (*(char *)(lVar5 + 1) == '\0') {
      uVar7 = uVar7 + 1;
      goto LAB_038b6cb0;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      uVar7 = uVar7 + 2;
      goto LAB_038b6cb0;
    }
    uVar7 = uVar7 + 3;
  } while (uVar7 != 0x80001);
  uVar7 = 0;
LAB_038b6cb0:
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((int)uVar7 < 0) {
    return 0;
  }
  uVar7 = uVar7 & 0xffffffff;
  while (uVar8 = uVar7 & 0xffffffff, *(char *)(param_2[1] + uVar8) != '.') {
    uVar7 = uVar7 - 1;
    if ((int)uVar7 + 1 < 1) {
      return 0;
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar2 = PTR_PTR_04bb2238;
  lVar3 = param_2[1];
  lVar5 = 0;
  do {
    if (*(char *)(lVar3 + lVar5) == '\0') goto LAB_038b6d4c;
    if (*(char *)(lVar3 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_038b6d4c;
    }
    if (*(char *)(lVar3 + lVar5 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_038b6d4c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_038b6d4c:
  iVar6 = (int)uVar7;
  pcVar1 = *(char **)(PTR_PTR_04bb2238 + 8);
  if (iVar6 <= (int)lVar5 && -1 < iVar6) {
    pcVar1 = (char *)(lVar3 + uVar8);
  }
  if (*pcVar1 != '\0') {
    if (*pcVar1 == '/') {
      return 0;
    }
    lVar5 = 0;
    do {
      if (lVar5 == 0x80000) break;
      lVar3 = lVar5 + 1;
      if (pcVar1[lVar3] == '/') {
        return 0;
      }
      lVar5 = lVar5 + 1;
    } while (pcVar1[lVar3] != '\0');
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar3 = param_2[1];
  lVar5 = 0;
  do {
    if (*(char *)(lVar3 + lVar5) == '\0') goto LAB_038b6df0;
    if (*(char *)(lVar3 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_038b6df0;
    }
    if (*(char *)(lVar3 + lVar5 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_038b6df0;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_038b6df0:
  pcVar1 = *(char **)(puVar2 + 8);
  if (iVar6 <= (int)lVar5 && -1 < iVar6) {
    pcVar1 = (char *)(lVar3 + uVar8);
  }
  if (*pcVar1 != '\0') {
    if (*pcVar1 != '\\') {
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        if ((uVar4 == 0x80000) || (pcVar1[uVar4 + 1] == '\0')) goto LAB_038b6e5c;
        uVar8 = uVar4 + 1;
      } while (pcVar1[uVar4 + 1] != '\\');
      if (0x7ffff < uVar4) goto LAB_038b6e5c;
    }
    return 0;
  }
LAB_038b6e5c:
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar3 = param_2[1];
  lVar5 = 0;
  do {
    if (*(char *)(lVar3 + lVar5) == '\0') goto LAB_038b6eb0;
    if (*(char *)(lVar3 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_038b6eb0;
    }
    if (*(char *)(lVar3 + lVar5 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_038b6eb0;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_038b6eb0:
  __dest = (void *)param_1[1];
  __src = *(void **)(puVar2 + 8);
  if (iVar6 < (int)lVar5 && -2 < iVar6) {
    __src = (void *)(lVar3 + uVar7 + 1);
  }
  if (__dest != __src) {
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_038b6f1c;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_038b6f1c;
      }
      if (*(char *)((long)__src + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_038b6f1c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_038b6f1c:
    iVar6 = (int)lVar5;
    if ((int)param_1[2] <= (int)lVar5) {
      iVar6 = (int)param_1[2] + -1;
    }
    memcpy(__dest,__src,(long)iVar6);
    *(undefined1 *)((long)__dest + (long)iVar6) = 0;
  }
  return 1;
}

