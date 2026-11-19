
void FUN_03b856a4(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_04b78670;
  param_1[0x36] = &PTR_LAB_04b78790;
  param_1[0x13] = &PTR_LAB_04b78740;
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 0x43) != '\0') {
    pvVar3 = (void *)param_1[0x46];
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
      param_1[0x46] = 0;
    }
    pvVar3 = (void *)param_1[0x47];
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
      param_1[0x47] = 0;
    }
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  FUN_03ba0d98(param_1);
  return;
}

