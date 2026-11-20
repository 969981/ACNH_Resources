
void FUN_03f2a9b0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_c8 [152];
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(lVar2 + 0x100) != 0 || 0 < *(int *)(param_1 + 0x50)) {
    if (*(long *)(lVar2 + 0x50) != lVar2 + 0x48) {
      lVar3 = (long)*(int *)(lVar2 + 0x5c);
      lVar5 = *(long *)(lVar2 + 0x50) - lVar3;
      do {
        lVar5 = *(long *)(lVar5 + lVar3 + 8) - lVar3;
      } while (lVar5 != (lVar2 + 0x48) - lVar3);
    }
    FUN_0074fda4(auStack_c8,&DAT_040bd76d,(long)*(int *)(lVar2 + 0x100),
                 *(undefined4 *)(lVar2 + 0x58));
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03f2aa40;
  }
  *(byte *)(param_1 + 0x109) = *(byte *)(param_1 + 0x109) & 0xfe;
LAB_03f2aa40:
  lVar2 = DAT_05b05848;
  if (*(long *)(DAT_05b05848 + 0x9b8) != 0) {
    FUN_03f42ca4(*(long *)(DAT_05b05848 + 0x9b8),DAT_05b05848 + 0x998,1);
  }
  nn::os::LockMutex((MutexType *)(lVar2 + 0x800));
  *(undefined4 *)(lVar2 + 0x980) = 0;
  plVar1 = (long *)(*(int *)(lVar2 + 0x7dc) + param_1);
  lVar5 = *plVar1;
  plVar4 = (long *)plVar1[1];
  if (plVar4 != (long *)0x0 || lVar5 != 0) {
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar4;
      plVar4 = (long *)plVar1[1];
    }
    if (plVar4 != (long *)0x0) {
      *plVar4 = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x7d8) = *(int *)(lVar2 + 0x7d8) + -1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x800));
  FUN_03f2ad90(param_1);
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

