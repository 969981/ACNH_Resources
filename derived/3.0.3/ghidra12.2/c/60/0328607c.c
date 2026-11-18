
void FUN_0328607c(long param_1)

{
  long *plVar1;
  void *pvVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_032a6df0(*(undefined8 *)PTR_DAT_04bc8ed0,*(undefined8 *)(param_1 + 0x10),0);
  }
  pvVar2 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar2 != (void *)0x0) {
    *(undefined8 *)((long)pvVar2 + 0x1d0) = 0;
    *(undefined8 *)((long)pvVar2 + 0x1b8) = 0;
    *(undefined8 *)((long)pvVar2 + 0x1c0) = 0;
    if (*(long **)((long)pvVar2 + 400) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar2 + 400) + 8))();
    }
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
  }
  pvVar2 = *(void **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (pvVar2 != (void *)0x0) {
    *(undefined8 *)((long)pvVar2 + 0x1d0) = 0;
    *(undefined8 *)((long)pvVar2 + 0x1b8) = 0;
    *(undefined8 *)((long)pvVar2 + 0x1c0) = 0;
    if (*(long **)((long)pvVar2 + 400) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar2 + 400) + 8))();
    }
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
      return;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03286164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      return;
    }
  }
  return;
}

