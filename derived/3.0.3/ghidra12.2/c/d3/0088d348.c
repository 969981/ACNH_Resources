
void FUN_0088d348(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = DAT_04ce9770;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_04ce9770 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_04ce9770);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_04ce9770);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_04ce9770 = (void *)0x0;
    DAT_04ce9768 = 0;
  }
  pvVar3 = DAT_04ce9760;
  if (DAT_04ce9760 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_04ce9760);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,DAT_04ce9760);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_04ce9760 = (void *)0x0;
    DAT_04ce9758 = 0;
  }
  pvVar3 = DAT_04ce9820;
  if (DAT_04ce9820 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_04ce9820);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,DAT_04ce9820);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_04ce9820 = (void *)0x0;
    DAT_04ce9818 = 0;
  }
  pvVar3 = DAT_04ce9830;
  if (DAT_04ce9830 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_04ce9830);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,DAT_04ce9830);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_04ce9830 = (void *)0x0;
    DAT_04ce9828 = 0;
  }
  *PTR_DAT_04bb3248 = 1;
  memset(PTR_DAT_04bb3250,0xff,0x288);
  pvVar3 = *(void **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
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
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x1b8);
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
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
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
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}

