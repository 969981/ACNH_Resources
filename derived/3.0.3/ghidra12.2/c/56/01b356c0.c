
void FUN_01b356c0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04a37c18;
  lVar2 = DAT_0532d278;
  if (DAT_0532d270 == param_1) {
    DAT_0532d270 = (undefined8 *)0x0;
    while (0 < *(int *)(lVar2 + 0x10)) {
      plVar1 = *(long **)(lVar2 + 8);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
      if ((plVar1 == (long *)0x0) ||
         (plVar1 = (long *)((long)plVar1 - (long)*(int *)(lVar2 + 0x14)), plVar1 == (long *)0x0))
      break;
      (**(code **)(*plVar1 + 0x18))();
    }
    do {
      if (*(int *)(lVar2 + 0x28) < 1) goto LAB_01b357e4;
      plVar1 = *(long **)(lVar2 + 0x20);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
      if ((plVar1 == (long *)0x0) ||
         (plVar1 = (long *)((long)plVar1 - (long)*(int *)(lVar2 + 0x2c)), plVar1 == (long *)0x0))
      goto LAB_01b357e4;
      (**(code **)(*plVar1 + 0x18))();
    } while( true );
  }
LAB_01b357e8:
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
LAB_01b357e4:
  DAT_0532d278 = 0;
  goto LAB_01b357e8;
}

