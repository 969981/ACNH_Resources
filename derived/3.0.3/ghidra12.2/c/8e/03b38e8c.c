
void FUN_03b38e8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x9e0));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x9c0));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x9a0));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x980));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x960));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8a0));
  puVar1 = PTR_DAT_04bd05a0 + 0x10;
  *(undefined **)(param_1 + 0x798) = puVar1;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x868));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x848));
  puVar2 = PTR_DAT_04bd0598 + 0x10;
  *(undefined **)(param_1 + 0x798) = puVar2;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x7a0));
  *(undefined **)(param_1 + 0x6a0) = puVar1;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x770));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x750));
  *(undefined **)(param_1 + 0x6a0) = puVar2;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x6a8));
  *(undefined **)(param_1 + 0x5a8) = puVar1;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x678));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x658));
  *(undefined **)(param_1 + 0x5a8) = puVar2;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x5b0));
  *(undefined **)(param_1 + 0x558) = puVar2;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x560));
  if (*(char *)(param_1 + 0xb8) == '\0') {
    return;
  }
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x90));
  return;
}

