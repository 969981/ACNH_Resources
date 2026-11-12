
void FUN_006d4cf4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint in_w5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  FUN_038e1f88();
  puVar4 = PTR_DAT_04bd0d40;
  *param_1 = (long)&PTR_FUN_048fa978;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = (long)(puVar4 + 0x10);
  param_1[0x22] = 0;
  puVar3 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar5 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1 + 0x21);
    param_1[0x22] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar7 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar7;
      plVar2 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x21));
      *plVar7 = (long)plVar2;
      *plVar2 = lVar6;
      plVar2[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar2;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar9 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
      }
    }
  }
  puVar1 = PTR_DAT_04bd0e58 + 0x10;
  param_1[0x21] = (long)puVar1;
  FUN_038e18e4(param_1 + 0x27);
  FUN_006915ac(param_1 + 0x2f);
  lVar5 = *(long *)puVar3;
  param_1[0x3a] = (long)(puVar4 + 0x10);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_038cb610(lVar5,param_1 + 0x3a);
    param_1[0x3b] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar7 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar7;
      plVar2 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x3a));
      *plVar7 = (long)plVar2;
      *plVar2 = lVar6;
      plVar2[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar2;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar9 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
      }
    }
  }
  param_1[0x3a] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x40) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x25,0,1);
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x3e),0,0);
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3e));
  uVar8 = 1L << ((ulong)in_w5 & 0x3f);
  *(int *)(param_1 + 0x1a) = (int)uVar8;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)param_1[0x1d],-1,uVar8);
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}

