
void FUN_026f5394(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x308) != 0 && *(long *)(param_1 + 0x310) != 0) {
    iVar1 = *(int *)(param_1 + 0x370);
    if (*(char *)(param_1 + 0x374) != '\0') {
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x338));
    }
    if (iVar1 == 2) {
      if ((*(long *)(param_1 + 0x308) != 0) && (*(long *)(param_1 + 0x310) != 0)) {
        FUN_038568c0();
        FUN_03856a80(*(undefined8 *)(param_1 + 0x308));
        return;
      }
    }
    else if (((iVar1 == 1) && (*(long *)(param_1 + 0x308) != 0)) &&
            (*(long *)(param_1 + 0x310) != 0)) {
      FUN_038568c0();
      FUN_038568c0(*(undefined8 *)(param_1 + 0x308));
      return;
    }
  }
  return;
}

