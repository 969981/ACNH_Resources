
void FUN_006e79bc(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[0x1fb];
  *param_1 = &PTR_FUN_048fbe28;
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
    param_1[0x1fb] = 0;
    *(undefined4 *)(param_1 + 0x1fa) = 0;
  }
  if ((long *)param_1[0x1fd] == (long *)0x0) {
    param_1[0x1f9] = &PTR_FUN_048fa7c0;
  }
  else {
    (**(code **)(*(long *)param_1[0x1fd] + 0x18))();
    pvVar3 = (void *)param_1[0x1fb];
    param_1[0x1f9] = &PTR_FUN_048fa7c0;
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
      param_1[0x1fb] = 0;
      *(undefined4 *)(param_1 + 0x1fa) = 0;
    }
  }
  return;
}

