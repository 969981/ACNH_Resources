
void FUN_02f57088(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04ae4a48;
  lVar4 = *(long *)PTR_DAT_04bb5030;
  iVar2 = *(int *)(lVar4 + 0x108);
  iVar3 = iVar2 + -1;
  *(int *)(lVar4 + 0x108) = iVar3;
  if (iVar3 == 0 || iVar2 < 1) {
    *(undefined4 *)(lVar4 + 0x108) = 0;
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0xe8));
  }
  lVar4 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      return;
    }
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

