
undefined8 FUN_038b6f50(long *param_1,long *param_2)

{
  void *__src;
  long lVar1;
  long lVar2;
  void *__dest;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  if ((int)param_1[2] < 1) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  else {
    *(undefined1 *)param_1[1] = 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = 0;
  do {
    if (*(char *)(param_2[1] + uVar4) == '\0') goto LAB_038b6ff0;
    lVar2 = param_2[1] + uVar4;
    if (*(char *)(lVar2 + 1) == '\0') {
      uVar4 = uVar4 + 1;
      goto LAB_038b6ff0;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      uVar4 = uVar4 + 2;
      goto LAB_038b6ff0;
    }
    uVar4 = uVar4 + 3;
  } while (uVar4 != 0x80001);
  uVar4 = 0;
LAB_038b6ff0:
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((int)uVar4 < 0) {
    iVar3 = -1;
  }
  else {
    do {
      iVar3 = (int)uVar4;
      if (*(char *)(param_2[1] + (uVar4 & 0xffffffff)) == '/') goto LAB_038b7038;
      uVar4 = (ulong)(iVar3 - 1);
    } while (0 < iVar3);
    iVar3 = -1;
  }
LAB_038b7038:
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = 0;
  do {
    if (*(char *)(param_2[1] + uVar4) == '\0') goto LAB_038b708c;
    lVar2 = param_2[1] + uVar4;
    if (*(char *)(lVar2 + 1) == '\0') {
      uVar4 = uVar4 + 1;
      goto LAB_038b708c;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      uVar4 = uVar4 + 2;
      goto LAB_038b708c;
    }
    uVar4 = uVar4 + 3;
  } while (uVar4 != 0x80001);
  uVar4 = 0;
LAB_038b708c:
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((int)uVar4 < 0) {
    iVar5 = -1;
  }
  else {
    do {
      iVar5 = (int)uVar4;
      if (*(char *)(param_2[1] + (uVar4 & 0xffffffff)) == '\\') goto LAB_038b70d8;
      uVar4 = (ulong)(iVar5 - 1);
    } while (0 < iVar5);
    iVar5 = -1;
  }
LAB_038b70d8:
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar1 = param_2[1];
  lVar2 = 0;
  do {
    if (*(char *)(lVar1 + lVar2) == '\0') goto LAB_038b713c;
    if (*(char *)(lVar1 + lVar2 + 1) == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_038b713c;
    }
    if (*(char *)(lVar1 + lVar2 + 2) == '\0') {
      lVar2 = lVar2 + 2;
      goto LAB_038b713c;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  lVar2 = 0;
LAB_038b713c:
  __dest = (void *)param_1[1];
  __src = *(void **)(PTR_PTR_04bb2238 + 8);
  if (iVar3 < (int)lVar2 && -2 < iVar3) {
    __src = (void *)(lVar1 + (ulong)(iVar3 + 1));
  }
  if (__dest != __src) {
    lVar2 = 0;
    do {
      if (*(char *)((long)__src + lVar2) == '\0') goto LAB_038b71ac;
      if (*(char *)((long)__src + lVar2 + 1) == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_038b71ac;
      }
      if (*(char *)((long)__src + lVar2 + 2) == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_038b71ac;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    lVar2 = 0;
LAB_038b71ac:
    iVar3 = (int)lVar2;
    if ((int)param_1[2] <= (int)lVar2) {
      iVar3 = (int)param_1[2] + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  return 1;
}

