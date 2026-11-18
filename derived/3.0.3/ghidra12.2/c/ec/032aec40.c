
void FUN_032aec40(long param_1)

{
  *(undefined2 *)(param_1 + 0x494) = 0x40a;
  *(byte *)(param_1 + 0x1d0) = *(byte *)(param_1 + 0x1d0) | 8;
  *(byte *)(param_1 + 0x3a0) = *(byte *)(param_1 + 0x3a0) | 0x18;
  if (*(long *)(param_1 + 0x450) == 0) {
    *(long *)(param_1 + 0x438) = param_1;
    *(undefined1 **)(param_1 + 0x440) = &LAB_032aed40;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined ***)(param_1 + 0x430) = &PTR_LAB_04b19f58;
  }
  else {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x450) + 0x20));
    *(undefined1 **)(param_1 + 0x440) = &LAB_032aed40;
    *(long *)(param_1 + 0x438) = param_1;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined ***)(param_1 + 0x430) = &PTR_LAB_04b19f58;
    if (*(long *)(param_1 + 0x450) != 0) {
      nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x450) + 0x20));
    }
  }
  *(char **)(param_1 + 0x428) = "guiKeyInputManager::update()";
  FUN_038bbab4(*(long *)PTR_DAT_04bc8dd0 + 0x930,param_1 + 0x3d8);
  return;
}

