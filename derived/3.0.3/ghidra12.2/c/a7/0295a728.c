
void FUN_0295a728(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = DAT_055d6940;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_055d6940 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_055d6940);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_055d6940);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_055d6940 = (void *)0x0;
    DAT_055d6938 = 0;
  }
  pvVar3 = DAT_055d6950;
  if (DAT_055d6950 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_055d6950);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,DAT_055d6950);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_055d6950 = (void *)0x0;
    DAT_055d6948 = 0;
  }
  pvVar3 = DAT_055d6960;
  if (DAT_055d6960 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_055d6960);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,DAT_055d6960);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_055d6960 = (void *)0x0;
    DAT_055d6958 = 0;
  }
  pvVar3 = DAT_055d6970;
  if (DAT_055d6970 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_055d6970);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,DAT_055d6970);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_055d6970 = (void *)0x0;
    DAT_055d6968 = 0;
  }
  pvVar3 = *(void **)(param_1 + 0xd0);
  DAT_055d6978 = 1;
  DAT_055d697c = 0xffffffffffffffff;
  DAT_055d6984 = 0xffffffffffffffff;
  DAT_055d698c = 0xffffffffffffffff;
  DAT_055d6994 = 0xffffffffffffffff;
  DAT_055d699c = 0xffffffffffffffff;
  DAT_055d69a4 = 0xffffffff;
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

