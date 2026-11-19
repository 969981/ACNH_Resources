
void FUN_038d7884(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04b64a20;
  plVar1 = param_1 + 0x11;
  (**(code **)(*plVar1 + 0x50))(plVar1,0);
  *plVar1 = (long)&PTR_FUN_04b64a48;
  FUN_038e1c80(param_1 + 0x3c);
  FUN_038e1c80(param_1 + 0x36);
  FUN_038e267c(plVar1);
  *param_1 = &PTR_LAB_04b64af0;
  lVar2 = DAT_05ae76e0;
  if ((DAT_05ae76e0 != 0) && (param_1[7] != 0)) {
    param_1[7] = 0;
    if (param_1[4] != 0) {
      *(undefined8 *)(param_1[4] + 8) = param_1[5];
    }
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[5] = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
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

