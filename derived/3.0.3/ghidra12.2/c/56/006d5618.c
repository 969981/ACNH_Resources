
void FUN_006d5618(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 200) != 0) && (*(char *)(*(long *)(param_1 + 200) + 0xe5) != '\0')) {
    lVar1 = *(long *)(param_1 + 0xd0);
    nn::os::LockMutex((MutexType *)(lVar1 + 0x68));
    FUN_006d3a70(lVar1);
    FUN_006d3ba0(lVar1);
    nn::os::UnlockMutex((MutexType *)(lVar1 + 0x68));
    *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x88) = 0;
    FUN_006d46b0(*(undefined8 *)(param_1 + 200));
  }
  lVar1 = *(long *)(param_1 + 0xb8);
  if (lVar1 == 0) {
    return;
  }
  thunk_FUN_00691d40(lVar1 + 0x178);
  nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0x1f0));
  return;
}

