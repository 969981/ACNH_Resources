
void FUN_0047a190(undefined8 *param_1,long param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_04865338;
  param_1[2] = param_2;
  param_1[3] = param_2 + 0x18;
  FUN_0047dc40();
  *param_1 = &PTR_FUN_04865388;
  pMVar1 = (MutexType *)(param_2 + 0x188);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_2 + 0x1b0) != 0) {
    lVar3 = (long)*(int *)(param_2 + 0x1b0) << 4;
    plVar2 = *(long **)(param_2 + 0x1a8);
    do {
      if (*plVar2 != 0) {
        nn::os::UnlockMutex(pMVar1);
        local_28 = 0;
        local_38 = 0;
        puStack_30 = &DAT_0413df78;
        FUN_004223c0(0x8f7923a4,
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkReflectPatchRegistry.cpp"
                     ,0x32b,
                     "Patches are being unloaded while a loader is still active. All loaders must be destroyed before unloading patches"
                     ,&local_38);
        return;
      }
      lVar3 = lVar3 + -0x10;
      plVar2 = plVar2 + 2;
    } while (lVar3 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

