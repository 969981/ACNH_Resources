
void FUN_02259230(long *param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  void *__src;
  
  __dest = DAT_05467d40;
  (**(code **)(*param_1 + 0x18))();
  __src = (void *)param_1[1];
  if (__dest != __src) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar3 = 0;
    do {
      if (*(char *)(param_1[1] + lVar3) == '\0') goto LAB_022592cc;
      lVar1 = param_1[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_022592cc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_022592cc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_022592cc:
    iVar2 = (int)lVar3;
    if (DAT_05467d48 <= (int)lVar3) {
      iVar2 = DAT_05467d48 + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  DAT_05467d70 = param_2;
  return;
}

