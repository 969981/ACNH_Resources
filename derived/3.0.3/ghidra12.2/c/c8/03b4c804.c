
void FUN_03b4c804(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  
  if ((long *)*param_1 != (long *)0x0) {
    uVar2 = (**(code **)(*(long *)*param_1 + 0x18))();
    if ((uVar2 & 1) != 0) {
      (**(code **)(*(long *)*param_1 + 0x28))();
    }
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 8))();
    }
    *param_1 = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = (void *)param_1[1];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[1] = 0;
  }
  pvVar4 = (void *)param_1[3];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[3] = 0;
  }
  return;
}

