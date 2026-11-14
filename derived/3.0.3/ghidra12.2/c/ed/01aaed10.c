
void FUN_01aaed10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar2 = PTR_DAT_04bc02f8;
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(PTR_DAT_04bc02f8 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  puVar2 = PTR_DAT_04bc0300;
  pvVar4 = *(void **)(PTR_DAT_04bc0300 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  puVar2 = PTR_DAT_04bc0308;
  pvVar4 = *(void **)(PTR_DAT_04bc0308 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  *PTR_DAT_04bbff58 = 1;
  puVar2 = PTR_DAT_04bbff60;
  pvVar4 = *(void **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x1b8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}

