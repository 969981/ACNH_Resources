
void FUN_0338ac20(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04b237d0;
  uVar2 = DAT_057391c8;
  if (DAT_057391c0 == param_1) {
    DAT_057391c0 = (undefined8 *)0x0;
    FUN_0082c640(DAT_057391c8);
    FUN_0082c640(uVar2);
    DAT_057391c8 = 0;
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

