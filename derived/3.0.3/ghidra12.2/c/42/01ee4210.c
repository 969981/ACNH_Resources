
void FUN_01ee4210(long param_1)

{
  int iVar1;
  void *__src;
  long lVar2;
  void *__dest;
  
  __dest = *(void **)(param_1 + 0x8260);
  (**(code **)(DAT_0539eee8 + 0x18))(&DAT_0539eee8);
  __src = DAT_0539eef0;
  if (__dest != DAT_0539eef0) {
    (**(code **)(DAT_0539eee8 + 0x18))(&DAT_0539eee8);
    lVar2 = 0;
    do {
      if (*(char *)((long)DAT_0539eef0 + lVar2) == '\0') goto LAB_01ee42ac;
      if (*(char *)((long)DAT_0539eef0 + lVar2 + 1) == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_01ee42ac;
      }
      if (*(char *)((long)DAT_0539eef0 + lVar2 + 2) == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_01ee42ac;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    lVar2 = 0;
LAB_01ee42ac:
    iVar1 = (int)lVar2;
    if (*(int *)(param_1 + 0x8268) <= (int)lVar2) {
      iVar1 = *(int *)(param_1 + 0x8268) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  return;
}

