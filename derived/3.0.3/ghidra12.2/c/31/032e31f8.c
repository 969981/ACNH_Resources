
void FUN_032e31f8(undefined8 *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  void *__ptr;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)*plVar3;
    puVar1 = (undefined1 *)0x0;
    if (plVar2 != (long *)0x0) {
      puVar1 = &LAB_032e3384;
    }
    if (puVar1 != (undefined1 *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,0);
      plVar2 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    __ptr = (void *)*param_1;
    *param_1 = 0;
    if (__ptr != (void *)0x0) {
      FUN_032e2b14(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
        return;
      }
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032e3294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        return;
      }
    }
  }
  return;
}

