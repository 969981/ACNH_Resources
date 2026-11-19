
void FUN_039849f8(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_04b68a90;
  puVar1 = PTR_DAT_04bb2698;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_038e1a84(param_1 + 4);
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03984a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

