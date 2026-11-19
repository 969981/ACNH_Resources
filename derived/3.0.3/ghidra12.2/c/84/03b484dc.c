
void FUN_03b484dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
  if (*(int *)(param_1 + 0x168) < *(int *)(param_1 + 0x180)) {
    puVar2 = *(undefined8 **)(param_1 + 0x170);
    plVar1 = (long *)(param_1 + 0x158);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x170) = *puVar2;
    }
    *puVar2 = param_2;
    puVar2[1] = param_3;
    plVar3 = puVar2 + 2;
    *plVar3 = 0;
    puVar2[3] = 0;
    lVar4 = *plVar1;
    *plVar1 = (long)plVar3;
    puVar2[3] = plVar1;
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
    }
    *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return;
}

