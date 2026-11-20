
void FUN_03f38de4(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined *local_60;
  char *pcStack_58;
  
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "ZstdDecompThread";
  FUN_038e1f88(param_1,&local_60,param_3,param_2,0,0x7fffffff,0x4000,0x20);
  *(undefined1 *)(param_1 + 0x21) = 0;
  *param_1 = &PTR_FUN_04ba8cf0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar3 = PTR_DAT_04bd0d40;
  puVar2 = PTR_DAT_04bb2698;
  param_1[0x28] = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x29] = 0;
  puVar4 = PTR_DAT_04bd0e58;
  lVar5 = *(long *)puVar2;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if (lVar5 == 0) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x28] = puVar4 + 0x10;
    param_1[0x31] = 0;
  }
  else {
    lVar5 = FUN_038cb610(lVar5,param_1 + 0x28);
    param_1[0x29] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar7 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar7;
      plVar1 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x28));
      *plVar7 = (long)plVar1;
      *plVar1 = lVar6;
      plVar1[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar1;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
    lVar5 = *(long *)puVar2;
    param_1[0x28] = puVar4 + 0x10;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = puVar3 + 0x10;
    param_1[0x2f] = 0;
    if (lVar5 != 0) {
      lVar5 = FUN_038cb610(lVar5,param_1 + 0x2e);
      param_1[0x2f] = lVar5;
      if (lVar5 != 0) {
        if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = lVar5 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
        }
        plVar7 = (long *)(lVar5 + 0x70);
        lVar6 = *plVar7;
        plVar1 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x2e));
        *plVar7 = (long)plVar1;
        *plVar1 = lVar6;
        plVar1[1] = (long)plVar7;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 8) = plVar1;
        }
        *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
        if (lVar8 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x2e] = puVar4 + 0x10;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x32,0,0);
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x2c),0,0);
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2c));
  return;
}

