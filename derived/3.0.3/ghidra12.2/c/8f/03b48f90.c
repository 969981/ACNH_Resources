
void FUN_03b48f90(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  void *__ptr;
  
  __ptr = (void *)param_1[7];
  *param_1 = &PTR_FUN_04b763e0;
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[4];
  if ((long *)param_1[4] != param_1 + 3) {
    do {
      plVar1 = (long *)plVar2[1];
      plVar3 = plVar1;
      if (*plVar2 != 0) {
        *(long **)(*plVar2 + 8) = plVar1;
        plVar3 = (long *)plVar2[1];
      }
      if (plVar3 != (long *)0x0) {
        *plVar3 = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + -1;
      plVar2[-2] = param_1[6];
      param_1[6] = plVar2 + -2;
      plVar2 = plVar1;
    } while (plVar1 != param_1 + 3);
    __ptr = (void *)param_1[7];
    if (__ptr == (void *)0x0) goto LAB_03b4905c;
  }
  if (DAT_05ae7600 == 0) {
    free(__ptr);
  }
  else {
    plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
LAB_03b4905c:
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

