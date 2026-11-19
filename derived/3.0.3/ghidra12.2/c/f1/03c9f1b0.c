
void FUN_03c9f1b0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined *local_40;
  undefined8 *puStack_38;
  
  *param_1 = &PTR_FUN_04b88e78;
  if ((*(uint *)(param_1 + 0x1a) & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1 + 0x12;
    nn::os::LockMutex((MutexType *)(param_1 + 0x16));
  }
  FUN_038ca710(param_1,0,0);
  FUN_038cba40(param_1);
  if (puVar3 != (undefined8 *)0x0) {
    nn::os::UnlockMutex((MutexType *)(puVar3 + 4));
  }
  puVar1 = PTR_DAT_04bb2698;
  puVar3 = param_1 + 0x1d;
  if (*(char *)((long)param_1 + 0xfe) != '\0') {
    (**(code **)(param_1[0x1d] + 0x18))(puVar3);
    pvVar4 = (void *)param_1[0x1e];
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0xfe) = 0;
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  puStack_38 = &DAT_0407ebb1;
  FUN_03c5a110(puVar3,&local_40,0xffffffff,1);
  FUN_038cb610(*(undefined8 *)puVar1,param_1);
  FUN_03c9f330(param_1 + 0x20,param_1);
  FUN_03c9f330(param_1 + 0x25,param_1);
  if (*(char *)((long)param_1 + 0xfe) != '\0') {
    (**(code **)(param_1[0x1d] + 0x18))(puVar3);
    pvVar4 = (void *)param_1[0x1e];
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0xfe) = 0;
  }
  FUN_038ca644(param_1);
  return;
}

