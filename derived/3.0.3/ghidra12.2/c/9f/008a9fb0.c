
int FUN_008a9fb0(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  void *__dest;
  void *__src;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_3 & 0xffffffff;
  __dest = *(void **)(param_1 + 8);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest == __src) {
    iVar2 = 0;
  }
  else {
    if ((int)param_3 < 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar3 = 0;
      do {
        if (*(char *)(param_2[1] + uVar3) == '\0') goto LAB_008a9ff4;
        lVar1 = param_2[1] + uVar3;
        if (*(char *)(lVar1 + 1) == '\0') {
          uVar3 = uVar3 + 1;
          goto LAB_008a9ff4;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          uVar3 = uVar3 + 2;
          goto LAB_008a9ff4;
        }
        uVar3 = uVar3 + 3;
      } while (uVar3 != 0x80001);
      uVar3 = 0;
    }
LAB_008a9ff4:
    iVar2 = (int)uVar3;
    if (*(int *)(param_1 + 0x10) <= (int)uVar3) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  return iVar2;
}

