
void FUN_01663290(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_049ba140;
  puVar1 = PTR_DAT_04bd1408;
  param_1[0x163] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x10a] = puVar1;
  FUN_0034f82c(param_1 + 0x15b);
  FUN_0034f6d0(param_1 + 0x140);
  param_1[0xaf] = puVar1;
  param_1[0x108] = 0;
  FUN_0034f82c(param_1 + 0x100);
  FUN_0034f6d0(param_1 + 0xe5);
  param_1[0x54] = puVar1;
  param_1[0xad] = 0;
  FUN_0034f82c(param_1 + 0xa5);
  FUN_0034f6d0(param_1 + 0x8a);
  puVar1 = PTR_DAT_04bb24a8;
  param_1[0x40] = PTR_DAT_04bb24a8 + 0x10;
  FUN_038bbe20(param_1 + 0x40);
  lVar3 = param_1[0x41];
  param_1[0x40] = &PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) goto LAB_016633ac;
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x40));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[0x41] = 1;
LAB_016633ac:
  param_1[0x2d] = puVar1 + 0x10;
  FUN_038bbe20(param_1 + 0x2d);
  lVar3 = param_1[0x2e];
  param_1[0x2d] = &PTR_FUN_04b64428;
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
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x2d));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[0x2e] = 1;
  return;
}

