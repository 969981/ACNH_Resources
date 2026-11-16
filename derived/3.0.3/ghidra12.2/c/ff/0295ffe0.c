
void FUN_0295ffe0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = DAT_055d6e30;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_055d6e30 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_055d6e30);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_055d6e30);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_055d6e30 = (void *)0x0;
    DAT_055d6e28 = 0;
  }
  pvVar3 = *(void **)(param_1 + 0xd0);
  DAT_055d6d60 = 1;
  DAT_055d6d64 = 0xffffffffffffffff;
  DAT_055d6d6c = 0xffffffffffffffff;
  DAT_055d6d74 = 0xffffffffffffffff;
  DAT_055d6d7c = 0xffffffffffffffff;
  DAT_055d6e04 = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  DAT_055d6d84 = 0xffffffffffffffff;
  DAT_055d6d8c = 0xffffffffffffffff;
  DAT_055d6d94 = 0xffffffffffffffff;
  DAT_055d6d9c = 0xffffffffffffffff;
  DAT_055d6da4 = 0xffffffffffffffff;
  DAT_055d6dac = 0xffffffffffffffff;
  DAT_055d6db4 = 0xffffffffffffffff;
  DAT_055d6dbc = 0xffffffffffffffff;
  DAT_055d6dc4 = 0xffffffffffffffff;
  DAT_055d6dcc = 0xffffffffffffffff;
  DAT_055d6dd4 = 0xffffffffffffffff;
  DAT_055d6ddc = 0xffffffffffffffff;
  DAT_055d6de4 = 0xffffffffffffffff;
  DAT_055d6dec = 0xffffffffffffffff;
  DAT_055d6df4 = 0xffffffffffffffff;
  DAT_055d6dfc = 0xffffffffffffffff;
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

