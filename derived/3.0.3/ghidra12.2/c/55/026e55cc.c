
void FUN_026e55cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_FUN_04a89400;
  if (DAT_055724e0 == param_1) {
    DAT_055724e0 = (long *)0x0;
    *(undefined **)(DAT_055724e8 + 0x78) = PTR_DAT_04bb2df8 + 0x10;
    if (*(char *)(DAT_055724e8 + 0x6c) != '\0') {
      *(undefined1 *)(DAT_055724e8 + 0x6c) = 0;
    }
    DAT_055724e8 = 0;
  }
  lVar2 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

