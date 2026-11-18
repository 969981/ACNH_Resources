
void FUN_03592d30(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = (long)&PTR_LAB_04b3d540;
  FUN_034129e0(param_1 + 0x4e);
  if ((int)param_1[0x45] != 0) {
    plVar2 = param_1 + 0x43;
    plVar1 = (long *)param_1[0x44];
    while (plVar1 != plVar2) {
      plVar3 = (long *)plVar1[1];
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1 = plVar3;
    }
    *(undefined4 *)(param_1 + 0x45) = 0;
    param_1[0x44] = (long)plVar2;
    param_1[0x43] = (long)plVar2;
  }
  if (param_1[0x47] != 0) {
    __ptr = (void *)(param_1[0x47] + -8);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

