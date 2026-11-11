
void FUN_003c3d60(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(param_1 + 0xd0));
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x60))();
  if (iVar1 == 1) {
    nn::audio::SetSubMixDestination
              ((AudioRendererConfig *)(lVar4 + 0x18),(SubMixType *)(param_1 + 0x50),
               (FinalMixType *)(*(long *)(param_1 + 0x60) + 0x40));
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
    nn::audio::SetSubMixDestination
              ((AudioRendererConfig *)(lVar4 + 0x18),(SubMixType *)(param_1 + 0x50),
               (SubMixType *)(*(long *)(param_1 + 0x60) + 0x50));
  }
  *(undefined1 *)(param_1 + 0xf2) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd0));
  if (0 < *(int *)(param_1 + 0xa4)) {
    iVar1 = 0;
    do {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
      iVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 8))();
      if ((0 < iVar3 && 0 < iVar2) && 0 < *(int *)(param_1 + 0xa0)) {
        iVar5 = 0;
        do {
          iVar6 = 0;
          do {
            iVar7 = 0;
            do {
              FUN_003c3afc(param_1,iVar1,iVar5,iVar6,iVar7);
              iVar7 = iVar7 + 1;
            } while (iVar3 != iVar7);
            iVar6 = iVar6 + 1;
          } while (iVar6 != iVar2);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0xa0));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xa4));
  }
  return;
}

