
void FUN_03463874(long param_1)

{
  long *plVar1;
  
  if (((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0x50) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0xf8);
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xf8 | 4;
    if (*(long *)(param_1 + 0x38) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_03463934;
    }
    else {
      FUN_03f45838(param_1 + 0x28);
      if (*(long *)(param_1 + 0x20) == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0xe;
        goto LAB_03463934;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x10);
    }
  }
LAB_03463934:
  FUN_03f457c4(param_1 + 0x28);
  return;
}

