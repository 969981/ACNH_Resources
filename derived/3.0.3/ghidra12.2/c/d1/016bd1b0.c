
void FUN_016bd1b0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_049bbfd0;
  if (DAT_0523ade8 == param_1) {
    DAT_0523ade8 = (undefined8 *)0x0;
    iVar2 = *(int *)(DAT_0523adf0 + 0xa0);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        lVar4 = *(long *)(*(long *)(DAT_0523adf0 + 0xa8) + lVar3 * 8);
        if (*(char *)(lVar4 + 2) != '\0') {
          *(undefined1 *)(lVar4 + 2) = 0;
          iVar2 = *(int *)(DAT_0523adf0 + 0xa0);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
    if (*(char *)(DAT_0523adf0 + 0x12) != '\0') {
      *(undefined1 *)(DAT_0523adf0 + 0x12) = 0;
    }
    DAT_0523adf0 = 0;
  }
  lVar3 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      return;
    }
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

