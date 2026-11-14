
undefined8 FUN_01c77af4(long *param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  void *__dest;
  void *__src;
  size_t __n;
  long lVar3;
  
  if (*param_1 == 0) {
    cVar2 = (char)param_1[0x7e];
    goto joined_r0x01c77b4c;
  }
  lVar3 = *param_1 + 8;
  lVar1 = lVar3 + (ulong)param_2 * 0x168;
  if (3 < param_2) {
    lVar1 = lVar3;
  }
  if (*(char *)(lVar1 + 0x18) == '\0') {
    return 0;
  }
  if ((char)param_1[0x7e] == '\0') {
    memset(param_1 + 0x51,0,0x168);
    *(undefined4 *)(param_1 + 0x7a) = 3;
    *(undefined1 *)(param_1 + 0x7e) = 1;
    *(undefined4 *)((long)param_1 + 0x28c) = 3;
LAB_01c77b84:
    __dest = (void *)(**(code **)(**(long **)(*(long *)PTR_DAT_04bb47c8 + 8) + 0x30))
                               (*(long **)(*(long *)PTR_DAT_04bb47c8 + 8),0x19000,8);
    param_1[0x52] = (long)__dest;
    if (__dest == (void *)0x0) {
      cVar2 = (char)param_1[0x7e];
joined_r0x01c77b4c:
      if (cVar2 != '\0') {
        FUN_01c79754(param_1 + 0x51);
        *(undefined1 *)(param_1 + 0x7e) = 0;
      }
      if ((char)param_1[0x83] != '\0') {
        if (*(char *)((long)param_1 + 0x411) != '\0') {
          *(undefined1 *)((long)param_1 + 0x411) = 0;
        }
        *(undefined1 *)(param_1 + 0x83) = 0;
      }
      if (*(char *)((long)param_1 + 0x421) == '\0') {
        *(undefined1 *)((long)param_1 + 0x421) = 1;
      }
      *(undefined1 *)(param_1 + 0x84) = 0;
      return 1;
    }
    __src = *(void **)(lVar1 + 8);
    if (*(char *)(lVar1 + 0x18) == '\0') {
      __n = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else {
      __n = *(size_t *)(lVar1 + 0x10);
    }
  }
  else {
    __dest = (void *)param_1[0x52];
    if (__dest == (void *)0x0) goto LAB_01c77b84;
    __src = *(void **)(lVar1 + 8);
    __n = *(size_t *)(lVar1 + 0x10);
  }
  memcpy(__dest,__src,__n);
  if (*(char *)(lVar1 + 0x18) == '\0') {
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if ((char)param_1[0x7e] != '\0') goto LAB_01c77c2c;
LAB_01c77c48:
    memset(param_1 + 0x51,0,0x168);
    *(undefined4 *)(param_1 + 0x7a) = 3;
    lVar3 = *(long *)(lVar1 + 0x10);
  }
  else {
    if ((char)param_1[0x7e] == '\0') goto LAB_01c77c48;
LAB_01c77c2c:
    lVar3 = *(long *)(lVar1 + 0x10);
    if ((char)param_1[0x54] != '\0') goto LAB_01c77c6c;
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
LAB_01c77c6c:
  param_1[0x53] = lVar3;
  if (*(char *)((long)param_1 + 0x421) == '\0') {
    *(undefined1 *)((long)param_1 + 0x421) = 1;
  }
  *(undefined1 *)(param_1 + 0x84) = 1;
  return 1;
}

