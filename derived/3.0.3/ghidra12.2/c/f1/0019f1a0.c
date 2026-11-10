
void FUN_0019f1a0(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong local_38;
  
  puVar1 = PTR_DAT_04bcbd28;
  if (*PTR_DAT_04bcbd28 == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0xd0));
  }
  plVar3 = (long *)(param_1 + 0x30);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  if (*(long *)(param_1 + 0x128) == 0) {
    uVar2 = param_2;
    if (*(long *)(param_1 + 0x168) != 0) {
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x158) + 0x20);
      if (uVar4 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        if (DAT_04be21f1 == '\0') {
          FUN_0018cb8c(&local_38);
          DAT_04c589a0 = local_38;
        }
        else {
          FUN_0018c9b0(&local_38,0);
          DAT_04c589a0 = local_38;
        }
        if (DAT_04c589a0 < uVar4) {
          uVar2 = (int)uVar4 - (int)DAT_04c589a0;
        }
        else {
          uVar2 = 0;
        }
      }
      if (param_2 <= uVar2) {
        uVar2 = param_2;
      }
    }
    if (*puVar1 == '\0') {
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xd0));
    }
    FUN_0018ac70(param_1 + 0x20,plVar3,uVar2);
  }
  else if (*puVar1 == '\0') {
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xd0));
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
  return;
}

