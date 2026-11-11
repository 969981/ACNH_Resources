
void FUN_003c366c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0xf0) != '\0') {
    uVar1 = FUN_03b38a74();
    FUN_003b68b0(uVar1,param_1);
    *(undefined1 *)(param_1 + 0xf0) = 0;
    lVar2 = FUN_03b38a74();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
    lVar2 = FUN_03b38a74();
    nn::audio::ReleaseSubMix((AudioRendererConfig *)(lVar2 + 0x18),(SubMixType *)(param_1 + 0x50));
    lVar2 = FUN_03b38a74();
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,0xffffffff);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_003c4820(param_1);
  return;
}

