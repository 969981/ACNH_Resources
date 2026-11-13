
void FUN_01363abc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined4 *)(param_1 + 5000) = 0;
  FUN_013835c8(param_1 + 0x14c0);
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x14f8);
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
    *(undefined8 *)(param_1 + 0x14f8) = 0;
    *(undefined4 *)(param_1 + 0x1500) = 0;
  }
  *(undefined4 *)(param_1 + 0x14a0) = 0;
  *(undefined8 *)(param_1 + 0x14b0) = 0;
  FUN_0131de28(param_1 + 0x28);
  FUN_012dfad0(param_1 + 0x4750);
  FUN_012709d0(param_1 + 0x4b90);
  FUN_0136b0a0(param_1 + 0x4928);
  *(undefined1 *)(param_1 + 0x49f8) = 0;
  pvVar3 = *(void **)(param_1 + 0x4af8);
  if (pvVar3 != (void *)0x0) {
    FUN_03f457c4(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x4af8) = 0;
  }
  return;
}

