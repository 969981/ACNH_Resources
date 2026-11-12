
void FUN_007dc6d0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x1e0) != 0) {
    pvVar3 = (void *)(*(long *)(param_1 + 0x1e0) + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x1f0);
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
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0xd0);
  DAT_04cb2538 = 1;
  *(undefined1 *)(param_1 + 0x1f9) = 0;
  DAT_04cb257c = 0xffffffffffffffff;
  DAT_04cb253c = 0xffffffffffffffff;
  DAT_04cb2544 = 0xffffffffffffffff;
  DAT_04cb2584 = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  DAT_04cb254c = 0xffffffffffffffff;
  DAT_04cb2554 = 0xffffffffffffffff;
  DAT_04cb255c = 0xffffffffffffffff;
  DAT_04cb2564 = 0xffffffffffffffff;
  DAT_04cb256c = 0xffffffffffffffff;
  DAT_04cb2574 = 0xffffffffffffffff;
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

