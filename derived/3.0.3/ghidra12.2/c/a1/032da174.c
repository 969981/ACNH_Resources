
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_032da174(long param_1,long param_2)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **local_58;
  long lStack_50;
  undefined4 local_34;
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 8);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 8))();
  }
  plVar6 = *(long **)(param_2 + 0x28);
  uVar7 = 0;
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,param_1 + 0x38);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  uVar5 = *(undefined1 *)(param_2 + 0x52);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x5a) = uVar5;
  if (*(char *)(param_2 + 0x50) == '\0') {
    uVar7 = FUN_032da380(param_1,param_1 + 8);
    return uVar7;
  }
  local_58 = &PTR_LAB_04b1bce8;
  plVar6 = *(long **)(param_1 + 0xe0);
  lStack_50 = param_1;
  if ((plVar6 == (long *)0x0) ||
     ((**(code **)(*plVar6 + 8))(plVar6), &local_58 != (undefined ***)0x0)) {
    uVar7 = (*(code *)local_58[3])(&local_58,param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = uVar7;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    if (&local_58 != (undefined ***)0x0) {
      (*(code *)local_58[1])();
    }
    plVar6 = *(long **)(param_1 + 0xa8);
  }
  else {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    plVar6 = *(long **)(param_1 + 0xa8);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(param_1 + 0x30);
  uVar7 = 0;
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,param_1 + 0xb0);
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar7;
  local_34 = 0;
  if (1 < *(int *)(param_1 + 0x94) - 1U) {
    lVar8 = *DAT_0572e3e8;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x94) = 1;
    pMVar1 = (MutexType *)(lVar8 + 0x60);
    nn::os::LockMutex(pMVar1);
    iVar3 = *(int *)(lVar8 + 0x90);
    iVar4 = *(int *)(lVar8 + 0x88);
    if (iVar3 < iVar4) {
      *(int *)(lVar8 + 0x90) = iVar3 + 1;
      iVar3 = *(int *)(lVar8 + 0x8c) + iVar3;
      iVar2 = 0;
      if (iVar4 <= iVar3) {
        iVar2 = iVar4;
      }
      *(long *)(*(long *)(lVar8 + 0x80) + (long)(iVar3 - iVar2) * 8) = param_1 + 0x60;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x30));
      nn::os::UnlockMutex(pMVar1);
      *(long *)(param_1 + 0xd0) = lVar8 + 0x10;
    }
    else {
      nn::os::UnlockMutex(pMVar1);
    }
  }
  return 0;
}

