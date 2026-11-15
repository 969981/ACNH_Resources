
void FUN_021d7aa0(long param_1,long *param_2)

{
  long lVar1;
  void *__src;
  int iVar2;
  long lVar3;
  void *__dest;
  undefined4 local_34;
  
  lVar3 = *(long *)PTR_DAT_04bb4130;
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_34 = FUN_006bd550(param_2[1],0);
    lVar3 = FUN_0079e4d0(lVar3,&local_34);
    if (lVar3 != 0) {
      __dest = *(void **)(param_1 + 8);
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (void *)param_2[1];
      if (__dest == __src) {
        return;
      }
      iVar2 = 3;
      if (*(int *)(param_1 + 0x10) < 4) {
        iVar2 = *(int *)(param_1 + 0x10) + -1;
      }
      goto LAB_021d7bd4;
    }
  }
  __dest = *(void **)(param_1 + 8);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest == __src) {
    return;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar3 = 0;
  do {
    if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_021d7bbc;
    lVar1 = param_2[1] + lVar3;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_021d7bbc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar3 = lVar3 + 2;
      goto LAB_021d7bbc;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  lVar3 = 0;
LAB_021d7bbc:
  iVar2 = (int)lVar3;
  if (*(int *)(param_1 + 0x10) <= (int)lVar3) {
    iVar2 = *(int *)(param_1 + 0x10) + -1;
  }
LAB_021d7bd4:
  memcpy(__dest,__src,(long)iVar2);
  *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  return;
}

