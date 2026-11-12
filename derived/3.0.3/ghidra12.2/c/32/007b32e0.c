
void FUN_007b32e0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04912458;
  if (DAT_04ca9178 == param_1) {
    DAT_04ca9178 = (undefined8 *)0x0;
    *(undefined ***)(DAT_04ca9180 + 0x150) = &PTR_LAB_04912478;
    lVar6 = *(long *)(DAT_04ca9180 + 0x160);
    while (lVar6 != DAT_04ca9180 + 0x158) {
      lVar3 = *(long *)(lVar6 + 8);
      lVar1 = *(long *)(lVar6 + 0x10);
      plVar4 = *(long **)(lVar1 + 0x28);
      plVar2 = (long *)(lVar1 + 0x20);
      lVar5 = *plVar2;
      lVar6 = lVar3;
      if ((plVar4 != (long *)0x0 || lVar5 != 0) && (lVar3 = *(long *)(lVar1 + 0x38), lVar3 != 0)) {
        *(undefined8 *)(lVar1 + 0x38) = 0;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 8) = plVar4;
          plVar4 = *(long **)(lVar1 + 0x28);
        }
        if (plVar4 != (long *)0x0) {
          *plVar4 = *plVar2;
        }
        *plVar2 = 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
      }
    }
    DAT_04ca9180 = 0;
  }
  lVar6 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

