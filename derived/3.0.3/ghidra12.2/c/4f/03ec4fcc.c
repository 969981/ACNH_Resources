
void FUN_03ec4fcc(long *param_1)

{
  long *plVar1;
  void *__ptr;
  undefined **local_50;
  long *plStack_48;
  code *local_40;
  undefined8 uStack_38;
  
  __ptr = (void *)param_1[2];
  if (__ptr != (void *)0x0) {
    local_40 = FUN_03ec5084;
    uStack_38 = 0;
    local_50 = &PTR_LAB_04ba5220;
    plStack_48 = param_1;
    if (*param_1 != 0) {
      FUN_03ec5140(*param_1,&local_50);
      __ptr = (void *)param_1[2];
      *(undefined4 *)(param_1 + 3) = 0;
      *param_1 = 0;
      if (__ptr == (void *)0x0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

