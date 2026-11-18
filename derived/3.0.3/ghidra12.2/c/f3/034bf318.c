
void FUN_034bf318(long *param_1)

{
  long *plVar1;
  long *plVar2;
  void *__ptr;
  
  plVar2 = (long *)param_1[0x45];
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
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_03465b80(param_1 + 0x47);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

