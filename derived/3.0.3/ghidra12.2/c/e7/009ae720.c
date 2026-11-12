
void FUN_009ae720(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_0492c700;
  lVar2 = DAT_04d021a8;
  if (DAT_04d021a0 == param_1) {
    DAT_04d021a0 = (undefined8 *)0x0;
    if (0 < *(int *)(DAT_04d021a8 + 0x88)) {
      lVar3 = 0;
      do {
        (**(code **)**(undefined8 **)(*(long *)(lVar2 + 0x90) + lVar3 * 8))();
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(lVar2 + 0x88));
    }
    DAT_04d021a8 = 0;
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

