
void FUN_0311cee0(undefined8 *param_1)

{
  void *__ptr;
  long *plVar1;
  
  if ((long *)param_1[0x20e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20e] + 8))();
    param_1[0x20e] = 0;
  }
  param_1[0x1c4] = &PTR_FUN_04b01e20;
  if (((*(byte *)(param_1 + 0x1d5) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0x1dc) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x1d2);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x1f1);
  FUN_03f2d448(param_1 + 0x1d4);
  param_1[0x185] = &PTR_FUN_04b01e20;
  if (((*(byte *)(param_1 + 0x196) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0x19d) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x193);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x1b2);
  FUN_03f2d448(param_1 + 0x195);
  param_1[0x146] = &PTR_FUN_04b01e20;
  if (((*(byte *)(param_1 + 0x157) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0x15e) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x154);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x173);
  FUN_03f2d448(param_1 + 0x156);
  param_1[0x107] = &PTR_FUN_04b01e20;
  if (((*(byte *)(param_1 + 0x118) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0x11f) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x115);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x134);
  FUN_03f2d448(param_1 + 0x117);
  param_1[200] = &PTR_FUN_04b01e20;
  if (((*(byte *)(param_1 + 0xd9) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0xe0) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0xd6);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0xf5);
  FUN_03f2d448(param_1 + 0xd8);
  param_1[0x89] = &PTR_FUN_04b01e20;
  if (((*(byte *)(param_1 + 0x9a) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0xa1) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x97);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0xb6);
  FUN_03f2d448(param_1 + 0x99);
  param_1[0x4a] = &PTR_FUN_04b01e20;
  if (((*(byte *)(param_1 + 0x5b) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar1 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0x62) * 8);
    nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x58);
    nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x77);
  FUN_03f2d448(param_1 + 0x5a);
  FUN_0386e0e8(param_1 + 0x41);
  *param_1 = &PTR_FUN_04b90648;
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x18))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x18))();
  }
  __ptr = (void *)param_1[0x3b];
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  FUN_03c5ce30(param_1);
  return;
}

