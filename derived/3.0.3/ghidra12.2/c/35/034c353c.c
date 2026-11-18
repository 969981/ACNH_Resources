
void FUN_034c353c(long *param_1)

{
  long *plVar1;
  void *__ptr;
  long *plVar2;
  
  if ((long *)*param_1 == (long *)0x0) {
    *(undefined8 *)((long)param_1 + 0xffc) = 0;
    *(undefined8 *)((long)param_1 + 0x1004) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 0x1f7) = 0;
    (**(code **)(*(long *)*param_1 + 0x28))();
    plVar2 = (long *)*param_1;
    *(undefined8 *)((long)param_1 + 0xffc) = 0;
    *(undefined8 *)((long)param_1 + 0x1004) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      __ptr = (void *)plVar2[2];
      if (__ptr != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(__ptr);
        }
        else {
          plVar1 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
          }
        }
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      if ((long *)*param_1 != (long *)0x0) {
        (**(code **)(*(long *)*param_1 + 8))();
      }
      *param_1 = 0;
    }
  }
  return;
}

