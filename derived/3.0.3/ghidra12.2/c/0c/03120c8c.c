
void FUN_03120c8c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b01e20;
  if (((*(byte *)(param_1 + 0x11) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0x18) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0xe);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x2d);
  FUN_03f2d448(param_1 + 0x10);
  return;
}

