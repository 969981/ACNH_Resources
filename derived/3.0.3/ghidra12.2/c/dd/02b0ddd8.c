
void FUN_02b0ddd8(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    pvVar4 = (void *)(lVar3 + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(long *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar3 != 0) {
    pvVar4 = (void *)(lVar3 + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(long *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_03ebae78(param_1 + 0xb8);
  return;
}

