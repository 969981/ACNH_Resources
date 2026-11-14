
void FUN_017c88d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  
  pvVar5 = DAT_05293020;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_05293020 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_05293020);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_05293020);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    DAT_05293020 = (void *)0x0;
    DAT_05293018 = 0;
  }
  pvVar5 = DAT_05293010;
  if (DAT_05293010 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_05293010);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,DAT_05293010);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    DAT_05293010 = (void *)0x0;
    DAT_05293008 = 0;
  }
  pvVar5 = DAT_05293040;
  if (DAT_05293040 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_05293040);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,DAT_05293040);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    DAT_05293040 = (void *)0x0;
    DAT_05293038 = 0;
  }
  puVar3 = PTR_DAT_04bbe400;
  puVar2 = PTR_DAT_04bbe3f8;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  pvVar5 = *(void **)(param_1 + 0xd0);
  *puVar2 = 1;
  *(undefined8 *)puVar3 = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
  *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
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

