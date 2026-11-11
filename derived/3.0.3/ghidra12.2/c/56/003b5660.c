
undefined8 FUN_003b5660(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xa60) == 1) {
    lVar1 = FUN_03b38a74();
    nn::os::LockMutex((MutexType *)(lVar1 + 0x960));
    lVar1 = FUN_03b38a74();
    uVar2 = nn::audio::ReadCircularBufferSink
                      ((CircularBufferSinkType *)(lVar1 + 0xa40),param_2,param_3);
    lVar1 = FUN_03b38a74();
    nn::os::UnlockMutex((MutexType *)(lVar1 + 0x960));
    return uVar2;
  }
  return 0;
}

