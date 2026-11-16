
void FUN_0272c990(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    FUN_0282cba8((long)pvVar3 + 0x4b278);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  if (pvVar3 != (void *)0x0) {
    FUN_0282cba8((long)pvVar3 + 0x4b278);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x28);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x40);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

