
void FUN_0272927c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x10);
  if (pvVar3 == (void *)0x0) {
LAB_027292e0:
    pvVar3 = *(void **)(param_1 + 0x18);
  }
  else {
    FUN_027c10a4((long)pvVar3 + 0x73f44);
    FUN_027c10a4((long)pvVar3 + 0x73ee0);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_027292e0;
    }
    free(pvVar3);
    pvVar3 = *(void **)(param_1 + 0x18);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_027c10a4((long)pvVar3 + 0x73f44);
    FUN_027c10a4((long)pvVar3 + 0x73ee0);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  }
  pvVar3 = *(void **)(param_1 + 0x28);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      plVar2 = *(long **)(param_1 + 0x30);
      goto joined_r0x0272938c;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  plVar2 = *(long **)(param_1 + 0x30);
joined_r0x0272938c:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

