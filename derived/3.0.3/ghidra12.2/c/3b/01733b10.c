
undefined8 FUN_01733b10(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  void *__dest;
  void *__src;
  
  puVar3 = PTR_DAT_04bb2118;
  pcVar4 = (char *)(param_1 + 0x78);
  if (*pcVar4 == '\0') {
    lVar5 = 0;
  }
  else {
    pcVar4 = (char *)(param_1 + 0xf8);
    if (*pcVar4 == '\0') {
      lVar5 = 1;
    }
    else if (*(char *)(param_1 + 0x178) == '\0') {
      pcVar4 = (char *)(param_1 + 0x178);
      lVar5 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x1f8) != '\0') {
        return 0;
      }
      pcVar4 = (char *)(param_1 + 0x1f8);
      lVar5 = 3;
    }
  }
  param_1 = param_1 + lVar5 * 0x80;
  *pcVar4 = '\x01';
  __dest = *(void **)(param_1 + 8);
  *(uint *)(param_1 + 0x7c) = *(int *)(*(long *)puVar3 + 0x508) + (param_3 & 1);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_01733c1c;
      lVar1 = param_2[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01733c1c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01733c1c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01733c1c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x10) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return 1;
}

