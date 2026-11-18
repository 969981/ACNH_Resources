
void FUN_0321e690(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar5 = puVar4;
      *(undefined8 **)(param_1 + 0x18) = puVar5;
      puVar4 = puVar5;
    } while (lVar3 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x10) != 0) {
    pvVar6 = *(void **)(param_1 + 0x20);
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x30);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

