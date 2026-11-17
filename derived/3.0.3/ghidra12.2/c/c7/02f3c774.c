
void FUN_02f3c774(long *param_1)

{
  long *plVar1;
  
  if (((*(byte *)(param_1 + 0x53) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)(int)param_1[0x5a] * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x50);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x6f);
  FUN_03f2d448(param_1 + 0x52);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

