
void FUN_003b54a8(long param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  
  if ((*(long *)(param_1 + 0xa38) != 0 && *(int *)(param_1 + 0xa08) == 1) &&
      *(char *)(param_1 + 0xa20) == '\0') {
    pvVar2 = *(void **)(param_1 + 0xa28);
    uVar3 = *(ulong *)(param_1 + 0xa30);
    lVar1 = FUN_03b38a74();
    nn::os::LockMutex((MutexType *)(lVar1 + 0x960));
    uVar3 = nn::audio::ReadCircularBufferSink
                      ((CircularBufferSinkType *)(param_1 + 0xa00),pvVar2,uVar3);
    lVar1 = FUN_03b38a74();
    nn::os::UnlockMutex((MutexType *)(lVar1 + 0x960));
    if (uVar3 != 0) {
      FUN_003e459c(*(undefined8 *)(param_1 + 0xa38),pvVar2,uVar3 >> 1);
      return;
    }
  }
  return;
}

