
void FUN_03ab42f8(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x5b8);
  *(undefined **)(param_1 + 0x5b0) = PTR_DAT_04bd0d40 + 0x10;
  if (lVar3 != 0) {
    if (lVar3 == 1) goto LAB_03ab4398;
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + param_1 + 0x5b0);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  *(undefined8 *)(param_1 + 0x5b8) = 1;
LAB_03ab4398:
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  *(undefined **)(param_1 + 0x500) = puVar1;
  *(undefined **)(param_1 + 0x4e0) = puVar1;
  *(undefined **)(param_1 + 0x4c0) = puVar1;
  *(undefined **)(param_1 + 0x470) = puVar1;
  FUN_03ab6cfc(param_1);
  return;
}

