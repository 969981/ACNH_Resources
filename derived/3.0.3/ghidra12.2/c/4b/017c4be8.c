
void FUN_017c4be8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = DAT_05292fd0;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_05292fd0 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_05292fd0);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_05292fd0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_05292fd0 = (void *)0x0;
    DAT_05292fc8 = 0;
  }
  pvVar4 = DAT_05292fe0;
  if (DAT_05292fe0 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_05292fe0);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,DAT_05292fe0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_05292fe0 = (void *)0x0;
    DAT_05292fd8 = 0;
  }
  pvVar4 = DAT_05292ff0;
  if (DAT_05292ff0 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_05292ff0);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,DAT_05292ff0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_05292ff0 = (void *)0x0;
    DAT_05292fe8 = 0;
  }
  *PTR_DAT_04bb5c58 = 1;
  puVar2 = PTR_DAT_04bb5c60;
  pvVar4 = *(void **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
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

