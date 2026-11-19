
void FUN_03b6d4d8(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[5];
  *param_1 = &PTR_FUN_04b77d98;
  nn::os::LockMutex((MutexType *)(plVar2 + 0x20));
  *(undefined1 *)(plVar2 + 0x1a) = 0;
  plVar2[0x1b] = 0;
  nn::os::UnlockMutex((MutexType *)(plVar2 + 0x20));
  if ((long *)plVar2[0x19] != (long *)0x0) {
    (**(code **)(*(long *)plVar2[0x19] + 0x38))();
  }
  uVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
  if (((uVar1 & 1) != 0) && (uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2), (uVar1 & 1) != 0)) {
    plVar2[0x19] = 0;
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
    param_1[5] = 0;
  }
  return;
}

