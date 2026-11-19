
void FUN_0384f2bc(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b5e5b8;
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))();
    param_1[0xf] = 0;
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 8))();
    param_1[0xe] = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x11] != 0) {
    __ptr = (void *)(param_1[0x11] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0384f384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

