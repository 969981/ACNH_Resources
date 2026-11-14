
void FUN_01db63a8(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = *(void **)(param_1 + 0x28);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x30);
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
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  puVar4 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar4;
  if (((puVar3 != (undefined8 *)0x0) && ((undefined8 *)*puVar3 != (undefined8 *)0x0)) &&
     ((undefined8 *)*puVar3 == puVar4)) {
    *puVar4 = 0;
    *puVar3 = 0;
  }
  return;
}

