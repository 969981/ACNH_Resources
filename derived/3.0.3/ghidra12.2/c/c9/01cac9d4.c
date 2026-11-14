
void FUN_01cac9d4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_04a45478;
  lVar2 = DAT_053589d8;
  if (DAT_053589d0 == param_1) {
    DAT_053589d0 = (undefined8 *)0x0;
    FUN_038e1a84(DAT_053589d8 + 0x198);
    if (*(uint *)(lVar2 + 400) != 0xffffffff) {
      (*(code *)(&PTR_LAB_04a454c8)[*(uint *)(lVar2 + 400)])(&uStack_11,lVar2 + 0x20);
    }
    DAT_053589d8 = 0;
    *(undefined4 *)(lVar2 + 400) = 0xffffffff;
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

