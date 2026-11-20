
void FUN_03ebae78(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1 = PTR_DAT_04bb2698;
  *(undefined8 *)(param_1 + 8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = *(long *)puVar1;
    pvVar4 = (void *)(*(long *)(param_1 + 0x40) + -8);
    if (lVar2 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x30);
  if (pvVar4 != (void *)0x0) {
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

