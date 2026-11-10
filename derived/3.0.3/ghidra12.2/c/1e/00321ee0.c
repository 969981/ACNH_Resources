
void FUN_00321ee0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    do {
      if (lVar2 == param_2) goto LAB_00321f40;
      lVar2 = *(long *)(lVar2 + 0x90);
    } while (lVar2 != 0);
    if (lVar1 != 0) {
      *(long *)(*(long *)(param_1 + 0x30) + 0x90) = param_2;
      goto LAB_00321f38;
    }
  }
  *(long *)(param_1 + 0x28) = param_2;
LAB_00321f38:
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_2 + 0x90) = 0;
LAB_00321f40:
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return;
}

