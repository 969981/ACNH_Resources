
void FUN_006b60d8(long *param_1)

{
  int iVar1;
  
  nn::os::SdkMutexType::Lock();
  iVar1 = *(int *)((long)param_1 + 0xc) + -1;
  *(int *)((long)param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    nn::lmem::DestroyUnitHeap(*(HeapHead **)(*param_1 + 0x98));
    *param_1 = 0;
    nn::os::SdkMutexType::Unlock();
    return;
  }
  nn::os::SdkMutexType::Unlock();
  return;
}

