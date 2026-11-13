
void FUN_0132c620(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  void *__ptr;
  
  *param_1 = &PTR_FUN_0498ee60;
  uVar1 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                    (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),param_1[0x4986]);
  if (((uVar1 & 1) != 0) && (__ptr = (void *)param_1[0x4986], __ptr != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0132c6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

