
void FUN_03555410(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x48] != 0) {
    pvVar5 = (void *)(param_1[0x48] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  param_1[0xae73] = (long)&PTR_LAB_04b5eb40;
  if (param_1[0xae75] != 0) {
    if (0 < (int)param_1[0xae74]) {
      lVar3 = 0;
      plVar2 = (long *)param_1[0xae76];
      do {
        plVar4 = *(long **)(param_1[0xae75] + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *plVar4 = (long)plVar2;
        param_1[0xae76] = (long)plVar4;
        plVar2 = plVar4;
      } while (lVar3 < (int)param_1[0xae74]);
    }
    pvVar5 = (void *)param_1[0xae77];
    *(undefined4 *)(param_1 + 0xae74) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x573bc) = 0;
    *(undefined8 *)((long)param_1 + 0x573b4) = 0;
    *(undefined8 *)((long)param_1 + 0x573ac) = 0;
    *(undefined8 *)((long)param_1 + 0x573a4) = 0;
  }
  FUN_03ebae78(param_1 + 0xae61);
  param_1[0x3839] = (long)(PTR_DAT_04bc5db8 + 0x10);
  FUN_034129e0(param_1 + 0x4e);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

