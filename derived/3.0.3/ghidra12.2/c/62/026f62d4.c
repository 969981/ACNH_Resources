
void FUN_026f62d4(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_02701110();
  if ((((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) &&
      (*pcVar2 = *pcVar2 + -1, *(long *)(param_1 + 0x308) != 0)) &&
     (*(long *)(param_1 + 0x310) != 0)) {
    iVar1 = *(int *)(param_1 + 0x358);
    if (*(char *)(param_1 + 0x35c) != '\0') {
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

