
void FUN_03f44508(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (*(long *)(param_1 + 0xa8) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 8);
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      if (iVar2 != 2) goto LAB_03f445b8;
    }
    lVar7 = *(long *)(param_1 + 0xa0);
    if (lVar7 != 0) {
      nn::os::LockMutex((MutexType *)(lVar7 + 0x78));
      lVar3 = lVar7 + (ulong)(~(uint)*(byte *)(lVar7 + 9) & 1) * 0x18;
      plVar4 = (long *)(lVar3 + 0xf8);
      lVar5 = *plVar4;
      plVar1 = (long *)(*(int *)(lVar3 + 0x10c) + param_1);
      *plVar4 = (long)plVar1;
      *plVar1 = lVar5;
      plVar1[1] = (long)plVar4;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x108) = *(int *)(lVar3 + 0x108) + 1;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0xb8));
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x78));
    }
  }
LAB_03f445b8:
                    /* WARNING: Could not recover jumptable at 0x03f445d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6);
  return;
}

