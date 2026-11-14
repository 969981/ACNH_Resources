
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c60cc8(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = DAT_0534f490;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_0534f490 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_0534f490);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_0534f490);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_0534f490 = (void *)0x0;
    DAT_0534f488 = 0;
  }
  pvVar3 = DAT_0534f480;
  if (DAT_0534f480 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_0534f480);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,DAT_0534f480);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    DAT_0534f480 = (void *)0x0;
    DAT_0534f478 = 0;
  }
  pvVar3 = *(void **)(param_1 + 0xd0);
  DAT_0534f430 = 1;
  DAT_0534f434 = 0xffffffffffffffff;
  DAT_0534f43c = 0xffffffffffffffff;
  DAT_0534f444 = 0xffffffffffffffff;
  DAT_0534f44c = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _DAT_0534f454 = 0xffffffffffffffff;
  DAT_0534f45c = 0xffffffffffffffff;
  DAT_0534f464 = 0xffffffffffffffff;
  DAT_0534f46c = 0xffffffffffffffff;
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

