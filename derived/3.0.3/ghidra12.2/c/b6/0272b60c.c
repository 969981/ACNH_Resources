
void FUN_0272b60c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0x10);
  if (pvVar4 == (void *)0x0) {
LAB_0272b654:
    pvVar4 = *(void **)(param_1 + 0x18);
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
      goto LAB_0272b654;
    }
    free(pvVar4);
    pvVar4 = *(void **)(param_1 + 0x18);
  }
  if (pvVar4 != (void *)0x0) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  }
  pvVar4 = *(void **)(param_1 + 0x28);
  if (pvVar4 != (void *)0x0) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(pvVar4);
      plVar2 = *(long **)(param_1 + 0x30);
      goto joined_r0x0272b6e4;
    }
    plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
    }
  }
  plVar2 = *(long **)(param_1 + 0x30);
joined_r0x0272b6e4:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

