
void FUN_001573a4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[4];
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 3;
    nnosLockMutex(*plVar3);
    lVar1 = plVar2[4];
    *(undefined4 *)(plVar2 + 4) = 1;
    nnosUnlockMutex(*plVar3);
    if ((int)lVar1 == 0) {
      FUN_00143a64();
    }
    else {
      if (*plVar2 != 0) {
        FUN_00143a68(plVar2);
      }
      FUN_00157980(plVar3);
      FUN_00143300(param_1[4]);
    }
  }
  param_1[4] = 0;
  FUN_00143300(*param_1);
  *param_1 = 0;
  return;
}

