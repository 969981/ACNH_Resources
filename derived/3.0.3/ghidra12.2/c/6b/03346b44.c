
void FUN_03346b44(long param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = *(void **)(param_1 + 0x20c0);
  *(undefined8 *)(param_1 + 0x20c0) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_032c1b04(pvVar3);
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
  FUN_032c6840(param_1 + 0x3c0);
  if (*(char *)(param_1 + 0x17f1) != '\0') {
    FUN_032c6840(param_1 + 0x418);
  }
  if (*(long *)(param_1 + 0x3b8) != 0) {
    FUN_032d15b0(*(undefined8 *)(param_1 + 0x2f8),*(undefined8 *)(*(long *)(param_1 + 0x3b8) + 0x10)
                );
    FUN_03359de4(*(undefined8 *)(param_1 + 0x3b8));
    pvVar3 = *(void **)(param_1 + 0x3b8);
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_03359a7c(pvVar3);
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
        lVar2 = *(long *)(param_1 + 0x2f8);
        goto joined_r0x03346c18;
      }
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
    }
  }
  lVar2 = *(long *)(param_1 + 0x2f8);
joined_r0x03346c18:
  if (lVar2 != 0) {
    FUN_032d1384();
    pvVar3 = *(void **)(param_1 + 0x2f8);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_032d0688(pvVar3);
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
  }
  plVar4 = *(long **)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  plVar1 = *(long **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == plVar4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03346cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

