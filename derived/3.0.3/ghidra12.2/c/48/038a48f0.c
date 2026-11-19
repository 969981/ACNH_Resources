
void FUN_038a48f0(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  undefined **local_50;
  long *plStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_LAB_04b62550;
  FUN_038a4c40();
  __ptr = (void *)param_1[3];
  if (__ptr == (void *)0x0) {
    return;
  }
  plStack_48 = param_1 + 1;
  local_40 = &LAB_038a4f78;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04b625d0;
  if (*plStack_48 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[1] = 0;
  }
  else {
    FUN_038a4f90(*plStack_48,&local_50);
    __ptr = (void *)param_1[3];
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[1] = 0;
    if (__ptr == (void *)0x0) goto LAB_038a49a8;
  }
  if (DAT_05ae7600 == 0) {
    free(__ptr);
  }
  else {
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
    }
  }
LAB_038a49a8:
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

