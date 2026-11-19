
void FUN_03860d2c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[0x42];
  *param_1 = &PTR_LAB_04b5f440;
  puVar1 = PTR_DAT_04bb2698;
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
    param_1[0x41] = 0;
    param_1[0x42] = 0;
  }
  if ((long *)param_1[0x91] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x91] + 0x18))();
    param_1[0x91] = 0;
  }
  if ((long *)param_1[0x93] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x93] + 0x18))();
    param_1[0x93] = 0;
  }
  if ((long *)param_1[0x95] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x95] + 0x18))();
    param_1[0x95] = 0;
  }
  if ((long *)param_1[0x97] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x97] + 0x18))();
    param_1[0x97] = 0;
  }
  if ((long *)param_1[0x99] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x99] + 0x18))();
    param_1[0x99] = 0;
  }
  if ((long *)param_1[0x9b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9b] + 0x18))();
    param_1[0x9b] = 0;
  }
  FUN_03ebae78(param_1 + 0x52);
  *param_1 = &PTR_FUN_04b90648;
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x18))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x18))();
  }
  pvVar3 = (void *)param_1[0x3b];
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
  FUN_03c5ce30(param_1);
  return;
}

