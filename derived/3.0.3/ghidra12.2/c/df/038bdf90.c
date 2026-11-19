
void FUN_038bdf90(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x48);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,0);
    if (*(long **)(param_1 + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 8))();
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x120);
  if (lVar3 != 0) {
    uVar2 = nn::os::TryLockMutex((MutexType *)(*(long *)(*(long *)(param_1 + 0x40) + 0x40) + 0x28));
    if ((uVar2 & 1) != 0) {
      FUN_038beec0(param_1,lVar3);
      nn::os::UnlockMutex((MutexType *)(*(long *)(*(long *)(param_1 + 0x40) + 0x40) + 0x28));
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  uVar2 = (ulong)DAT_05ae7550;
  if (0 < (int)DAT_05ae7550) {
    plVar1 = (long *)(param_1 + 0xe8);
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
        *plVar1 = 0;
      }
      uVar2 = uVar2 - 1;
      plVar1 = plVar1 + 1;
    } while (uVar2 != 0);
  }
  return;
}

