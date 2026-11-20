
void FUN_03fffbc0(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x3b8) != 0) {
    *(int *)(param_1 + 0x3b8) = 0;
    nn::os::LockMutex((MutexType *)(param_1 + 0x340));
    nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0x3b0));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x340));
    FUN_04002c24(param_1 + 0xd8);
  }
  FUN_04000040(param_1);
  lVar4 = *(long *)(param_1 + 0x378);
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    piVar7 = (int *)(*(long *)(param_1 + 0x368) + *(long *)(param_1 + 0x370) * 0x18);
    uVar5 = *(long *)(param_1 + 0x370) + 1;
    uVar1 = 0;
    if (*(ulong *)(param_1 + 0x380) < uVar5) {
      uVar1 = ~*(ulong *)(param_1 + 0x380);
    }
    iVar2 = *piVar7;
    iVar3 = piVar7[1];
    *(ulong *)(param_1 + 0x370) = uVar1 + uVar5;
    *(long *)(param_1 + 0x378) = lVar4;
    if (iVar3 == *(int *)(param_1 + 0xd0)) {
      uVar5 = (ulong)(uint)(iVar2 - *(int *)(*(long *)(param_1 + 0x70) +
                                            *(long *)(param_1 + 0x88) * 0x20));
      if (uVar5 < *(ulong *)(param_1 + 0x10)) {
        uVar5 = *(long *)(param_1 + 0x88) + uVar5;
        uVar1 = 0;
        if (*(ulong *)(param_1 + 0x58) <= uVar5) {
          uVar1 = *(ulong *)(param_1 + 0x58);
        }
        lVar6 = *(long *)(param_1 + 0x70) + (uVar5 - uVar1) * 0x20;
      }
      else {
        lVar6 = 0;
      }
      if (*(int *)(lVar6 + 0x14) == 2) {
        *(undefined4 *)(lVar6 + 0x14) = 0;
        lVar4 = *(long *)(param_1 + 0x378);
      }
    }
  }
  return;
}

