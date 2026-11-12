
void FUN_006e00c0(undefined4 *param_1,long *param_2,byte param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  void *__src;
  
  __dest = *(void **)(param_1 + 8);
  *param_1 = 4;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_006e016c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_006e016c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_006e016c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_006e016c:
    iVar2 = (int)lVar3;
    if ((int)param_1[10] <= (int)lVar3) {
      iVar2 = param_1[10] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(byte *)((long)param_1 + 0x62) = param_3 & 1;
  return;
}

