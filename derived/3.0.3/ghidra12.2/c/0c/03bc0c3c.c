
void FUN_03bc0c3c(undefined4 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 8) == '\0') {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x90));
  lVar2 = param_3[9];
  if ((((lVar2 != 0) && (FUN_03bc16f0(lVar2,param_3), *(int *)(lVar2 + 0x90) == 0)) &&
      (*(long *)(lVar2 + 8) != 0)) &&
     (*(int *)(lVar2 + 0x10) == *(int *)(*(long *)(lVar2 + 8) + 0x10))) {
    FUN_03b45ec0(param_1,0);
  }
  param_3[9] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  plVar1 = param_3 + 0xc;
  if (*plVar1 != 0) {
    *(undefined8 *)(*plVar1 + 8) = param_3[0xd];
  }
  if ((long *)param_3[0xd] != (long *)0x0) {
    *(long *)param_3[0xd] = *plVar1;
  }
  *plVar1 = 0;
  param_3[0xd] = 0;
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
  param_3[9] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = &PTR_LAB_04b7aaf8;
  *param_3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 **)(param_2 + 0x28) = param_3;
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x90));
  return;
}

