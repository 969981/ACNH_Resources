
void FUN_01bae5d0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar3 != 0))
  {
    FUN_01bb25c8(&DAT_0533a3b0,param_2);
    __cxa_guard_release(&DAT_0533a3c0);
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar5 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar5 * 4) == 0x73) goto LAB_01bae63c;
      uVar5 = uVar5 + 1;
    } while (DAT_0533a3b0 != uVar5);
  }
  uVar5 = 0;
LAB_01bae63c:
  local_50 = (undefined4)uVar5;
  FUN_01bae480(param_1,param_2,param_3,&local_50,1);
  puVar2 = PTR_DAT_04bb28f8;
  lVar6 = *(long *)PTR_DAT_04bb28f8;
  nn::os::LockMutex((MutexType *)(lVar6 + 0x29b0));
  iVar3 = *(int *)(lVar6 + 0x29ec);
  lVar7 = lVar6 + 0x29d8;
  do {
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == lVar6 + 0x29d8) {
      lVar7 = 0;
      break;
    }
  } while (*(int *)(lVar7 + -(long)iVar3 + 0x10) != *(int *)(param_1 + 8));
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x29b0));
  if ((lVar7 != 0) && (lVar7 = lVar7 + -(long)iVar3, lVar7 != 0)) {
    local_4c = 0x4000000c6;
    local_44 = param_3;
    while (plVar4 = (long *)FUN_01bc0860(lVar7,&local_4c,1), plVar4 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar7 + 0x2c) + (long)plVar4);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + -1;
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  lVar6 = *(long *)puVar2;
  nn::os::LockMutex((MutexType *)(lVar6 + 0x29b0));
  iVar3 = *(int *)(lVar6 + 0x29ec);
  lVar7 = lVar6 + 0x29d8;
  do {
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == lVar6 + 0x29d8) {
      lVar7 = 0;
      break;
    }
  } while (*(int *)(lVar7 + -(long)iVar3 + 0x10) != *(int *)(param_1 + 8));
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x29b0));
  if ((lVar7 != 0) && (lVar7 = lVar7 + -(long)iVar3, lVar7 != 0)) {
    local_4c = 0x8000000c6;
    local_44 = param_3;
    while (plVar4 = (long *)FUN_01bc0860(lVar7,&local_4c,1), plVar4 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar7 + 0x2c) + (long)plVar4);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + -1;
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  return;
}

