
void FUN_01c396f8(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = DAT_0534bd30;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_0534bd30 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_0534bd30);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_0534bd30);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_0534bd30 = (void *)0x0;
    DAT_0534bd28 = 0;
  }
  pvVar3 = DAT_0534bd40;
  if (DAT_0534bd40 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_0534bd40);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,DAT_0534bd40);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_0534bd40 = (void *)0x0;
    DAT_0534bd38 = 0;
  }
  pvVar3 = *(void **)(param_1 + 0xd0);
  DAT_0534bd48 = 1;
  DAT_0534bd4c = 0xffffffffffffffff;
  DAT_0534bd54 = 0xffffffffffffffff;
  DAT_0534bd5c = 0xffffffffffffffff;
  DAT_0534bd64 = 0xffffffffffffffff;
  DAT_0534bd7c = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  DAT_0534bd6c = 0xffffffffffffffff;
  DAT_0534bd74 = 0xffffffffffffffff;
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

