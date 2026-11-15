
void FUN_01ed8df0(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *__dest;
  void *__src;
  
  lVar3 = param_1 + 0xa0 + (ulong)param_2 * 0x38;
  if (1 < param_2) {
    lVar3 = param_1 + 0xa0;
  }
  __dest = *(void **)(lVar3 + 8);
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar4 = 0;
    do {
      if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_01ed8e9c;
      lVar1 = param_3[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01ed8e9c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01ed8e9c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01ed8e9c:
    iVar2 = (int)lVar4;
    if (*(int *)(lVar3 + 0x10) <= (int)lVar4) {
      iVar2 = *(int *)(lVar3 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  return;
}

