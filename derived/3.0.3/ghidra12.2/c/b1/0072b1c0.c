
void FUN_0072b1c0(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  void *__src;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0xf0))(param_2);
  lVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
  __dest = *(void **)(lVar4 + 8);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  __src = (void *)plVar3[1];
  if (__dest != __src) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar5 = 0;
    do {
      if (*(char *)(plVar3[1] + lVar5) == '\0') goto LAB_0072b27c;
      lVar1 = plVar3[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0072b27c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0072b27c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0072b27c:
    iVar2 = (int)lVar5;
    if (*(int *)(lVar4 + 0x10) <= (int)lVar5) {
      iVar2 = *(int *)(lVar4 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  return;
}

