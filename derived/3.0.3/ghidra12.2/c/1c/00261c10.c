
void FUN_00261c10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x430);
  if (*(int *)(param_1 + 0x440) != 0 && lVar1 != 0) {
    do {
      FUN_00223704(param_1 + 0x430,lVar1);
      FUN_002236e0(param_1 + 0x448,param_1 + 0x448,lVar1 + *(int *)(param_1 + 0x45c));
      if (*(int *)(param_1 + 0x440) == 0) break;
      lVar1 = *(long *)(param_1 + 0x430);
    } while (lVar1 != 0);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8d78));
  return;
}

