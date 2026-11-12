
void FUN_007cd490(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04916568;
  lVar2 = DAT_04cad400;
  if (DAT_04cad3f8 == param_1) {
    DAT_04cad3f8 = (undefined8 *)0x0;
    lVar3 = *(long *)(DAT_04cad400 + 8);
    while (lVar3 != lVar2) {
      lVar4 = *(long *)(lVar3 + 8);
      FUN_03f2d448(lVar3 + -0x40);
      lVar3 = lVar4;
    }
    DAT_04cad400 = 0;
  }
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
}

