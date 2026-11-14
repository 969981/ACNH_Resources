
void FUN_0158019c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_049ab9e8;
  lVar2 = param_1[0x48];
  param_1[0x47] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar2 != 0) {
    if (lVar2 == 1) goto LAB_01580248;
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar2 + 0x84) + 0x238);
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
  param_1[0x48] = 1;
LAB_01580248:
  FUN_038fd0e0(param_1 + 0x3c);
  FUN_038fd0e0(param_1 + 0x28);
  param_1[0x1c] = &PTR_FUN_049b4b10;
  if ((long *)param_1[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d] + 8))();
  }
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

