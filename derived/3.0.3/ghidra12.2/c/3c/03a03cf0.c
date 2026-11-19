
void FUN_03a03cf0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  piVar1 = (int *)(param_1 + 0x4e48);
  nn::os::LockMutex((MutexType *)(param_1 + 0x56e8));
  nn::os::LockMutex((MutexType *)(param_1 + 0x4ec8));
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    lVar4 = (long)iVar2 << 3;
    plVar3 = *(long **)(param_1 + 0x4e50);
    do {
      if (*plVar3 == param_2) goto LAB_03a03d84;
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (iVar2 < *(int *)(param_1 + 0x4e4c)) {
    (*(long **)(param_1 + 0x4e50))[iVar2] = param_2;
    *piVar1 = *piVar1 + 1;
  }
LAB_03a03d84:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4ec8));
  if (*(int *)(param_1 + 0x120) != 0) {
    lVar4 = (long)*(int *)(param_1 + 0x120) << 3;
    puVar5 = *(undefined8 **)(param_1 + 0x128);
    do {
      (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,param_2);
      lVar4 = lVar4 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  plVar3 = *(long **)(param_1 + 0x5590);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x56e8));
  return;
}

