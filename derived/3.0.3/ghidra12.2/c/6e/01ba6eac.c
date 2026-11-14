
void FUN_01ba6eac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0x10);
  if (pvVar4 != (void *)0x0) {
    FUN_01ba80e0(pvVar4);
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
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  pvVar4 = *(void **)(param_1 + 8);
  if (pvVar4 != (void *)0x0) {
    FUN_01ba7f80(pvVar4);
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
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

