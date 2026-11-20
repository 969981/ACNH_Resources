
void FUN_03dd02b0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  void *__src;
  
  __dest = *(void **)(param_2 + 8);
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_03dd034c;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_03dd034c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_03dd034c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_03dd034c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_2 + 0x10) <= (int)lVar3) {
      iVar2 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  return;
}

