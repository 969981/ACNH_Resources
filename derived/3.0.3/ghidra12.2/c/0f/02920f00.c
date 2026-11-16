
void FUN_02920f00(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04a92e00;
  lVar3 = DAT_055cb230;
  if (DAT_055cb228 == param_1) {
    DAT_055cb228 = (undefined8 *)0x0;
    if (*(char *)(DAT_055cb230 + 0x530) != '\0') {
      (*(code *)**(undefined8 **)(DAT_055cb230 + 0x510))(DAT_055cb230 + 0x510);
      *(undefined1 *)(lVar3 + 0x530) = 0;
    }
    *(undefined ***)(lVar3 + 0x4c0) = &PTR_LAB_04a9ce20;
    lVar2 = lVar3 + 8;
    do {
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != lVar3 + 8);
    DAT_055cb230 = 0;
  }
  lVar3 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      return;
    }
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

