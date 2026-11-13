
void FUN_012e49cc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = *(void **)(param_1 + 0xf0);
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
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x1b8);
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
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  FUN_012e9958(param_1 + 0x128);
  if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) {
    return;
  }
  pvVar5 = (void *)plVar2[2];
  if (pvVar5 != (void *)0x0) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) goto LAB_012e4aec;
  }
  (**(code **)(*plVar2 + 8))();
LAB_012e4aec:
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

