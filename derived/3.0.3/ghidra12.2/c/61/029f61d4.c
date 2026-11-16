
void FUN_029f61d4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined8 *)(param_1 + 0x19cc) = 0;
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x19b8) != 0) {
    pvVar3 = (void *)(*(long *)(param_1 + 0x19b8) + -0x10);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined4 *)(param_1 + 0x19b0) = 0;
  }
  *(undefined8 *)(param_1 + 0x5c) = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    pvVar3 = (void *)(*(long *)(param_1 + 0x48) + -0x10);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

