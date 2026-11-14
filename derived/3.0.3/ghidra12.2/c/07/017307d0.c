
void FUN_017307d0(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *__dest;
  void *__src;
  long lVar5;
  undefined *local_50;
  long lStack_48;
  
  if ((int)param_1[0x18] == 0) {
    lVar5 = 0;
  }
  else {
    iVar3 = (int)param_1[0x18] + *(int *)((long)param_1 + 0xbc) + -1;
    iVar2 = 0;
    if ((int)param_1[0x17] <= iVar3) {
      iVar2 = (int)param_1[0x17];
    }
    lVar5 = param_1[0x16] + (long)(iVar3 - iVar2) * 0x38;
  }
  __dest = *(void **)(lVar5 + 8);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_017308a0;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_017308a0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_017308a0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_017308a0:
    iVar2 = (int)lVar4;
    if (*(int *)(lVar5 + 0x10) <= (int)lVar4) {
      iVar2 = *(int *)(lVar5 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  if (*(long *)(*param_1 + 0x280) != 0) {
    lStack_48 = param_2[1];
    local_50 = PTR_DAT_04bb2020 + 0x10;
    FUN_03ef3440(*(long *)(*param_1 + 0x280),&local_50);
  }
  return;
}

