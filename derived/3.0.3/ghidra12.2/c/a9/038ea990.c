
void FUN_038ea990(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b65930;
  if (param_1[1] != 0) {
    FUN_038f0e50();
    param_1[1] = 0;
  }
  __ptr = (void *)param_1[10];
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[7];
  if ((long *)param_1[7] != param_1 + 6) {
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
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      plVar2[-0x17] = param_1[9];
      param_1[9] = plVar2 + -0x17;
      plVar2 = plVar1;
    } while (plVar1 != param_1 + 6);
    __ptr = (void *)param_1[10];
    if (__ptr == (void *)0x0) goto LAB_038eaa6c;
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
LAB_038eaa6c:
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

