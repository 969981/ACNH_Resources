
undefined8 FUN_038b71f0(long param_1,long *param_2)

{
  void *__src;
  uint uVar1;
  long lVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = 0;
  do {
    if (*(char *)(param_2[1] + uVar4) == '\0') goto LAB_038b726c;
    lVar3 = param_2[1] + uVar4;
    if (*(char *)(lVar3 + 1) == '\0') {
      uVar4 = uVar4 + 1;
      goto LAB_038b726c;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      uVar4 = uVar4 + 2;
      goto LAB_038b726c;
    }
    uVar4 = uVar4 + 3;
  } while (uVar4 != 0x80001);
  uVar4 = 0;
LAB_038b726c:
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((int)uVar4 < 0) {
    iVar6 = -1;
  }
  else {
    do {
      iVar6 = (int)uVar4;
      if (*(char *)(param_2[1] + (uVar4 & 0xffffffff)) == '\\') goto LAB_038b72b8;
      uVar4 = (ulong)(iVar6 - 1);
    } while (0 < iVar6);
    iVar6 = -1;
  }
LAB_038b72b8:
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = 0;
  do {
    if (*(char *)(param_2[1] + uVar4) == '\0') goto LAB_038b730c;
    lVar3 = param_2[1] + uVar4;
    if (*(char *)(lVar3 + 1) == '\0') {
      uVar4 = uVar4 + 1;
      goto LAB_038b730c;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      uVar4 = uVar4 + 2;
      goto LAB_038b730c;
    }
    uVar4 = uVar4 + 3;
  } while (uVar4 != 0x80001);
  uVar4 = 0;
LAB_038b730c:
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((int)uVar4 < 0) {
    iVar5 = -1;
  }
  else {
    do {
      iVar5 = (int)uVar4;
      if (*(char *)(param_2[1] + (uVar4 & 0xffffffff)) == '/') goto LAB_038b7358;
      uVar4 = (ulong)(iVar5 - 1);
    } while (0 < iVar5);
    iVar5 = -1;
  }
LAB_038b7358:
  if (iVar6 <= iVar5) {
    iVar6 = iVar5;
  }
  uVar1 = 0;
  if (-1 < iVar6) {
    uVar1 = iVar6 + 1;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = 0;
  do {
    if (*(char *)(param_2[1] + uVar4) == '\0') goto LAB_038b73bc;
    lVar3 = param_2[1] + uVar4;
    if (*(char *)(lVar3 + 1) == '\0') {
      uVar4 = uVar4 + 1;
      goto LAB_038b73bc;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      uVar4 = uVar4 + 2;
      goto LAB_038b73bc;
    }
    uVar4 = uVar4 + 3;
  } while (uVar4 != 0x80001);
  uVar4 = 0;
LAB_038b73bc:
  (**(code **)(*param_2 + 0x18))(param_2);
  if (-1 < (int)uVar4) {
    do {
      if (*(char *)(param_2[1] + (uVar4 & 0xffffffff)) == '.') goto LAB_038b744c;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(iVar6 - 1);
    } while (0 < iVar6);
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = 0;
  do {
    if (*(char *)(param_2[1] + uVar4) == '\0') goto LAB_038b744c;
    lVar3 = param_2[1] + uVar4;
    if (*(char *)(lVar3 + 1) == '\0') {
      uVar4 = uVar4 + 1;
      goto LAB_038b744c;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      uVar4 = uVar4 + 2;
      goto LAB_038b744c;
    }
    uVar4 = uVar4 + 3;
  } while (uVar4 != 0x80001);
  uVar4 = 0;
LAB_038b744c:
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = param_2[1];
  lVar3 = 0;
  do {
    if (*(char *)(lVar2 + lVar3) == '\0') goto LAB_038b74a0;
    if (*(char *)(lVar2 + lVar3 + 1) == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_038b74a0;
    }
    if (*(char *)(lVar2 + lVar3 + 2) == '\0') {
      lVar3 = lVar3 + 2;
      goto LAB_038b74a0;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  lVar3 = 0;
LAB_038b74a0:
  __dest = *(void **)(param_1 + 8);
  __src = *(void **)(PTR_PTR_04bb2238 + 8);
  if ((int)uVar1 <= (int)lVar3 && -1 < (int)uVar1) {
    __src = (void *)(lVar2 + (ulong)uVar1);
  }
  if (__dest != __src) {
    uVar1 = (int)uVar4 - uVar1;
    uVar4 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      uVar4 = 0;
      do {
        if (*(char *)((long)__src + uVar4) == '\0') goto LAB_038b74d0;
        if (*(char *)((long)__src + uVar4 + 1) == '\0') {
          uVar4 = uVar4 + 1;
          goto LAB_038b74d0;
        }
        if (*(char *)((long)__src + uVar4 + 2) == '\0') {
          uVar4 = uVar4 + 2;
          goto LAB_038b74d0;
        }
        uVar4 = uVar4 + 3;
      } while (uVar4 != 0x80001);
      uVar4 = 0;
    }
LAB_038b74d0:
    iVar6 = (int)uVar4;
    if (*(int *)(param_1 + 0x10) <= (int)uVar4) {
      iVar6 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar6);
    *(undefined1 *)((long)__dest + (long)iVar6) = 0;
  }
  return 1;
}

