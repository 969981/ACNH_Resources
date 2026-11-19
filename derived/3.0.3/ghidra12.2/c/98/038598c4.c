
void FUN_038598c4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x420);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x420) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x418);
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
    *(undefined8 *)(param_1 + 0x418) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x410);
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
    *(undefined8 *)(param_1 + 0x410) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x528);
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
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined4 *)(param_1 + 0x520) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x518);
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
    *(undefined8 *)(param_1 + 0x518) = 0;
    *(undefined4 *)(param_1 + 0x510) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x408);
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
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined4 *)(param_1 + 0x400) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x3f8);
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
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  return;
}

