
void FUN_03356734(long param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = *(void **)(param_1 + 0x1788);
  *(undefined8 *)(param_1 + 0x1788) = 0;
  if (pvVar3 == (void *)0x0) {
LAB_03356788:
    lVar2 = *(long *)(param_1 + 0x498);
  }
  else {
    FUN_032c1b04(pvVar3);
    if (DAT_05ae7600 != 0) {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
      goto LAB_03356788;
    }
    free(pvVar3);
    lVar2 = *(long *)(param_1 + 0x498);
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    FUN_032c6840(lVar2 + 8);
    plVar1 = *(long **)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0x498) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  FUN_032c6840(param_1 + 0x440);
  lVar2 = param_1 + 1000;
  if (*(int *)(param_1 + 0x17a0) != 1) {
    lVar2 = param_1 + 0x390;
  }
  FUN_032c6840(lVar2);
  lVar2 = *(long *)(param_1 + 0x388);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x17a0) == 1) {
      FUN_032d15b0(*(undefined8 *)(param_1 + 0x300),*(undefined8 *)(lVar2 + 0x10));
      lVar2 = *(long *)(param_1 + 0x388);
    }
    FUN_03359de4(lVar2);
    pvVar3 = *(void **)(param_1 + 0x388);
    *(undefined8 *)(param_1 + 0x388) = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_03359a7c(pvVar3);
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
        lVar2 = *(long *)(param_1 + 0x368);
        goto joined_r0x0335683c;
      }
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
    }
  }
  lVar2 = *(long *)(param_1 + 0x368);
joined_r0x0335683c:
  if (lVar2 != 0) {
    FUN_032d3e80();
    *(undefined8 *)(param_1 + 0x368) = 0;
  }
  if (*(long *)(param_1 + 0x370) != 0) {
    FUN_032d3e80();
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  if (*(long *)(param_1 + 0x378) != 0) {
    FUN_032d3e80();
    *(undefined8 *)(param_1 + 0x378) = 0;
  }
  if (*(long *)(param_1 + 0x380) != 0) {
    FUN_032d3e80();
    *(undefined8 *)(param_1 + 0x380) = 0;
  }
  if (*(long *)(param_1 + 0x300) != 0) {
    FUN_032d1384();
    pvVar3 = *(void **)(param_1 + 0x300);
    *(undefined8 *)(param_1 + 0x300) = 0;
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
  plVar4 = *(long **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  plVar1 = *(long **)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if ((plVar1 != (long *)0x0) && (plVar1 != plVar4)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  plVar4 = *(long **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  plVar1 = *(long **)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == plVar4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03356978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

