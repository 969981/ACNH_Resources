
void FUN_03ec5084(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_2[6];
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
    param_2[6] = 0;
    *(undefined4 *)(param_2 + 5) = 0;
  }
  pvVar3 = (void *)param_2[9];
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
    param_2[9] = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  *param_2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}

