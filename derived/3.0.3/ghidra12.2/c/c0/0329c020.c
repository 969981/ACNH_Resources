
void FUN_0329c020(long param_1)

{
  if (*(long *)(param_1 + 0x80) == 0) {
    *(code **)(param_1 + 0x70) = FUN_0329c0b0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined ***)(param_1 + 0x60) = &PTR_LAB_04b18958;
    *(long *)(param_1 + 0x68) = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x80) + 0x20));
    *(code **)(param_1 + 0x70) = FUN_0329c0b0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined ***)(param_1 + 0x60) = &PTR_LAB_04b18958;
    *(long *)(param_1 + 0x68) = param_1;
    if (*(long *)(param_1 + 0x80) != 0) {
      nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x80) + 0x20));
    }
  }
  *(char **)(param_1 + 0x58) = "DialogBottomManager::update_()";
  FUN_038bbab4(*(long *)PTR_DAT_04bc8dd0 + 0x930,param_1 + 8);
  return;
}

