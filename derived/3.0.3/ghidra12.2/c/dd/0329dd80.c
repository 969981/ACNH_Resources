
void FUN_0329dd80(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  (**(code **)(*param_1 + 0x30))();
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[2];
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_1[5] != 0) {
    FUN_032d3e80();
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    FUN_0328d830();
    plVar2 = (long *)param_1[6];
    param_1[6] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (param_1[3] != 0) {
    FUN_032d1384();
    pvVar3 = (void *)param_1[3];
    param_1[3] = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_032d0688(pvVar3);
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
  }
  param_1[4] = 0;
  return;
}

