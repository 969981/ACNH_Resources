
void FUN_038c9d34(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((*(uint *)(param_1 + 0x1a) & 1) == 0) {
    plVar2 = (long *)0x0;
    uVar1 = *param_2;
  }
  else {
    plVar2 = param_1 + 0x12;
    nn::os::LockMutex((MutexType *)(param_1 + 0x16));
    uVar1 = *param_2;
  }
  if ((((uVar1 != 0) && (uVar1 != param_1[0x1b])) &&
      (uVar1 = (**(code **)(*param_1 + 0x88))(param_1), (uVar1 & 1) != 0)) &&
     (*param_2 <= (ulong)param_1[0x1b])) {
    FUN_038ca710(param_1);
    param_1[0x1b] = *param_2;
  }
  if (((param_2[1] != 0) && (param_2[1] != param_1[0x1c])) &&
     ((uVar1 = (**(code **)(*param_1 + 0x88))(param_1), (uVar1 & 1) != 0 &&
      ((ulong)param_1[0x1c] <= param_2[1])))) {
    FUN_038ca710(param_1);
    param_1[0x1c] = param_2[1];
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(plVar2 + 4));
  return;
}

