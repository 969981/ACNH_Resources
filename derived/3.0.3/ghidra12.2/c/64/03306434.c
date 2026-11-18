
void FUN_03306434(long param_1)

{
  long *plVar1;
  long lVar2;
  void *__ptr;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x508) != 0) {
    FUN_0329a320();
    __ptr = *(void **)(param_1 + 0x508);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (__ptr != (void *)0x0) {
      FUN_0329a9f8(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
        lVar2 = *(long *)(param_1 + 0x518);
        goto joined_r0x03306498;
      }
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  lVar2 = *(long *)(param_1 + 0x518);
joined_r0x03306498:
  if (lVar2 != 0) {
    FUN_032bc5cc();
    plVar1 = *(long **)(param_1 + 0x518);
    *(undefined8 *)(param_1 + 0x518) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
  }
  if (*(long *)(param_1 + 0x510) != 0) {
    FUN_032bc5cc();
    plVar1 = *(long **)(param_1 + 0x510);
    *(undefined8 *)(param_1 + 0x510) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
  }
  plVar3 = *(long **)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  plVar1 = *(long **)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((plVar1 != (long *)0x0) && (plVar1 != plVar3)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  plVar3 = *(long **)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  plVar1 = *(long **)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((plVar1 != (long *)0x0) && (plVar1 != plVar3)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  plVar3 = *(long **)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  plVar1 = *(long **)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == plVar3)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x033065a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

