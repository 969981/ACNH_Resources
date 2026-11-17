
void FUN_02dc125c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x220) != 0) {
    pvVar3 = (void *)(*(long *)(param_1 + 0x220) + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  if (*(long *)(param_1 + 0x1c310) != 0) {
    pvVar3 = (void *)(*(long *)(param_1 + 0x1c310) + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x1c310) = 0;
    *(undefined4 *)(param_1 + 0x1c308) = 0;
  }
  FUN_03597dbc(param_1);
  return;
}

