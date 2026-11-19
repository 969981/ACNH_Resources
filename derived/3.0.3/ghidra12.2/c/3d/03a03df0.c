
void FUN_03a03df0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x56e8));
  nn::os::LockMutex((MutexType *)(param_1 + 0x4ec8));
  piVar7 = (int *)(param_1 + 0x4e48);
  iVar3 = *piVar7;
  if (iVar3 != 0) {
    plVar2 = *(long **)(param_1 + 0x4e50);
    lVar5 = (long)iVar3 << 3;
    iVar4 = 1;
    do {
      if (*plVar2 == param_2) {
        if (iVar4 + -1 < iVar3) {
          uVar1 = iVar3 - iVar4;
          if (uVar1 != 0 && iVar4 <= iVar3) {
            memmove(plVar2,plVar2 + 1,
                    -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
            iVar3 = *piVar7;
          }
          *piVar7 = iVar3 + -1;
        }
        break;
      }
      plVar2 = plVar2 + 1;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4ec8));
  if (*(int *)(param_1 + 0x120) != 0) {
    lVar5 = (long)*(int *)(param_1 + 0x120) << 3;
    puVar6 = *(undefined8 **)(param_1 + 0x128);
    do {
      (**(code **)(*(long *)*puVar6 + 0x18))((long *)*puVar6,param_2);
      lVar5 = lVar5 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  plVar2 = *(long **)(param_1 + 0x5590);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x56e8));
  return;
}

