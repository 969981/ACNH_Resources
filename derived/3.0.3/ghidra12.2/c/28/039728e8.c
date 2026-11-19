
void FUN_039728e8(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0x98);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    lVar3 = *(long *)puVar1;
    pvVar4 = (void *)(*(long *)(param_1 + 0x88) + -8);
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0xb8);
  if (pvVar4 != (void *)0x0) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return;
}

