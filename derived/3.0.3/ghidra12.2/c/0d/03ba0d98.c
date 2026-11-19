
void FUN_03ba0d98(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = (long)&PTR_FUN_04b79bc8;
  param_1[0x13] = (long)&PTR_LAB_04b79c88;
  param_1[0x36] = (long)&PTR_LAB_04b79cd8;
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)((long)param_1 + 0x1bc) != '\0') {
    pvVar3 = (void *)param_1[0x3a];
    if (pvVar3 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    pvVar3 = (void *)param_1[0x3b];
    param_1[0x3a] = 0;
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
    }
    pvVar3 = (void *)param_1[0x3c];
    param_1[0x3b] = 0;
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
    }
    pvVar3 = (void *)param_1[0x3d];
    param_1[0x3c] = 0;
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
    }
    pvVar3 = (void *)param_1[0x3e];
    param_1[0x3d] = 0;
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
    }
    pvVar3 = (void *)param_1[0x3f];
    param_1[0x3e] = 0;
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
    }
    param_1[0x3f] = 0;
  }
  param_1[0x13] = (long)&PTR_LAB_04b78308;
  if ((char)param_1[0x2d] != '\0') {
    FUN_03bcafb0(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x78),param_1 + 0x23);
  }
  pvVar3 = (void *)param_1[0x21];
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
    param_1[0x21] = 0;
  }
  puVar1 = PTR_DAT_04bd1f48;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xb));
  return;
}

