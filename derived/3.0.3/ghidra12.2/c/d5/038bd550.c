
void FUN_038bd550(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04b63be8;
  if (param_1[0x16] != 0) {
    while (param_1[5] != 0) {
      lVar2 = param_1[0x16];
      uVar4 = *(undefined8 *)(param_1[5] + 0x20);
      uVar1 = nn::os::TryLockMutex((MutexType *)(*(long *)(*(long *)(lVar2 + 0x40) + 0x40) + 0x28));
      if ((uVar1 & 1) != 0) {
        FUN_038beec0(lVar2,uVar4);
        nn::os::UnlockMutex((MutexType *)(*(long *)(*(long *)(lVar2 + 0x40) + 0x40) + 0x28));
      }
    }
  }
  plVar3 = param_1 + 4;
  lVar2 = *plVar3;
  *(undefined4 *)(param_1 + 0x17) = 7;
  if ((lVar2 == 0) || (*(long **)(lVar2 + 8) != plVar3)) {
    if (param_1[7] != 0) {
      *(undefined8 *)(param_1[7] + 0x10) = param_1[6];
    }
    lVar2 = param_1[6];
    if (lVar2 == 0) {
      if (*plVar3 != 0) {
        *(undefined8 *)(*(long *)(*plVar3 + 8) + 0x18) = param_1[7];
      }
      goto LAB_038bd630;
    }
  }
  else {
    *(undefined8 *)(lVar2 + 8) = param_1[6];
    lVar2 = param_1[6];
    if (lVar2 == 0) goto LAB_038bd630;
  }
  *(undefined8 *)(lVar2 + 0x18) = param_1[7];
  param_1[6] = 0;
LAB_038bd630:
  param_1[7] = 0;
  param_1[4] = 0;
  FUN_038aae00(plVar3);
  lVar2 = param_1[0x10];
  param_1[6] = 0;
  param_1[7] = 0;
  *plVar3 = 0;
  param_1[5] = 0;
  if (lVar2 != 0) {
    plVar3 = param_1 + 0xd;
    param_1[0x10] = 0;
    if (*plVar3 != 0) {
      *(undefined8 *)(*plVar3 + 8) = param_1[0xe];
    }
    if ((long *)param_1[0xe] != (long *)0x0) {
      *(long *)param_1[0xe] = *plVar3;
    }
    *plVar3 = 0;
    param_1[0xe] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

