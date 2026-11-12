
void FUN_009100d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = *(void **)(param_1 + 0x1e0);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  puVar2 = PTR_DAT_04bb5a28;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  puVar3 = PTR_DAT_04bb5a30;
  pvVar5 = *(void **)(param_1 + 0xd0);
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *puVar2 = 1;
  *(undefined8 *)puVar3 = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x1b8);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}

