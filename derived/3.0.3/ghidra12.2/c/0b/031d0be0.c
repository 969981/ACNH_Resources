
void FUN_031d0be0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x47] != 0) {
    if (0 < (int)param_1[0x46]) {
      lVar3 = 0;
      plVar2 = (long *)param_1[0x48];
      do {
        plVar4 = *(long **)(param_1[0x47] + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *plVar4 = (long)plVar2;
        param_1[0x48] = (long)plVar4;
        plVar2 = plVar4;
      } while (lVar3 < (int)param_1[0x46]);
    }
    pvVar5 = (void *)param_1[0x49];
    *(undefined4 *)(param_1 + 0x46) = 0;
    if (pvVar5 != (void *)0x0) {
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(lVar3,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x24c) = 0;
    *(undefined8 *)((long)param_1 + 0x244) = 0;
    *(undefined8 *)((long)param_1 + 0x23c) = 0;
    *(undefined8 *)((long)param_1 + 0x234) = 0;
  }
  if (param_1[0x3837] != 0) {
    lVar3 = *(long *)puVar1;
    pvVar5 = (void *)(param_1[0x3837] + -8);
    if (lVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    param_1[0x3837] = 0;
    *(undefined4 *)(param_1 + 0x3836) = 0;
  }
  FUN_034129e0(param_1 + 0x4b);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

