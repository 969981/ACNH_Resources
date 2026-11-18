
void FUN_0367a3b4(long param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  
  if (*(char *)(param_1 + 0xbc) != '\0') {
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar2 != 0) {
    plVar1 = *(long **)(param_1 + 0x28);
    FUN_0367a1b0(lVar2);
    (**(code **)(*plVar1 + 0x38))(plVar1,lVar2);
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pvVar3 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar3);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
    }
  }
  pvVar3 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar3 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar3);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
    }
  }
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0367a4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))();
  return;
}

