
void FUN_038cb500(long param_1)

{
  undefined8 uVar1;
  undefined *local_40;
  char *pcStack_38;
  
  nn::os::LockMutex((MutexType *)&DAT_05ae75e0);
  DAT_05ae7530 = &DAT_05ae7538;
  nn::os::AllocateMemoryBlock(&DAT_05ae7538,param_1 + 0x1fffffU & 0xffffffffffe00000);
  DAT_05ae7528 = 0;
  DAT_05ae75b0 = *(long *)PTR_DAT_04bb29d0 / 100000;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "RootHeap";
  DAT_05ae7540 = param_1;
  uVar1 = FUN_038c6ffc(*DAT_05ae7530,DAT_05ae7530[1],&local_40,0);
  if (DAT_05ae7550 < DAT_05ae7554) {
    *(undefined8 *)(DAT_05ae7558 + (long)DAT_05ae7550 * 8) = uVar1;
    DAT_05ae7550 = DAT_05ae7550 + 1;
  }
  DAT_05ae7600 = &DAT_05ae7518;
  nn::os::UnlockMutex((MutexType *)&DAT_05ae75e0);
  return;
}

